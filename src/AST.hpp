#ifndef MIKO_AST_HPP
#define MIKO_AST_HPP

#include "token.hpp"

#include <llvm/IR/Module.h>
#include <map>
#include <queue>
#include <string>
#include <vector>

#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>

namespace Miko
{
    enum class ASTNodeType
    {
        AST_TYPE_ROOT,
        AST_TYPE_CHAR,
        AST_TYPE_NUMBER,
        AST_TYPE_FUNCTION,
        AST_TYPE_STRING,
        AST_TYPE_LIST,
        AST_TYPE_STRUCT,
        AST_TYPE_IDENTIFIER,

        AST_TYPE_BINARY_ADD,
        AST_TYPE_BINARY_SUB,
        AST_TYPE_BINARY_MUL,
        AST_TYPE_BINARY_DIV,
        AST_TYPE_BINARY_MOD,
        AST_TYPE_BINARY_EXP
    };

    enum class VisibilityType
    {
        VISIBILITY_TYPE_PUBLIC,
        VISIBILITY_TYPE_PRIVATE,
        VISIBILITY_TYPE_CUSTOM,
    };

    enum class VariabilityType
    {
        VARIABILITY_TYPE_VAR,
        VARIABILITY_TYPE_CONST,
    };

    class IdentifierASTNode;

    struct IdentifierVisibility
    {
        VisibilityType Type;
        std::vector<IdentifierASTNode*> VisibilityList;
    };

    class ASTNode
    {
    public:
        ASTNode* Parent;
        ASTNodeType Type;

        int StartLine, EndLine,
            StartColumn, EndColumn;

        ASTNode();

        // virtual llvm::Value* CodeGenerate();
    };

    class RootASTNode
    {
        std::string sourceName;

        llvm::LLVMContext context;
        llvm::Module* module;

    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_ROOT;
        std::vector<ASTNode*> ASTree;

        RootASTNode();
        RootASTNode(std::string sourceName);

        void CodeGenerate();

        std::string GetIR();
    };

    class OperatorASTNode : public ASTNode
    {
    };

    class UnaryASTNode : public OperatorASTNode
    {
    public:
        TokenType Op;
        ASTNode* OpObject;

        UnaryASTNode(TokenType op, ASTNode* opObject);
    };

    class BinaryASTNode : public OperatorASTNode
    {
    public:
        TokenType Op;
        ASTNode *LHS, *RHS;

        BinaryASTNode(TokenType op, ASTNode* lhs, ASTNode* rhs);
    };

    class StatementASTNode : public ASTNode
    {
    public:
        StatementASTNode(ASTNode body);
    };
    class StatementBlockASTNode : public ASTNode
    {
    public:
        std::vector<StatementASTNode*> Statements;
    };

    class IfStatementASTNode : public StatementASTNode
    {
    public:
        BinaryASTNode Conditional;
        StatementBlockASTNode TrueBlock;
        StatementBlockASTNode ElseBlock;
    };

    class MatchStatementASTNode : public StatementASTNode
    {
        IdentifierASTNode* Target;
        std::vector<IdentifierASTNode*> Cases;
    };

    class MatchIfStatementASTNode : public StatementASTNode
    {
        IdentifierASTNode* Target;
        std::vector<BinaryASTNode> Conditionals;
    };

    class WhileStatementASTNode : public StatementASTNode
    {
        BinaryASTNode Conditional;
        StatementBlockASTNode Block;
    };

    class ForStatementASTNode : public StatementASTNode
    {
        std::vector<IdentifierASTNode> Variables;
        std::vector<BinaryASTNode> Conditional;
        StatementBlockASTNode ErgodicBlock;
    };

    class IdentifierNameASTNode;
    class IdentifierASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_IDENTIFIER;
        std::string Name;
        IdentifierVisibility Visibility;
        VariabilityType Variability;
        bool Static;
        ASTNode* Value;

        IdentifierASTNode(std::string name, ASTNode* value);
    };
    class DeclareIdentifierASTNode : public ASTNode
    {
        IdentifierASTNode* Parent;
    };

    class IdentifierNameASTNode : public ASTNode
    {
    public:
        std::vector<IdentifierASTNode*> Parents;
        std::string Name;
    };

    class CharASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_CHAR;
        char Val;

        CharASTNode(char val);
    };

    class NumberASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_NUMBER;
        long long Val;

        NumberASTNode(double val);
    };

    class FloatASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_NUMBER;
        int Integer, Decimal;
        double Full;

        FloatASTNode(int integer, int decimal);
    };

    class ExprASTNode : public ASTNode
    {
    public:
        OperatorASTNode* RootOp;

        ExprASTNode(OperatorASTNode* rootOp);
    };

    class ListASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_LIST;
        int MemberNum;
        std::vector<IdentifierASTNode*> List;

        void AddNode(IdentifierASTNode* Node);

        ListASTNode();
    };

    class FunctionASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_FUNCTION;
        ListASTNode* Args;
        std::queue<ASTNode*> FunctionBody;
        IdentifierASTNode* RetType;
    };

    class StructASTNode : public ASTNode
    {
    public:
        ASTNodeType Type = ASTNodeType::AST_TYPE_STRUCT;
        int MemberNum;
        std::map<std::string, IdentifierASTNode*> MemberMap;

        void AddNode(IdentifierASTNode* node);
        void AddNodeInList(ListASTNode* list);

        StructASTNode();
        StructASTNode(ListASTNode* listNode);
        StructASTNode(StructASTNode* structNode);
    };

}

#endif // MIKO_AST_HPP