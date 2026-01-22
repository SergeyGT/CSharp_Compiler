#pragma once
#include <algorithm>
#include <iterator>

#include "Stmt.h"
#include "Type.h"
#include "../VisibilityModifier.h"

// Forward declarations
struct MethodArguments;
struct ExprNode;
struct VarDeclNode;
struct ClassDeclNode;
struct StructDeclNode;
struct NamespaceDeclNode;

class MethodDeclNode;

struct FieldDeclNode final : Node
{
    const VisibilityModifier Visibility;
    VarDeclNode* VarDecl;
    ClassDeclNode* Class{};
    StructDeclNode* Struct{};

    ExprNode* InitInConstructor{};

    bool IsFinal{};

    FieldDeclNode(const VisibilityModifier visibility, VarDeclNode* const varDecl)
        : Visibility{ visibility }
      , VarDecl{ varDecl }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "FieldDeclNode"; }
};

struct MethodArguments final : NodeSeq<MethodArguments, VarDeclNode>
{
    using NodeSeq<MethodArguments, VarDeclNode>::NodeSeq;
    [[nodiscard]] std::string Name() const noexcept override { return "MethodArguments"; }
};

struct MethodArgumentDto
{
    DataType Type;
    std::string Name;
};

inline std::vector<DataType> ToTypes(std::vector<MethodArgumentDto> const& arguments)
{
    std::vector<DataType> types(arguments.size());
    std::transform(arguments.begin(), arguments.end(), types.begin(), [](auto& arg) { return arg.Type; });
    return types;
}

inline MethodArgumentDto ToMethodArgumentDto(VarDeclNode* node)
{
    return {
        ToDataType(node->VarType),
        std::string{ node->Identifier }
    };
}

enum class OperatorType
{
    Plus,
    Minus,
    Multiply,
    Divide,
    Less,
    Greater,
    Equal,
    NotEqual,
    GreaterOrEqual,
    LessOrEqual,
    Not,
    UnaryMinus,
    UnaryPlus,
    Increment,
    Decrement
};

OperatorType ToOperatorOverload(ExprNode::TypeT type);

struct MethodDeclNode : public Node
{
public:
    const VisibilityModifier Visibility{};
    const TypeNode* Type{};

private:
    std::string_view _identifier{};

public:
    MethodArguments* Arguments{};
    StmtSeqNode* Body{};
    bool IsStatic{};
    bool IsConstructor{};
    std::vector<VarDeclNode*> Variables{};
    DataType AReturnType{};
    std::vector<MethodArgumentDto> ArgumentDtos{};

    ClassDeclNode* Class{};

    bool IsOperatorOverload = false;
    OperatorType Operator{};

    VarDeclNode* FindVariableByName(std::string_view var, int scopingLevel)
    {
        for (auto* variable : Variables)
        {
            if (variable->Identifier == var && variable->ScopingLevel <= scopingLevel)
                return variable;
        }
        return nullptr;
    }

    MethodDeclNode(const VisibilityModifier visibility, const TypeNode* const type, const std::string_view identifier,
                MethodArguments* const arguments, StmtSeqNode* const body, const bool isStatic = false)
        : Visibility{ visibility }
        , Type{ type }
        , _identifier{ identifier }
        , Arguments{ arguments }
        , Body{ body }
        , IsStatic{ isStatic }
        , IsConstructor{ false }
    {
    }

    MethodDeclNode(const VisibilityModifier visibility, const TypeNode* const returnType, const OperatorType operator_,
                   VarDeclNode* lhsArg, VarDeclNode* rhsArg, StmtSeqNode* const body)
        : Visibility{ visibility }
      , Type{ returnType }
      , Arguments{ new MethodArguments }
      , Body{ body }
      , IsStatic{ true }
      , IsOperatorOverload{ true }
      , Operator{ operator_ }
    {
        Arguments->Add(lhsArg);
        Arguments->Add(rhsArg);
    }

    MethodDeclNode(const VisibilityModifier visibility, const TypeNode* const returnType, const OperatorType operator_,
                   VarDeclNode* arg, StmtSeqNode* const body)
        : Visibility{ visibility }
      , Type{ returnType }
      , Arguments{ new MethodArguments }
      , Body{ body }
      , IsStatic{ true }
      , IsOperatorOverload{ true }
      , Operator{ operator_ }
    {
        Arguments->Add(arg);
    }

    [[nodiscard]] std::string Name() const noexcept override { return "MethodDecl"; }

    [[nodiscard]] std::string ToDescriptor() const
    {
        std::string desc = "(";
        for (const auto& param : ArgumentDtos) { desc += param.Type.ToDescriptor(); }
        desc += ")";
        desc += AReturnType.ToDescriptor();
        return desc;
    }

    void AnalyzeArguments()
    {
        if (!Arguments) return;
        auto&& varDeclNodes = Arguments->GetSeq();
        std::transform(varDeclNodes.begin(), varDeclNodes.end(),
                       std::back_inserter(ArgumentDtos),
                       ToMethodArgumentDto);
    }

    [[nodiscard]] std::string Identifier() const
    {
        if (!IsOperatorOverload)
            return std::string{ _identifier };

        switch (Operator)
        {
            case OperatorType::Plus:
                return "__operator_plus";
            case OperatorType::Minus:
                return "__operator_minus";
            case OperatorType::Multiply:
                return "__operator_multiply";
            case OperatorType::Divide:
                return "__operator_divide";
            case OperatorType::Less:
                return "__operator_less";
            case OperatorType::Greater:
                return "__operator_greater";
            case OperatorType::Equal:
                return "__operator_equal";
            case OperatorType::NotEqual:
                return "__operator_not_equal";
            case OperatorType::GreaterOrEqual:
                return "__operator_greater_or_equal";
            case OperatorType::LessOrEqual:
                return "__operator_less_or_equal";
            case OperatorType::Not:
                return "__operator_not";
            case OperatorType::UnaryMinus:
                return "__operator_minus";
            case OperatorType::UnaryPlus:
                return "__operator_plus";
            case OperatorType::Increment:
                return "__operator_increment";
            case OperatorType::Decrement:
                return "__operator_decrement";
            default: ;
        }
        return {};
    }

    friend class ClassAnalyzer;
};

struct ConstructorDeclNode final : public MethodDeclNode {
    bool IsDefault{};

    ConstructorDeclNode(const VisibilityModifier visibility,
                       const std::string className,
                       MethodArguments* const arguments,
                       StmtSeqNode* const body)
        : MethodDeclNode(visibility, nullptr, className, arguments, body, false)
    {
        IsConstructor = true;
        IsDefault = (arguments == nullptr || arguments->GetSeq().empty());
    }

    [[nodiscard]] std::string Name() const noexcept override {
        return "ConstructorDecl";
    }
};

struct DestructorDeclNode final : Node {
    std::string_view ClassName;
    StmtSeqNode* Body{};
    ClassDeclNode* Class{};

    DestructorDeclNode(const std::string_view className, StmtSeqNode* const body)
        : ClassName{ className }, Body{ body }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override {
        return "DestructorDecl";
    }
};

// Перенесем реализацию ToOperatorOverload сюда, после определения MethodDeclNode
inline OperatorType ToOperatorOverload(const ExprNode::TypeT type)
{
    switch (type)
    {
        case ExprNode::TypeT::BinPlus:
            return OperatorType::Plus;
        case ExprNode::TypeT::BinMinus:
            return OperatorType::Minus;
        case ExprNode::TypeT::Multiply:
            return OperatorType::Multiply;
        case ExprNode::TypeT::Divide:
            return OperatorType::Divide;
        case ExprNode::TypeT::Less:
            return OperatorType::Less;
        case ExprNode::TypeT::Greater:
            return OperatorType::Greater;
        case ExprNode::TypeT::Equal:
            return OperatorType::Equal;
        case ExprNode::TypeT::NotEqual:
            return OperatorType::NotEqual;
        case ExprNode::TypeT::GreaterOrEqual:
            return OperatorType::GreaterOrEqual;
        case ExprNode::TypeT::LessOrEqual:
            return OperatorType::LessOrEqual;
        case ExprNode::TypeT::Not:
            return OperatorType::Not;
        case ExprNode::TypeT::UnaryMinus:
            return OperatorType::UnaryMinus;
        case ExprNode::TypeT::UnaryPlus:
            return OperatorType::UnaryPlus;
        case ExprNode::TypeT::Increment:
            return OperatorType::Increment;
        case ExprNode::TypeT::Decrement:
            return OperatorType::Decrement;
        default:
            return OperatorType::Plus; // Значение по умолчанию
    }
}


struct TypeMembersNode final : Node {
    std::vector<MethodDeclNode*> Methods;
    std::vector<ConstructorDeclNode*> Constructors;
    DestructorDeclNode* Destructor{};
    std::vector<FieldDeclNode*> Fields;

    void Add(MethodDeclNode* node) {
        if (node->IsConstructor) {
            auto* constructor = dynamic_cast<ConstructorDeclNode*>(node);
            if (constructor) {
                Constructors.push_back(constructor);
            } else {
                Methods.push_back(node);
            }
        } else {
            Methods.push_back(node);
        }
    }

    void AddMethod(MethodDeclNode* node) {
        Methods.push_back(node);
    }

    void AddConstructor(ConstructorDeclNode* node) {
        Constructors.push_back(node);
    }

    void AddDestructor(DestructorDeclNode* node) {
        Destructor = node;
    }

    void AddField(FieldDeclNode* node) {
        Fields.push_back(node);
    }

    void AddOperator(MethodDeclNode* node) {
        Methods.push_back(node);
    }

    [[nodiscard]] std::string Name() const noexcept override {
        return "TypeMembers";
    }
};

struct ClassDeclNode final : Node
{
    std::string_view ClassName;
    IdentifierList* ParentType;
    std::vector<std::string_view> ParentTypes;
    std::vector<std::string> FullParentTypes;
    TypeMembersNode* Members;
    NamespaceDeclNode* Namespace{};

    [[nodiscard]] ConstructorDeclNode* GetDefaultConstructor() const {
        for (auto* ctor : Members->Constructors) {
            if (ctor->IsDefault) return ctor;
        }
        return nullptr;
    }

    [[nodiscard]] DataType ToDataType() const;

    [[nodiscard]] FieldDeclNode* FindFieldByName(std::string_view name) const
    {
        for (auto* field : Members->Fields)
        {
            if (field->VarDecl->Identifier == name)
                return field;
        }
        return nullptr;
    }

    ClassDeclNode(const std::string_view className, IdentifierList* parentType, TypeMembersNode* const members)
        : ClassName{ className }
      , ParentType{ parentType }
      , Members{ members }
    {
    }

    ClassDeclNode(const std::string_view className, const std::string_view parentType, TypeMembersNode* const members)
       : ClassName{ className }
    , Members{ members }
    {
        ParentTypes.push_back(parentType);
    }

    [[nodiscard]] std::string Name() const noexcept override { return "ClassDecl"; }
};