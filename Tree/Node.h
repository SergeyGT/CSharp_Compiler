#pragma once
#include <string>
#include <vector>

struct Node
{
    using IdType = size_t;
    const IdType Id;

    Node() : Id{ NextId() }
    {
    }

    Node(const Node& other) = delete;

    Node(Node&& other) noexcept = delete;

    Node& operator=(const Node& other) = delete;

    Node& operator=(Node&& other) noexcept = delete;

    virtual ~Node() = default;

    [[nodiscard]] virtual std::string Name() const noexcept = 0;

    static IdType GenerateId()
    {
        static IdType id = 0;
        return id++;
    }

protected:
    static IdType NextId()
    {
        return GenerateId();
    }
};

template <typename TDerived, typename TNode>
struct NodeSeq : Node
{
    [[nodiscard]] bool IsEmpty() const noexcept { return _seq.empty(); }

    static TDerived* MakeEmpty() { return new TDerived; }

    void Add(TNode* node) { _seq.push_back(node); }

    explicit NodeSeq(TNode* node) : Node() { _seq.push_back(node); }

    [[nodiscard]] std::vector<TNode*>& GetSeq() { return _seq; }
    [[nodiscard]] const std::vector<TNode*>& GetSeq() const { return _seq; }
protected:
    std::vector<TNode*> _seq{};

    NodeSeq() : Node()
    {
    }
};

struct IdentifierList
{
    std::vector<std::string> Identifiers;

    void Add(std::string el) { Identifiers.push_back(el); }
};