
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
    RSHIFT_ASS = 65, BITAND_ASS = 66, BITXOR_ASS = 67, BITOR_ASS = 68, COMPILER = 69, 
    LAMBDA = 70, WS = 71
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleIfStatement = 2, RuleMatchStatement = 3, 
    RuleMatchMember = 4, RuleForStatement = 5, RuleWhileStatement = 6, RuleReturnStatement = 7, 
    RuleOpenStatement = 8, RuleAccessKeyword = 9, RuleDefineKeyword = 10, 
    RuleDefineStatement = 11, RuleDefine = 12, RuleDefineExpression = 13, 
    RuleType = 14, RuleStructType = 15, RuleStructBody = 16, RuleStructDefineStatement = 17, 
    RuleDefineEnum = 18, RuleEnumBody = 19, RuleCall = 20, RuleCompilerCall = 21, 
    RuleProgramCall = 22, RuleCallIdentifier = 23, RuleCallFunction = 24, 
    RuleFunctionArgs = 25, RuleAtomExpression = 26, RuleExpression = 27, 
    RuleOpenExpression = 28, RuleAssignmentOperator = 29, RuleLambdaExpression = 30, 
    RuleLambdaHead = 31, RuleLambdaBody = 32, RuleCodeBlock = 33, RuleReturncodeBlock = 34
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
  class OpenStatementContext;
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
  class CompilerCallContext;
  class ProgramCallContext;
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
    std::vector<StructBodyContext *> structBody();
    StructBodyContext* structBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    OpenStatementContext *openStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMIC();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  OpenStatementContext : public antlr4::ParserRuleContext {
  public:
    OpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpenStatementContext* openStatement();

  class  AccessKeywordContext : public antlr4::ParserRuleContext {
  public:
    AccessKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessKeywordContext* accessKeyword();

  class  DefineKeywordContext : public antlr4::ParserRuleContext {
  public:
    DefineKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *DEFINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineKeywordContext* defineKeyword();

  class  DefineStatementContext : public antlr4::ParserRuleContext {
  public:
    DefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineKeywordContext *defineKeyword();
    DefineContext *define();
    antlr4::tree::TerminalNode *SEMIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineContext* define();

  class  DefineExpressionContext : public antlr4::ParserRuleContext {
  public:
    DefineExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  StructBodyContext : public antlr4::ParserRuleContext {
  public:
    StructBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OpenStatementContext *> openStatement();
    OpenStatementContext* openStatement(size_t i);
    std::vector<StructDefineStatementContext *> structDefineStatement();
    StructDefineStatementContext* structDefineStatement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructBodyContext* structBody();

  class  StructDefineStatementContext : public antlr4::ParserRuleContext {
  public:
    StructDefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineStatementContext *defineStatement();
    AccessKeywordContext *accessKeyword();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyContext* enumBody();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompilerCallContext *compilerCall();
    ProgramCallContext *programCall();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  CompilerCallContext : public antlr4::ParserRuleContext {
  public:
    CompilerCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPILER();
    CallFunctionContext *callFunction();
    CallIdentifierContext *callIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilerCallContext* compilerCall();

  class  ProgramCallContext : public antlr4::ParserRuleContext {
  public:
    ProgramCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallFunctionContext *callFunction();
    CallIdentifierContext *callIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramCallContext* programCall();

  class  CallIdentifierContext : public antlr4::ParserRuleContext {
  public:
    CallIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParentContext : public ExpressionContext {
  public:
    ParentContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusContext : public ExpressionContext {
  public:
    MinusContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MIN();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrContext : public ExpressionContext {
  public:
    BitOrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITOR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicOrContext : public ExpressionContext {
  public:
    LogicOrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisContext : public ExpressionContext {
  public:
    ThisContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *THIS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DotContext : public ExpressionContext {
  public:
    DotContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    CallContext *call();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncrementContext : public ExpressionContext {
  public:
    IncrementContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DADD();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitshiftContext : public ExpressionContext {
  public:
    BitshiftContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LSHIFT();
    antlr4::tree::TerminalNode *RSHIFT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicEqContext : public ExpressionContext {
  public:
    LogicEqContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOB_EQ();
    antlr4::tree::TerminalNode *NOT_EQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiContext : public ExpressionContext {
  public:
    MultiContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotContext : public ExpressionContext {
  public:
    NotContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LambdaContext : public ExpressionContext {
  public:
    LambdaContext(ExpressionContext *ctx);

    LambdaExpressionContext *lambdaExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CommaContext : public ExpressionContext {
  public:
    CommaContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndContext : public ExpressionContext {
  public:
    BitAndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITAND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicAndContext : public ExpressionContext {
  public:
    LogicAndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegateContext : public ExpressionContext {
  public:
    NegateContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *BITNOT();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXorContext : public ExpressionContext {
  public:
    BitXorContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BITXOR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecrmentContext : public ExpressionContext {
  public:
    DecrmentContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DMIN();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomContext : public ExpressionContext {
  public:
    AtomContext(ExpressionContext *ctx);

    AtomExpressionContext *atomExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpenContext : public ExpressionContext {
  public:
    OpenContext(ExpressionContext *ctx);

    OpenExpressionContext *openExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public ExpressionContext {
  public:
    AssignContext(ExpressionContext *ctx);

    CallIdentifierContext *callIdentifier();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  OpenExpressionContext : public antlr4::ParserRuleContext {
  public:
    OpenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    CallIdentifierContext *callIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaHeadContext *lambdaHead();
    antlr4::tree::TerminalNode *DOT();
    LambdaBodyContext *lambdaBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeBlockContext* codeBlock();

  class  ReturncodeBlockContext : public antlr4::ParserRuleContext {
  public:
    ReturncodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    CodeBlockContext *codeBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
