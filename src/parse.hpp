#ifndef MIKO_PARSE_HPP
#define MIKO_PARSE_HPP

#include "AST.hpp"
#include "token.hpp"

#include <cctype>
#include <cerrno>
#include <queue>
#include <string>
#include <vector>

class Parse
{
public:
    int NowTokenNum = 0;
    std::string NowTokenValue;
    TokenType NowTokenType;
    std::vector<Token>* TokenList;
    StructASTNode ProgramSymbolTable;
    StructASTNode* NowStructSymbolTable;

    Parse(std::vector<Token>* tokenList);

    ListASTNode* ListTypeParse(ListASTNode* list);
    FunctionASTNode* FunctionParse(StructASTNode* symbolTable, ListASTNode* args);
    std::queue<ASTNode*> FunctionBodyParse(std::queue<ASTNode*> body);
    ASTNode* TypeParse(StructASTNode* symbolTable);
    IdentifierASTNode* MemberParse(StructASTNode* symbolTable);
    IdentifierASTNode* DeclarationParse(StructASTNode* symbolTable, IdentifierASTNode* node);
    IdentifierASTNode* DeclarationNameParse(StructASTNode* symbolTable, IdentifierASTNode* node);
    IdentifierASTNode* CallIdentifierParse(StructASTNode* symbolTable);
    IdentifierNameASTNode* IdentifierNameParse();
    

    void NextToken();
    Token* GetNextToken();
};

#endif // MIKO_PARSE_HPP