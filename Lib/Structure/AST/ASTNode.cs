using System.Reflection;

namespace Miko.Lib.Structure
{
    public interface IASTNode
    {
        public ASTNodeType Type { get; }
    }

    public interface IMainNode : IASTNode
    {
        public ASTNodeType MainNodeType { get; }
    }

    public abstract class ASTNode : IASTNode
    {
        public int Line { get; set; }
        public int Column { get; set; }
        public IASTNode? Parent { get; protected set; }
        public ASTNodeType Type { get; protected set; }

        public ASTNode(IASTNode? parent, ASTNodeType type, int line, int column)
        {
            Parent = parent;
            Line = line;
            Column = column;
        }
    }

    public class ProgramNode : BaseStructureNode
    {
        public new ASTNodeType Type => ASTNodeType.ProgramStructure;
        public ProgramNode() : base(null, ASTNodeType.ProgramStructure, 0)
        {}
    }

    public abstract class StatementNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Statement;
        public ASTNode Body;
        public StatementNode(IASTNode parent, ASTNodeType type, ASTNode body, int line) : base(parent, type, line, 0)
        {
            Body = body;
        }
    }

    public abstract class BaseStructureNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Structure;
        public List<IdentifierNode>? IdentifierNodes { get; }
        public BaseStructureNode(IASTNode? parent, ASTNodeType type, int line) : base(parent, type, line, 0)
        {} 
    }

    public abstract class IdentifierNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Identifier;
        public readonly string Name;
        public bool Public;
        public List<ConstIdentifierNode>? AlloweStruct;
        public BaseStructureNode Body;

        public IdentifierNode(IASTNode parent, ASTNodeType type, string name, BaseStructureNode body, bool @public, int line) : this(parent, ASTNodeType.Identifier, name, body, @public, null, line)
        { }

        public IdentifierNode(IASTNode parent, ASTNodeType type, string name, BaseStructureNode body, List<ConstIdentifierNode> alloweStruct, int line) : this(parent, ASTNodeType.Identifier, name, body, false, alloweStruct, line)
        {}

        private IdentifierNode(IASTNode parent, ASTNodeType type, string name, BaseStructureNode body, bool @public, List<ConstIdentifierNode>? alloweStruct, int line) : base(parent, type, line, 0)
        {
            Name = name;
            Body = body;
            Public = @public;
            AlloweStruct = alloweStruct;
        }
    }

    public abstract class ExpressionNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Expression;
        public BaseStructureNode? Results;
        public ExpressionNode(ASTNode parent, ASTNodeType type, int line, int column) : base(parent, type, line, column)
        { }
    }

    public abstract class OperationExpressionNode : ExpressionNode, IMainNode
    {
        public new ASTNodeType MainNodeType => ASTNodeType.OperationExpression;
        public string Operation;
        public OperationExpressionNode(string operation, ASTNode parent, ASTNodeType type, int line, int column) : base(parent, type, line, column)
        {
            Operation = operation;
        }
    }

    public abstract class UnaryOperationExpressionNode : OperationExpressionNode, IMainNode
    {
        public new ASTNodeType MainNodeType => ASTNodeType.UnaryOperationExpression;
        public ASTNode OperateObject;
        public UnaryOperationExpressionNode(string operation, ASTNode operationObject, ASTNode parent, ASTNodeType type, int line, int column) : base(operation, parent, type, line, column)
        {
            OperateObject = operationObject;
        }
    }

    public abstract class BinaryOperationExpressionNode : OperationExpressionNode, IMainNode
    {
        public new ASTNodeType MainNodeType => ASTNodeType.BinaryOperationExpression;
        public ASTNode LeftObject { get; }
        public ASTNode RightObject { get; }
        public BinaryOperationExpressionNode(string operation, ASTNode leftObject, ASTNode rightObject, ASTNode parent, ASTNodeType type, int line, int column) : base(operation, parent, type, line, column)
        {
            LeftObject = leftObject;
            RightObject = rightObject;
        }
    }

    public class ConstIdentifierNode : IdentifierNode
    {
        public new readonly BaseStructureNode Body;
        public ConstIdentifierNode(ASTNode parent, string name, BaseStructureNode body, bool @public, int line) : base(parent, ASTNodeType.ConstIdentifier, name, body, @public, line)
        {
            Body = body;
        }
    }

    public class OpenExpressionNode : ExpressionNode
    {
        public string OpenName;
        public List<string> OpenNameList;

        public OpenExpressionNode(ASTNode parent, List<string> openName, int line, int column) : base(parent, ASTNodeType.OpenExpression, line, column)
        {
            OpenNameList = openName;
            OpenName = "";
            for (int i = 0; i < openName.Count; i++)
            {
                if (i != openName.Count - 1)
                {
                    OpenName += openName[i] + ".";
                }
                else
                {
                    OpenName += openName[i];
                }
            }
        }
    }
}