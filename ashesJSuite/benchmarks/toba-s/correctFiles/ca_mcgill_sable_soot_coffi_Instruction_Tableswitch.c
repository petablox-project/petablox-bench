/*  ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.c -- from Java class ca.mcgill.sable.soot.coffi.Instruction_Tableswitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "java_lang_Cloneable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_ByteCode.h"
#include "java_io_PrintStream.h"
#include "java_lang_Integer.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_java_lang_Cloneable.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_ByteCode.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[];
extern const void *st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[];
extern Class xt_init__QHszp[];
extern Class xt_toString_ac_UFqtL[];
extern Class xt_parse_abi_Y8Z4p[];
extern Class xt_nextOffset_i_OYBgy[];
extern Class xt_compile_abi_amEj8[];
extern Class xt_offsetToPointer_B_pJL5C[];
extern Class xt_branchpoints_I_ugJCA[];

#define HASHMASK 0x0
/*  0.  c2aafd4e  (0)  equals  */
static const struct ihash htable[2] = {
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(50) nmchars = {&acl_char, 0, 50, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','s','t','r','u','c','t','i',
'o','n','_','T','a','b','l','e','s','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 50 };
static const Char nmiv_0[] = {
'c','o','d','e'};
static const Char sgiv_0[] = {
'B'};
static const Char nmiv_1[] = {
'l','a','b','e','l'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'n','a','m','e'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_3[] = {
'n','e','x','t'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_4[] = {
'l','a','b','e','l','l','e','d'};
static const Char sgiv_4[] = {
'Z'};
static const Char nmiv_5[] = {
'b','r','a','n','c','h','e','s'};
static const Char sgiv_5[] = {
'Z'};
static const Char nmiv_6[] = {
'c','a','l','l','s'};
static const Char sgiv_6[] = {
'Z'};
static const Char nmiv_7[] = {
'r','e','t','u','r','n','s'};
static const Char sgiv_7[] = {
'Z'};
static const Char nmiv_8[] = {
'o','r','i','g','i','n','a','l','I','n','d','e','x'};
static const Char sgiv_8[] = {
'I'};
static const Char nmiv_9[] = {
'p','a','d'};
static const Char sgiv_9[] = {
'B'};
static const Char nmiv_10[] = {
'd','e','f','a','u','l','t','_','o','f','f','s','e','t'};
static const Char sgiv_10[] = {
'I'};
static const Char nmiv_11[] = {
'l','o','w'};
static const Char sgiv_11[] = {
'I'};
static const Char nmiv_12[] = {
'h','i','g','h'};
static const Char sgiv_12[] = {
'I'};
static const Char nmiv_13[] = {
'j','u','m','p','_','o','f','f','s','e','t','s'};
static const Char sgiv_13[] = {
'[','I'};
static const Char nmiv_14[] = {
'd','e','f','a','u','l','t','_','i','n','s','t'};
static const Char sgiv_14[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_15[] = {
'j','u','m','p','_','i','n','s','t','s'};
static const Char sgiv_15[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';'};
static const Char nmim_0[] = {
'<','i','n','i','t','>'};
static const Char sgim_0[] = {
'(',')','V'};
static const Char nmim_1[] = {
'c','l','o','n','e'};
static const Char sgim_1[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_2[] = {
'e','q','u','a','l','s'};
static const Char sgim_2[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_3[] = {
'f','i','n','a','l','i','z','e'};
static const Char sgim_3[] = {
'(',')','V'};
static const Char nmim_4[] = {
'g','e','t','C','l','a','s','s'};
static const Char sgim_4[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','C','l','a','s','s',
';'};
static const Char nmim_5[] = {
'h','a','s','h','C','o','d','e'};
static const Char sgim_5[] = {
'(',')','I'};
static const Char nmim_6[] = {
'n','o','t','i','f','y'};
static const Char sgim_6[] = {
'(',')','V'};
static const Char nmim_7[] = {
'n','o','t','i','f','y','A','l','l'};
static const Char sgim_7[] = {
'(',')','V'};
static const Char nmim_8[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_8[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_9[] = {
'w','a','i','t'};
static const Char sgim_9[] = {
'(',')','V'};
static const Char nmim_10[] = {
'w','a','i','t'};
static const Char sgim_10[] = {
'(','J',')','V'};
static const Char nmim_11[] = {
'w','a','i','t'};
static const Char sgim_11[] = {
'(','J','I',')','V'};
static const Char nmim_12[] = {
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','B',')','V'};
static const Char nmim_13[] = {
'p','a','r','s','e'};
static const Char sgim_13[] = {
'(','[','B','I',')','I'};
static const Char nmim_14[] = {
'c','o','m','p','i','l','e'};
static const Char sgim_14[] = {
'(','[','B','I',')','I'};
static const Char nmim_15[] = {
'o','f','f','s','e','t','T','o','P','o','i','n','t','e','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','y','t','e','C','o','d',
'e',';',')','V'};
static const Char nmim_16[] = {
'n','e','x','t','O','f','f','s','e','t'};
static const Char sgim_16[] = {
'(','I',')','I'};
static const Char nmim_17[] = {
'b','r','a','n','c','h','p','o','i','n','t','s'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','[','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I',
'n','s','t','r','u','c','t','i','o','n',';'};
static const Char nmim_18[] = {
'm','a','r','k','C','P','R','e','f','s'};
static const Char sgim_18[] = {
'(','[','Z',')','V'};
static const Char nmim_19[] = {
'r','e','d','i','r','e','c','t','C','P','R','e','f','s'};
static const Char sgim_19[] = {
'(','[','S',')','V'};
static const Char nmim_20[] = {
'e','q','u','a','l','s'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','Z'};
static const Char nmim_21[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_21[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, code), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,1,0,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, label), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,1,0,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, name), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,18,0,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, next), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,40,0,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, labelled), 0,(const Char *)&nmiv_4,8,(const Char *)&sgiv_4,1,0,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, branches), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,1,0,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, calls), 0,(const Char *)&nmiv_6,5,(const Char *)&sgiv_6,1,0,0x1,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, returns), 0,(const Char *)&nmiv_7,7,(const Char *)&sgiv_7,1,0,0x1,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, originalIndex), 0,(const Char *)&nmiv_8,13,(const Char *)&sgiv_8,1,0,0x0,10}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, pad), 0,(const Char *)&nmiv_9,3,(const Char *)&sgiv_9,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, default_offset), 0,(const Char *)&nmiv_10,14,(const Char *)&sgiv_10,1,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, low), 0,(const Char *)&nmiv_11,3,(const Char *)&sgiv_11,1,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, high), 0,(const Char *)&nmiv_12,4,(const Char *)&sgiv_12,1,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, jump_offsets), 0,(const Char *)&nmiv_13,12,(const Char *)&sgiv_13,2,1,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, default_inst), 0,(const Char *)&nmiv_14,12,(const Char *)&sgiv_14,40,1,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch, jump_insts), 0,(const Char *)&nmiv_15,10,(const Char *)&sgiv_15,41,1,0x1,6}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch),
    22,
    0,
    16,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch,
    st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch,
    0,
    init__QHszp,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__QHszp,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__QHszp},
	{TMIT_native_code, clone__C5Kdq,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x4,1,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__P84mQ,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x1,10,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__dkN89,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,2,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_b_xOkBJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,4,0,0x1,0,0},
	{TMIT_native_code, parse_abi_Y8Z4p,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,6,1,0x1,2,xt_parse_abi_Y8Z4p},
	{TMIT_native_code, compile_abi_amEj8,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,6,1,0x1,4,xt_compile_abi_amEj8},
	{TMIT_native_code, offsetToPointer_B_pJL5C,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,40,1,0x1,5,xt_offsetToPointer_B_pJL5C},
	{TMIT_native_code, nextOffset_i_OYBgy,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,4,1,0x1,3,xt_nextOffset_i_OYBgy},
	{TMIT_native_code, branchpoints_I_ugJCA,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,83,1,0x1,6,xt_branchpoints_I_ugJCA},
	{TMIT_native_code, markCPRefs_az_4cO9Q,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,5,0,0x1,8,0},
	{TMIT_native_code, redirectCPRefs_as_4OU8w,(const Char *)&nmim_19,14,
	(const Char *)&sgim_19,5,0,0x1,9,0},
	{TMIT_native_code, equals_I_LuRCj,(const Char *)&nmim_20,6,
	(const Char *)&sgim_20,43,0,0x1,11,0},
	{TMIT_native_code, toString_ac_UFqtL,(const Char *)&nmim_21,8,
	(const Char *)&sgim_21,57,1,0x1,1,xt_toString_ac_UFqtL},
    } /* end of methodsigs */
};


/*M init__QHszp: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.<init>()V */

Class xt_init__QHszp[] = { 0 };

Void init__QHszp(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	i2 = -86;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_b_xOkBJ(a1,i2);
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->name = a2;
	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->branches = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_ac_UFqtL: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.toString([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toString_ac_UFqtL[] = { 0 };

Object toString_ac_UFqtL(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = toString_ac_9JP2g(a3,a4);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->pad;
	a2 = toString_i_Uv8XM(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->default_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	a2 = toString_i_Uv8XM(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->low;
	a2 = toString_i_Uv8XM(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a2 = toString_i_Uv8XM(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(149,L2);

L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->jump_insts;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	a2 = toString_i_Uv8XM(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 < i2)
		GOBACK(207,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parse_abi_Y8Z4p: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.parse([BI)I */

Class xt_parse_abi_Y8Z4p[] = { 0 };

Int parse_abi_Y8Z4p(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2, iv3, iv4, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	i1 = iv2;
	iv5 = i1;
	i1 = iv2;
	i2 = 4;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	iv3 = i1;
	i1 = iv3;
	if (i1 == 0)
		GOTO(8,L1);
	a1 = av0;
	i2 = 4;
	i3 = iv3;
	i2 = i2 - i3;
	i2 = (Byte)i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->pad = i2;
	GOTO(19,L2);

L1:	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->pad = i2;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->pad;
	i1 = i1 + i2;
	iv2 = i1;
	a1 = av0;
	a2 = av1;
	i3 = iv2;
	i2 = getInt_abi_HPXjS(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_offset = i2;
	iv2 += 4;
	a1 = av0;
	a2 = av1;
	i3 = iv2;
	i2 = getInt_abi_HPXjS(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->low = i2;
	iv2 += 4;
	a1 = av0;
	a2 = av1;
	i3 = iv2;
	i2 = getInt_abi_HPXjS(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high = i2;
	iv2 += 4;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->low;
	i1 = i1 - i2;
	i2 = 1;
	i1 = i1 + i2;
	iv3 = i1;
	i1 = iv3;
	if (i1 <= 0)
		GOTO(83,L4);
	a1 = av0;
	i2 = iv3;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_offsets = a2;
	i1 = 0;
	iv4 = i1;
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_offsets;
	i2 = iv4;
	a3 = av1;
	i4 = iv2;
	i3 = getInt_abi_HPXjS(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv2 += 4;
	iv4 += 1;
	i1 = iv4;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(117,L3);
L4:	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M nextOffset_i_OYBgy: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.nextOffset(I)I */

Class xt_nextOffset_i_OYBgy[] = { 0 };

Int nextOffset_i_OYBgy(Object p0, Int p1)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = 0;
	iv4 = i1;
	i1 = iv1;
	iv3 = i1;
	i1 = iv1;
	i2 = 1;
	i1 = i1 + i2;
	i2 = 4;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	iv2 = i1;
	i1 = iv2;
	if (i1 == 0)
		GOTO(12,L1);
	i1 = 4;
	i2 = iv2;
	i1 = i1 - i2;
	iv4 = i1;
L1:	i1 = iv1;
	i2 = iv4;
	i1 = i1 + i2;
	i2 = 13;
	i1 = i1 + i2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	i3 = 4;
	i2 = i2 * i3;
	i1 = i1 + i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M compile_abi_amEj8: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.compile([BI)I */

Class xt_compile_abi_amEj8[] = { 0 };

Int compile_abi_amEj8(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2, iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->code;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	i1 = 0;
	iv3 = i1;
	GOTO(12,L2);

L1:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->pad;
	if (i1 < i2)
		GOBACK(30,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst;
	if (a1 == 0)
		GOTO(37,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	i1 = i1 - i2;
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
	GOTO(58,L4);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_offset;
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->low;
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high;
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
	i1 = 0;
	iv3 = i1;
	GOTO(93,L8);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (a1 == 0)
		GOTO(102,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	i1 = i1 - i2;
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
	GOTO(125,L7);

L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_offsets;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	i3 = iv2;
	i1 = intToBytes_iabi_GBHJj(i1,a2,i3);
	iv2 = i1;
L7:	iv3 += 1;
L8:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	if (i1 <= i2)
		GOBACK(153,L5);
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M offsetToPointer_B_pJL5C: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.offsetToPointer(Lca/mcgill/sable/soot/coffi/ByteCode;)V */

Class xt_offsetToPointer_B_pJL5C[] = { 0 };

Void offsetToPointer_B_pJL5C(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->default_offset;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a4)->label;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->class->M.
		locateInst_i_e7Dnc.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst;
	if (a1 != 0)
		GOTO(21,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[8];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->label;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a4)->default_offset;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	GOTO(62,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->low;
	i1 = i1 - i2;
	i2 = 1;
	i1 = i1 + i2;
	if (i1 <= 0)
		GOTO(84,L7);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_Instruction.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts = a2;
	i1 = 0;
	iv2 = i1;
	GOTO(107,L6);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv2;
	a3 = av1;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a4)->jump_offsets;
	i5 = iv2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a5)->label;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a3)->class->M.
		locateInst_i_e7Dnc.f(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (a1 != 0)
		GOTO(137,L4);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[8];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->label;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a4)->jump_offsets;
	i5 = iv2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	GOTO(180,L5);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L5:	iv2 += 1;
L6:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 < i2)
		GOBACK(208,L3);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M branchpoints_I_ugJCA: ca.mcgill.sable.soot.coffi.Instruction_Tableswitch.branchpoints(Lca/mcgill/sable/soot/coffi/Instruction;)[Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_branchpoints_I_ugJCA[] = { 0 };

Object branchpoints_I_ugJCA(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->low;
	i1 = i1 - i2;
	i2 = 2;
	i1 = i1 + i2;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_coffi_Instruction.C,i1);
	av2 = a1;
	a1 = av2;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	i1 = 1;
	iv3 = i1;
	GOTO(24,L2);

L1:	a1 = av2;
	i2 = iv3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->jump_insts;
	i4 = iv3;
	i5 = 1;
	i4 = i4 - i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 2;
	i2 = i2 + i3;
	if (i1 < i2)
		GOBACK(53,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','s','t','r','u','c','t','i',
'o','n','_','T','a','b','l','e','s','w','i','t','c','h','t','a','b','l',
'e','s','w','i','t','c','h',' ','(',')','l','a','b','e','l','_',':',' ',
'W','a','r','n','i','n','g',':',' ','c','a','n',39,'t',' ','l','o','c',
'a','t','e',' ','t','a','r','g','e','t',' ','o','f',' ','i','n','s','t',
'r','u','c','t','i','o','n',' ','w','h','i','c','h',' ','s','h','o','u',
'l','d',' ','b','e',' ','a','t',' ','b','y','t','e',' ','a','d','d','r',
'e','s','s',' '};

const void *st_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch[] = {
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+50,	/* 0. ca.mcgill.sable.soot.coffi.Instruction_T */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+61,	/* 1. tableswitch */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+62,	/* 2.   */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+63,	/* 3. ( */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+64,	/* 4. ) */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+70,	/* 5. label_ */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+72,	/* 6. :  */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+115,	/* 7. Warning: can't locate target of instruct */
    ch_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch+148,	/* 8.  which should be at byte address  */
    0};
