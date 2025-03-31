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
#include "symbol_table.hpp"

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
        visitStructMember(member, "_M", true);
    }

    return nullptr;
}

std::any CodeGen::visitStructMember(MikoParserRules::StructMemberContext* ctx, std::string prefix, bool top)
{
    Visibility visibility = Visibility::Public;
    Member* member = nullptr;

    if (top != true)
    {
        auto accessKeyword = ctx->accessKeyword();
        if (accessKeyword != nullptr)
        {
            switch (accessKeyword->getStart()->getType())
            {
                case MikoLexerRules::PUBLIC:
                    visibility = Visibility::Public;
                    break;
                case MikoLexerRules::PRIVATE:
                    visibility = Visibility::Private;
                    break;
            }
        }

        member = new Member();
        member->visibility = visibility;
    }
    else 
    {
        member = new TopObject();
    }

    MikoParserRules::DefineStatementContext* defineStatement = ctx->defineStatement();
    return visitDefineStatement(defineStatement, prefix, member);
}

std::any CodeGen::visitDefineStatement(MikoParserRules::DefineStatementContext* ctx, std::string prefix, Member* member)
{
    bool def = false;
    auto defineKeyword = ctx->defineKeyword();

    Variability variability;

    if (ctx->defineKeyword()->DEFINE() != nullptr)
    {
        variability = Variability::Define;
    }
    else if (ctx->defineKeyword()->VAR() != nullptr)
    {
        variability = Variability::Var;
    }
    else if (defineKeyword->CONST() != nullptr)
    {
        variability = Variability::Const;
    }

    member->variability = variability;

    for (auto expression : ctx->defineExpression())
    {
        visitDefineExpression(expression, prefix, *member);
    }
    return nullptr;
}

std::any CodeGen::visitDefineExpression(MikoParserRules::DefineExpressionContext* ctx, std::string prefix, Member member)
{
    if (member.variability == Variability::Define && ctx->ASS() != nullptr)
    {
        std::cerr << "define can't have assignement" << std::endl;
        throw "define can't have assignement";
    }

    prefix += ctx->ID()->getText();
    member.name = ctx->ID()->getText();
    member.type = visitDefineType(ctx->defineType(), prefix);

    return nullptr;
}

Type* CodeGen::visitDefineType(MikoParserRules::DefineTypeContext* ctx, std::string prefix)
{
    if (ctx->compilerCall() != nullptr)
    {
        if(dynamic_cast<MikoParserRules::CompilerFuncContext*>(ctx->compilerCall()) != nullptr)
        {
            auto compileCall = (MikoParserRules::CompilerFuncContext*)ctx->compilerCall();
            if(compileCall->ID() != nullptr)
            {
                if(compileCall->ID()->getText() == "Int")
                {
                    if (dynamic_cast<MikoParserRules::AtomContext*>
                            (compileCall->functionArgs()->expression()[0]) != nullptr)
                    {
                        auto arg = 
                        dynamic_cast<MikoParserRules::AtomContext*>
                            (compileCall->functionArgs()->expression()[0]);
                        auto intSize = arg->atomExpression()->INT()->getText();
                        int size = std::stoi(intSize);
                        return new IntType(size);
                    }
                }
                
            }
        }
    }
    else if (ctx->lambdaExpression() != nullptr)
    {
        return visitLambdaExpression(ctx->lambdaExpression(), prefix);
    }

    return nullptr;
}

LambdaType* CodeGen::visitLambdaExpression(MikoParserRules::LambdaExpressionContext* ctx, std::string prefix)
{
    llvm::Type* type = nullptr;
    LambdaType* lambdaType = new LambdaType();
    if (ctx->lambdaBody()->codeBlock() != nullptr)
    {
        type = llvm::Type::getVoidTy(context);
        lambdaType->retrunType = new VoidType();
        
    }
    else if(ctx->lambdaBody()->returncodeBlock() != nullptr)
    {
        Type* defineType = visitDefineType(ctx->lambdaBody()->returncodeBlock()->defineType(), prefix);
        if(dynamic_cast<IntType*>(defineType) != nullptr)
        {
            type = llvm::Type::getIntNTy(context, ((IntType*)defineType)->GetSize());
            lambdaType->retrunType = defineType;
        }
    }

    llvm::FunctionType* functionType = llvm::FunctionType::get(type, false);
    llvm::Function* function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, prefix, module);
    llvm::verifyFunction(*function);

    return nullptr;
}