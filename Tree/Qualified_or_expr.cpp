#include "Qualified_or_expr.h"

#include <iostream>

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

Qualified_or_expr* Qualified_or_expr::FromCall(const char* const id)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::MethodCall;
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

Qualified_or_expr* Qualified_or_expr::FromBase()
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Identifier;
    node->Identifier = "base";
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromInt(const int value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Integer;
    node->Integer = value;
    node->AType.AType = DataType::TypeT::Int;
    node->AType.ArrayArity = 0;
    node->AType.IsUnknown = false;

    std::cout << "[DEBUG FromInt] Created node with value: " << value
              << ", type set to: " << static_cast<int>(node->AType.AType) << std::endl;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromFloat(const double value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Float;
    node->Float = value;
    node->AType.AType = DataType::TypeT::Float;
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
    node->AType.AType = DataType::TypeT::Char;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromBool(const bool value)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Bool;
    node->Bool = value;
    node->AType.AType = DataType::TypeT::Bool;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromExpr(ExprNode* expr)
{
    auto* node = new Qualified_or_expr;
    node->Type = TypeT::Expr;
    node->Child = expr;
    return node;
}

Qualified_or_expr* Qualified_or_expr::FromNull()
{
    auto* qoe = new Qualified_or_expr();
    qoe->Type = TypeT::Identifier;
    qoe->Identifier = "null";
    return qoe;
}

DataType Qualified_or_expr::ToDataType() const
{
    if (Type == TypeT::ComplexArrayType)
    {
        auto childType = Previous->ToDataType();
        childType.ArrayArity += 1;
        return childType;
    }

    if (Type == TypeT::Identifier)
    {
        DataType data;
        data.AType = DataType::TypeT::Complex;
        data.ComplexType = { std::string{ Identifier } };
        return data;
    }

    if (Type == TypeT::Integer)
    {
        DataType data;
        data.AType = DataType::TypeT::Int;
        return data;
    }

    if (Type == TypeT::Dot)
    {
        auto childType = Previous->ToDataType();
        childType.ComplexType.emplace_back(Identifier);
        return childType;
    }

    if (Type == TypeT::ArrayElementExpr)
    {
        auto childType = Previous->ToDataType();
        childType.ArrayArity += 1;
        return childType;
    }

    return { DataType::TypeT::Void, {}, true };
}

void Qualified_or_expr::CallForAllChildren(const std::function<void(Qualified_or_expr*)>& function) const
{
    if (Previous)
        function(Previous);

    auto exprFunctor = [&function](const ExprNode* node)
    {
        if (!node) { return; }
        if (node->Child && node->Child->Access) { function(node->Child->Access); }
        if (node->Child && node->Child->ArrayExpr) { function(node->Child->ArrayExpr); }
    };

    if (Child) { Child->CallForAllChildren(exprFunctor); }

    if (Arguments) { for (auto* arg : Arguments->GetSeq()) { arg->CallForAllChildren(exprFunctor); } }
}