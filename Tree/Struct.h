#pragma once
#include <algorithm>
#include <iterator>

#include "Class.h"
#include "Program.h"
#include "Stmt.h"
#include "Type.h"
#include "../VisibilityModifier.h"

struct StructDeclNode;
struct NamespaceDeclNode;

struct StructDeclNode final : Node
{
    std::string_view StructName;
    TypeMembersNode* Members;
    NamespaceDeclNode* Namespace{};

    [[nodiscard]] ConstructorDeclNode* GetDefaultConstructor() const {
        for (auto* ctor : Members->Constructors) {
            if (ctor->IsDefault) return ctor;
        }
        return nullptr;
    }

    [[nodiscard]] DataType ToDataType() const {
        DataType type{ DataType::TypeT::Complex };
        if (Namespace) { 
            type.ComplexType.emplace_back(Namespace->NamespaceName); 
        }
        type.ComplexType.emplace_back(StructName);
        return type;
    }

    [[nodiscard]] FieldDeclNode* FindFieldByName(std::string_view name) const {
        for (auto* field : Members->Fields) {
            if (field->VarDecl->Identifier == name)
                return field;
        }
        return nullptr;
    }

    StructDeclNode(const std::string_view structName, TypeMembersNode* const members)
        : StructName{ structName }
        , Members{ members }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override {
        return "StructDecl"; 
    }
};