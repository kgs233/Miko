using System.Text;
using Miko.Library.Analysis.Syntax;

namespace Miko.Library.Analysis.Syntax.Type;

public enum TypeKind
{
    Array,
    Nullable,
    Tuple,
    Function,
    Inside,
    Asm,
    Struct,
    CallVar,
    CallFunction
}

public abstract class TypeSyntaxNode : SyntaxNode
{
    protected byte[]? hash { get; set; }

    public TypeKind Kind { get; init; }

    protected TypeSyntaxNode(
        SyntaxNode[] childrens,
        TypeKind kind,
        long line, long column)
            : base(childrens, line, column)
    {
        Kind = kind;
    }

    public string GetTypeHashString()
    {
        byte[] hashBytes = GetTypeHash();
        StringBuilder builder = new StringBuilder();
        foreach (byte b in hashBytes)
        {
            builder.Append(b.ToString("x2"));
        }
        return builder.ToString();
    }

    public byte[] GetTypeHash()
    {
        if (hash != null)
        {
            return hash;
        }
        else
        {
            hash = Utility.HashString(GetTypeNameString());
        }
        return hash;
    }
    
    public abstract string GetTypeNameString();
}
