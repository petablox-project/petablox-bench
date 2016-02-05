package wig.node;

import ca.mcgill.sable.util.*;

public class NodeCast implements Cast
{
    public final static NodeCast instance = new NodeCast();

    private NodeCast()
    {
    }

    public Object cast(Object o)
    {
        return (Node) o;
    }
}
