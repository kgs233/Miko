#include "AST.hpp"
#include <iostream>

StructASTNode::StructASTNode(StructASTNode* structNode)
{
    MemberNum = structNode->MemberNum;
    MemberMap = structNode->MemberMap;
}

void ListASTNode::AddNode(IdentifierASTNode* Node)
{
    List.push_back(Node);
    MemberNum++;
}

StructASTNode::StructASTNode()
{}

void StructASTNode::AddNode(IdentifierASTNode* Node)
{
    MemberMap[Node->Name] = Node;
    MemberNum++;
}

void StructASTNode::AddNodeInList(ListASTNode* list)
{
    for (int i = 0; i < list->MemberNum; i++)
    {
        AddNode(list->List[i]);
    }
}