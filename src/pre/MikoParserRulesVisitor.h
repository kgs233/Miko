
// Generated from MikoParserRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MikoParserRules.h"


namespace Miko {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MikoParserRules.
 */
class  MikoParserRulesVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MikoParserRules.
   */
    virtual std::any visitProg(MikoParserRules::ProgContext *context) = 0;

    virtual std::any visitStatement(MikoParserRules::StatementContext *context) = 0;

    virtual std::any visitIfStatement(MikoParserRules::IfStatementContext *context) = 0;

    virtual std::any visitMatchStatement(MikoParserRules::MatchStatementContext *context) = 0;

    virtual std::any visitMatchMember(MikoParserRules::MatchMemberContext *context) = 0;

    virtual std::any visitForStatement(MikoParserRules::ForStatementContext *context) = 0;

    virtual std::any visitWhileStatement(MikoParserRules::WhileStatementContext *context) = 0;

    virtual std::any visitReturnStatement(MikoParserRules::ReturnStatementContext *context) = 0;

    virtual std::any visitOpenStatement(MikoParserRules::OpenStatementContext *context) = 0;

    virtual std::any visitAccessKeyword(MikoParserRules::AccessKeywordContext *context) = 0;

    virtual std::any visitDefineKeyword(MikoParserRules::DefineKeywordContext *context) = 0;

    virtual std::any visitDefineStatement(MikoParserRules::DefineStatementContext *context) = 0;

    virtual std::any visitDefine(MikoParserRules::DefineContext *context) = 0;

    virtual std::any visitDefineExpression(MikoParserRules::DefineExpressionContext *context) = 0;

    virtual std::any visitType(MikoParserRules::TypeContext *context) = 0;

    virtual std::any visitStructType(MikoParserRules::StructTypeContext *context) = 0;

    virtual std::any visitStructBody(MikoParserRules::StructBodyContext *context) = 0;

    virtual std::any visitStructDefineStatement(MikoParserRules::StructDefineStatementContext *context) = 0;

    virtual std::any visitDefineEnum(MikoParserRules::DefineEnumContext *context) = 0;

    virtual std::any visitEnumBody(MikoParserRules::EnumBodyContext *context) = 0;

    virtual std::any visitCall(MikoParserRules::CallContext *context) = 0;

    virtual std::any visitCompilerCall(MikoParserRules::CompilerCallContext *context) = 0;

    virtual std::any visitProgramCall(MikoParserRules::ProgramCallContext *context) = 0;

    virtual std::any visitCallIdentifier(MikoParserRules::CallIdentifierContext *context) = 0;

    virtual std::any visitCallFunction(MikoParserRules::CallFunctionContext *context) = 0;

    virtual std::any visitFunctionArgs(MikoParserRules::FunctionArgsContext *context) = 0;

    virtual std::any visitAtomExpression(MikoParserRules::AtomExpressionContext *context) = 0;

    virtual std::any visitAdd(MikoParserRules::AddContext *context) = 0;

    virtual std::any visitParent(MikoParserRules::ParentContext *context) = 0;

    virtual std::any visitMinus(MikoParserRules::MinusContext *context) = 0;

    virtual std::any visitLogicBoS(MikoParserRules::LogicBoSContext *context) = 0;

    virtual std::any visitBitOr(MikoParserRules::BitOrContext *context) = 0;

    virtual std::any visitLogicOr(MikoParserRules::LogicOrContext *context) = 0;

    virtual std::any visitThis(MikoParserRules::ThisContext *context) = 0;

    virtual std::any visitDot(MikoParserRules::DotContext *context) = 0;

    virtual std::any visitIncrement(MikoParserRules::IncrementContext *context) = 0;

    virtual std::any visitBitshift(MikoParserRules::BitshiftContext *context) = 0;

    virtual std::any visitLogicEq(MikoParserRules::LogicEqContext *context) = 0;

    virtual std::any visitMulti(MikoParserRules::MultiContext *context) = 0;

    virtual std::any visitNot(MikoParserRules::NotContext *context) = 0;

    virtual std::any visitLambda(MikoParserRules::LambdaContext *context) = 0;

    virtual std::any visitComma(MikoParserRules::CommaContext *context) = 0;

    virtual std::any visitBitAnd(MikoParserRules::BitAndContext *context) = 0;

    virtual std::any visitLogicAnd(MikoParserRules::LogicAndContext *context) = 0;

    virtual std::any visitNegate(MikoParserRules::NegateContext *context) = 0;

    virtual std::any visitBitXor(MikoParserRules::BitXorContext *context) = 0;

    virtual std::any visitDecrment(MikoParserRules::DecrmentContext *context) = 0;

    virtual std::any visitAtom(MikoParserRules::AtomContext *context) = 0;

    virtual std::any visitOpen(MikoParserRules::OpenContext *context) = 0;

    virtual std::any visitAssign(MikoParserRules::AssignContext *context) = 0;

    virtual std::any visitOpenExpression(MikoParserRules::OpenExpressionContext *context) = 0;

    virtual std::any visitAssignmentOperator(MikoParserRules::AssignmentOperatorContext *context) = 0;

    virtual std::any visitLambdaExpression(MikoParserRules::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaHead(MikoParserRules::LambdaHeadContext *context) = 0;

    virtual std::any visitLambdaBody(MikoParserRules::LambdaBodyContext *context) = 0;

    virtual std::any visitCodeBlock(MikoParserRules::CodeBlockContext *context) = 0;

    virtual std::any visitReturncodeBlock(MikoParserRules::ReturncodeBlockContext *context) = 0;


};

}  // namespace Miko
