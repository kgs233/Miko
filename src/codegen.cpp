#include "codegen.hpp"

#include <any>

#include <iostream>

#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/raw_ostream.h>

#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"

using namespace Miko;

CodeGen::CodeGen(AST* ast) :
    ast(ast)
{
    source = ast->GetSource();
    builder = new llvm::IRBuilder<>(context);
    module = new llvm::Module(source->GetSourcePath(), context);
}

void CodeGen::Gen()
{
    visitProg(ast->GetAST());
}

void CodeGen::PrintIR()
{
    module->print(llvm::outs(), nullptr);
}

std::any CodeGen::visitProg(MikoParserRules::ProgContext* ctx)
{
    for (auto member : ctx->structMember())
    {
        visitStructMember(member, "");
    }

    return nullptr;
}

std::any CodeGen::visitStructMember(MikoParserRules::StructMemberContext* ctx, std::string prefix)
{
    auto accessKeyword = ctx->accessKeyword();
    if (accessKeyword == nullptr)
    {
        prefix += "pub#";
    }
    else
    {
        switch (accessKeyword->getStart()->getType())
        {
            case MikoLexerRules::PUBLIC:
                prefix += "pubA";
                break;
            case MikoLexerRules::PRIVATE:
                prefix += "prvA";
                break;
        }
    }

    MikoParserRules::DefineStatementContext* defineStatement = ctx->defineStatement();
    return visitDefineStatement(defineStatement, prefix);
}

std::any CodeGen::visitDefineStatement(MikoParserRules::DefineStatementContext* ctx, std::string prefix)
{
    bool def = false;
    auto defineKeyword = ctx->defineKeyword();
    if (ctx->defineKeyword()->DEFINE() != nullptr)
    {
        def = true;
    }
    else if (ctx->defineKeyword()->VAR() != nullptr)
    {
        prefix += "var#";
    }
    else if (defineKeyword->CONST() != nullptr)
    {
        prefix += "const#";
    }

    for (auto expression : ctx->defineExpression())
    {
        visitDefineExpression(expression, prefix, def);
    }
    return nullptr;
}

std::any CodeGen::visitDefineExpression(MikoParserRules::DefineExpressionContext* ctx, std::string prefix, bool def)
{
    prefix += ctx->ID()->getText();

    if (def && ctx->ASS() != nullptr)
    {
        std::cerr << "define can't have assignement" << std::endl;
        throw "define can't have assignement";
    }

    return visitDefineType(ctx->defineType(), prefix);
}

std::any CodeGen::visitDefineType(MikoParserRules::DefineTypeContext* ctx, std::string prefix)
{
    if (ctx->lambdaExpression() != nullptr)
    {
        visitLambdaExpression(ctx->lambdaExpression(), prefix);
    }

    return nullptr;
}

std::any CodeGen::visitLambdaExpression(MikoParserRules::LambdaExpressionContext* ctx, std::string prefix)
{
    llvm::Type* type = nullptr;
    if (ctx->lambdaBody()->codeBlock() != nullptr)
    {
        type = llvm::Type::getVoidTy(context);
        prefix += "_void";
    }

    llvm::FunctionType* functionType = llvm::FunctionType::get(type, false);
    llvm::Function* function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, prefix, module);
    llvm::verifyFunction(*function);

    return nullptr;
}