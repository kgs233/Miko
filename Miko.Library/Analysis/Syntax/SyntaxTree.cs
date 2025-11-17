using System;

namespace Miko.Library.Analysis.Syntax;

public class SyntaxTree
{
    public Source.Source Source { get; init; }
    public SyntaxTree(Source.Source source)
    {
        Source = source;
    }
}
