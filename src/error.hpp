#ifndef MIKO_ERROR_HPP
#define MIKO_ERROR_HPP

#include <cstdlib>
#include <iostream>

#include "util.hpp"

enum ErrorType
{
    ERROR_LEX,
    ERROR_PARSE,
    ERROR_ANALYZER,
    ERROR_GENERATOR_IR,
};

inline std::string Error2String(ErrorType errorType)
{
    switch (errorType)
    {
        case ERROR_LEX:
            return "Lex Error";
            break;
        case ERROR_PARSE:
            return "Parse Error";
            break;
        case ERROR_ANALYZER:
            return "Analyzer Error";
            break;
        case ERROR_GENERATOR_IR:
            return "Generator IR Error";
            break;
    }
}

inline void info(ErrorType errorType, std::string message)
{
    std::cout << Error2String(errorType) << ": " << message << std::endl;
}

inline void warn(ErrorType errorType, std::string message)
{
    std::clog << yellowString(Error2String(errorType) + ": " + message) << std::endl;
}

inline void error(ErrorType errorType, std::string message)
{
    std::cerr << redString(Error2String(errorType) + ": " + message) << std::endl;
    exit(1);
}

#endif // MIKO_ERROR_HPP