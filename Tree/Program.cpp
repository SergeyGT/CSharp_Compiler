// Program.cpp
#include "Program.h"

// Если у вас нет реализации Program, добавьте:
struct Program final : Node
{
    UsingDirectives* Usings{};
    NamespaceDeclSeq* Namespaces{};

    Program(UsingDirectives* usings, NamespaceDeclSeq* namespaces)
        : Usings{ usings }
    , Namespaces{ namespaces }
    {
    }

    [[nodiscard]] std::string Name() const noexcept override
    {
        return "Program";
    }
};