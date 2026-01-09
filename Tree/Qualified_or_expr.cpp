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

DataType Qualified_or_expr::ToDataType() const {
    DataType result;

    switch (Type) {
        case TypeT::Integer:
            result.AType = DataType::TypeT::Int;
            break;

        case TypeT::Float:
            result.AType = DataType::TypeT::Float;
            break;

        case TypeT::String:
            result = STD_STRING_TYPE;
            break;

        case TypeT::Char:
            result.AType = DataType::TypeT::Char;
            break;

        case TypeT::Bool:
            result.AType = DataType::TypeT::Bool;
            break;

        case TypeT::Identifier:
            if (Identifier == "null") {
                result.AType = DataType::TypeT::Null;
            } else {
                result.AType = DataType::TypeT::Complex;
                std::string id(Identifier);
                size_t start = 0;
                size_t end = id.find('.');
                while (end != std::string::npos) {
                    result.ComplexType.push_back(id.substr(start, end - start));
                    start = end + 1;
                    end = id.find('.', start);
                }
                result.ComplexType.push_back(id.substr(start));
            }
            break;

        case TypeT::ComplexArrayType:
            if (Previous) {
                result = Previous->ToDataType();
                result.ArrayArity++;
            } else {
                result.AType = DataType::TypeT::Complex;
                result.IsUnknown = true;
            }
            break;

        case TypeT::ArrayElementExpr:
            if (Previous) {
                DataType baseType = Previous->ToDataType();
                if (baseType.ArrayArity > 0) {
                    baseType.ArrayArity--;
                    result = baseType;
                } else {
                    result.AType = DataType::TypeT::Complex;
                    result.IsUnknown = true;
                }
            } else {
                result.AType = DataType::TypeT::Complex;
                result.IsUnknown = true;
            }
            break;

        case TypeT::Dot:
        case TypeT::SimpleMethodCall:
        case TypeT::DotMethodCall:
            result.AType = DataType::TypeT::Complex;
            result.IsUnknown = true;
            break;

        case TypeT::Expr:
            if (Child) {
                result = Child->AType;
            } else {
                result.AType = DataType::TypeT::Void;
            }
            break;

        default:
            result.AType = DataType::TypeT::Complex;
            result.IsUnknown = true;
            break;
    }

    return result;
}
