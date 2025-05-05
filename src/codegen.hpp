#ifndef MIKO_CODEGEN_HPP
#define MIKO_CODEGEN_HPP

#include <any>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <string>
#include <variant>
#include <vector>

#include "AST.hpp"
#include "pre/MikoParserRules.h"
#include "source.hpp"
#include "pre/MikoParserRulesBaseVisitor.h"
#include "symbol_table.hpp"

namespace Miko
{
    class CodeGen : public MikoParserRulesBaseVisitor
    {
        AST* ast;
        Source* source;
        llvm::Module* module;
        llvm::LLVMContext context;
        llvm::IRBuilder<>* builder;
    public:
        CodeGen(AST* ast);

        void Gen();
        void PrintIR();

        std::any visitProg(MikoParserRules::ProgContext* ctx) override;
        std::vector<Member> visitStructMember(MikoParserRules::StructMemberContext* ctx, std::string prefix, bool top);
        std::vector<Storable> visitDefineStatement(MikoParserRules::DefineStatementContext *ctx, std::string prefix);
        Storable visitDefineExpression(MikoParserRules::DefineExpressionContext *ctx, std::string prefix, Storable member);
        Type* visitDefineType(MikoParserRules::DefineTypeContext *ctx, std::string prefixr);
        LambdaType* visitLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx, std::string prefix);
    };
}

#endif // MIKO_CODEGEN_HPP