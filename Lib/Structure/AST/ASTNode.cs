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

    public abstract class IdentifierNode : ASTNode, IMainNode
    {
        public enum Visibility
        {
            Public,
            Private,
            Auto,
            Dynamic,
        }

        public ASTNodeType MainNodeType => ASTNodeType.Identifier;
        public string Name;
        public Visibility VisibilityType;
        public IdentifierNode(IASTNode? parent, ASTNodeType type, Visibility visibilityType, string name, int line, int column) : base(parent, type, line, column)
        {
            Name = name;
            VisibilityType = visibilityType;
        }
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

    public abstract class BlockNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Block;
        public List<StatementNode>? StatementList;
        public BlockNode(IdentifierNode parent, ASTNodeType type, int line, int column) : base(parent, type, line, column)
        {
        }
    }

    public class VariableNode : IdentifierNode
    {
        public ASTNode Body;
        public VariableNode(StructureNode parent, Visibility visibilityType, ASTNode body, string name, int line, int column) : base(parent, ASTNodeType.VariableIdentifier, visibilityType, name, line, column)
        {
            Body = body;
        }
    }

    public class ConstantNode : IdentifierNode, IMainNode
    {
        public ASTNode Body;
        public ConstantNode(StructureNode parent, Visibility visibilityType, ASTNode body, string name, int line, int column) : base(parent, ASTNodeType.ConstantIdentifier, visibilityType, name, line, column)
        {
            Body = body;
        }
    }

    public class FunctionNode : ConstantNode
    {
        public new ASTNodeType MainNodeType => ASTNodeType.ConstantIdentifier;
        public ListNode? Parameters;

        public FunctionNode(StructureNode parent, Visibility visibilityType, BlockNode body, string name, int line, int column) : base(parent, visibilityType, body, name, line, column)
        {
            this.Type = ASTNodeType.FunctionIdentifier;
        }
    }

    public class ListNode : ASTNode
    {
        public List<IdentifierNode>? MemberList;
        public ListNode(IdentifierNode parent, ASTNodeType type, int line, int column) : base(parent, type, line, column)
        {}

    }

    public class StructureNode : BlockNode
    {
        public List<VariableNode>? VariableList;
        public List<ConstantNode>? ConstantList;
        public List<FunctionNode>? FunctionList;
        public StructureNode(IdentifierNode parent, int line, int column) : base(parent, ASTNodeType.Structure, line, column)
        {

        }
    }

    public abstract class ExpressionNode : ASTNode, IMainNode
    {
        public ASTNodeType MainNodeType => ASTNodeType.Expression;
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