package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AArrayReference extends PReference
{
    private PArrayRef _arrayRef_;

    public AArrayReference()
    {
    }

    public AArrayReference(
        PArrayRef _arrayRef_)
    {
        setArrayRef(_arrayRef_);

    }
    public Object clone()
    {
        return new AArrayReference(
            (PArrayRef) cloneNode(_arrayRef_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArrayReference(this);
    }

    public PArrayRef getArrayRef()
    {
        return _arrayRef_;
    }

    public void setArrayRef(PArrayRef node)
    {
        if(_arrayRef_ != null)
        {
            _arrayRef_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _arrayRef_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_arrayRef_);
    }

    void removeChild(Node child)
    {
        if(_arrayRef_ == child)
        {
            _arrayRef_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_arrayRef_ == oldChild)
        {
            setArrayRef((PArrayRef) newChild);
            return;
        }

    }
}
