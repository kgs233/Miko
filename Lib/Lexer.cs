using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Miko.Lib
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

        KW_open,
        KW_space,
        KW_struct,
        KW_static,

        KW_readonly,
        KW_must,
        KW_local,

        KW_if,
        KW_else,
        KW_for,
        KW_foreach,
    }

    public class Token
    {
        public Token(TokenType type, string Vaule, int Line, int Column)
        {
            this.Type = type;
            this.Vaule = Vaule;
            this.Line = Line;
            this.Column = Column;
        }

        public TokenType Type;
        public string Vaule;
        public int Line;
        public int Column;
    }

    public class Lexer
    {
        public Queue<char> Article;
        List<Token> Tokens = new();

        public void Lex()
        {
            string vaule = "";
            int line = 0;
            int column = 0;

            while (Article.Count > 0)
            {
                while (Article.Peek() == ' ')
                {
                    Article.Dequeue();
                }

                if (vaule == "")
                {
                    switch (Article.Peek())
                    {
                        case '\"':
                            column++;
                            Article.Dequeue();
                            while (Article.Peek() != '"')
                            {
                                if (Article.Peek() == '\\')
                                {
                                    column++;
                                    Article.Dequeue();
                                    switch (Article.Peek())
                                    {
                                        case '\\':
                                            vaule += "\\";
                                            break;
                                        case '\"':
                                            vaule += '\"';
                                            break;
                                        case '\'':
                                            vaule += '\'';
                                            break;
                                        case 'n':
                                            vaule += '\n';
                                            break;
                                        case 'r':
                                            vaule += '\r';
                                            break;
                                        case 't':
                                            vaule += '\t';
                                            break;
                                        case 'f':
                                            vaule += '\f';
                                            break;
                                        case 'b':
                                            vaule += '\b';
                                            break;
                                        case 'a':
                                            vaule += '\a';
                                            break;
                                        case '0':
                                            vaule += '\0';
                                            break;

                                        default:
                                            vaule += '\\';
                                            continue;
                                    }
                                    column++;
                                    Article.Dequeue();
                                }
                                column++;
                                vaule += Article.Dequeue();
                            }
                            column++;
                            Article.Dequeue();
                            Tokens.Add(new(TokenType.String, vaule, line, column));
                            vaule = "";
                            break;

                        case '\'':
                            column++;
                            Article.Dequeue();
                            if (Article.Peek() == '\'')
                            {
                                throw new Exception("Lex Error: Null char error");
                            }
                            if (Article.Peek() == '\\')
                            {
                                column++;
                                Article.Dequeue();
                                switch (Article.Peek())
                                {
                                    case '\\':
                                        vaule += "\\";
                                        break;
                                    case '\"':
                                        vaule += '\"';
                                        break;
                                    case '\'':
                                        vaule += '\'';
                                        break;
                                    case 'n':
                                        vaule += '\n';
                                        break;
                                    case 'r':
                                        vaule += '\r';
                                        break;
                                    case 't':
                                        vaule += '\t';
                                        break;
                                    case 'f':
                                        vaule += '\f';
                                        break;
                                    case 'b':
                                        vaule += '\b';
                                        break;
                                    case 'a':
                                        vaule += '\a';
                                        break;
                                    case '0':
                                        vaule += '\0';
                                        break;

                                    default:
                                        throw new Exception("Lex Error: Not char error");
                                }
                                column++;
                                Article.Dequeue();
                            }
                            else
                            {
                                column++;
                                Article.Dequeue();
                            }

                            if (Article.Peek() != '\'')
                            {
                                throw new Exception("Lex Error: Not char error");
                            }
                            else
                            {
                                Tokens.Add(new(TokenType.Char, vaule, line, column));
                                Article.Dequeue();
                                vaule = "";
                            }
                            break;

                        //if
                        case 'i':
                            column++;
                            vaule += Article.Dequeue();
                            if (Article.Peek() == 'f')
                            {
                                column++;
                                vaule += Article.Dequeue();
                                Tokens.Add(new(TokenType.KW_if, vaule, line, column));
                                vaule = "";
                            }
                            break;
                        //else
                        case 'e':
                            column++;
                            vaule += Article.Dequeue();
                            if (Article.Peek() == 'l')
                            {
                                column++;
                                vaule += Article.Dequeue();
                                if (Article.Peek() == 's')
                                {
                                    column++;
                                    vaule += Article.Dequeue();
                                    if (Article.Peek() == 'e')
                                    {
                                        column++;
                                        vaule += Article.Dequeue();
                                        Tokens.Add(new(TokenType.KW_else, vaule, line, column));
                                    }
                                }
                            }
                            break;

                        //for foreach
                        case 'f':
                            column++;
                            vaule += Article.Dequeue();
                            if (Article.Peek() == 'o')
                            {
                                column++;
                                vaule += Article.Dequeue();
                                if (Article.Peek() == 'r')
                                {
                                    column++;
                                    vaule += Article.Dequeue();
                                    if (Article.Peek() == 'e')
                                    {
                                        column++;
                                        vaule += Article.Dequeue();
                                        if (Article.Peek() == 'a')
                                        {
                                            column++;
                                            vaule += Article.Dequeue();
                                            if (Article.Peek() == 'c')
                                            {
                                                column++;
                                                vaule += Article.Dequeue();
                                                if (Article.Peek() == 'h')
                                                {
                                                    column++;
                                                    vaule += Article.Dequeue();
                                                    Tokens.Add(new(TokenType.KW_foreach, vaule, line, column));
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        Tokens.Add(new(TokenType.KW_for, vaule, line, column));
                                    }

                                    vaule = "";
                                }
                            }
                            break;

                        default:
                            column++;
                            vaule += Article.Dequeue();
                            break;
                    }
                }
                else
                {
                    Regex regExp = new Regex("[^0-9a-zA-Z\u4e00-\u9fa5]");
                    while (!regExp.IsMatch(Article.Peek().ToString()))
                    {
                        column++;
                        vaule += Article.Dequeue();

                        if (Article.Count == 0)
                        {
                            break;
                        }
                    }
                    Tokens.Add(new(TokenType.Identifer, vaule, line, column));
                    vaule = "";
                }
            }
        }
    }
}