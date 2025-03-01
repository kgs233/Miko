
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
    CALL = 21, ID = 22, INT = 23, CHAR = 24, FLOAT = 25, STRING = 26, DOT = 27, 
    SEMIC = 28, COLON = 29, COMMA = 30, ADD = 31, MIN = 32, MUL = 33, DIV = 34, 
    MOD = 35, AND = 36, OR = 37, NOT = 38, BIG = 39, BIG_EQ = 40, SMALL = 41, 
    SMALL_EQ = 42, DOB_EQ = 43, NOT_EQ = 44, BITAND = 45, BITOR = 46, BITXOR = 47, 
    BITNOT = 48, LSHIFT = 49, RSHIFT = 50, DADD = 51, DMIN = 52, LPAREN = 53, 
    RPAREN = 54, LBRACE = 55, RBRACE = 56, LBRACK = 57, RBRACK = 58, ASS = 59, 
    MUL_ASS = 60, DIV_ASS = 61, MOD_ASS = 62, ADD_ASS = 63, MIN_ASS = 64, 
    LSHIFT_ASS = 65, RSHIFT_ASS = 66, BITAND_ASS = 67, BITXOR_ASS = 68, 
    BITOR_ASS = 69, COMPILER = 70, LAMBDA = 71, WS = 72
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleIfStatement = 2, RuleMatchStatement = 3, 
    RuleMatchMember = 4, RuleForStatement = 5, RuleWhileStatement = 6, RuleReturnStatement = 7, 
    RuleOpenStatement = 8, RuleAccessKeyword = 9, RuleDefineKeyword = 10, 
    RuleDefineStatement = 11, RuleDefineExpression = 12, RuleDefineType = 13, 
    RuleExternCall = 14, RuleStructType = 15, RuleStructMember = 16, RuleDefineEnum = 17, 
    RuleEnumMember = 18, RuleExtendObject = 19, RuleCompilerCall = 20, RuleCall = 21, 
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
  class OpenStatementContext;
  class AccessKeywordContext;
  class DefineKeywordContext;
  class DefineStatementContext;
  class DefineExpressionContext;
  class DefineTypeContext;
  class ExternCallContext;
  class StructTypeContext;
  class StructMemberContext;
  class DefineEnumContext;
  class EnumMemberContext;
  class ExtendObjectContext;
  class CompilerCallContext;
  class CallContext;
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
    std::vector<OpenStatementContext *> openStatement();
    OpenStatementContext* openStatement(size_t i);
    std::vector<StructMemberContext *> structMember();
    StructMemberContext* structMember(size_t i);


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
    DefineExpressionContext *defineExpression();
    std::vector<antlr4::tree::TerminalNode *> SEMIC();
    antlr4::tree::TerminalNode* SEMIC(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    CodeBlockContext *codeBlock();
    StatementContext *statement();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


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
    std::vector<DefineExpressionContext *> defineExpression();
    DefineExpressionContext* defineExpression(size_t i);
    antlr4::tree::TerminalNode *SEMIC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineStatementContext* defineStatement();

  class  DefineExpressionContext : public antlr4::ParserRuleContext {
  public:
    DefineExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
    DefineTypeContext *defineType();
    antlr4::tree::TerminalNode *ASS();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineExpressionContext* defineExpression();

  class  DefineTypeContext : public antlr4::ParserRuleContext {
  public:
    DefineTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompilerCallContext *compilerCall();
    CallContext *call();
    DefineEnumContext *defineEnum();
    StructTypeContext *structType();
    LambdaExpressionContext *lambdaExpression();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<DefineTypeContext *> defineType();
    DefineTypeContext* defineType(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> BITOR();
    antlr4::tree::TerminalNode* BITOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineTypeContext* defineType();

  class  ExternCallContext : public antlr4::ParserRuleContext {
  public:
    ExternCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExternCallContext() = default;
    void copyFrom(ExternCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExternVarContext : public ExternCallContext {
  public:
    ExternVarContext(ExternCallContext *ctx);

    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExternFuncContext : public ExternCallContext {
  public:
    ExternFuncContext(ExternCallContext *ctx);

    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExternStructContext : public ExternCallContext {
  public:
    ExternStructContext(ExternCallContext *ctx);

    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StructMemberContext *> structMember();
    StructMemberContext* structMember(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExternCallContext* externCall();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    ExtendObjectContext *extendObject();
    std::vector<OpenStatementContext *> openStatement();
    OpenStatementContext* openStatement(size_t i);
    std::vector<StructMemberContext *> structMember();
    StructMemberContext* structMember(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  StructMemberContext : public antlr4::ParserRuleContext {
  public:
    StructMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineStatementContext *defineStatement();
    AccessKeywordContext *accessKeyword();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructMemberContext* structMember();

  class  DefineEnumContext : public antlr4::ParserRuleContext {
  public:
    DefineEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<EnumMemberContext *> enumMember();
    EnumMemberContext* enumMember(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    ExtendObjectContext *extendObject();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineEnumContext* defineEnum();

  class  EnumMemberContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASS();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumMemberContext* enumMember();

  class  ExtendObjectContext : public antlr4::ParserRuleContext {
  public:
    ExtendObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    CallContext *call();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtendObjectContext* extendObject();

  class  CompilerCallContext : public antlr4::ParserRuleContext {
  public:
    CompilerCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompilerCallContext() = default;
    void copyFrom(CompilerCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CompilerFuncContext : public CompilerCallContext {
  public:
    CompilerFuncContext(CompilerCallContext *ctx);

    antlr4::tree::TerminalNode *COMPILER();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompilerVarContext : public CompilerCallContext {
  public:
    CompilerVarContext(CompilerCallContext *ctx);

    antlr4::tree::TerminalNode *COMPILER();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompilerCallContext* compilerCall();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

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

  class  DotContext : public ExpressionContext {
  public:
    DotContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DOT();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisContext : public ExpressionContext {
  public:
    ThisContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *THIS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncrementContext : public ExpressionContext {
  public:
    IncrementContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DADD();

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

  class  CommaContext : public ExpressionContext {
  public:
    CommaContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *COMMA();
    ExpressionContext *expression();

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

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DMIN();

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

  class  ObjectContext : public ExpressionContext {
  public:
    ObjectContext(ExpressionContext *ctx);

    CallContext *call();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public ExpressionContext {
  public:
    AssignContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AssignmentOperatorContext *assignmentOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  OpenExpressionContext : public antlr4::ParserRuleContext {
  public:
    OpenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


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
    std::vector<DefineExpressionContext *> defineExpression();
    DefineExpressionContext* defineExpression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


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
    DefineTypeContext *defineType();
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
