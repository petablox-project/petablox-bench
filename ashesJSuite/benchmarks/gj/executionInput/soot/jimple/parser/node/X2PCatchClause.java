/* This file was generated by SableCC (http://www.sable.mcgill.ca/sablecc/). */

package soot.jimple.parser.node;

import soot.jimple.parser.analysis.*;

public final class X2PCatchClause extends XPCatchClause
{
    private PCatchClause _pCatchClause_;

    public X2PCatchClause()
    {
    }

    public X2PCatchClause(
        PCatchClause _pCatchClause_)
    {
        setPCatchClause(_pCatchClause_);
    }

    public Object clone()
    {
        throw new RuntimeException("Unsupported Operation");
    }

    public void apply(Switch sw)
    {
        throw new RuntimeException("Switch not supported.");
    }

    public PCatchClause getPCatchClause()
    {
        return _pCatchClause_;
    }

    public void setPCatchClause(PCatchClause node)
    {
        if(_pCatchClause_ != null)
        {
            _pCatchClause_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _pCatchClause_ = node;
    }

    void removeChild(Node child)
    {
        if(_pCatchClause_ == child)
        {
            _pCatchClause_ = null;
        }
    }

    void replaceChild(Node oldChild, Node newChild)
    {
    }

    public String toString()
    {
        return "" +
            toString(_pCatchClause_);
    }
}