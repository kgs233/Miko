#ifndef MIKO_TOKEN_HPP
#define MIKO_TOKEN_HPP

#include <string>
enum class TokenType {
    TOKEN_IDENTIFIER,
    TOKEN_INTEGER,
    TOKEN_FLOAT,
    TOKEN_STRING,
    TOKEN_CHAR,

    TOKEN_KW_AUTO,
    TOKEN_KW_BYTE,
    TOKEN_KW_CONST,
    TOKEN_KW_DYNAMIC,
    TOKEN_KW_DEFINE,
    TOKEN_KW_ELSE,
    TOKEN_KW_ENUM,
    TOKEN_KW_FALSE,
    TOKEN_KW_FOR,
    TOKEN_KW_FOREACH,
    TOKEN_KW_FUNCTION,
    TOKEN_KW_GOTO,
    TOKEN_KW_IF,
    TOKEN_KW_IN,
    TOKEN_KW_JUMP,
    TOKEN_KW_NEXT,
    TOKEN_KW_NULL,
    TOKEN_KW_ONLY,
    TOKEN_KW_OPEN,
    TOKEN_KW_PRIVATE,
    TOKEN_KW_PUBLIC,
    TOKEN_KW_REF,
    TOKEN_KW_RETURN,
    TOKEN_KW_STRUCT,
    TOKEN_KW_STOP,
    TOKEN_KW_SWITCH,
    TOKEN_KW_THIS,
    TOKEN_KW_TRUE,
    TOKEN_KW_VAR,
    TOKEN_KW_WHILE,

    TOKEN_OP_ADD,
    TOKEN_OP_SUB,
    TOKEN_OP_MUL,
    TOKEN_OP_DIV,
    TOKEN_OP_MOD,
    TOKEN_OP_EQ,
    TOKEN_OP_LT,
    TOKEN_OP_LE,
    TOKEN_OP_GT,
    TOKEN_OP_GE,
    TOKEN_OP_NE,

    TOKEN_OP_AND,
    TOKEN_OP_OR,
    TOKEN_OP_NOT,

    TOKEN_OP_BIT_AND,
    TOKEN_OP_BIT_OR,
    TOKEN_OP_BIT_XOR,
    TOKEN_OP_BIT_NOT,
    TOKEN_OP_BIT_SHIFT_LEFT,
    TOKEN_OP_BIT_SHIFT_RIGHT,

    TOKEN_OP_ASS,
    TOKEN_OP_ADD_ASS,
    TOKEN_OP_SUB_ASS,
    TOKEN_OP_MUL_ASS,
    TOKEN_OP_DIV_ASS,
    TOKEN_OP_MOD_ASS,

    TOKEN_OP_AND_ASS,
    TOKEN_OP_OR_ASS,
    TOKEN_OP_XOR_ASS,
    TOKEN_OP_SHIFT_LEFT_ASS,
    TOKEN_OP_SHIFT_RIGHT_ASS,

    TOKEN_OP_DOUBLE_ADD,
    TOKEN_OP_DOUBLE_SUB,

    TOKEN_OP_AT,

    TOKEN_OP_RET,

    TOKEN_DL_PAREN_OPEN,
    TOKEN_DL_PAREN_CLOSE,
    TOKEN_DL_BRACKET_OPEN,
    TOKEN_DL_BRACKET_CLOSE,
    TOKEN_DL_CURLY_BRACE_OPEN,
    TOKEN_DL_CURLY_BRACE_CLOSE,
    TOKEN_DL_COMMA,
    TOKEN_DL_COLON,
    TOKEN_DL_DOUBLE_COLON,
    TOKEN_DL_SEMICOLON,
    TOKEN_DL_DOT,
};

class Token {
public:
    TokenType Type;
    std::string Value;
    int Line;
    int ColumnStart;
    int ColumnEnd;

    Token(TokenType type, std::string value, int line, int columnStart, int columnEnd);
};

#endif // MIKO_TOKEN_HPP