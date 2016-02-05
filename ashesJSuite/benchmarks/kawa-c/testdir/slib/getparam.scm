;;; "getparam.scm" convert getopt to passing parameters by name.
; Copyright 1995, 1996, 1997 Aubrey Jaffer
;
;Permission to copy this software, to redistribute it, and to use it
;for any purpose is granted, subject to the following restrictions and
;understandings.
;
;1.  Any copy made of this software must include this copyright notice
;in full.
;
;2.  I have made no warrantee or representation that the operation of
;this software will be error-free, and I am under no obligation to
;provide any services, by way of maintenance, update, or otherwise.
;
;3.  In conjunction with products arising from the use of this
;material, there shall be no use of my name in any advertising,
;promotional, or sales literature without prior written consent in
;each case.

(require 'getopt)

(define (getopt->parameter-list argc argv optnames arities types aliases)
  (define (can-take-arg? opt)
    (not (eq? (list-ref arities (position opt optnames))
	      'boolean)))
  (define (coerce-val val curopt)
    (define ntyp (list-ref types (position curopt optnames)))
    (case ntyp
      ((expression) val)
      (else (coerce val ntyp))))
  (let ((starting-optind *optind*)
	(optlist '())
	(long-opt-list '())
	(optstring #f)
	(parameter-list (make-parameter-list optnames))
	(curopt '*unclaimed-argument*))
    (set! aliases (map (lambda (alias)
			 (define str (string-copy (car alias)))
			 (do ((i (+ -1 (string-length str)) (+ -1 i)))
			     ((negative? i) (cons str (cdr alias)))
			   (cond ((char=? #\ (string-ref str i))
				  (string-set! str i #\-)))))
		       aliases))
    (for-each
     (lambda (alias)
       (define opt (car alias))
       (cond ((not (string? opt)))
	     ((< 1 (string-length opt))
	      (set! long-opt-list (cons opt long-opt-list)))
	     ((not (= 1 (string-length opt))))
	     ((can-take-arg? (cadr alias))
	      (set! optlist (cons (string-ref opt 0)
				  (cons #\: optlist))))
	     (else (set! optlist (cons (string-ref opt 0) optlist)))))
     aliases)
    (set! optstring (list->string (cons #\: optlist)))
    (let loop ()
      (let ((opt (getopt-- argc argv optstring)))
	(case opt
	  ((#\: #\?)
	   (parameter-list->getopt-usage (list-ref argv (+ -1 starting-optind))
					 optnames arities types aliases)
	   (slib:error 'getopt->parameter-list
		       (case opt
			 ((#\:) "argument missing after")
			 ((#\?) "unrecognized option"))
		       (string #\- getopt:opt)))
	  ((#f)
	   (cond ((and (< *optind* argc)
		       (string=? "-" (list-ref argv *optind*)))
		  (set! *optind* (+ 1 *optind*)))
		 ((< *optind* argc)
		  (cond ((and (member curopt optnames)
			      (adjoin-parameters!
			       parameter-list
			       (list curopt
				     (coerce-val (list-ref argv *optind*)
						 curopt))))
			 (set! *optind* (+ 1 *optind*))
			 (loop))
			(else (slib:error 'getopt->parameter-list curopt
					  (list-ref argv *optind*)
					  "not supported"))))))
	  (else
	   (cond ((char? opt) (set! opt (string opt))))
	   (let ((topt (assoc opt aliases)))
	     (cond (topt (set! topt (cadr topt)))
		   (else (slib:error "Option not recognized -" opt)))
	     (cond
	      ((not (can-take-arg? topt))
	       (adjoin-parameters! parameter-list (list topt #t)))
	      (*optarg*
	       (set! curopt topt)
	       (adjoin-parameters! parameter-list
				   (list topt (coerce-val *optarg* curopt))))
	      (else
	       (set! curopt topt)
;;;	       (slib:warn 'getopt->parameter-list
;;;			  "= missing for option--" opt)
	       )))
	   (loop)))))
    parameter-list))

(define (parameter-list->getopt-usage comname optnames arities types aliases)
  (require 'printf)
  (require 'common-list-functions)
  (let ((aliast (map list optnames))
	(strlen=1? (lambda (s) (= 1 (string-length s))))
	(cep (current-error-port)))
    (for-each (lambda (alias)
		(let ((apr (assq (cadr alias) aliast)))
		  (set-cdr! apr (cons (car alias) (cdr apr)))))
	      aliases)
    (fprintf cep "Usage: %s [OPTION ARGUMENT ...] ..." comname)
    (newline cep) (newline cep)
    (for-each
     (lambda (optname arity aliat)
       (let loop ((initials (remove-if-not strlen=1? (cdr aliat)))
		  (longname (remove-if strlen=1? (cdr aliat))))
	 (cond ((and (null? initials) (null? longname)))
	       (else (fprintf cep
			      (case arity
				((boolean) "  %3s %s")
				(else "  %3s %s<%s> %s"))
			      (if (null? initials)
				  ""
				  (string-append "-" (car initials)
						 (if (null? longname) " " ",")))
			      (if (null? longname)
				  "      "
				  (string-append "--" (car longname)
						 (case arity
						   ((boolean) " ")
						   (else "="))))
			      (case arity
				((boolean) "")
				(else optname))
			      (case arity
				((nary nary1) "...")
				(else "")))
		     (newline cep)
		     (loop (if (null? initials) '() (cdr initials))
			   (if (null? longname) '() (cdr longname)))))))
     optnames arities aliast)))

(define (getopt->arglist argc argv optnames positions
			 arities types defaulters checks aliases)
  (let* ((params (getopt->parameter-list
		  argc argv optnames arities types aliases))
	 (fparams (fill-empty-parameters defaulters params)))
    (and (list? params) (check-parameters checks fparams))
    (and (list? params) (parameter-list->arglist positions arities fparams))))
