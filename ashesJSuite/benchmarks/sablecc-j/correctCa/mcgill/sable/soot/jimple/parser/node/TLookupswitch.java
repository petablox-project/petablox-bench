package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TLookupswitch extends Token
{
    public TLookupswitch()
    {
        super.setText("lookupswitch");
    }

    public TLookupswitch(int line, int pos)
    {
        super.setText("lookupswitch");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLookupswitch(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLookupswitch(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLookupswitch text.");
    }
}