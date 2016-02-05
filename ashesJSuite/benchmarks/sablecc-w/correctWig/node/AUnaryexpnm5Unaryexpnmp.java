package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexpnm5Unaryexpnmp extends PUnaryexpnmp
{
    private TSystem _system_;
    private TLeftBrack _leftBrack_;
    private PExpp _expp_;
    private TRightBrack _rightBrack_;

    public AUnaryexpnm5Unaryexpnmp()
    {
    }

    public AUnaryexpnm5Unaryexpnmp(
        TSystem _system_,
        TLeftBrack _leftBrack_,
        PExpp _expp_,
        TRightBrack _rightBrack_)
    {
        setSystem(_system_);

        setLeftBrack(_leftBrack_);

        setExpp(_expp_);

        setRightBrack(_rightBrack_);

    }
    public Object clone()
    {
        return new AUnaryexpnm5Unaryexpnmp(
            (TSystem) cloneNode(_system_),
            (TLeftBrack) cloneNode(_leftBrack_),
            (PExpp) cloneNode(_expp_),
            (TRightBrack) cloneNode(_rightBrack_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexpnm5Unaryexpnmp(this);
    }

    public TSystem getSystem()
    {
        return _system_;
    }

    public void setSystem(TSystem node)
    {
        if(_system_ != null)
        {
            _system_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _system_ = node;
    }

    public TLeftBrack getLeftBrack()
    {
        return _leftBrack_;
    }

    public void setLeftBrack(TLeftBrack node)
    {
        if(_leftBrack_ != null)
        {
            _leftBrack_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _leftBrack_ = node;
    }

    public PExpp getExpp()
    {
        return _expp_;
    }

    public void setExpp(PExpp node)
    {
        if(_expp_ != null)
        {
            _expp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _expp_ = node;
    }

    public TRightBrack getRightBrack()
    {
        return _rightBrack_;
    }

    public void setRightBrack(TRightBrack node)
    {
        if(_rightBrack_ != null)
        {
            _rightBrack_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rightBrack_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_system_)
            + toString(_leftBrack_)
            + toString(_expp_)
            + toString(_rightBrack_);
    }

    void removeChild(Node child)
    {
        if(_system_ == child)
        {
            _system_ = null;
            return;
        }

        if(_leftBrack_ == child)
        {
            _leftBrack_ = null;
            return;
        }

        if(_expp_ == child)
        {
            _expp_ = null;
            return;
        }

        if(_rightBrack_ == child)
        {
            _rightBrack_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_system_ == oldChild)
        {
            setSystem((TSystem) newChild);
            return;
        }

        if(_leftBrack_ == oldChild)
        {
            setLeftBrack((TLeftBrack) newChild);
            return;
        }

        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
            return;
        }

        if(_rightBrack_ == oldChild)
        {
            setRightBrack((TRightBrack) newChild);
            return;
        }

    }
}
