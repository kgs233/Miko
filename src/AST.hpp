#ifndef MIKO_AST_HPP
#define MIKO_AST_HPP

#include "token.hpp"
#include <queue>
#include <string>
#include <vector>
#include <map>

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
    AST_TYPE_BINARY_EXP,
};

class ASTNode
{
public:
    ASTNode* Parent;
    ASTNodeType Type;

    int StartLine, EndLine,
        StartColumn, EndColumn;
};

class RootASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_ROOT;
    std::vector<ASTNode*> ASTree;

    RootASTNode();
};

class StmASTNode : public ASTNode
{
public:
    ASTNode Body;

    StmASTNode(ASTNode body);
};

class IdentifierASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_IDENTIFIER;
    std::string Name;
    ASTNode *Value;

    IdentifierASTNode(std::string name, ASTNode* value);
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

class BinaryASTNode : public ASTNode
{
public:
    TokenType Op;
    ASTNode *LHS, *RHS;

    BinaryASTNode(TokenType op, ASTNode* lhs, ASTNode* rhs);
};

class UnaryASTNode : public ASTNode
{
public:
    TokenType Op;
    ASTNode* OpObject;

    UnaryASTNode(TokenType op, ASTNode* opObject);
};

class ListASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_LIST;
    std::map<std::string, IdentifierASTNode*> List;

    ListASTNode();
};

class FunctionASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_FUNCTION;
    ListASTNode* Args;
    std::queue<StmASTNode*> FunctionBody;
    IdentifierASTNode RetType;

    FunctionASTNode(ListASTNode* args, IdentifierASTNode retType);
};

class StructASTNode : public ListASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_STRUCT;
    int ObjectNum;
    std::map<std::string, IdentifierASTNode*> VarList, ConstList, FunctionList, ListList, StructList;

    StructASTNode();
};

#endif // MIKO_AST_HPP