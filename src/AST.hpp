#ifndef MIKO_AST_HPP
#define MIKO_AST_HPP

#include "token.hpp"
#include <queue>
#include <string>
#include <vector>
#include <map>

enum class ASTNodeType
{
    Root,
    Char,
    Number,
    Float,
    Binary,
    Unary
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
    std::string Name;
    ASTNode *Value;

    IdentifierASTNode(std::string name, ASTNode* value);
};

class CharASTNode : public ASTNode
{
public:
    char Val;

    CharASTNode(char val);
};

class NumberASTNode : public ASTNode
{
public:
    long long Val;

    NumberASTNode(double val);
};

class FloatASTNode : public ASTNode
{
public:
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
    std::map<std::string, IdentifierASTNode*> List;

    ListASTNode();
};

class FunctionASTNode : public ASTNode
{
public:
    ListASTNode* Args;
    std::queue<StmASTNode*> FunctionBody;
    IdentifierASTNode RetType;

    FunctionASTNode(ListASTNode* args, IdentifierASTNode retType);
};

class StructASTNode : public ListASTNode
{
public:
    int ObjectNum;
    std::map<std::string, IdentifierASTNode*> VarList, ConstList, FunctionList, ListList, StructList;

    StructASTNode();
};

#endif // MIKO_AST_HPP