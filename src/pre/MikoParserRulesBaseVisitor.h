
// Generated from MikoParserRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MikoParserRulesVisitor.h"


namespace Miko {

/**
 * This class provides an empty implementation of MikoParserRulesVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MikoParserRulesBaseVisitor : public MikoParserRulesVisitor {
public:

  virtual std::any visitProg(MikoParserRules::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(MikoParserRules::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(MikoParserRules::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchStatement(MikoParserRules::MatchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchMember(MikoParserRules::MatchMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(MikoParserRules::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(MikoParserRules::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(MikoParserRules::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenStatement(MikoParserRules::OpenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessKeyword(MikoParserRules::AccessKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineKeyword(MikoParserRules::DefineKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineStatement(MikoParserRules::DefineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineExpression(MikoParserRules::DefineExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineType(MikoParserRules::DefineTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternVar(MikoParserRules::ExternVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternFunc(MikoParserRules::ExternFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternStruct(MikoParserRules::ExternStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructType(MikoParserRules::StructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructMember(MikoParserRules::StructMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineEnum(MikoParserRules::DefineEnumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumMember(MikoParserRules::EnumMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtendObject(MikoParserRules::ExtendObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilerVar(MikoParserRules::CompilerVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilerFunc(MikoParserRules::CompilerFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(MikoParserRules::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionArgs(MikoParserRules::FunctionArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomExpression(MikoParserRules::AtomExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(MikoParserRules::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent(MikoParserRules::ParentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinus(MikoParserRules::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicBoS(MikoParserRules::LogicBoSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitOr(MikoParserRules::BitOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOr(MikoParserRules::LogicOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDot(MikoParserRules::DotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThis(MikoParserRules::ThisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncrement(MikoParserRules::IncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitshift(MikoParserRules::BitshiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicEq(MikoParserRules::LogicEqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulti(MikoParserRules::MultiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma(MikoParserRules::CommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNot(MikoParserRules::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda(MikoParserRules::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitAnd(MikoParserRules::BitAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicAnd(MikoParserRules::LogicAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegate(MikoParserRules::NegateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitXor(MikoParserRules::BitXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecrment(MikoParserRules::DecrmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(MikoParserRules::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpen(MikoParserRules::OpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject(MikoParserRules::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(MikoParserRules::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenExpression(MikoParserRules::OpenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(MikoParserRules::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(MikoParserRules::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaHead(MikoParserRules::LambdaHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaBody(MikoParserRules::LambdaBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCodeBlock(MikoParserRules::CodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturncodeBlock(MikoParserRules::ReturncodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace Miko
