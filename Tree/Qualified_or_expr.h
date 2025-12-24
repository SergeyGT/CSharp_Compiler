#pragma once

#include "Expr.h"

struct MethodDeclNode;
struct FieldDeclNode;
struct VarDeclNode;

struct Qualified_or_expr final : Node
{
    enum class TypeT
    {
        Expr,
        ArrayElementExpr,
        ComplexArrayType,
        Integer,
        Float,
        String,
        Char,
        Bool,
        Identifier,
        SimpleMethodCall,
        Dot,
        DotMethodCall,
        ArrayLength
    } Type{};

    ExprNode* Child{};

    Qualified_or_expr* Previous{};

    std::string_view Identifier{};

    ExprSeqNode* Arguments{};

    MethodDeclNode* ActualMethodCall{};
    FieldDeclNode* ActualField{};
    VarDeclNode* ActualVar{};

    DataType AType{};

    [[nodiscard]] std::string_view Name() const noexcept override { return "Qualified_or_expr"; }

    static Qualified_or_expr* FromBrackets(Qualified_or_expr* previous);

    static Qualified_or_expr* FromBrackets(Qualified_or_expr* previous, ExprNode* child);

    static Qualified_or_expr* FromId(const char* id);

    static Qualified_or_expr* FromCall(const char* id, ExprSeqNode* arguments);

    static Qualified_or_expr* FromDot(Qualified_or_expr* previous, const char* id);

    static Qualified_or_expr* FromDot(Qualified_or_expr* previous, const char* id, ExprSeqNode* arguments);

    [[nodiscard]] DataType ToDataType() const;

    void CallForAllChildren(const std::function<void(Qualified_or_expr*)>& function) const;

private:
    Qualified_or_expr() : Node()
    {
    }
};
