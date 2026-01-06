#include "Type.h"

TypeNode::TypeNode(const StandardType stdType): StdType{ stdType }
{
}

TypeNode::TypeNode(const StandardArrayType stdArrType): Type{ TypeT::StdArrType }
, StdArrType{ stdArrType }
{
}

TypeNode::TypeNode(Qualified_or_expr* const qualified_or_expr): Type{ TypeT::AccessExpr }
, Access{ qualified_or_expr }
{
}

#include "Qualified_or_expr.h"

DataType ToDataType(const TypeNode* node)
{
    if (!node)
        return { DataType::TypeT::Void };
    if (node->Type == TypeNode::TypeT::StdType) { return ToDataType(node->StdType); }
    if (node->Type == TypeNode::TypeT::StdArrType) { return ToDataType(node->StdArrType); }
    if (node->Type == TypeNode::TypeT::AccessExpr && node->Access) { return node->Access->ToDataType(); }
    return { DataType::TypeT::Void, {}, true };
}