#ifndef MIKO_ANALYSIS_HPP
#define MIKO_ANALYSIS_HPP

#include <vector>

#include "AST.hpp"
#include "output.hpp"
#include "symbol_table.hpp"
#include "pre/MikoParserRules.h"

namespace Miko
{
    class Analysis
    {
        AST* ast;
        Output* output;

    public:
        Analysis(AST* ast, Output* output);

        void GenSymbolTable();

        void visitProg(MikoParserRules::SourceContext* ctx);
        Struct* visitStructType(MikoParserRules::StructTypeContext* ctx);
        std::vector<Member*> visitStructMember(MikoParserRules::StructMemberContext* ctx, SymbolContext* context);
        std::vector<Storable*> visitDefineStatement(MikoParserRules::DefineStatementContext *ctx, SymbolContext* context);
        Storable visitDefineExpression(MikoParserRules::DefineExpressionContext *ctx, Storable member);
        Type* visitDefineType(MikoParserRules::DefineTypeContext *ctx);
        Type* visitType(MikoParserRules::TypeContext* ctx);
        LambdaType* visitLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx);
    };
}

#endif // MIKO_ANALYSIS_HPP