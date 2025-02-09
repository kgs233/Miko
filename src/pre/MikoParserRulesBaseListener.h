
// Generated from MikoParserRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MikoParserRulesListener.h"


namespace Miko {

/**
 * This class provides an empty implementation of MikoParserRulesListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MikoParserRulesBaseListener : public MikoParserRulesListener {
public:

  virtual void enterProg(MikoParserRules::ProgContext * /*ctx*/) override { }
  virtual void exitProg(MikoParserRules::ProgContext * /*ctx*/) override { }

  virtual void enterStatement(MikoParserRules::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MikoParserRules::StatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(MikoParserRules::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(MikoParserRules::IfStatementContext * /*ctx*/) override { }

  virtual void enterMatchStatement(MikoParserRules::MatchStatementContext * /*ctx*/) override { }
  virtual void exitMatchStatement(MikoParserRules::MatchStatementContext * /*ctx*/) override { }

  virtual void enterMatchMember(MikoParserRules::MatchMemberContext * /*ctx*/) override { }
  virtual void exitMatchMember(MikoParserRules::MatchMemberContext * /*ctx*/) override { }

  virtual void enterForStatement(MikoParserRules::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(MikoParserRules::ForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(MikoParserRules::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(MikoParserRules::WhileStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(MikoParserRules::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(MikoParserRules::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterAccessKeyword(MikoParserRules::AccessKeywordContext * /*ctx*/) override { }
  virtual void exitAccessKeyword(MikoParserRules::AccessKeywordContext * /*ctx*/) override { }

  virtual void enterDefineKeyword(MikoParserRules::DefineKeywordContext * /*ctx*/) override { }
  virtual void exitDefineKeyword(MikoParserRules::DefineKeywordContext * /*ctx*/) override { }

  virtual void enterDefineStatement(MikoParserRules::DefineStatementContext * /*ctx*/) override { }
  virtual void exitDefineStatement(MikoParserRules::DefineStatementContext * /*ctx*/) override { }

  virtual void enterDefine(MikoParserRules::DefineContext * /*ctx*/) override { }
  virtual void exitDefine(MikoParserRules::DefineContext * /*ctx*/) override { }

  virtual void enterDefineExpression(MikoParserRules::DefineExpressionContext * /*ctx*/) override { }
  virtual void exitDefineExpression(MikoParserRules::DefineExpressionContext * /*ctx*/) override { }

  virtual void enterType(MikoParserRules::TypeContext * /*ctx*/) override { }
  virtual void exitType(MikoParserRules::TypeContext * /*ctx*/) override { }

  virtual void enterStructType(MikoParserRules::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(MikoParserRules::StructTypeContext * /*ctx*/) override { }

  virtual void enterStructBody(MikoParserRules::StructBodyContext * /*ctx*/) override { }
  virtual void exitStructBody(MikoParserRules::StructBodyContext * /*ctx*/) override { }

  virtual void enterStructDefineStatement(MikoParserRules::StructDefineStatementContext * /*ctx*/) override { }
  virtual void exitStructDefineStatement(MikoParserRules::StructDefineStatementContext * /*ctx*/) override { }

  virtual void enterDefineEnum(MikoParserRules::DefineEnumContext * /*ctx*/) override { }
  virtual void exitDefineEnum(MikoParserRules::DefineEnumContext * /*ctx*/) override { }

  virtual void enterEnumBody(MikoParserRules::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(MikoParserRules::EnumBodyContext * /*ctx*/) override { }

  virtual void enterCall(MikoParserRules::CallContext * /*ctx*/) override { }
  virtual void exitCall(MikoParserRules::CallContext * /*ctx*/) override { }

  virtual void enterCallIdentifier(MikoParserRules::CallIdentifierContext * /*ctx*/) override { }
  virtual void exitCallIdentifier(MikoParserRules::CallIdentifierContext * /*ctx*/) override { }

  virtual void enterCallFunction(MikoParserRules::CallFunctionContext * /*ctx*/) override { }
  virtual void exitCallFunction(MikoParserRules::CallFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionArgs(MikoParserRules::FunctionArgsContext * /*ctx*/) override { }
  virtual void exitFunctionArgs(MikoParserRules::FunctionArgsContext * /*ctx*/) override { }

  virtual void enterAtomExpression(MikoParserRules::AtomExpressionContext * /*ctx*/) override { }
  virtual void exitAtomExpression(MikoParserRules::AtomExpressionContext * /*ctx*/) override { }

  virtual void enterAdd(MikoParserRules::AddContext * /*ctx*/) override { }
  virtual void exitAdd(MikoParserRules::AddContext * /*ctx*/) override { }

  virtual void enterParent(MikoParserRules::ParentContext * /*ctx*/) override { }
  virtual void exitParent(MikoParserRules::ParentContext * /*ctx*/) override { }

  virtual void enterMinus(MikoParserRules::MinusContext * /*ctx*/) override { }
  virtual void exitMinus(MikoParserRules::MinusContext * /*ctx*/) override { }

  virtual void enterLogicBoS(MikoParserRules::LogicBoSContext * /*ctx*/) override { }
  virtual void exitLogicBoS(MikoParserRules::LogicBoSContext * /*ctx*/) override { }

  virtual void enterBitOr(MikoParserRules::BitOrContext * /*ctx*/) override { }
  virtual void exitBitOr(MikoParserRules::BitOrContext * /*ctx*/) override { }

  virtual void enterLogicOr(MikoParserRules::LogicOrContext * /*ctx*/) override { }
  virtual void exitLogicOr(MikoParserRules::LogicOrContext * /*ctx*/) override { }

  virtual void enterThis(MikoParserRules::ThisContext * /*ctx*/) override { }
  virtual void exitThis(MikoParserRules::ThisContext * /*ctx*/) override { }

  virtual void enterDot(MikoParserRules::DotContext * /*ctx*/) override { }
  virtual void exitDot(MikoParserRules::DotContext * /*ctx*/) override { }

  virtual void enterIncrement(MikoParserRules::IncrementContext * /*ctx*/) override { }
  virtual void exitIncrement(MikoParserRules::IncrementContext * /*ctx*/) override { }

  virtual void enterBitshift(MikoParserRules::BitshiftContext * /*ctx*/) override { }
  virtual void exitBitshift(MikoParserRules::BitshiftContext * /*ctx*/) override { }

  virtual void enterLogicEq(MikoParserRules::LogicEqContext * /*ctx*/) override { }
  virtual void exitLogicEq(MikoParserRules::LogicEqContext * /*ctx*/) override { }

  virtual void enterMulti(MikoParserRules::MultiContext * /*ctx*/) override { }
  virtual void exitMulti(MikoParserRules::MultiContext * /*ctx*/) override { }

  virtual void enterNot(MikoParserRules::NotContext * /*ctx*/) override { }
  virtual void exitNot(MikoParserRules::NotContext * /*ctx*/) override { }

  virtual void enterLambda(MikoParserRules::LambdaContext * /*ctx*/) override { }
  virtual void exitLambda(MikoParserRules::LambdaContext * /*ctx*/) override { }

  virtual void enterComma(MikoParserRules::CommaContext * /*ctx*/) override { }
  virtual void exitComma(MikoParserRules::CommaContext * /*ctx*/) override { }

  virtual void enterBitAnd(MikoParserRules::BitAndContext * /*ctx*/) override { }
  virtual void exitBitAnd(MikoParserRules::BitAndContext * /*ctx*/) override { }

  virtual void enterLogicAnd(MikoParserRules::LogicAndContext * /*ctx*/) override { }
  virtual void exitLogicAnd(MikoParserRules::LogicAndContext * /*ctx*/) override { }

  virtual void enterNegate(MikoParserRules::NegateContext * /*ctx*/) override { }
  virtual void exitNegate(MikoParserRules::NegateContext * /*ctx*/) override { }

  virtual void enterBitXor(MikoParserRules::BitXorContext * /*ctx*/) override { }
  virtual void exitBitXor(MikoParserRules::BitXorContext * /*ctx*/) override { }

  virtual void enterDecrment(MikoParserRules::DecrmentContext * /*ctx*/) override { }
  virtual void exitDecrment(MikoParserRules::DecrmentContext * /*ctx*/) override { }

  virtual void enterAtom(MikoParserRules::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(MikoParserRules::AtomContext * /*ctx*/) override { }

  virtual void enterOpen(MikoParserRules::OpenContext * /*ctx*/) override { }
  virtual void exitOpen(MikoParserRules::OpenContext * /*ctx*/) override { }

  virtual void enterAssign(MikoParserRules::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(MikoParserRules::AssignContext * /*ctx*/) override { }

  virtual void enterOpenExpression(MikoParserRules::OpenExpressionContext * /*ctx*/) override { }
  virtual void exitOpenExpression(MikoParserRules::OpenExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(MikoParserRules::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(MikoParserRules::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(MikoParserRules::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(MikoParserRules::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaHead(MikoParserRules::LambdaHeadContext * /*ctx*/) override { }
  virtual void exitLambdaHead(MikoParserRules::LambdaHeadContext * /*ctx*/) override { }

  virtual void enterLambdaBody(MikoParserRules::LambdaBodyContext * /*ctx*/) override { }
  virtual void exitLambdaBody(MikoParserRules::LambdaBodyContext * /*ctx*/) override { }

  virtual void enterCodeBlock(MikoParserRules::CodeBlockContext * /*ctx*/) override { }
  virtual void exitCodeBlock(MikoParserRules::CodeBlockContext * /*ctx*/) override { }

  virtual void enterReturncodeBlock(MikoParserRules::ReturncodeBlockContext * /*ctx*/) override { }
  virtual void exitReturncodeBlock(MikoParserRules::ReturncodeBlockContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace Miko
