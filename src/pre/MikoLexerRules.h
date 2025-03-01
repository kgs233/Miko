
// Generated from ./MikoLexerRules.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace Miko {


class  MikoLexerRules : public antlr4::Lexer {
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

  explicit MikoLexerRules(antlr4::CharStream *input);

  ~MikoLexerRules() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace Miko
