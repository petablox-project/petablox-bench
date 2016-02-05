package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TInterfaceinvoke extends Token
{
    public TInterfaceinvoke()
    {
        super.setText("interfaceinvoke");
    }

    public TInterfaceinvoke(int line, int pos)
    {
        super.setText("interfaceinvoke");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TInterfaceinvoke(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTInterfaceinvoke(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TInterfaceinvoke text.");
    }
}
