
// Generated from MikoParserRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace Miko {


class  MikoParserRules : public antlr4::Parser {
public:
  enum {
    VAR = 1, CONST = 2, DEFINE = 3, OPEN = 4, THIS = 5, PUBLIC = 6, PRIVATE = 7, 
    LOCAL = 8, ENUM = 9, STRUCT = 10, STATIC = 11, IF = 12, ELSE = 13, MATCH = 14, 
    FOR = 15, FOREACH = 16, WHILE = 17, BREAK = 18, NEXT = 19, RETURN = 20, 
    ID = 21, INT = 22, CHAR = 23, FLOAT = 24, STRING = 25, DOT = 26, SEMIC = 27, 
    COLON = 28, COMMA = 29, ADD = 30, MIN = 31, MUL = 32, DIV = 33, MOD = 34, 
    AND = 35, OR = 36, NOT = 37, BIG = 38, BIG_EQ = 39, SMALL = 40, SMALL_EQ = 41, 
    DOB_EQ = 42, NOT_EQ = 43, BITAND = 44, BITOR = 45, BITXOR = 46, BITNOT = 47, 
    LSHIFT = 48, RSHIFT = 49, DADD = 50, DMIN = 51, LPAREN = 52, RPAREN = 53, 
    LBRACE = 54, RBRACE = 55, LBRACK = 56, RBRACK = 57, ASS = 58, MUL_ASS = 59, 
    DIV_ASS = 60, MOD_ASS = 61, ADD_ASS = 62, MIN_ASS = 63, LSHIFT_ASS = 64, 
    RSHIFT_ASS = 65, BITAND_ASS = 66, BITXOR_ASS = 67, BITOR_ASS = 68, LAMBDA = 69, 
    WS = 70
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleIfStatement = 2, RuleMatchStatement = 3, 
    RuleMatchMember = 4, RuleForStatement = 5, RuleWhileStatement = 6, RuleReturnStatement = 7, 
    RuleAccessKeyword = 8, RuleDefineKeyword = 9, RuleDefineStatement = 10, 
    RuleDefine = 11, RuleDefineExpression = 12, RuleType = 13, RuleStructType = 14, 
    RuleStructBody = 15, RuleStructDefineStatement = 16, RuleDefineEnum = 17, 
    RuleEnumBody = 18, RuleCall = 19, RuleCallIdentifier = 20, RuleCallFunction = 21, 
    RuleFunctionArgs = 22, RuleAtomExpression = 23, RuleExpression = 24, 
    RuleOpenExpression = 25, RuleAssignmentOperator = 26, RuleLambdaExpression = 27, 
    RuleLambdaHead = 28, RuleLambdaBody = 29, RuleCodeBlock = 30, RuleReturncodeBlock = 31
  };

  explicit MikoParserRules(antlr4::TokenStream *input);

  MikoParserRules(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MikoParserRules() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class IfStatementContext;
  class MatchStatementContext;
  class MatchMemberContext;
  class ForStatementContext;
  class WhileStatementContext;
  class ReturnStatementContext;
  class AccessKeywordContext;
  class DefineKeywordContext;
  class DefineStatementContext;
  class DefineContext;
  class DefineExpressionContext;
  class TypeContext;
  class StructTypeContext;
  class StructBodyContext;
  class StructDefineStatementContext;
  class DefineEnumContext;
  class EnumBodyContext;
  class CallContext;
  class CallIdentifierContext;
  class CallFunctionContext;
  class FunctionArgsContext;
  class AtomExpressionContext;
  class ExpressionContext;
  class OpenExpressionContext;
  class AssignmentOperatorContext;
  class LambdaExpressionContext;
  class LambdaHeadContext;
  class LambdaBodyContext;
  class CodeBlockContext;
  class ReturncodeBlockContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OpenExpressionContext *> openExpression();
    OpenExpressionContext* openExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMIC();
    antlr4::tree::TerminalNode* SEMIC(size_t i);
    std::vector<StructBodyContext *> structBody();
    StructBodyContext* structBody(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMIC();
    ExpressionContext *expression();
    DefineStatementContext *defineStatement();
    IfStatementContext *ifStatement();
    MatchStatementContext *matchStatement();
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    ReturnStatementContext *returnStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<CodeBlockContext *> codeBlock();
    CodeBlockContext* codeBlock(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  MatchStatementContext : public antlr4::ParserRuleContext {
  public:
    MatchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<MatchMemberContext *> matchMember();
    MatchMemberContext* matchMember(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *ELSE();
    CodeBlockContext *codeBlock();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MatchStatementContext* matchStatement();

  class  MatchMemberContext : public antlr4::ParserRuleContext {
  public:
    MatchMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    CodeBlockContext *codeBlock();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MatchMemberContext* matchMember();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    DefineContext *define();
    std::vector<antlr4::tree::TerminalNode *> SEMIC();
    antlr4::tree::TerminalNode* SEMIC(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    CodeBlockContext *codeBlock();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    CodeBlockContext *codeBlock();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMIC();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  AccessKeywordContext : public antlr4::ParserRuleContext {
  public:
    AccessKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessKeywordContext* accessKeyword();

  class  DefineKeywordContext : public antlr4::ParserRuleContext {
  public:
    DefineKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *DEFINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineKeywordContext* defineKeyword();

  class  DefineStatementContext : public antlr4::ParserRuleContext {
  public:
    DefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineKeywordContext *defineKeyword();
    DefineContext *define();
    antlr4::tree::TerminalNode *SEMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineStatementContext* defineStatement();

  class  DefineContext : public antlr4::ParserRuleContext {
  public:
    DefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefineExpressionContext *> defineExpression();
    DefineExpressionContext* defineExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASS();
    antlr4::tree::TerminalNode* ASS(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineContext* define();

  class  DefineExpressionContext : public antlr4::ParserRuleContext {
  public:
    DefineExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineExpressionContext* defineExpression();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ExpressionContext *expression();
    StructTypeContext *structType();
    DefineEnumContext *defineEnum();
    LambdaExpressionContext *lambdaExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *LBRACE();
    StructBodyContext *structBody();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *LPAREN();
    CallContext *call();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructTypeContext* structType();

  class  StructBodyContext : public antlr4::ParserRuleContext {
  public:
    StructBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructDefineStatementContext *> structDefineStatement();
    StructDefineStatementContext* structDefineStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructBodyContext* structBody();

  class  StructDefineStatementContext : public antlr4::ParserRuleContext {
  public:
    StructDefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineStatementContext *defineStatement();
    AccessKeywordContext *accessKeyword();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefineStatementContext* structDefineStatement();

  class  DefineEnumContext : public antlr4::ParserRuleContext {
  public:
    DefineEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *LBRACE();
    EnumBodyContext *enumBody();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *LPAREN();
    CallContext *call();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineEnumContext* defineEnum();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASS();
    antlr4::tree::TerminalNode* ASS(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumBodyContext* enumBody();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallFunctionContext *callFunction();
    CallIdentifierContext *callIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallContext* call();

  class  CallIdentifierContext : public antlr4::ParserRuleContext {
  public:
    CallIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallIdentifierContext* callIdentifier();

  class  CallFunctionContext : public antlr4::ParserRuleContext {
  public:
    CallFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallFunctionContext* callFunction();

  class  FunctionArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgsContext* functionArgs();

  class  AtomExpressionContext : public antlr4::ParserRuleContext {
  public:
    AtomExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomExpressionContext* atomExpression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddContext : public ExpressionContext {
  public:
    AddContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MIN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParentContext : public ExpressionContext {
  public:
    ParentContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MinusContext : public ExpressionContext {
  public:
    MinusContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MIN();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicBoSContext : public ExpressionContext {
  public:
    LogicBoSContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BIG();
    antlr4::tree::TerminalNode *BIG_EQ();
    antlr4::tree::TerminalNode *SMALL();
    antlr4::tree::TerminalNode *SMALL_EQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitOrContext : public ExpressionContext {
  public:
    BitOrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicOrContext : public ExpressionContext {
  public:
    LogicOrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThisContext : public ExpressionContext {
  public:
    ThisContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *THIS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DotContext : public ExpressionContext {
  public:
    DotContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    CallContext *call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IncrementContext : public ExpressionContext {
  public:
    IncrementContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DADD();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitshiftContext : public ExpressionContext {
  public:
    BitshiftContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LSHIFT();
    antlr4::tree::TerminalNode *RSHIFT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicEqContext : public ExpressionContext {
  public:
    LogicEqContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOB_EQ();
    antlr4::tree::TerminalNode *NOT_EQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultiContext : public ExpressionContext {
  public:
    MultiContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotContext : public ExpressionContext {
  public:
    NotContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LambdaContext : public ExpressionContext {
  public:
    LambdaContext(ExpressionContext *ctx);

    LambdaExpressionContext *lambdaExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CommaContext : public ExpressionContext {
  public:
    CommaContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitAndContext : public ExpressionContext {
  public:
    BitAndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicAndContext : public ExpressionContext {
  public:
    LogicAndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NegateContext : public ExpressionContext {
  public:
    NegateContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *BITNOT();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitXorContext : public ExpressionContext {
  public:
    BitXorContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITXOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DecrmentContext : public ExpressionContext {
  public:
    DecrmentContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DMIN();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AtomContext : public ExpressionContext {
  public:
    AtomContext(ExpressionContext *ctx);

    AtomExpressionContext *atomExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OpenContext : public ExpressionContext {
  public:
    OpenContext(ExpressionContext *ctx);

    OpenExpressionContext *openExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignContext : public ExpressionContext {
  public:
    AssignContext(ExpressionContext *ctx);

    CallIdentifierContext *callIdentifier();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  OpenExpressionContext : public antlr4::ParserRuleContext {
  public:
    OpenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    CallIdentifierContext *callIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpenExpressionContext* openExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASS();
    antlr4::tree::TerminalNode *DIV_ASS();
    antlr4::tree::TerminalNode *MUL_ASS();
    antlr4::tree::TerminalNode *MOD_ASS();
    antlr4::tree::TerminalNode *ADD_ASS();
    antlr4::tree::TerminalNode *MIN_ASS();
    antlr4::tree::TerminalNode *LSHIFT_ASS();
    antlr4::tree::TerminalNode *RSHIFT_ASS();
    antlr4::tree::TerminalNode *BITAND_ASS();
    antlr4::tree::TerminalNode *BITXOR_ASS();
    antlr4::tree::TerminalNode *BITOR_ASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaHeadContext *lambdaHead();
    antlr4::tree::TerminalNode *DOT();
    LambdaBodyContext *lambdaBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaHeadContext : public antlr4::ParserRuleContext {
  public:
    LambdaHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAMBDA();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<DefineContext *> define();
    DefineContext* define(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaHeadContext* lambdaHead();

  class  LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();
    ReturncodeBlockContext *returncodeBlock();
    StatementContext *statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class  CodeBlockContext : public antlr4::ParserRuleContext {
  public:
    CodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CodeBlockContext* codeBlock();

  class  ReturncodeBlockContext : public antlr4::ParserRuleContext {
  public:
    ReturncodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturncodeBlockContext* returncodeBlock();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace Miko
