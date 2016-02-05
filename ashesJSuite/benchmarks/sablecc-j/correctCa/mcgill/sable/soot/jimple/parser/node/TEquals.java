package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TEquals extends Token
{
    public TEquals()
    {
        super.setText("=");
    }

    public TEquals(int line, int pos)
    {
        super.setText("=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TEquals(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTEquals(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TEquals text.");
    }
}
