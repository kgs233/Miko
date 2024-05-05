namespace Miko.Lib.Structure
{
    public enum TokenType
    {
        Identifer,
        Integer,
        Float,
        String,
        Char,
        True,
        False,
        Null,

        KW_break,
        KW_continue,
        KW_else,
        KW_for,
        KW_foreach,
        KW_force,
        KW_function,
        KW_if,
        KW_initonly,
        KW_must,
        KW_new,
        KW_namespace,
        KW_open,
        KW_out,
        KW_pionter,
        KW_private,
        KW_public,
        KW_readonly,
        KW_return,
        KW_ref,
        KW_struct,
        KW_tuple,
        KW_var,
        KW_while,

        OP_Add,  // +
        OP_Sub,  // -
        OP_Mul,  // *
        OP_Div,  // /
        OP_Mod,  // %
        OP_Eq,   // ==
        OP_Lt,   // <
        OP_Le,   // <=
        OP_Gt,   // >
        OP_Ge,   // >=
        OP_Ne,   // !=

        OP_And,  // &&
        OP_Or,   // ||
        OP_Not,  // !

        OP_Bit_And,  // &
        OP_Bit_Or,   // |
        OP_Bit_Xor,  // ^
        OP_Bit_Not,  // ~
        OP_Bit_Shift_Left,  // <<
        OP_Bit_Shift_Right, // >>

        OP_Ass,  // =
        OP_Add_Ass, // +=
        OP_Sub_Ass, // -=
        OP_Mul_Ass, // *=
        OP_Div_Ass, // /=
        OP_Mod_Ass, // %=

        OP_Double_Add, // ++
        OP_Double_Sub, // --

        DL_Paren_Open,
        DL_Paren_Close,
        DL_Bracket_Open,
        DL_Bracket_Close,
        DL_CurlyBrace_Open,
        DL_CurlyBrace_Close,
        DL_Comma,
        DL_Colon,
        DL_Double_Colon,
        DL_Semicolon,
        DL_Dot,
    }
}