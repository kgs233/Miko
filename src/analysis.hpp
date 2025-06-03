#ifndef MIKO_CODEGEN_HPP
#define MIKO_CODEGEN_HPP

#include <any>
#include <vector>

#include "AST.hpp"
#include "source.hpp"
#include "symbol_table.hpp"
#include "pre/MikoParserRules.h"

namespace Miko
{
    class Analysis
    {
        AST* ast;
        Source* source;

    public:
        Analysis(AST* ast);

        void GenSymbolTable();

        std::any visitProg(MikoParserRules::ProgContext* ctx);
        std::vector<Member> visitStructMember(MikoParserRules::StructMemberContext* ctx, SymbolContext* context);
        std::vector<Storable> visitDefineStatement(MikoParserRules::DefineStatementContext *ctx, SymbolContext* context);
        Storable visitDefineExpression(MikoParserRules::DefineExpressionContext *ctx, Storable member);
        Type* visitDefineType(MikoParserRules::DefineTypeContext *ctx);
        LambdaType* visitLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx);
    };
}

#endif // MIKO_CODEGEN_HPP