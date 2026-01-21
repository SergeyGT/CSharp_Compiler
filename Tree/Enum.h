// Enum.h
#pragma once
#include "Node.h"
#include "../Semantic/JvmClass.h"

struct EnumDeclNode final : Node
{
    std::string_view EnumName;
    IdentifierList* Enumerators;
    std::string NamespaceName; // Добавить поле для хранения имени namespace

    int GetEnumValue(const std::string_view& name) const {
        if (!Enumerators) return -1;

        int index = 0;
        for (const auto& enumerator : Enumerators->Identifiers) {
            if (enumerator == name) {
                return index;
            }
            index++;
        }
        return -1;
    }
    EnumDeclNode(const std::string_view enumName, IdentifierList* const enumerators)
        : EnumName{ enumName }
    , Enumerators{ enumerators }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "EnumDecl"; }

    // Упрощенная версия без доступа к Namespace
    [[nodiscard]] DataType ToDataType() const
    {
        DataType type;
        type.AType = DataType::TypeT::Complex;
        if (!NamespaceName.empty())
        {
            type.ComplexType.push_back(NamespaceName);
        }
        type.ComplexType.push_back(std::string(EnumName));
        return type;
    }

    void SetNamespace(const std::string& nsName)
    {
        NamespaceName = nsName;
    }
};