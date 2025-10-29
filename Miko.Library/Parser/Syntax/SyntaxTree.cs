using System;

namespace Miko.Library.Parser.Syntax;

public class SyntaxTree
{
    public Source.Source Source { get; init; }
    public SyntaxTree(Source.Source source)
    {
        Source = source;
    }
}
