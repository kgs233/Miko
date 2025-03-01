#ifndef MIKO_ANTLR_PRE_HPP
#define MIKO_ANTLR_PRE_HPP

#include <antlr4-runtime.h>

#include "CommonTokenStream.h"
#include "source.hpp"
#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"

namespace Miko
{
    class AST
    {
        Source* source;

        antlr4::ANTLRInputStream input;
        MikoLexerRules lexer;
        MikoParserRules parser;
        antlr4::CommonTokenStream tokens;
        MikoParserRules::ProgContext* antlrContext;
    public:
        AST(Source* source);

        antlr4::CommonTokenStream& GetTokens();
        void PrintTokens();
        MikoParserRules::ProgContext* GetAST(); 
        void PrintAST();

        Source* GetSource();

        operator MikoParserRules::ProgContext*() { return antlrContext; }
    };
}

#endif // MIKO_ANTLR_PRE_HPP