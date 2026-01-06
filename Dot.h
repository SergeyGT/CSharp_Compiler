#pragma once

#include <ostream>
#include "Tree/Program.h"


void ToDot(Qualified_or_expr* node, std::ostream& out, bool isType = false);

void ToDot(const TypeNode* node, std::ostream& out);

inline void ToDot(ExprNode* node, std::ostream& out);

void ToDot(const VarDeclNode* node, std::ostream& out);

void ToDot(WhileNode* node, std::ostream& out);

void ToDot(StmtNode* node, std::ostream& out);

void ToDot(const StmtSeqNode* node, std::ostream& out, Node* parent, bool markNext = true, bool createNode = false);

void ToDot(MethodDeclNode* node, std::ostream& out);

void ToDot(FieldDeclNode* node, std::ostream& out);

void ToDot(ClassDeclNode* node, std::ostream& out);

void ToDot(EnumDeclNode* node, std::ostream& out);

void ToDot(NamespaceDeclNode* node, std::ostream& out);

void ToDot(NamespaceDeclSeq* node, std::ostream& out);

void ToDot(UsingDirectiveNode* node, std::ostream& out);

void ToDot(InterfaceDeclNode* node, std::ostream& out);

void ToDot(UsingDirectives* node, std::ostream& out);

void ToDot(Program* node, std::ostream& out);

void RunDot(std::string_view dotPath, std::string_view dotFilePath);