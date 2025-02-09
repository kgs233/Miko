
// Generated from MikoParserRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MikoParserRules.h"


namespace Miko {

/**
 * This interface defines an abstract listener for a parse tree produced by MikoParserRules.
 */
class  MikoParserRulesListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(MikoParserRules::ProgContext *ctx) = 0;
  virtual void exitProg(MikoParserRules::ProgContext *ctx) = 0;

  virtual void enterStatement(MikoParserRules::StatementContext *ctx) = 0;
  virtual void exitStatement(MikoParserRules::StatementContext *ctx) = 0;

  virtual void enterIfStatement(MikoParserRules::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(MikoParserRules::IfStatementContext *ctx) = 0;

  virtual void enterMatchStatement(MikoParserRules::MatchStatementContext *ctx) = 0;
  virtual void exitMatchStatement(MikoParserRules::MatchStatementContext *ctx) = 0;

  virtual void enterMatchMember(MikoParserRules::MatchMemberContext *ctx) = 0;
  virtual void exitMatchMember(MikoParserRules::MatchMemberContext *ctx) = 0;

  virtual void enterForStatement(MikoParserRules::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(MikoParserRules::ForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(MikoParserRules::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(MikoParserRules::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(MikoParserRules::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(MikoParserRules::ReturnStatementContext *ctx) = 0;

  virtual void enterAccessKeyword(MikoParserRules::AccessKeywordContext *ctx) = 0;
  virtual void exitAccessKeyword(MikoParserRules::AccessKeywordContext *ctx) = 0;

  virtual void enterDefineKeyword(MikoParserRules::DefineKeywordContext *ctx) = 0;
  virtual void exitDefineKeyword(MikoParserRules::DefineKeywordContext *ctx) = 0;

  virtual void enterDefineStatement(MikoParserRules::DefineStatementContext *ctx) = 0;
  virtual void exitDefineStatement(MikoParserRules::DefineStatementContext *ctx) = 0;

  virtual void enterDefine(MikoParserRules::DefineContext *ctx) = 0;
  virtual void exitDefine(MikoParserRules::DefineContext *ctx) = 0;

  virtual void enterDefineExpression(MikoParserRules::DefineExpressionContext *ctx) = 0;
  virtual void exitDefineExpression(MikoParserRules::DefineExpressionContext *ctx) = 0;

  virtual void enterType(MikoParserRules::TypeContext *ctx) = 0;
  virtual void exitType(MikoParserRules::TypeContext *ctx) = 0;

  virtual void enterStructType(MikoParserRules::StructTypeContext *ctx) = 0;
  virtual void exitStructType(MikoParserRules::StructTypeContext *ctx) = 0;

  virtual void enterStructBody(MikoParserRules::StructBodyContext *ctx) = 0;
  virtual void exitStructBody(MikoParserRules::StructBodyContext *ctx) = 0;

  virtual void enterStructDefineStatement(MikoParserRules::StructDefineStatementContext *ctx) = 0;
  virtual void exitStructDefineStatement(MikoParserRules::StructDefineStatementContext *ctx) = 0;

  virtual void enterDefineEnum(MikoParserRules::DefineEnumContext *ctx) = 0;
  virtual void exitDefineEnum(MikoParserRules::DefineEnumContext *ctx) = 0;

  virtual void enterEnumBody(MikoParserRules::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(MikoParserRules::EnumBodyContext *ctx) = 0;

  virtual void enterCall(MikoParserRules::CallContext *ctx) = 0;
  virtual void exitCall(MikoParserRules::CallContext *ctx) = 0;

  virtual void enterCallIdentifier(MikoParserRules::CallIdentifierContext *ctx) = 0;
  virtual void exitCallIdentifier(MikoParserRules::CallIdentifierContext *ctx) = 0;

  virtual void enterCallFunction(MikoParserRules::CallFunctionContext *ctx) = 0;
  virtual void exitCallFunction(MikoParserRules::CallFunctionContext *ctx) = 0;

  virtual void enterFunctionArgs(MikoParserRules::FunctionArgsContext *ctx) = 0;
  virtual void exitFunctionArgs(MikoParserRules::FunctionArgsContext *ctx) = 0;

  virtual void enterAtomExpression(MikoParserRules::AtomExpressionContext *ctx) = 0;
  virtual void exitAtomExpression(MikoParserRules::AtomExpressionContext *ctx) = 0;

  virtual void enterAdd(MikoParserRules::AddContext *ctx) = 0;
  virtual void exitAdd(MikoParserRules::AddContext *ctx) = 0;

  virtual void enterParent(MikoParserRules::ParentContext *ctx) = 0;
  virtual void exitParent(MikoParserRules::ParentContext *ctx) = 0;

  virtual void enterMinus(MikoParserRules::MinusContext *ctx) = 0;
  virtual void exitMinus(MikoParserRules::MinusContext *ctx) = 0;

  virtual void enterLogicBoS(MikoParserRules::LogicBoSContext *ctx) = 0;
  virtual void exitLogicBoS(MikoParserRules::LogicBoSContext *ctx) = 0;

  virtual void enterBitOr(MikoParserRules::BitOrContext *ctx) = 0;
  virtual void exitBitOr(MikoParserRules::BitOrContext *ctx) = 0;

  virtual void enterLogicOr(MikoParserRules::LogicOrContext *ctx) = 0;
  virtual void exitLogicOr(MikoParserRules::LogicOrContext *ctx) = 0;

  virtual void enterThis(MikoParserRules::ThisContext *ctx) = 0;
  virtual void exitThis(MikoParserRules::ThisContext *ctx) = 0;

  virtual void enterDot(MikoParserRules::DotContext *ctx) = 0;
  virtual void exitDot(MikoParserRules::DotContext *ctx) = 0;

  virtual void enterIncrement(MikoParserRules::IncrementContext *ctx) = 0;
  virtual void exitIncrement(MikoParserRules::IncrementContext *ctx) = 0;

  virtual void enterBitshift(MikoParserRules::BitshiftContext *ctx) = 0;
  virtual void exitBitshift(MikoParserRules::BitshiftContext *ctx) = 0;

  virtual void enterLogicEq(MikoParserRules::LogicEqContext *ctx) = 0;
  virtual void exitLogicEq(MikoParserRules::LogicEqContext *ctx) = 0;

  virtual void enterMulti(MikoParserRules::MultiContext *ctx) = 0;
  virtual void exitMulti(MikoParserRules::MultiContext *ctx) = 0;

  virtual void enterNot(MikoParserRules::NotContext *ctx) = 0;
  virtual void exitNot(MikoParserRules::NotContext *ctx) = 0;

  virtual void enterLambda(MikoParserRules::LambdaContext *ctx) = 0;
  virtual void exitLambda(MikoParserRules::LambdaContext *ctx) = 0;

  virtual void enterComma(MikoParserRules::CommaContext *ctx) = 0;
  virtual void exitComma(MikoParserRules::CommaContext *ctx) = 0;

  virtual void enterBitAnd(MikoParserRules::BitAndContext *ctx) = 0;
  virtual void exitBitAnd(MikoParserRules::BitAndContext *ctx) = 0;

  virtual void enterLogicAnd(MikoParserRules::LogicAndContext *ctx) = 0;
  virtual void exitLogicAnd(MikoParserRules::LogicAndContext *ctx) = 0;

  virtual void enterNegate(MikoParserRules::NegateContext *ctx) = 0;
  virtual void exitNegate(MikoParserRules::NegateContext *ctx) = 0;

  virtual void enterBitXor(MikoParserRules::BitXorContext *ctx) = 0;
  virtual void exitBitXor(MikoParserRules::BitXorContext *ctx) = 0;

  virtual void enterDecrment(MikoParserRules::DecrmentContext *ctx) = 0;
  virtual void exitDecrment(MikoParserRules::DecrmentContext *ctx) = 0;

  virtual void enterAtom(MikoParserRules::AtomContext *ctx) = 0;
  virtual void exitAtom(MikoParserRules::AtomContext *ctx) = 0;

  virtual void enterOpen(MikoParserRules::OpenContext *ctx) = 0;
  virtual void exitOpen(MikoParserRules::OpenContext *ctx) = 0;

  virtual void enterAssign(MikoParserRules::AssignContext *ctx) = 0;
  virtual void exitAssign(MikoParserRules::AssignContext *ctx) = 0;

  virtual void enterOpenExpression(MikoParserRules::OpenExpressionContext *ctx) = 0;
  virtual void exitOpenExpression(MikoParserRules::OpenExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(MikoParserRules::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(MikoParserRules::AssignmentOperatorContext *ctx) = 0;

  virtual void enterLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaHead(MikoParserRules::LambdaHeadContext *ctx) = 0;
  virtual void exitLambdaHead(MikoParserRules::LambdaHeadContext *ctx) = 0;

  virtual void enterLambdaBody(MikoParserRules::LambdaBodyContext *ctx) = 0;
  virtual void exitLambdaBody(MikoParserRules::LambdaBodyContext *ctx) = 0;

  virtual void enterCodeBlock(MikoParserRules::CodeBlockContext *ctx) = 0;
  virtual void exitCodeBlock(MikoParserRules::CodeBlockContext *ctx) = 0;

  virtual void enterReturncodeBlock(MikoParserRules::ReturncodeBlockContext *ctx) = 0;
  virtual void exitReturncodeBlock(MikoParserRules::ReturncodeBlockContext *ctx) = 0;


};

}  // namespace Miko
