#include "AST.hpp"

#include "CommonTokenStream.h"
#include "pre/MikoParserRules.h"
#include "source.hpp"
#include "util.hpp"

using namespace Miko;

AST::AST(Source* source)
    : source(source), 
      input(*source),
      lexer(&input), 
      tokens(&lexer),
      parser(&tokens)
{
    tokens.fill();
    SourceContext = parser.source(); 
}

AST::~AST()
{
    DISPOSE(SourceContext);
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

MikoParserRules::SourceContext* AST::GetAST()
{
    return SourceContext; 
}

void AST::PrintAST()
{
    std::cout << SourceContext->toStringTree(&parser) << std::endl;
}

Source* AST::GetSource()
{
    return source;
}