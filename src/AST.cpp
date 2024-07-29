#include "AST.hpp"

void ListASTNode::AddNode(std::string Name, IdentifierASTNode* Node)
{
    if(Name == "")
    {
        Name = Node->Name->Name;
    }

    ListMap[Name] = Node;
    List.push_back(Node);
}

void StructASTNode::AddNode(IdentifierASTNode* Node)
{
    ListASTNode::AddNode(Node->Name->Name, Node);
}