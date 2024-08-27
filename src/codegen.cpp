#include "AST.hpp"

#include <llvm/Support/raw_ostream.h>
#include <string>

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>

using namespace llvm;
using namespace Miko;

void RootASTNode::CodeGenerate()
{
    module = new Module(sourceName, context);

    // for (ASTNode* node : ASTree)
    // {
    //     node->CodeGenerate();
    // }
}

std::string RootASTNode::GetIR()
{
    std::string strIR;
    raw_string_ostream IR(strIR);
    module->print(IR, nullptr);
    return strIR;
}