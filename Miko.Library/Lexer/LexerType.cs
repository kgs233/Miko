namespace Miko.Library.Lexer
{
    public enum LexerTokenType
    {
        // 核心字面量类型
        Identifier, // 标识符（遵循 Python 风格：字母或_开头，后跟字母、数字或_）
        Integer,    // 整数
        Float,      // 浮点数
        String,     // 字符串
        Char,       // 字符

        // 关键词 (xxxKeyword)
        IfKeyword,
        ElseKeyword,
        MatchKeyword,
        WhileKeyword,
        ForKeyword,
        ForeachKeyword,
        StructKeyword,
        DerivedKeyword,
        EnumKeyword,
        GetKeyword,
        SetKeyword,
        ValueKeyword,
        FieldKeyword,
        LambdaKeyword,
        ThisKeyword,
        AsmKeyword,
        ReturnKeyword,
        BreakKeyword,
        StopKeyword,
        NextKeyword,
        DefineKeyword,
        NullKeyword,
        StaticKeyword,
        PublicKeyword,
        PrivateKeyword,
        OpenKeyword,        

        // 符号 (xxxSymbol)
        // 单字符符号
        LeftParenSymbol,      // (
        RightParenSymbol,     // )
        LeftBraceSymbol,            // {
        RightBraceSymbol,           // }
        LeftBracketSymbol,          // [
        RightBracketSymbol,         // ]
        CommaSymbol,                // ,
        DotSymbol,                  // .
        SemicolonSymbol,            // ;
        ColonSymbol,                // :
        QuestionSymbol,         // ?
        NegateSymbol,                // ~
        NotSymbol,      // !
        AtSymbol,                   // @ (保留，因为未明确要求删除，但如果不需要可以删除)

        // 赋值和运算
        AssignSymbol,           // =
        PlusSymbol,                 // +
        MinusSymbol,                // -
        MultiplySymbol,             // *
        DivideSymbol,               // /
        ModuloSymbol,               // %
        BitAndSymbol,            // &
        BitOrSymbol,                 // |
        BitXorSymbol,                // ^
        LessSymbol,             // <
        GreaterSymbol,          // >

        // 多字符符号
        IncrementSymbol,            // ++
        DecrementSymbol,            // --
        EqualSymbol,                // ==
        NotEqualSymbol,             // !=
        LessEqualSymbol,      // <=
        GreaterEqualSymbol,   // >=
        LogicalAndSymbol,           // &&
        LogicalOrSymbol,            // ||
        LeftShiftSymbol,            // <<
        RightShiftSymbol,           // >>

        // 复合赋值运算符
        PlusAssignSymbol,       // +=
        MinusAssignSymbol,      // -=
        MultiplyAssignSymbol,   // *=
        DivideAssignSymbol,     // /=
        ModuloAssignSymbol,     // %=
        AndAssignSymbol,        // &= (新增)
        OrAssignSymbol,         // |= (新增)
        XorAssignSymbol,        // ^= (新增)
        LeftShiftAssignSymbol,  // <<= (新增)
        RightShiftAssignSymbol, // >>= (新增)

        // 特殊运算符
        LambdaArrowSymbol,       // ->

        EndOfFile
    }
}