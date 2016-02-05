package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AArrayBrackets extends PArrayBrackets
{
    private TLBracket _lBracket_;
    private TRBracket _rBracket_;

    public AArrayBrackets()
    {
    }

    public AArrayBrackets(
        TLBracket _lBracket_,
        TRBracket _rBracket_)
    {
        setLBracket(_lBracket_);

        setRBracket(_rBracket_);

    }
    public Object clone()
    {
        return new AArrayBrackets(
            (TLBracket) cloneNode(_lBracket_),
            (TRBracket) cloneNode(_rBracket_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArrayBrackets(this);
    }

    public TLBracket getLBracket()
    {
        return _lBracket_;
    }

    public void setLBracket(TLBracket node)
    {
        if(_lBracket_ != null)
        {
            _lBracket_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _lBracket_ = node;
    }

    public TRBracket getRBracket()
    {
        return _rBracket_;
    }

    public void setRBracket(TRBracket node)
    {
        if(_rBracket_ != null)
        {
            _rBracket_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rBracket_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_lBracket_)
            + toString(_rBracket_);
    }

    void removeChild(Node child)
    {
        if(_lBracket_ == child)
        {
            _lBracket_ = null;
            return;
        }

        if(_rBracket_ == child)
        {
            _rBracket_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_lBracket_ == oldChild)
        {
            setLBracket((TLBracket) newChild);
            return;
        }

        if(_rBracket_ == oldChild)
        {
            setRBracket((TRBracket) newChild);
            return;
        }

    }
}
