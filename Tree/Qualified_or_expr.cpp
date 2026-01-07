#include "Qualified_or_expr.h"

Qualified_or_expr* Qualified_or_expr::FromBrackets(Qualified_or_expr* previous)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::ComplexArrayType;
    node->Previous = previous;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromBrackets(Qualified_or_expr* previous, ExprNode* child)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::ArrayElementExpr;
    node->Previous = previous;
    node->Child = child;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromId(const char* const id)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Identifier;
    node->Identifier = id;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromCall(const char* const id, ExprSeqNode* arguments)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::SimpleMethodCall;
    node->Identifier = id;
    node->Arguments = arguments;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromDot(Qualified_or_expr* previous, const char* const id)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Dot;
    node->Previous = previous;
    node->Identifier = id;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromDot(Qualified_or_expr* previous, const char* const id, ExprSeqNode* arguments)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::DotMethodCall;
    node->Previous = previous;
    node->Identifier = id;
    node->Arguments = arguments;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromInt(const int value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Integer;
    node->Integer = value;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromFloat(const double value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Float;
    node->Float = value;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromString(char* const value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::String;
    node->String = value;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromChar(const char value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Char;
    node->Char = value;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromBool(const bool value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Bool;
    node->Bool = value;
    return node;
}
