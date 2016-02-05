package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TInt extends Token
{
    public TInt()
    {
        super.setText("int");
    }

    public TInt(int line, int pos)
    {
        super.setText("int");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TInt(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTInt(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TInt text.");
    }
}
