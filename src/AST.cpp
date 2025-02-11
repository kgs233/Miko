#include "AST.hpp"

#include "CommonTokenStream.h"
#include "pre/MikoParserRules.h"

using namespace Miko;

AST::AST(Source& source)
    : source(source), input(source), lexer(&input), tokens(&lexer), parser(&tokens)
{
    tokens.fill();
    antlrContext = parser.prog();
}

antlr4::CommonTokenStream& AST::GetTokens()
{
    return tokens;
}

void AST::PrintTokens()
{
    for (const auto& token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }
}

MikoParserRules::ProgContext* AST::GetAST()
{
    return antlrContext;
}

void AST::PrintAST()
{
    std::cout << antlrContext->toStringTree(&parser) << std::endl;
}