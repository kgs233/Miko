namespace Miko.Library.Lexer
{
    public enum LexerTokenType
    {
        // --- 1. 特殊/核心类型 ---
        EOF,              // 文件结束
        WHITESPACE,       // 空白（通常被忽略）
        ERROR,            // 无法识别的序列

        // --- 2. 标识符与字面量 ---
        ID,
        INT,
        FLOAT,
        STRING,
        CHAR,

        // --- 3. 关键字 (K_) ---
        KEYWORD_DEFINE,
        KEYWORD_PUBLIC,
        KEYWORD_PRIVATE,
        KEYWORD_CONST,
        KEYWORD_TYPE,
        KEYWORD_STRUCT,
        KEYWORD_TUPLE,
        KEYWORD_DERIVE,
        KEYWORD_OPERATOR,
        KEYWORD_LEFT,
        KEYWORD_RIGHT,
        KEYWORD_FN,
        KEYWORD_IF,
        KEYWORD_ELSE,
        KEYWORD_LOOP,
        KEYWORD_BREAK,
        KEYWORD_EXIT,
        KEYWORD_NEXT,
        KEYWORD_AS,
        KEYWORD_IMPORT,
        KEYWORD_NULL,
        KEYWORD_TRUE,
        KEYWORD_FALSE,
        KEYWORD_AUTO,
        KEYWORD_ENUM,

        // --- 4. 运算符和标点符号 (OP_) ---
        OP_ASSIGN,          // =
        OP_COLON,           // :
        OP_DOT,             // .
        OP_COMMA,           // ,
        OP_ARROW,           // ->
        OP_PIPE,            // |
        OP_SEMICOLON,       // ;
        OP_LPAREN,          // (
        OP_RPAREN,          // )
        OP_LBRACE,          // {
        OP_RBRACE,          // }
        OP_LBRACKET,        // [
        OP_RBRACKET,        // ]
        OP_AT,              // @

        // 赋值运算符 (OP_ASSIGN_SHORTHAND 拆分)
        OP_ADD_ASSIGN,      // +=
        OP_SUB_ASSIGN,      // -=
        OP_MUL_ASSIGN,      // *=
        OP_DIV_ASSIGN,      // /=
        OP_MOD_ASSIGN,      // %=
        OP_SHL_ASSIGN,      // <<=
        OP_SHR_ASSIGN,      // >>=
        OP_AND_ASSIGN,      // &=
        OP_XOR_ASSIGN,      // ^=
        OP_OR_ASSIGN,       // |=

        // 一元/算术/位运算
        OP_INC,             // ++
        OP_DEC,             // --
        OP_NOT,             // !
        OP_BITNOT,          // ~
        OP_MUL,             // *
        OP_DIV,             // /
        OP_MOD,             // %
        OP_ADD,             // +
        OP_SUB,             // -
        OP_SHL,             // <<
        OP_SHR,             // >>
        OP_BITAND,          // &
        OP_BITXOR,          // ^

        // 关系/逻辑运算
        OP_LT,              // <
        OP_GT,              // >
        OP_LE,              // <=
        OP_GE,              // >=
        OP_EQ,              // ==
        OP_NE,              // !=
        OP_AND,             // &&
        OP_OR,              // ||
        OP_QUERY            // ?
    }
}