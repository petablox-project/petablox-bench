package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TColon extends Token
{
    public TColon()
    {
        super.setText(":");
    }

    public TColon(int line, int pos)
    {
        super.setText(":");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TColon(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTColon(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TColon text.");
    }
}
