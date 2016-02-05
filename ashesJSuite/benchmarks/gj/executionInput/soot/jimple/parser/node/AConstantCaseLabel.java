/* This file was generated by SableCC (http://www.sable.mcgill.ca/sablecc/). */

package soot.jimple.parser.node;

import java.util.*;
import soot.jimple.parser.analysis.*;

public final class AConstantCaseLabel extends PCaseLabel
{
    private TCase _case_;
    private TMinus _minus_;
    private TIntegerConstant _integerConstant_;

    public AConstantCaseLabel()
    {
    }

    public AConstantCaseLabel(
        TCase _case_,
        TMinus _minus_,
        TIntegerConstant _integerConstant_)
    {
        setCase(_case_);

        setMinus(_minus_);

        setIntegerConstant(_integerConstant_);

    }
    public Object clone()
    {
        return new AConstantCaseLabel(
            (TCase) cloneNode(_case_),
            (TMinus) cloneNode(_minus_),
            (TIntegerConstant) cloneNode(_integerConstant_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAConstantCaseLabel(this);
    }

    public TCase getCase()
    {
        return _case_;
    }

    public void setCase(TCase node)
    {
        if(_case_ != null)
        {
            _case_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _case_ = node;
    }

    public TMinus getMinus()
    {
        return _minus_;
    }

    public void setMinus(TMinus node)
    {
        if(_minus_ != null)
        {
            _minus_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _minus_ = node;
    }

    public TIntegerConstant getIntegerConstant()
    {
        return _integerConstant_;
    }

    public void setIntegerConstant(TIntegerConstant node)
    {
        if(_integerConstant_ != null)
        {
            _integerConstant_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _integerConstant_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_case_)
            + toString(_minus_)
            + toString(_integerConstant_);
    }

    void removeChild(Node child)
    {
        if(_case_ == child)
        {
            _case_ = null;
            return;
        }

        if(_minus_ == child)
        {
            _minus_ = null;
            return;
        }

        if(_integerConstant_ == child)
        {
            _integerConstant_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_case_ == oldChild)
        {
            setCase((TCase) newChild);
            return;
        }

        if(_minus_ == oldChild)
        {
            setMinus((TMinus) newChild);
            return;
        }

        if(_integerConstant_ == oldChild)
        {
            setIntegerConstant((TIntegerConstant) newChild);
            return;
        }

    }
}