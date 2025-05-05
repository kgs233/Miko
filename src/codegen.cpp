#include "codegen.hpp"

#include <any>

#include <iostream>

#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/raw_ostream.h>
#include <vector>

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

std::vector<Member> CodeGen::visitStructMember(MikoParserRules::StructMemberContext* ctx, std::string prefix, bool top)
{
    Visibility visibility = Visibility::Public;

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
    }

    std::vector<Member> memberList;
    MikoParserRules::DefineStatementContext* defineStatement = ctx->defineStatement();
    std::vector<Storable> storableList = visitDefineStatement(defineStatement, prefix);

    for(auto storable : storableList)
    {
        Member* member = new Member(storable);
        member->visibility = visibility;
        memberList.push_back(*member);
    }

    return memberList;
}

std::vector<Storable> CodeGen::visitDefineStatement(MikoParserRules::DefineStatementContext* ctx, std::string prefix)
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

    Storable storableTemplate;
    std::vector<Storable> retList;

    for (auto expression : ctx->defineExpression())
    {
        Storable storable = visitDefineExpression(expression, prefix, storableTemplate);
        retList.push_back(storable);
    }

    return retList;
}


Storable CodeGen::visitDefineExpression(MikoParserRules::DefineExpressionContext* ctx, std::string prefix, Storable storable)
{
    if (storable.variability == Variability::Define && ctx->ASS() != nullptr)
    {
        std::cerr << "define can't have assignement" << std::endl;
        throw "define can't have assignement";
    }

    prefix += ctx->ID()->getText();
    storable.name = ctx->ID()->getText();
    storable.type = visitDefineType(ctx->defineType(), prefix);

    return storable;
}

Type* CodeGen::visitDefineType(MikoParserRules::DefineTypeContext* ctx, std::string prefix)
{
    Type* type;
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
                        type = new IntType(size);
                    }
                }
                
            }
        }
    }
    else if (ctx->lambdaExpression() != nullptr)
    {
        type = visitLambdaExpression(ctx->lambdaExpression(), prefix);
    }

    return type;
}

LambdaType* CodeGen::visitLambdaExpression(MikoParserRules::LambdaExpressionContext* ctx, std::string prefix)
{
    llvm::Type* type = nullptr;
    LambdaType* lambda = new LambdaType();
    std::vector<MikoParserRules::StatementContext*> statements;
    std::vector<MikoParserRules::DefineExpressionContext*> arguments;

    if(ctx->lambdaHead()->defineExpression().empty() != true)
    {
        arguments = ctx->lambdaHead()->defineExpression();
        for (auto arg : arguments)
        {
            Storable storable = *(new Storable());
            storable.variability = Variability::Const;
            lambda->arguments.push_back(storable);
            lambda->localSymbol.push_back(visitDefineExpression(arg, "", storable));
        }
    }

    if (ctx->lambdaBody()->codeBlock() != nullptr)
    {
        type = llvm::Type::getVoidTy(context);
        lambda->retrunType = new VoidType();
        statements = ctx->lambdaBody()->codeBlock()->statement();
    }
    else if(ctx->lambdaBody()->returncodeBlock() != nullptr)
    {
        Type* defineType = visitDefineType(ctx->lambdaBody()->returncodeBlock()->defineType(), prefix);
        if(dynamic_cast<IntType*>(defineType) != nullptr)
        {
            type = llvm::Type::getIntNTy(context, ((IntType*)defineType)->GetSize());
            lambda->retrunType = defineType;
        }
        statements = ctx->lambdaBody()->returncodeBlock()->codeBlock()->statement();
    }

    llvm::FunctionType* functionType = llvm::FunctionType::get(type, false);
    llvm::Function* function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, prefix, module);

    llvm::BasicBlock* block = llvm::BasicBlock::Create(context, "entry", function);
    builder->SetInsertPoint(block);
    for(auto statement : statements)
    {

    }

    llvm::verifyFunction(*function);

    return lambda;
}