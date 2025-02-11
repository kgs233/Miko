
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
