#include "source.hpp"
#include "token.hpp"

#include <cctype>
#include <cerrno>
#include <fstream>
#include <ios>
#include <string>

void Source::Lex()
{
    int line = 1;
    int column = 1;
    int startColumn = 0;
    char tc;
    std::string nowValue = "";
    LexState nowState = LexState::LEX_STATE_NOMAL;

    std::ifstream sourceFile(this->FileName);
    sourceFile.unsetf(std::ios::skipws);

    while (sourceFile >> tc)
    {
        

LexStart:
        if (tc == ' ' && nowState == LexState::LEX_STATE_NOMAL)
        {
            continue;
        }

        if (nowValue == "" && nowState == LexState::LEX_STATE_NOMAL)
        {
            startColumn = column;
            switch (tc)
            {
                case ALPHA:
                {
                    nowState = LexState::LEX_STATE_IDENTIFIER;
                    nowValue += tc;
                    break;
                }
                case DIGIT:
                {
                    nowState = LexState::LEX_STATE_INTEGER;
                    nowValue += tc;
                    break;
                }
                case '\"':
                {
                    nowState = LexState::LEX_STATE_STRING;
                    break;
                }
                case '\'':
                {
                    nowState = LexState::LEX_STATE_CHAR;
                    break;
                }

                case OPERATOR:
                {
                    nowState = LexState::LEX_STATE_SYMBOL;
                    nowValue += tc;
                    break;
                }

                case '@':
                {
                    Token token(TokenType::TOKEN_OP_AT, "@", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }

                case '(':
                {
                    Token token(TokenType::TOKEN_DL_PAREN_OPEN, "(", line,
                                startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case ')':
                {
                    Token token(TokenType::TOKEN_DL_PAREN_CLOSE, ")", line,
                                startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case '{':
                {
                    Token token(TokenType::TOKEN_DL_BRACKET_OPEN, "{", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case '}':
                {
                    Token token(TokenType::TOKEN_DL_BRACKET_CLOSE, "}", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case '[':
                {
                    Token token(TokenType::TOKEN_DL_CURLY_BRACE_OPEN, "[", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case ']':
                {
                    Token token(TokenType::TOKEN_DL_CURLY_BRACE_CLOSE, "]", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case ';':
                {
                    Token token(TokenType::TOKEN_DL_SEMICOLON, ";", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case ':':
                {
                    Token token(TokenType::TOKEN_DL_COLON, ":", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case ',':
                {
                    Token token(TokenType::TOKEN_DL_COMMA, ",", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
                case '.':
                {
                    Token token(TokenType::TOKEN_DL_DOT, ".", line, startColumn, column);
                    this->Tokens.push_back(token);
                    break;
                }
            }
        }
        else
        {
            switch (nowState)
            {
                case LexState::LEX_STATE_IDENTIFIER:
                {
                    if ((std::isdigit(tc) || std::isalpha(tc)) || tc == '_')
                    {
                        nowValue += tc;
                    }
                    else
                    {
                        Token token(TokenType::TOKEN_IDENTIFIER, nowValue, line, startColumn, column);
                        this->Tokens.push_back(token);
                        nowValue = "";
                        nowState = LexState::LEX_STATE_NOMAL;
                        goto LexStart;
                    }
                    break;
                }

                case LexState::LEX_STATE_INTEGER:
                {
                    if (std::isdigit(tc))
                    {
                        nowValue += tc;
                    }
                    else if (std::isalpha(tc))
                    {
                        throw "Invalid number";
                    }
                    else
                    {
                        Token token(TokenType::TOKEN_INTEGER, nowValue, line, startColumn, column);
                        this->Tokens.push_back(token);
                        nowValue = "";
                        nowState = LexState::LEX_STATE_NOMAL;
                        goto LexStart;
                    }
                    break;
                }

                case LexState::LEX_STATE_STRING:
                {
                    if (tc == '\"')
                    {
                        Token token(TokenType::TOKEN_STRING, nowValue, line, startColumn, column);
                        this->Tokens.push_back(token);
                        nowValue = "";
                        nowState = LexState::LEX_STATE_NOMAL;
                    }
                    else if (tc == '\\')
                    {
                        nowState = LexState::LEX_STATE_ESCAPE;
                    }
                    else
                    {
                        nowValue += tc;
                    }
                    break;
                }

                case LexState::LEX_STATE_CHAR:
                {
                    if (tc == '\'')
                    {
                        Token token(TokenType::TOKEN_CHAR, nowValue, line, startColumn, column);
                        this->Tokens.push_back(token);
                        nowValue = "";
                    }
                    else if (tc == '\\')
                    {
                        nowState = LexState::LEX_STATE_ESCAPE;
                    }
                    else if (nowValue.length() < 1)
                    {
                        nowValue += tc;
                    }
                    else
                    {
                        throw "Invalid Char";
                    }
                    break;
                }

                case LexState::LEX_STATE_ESCAPE:
                {
                    switch (tc)
                    {
                        case 'n':
                        {
                            nowValue += '\n';
                            break;
                        }

                        case 't':
                        {
                            nowValue += '\t';
                            break;
                        }

                        case '\\':
                        {
                            nowValue += '\\';
                            break;
                        }

                        case '\"':
                        {
                            nowValue += '\"';
                            break;
                        }

                        case '\'':
                        {
                            nowValue += '\'';
                            break;
                        }
                    }

                    nowState = LexState::LEX_STATE_STRING;
                    break;
                }

                case LexState::LEX_STATE_SYMBOL:
                {
                    TokenType opType;
                    if(std::isalpha(tc) || std::isdigit(tc) || tc == '_')
                    {
                        if (nowValue == "+")
                        {
                            opType = TokenType::TOKEN_OP_ADD;
                        }
                        else if (nowValue == "++")
                        {
                            opType = TokenType::TOKEN_OP_DOUBLE_ADD;
                        }
                        else if (nowValue == "+=")
                        {
                            opType = TokenType::TOKEN_OP_ADD_ASS;
                        }
                        else if (nowValue == "-")
                        {
                            opType = TokenType::TOKEN_OP_SUB;
                        }
                        else if (nowValue == "--")
                        {
                            opType = TokenType::TOKEN_OP_DOUBLE_SUB;
                        }
                        else if (nowValue == "-=")
                        {
                            opType = TokenType::TOKEN_OP_SUB_ASS;
                        }
                        else if (nowValue == "*")
                        {
                            opType = TokenType::TOKEN_OP_MUL;
                        }
                        else if (nowValue == "*=")
                        {
                            opType = TokenType::TOKEN_OP_MUL_ASS;
                        }
                        else if (nowValue == "/")
                        {
                            opType = TokenType::TOKEN_OP_DIV;
                        }
                        else if (nowValue == "/=")
                        {
                            opType = TokenType::TOKEN_OP_DIV_ASS;
                        }
                        else if (nowValue == "%")
                        {
                            opType = TokenType::TOKEN_OP_MOD;
                        }
                        else if (nowValue == "%=")
                        {
                            opType = TokenType::TOKEN_OP_MOD_ASS;
                        }
                        else if (nowValue == "==")
                        {
                            opType = TokenType::TOKEN_OP_EQ;
                        }
                        else if (nowValue == "!")
                        {
                            opType = TokenType::TOKEN_OP_NOT;
                        }
                        else if (nowValue == "!=")
                        {
                            opType = TokenType::TOKEN_OP_NE;
                        }
                        else if (nowValue == ">")
                        {
                            opType = TokenType::TOKEN_OP_GE;
                        }
                        else if (nowValue == ">>")
                        {
                            opType = TokenType::TOKEN_OP_BIT_SHIFT_RIGHT;
                        }
                        else if (nowValue == ">>=")
                        {
                            opType = TokenType::TOKEN_OP_SHIFT_RIGHT_ASS;
                        }
                        else if (nowValue == ">=")
                        {
                            opType = TokenType::TOKEN_OP_GT;
                        }
                        else if (nowValue == "<")
                        {
                            opType = TokenType::TOKEN_OP_LE;
                        }
                        else if (nowValue == "<<")
                        {
                            opType = TokenType::TOKEN_OP_BIT_SHIFT_LEFT;
                        }
                        else if (nowValue == "<<=")
                        {
                            opType = TokenType::TOKEN_OP_SHIFT_LEFT_ASS;
                        }
                        else if (nowValue == "<=")
                        {
                            opType = TokenType::TOKEN_OP_LT;
                        }
                        else if (nowValue == "&")
                        {
                            opType = TokenType::TOKEN_OP_BIT_AND;
                        }
                        else if (nowValue == "&=")
                        {
                            opType = TokenType::TOKEN_OP_AND_ASS;
                        }
                        else if (nowValue == "&&")
                        {
                            opType = TokenType::TOKEN_OP_AND;
                        }
                        else if (nowValue == "|")
                        {
                            opType = TokenType::TOKEN_OP_BIT_OR;
                        }
                        else if (nowValue == "|=")
                        {
                            opType = TokenType::TOKEN_OP_OR_ASS;
                        }
                        else if (nowValue == "||")
                        {
                            opType = TokenType::TOKEN_OP_OR;
                        }
                        else if (nowValue == "^")
                        {
                            opType = TokenType::TOKEN_OP_BIT_XOR;
                        }
                        else if (nowValue == "^=")
                        {
                            opType = TokenType::TOKEN_OP_XOR_ASS;
                        }
                        else
                        {
                            throw "Invalid SYMBOL";
                        }

                        Token token(opType, nowValue, line, startColumn, column);
                        this->Tokens.push_back(token);
                        nowValue = "";
                        nowState = LexState::LEX_STATE_NOMAL;
                        goto LexStart;
                    }
                    else
                    {
                        nowValue += tc;
                    }

                    break;
                }
            }
        }

        if(tc == '\n')
        {
            line++;
            column = 1;
            nowState = LexState::LEX_STATE_NOMAL;
        }

        column++;
    }
}