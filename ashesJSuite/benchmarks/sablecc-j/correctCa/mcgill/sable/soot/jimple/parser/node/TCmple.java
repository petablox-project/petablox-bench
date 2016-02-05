package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TCmple extends Token
{
    public TCmple()
    {
        super.setText("<=");
    }

    public TCmple(int line, int pos)
    {
        super.setText("<=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCmple(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCmple(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TCmple text.");
    }
}
