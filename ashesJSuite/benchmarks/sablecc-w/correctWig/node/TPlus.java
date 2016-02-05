package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TPlus extends Token
{
    public TPlus()
    {
        super.setText("+");
    }

    public TPlus(int line, int pos)
    {
        super.setText("+");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TPlus(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTPlus(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TPlus text.");
    }
}
