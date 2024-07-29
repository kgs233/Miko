#include "parse.hpp"

#include "AST.hpp"
#include "token.hpp"
#include "util.hpp"

#include <iostream>

Parse::Parse(std::vector<Token>* tokenList) :
    TokenList(tokenList)
{
}

ListASTNode* Parse::ListTypeParse()
{
    ListASTNode* node;
    while (NowTokenValue != ")")
    {
        NextToken();
        if (NowTokenValue == ",")
        {
            NextToken();
            continue;
        }
        else if (NowTokenType == TokenType::TOKEN_IDENTIFIER)
        {
            // TODO: Have a idea: (exp = xxx, exp2 = xxx)
            node->AddNode("", IdentifierParse());
            NextToken();
        }
    }
    return node;
}

IdentifierASTNode* Parse::IdentifierParse()
{
    IdentifierASTNode* node;
    if (NowTokenValue == "var")
    {
        node->IdType = IdentifierType::TYPE_VAR;
    }
    else
    {
        node->IdType = IdentifierType::TYPE_CONST;
    }

    NextToken();

    if (isKeyWorld(NowTokenValue))
    {
        std::cerr << "Can't use key word as identifier" << std::endl;
        throw "Can't use key word as identifier";
        return nullptr;
    }
    else
    {
        if (NowTokenValue == "function")
        {
            node->Value = FunctionParse();
        }
        else
        {
            node->Value = IdentifierNameParse();
        }

        return node;
    }
}

IdentifierASTNode* Parse::CallIdentifierParse()
{
    IdentifierASTNode* node;
    IdentifierASTNode* parent;

    if (ProgramSymbolTable.ListMap.find(NowTokenValue) == ProgramSymbolTable.ListMap.end())
    {
        parent = ProgramSymbolTable.ListMap[NowTokenValue];
        if (NowTokenType == TokenType::TOKEN_DL_DOT)
        {
            NextToken();
        }
        else
        {
            node = parent;
        }

        while (NowTokenType == TokenType::TOKEN_IDENTIFIER)
        {
            StructASTNode* oldParent = (StructASTNode*)parent->Value;
            parent = oldParent->ListMap[NowTokenValue];
            NextToken();
            if (NowTokenType == TokenType::TOKEN_DL_DOT)
            {
                NextToken();
            }
            else
            {
                node = parent;
                break;
            }
        }
    }
    else
    {
        std::cerr << "Can't fount Symbol" << std::endl;
    }
    NextToken();
    return node;
}

IdentifierNameASTNode* Parse::IdentifierNameParse()
{
    IdentifierNameASTNode* node;

    while (NowTokenType == TokenType::TOKEN_IDENTIFIER)
    {

        node->Parents.push_back(ProgramSymbolTable.ListMap[NowTokenValue]);
        NextToken();
        if (NowTokenValue == ".")
        {
            NextToken();
        }
    }

    node->Name = NowTokenValue;
    NextToken();

    return node;
}

FunctionASTNode* Parse::FunctionParse()
{
    NextToken();
    FunctionASTNode* node;
    if (NowTokenType == TokenType::TOKEN_DL_BRACKET_OPEN)
    {
        node->Args = ListTypeParse();
        NextToken();
        if (NowTokenType == TokenType::TOKEN_OP_RET)
        {
            NextToken();
            node->RetType = ProgramSymbolTable.ListMap[NowTokenValue];
            NextToken();
        }
        else if (NowTokenType == TokenType::TOKEN_DL_CURLY_BRACE_OPEN)
        {
            node->RetType = nullptr;
        }
        else
        {
            std::cerr << "Function must have a return type or the return type is null" << std::endl;
            throw "must have a return type";
        }

        if (NowTokenType == TokenType::TOKEN_DL_CURLY_BRACE_OPEN)
        {
            NextToken();
        }
        else
        {
            std::cerr << "Function must have body" << std::endl;
            throw "must have body";
        }
    }
    else
    {
        std::cerr << "Function must have args" << std::endl;
        throw "Function must have args";
        return nullptr;
    }

    return node;
}

std::queue<ASTNode*> Parse::FunctionBodyParse()
{
    std::queue<ASTNode*> node;
    while (NowTokenValue != "}")
    {
        NextToken();
        if (NowTokenValue == "var" || NowTokenValue == "const")
        {
            node.push(IdentifierParse());
        }
        else
        {
        }
    }
    return node;
}

void Parse::NextToken()
{
    NowTokenNum++;
    NowTokenValue = (*TokenList)[NowTokenNum].Value;
    NowTokenType = (*TokenList)[NowTokenNum].Type;
}

Token* Parse::GetNextToken()
{
    return &(*TokenList)[NowTokenNum + 1];
}