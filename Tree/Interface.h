#pragma once
#include "Node.h"
#include "Type.h"
#include "../VisibilityModifier.h"

struct NamespaceDeclNode;
struct MethodArguments;

struct InterfaceMemberNode final : Node
{
    TypeNode* Type{};
    std::string_view MethodName;
    MethodArguments* Arguments{};

    InterfaceMemberNode(TypeNode* const type, const std::string_view methodName,
                       MethodArguments* const arguments)
        : Type{ type }
    , MethodName{ methodName }
    , Arguments{ arguments }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "InterfaceMember"; }
};

struct InterfaceMembersNode final : NodeSeq<InterfaceMembersNode, InterfaceMemberNode>
{
    using NodeSeq<InterfaceMembersNode, InterfaceMemberNode>::NodeSeq;

    [[nodiscard]] std::string Name() const noexcept override
    {
        if (IsEmpty())
            return "Empty InterfaceMembers";
        return "InterfaceMembers";
    }
};

struct InterfaceDeclNode final : Node
{
    std::string_view InterfaceName;
    InterfaceMembersNode* Members{};
    NamespaceDeclNode* Namespace{};

    InterfaceDeclNode(const std::string_view interfaceName, InterfaceMembersNode* const members)
        : InterfaceName{ interfaceName }
    , Members{ members }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "InterfaceDecl"; }
};