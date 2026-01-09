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
        MethodCall,
        Dot,
        DotMethodCall,
        ArrayLength
    } Type{};

    int Integer{};
    double Float{};
    char* String{};
    char Char{};
    bool Bool{};

    ExprNode* Child{};

    Qualified_or_expr* Previous{};

    std::string_view Identifier{};

    ExprSeqNode* Arguments{};

    MethodDeclNode* ActualMethodCall{};
    FieldDeclNode* ActualField{};
    VarDeclNode* ActualVar{};

    DataType AType{};

    [[nodiscard]] std::string Name() const noexcept override { return "Qualified_or_expr"; }

    static Qualified_or_expr* FromBrackets(Qualified_or_expr* previous);

    static Qualified_or_expr* FromBrackets(Qualified_or_expr* previous, ExprNode* child);

    static Qualified_or_expr* FromId(const char* id);

    static Qualified_or_expr* FromCall(const char* id, ExprSeqNode* arguments);

    static Qualified_or_expr* FromCall(const char* const id);

    static Qualified_or_expr* FromDot(Qualified_or_expr* previous, const char* id);

    static Qualified_or_expr* FromDot(Qualified_or_expr* previous, const char* id, ExprSeqNode* arguments);

    static Qualified_or_expr* FromInt(int value);

    static Qualified_or_expr* FromFloat(double value);

    static Qualified_or_expr* FromString(char* value);

    static Qualified_or_expr* FromChar(char value);

    static Qualified_or_expr* FromBool(bool value);

    static Qualified_or_expr* FromExpr(ExprNode* expr);
    static Qualified_or_expr* FromNull();

    [[nodiscard]] DataType ToDataType() const;

    void CallForAllChildren(const std::function<void(Qualified_or_expr*)>& function) const;

private:
    Qualified_or_expr() : Node()
    {
    }
};
