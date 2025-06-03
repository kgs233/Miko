#include "analysis.hpp"

#include <any>

#include <iostream>
#include <vector>

#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"
#include "symbol_table.hpp"

using namespace Miko;

Analysis::Analysis(AST* ast) :
    ast(ast)
{
    source = ast->GetSource();
}

void Analysis::GenSymbolTable()
{
    visitProg(ast->GetAST());
}

std::any Analysis::visitProg(MikoParserRules::ProgContext* ctx)
{
    for (auto member : ctx->structMember())
    {
        visitStructMember(member, GlobalContext::GetGlobalContext());
    }

    return nullptr;
}

std::vector<Member> Analysis::visitStructMember(MikoParserRules::StructMemberContext* ctx, SymbolContext* context)
{
    Member::Visibility visibility = Member::Visibility::Public;

    auto accessKeyword = ctx->accessKeyword();
    if (accessKeyword != nullptr)
    {
        switch (accessKeyword->getStart()->getType())
        {
            case MikoLexerRules::PUBLIC:
                visibility = Member::Visibility::Public;
                break;
            case MikoLexerRules::PRIVATE:
                visibility = Member::Visibility::Private;
                break;
        }
    }

    std::vector<Member> memberList;
    MikoParserRules::DefineStatementContext* defineStatement = ctx->defineStatement();
    std::vector<Storable> storableList = visitDefineStatement(defineStatement, context);

    for (auto storable : storableList)
    {
        Member* member = new Member(storable, !(ctx->STATIC() == nullptr));
        member->VisibilityKind = visibility;
        memberList.push_back(*member);
    }

    return memberList;
}

std::vector<Storable> Analysis::visitDefineStatement(MikoParserRules::DefineStatementContext* ctx, SymbolContext* context)
{
    Storable storableTemplate;
    std::vector<Storable> retList;

    storableTemplate.isConst = false;
    if (ctx->defineKeyword()->VAR() != nullptr)
    {
        storableTemplate.isConst = false;
    }
    else if (ctx->defineKeyword()->CONST() != nullptr)
    {
        storableTemplate.isConst = true;
    }

    for (auto expression : ctx->defineExpression())
    {
        Storable storable = visitDefineExpression(expression, storableTemplate);
        retList.push_back(storable);
    }

    return retList;
}

Storable Analysis::visitDefineExpression(MikoParserRules::DefineExpressionContext* ctx, Storable storable)
{
    storable.Name = ctx->ID()->getText();
    storable.Type = visitDefineType(ctx->defineType());

    return storable;
}

Type* Analysis::visitDefineType(MikoParserRules::DefineTypeContext* ctx)
{
    Type* type;
    if (ctx->compilerCall() != nullptr)
    {
        if (dynamic_cast<MikoParserRules::CompilerFuncContext*>(ctx->compilerCall()) != nullptr)
        {
            auto compileCall = (MikoParserRules::CompilerFuncContext*)ctx->compilerCall();
            if (compileCall->ID() != nullptr)
            {
                if (compileCall->ID()->getText() == "Int")
                {
                    if (dynamic_cast<MikoParserRules::AtomContext*>(compileCall->functionArgs()->expression()[0]) != nullptr)
                    {
                        auto arg = dynamic_cast<MikoParserRules::AtomContext*>(compileCall->functionArgs()->expression()[0]);
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
        type = visitLambdaExpression(ctx->lambdaExpression());
    }
    else
    {
        // Get Type
    }

    return type;
}

LambdaType* Analysis::visitLambdaExpression(MikoParserRules::LambdaExpressionContext* ctx)
{
    LambdaType* lambda = new LambdaType();
    std::vector<MikoParserRules::StatementContext*> statements;
    std::vector<MikoParserRules::DefineExpressionContext*> arguments;

    if (ctx->lambdaHead()->defineExpression().empty() != true)
    {
        arguments = ctx->lambdaHead()->defineExpression();
        for (auto arg : arguments)
        {
            Storable storable = Storable();
            storable.isConst = false;
            if (ctx->defineKeyword()->VAR() != nullptr)
            {
                storable.isConst = false;
            }
            else if (ctx->defineKeyword()->CONST() != nullptr)
            {
                storable.isConst = true;
            }
            // FIXME: delate this temp var
            Storable storable2 = visitDefineExpression(arg, storable);
            lambda->AddArgument(storable2);
        }
    }

    if (ctx->lambdaBody()->codeBlock() != nullptr)
    {
        lambda->SetReturnType(new VoidType());
        statements = ctx->lambdaBody()->codeBlock()->statement();
    }
    else if (ctx->lambdaBody()->returncodeBlock() != nullptr)
    {
        Type* defineType = visitDefineType(ctx->lambdaBody()->returncodeBlock()->defineType());
        if ((IntType*)defineType != nullptr)
        {
            lambda->SetReturnType(defineType);
        }
        statements = ctx->lambdaBody()->returncodeBlock()->codeBlock()->statement();
    }

    for (auto statement : statements)
    {
    }

    return lambda;
}