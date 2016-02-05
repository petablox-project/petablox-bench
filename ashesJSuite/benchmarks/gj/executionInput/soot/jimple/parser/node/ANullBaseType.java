/* This file was generated by SableCC (http://www.sable.mcgill.ca/sablecc/). */

package soot.jimple.parser.node;

import java.util.*;
import soot.jimple.parser.analysis.*;

public final class ANullBaseType extends PBaseType
{
    private TNullType _nullType_;

    public ANullBaseType()
    {
    }

    public ANullBaseType(
        TNullType _nullType_)
    {
        setNullType(_nullType_);

    }
    public Object clone()
    {
        return new ANullBaseType(
            (TNullType) cloneNode(_nullType_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANullBaseType(this);
    }

    public TNullType getNullType()
    {
        return _nullType_;
    }

    public void setNullType(TNullType node)
    {
        if(_nullType_ != null)
        {
            _nullType_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _nullType_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_nullType_);
    }

    void removeChild(Node child)
    {
        if(_nullType_ == child)
        {
            _nullType_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_nullType_ == oldChild)
        {
            setNullType((TNullType) newChild);
            return;
        }

    }
}
