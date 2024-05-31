using System.Text.RegularExpressions;

using Miko.Lib.Structure;

namespace Miko.Lib
{

    public class Lexer
    {
        public MikoQueue<char> Article = new();
        List<Token> Tokens = new();

        public List<Token> Lex()
        {
            string value = "";
            int line = 0;
            int column = 0;

            void nextColumn()
            {
                column++;
                value += Article.Dequeue();
            }

            bool peek(string str)
            {
                foreach (char c in str)
                {
                    if (Article.Peek() == c)
                    {
                        nextColumn();
                    }
                    else
                    {
                        return false;
                    }
                }
                return true;
            }

            while (Article.Count > 0)
            {
                while (Article.Peek() == ' ')
                {
                    column++;
                    Article.Dequeue();
                }

                if (value == "")
                {
                    switch (Article.Peek())
                    {
                        case '\"':
                            nextColumn();
                            while (Article.Peek() != '"')
                            {
                                if (Article.Peek() == '\\')
                                {
                                    nextColumn();
                                    switch (Article.Peek())
                                    {
                                        case '\\':
                                            value += "\\";
                                            break;
                                        case '\"':
                                            value += '\"';
                                            break;
                                        case '\'':
                                            value += '\'';
                                            break;
                                        case 'n':
                                            value += '\n';
                                            break;
                                        case 'r':
                                            value += '\r';
                                            break;
                                        case 't':
                                            value += '\t';
                                            break;
                                        case 'f':
                                            value += '\f';
                                            break;
                                        case 'b':
                                            value += '\b';
                                            break;
                                        case 'a':
                                            value += '\a';
                                            break;
                                        case '0':
                                            value += '\0';
                                            break;

                                        default:
                                            value += '\\';
                                            continue;
                                    }
                                    column++;
                                    Article.Dequeue();
                                }
                                nextColumn();
                            }
                            nextColumn();
                            Tokens.Add(new(TokenType.String, value, line, column));
                            value = "";
                            break;

                        case '\'':
                            nextColumn();
                            if (Article.Peek() == '\'')
                            {
                                throw new Exception("Lex Error: Null char error");
                            }
                            if (Article.Peek() == '\\')
                            {
                                nextColumn();
                                switch (Article.Peek())
                                {
                                    case '\\':
                                        value += "\\";
                                        break;
                                    case '\"':
                                        value += '\"';
                                        break;
                                    case '\'':
                                        value += '\'';
                                        break;
                                    case 'n':
                                        value += '\n';
                                        break;
                                    case 'r':
                                        value += '\r';
                                        break;
                                    case 't':
                                        value += '\t';
                                        break;
                                    case 'f':
                                        value += '\f';
                                        break;
                                    case 'b':
                                        value += '\b';
                                        break;
                                    case 'a':
                                        value += '\a';
                                        break;
                                    case '0':
                                        value += '\0';
                                        break;

                                    default:
                                        throw new Exception("Lex Error: Not char error");
                                }
                                nextColumn();
                            }
                            else
                            {
                                nextColumn();
                            }

                            if (Article.Peek() != '\'')
                            {
                                throw new Exception("Lex Error: Not char error");
                            }
                            else
                            {
                                Tokens.Add(new(TokenType.Char, value, line, column));
                                Article.Dequeue();
                                value = "";
                            }
                            break;

                        case 'a':
                            nextColumn();
                            if(peek("auto"))
                            {
                                Tokens.Add(new(TokenType.KW_auto, value, line, column));
                                value = "";
                            }
                            break;

                        case 'b':
                            nextColumn();
                            if(peek("yte"))
                            {
                                Tokens.Add(new(TokenType.KW_byte, value, line, column));
                                value = "";
                            }
                            break;

                        case 'c':
                            nextColumn();
                            if (peek("onst"))
                            {
                                Tokens.Add(new(TokenType.KW_const, value, line, column));
                                value = "";
                            }
                            break;

                        case 'd':
                            nextColumn();
                            if(peek("ynamic"))
                            {
                                Tokens.Add(new(TokenType.KW_dynamic, value, line, column));
                                value = "";
                            }
                            break;

                        case 'e':
                            nextColumn();
                            if (peek("lse"))
                            {
                                Tokens.Add(new(TokenType.KW_else, value, line, column));
                                value = "";
                            }
                            else if(peek("num"))
                            {
                                Tokens.Add(new(TokenType.KW_enum, value, line, column));
                                value = "";
                            }
                            break;

                        case 'f':
                            nextColumn();
                            if (peek("alse"))
                            {
                                Tokens.Add(new(TokenType.False, value, line, column));
                                value = "";
                            }
                            else if (peek("or"))
                            {
                                if (peek("each"))
                                {
                                    Tokens.Add(new(TokenType.KW_foreach, value, line, column));

                                }
                                else
                                {
                                    Tokens.Add(new(TokenType.KW_for, value, line, column));
                                }
                                value = "";

                            }
                            else if (peek("unction"))
                            {
                                Tokens.Add(new(TokenType.KW_function, value, line, column));
                                value = "";
                            }
                            break;

                        case 'g':
                            nextColumn();
                            if(peek("oto"))
                            {
                                Tokens.Add(new(TokenType.KW_goto, value, line, column));
                                value = "";
                            }
                            break;

                        case 'i':
                            nextColumn();
                            if (Article.Peek() == 'f')
                            {
                                nextColumn();
                                Tokens.Add(new(TokenType.KW_if, value, line, column));
                                value = "";
                            }
                            break;

                        case 'j':
                            nextColumn();
                            if(peek("ump"))
                            {
                                Tokens.Add(new(TokenType.KW_jump, value, line, column));
                                value = "";
                            }
                            break;

                        case 'n':
                            nextColumn();
                            if (peek("ull"))
                            {
                                Tokens.Add(new(TokenType.Null, value, line, column));
                                value = "";
                            }
                            else if (peek("ext"))
                            {
                                Tokens.Add(new(TokenType.KW_jump, value, line, column));
                                value = "";
                            }
                            break;

                        case 'o':
                            nextColumn();
                            if (peek("pen"))
                            {
                                Tokens.Add(new(TokenType.KW_open, value, line, column));
                                value = "";
                            }
                            else if(peek("nly"))
                            {
                                Tokens.Add(new(TokenType.KW_only, value, line, column));
                                value = "";
                            }
                            break;

                        case 'p':
                            nextColumn();
                            if (peek("rivate"))
                            {
                                Tokens.Add(new(TokenType.KW_private, value, line, column));
                                value = "";
                            }
                            else if (peek("ublic"))
                            {
                                Tokens.Add(new(TokenType.KW_public, value, line, column));
                                value = "";
                            }
                            break;

                        case 'r':
                            nextColumn();
                            if (Article.Peek() == 'e')
                            {
                                if (peek("turn"))
                                {
                                    Tokens.Add(new(TokenType.KW_return, value, line, column));
                                    value = "";
                                }
                                else if (Article.Peek() == 'f')
                                {
                                    nextColumn();
                                    Tokens.Add(new(TokenType.KW_ref, value, line, column));
                                    value = "";
                                }
                            }
                            break;

                        case 's':
                            nextColumn();
                            if (peek("truct"))
                            {
                                Tokens.Add(new(TokenType.KW_struct, value, line, column));
                                value = "";
                            }
                            else if(peek("top"))
                            {
                                Tokens.Add(new(TokenType.KW_stop, value, line, column));
                                value = "";
                            }
                            else if(peek("witch"))
                            {
                                Tokens.Add(new(TokenType.KW_switch, value, line, column));
                                value = "";
                            }
                            break;

                        case 't':
                            nextColumn();
                            if (peek("rue"))
                            {
                                Tokens.Add(new(TokenType.True, value, line, column));
                                value = "";
                            }
                            else if(peek("his"))
                            {
                                Tokens.Add(new(TokenType.KW_this, value, line, column));
                                value = "";
                            }
                            else if(peek("ypeof"))
                            {
                                Tokens.Add(new(TokenType.KW_typeof, value, line, column));
                                value = "";
                            }
                            break;

                        case 'v':
                            nextColumn();
                            if (peek("ar"))
                            {
                                Tokens.Add(new(TokenType.KW_var, value, line, column));
                                value = "";
                            }
                            break;

                        case 'w':
                            nextColumn();
                            if (peek("hile"))
                            {
                                Tokens.Add(new(TokenType.KW_while, value, line, column));
                                value = "";
                            }
                            break;

                        case '+':
                            nextColumn();
                            if (peek("="))
                            {
                                Tokens.Add(new Token(TokenType.OP_Add_Ass, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Add, value, line, column));
                                value = "";
                            }
                            break;

                        case '-':
                            nextColumn();
                            if (peek("="))
                            {
                                Tokens.Add(new Token(TokenType.OP_Sub_Ass, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Sub, value, line, column));
                                value = "";
                            }
                            break;

                        case '*':
                            nextColumn();
                            if (peek("="))
                            {
                                Tokens.Add(new Token(TokenType.OP_Mul_Ass, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Mul, value, line, column));
                                value = "";
                            }
                            break;

                        case '/':
                            nextColumn();
                            if (peek("="))
                            {
                                Tokens.Add(new Token(TokenType.OP_Div_Ass, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Div, value, line, column));
                                value = "";
                            }
                            break;

                        case '%':
                            nextColumn();
                            if (peek("="))
                            {
                                Tokens.Add(new Token(TokenType.OP_Mod_Ass, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Mod, value, line, column));
                                value = "";
                            }
                            break;

                        case '&':
                            nextColumn();
                            if (peek("&"))
                            {
                                Tokens.Add(new Token(TokenType.OP_And, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Bit_And, value, line, column));
                                value = "";
                            }
                            break;

                        case '|':
                            nextColumn();
                            if (peek("|"))
                            {
                                Tokens.Add(new Token(TokenType.OP_Or, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Bit_Or, value, line, column));
                                value = "";
                            }
                            break;

                        case '^':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.OP_Bit_Xor, value, line, column));
                            value = "";
                            break;

                        case '~':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.OP_Bit_Not, value, line, column));
                            value = "";
                            break;

                        case '!':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.OP_Not, value, line, column));
                            value = "";
                            break;

                        case '=':
                            nextColumn();
                            if (Article.Peek() == '=')
                            {
                                nextColumn();
                                Tokens.Add(new Token(TokenType.OP_Eq, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Ass, value, line, column));
                                value = "";
                            }
                            break;

                        case '<':
                            nextColumn();
                            if (peek("<"))
                            {
                                Tokens.Add(new Token(TokenType.OP_Bit_Shift_Left, value, line, column));
                                value = "";
                            }
                            else if(Article.Peek() == '=')
                            {
                                nextColumn();
                                Tokens.Add(new Token(TokenType.OP_Le, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Lt, value, line, column));
                                value = "";
                            }
                            break;

                        case '>':
                            nextColumn();
                            if (peek(">"))
                            {
                                Tokens.Add(new Token(TokenType.OP_Bit_Shift_Right, value, line, column));
                                value = "";
                            }
                            else if(Article.Peek() == '=')
                            {
                                nextColumn();
                                Tokens.Add(new Token(TokenType.OP_Ge, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.OP_Gt, value, line, column));
                                value = "";
                            }
                            break;

                        case '(':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Paren_Open, value, line, column));
                            value = "";
                            break;

                        case ')':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Paren_Close, value, line, column));
                            value = "";
                            break;

                        case '[':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Bracket_Open, value, line, column));
                            value = "";
                            break;

                        case ']':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Bracket_Close, value, line, column));
                            value = "";
                            break;

                        case '{':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_CurlyBrace_Open, value, line, column));
                            value = "";
                            break;

                        case '}':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_CurlyBrace_Close, value, line, column));
                            value = "";
                            break;

                        case ',':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Comma, value, line, column));
                            value = "";
                            break;

                        case ':':
                            nextColumn();
                            if (peek(":"))
                            {
                                Tokens.Add(new Token(TokenType.DL_Double_Colon, value, line, column));
                                value = "";
                            }
                            else
                            {
                                Tokens.Add(new Token(TokenType.DL_Colon, value, line, column));
                                value = "";
                            }
                            break;

                        case ';':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Semicolon, value, line, column));
                            value = "";
                            break;

                        case '.':
                            nextColumn();
                            Tokens.Add(new Token(TokenType.DL_Dot, value, line, column));
                            value = "";
                            break;

                        case '\n':
                            nextColumn();
                            if (value != "" && value != "\n")
                            {
                                Tokens.Add(new(TokenType.Identifer, value, line, column));
                            }
                            line++;
                            column = 0;
                            value = "";
                            break;

                        default:
                            nextColumn();
                            break;
                    }
                }
                else
                {
                    Regex regExp = new Regex("[^0-9a-zA-Z\u4e00-\u9fa5]");
                    while (!regExp.IsMatch(Article.Peek().ToString()))
                    {
                        nextColumn();
                    }
                    Tokens.Add(new(TokenType.Identifer, value, line, column));
                    value = "";
                }

                if (Article.Count == 0)
                {
                    if (value != "")
                    {
                        Tokens.Add(new(TokenType.Identifer, value, line, column));
                        value = "";

                    }
                }
            }

            return Tokens;
        }
    }
}