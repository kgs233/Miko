#include "source.hpp"

#include <filesystem>
#include <iostream>

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>

#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"
#include "pre/MikoParserRulesBaseVisitor.h"

using namespace Miko;

Source::Source(std::string path)
{
    this->path = *(new std::filesystem::path(path));
    if (not std::filesystem::exists(this->path))
    {
        std::cerr << "File " << path << " does not exist" << std::endl;
        throw "File does not exist";
    }

    buf = new std::filebuf();
    buf->open(this->path, std::ios::in);
    this->init(buf);
}

Source::~Source()
{
    buf->close();
    delete buf;
}

std::string Source::GetSourcePath()
{
    return path;
}