package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class X2PArrayBrackets extends XPArrayBrackets
{
    private PArrayBrackets _pArrayBrackets_;

    public X2PArrayBrackets()
    {
    }

    public X2PArrayBrackets(
        PArrayBrackets _pArrayBrackets_)
    {
        setPArrayBrackets(_pArrayBrackets_);
    }

    public Object clone()
    {
        throw new RuntimeException("Unsupported Operation");
    }

    public void apply(Switch sw)
    {
        throw new RuntimeException("Switch not supported.");
    }

    public PArrayBrackets getPArrayBrackets()
    {
        return _pArrayBrackets_;
    }

    public void setPArrayBrackets(PArrayBrackets node)
    {
        if(_pArrayBrackets_ != null)
        {
            _pArrayBrackets_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _pArrayBrackets_ = node;
    }

    void removeChild(Node child)
    {
        if(_pArrayBrackets_ == child)
        {
            _pArrayBrackets_ = null;
        }
    }

    void replaceChild(Node oldChild, Node newChild)
    {
    }

    public String toString()
    {
        return "" +
            toString(_pArrayBrackets_);
    }
}
