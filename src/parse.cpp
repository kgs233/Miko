#include "parse.hpp"

#include "AST.hpp"
#include "token.hpp"
#include "util.hpp"

#include <iostream>

Parse::Parse(std::vector<Token>* tokenList) :
    TokenList(tokenList)
{
}

//TODO: ListTypeParse
StructASTNode* Parse::ListTypeParse()
{
    StructASTNode* node;
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
            node->AddNode(DeclarationParse(node));
            NextToken();
        }
    }
    return node;
}

// (visibility) (statibility) (variability) name : Type

IdentifierASTNode* Parse::DeclarationParse(StructASTNode* symbolTable)
{
    IdentifierASTNode* node;

    if(GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if(NowTokenValue == "public")
        {
            node->Visibility.Type = VisibilityType::VISIBILITY_TYPE_PUBLIC;
        }
        else if(NowTokenValue == "private")
        {
            node->Visibility.Type = VisibilityType::VISIBILITY_TYPE_PRIVATE;
        }
        // TODO: only(xxx, xxx)
        NextToken();
    }

    if (GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if (NowTokenValue == "static")
        {
            node->Static = true;
        }

        NextToken();
    }

    if (GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if (NowTokenValue == "var")
        {
            node->Variability = VariabilityType::VARIABILITY_TYPE_VAR;
        }
        else if (NowTokenValue == "const")
        {
            node->Variability = VariabilityType::VARIABILITY_TYPE_CONST;
        }
        NextToken();
    }

    DeclarationNameParse(symbolTable, node);

    if(NowTokenType != TokenType::TOKEN_DL_COLON)
    {
        std::cerr << "Identifier must have type" << std::endl;
        throw "Identifier must have type";
    }

    NextToken();

    if(NowTokenValue != "function")
    {
        node->Value = CallIdentifierParse(symbolTable);
    }
    else
    {
        //node->Value = FunctionParse();
    }

    return node;
}


void Parse::DeclarationNameParse(StructASTNode* symbolTable, IdentifierASTNode* node)
{
    if (GetNextToken()->Type == TokenType::TOKEN_DL_DOT)
    {
        if (symbolTable->ListMap.find(NowTokenValue) != symbolTable->ListMap.end())
        {
            IdentifierASTNode childNode = *node;
            childNode.Name = NowTokenValue;
            symbolTable->AddNode(&childNode);
        }

        bool paseIdIsNotStruct = symbolTable->ListMap.find(NowTokenValue) != symbolTable->ListMap.end();
        if (paseIdIsNotStruct)
        {
            std::cerr << "Only struct can add child" << std::endl;
            throw "Only struct can add child";
        }

        NextToken();
        NextToken();

        return; DeclarationNameParse((StructASTNode*)symbolTable->ListMap[NowTokenValue]->Value, node);
    }
    else
    {
        if (symbolTable->ListMap.find(NowTokenValue) != symbolTable->ListMap.end())
        {
            node->Name = NowTokenValue;
            symbolTable->AddNode(node);

            NextToken();

            return;
        }
    }
}

IdentifierASTNode* Parse::CallIdentifierParse(StructASTNode* symbolTable)
{
    if (symbolTable->ListMap.find(NowTokenValue) == symbolTable->ListMap.end())
    {
        if (GetNextToken()->Type == TokenType::TOKEN_DL_DOT)
        {
            bool paseIdIsStruct = typeid(symbolTable->ListMap[NowTokenValue]->Value) == typeid(StructASTNode);
            if(paseIdIsStruct)
            {
                NextToken();
                NextToken();
                return CallIdentifierParse((StructASTNode*)symbolTable->ListMap[NowTokenValue]->Value);
            }
            else
            {
                std::cerr << "Only struct can get child id" << std::endl;
                throw "Only struct can get child id";
            }
        }
        else
        {
            return symbolTable->ListMap[NowTokenValue];
        }
    }
    else
    {
        std::cerr << "Can't fount Symbol" << std::endl;
        throw "Can't fount Symbol";
    }
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