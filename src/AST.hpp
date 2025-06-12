#ifndef MIKO_ANTLR_PRE_HPP
#define MIKO_ANTLR_PRE_HPP

#include <antlr4-runtime.h>
#include <memory>

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
        antlr4::CommonTokenStream tokens;
        MikoParserRules parser;
        
        MikoParserRules::SourceContext* SourceContext;
    public:
        AST(Source* source);
        
        ~AST();

        void PrintTokens();
        void PrintAST();

        Source* GetSource();
        antlr4::CommonTokenStream& GetTokens();
        MikoParserRules::SourceContext* GetAST(); 

        operator MikoParserRules::SourceContext*() { return SourceContext; }
    };
}

#endif // MIKO_ANTLR_PRE_HPP