#pragma once
#include "Class.h"
#include "Enum.h"
#include "Interface.h"
// ReSharper disable once CppUnusedIncludeDirective
#include "Qualified_or_expr.h"

struct NamespaceMembersNode final : Node
{
    std::vector<ClassDeclNode*> Classes;
    std::vector<EnumDeclNode*> Enums;
	std::vector<InterfaceDeclNode*> Interfaces;

    void Add(ClassDeclNode* node) { Classes.push_back(node); }
    void Add(EnumDeclNode* node) { Enums.push_back(node); }
	void Add(InterfaceDeclNode* node) {Interfaces.push_back(node);}

    NamespaceMembersNode() noexcept = default;

    [[nodiscard]] std::string Name() const noexcept override { return "NamespaceMembers"; }
};

struct NamespaceDeclNode final : Node
{
    std::string_view NamespaceName;
    NamespaceMembersNode* Members;


    NamespaceDeclNode(const std::string_view namespaceName, NamespaceMembersNode* const members)
        : NamespaceName{ namespaceName }
      , Members{ members }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "NamespaceDecl"; }
};

struct UsingDirectiveNode final : Node
{
    IdentifierList* Arg;

    explicit UsingDirectiveNode(IdentifierList* const arg)
        : Arg{ arg }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override { return "Using"; }
};

struct UsingDirectives final : NodeSeq<UsingDirectives, UsingDirectiveNode>
{
    using NodeSeq<UsingDirectives, UsingDirectiveNode>::NodeSeq;

    [[nodiscard]] std::string Name() const noexcept override { return "UsingDirectives"; }
};