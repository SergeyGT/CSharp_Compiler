// ReSharper disable CppCStyleCast
#include "ClassAnalyzer.h"
#include "Commands.h"
#include <iterator>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std::string_literals;

bool operator==(const Constant& lhs, const Constant& rhs)
{
    if (lhs.Type != rhs.Type) { return false; }
    switch (lhs.Type)
    {
        case Constant::TypeT::Utf8:
            return lhs.Utf8 == rhs.Utf8;
        case Constant::TypeT::Integer:
            return lhs.Integer == rhs.Integer;
        case Constant::TypeT::Float:
            return lhs.Float == rhs.Float;
        case Constant::TypeT::String:
            return lhs.Utf8Id == rhs.Utf8Id;
        case Constant::TypeT::Class:
            return lhs.ClassNameId == rhs.ClassNameId;
        case Constant::TypeT::NameAndType:
            return lhs.NameId == rhs.NameId && lhs.TypeId == rhs.TypeId;
        case Constant::TypeT::MethodRef:
        case Constant::TypeT::FieldRef:
            return lhs.NameAndTypeId == rhs.NameAndTypeId && lhs.ClassId == rhs.ClassId;
    }
    return false;
}

Constant Constant::CreateUtf8(std::string const& content)
{
    Constant constant;
    constant.Type = TypeT::Utf8;
    constant.Utf8 = content;
    return constant;
}

Constant Constant::CreateInt(IntT i)
{
    Constant constant;
    constant.Type = TypeT::Integer;
    constant.Integer = i;
    return constant;
}

Constant Constant::CreateFloat(FloatT float_)
{
    Constant constant;
    constant.Type = TypeT::Float;
    constant.Float = float_;
    return constant;
}

Constant Constant::CreateString(IdT Utf8)
{
    Constant constant;
    constant.Type = TypeT::String;
    constant.Utf8Id = Utf8;
    return constant;
}

Constant Constant::CreateNaT(IdT nameId, IdT typeId)
{
    Constant constant;
    constant.Type = TypeT::NameAndType;
    constant.NameId = nameId;
    constant.TypeId = typeId;
    return constant;
}

Constant Constant::CreateClass(IdT classNameId)
{
    Constant constant;
    constant.Type = TypeT::Class;
    constant.ClassNameId = classNameId;
    return constant;
}

Constant Constant::CreateFieldRef(IdT natId, IdT classId)
{
    Constant constant;
    constant.Type = TypeT::FieldRef;
    constant.NameAndTypeId = natId;
    constant.ClassId = classId;
    return constant;
}

Constant Constant::CreateMethodRef(IdT natId, IdT classId)
{
    Constant constant;
    constant.Type = TypeT::MethodRef;
    constant.NameAndTypeId = natId;
    constant.ClassId = classId;
    return constant;
}

IdT ConstantTable::FindUtf8(std::string_view utf8)
{
    const auto constant = Constant::CreateUtf8(std::string{ utf8 });
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindString(std::string_view str)
{
    const auto constant = Constant::CreateString(FindUtf8(str));
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindInt(IntT i)
{
    const auto constant = Constant::CreateInt(i);
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindFloat(FloatT i)
{
    const auto constant = Constant::CreateFloat(i);
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindClass(std::string_view className)
{
    const auto constant = Constant::CreateClass(FindUtf8(className));
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindNaT(std::string_view name, std::string_view type)
{
    const auto constant = Constant::CreateNaT(FindUtf8(name), FindUtf8(type));
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindFieldRef(std::string_view className, std::string_view name, std::string_view type)
{
    const auto constant = Constant::CreateFieldRef(FindNaT(name, type), FindClass(className));
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}

IdT ConstantTable::FindMethodRef(std::string_view className, std::string_view name, std::string_view type)
{
    const auto constant = Constant::CreateMethodRef(FindNaT(name, type), FindClass(className));
    const auto foundIter = std::find(Constants.begin(), Constants.end(), constant);
    if (foundIter == Constants.end())
    {
        Constants.push_back(constant);
        return Constants.end() - Constants.begin();
    }
    return foundIter - Constants.begin() + 1;
}


ClassAnalyzer::ClassAnalyzer(ClassDeclNode* node, NamespaceDeclNode* namespace_, NamespaceDeclSeq* allNamespaces)
    : CurrentClass{ node }
  , Namespace{ namespace_ }
  , AllNamespaces{ allNamespaces }
{


    // Проверяем, есть ли конструктор (в Members->Constructors)
    if (CurrentClass->Members->Constructors.empty())
    {
        auto* constructor = new ConstructorDeclNode{
            VisibilityModifier::Public,
            std::string{CurrentClass->ClassName},
            MethodArguments::MakeEmpty(),
            StmtSeqNode::MakeEmpty()
        };
        constructor->Class = CurrentClass;
        constructor->IsDefault = true;
        CurrentClass->Members->Constructors.push_back(constructor);
    }
    // const auto hasConstructor = std::any_of(CurrentClass->Members->Methods.begin(),
    //                                         CurrentClass->Members->Methods.end(), [](auto* method)
    //                                         {
    //                                             return method->IsConstructor;
    //                                         });
    // if (!hasConstructor)
    // {
    //     auto* constructor = new MethodDeclNode{
    //         VisibilityModifier::Public,
    //         nullptr,
    //         "<init>",
    //         MethodArguments::MakeEmpty(),
    //         StmtSeqNode::MakeEmpty()
    //     };
    //     constructor->Class = CurrentClass;
    //     CurrentClass->Members->Constructors.push_back(dynamic_cast<std::vector<ConstructorDeclNode *>::value_type>(constructor)); //TODO
    // }
}
ClassAnalyzer::ClassAnalyzer(StructDeclNode* node, NamespaceDeclNode* namespace_, NamespaceDeclSeq* allNamespaces)
    : CurrentStruct{ node }
, Namespace{ namespace_ }
, AllNamespaces{ allNamespaces }
, CurrentClass{ nullptr }  // ЯВНО установите в nullptr
{
    // Проверяем, есть ли конструктор
    if (CurrentStruct->Members->Constructors.empty())
    {
        auto* constructor = new ConstructorDeclNode{
            VisibilityModifier::Public,
            std::string{CurrentStruct->StructName},
            MethodArguments::MakeEmpty(),
            StmtSeqNode::MakeEmpty()
        };
        constructor->Class = nullptr; // Для структур Class = nullptr
        constructor->IsDefault = true;
        CurrentStruct->Members->Constructors.push_back(constructor);
    }
}

void ClassAnalyzer::Analyze() {
    if (CurrentClass)
    {
        AnalyzeClass(CurrentClass);
    }
    else if (CurrentStruct)
    {
        AnalyzeStruct(CurrentStruct);
    }
}

void ClassAnalyzer::AnalyzeMemberSignatures()
{
    // Определяем, с чем работаем
    auto* members = CurrentClass ? CurrentClass->Members :
                   (CurrentStruct ? CurrentStruct->Members : nullptr);

    if (!members) return;

    // Анализ методов
    for (auto* method : members->Methods)
    {
        // Устанавливаем ссылку на родительский тип
        if (CurrentClass)
            method->Class = CurrentClass;
        else if (CurrentStruct)
            method->Class = nullptr; // Для структур Class = nullptr

        // Анализ типов только для не-системных namespace
        if (Namespace->NamespaceName != "System")
        {
            method->AReturnType = ToDataType(method->Type);
            ValidateTypename(method->AReturnType);
        }

        // Анализ аргументов
        for (auto* var : method->Arguments->GetSeq())
        {
            AnalyzeVarDecl(var);
            ValidateTypename(var->AType);
        }
        for (auto& arg : method->ArgumentDtos)
        {
            ValidateTypename(arg.Type);
        }
    }

    // Анализ полей
    auto& fields = CurrentClass ? CurrentClass->Members->Fields : CurrentStruct->Members->Fields;
    for (auto* field : fields)
    {
        if (CurrentClass) field->Class = CurrentClass;
        else if (CurrentStruct) field->Class = nullptr;

        AnalyzeVarDecl(field->VarDecl, false);
    }
}

void ClassAnalyzer::AnalyzeVarDecl(VarDeclNode* varDecl, bool withInit)
{
    if (!varDecl)
        return;

    varDecl->InitExpr = AnalyzeExpr(varDecl->InitExpr);

    if (varDecl->ShouldDeduceType)
    {
        if (!CurrentMethod)
        {
            Errors.emplace_back("Cannot use type deduction on fields of class");
            return;
        }

        if (varDecl->InitExpr == nullptr)
        {
            Errors.emplace_back("Cannot deduce type without initialization");
            return;
        }

        varDecl->AType = varDecl->InitExpr->AType;
    }
    else { varDecl->AType = ToDataType(varDecl->VarType); }

    ValidateTypename(varDecl->AType);

    if (withInit && varDecl->InitExpr && varDecl->AType != varDecl->InitExpr->AType)
    {
        Errors.push_back("Cannot initialize variable of type " + ToString(varDecl->AType) + " with object of type " +
                         ToString(varDecl->InitExpr->AType));
    }

    if (CurrentMethod)
    {
        auto const& methodVariables = CurrentMethod->Variables;
        auto const foundVariable = std::find_if(methodVariables.begin(), methodVariables.end(), [&](VarDeclNode* var)
        {
            return var->Identifier == varDecl->Identifier && varDecl->
                   ScopingLevel <= CurrentScopingLevel;
        });
        if (foundVariable != methodVariables.end())
        {
            Errors.push_back("Variable with name '" + std::string{ varDecl->Identifier } +
                             "' is already defined in method " + std::string{ CurrentMethod->Identifier() });
            return;
        }
        varDecl->ScopingLevel = CurrentScopingLevel;
        CurrentMethod->Variables.push_back(varDecl);
        varDecl->PositionInMethod = CurrentMethod->Variables.size() - 1;
    }
}

void ClassAnalyzer::AnalyzeWhile(WhileNode* while_)
{
    if (!while_)
        return;
    IncrementScopingLevel();
    while_->Condition = AnalyzeExpr(while_->Condition);
    AnalyzeStmt(while_->Body);
    DecrementScopingLevel();
}

void ClassAnalyzer::AnalyzeDoWhile(DoWhileNode* doWhile)
{
    if (!doWhile)
        return;
    IncrementScopingLevel();
    doWhile->Condition = AnalyzeExpr(doWhile->Condition);
    AnalyzeStmt(doWhile->Body);
    DecrementScopingLevel();
}

void ClassAnalyzer::AnalyzeFor(ForNode* for_)
{
    if (!for_)
        return;
    IncrementScopingLevel();
    AnalyzeVarDecl(for_->VarDecl);
    for_->FirstExpr = AnalyzeExpr(for_->FirstExpr);
    for_->Condition = AnalyzeExpr(for_->Condition);
    for_->IterExpr = AnalyzeExpr(for_->IterExpr);
    AnalyzeStmt(for_->Body);
    DecrementScopingLevel();
}

void ClassAnalyzer::AnalyzeForEach(ForEachNode* forEach)
{
    if (!forEach)
        return;
    IncrementScopingLevel();
    AnalyzeVarDecl(forEach->VarDecl);
    forEach->Expr = AnalyzeExpr(forEach->Expr);
    AnalyzeStmt(forEach->Body);
    DecrementScopingLevel();
}

void ClassAnalyzer::AnalyzeIf(IfNode* if_)
{
    if (!if_)
        return;
    IncrementScopingLevel();
    if_->Condition = AnalyzeExpr(if_->Condition);
    AnalyzeStmt(if_->ThenBranch);
    AnalyzeStmt(if_->ElseBranch);
    DecrementScopingLevel();
}

void ClassAnalyzer::AnalyzeReturn(StmtNode* node)
{
    if (node->Type != StmtNode::TypeT::Return)
        return;

    node->Expr = AnalyzeExpr(node->Expr);

    if (node->Expr == nullptr && CurrentMethod->AReturnType != DataType::VoidType)
    {
        Errors.emplace_back("Cannot return empty expression in non-void method " + std::string{
                                CurrentMethod->Identifier()
                            });
    }
    if (node->Expr && node->Expr->AType != CurrentMethod->AReturnType)
    {
        Errors.emplace_back("Cannot return value of type " + ToString(node->Expr->AType) +
                            " in the method which return value is " + ToString(CurrentMethod->AReturnType));
    }
}

void ClassAnalyzer::AnalyzeStmt(StmtNode* stmt)
{
    if (!stmt)
        return;
    AnalyzeVarDecl(stmt->VarDecl);
    AnalyzeWhile(stmt->While);
    AnalyzeDoWhile(stmt->DoWhile);
    AnalyzeFor(stmt->For);
    AnalyzeForEach(stmt->ForEach);
    AnalyzeIf(stmt->If);
    stmt->Expr = AnalyzeExpr(stmt->Expr);
    AnalyzeReturn(stmt);
    if (stmt->Block)
    {
        IncrementScopingLevel();
        for (auto* s : stmt->Block->GetSeq()) { AnalyzeStmt(s); }
        DecrementScopingLevel();
    }
}


void ClassAnalyzer::AnalyzeMethod(MethodDeclNode* method)
{
    if (CurrentClass) {
        method->Class = CurrentClass;
    } else if (CurrentStruct) {
        method->Class = nullptr; // Для структур
    }
    CurrentMethod = method;
    CurrentScopingLevel = 1;
    if (const auto isMain = CurrentMethod->Identifier() == "Main"; isMain && CurrentMethod->IsStatic)
    {
        const auto noArguments = CurrentMethod->ArgumentDtos.empty();
        if (!isMain || !noArguments)
        {
            Errors.emplace_back("Only Main method with no arguments can be static");
            return;
        }
        AllMains.push_back(method);
        CurrentMethod->_identifier = "main";
        // ��������� ���������� args ��� �����
        //CurrentMethod->Variables.push_back(new VarDeclNode(nullptr, "", nullptr));
    }

    const auto canBeStatic = CurrentMethod->IsOperatorOverload || CurrentMethod->Identifier() == "main";

    if (CurrentMethod->IsStatic && !canBeStatic)
    {
        Errors.emplace_back("Only Main method with no arguments and operator overloads can be static");
        return;
    }

    if (!CurrentMethod->IsStatic)
    {
        // Создаем переменную this
        auto thisVar = new VarDeclNode(nullptr, "this", nullptr);
        if (CurrentClass)
            thisVar->AType = CurrentClass->ToDataType();
        else if (CurrentStruct)
            thisVar->AType = CurrentStruct->ToDataType(); // Для структур
        CurrentMethod->Variables.push_back(thisVar);
    }

    const auto& allMethods =  CurrentClass ?
        CurrentClass->Members->Methods :
        CurrentStruct->Members->Methods;
    const auto sameMethodsCount = std::count_if(allMethods.begin(), allMethods.end(), [&](auto* otherMethod)
    {
        return method->Identifier() == otherMethod->Identifier() &&
               ToTypes(method->ArgumentDtos) ==
               ToTypes(otherMethod->ArgumentDtos);
    });

    if (sameMethodsCount > 1)
    {
        Errors.push_back("Method with name "
                         + method->Identifier()
                         + " and with arguments of types: "
                         + ToString(ToTypes(method->ArgumentDtos))
                         + " has been already defined");
    }

    if (method->Body->GetSeq().empty() && method->AReturnType != DataType::VoidType)
    {
        Errors.push_back("There must be return statement in non-void method with name " +
                         method->Identifier()
                        );
        CurrentMethod = nullptr;
        return;
    }

    for (auto* var : method->Arguments->GetSeq())
        AnalyzeVarDecl(var);
    IncrementScopingLevel();
    for (auto* stmt : method->Body->GetSeq()) { AnalyzeStmt(stmt); }
    DecrementScopingLevel();
    if (method->IsOperatorOverload)
    {
        const auto classDataType = CurrentClass->ToDataType();

        if (method->Arguments->GetSeq().size() == 2)
        {
            const auto lhsDataType = method->Arguments->GetSeq()[0]->AType;
            const auto rhsDataType = method->Arguments->GetSeq()[1]->AType;

            if (classDataType != rhsDataType && classDataType != lhsDataType)
            {
                Errors.emplace_back("One of the parameters of a binary operator must be the containing type");
                return;
            }
        }
        if (method->Arguments->GetSeq().size() == 1)
        {
            const auto operandType = method->Arguments->GetSeq()[0]->AType;

            if (classDataType != operandType)
            {
                Errors.emplace_back("The parameters of a unary operator must be the containing type");
                return;
            }
        }
    }

    if (!method->Body->GetSeq().empty()
        && method->Body->GetSeq().back()->Type != StmtNode::TypeT::Return
        && method->AReturnType != DataType::VoidType)
    {
        Errors.push_back("Last statement in method " + method->Identifier() + " must be return!");
    }

    CurrentMethod = nullptr;
}

void ClassAnalyzer::AnalyzeField(FieldDeclNode* field)
{
    AnalyzeVarDecl(field->VarDecl, false);

    if (field->VarDecl->InitExpr && !field->InitInConstructor)
    {
        auto* init = new ExprNode;
        init->Type = ExprNode::TypeT::AssignOnField;
        init->Field = field;
        init->AssignExpr = field->VarDecl->InitExpr;
        field->InitInConstructor = init;

        ConstructorDeclNode* defaultConstructor = nullptr;
        if (CurrentClass) {
            defaultConstructor = CurrentClass->GetDefaultConstructor();
        } else if (CurrentStruct) {
            // Для структур берем первый конструктор
            if (!CurrentStruct->Members->Constructors.empty()) {
                defaultConstructor = CurrentStruct->Members->Constructors[0];
            }
        }

        if (defaultConstructor && defaultConstructor->Body) {
            defaultConstructor->Body->GetSeq().push_back(new StmtNode(init, false));
        }
    }

    // Получаем все поля в зависимости от типа
    const auto& allFields = CurrentClass ?
        CurrentClass->Members->Fields :
        CurrentStruct->Members->Fields;

    const auto fieldNameCount = std::count_if(allFields.begin(), allFields.end(),
        [&](auto* other) {
            return field->VarDecl->Identifier == other->VarDecl->Identifier;
        });

    if (fieldNameCount > 1)
    {
        std::string typeName = CurrentClass ?
            std::string{CurrentClass->ClassName} :
            std::string{CurrentStruct->StructName};

        Errors.push_back("Field with name \"" +
            std::string{ field->VarDecl->Identifier } +
            "\" already defined in " + typeName + "!");
    }
}

void ClassAnalyzer::AnalyzeClass(ClassDeclNode* value)
{
    value->Namespace = this->Namespace;
    std::cout << "[DEBUG] Analyzing class: " << value->ClassName
              << ", constructors count: " << value->Members->Constructors.size() << std::endl;

    for (auto* constructor : value->Members->Constructors) {
        std::cout << "[DEBUG]   Constructor: "
                  << ", class pointer: " << constructor->Class
                  << ", is default: " << constructor->IsDefault << std::endl;

        // Проверяем, что конструктор ссылается на правильный класс
        if (constructor->Class != value) {
            std::cout << "[ERROR] Constructor class mismatch! Expected: "
                      << value << ", got: " << constructor->Class << std::endl;
        }
    }

    for (auto* field : value->Members->Fields) { AnalyzeField(field); }
    for (auto* method : value->Members->Methods)
    {
        method->AnalyzeArguments();
        for (auto& arg : method->ArgumentDtos) { ValidateTypename(arg.Type); }
    }
    for (auto* method : value->Members->Methods) { AnalyzeMethod(method); }

    if (value->Members->Constructors.empty()) {
        Errors.push_back("Class " + std::string{value->ClassName} + " must have at least one constructor");
        auto* constructor = new ConstructorDeclNode{
            VisibilityModifier::Public,
            std::string{value->ClassName},
            MethodArguments::MakeEmpty(),
            StmtSeqNode::MakeEmpty()
        };
        constructor->Class = value;
        constructor->IsDefault = true;
        value->Members->Constructors.push_back(constructor);
    }
}


void ClassAnalyzer::AnalyzeStruct(StructDeclNode* value)
{
    std::cout << "[DEBUG STRUCT] Analyzing struct: " << value->StructName
              << " in namespace: " << Namespace->NamespaceName << std::endl;
    std::cout << "[DEBUG STRUCT] Fields count: " << value->Members->Fields.size()
              << ", Methods count: " << value->Members->Methods.size() << std::endl;

    value->Namespace = this->Namespace;

    // Проверка, что структуры не могут наследоваться
    if (value->Members->Constructors.size() > 1) {
        Errors.push_back("Struct " + std::string{value->StructName} + " can have only one constructor");
    }

    for (auto* field : value->Members->Fields) {
        AnalyzeField(field);

        // Для структур все поля должны быть инициализированы
        if (!field->VarDecl->InitExpr) {
            Errors.push_back("All fields in struct " + std::string{value->StructName} +
                            " must be initialized");
        }
    }

    // Анализ сигнатур методов
    for (auto* method : value->Members->Methods) {
        method->AnalyzeArguments();
        for (auto& arg : method->ArgumentDtos) {
            ValidateTypename(arg.Type);
        }
    }

    // Анализ тел методов
    for (auto* method : value->Members->Methods) {
        AnalyzeMethod(method);
    }

    // Проверка, что структуры не могут иметь деструкторов
    if (value->Members->Destructor) {
        Errors.push_back("Struct " + std::string{value->StructName} + " cannot have destructor");
    }
}
[[nodiscard]] ExprNode* ClassAnalyzer::AnalyzeExpr(ExprNode* expr)
{
    if (!expr)
        return nullptr;
    auto* changed = ReplaceAssignmentsOnArrayElements(expr);
    changed->ApplyToAllChildren(ReplaceAssignmentsOnArrayElements);
    AnalyzeQualified_or_expr(expr->Access);
    AnalyzeQualified_or_expr(expr->ArrayExpr);
    expr->CallForAllChildren([this](ExprNode* expr)
    {
        AnalyzeQualified_or_expr(expr->Access);
        if (expr->Access)
            expr->Access->CallForAllChildren([this](auto* a) { AnalyzeQualified_or_expr(a); });
        AnalyzeQualified_or_expr(expr->ArrayExpr);
        if (expr->ArrayExpr)
            expr->ArrayExpr->CallForAllChildren([this](auto* a) { AnalyzeQualified_or_expr(a); });
        AnalyzeQualified_or_expr(expr->ObjectExpr);
        if (expr->ObjectExpr)
            expr->ObjectExpr->CallForAllChildren([this](auto* a) { AnalyzeQualified_or_expr(a); });

    });
    CalculateTypesForExpr(changed);

    changed = ReplaceAssignmentsOnField(changed);
    changed->ApplyToAllChildren(ReplaceAssignmentsOnField);

    auto validateComplexArrayCreation = [this](ExprNode* node)
    {
        auto* converted = node->ToComplexArrayNew(Errors);
        if (converted)
            return converted;
        return node;
    };

    changed = validateComplexArrayCreation(changed);
    changed->ApplyToAllChildren(validateComplexArrayCreation);

    CalculateTypesForExpr(changed);

    return changed;
}

void ClassAnalyzer::AnalyzeQualified_or_expr(Qualified_or_expr* expr)
{
    if (!expr)
        return;
    AnalyzeSimpleMethodCall(expr);
    AnalyzeDotMethodCall(expr);
    expr->CallForAllChildren([this](Qualified_or_expr* expr)
    {
        AnalyzeSimpleMethodCall(expr);
        AnalyzeDotMethodCall(expr);
    });
}

void ClassAnalyzer::AnalyzeSimpleMethodCall(ExprNode* node)
{
    if (!node)
        return;
    auto* expr = node->Access;
    AnalyzeSimpleMethodCall(expr);
}

void ClassAnalyzer::AnalyzeDotMethodCall(ExprNode* node)
{
    if (!node)
        return;
    auto* expr = node->Access;
    AnalyzeDotMethodCall(expr);
}

void ClassAnalyzer::AnalyzeSimpleMethodCall(Qualified_or_expr* expr)
{
    if (!expr)
        return;
    if (expr->Type != Qualified_or_expr::TypeT::SimpleMethodCall)
        return;

    std::cout << "[DEBUG SimpleMethodCall] Method: " << std::string(expr->Identifier)
              << ", CurrentMethod: " << (CurrentMethod ? CurrentMethod->Identifier() : "null")
              << ", CurrentMethod IsStatic: " << (CurrentMethod ? CurrentMethod->IsStatic : false)
              << std::endl;

    for (auto*& argument : expr->Arguments->GetSeq())
        argument = AnalyzeExpr(argument);

    const auto methodName = expr->Identifier;
    const auto callTypes = [expr, this]()
    {
        auto const& arguments = expr->Arguments->GetSeq();
        std::vector<DataType> types(arguments.size());
        std::transform(arguments.begin(), arguments.end(), types.begin(), [this](auto& arg)
        {
            ValidateTypename(arg->AType);
            return arg->AType;
        });
        return types;
    }();

    std::vector<MethodDeclNode*> allMethods;
    if (CurrentClass) allMethods = CurrentClass->Members->Methods;
    else if (CurrentStruct) allMethods = CurrentStruct->Members->Methods;

    const auto foundMethod = std::find_if(allMethods.begin(), allMethods.end(), [&](auto* method)
    {
        bool nameMatches = methodName == method->Identifier();
        bool typesMatch = callTypes == ToTypes(method->ArgumentDtos);

        // Проверка статического контекста
        bool staticValid = true;
        if (CurrentMethod) {
            // Если текущий метод статический, можно вызывать только статические методы
            // Если текущий метод нестатический, можно вызывать любые методы
            staticValid = !CurrentMethod->IsStatic || method->IsStatic;
        }

        std::cout << "[DEBUG SimpleMethodCall] Checking: " << method->Identifier()
                  << ", IsStatic=" << method->IsStatic
                  << ", nameMatches=" << nameMatches
                  << ", typesMatch=" << typesMatch
                  << ", staticValid=" << staticValid << std::endl;

        return nameMatches && typesMatch && staticValid;
    });

    if (foundMethod == allMethods.end())
    {
        std::cout << "[DEBUG SimpleMethodCall] Method not found: " << std::string(methodName)
                  << " with types " << ToString(callTypes) << std::endl;

        // Может быть, это вызов статического метода из другого класса?
        // Например, System.Console.Write внутри метода?
        // Тогда это должно быть DotMethodCall, а не SimpleMethodCall!

        Errors.push_back("Cannot call method with name " + std::string{ methodName } +
                        " with arguments of types " + ToString(callTypes));
        return;
    }

    std::cout << "[DEBUG SimpleMethodCall] Found method: " << (*foundMethod)->Identifier()
              << ", IsStatic=" << (*foundMethod)->IsStatic << std::endl;

    // Проверка доступности
    if (CurrentMethod && CurrentMethod->IsStatic && !(*foundMethod)->IsStatic)
    {
        Errors.push_back("Cannot call non-static method '" + std::string{ methodName } +
                        "' from static method '" + CurrentMethod->Identifier() + "'");
        return;
    }

    AnalyzeMethodAccessibility(*foundMethod);
    expr->ActualMethodCall = *foundMethod;
}

void ClassAnalyzer::AnalyzeDotMethodCall(Qualified_or_expr* expr)
{
    if (!expr)
        return;
    if (expr->Type != Qualified_or_expr::TypeT::DotMethodCall)
        return;


    std::cout << "[DEBUG AnalyzeDotMethodCall] Method: " << std::string(expr->Identifier)
              << ", arguments count: " << expr->Arguments->GetSeq().size() << std::endl;

    for (auto*& argument : expr->Arguments->GetSeq())
        argument = AnalyzeExpr(argument);

    AnalyzeQualified_or_expr(expr->Previous);
    const auto typeForPrevious = CalculateTypeForQualified_or_expr(expr->Previous);
    auto* foundClass = FindClass(typeForPrevious);
    auto* foundStruct = FindStruct(typeForPrevious);
    if (!foundClass && !foundStruct)
    {
        Errors.push_back("No member " + std::string{ expr->Identifier } + " in type " + ToString(typeForPrevious));
        return;
    }

    const auto methodName = expr->Identifier;
    const auto callTypes = [expr, this]()
    {
        auto const& arguments = expr->Arguments->GetSeq();
        std::vector<DataType> types(arguments.size());
        std::transform(arguments.begin(), arguments.end(), types.begin(), [this](auto& arg)
        {
            ValidateTypename(arg->AType);
            return arg->AType;
        });
        return types;


    }();


    std::cout << "[DEBUG AnalyzeDotMethodCall] callTypes size: " << callTypes.size() << std::endl;
    for (size_t i = 0; i < callTypes.size(); i++) {
        std::cout << "[DEBUG AnalyzeDotMethodCall]   Arg " << i << ": " << ToString(callTypes[i]) << std::endl;
    }

    // Ищем метод в найденном классе или структуре
    std::vector<MethodDeclNode*> allMethods;
    if (foundClass) allMethods = foundClass->Members->Methods;
    else if (foundStruct) allMethods = foundStruct->Members->Methods;

    const auto foundMethod = std::find_if(allMethods.begin(), allMethods.end(), [&](auto* method)
    {
        bool nameMatches = methodName == method->Identifier();
         bool typesMatch = callTypes == ToTypes(method->ArgumentDtos);

         std::cout << "[DEBUG] Checking method: " << method->Identifier()
                   << ", nameMatches=" << nameMatches
                   << ", typesMatch=" << typesMatch
                   << ", method args count=" << method->ArgumentDtos.size()
                   << ", call args count=" << callTypes.size() << std::endl;

         return nameMatches && typesMatch;  // ← БЕЗ !method->IsStatic
    });

    if (foundMethod == allMethods.end())
    {
        Errors.push_back("Cannot call method with name " + std::string{ methodName } + " with arguments of types " +
                         ToString(callTypes));
        std::cout << "[DEBUG] Method not found: " << std::string(methodName)
                  << " in type " << ToString(typeForPrevious) << std::endl;
        return;
    }

    std::cout << "[DEBUG] Found method: " << (*foundMethod)->Identifier()
                 << ", return type: " << ToString((*foundMethod)->AReturnType)
                 << ", IsStatic: " << (*foundMethod)->IsStatic << std::endl;
    AnalyzeMethodAccessibility(*foundMethod);
    expr->ActualMethodCall = *foundMethod;
}

void ClassAnalyzer::AnalyzeFieldAccessibility(FieldDeclNode* field)
{
    const auto sameClass = field->Class == CurrentClass;
    const auto isPublic = field->Visibility == VisibilityModifier::Public;

    if (sameClass || isPublic)
        return;
    Errors.push_back("Cannot access " + ToString(field->Visibility) + " field " + std::string{
                         field->VarDecl->Identifier
                     } + " from class " + std::string{ CurrentClass->ClassName });
}

void ClassAnalyzer::AnalyzeMethodAccessibility(MethodDeclNode* method)
{
    const auto sameClass = method->Class == CurrentClass;
    const auto isPublic = method->Visibility == VisibilityModifier::Public;

    if (sameClass || isPublic)
        return;
    Errors.push_back("Cannot access " + ToString(method->Visibility) + " method " + method->Identifier() +
                     " from class " + std::string{ CurrentClass->ClassName });
}

auto IsIndexType(const DataType& data) -> bool { return data.AType == DataType::TypeT::Int && data.ArrayArity == 0; }


void ClassAnalyzer::CalculateTypesForExpr(ExprNode* node)
{
    if (!node)
        return;

    if (node->Type == ExprNode::TypeT::AssignOnArrayElement)
    {
        const auto dataTypeForArray = CalculateTypeForQualified_or_expr(node->ArrayExpr);
        CalculateTypesForExpr(node->IndexExpr);
        const auto indexType = node->IndexExpr->AType;
        CalculateTypesForExpr(node->AssignExpr);
        if (!IsIndexType(indexType))
        {
            Errors.push_back("Array index must be type int, not " + ToString(indexType));
            return;
        }

        auto thisType = dataTypeForArray;
        thisType.ArrayArity -= 1;

        if (thisType != node->AssignExpr->AType)
        {
            Errors.push_back("Cannot assign value of type " + ToString(node->AssignExpr->AType) + " to value of type " +
                             ToString(thisType));
            return;
        }

        node->AType = thisType;
        return;
    }

    if (node->Type == ExprNode::TypeT::Cast)
    {
        const auto castType = ToDataType(node->StandardTypeChild);
        CalculateTypesForExpr(node->Child);
        const auto& exprType = node->Child->AType;

        const auto anyIsBool = castType == DataType::BoolType
                               || exprType == DataType::BoolType;
        const auto anyIsVoid = castType == DataType::VoidType
                               || exprType == DataType::VoidType;
        const auto anyIsUnknown = castType.IsUnknown || exprType.IsUnknown;
        if (anyIsBool || anyIsVoid || anyIsUnknown)
        {
            Errors.push_back("Cannot cast '" + ToString(exprType) + "' to '" + ToString(castType) + "'");
            node->AType.IsUnknown = true;
            return;
        }
    }

    if (node->Type == ExprNode::TypeT::Qualified_or_expr)
    {
        node->AType = CalculateTypeForQualified_or_expr(node->Access);
        return;
    }

    if (node->Type == ExprNode::TypeT::SimpleNew)
    {
        auto dataType = ToDataType(node->TypeNode);
        ValidateTypename(dataType);
        node->AType = dataType;
        return;
    }

    if (node->Type == ExprNode::TypeT::ArrayNewWithArguments)
    {
        if (const auto& elements = node->ExprSeq->GetSeq();
            !elements.empty())
        {
            for (auto* element : elements) { CalculateTypesForExpr(element); }
            auto type = elements.front()->AType;
            std::vector<DataType> types(elements.size());
            std::transform(elements.begin(), elements.end(), types.begin(), [](ExprNode* node) { return node->AType; });
            const bool allElementsHaveSameType = std::all_of(types.begin(), types.end(),
                                                             [&type](auto& other) { return type == other; });

            if (!allElementsHaveSameType)
            {
                Errors.push_back("Cannot create array with different types: " + ToString(types));
                return;
            }
        }

        if (node->TypeNode != nullptr)
        {
            const auto dataType = ToDataType(node->TypeNode);
            if (dataType.ArrayArity == 0)
            {
                Errors.push_back("Cannot initialize array with array-like syntax the type " + ToString(dataType));
                return;
            }
        }
    }

    if (node->Type == ExprNode::TypeT::ArrayNew)
    {
        CalculateTypesForExpr(node->Child);
        ValidateTypename(node->NewArrayType);
        node->AType = node->NewArrayType;
        if (node->Child->AType != DataType{ DataType::TypeT::Int })
        {
            Errors.push_back("Array size must be int, not " + ToString(node->Child->AType));
        }
        return;
    }

    const DataType boolType = { DataType::TypeT::Bool, {}, {}, {} };

    if (node->Type == ExprNode::TypeT::Assign
        || node->Type == ExprNode::TypeT::AssignOnArrayElement
        || node->Type == ExprNode::TypeT::AssignOnField)
    {
        CalculateTypesForExpr(node->Left);
        CalculateTypesForExpr(node->Right);
        DataType leftType;
        if (node->Type == ExprNode::TypeT::Assign) { leftType = node->Left->AType; }
        else if (node->Type == ExprNode::TypeT::AssignOnArrayElement) { leftType = node->ArrayExpr->AType; }
        else { leftType = node->Field->VarDecl->AType; }
        DataType rightType;
        if (node->Type == ExprNode::TypeT::Assign) { rightType = node->Right->AType; }
        else { rightType = node->AssignExpr->AType; }
        if (leftType != rightType)
        {
            Errors.push_back("Types '" + ToString(leftType) + "' and '" + ToString(rightType) +
                             "' are not compatible with operation " + ToString(node->Type));
        }
        else { node->AType = DataType::VoidType; }

        if (node->Type == ExprNode::TypeT::AssignOnField && node->Field->IsFinal)
        {
            Errors.push_back("You cannot assign to final field named " + std::string{ node->Field->VarDecl->Identifier }
                             + " of class " + node->Field->Class->ToDataType().ToTypename());
        }

        if (node->Type == ExprNode::TypeT::Assign)
        {
            const auto noVariable = !node->Left->Access->ActualVar;
            const auto noField = !node->Left->Access->ActualField;
            if (noField && noVariable)
                Errors.push_back("Cannot assign");
        }

        return;
    }

    if (IsBinary(node->Type))
    {
        CalculateTypesForExpr(node->Left);
        CalculateTypesForExpr(node->Right);
        const auto& leftType = node->Left->AType;
        const auto& rightType = node->Right->AType;

        const bool anyOfOperandsIsComplex = leftType.AType == DataType::TypeT::Complex || rightType.AType ==
                                            DataType::TypeT::Complex;
        if (IsOverloadable(node->Type) && anyOfOperandsIsComplex)
        {
            std::set<MethodDeclNode*> candidates;
            auto* leftClass = FindClass(leftType);
            auto* rightClass = FindClass(rightType);

            if (leftClass)
            {
                auto const& methods = leftClass->Members->Methods;
                std::copy_if(methods.begin(), methods.end(), std::inserter(candidates, candidates.begin()),
                             [&](MethodDeclNode* method)
                             {
                                 return method->IsOperatorOverload
                                        && method->Operator == ToOperatorOverload(node->Type)
                                        && leftType == method->Arguments->GetSeq()[0]->AType
                                        && rightType == method->Arguments->GetSeq()[1]->AType;
                             });
            }
            if (rightClass)
            {
                auto const& methods = rightClass->Members->Methods;
                std::copy_if(methods.begin(), methods.end(), std::inserter(candidates, candidates.begin()),
                             [&](MethodDeclNode* method)
                             {
                                 return method->IsOperatorOverload
                                        && method->Operator == ToOperatorOverload(node->Type)
                                        && leftType == method->Arguments->GetSeq()[0]->AType
                                        && rightType == method->Arguments->GetSeq()[1]->AType;
                             });
            }

            if (candidates.empty())
            {
                Errors.push_back("There is no operator" + ToString(node->Type) + " overload to call with types " +
                                 ToString(std::vector{ leftType, rightType }));
                return;
            }
            if (candidates.size() > 1)
            {
                Errors.push_back("There is more than one operator" + ToString(node->Type) +
                                 " overload to call with types " + ToString(std::vector{ leftType, rightType }));
                return;
            }

            auto* operator_ = *candidates.begin();
            AnalyzeMethodAccessibility(operator_);
            node->AType = operator_->AReturnType;
            node->OverloadedOperation = operator_;
            return;
        }

        if (IsLogical(node->Type))
        {
            node->AType = boolType;
            if (boolType == leftType && boolType == rightType)
                return;
        }
        else if (IsComparison(node->Type))
        {
            node->AType = boolType;
            if (leftType == rightType)
                return;
        }
        else if (leftType == rightType)
        {
            node->AType = leftType;
            return;
        }

        Errors.push_back("Types '" + ToString(leftType) + "' and '" + ToString(rightType) +
                         "' are not compatible with operation " + ToString(node->Type));
    }

    if (IsUnary(node->Type))
    {
        CalculateTypesForExpr(node->Child);
        node->AType = node->Child->AType;
        const auto operandType = node->AType;

        if (IsOverloadable(node->Type) && operandType.AType == DataType::TypeT::Complex)
        {
            auto* class_ = FindClass(operandType);
            std::set<MethodDeclNode*> candidates;
            auto const& methods = class_->Members->Methods;
            std::copy_if(methods.begin(), methods.end(), std::inserter(candidates, candidates.begin()),
                         [&](MethodDeclNode* method)
                         {
                             return method->IsOperatorOverload
                                    && method->Operator == ToOperatorOverload(node->Type)
                                    && operandType == method->Arguments->GetSeq()[0]->AType;
                         });

            if (candidates.empty())
            {
                Errors.push_back("There is no operator" + ToString(node->Type) + " overload to call with type " +
                                 ToString(operandType));
                return;
            }
            if (candidates.size() > 1)
            {
                Errors.push_back("There is more than one operator" + ToString(node->Type) +
                                 " overload to call with types " + ToString(operandType));
                return;
            }

            auto* operator_ = *candidates.begin();
            AnalyzeMethodAccessibility(operator_);
            node->AType = operator_->AReturnType;
            node->OverloadedOperation = operator_;
            return;
        }

        if (node->Type == ExprNode::TypeT::Increment
            || node->Type == ExprNode::TypeT::Decrement
            || node->Type == ExprNode::TypeT::UnaryPlus
            || node->Type == ExprNode::TypeT::UnaryMinus)
        {
            if (node->Child->AType != DataType::IntType)
            {
                Errors.push_back("Type '" + ToString(node->Child->AType) + "' is not compatible with operation " +
                                 ToString(node->Type));
            }
        }

        if (IsLogical(node->Type) && node->Child->AType != boolType)
        {
            node->AType = boolType;
            Errors.push_back("Type '" + ToString(node->Child->AType) + "' is not compatible with operation " +
                             ToString(node->Type));
        }
        return;
    }

    if (node->Type == ExprNode::TypeT::Null)
    {
        node->AType = { DataType::TypeT::Null };
        return;
    }

    node->AType.IsUnknown = true;
}

DataType ClassAnalyzer::CalculateTypeForQualified_or_expr(Qualified_or_expr* access)
{
    DataType type;


    // ReSharper disable once CppIncompleteSwitchStatement
    // ReSharper disable once CppDefaultCaseNotHandledInSwitchStatement
    switch (access->Type) // NOLINT(clang-diagnostic-switch)
    {
        case Qualified_or_expr::TypeT::Integer:
            type.AType = DataType::TypeT::Int;
            access->AType = type;
            return type;
        case Qualified_or_expr::TypeT::Bool:
            type.AType = DataType::TypeT::Bool;
            access->AType = type;
            return type;
        case Qualified_or_expr::TypeT::String:
            access->AType = STD_STRING_TYPE;
            return access->AType;
        case Qualified_or_expr::TypeT::Char:
            type.AType = DataType::TypeT::Char;
            access->AType = type;
            return type;
        case Qualified_or_expr::TypeT::Float:
            type.AType = DataType::TypeT::Float;
            access->AType = type;
            return type;
        case Qualified_or_expr::TypeT::SimpleMethodCall:
        {
            if (access->ActualMethodCall)
            {
                type = access->ActualMethodCall->AReturnType;
                access->AType = type;
            }
            else
            {
                AnalyzeSimpleMethodCall(access);
                if (access->ActualMethodCall)
                    type = access->ActualMethodCall->AReturnType;
                else
                    type = { {}, {}, true };
                access->AType = type;
            }
            return type;
        }

        case Qualified_or_expr::TypeT::ArrayElementExpr:
        {
            const auto dataTypeForPrevious = CalculateTypeForQualified_or_expr(access->Previous);
            CalculateTypesForExpr(access->Child);
            const auto childType = access->Child->AType;
            if (!IsIndexType(childType))
            {
                Errors.push_back("Array index must be type int, not " + ToString(childType));
                access->AType = type;
                return type;
            }
            if (dataTypeForPrevious.ArrayArity == 0)
            {
                Errors.push_back("Cannot use operator[] on type " + ToString(dataTypeForPrevious));
                access->AType = type;
                return type;
            }
            auto thisDataType = dataTypeForPrevious;
            thisDataType.ArrayArity -= 1;
            access->AType = thisDataType;
            return thisDataType;
        }
        case Qualified_or_expr::TypeT::Dot:
        {

            auto typeForPrevious = CalculateTypeForQualified_or_expr(access->Previous);

            // Быстрая проверка для System.Console
            if (typeForPrevious.AType == DataType::TypeT::Namespace &&
                typeForPrevious.NamespaceName == "System" &&
                std::string(access->Identifier) == "Console")
            {
                std::cout << "[DEBUG] Found System.Console" << std::endl;
                // Создаем тип для класса Console
                DataType consoleType;
                consoleType.AType = DataType::TypeT::Complex;
                consoleType.ComplexType = {"System", "Console"};
                access->AType = consoleType;
                return consoleType;
            }

            if (typeForPrevious.AType == DataType::TypeT::Namespace)
            {
                // Ищем класс в этом пространстве имён
                std::string namespaceName = typeForPrevious.NamespaceName;
                for (auto* ns : AllNamespaces->GetSeq())
                {
                    if (ns->NamespaceName == namespaceName)
                    {
                        // Ищем класс
                        for (auto* class_ : ns->Members->Classes)
                        {
                            if (class_->ClassName == access->Identifier)
                            {
                                access->AType = class_->ToDataType();
                                return access->AType;
                            }
                        }
                        // Ищем структуру
                        for (auto* struct_ : ns->Members->Structs)
                        {
                            if (struct_->StructName == access->Identifier)
                            {
                                access->AType = struct_->ToDataType();
                                return access->AType;
                            }
                        }
                        break;
                    }
                }

                // Если не нашли класс/структуру в AST
                Errors.push_back("No class or struct '" + std::string(access->Identifier) +
                                "' in namespace '" + namespaceName + "'");
                type.IsUnknown = true;
                access->AType = type;
                return type;
            }

            if (typeForPrevious.ArrayArity >= 1 && access->Identifier == "Length")
            {
                access->Type = Qualified_or_expr::TypeT::ArrayLength;
                access->AType = DataType::IntType;
                return access->AType;
            }
           auto* foundClass = FindClass(typeForPrevious);
    auto* foundStruct = FindStruct(typeForPrevious);

    if (!foundClass && !foundStruct)
    {
        Errors.push_back("No member " + std::string{ access->Identifier } +
                        " in type " + ToString(typeForPrevious));
        type.IsUnknown = true;
        access->AType = type;
        return type;
    }

    // Проверяем, есть ли метод с таким именем
    const auto& methods = foundClass ? foundClass->Members->Methods : foundStruct->Members->Methods;
    const auto foundMethod = std::find_if(methods.begin(), methods.end(),
        [&](MethodDeclNode* method) {
            return method->Identifier() == access->Identifier;
        });

    if (foundMethod != methods.end())
    {
        // Это метод! Преобразуем в DotMethodCall
        std::cout << "[DEBUG] Converting Dot to DotMethodCall for: "
                  << access->Identifier << std::endl;

        access->Type = Qualified_or_expr::TypeT::DotMethodCall;
        if (!access->Arguments) {
            access->Arguments = new ExprSeqNode(); // Пустой список аргументов
        }
        // Теперь это DotMethodCall, рекурсивно обработаем
        return CalculateTypeForQualified_or_expr(access);
    }
    else
    {
        // Проверяем поля (существующий код)
        const auto& fields = foundClass ? foundClass->Members->Fields : foundStruct->Members->Fields;
        const auto foundField = std::find_if(fields.begin(), fields.end(),
            [&](FieldDeclNode* field) {
                return field->VarDecl->Identifier == access->Identifier;
            });

        if (foundField == fields.end())
        {
            Errors.push_back("No member " + std::string{ access->Identifier } +
                            " in type " + ToString(typeForPrevious));
            type.IsUnknown = true;
            access->AType = type;
            return type;
        }

        access->ActualField = *foundField;
        AnalyzeFieldAccessibility(access->ActualField);
        access->AType = access->ActualField->VarDecl->AType;
        return access->AType;
    }
        }

        case Qualified_or_expr::TypeT::MethodCall:
        {
            std::cout << "[DEBUG] MethodCall case for: " << std::string(access->Identifier) << std::endl;

            // Проверяем, есть ли Previous (вызов через точку)
            if (access->Previous != nullptr) {
                // Это вызов через точку, должен быть обработан как DotMethodCall
                std::cout << "[DEBUG] MethodCall has Previous, converting to DotMethodCall" << std::endl;
                access->Type = Qualified_or_expr::TypeT::DotMethodCall;
                AnalyzeDotMethodCall(access);
                if (access->ActualMethodCall) {
                    type = access->ActualMethodCall->AReturnType;
                    access->AType = type;
                } else {
                    type = { {}, {}, true };
                    access->AType = type;
                }
                return type;
            }

            // Простой вызов метода (без точки)
            // Анализируем вызов
            if (!access->ActualMethodCall) {
                AnalyzeSimpleMethodCall(access);
            }

            if (access->ActualMethodCall) {
                type = access->ActualMethodCall->AReturnType;
                access->AType = type;
                std::cout << "[DEBUG] MethodCall return type: " << ToString(type) << std::endl;
            } else {
                type = { {}, {}, true }; // unknown
                access->AType = type;
            }

            return type;
        }
        case Qualified_or_expr::TypeT::DotMethodCall:
        {
            if (access->ActualMethodCall)
            {
                type = access->ActualMethodCall->AReturnType;
                access->AType = type;
            }
            else
            {
                std::cout << "[DEBUG] DotMethodCall: No ActualMethodCall, analyzing..." << std::endl;
                AnalyzeDotMethodCall(access);
                if (access->ActualMethodCall)
                    type = access->ActualMethodCall->AReturnType;
                else
                    type = { {}, {}, true };
                access->AType = type;
            }
            return type;
        }
        case Qualified_or_expr::TypeT::Identifier:
        {
            auto isVariableFound = false;
            const auto name = std::string{ access->Identifier };

            for (auto* ns : AllNamespaces->GetSeq())
            {
                if (ns->NamespaceName == name)
                {
                    // Это пространство имён!
                    // Создаём специальный тип для пространства имён
                    DataType namespaceType;
                    namespaceType.AType = DataType::TypeT::Namespace;
                    namespaceType.NamespaceName = name;
                    access->AType = namespaceType;
                    return namespaceType;
                }
            }

            // Ищем в локальных переменных метода
            if (CurrentMethod)
            {
                if (auto* var = CurrentMethod->FindVariableByName(name, CurrentScopingLevel); var)
                {
                    type = var->AType;
                    access->AType = type;
                    isVariableFound = true;
                    access->ActualVar = var;
                }
            }

            // Ищем в полях класса или структуры
            const auto currentMethodExistsAndNotStatic = CurrentMethod && !CurrentMethod->IsStatic;
            const bool currentMethodDoesntExist = !CurrentMethod;

            if (!isVariableFound && (currentMethodDoesntExist || currentMethodExistsAndNotStatic))
            {
                if (CurrentClass)
                {
                    if (auto* var = CurrentClass->FindFieldByName(name); var)
                    {
                        AnalyzeFieldAccessibility(var);
                        type = var->VarDecl->AType;
                        access->AType = type;
                        isVariableFound = true;
                        access->ActualField = var;
                    }
                }
                else if (CurrentStruct)
                {
                    // Для структур ищем поля
                    auto& fields = CurrentStruct->Members->Fields;
                    const auto foundField = std::find_if(fields.begin(), fields.end(), [&](FieldDeclNode* field)
                    {
                        return field->VarDecl->Identifier == name;
                    });

                    if (foundField != fields.end())
                    {
                        AnalyzeFieldAccessibility(*foundField);
                        type = (*foundField)->VarDecl->AType;
                        access->AType = type;
                        isVariableFound = true;
                        access->ActualField = *foundField;
                    }
                }
            }

            if (isVariableFound)
            {
                access->AType = type;
                return type;
            }

            Errors.push_back("Variable with name \"" + name + "\" is not found");
            break;
        }
        case Qualified_or_expr::TypeT::Expr:
        {
            CalculateTypesForExpr(access->Child);
            access->AType = access->Child->AType;
            return access->AType;
        }
        case Qualified_or_expr::TypeT::ArrayLength:
            return access->AType;
        default:
            break;
    }

    type.IsUnknown = true;
    access->AType = type;
    return type;
}

ExprNode* ClassAnalyzer::ReplaceAssignmentsOnArrayElements(ExprNode* node)
{
    auto* converted = node->ToAssignOnArrayElement();
    if (converted)
        return converted;
    return node;
}

ExprNode* ClassAnalyzer::ReplaceAssignmentsOnField(ExprNode* node)
{
    auto* converted = node->ToAssignOnField();
    if (converted)
        return converted;
    return node;
}


void ClassAnalyzer::ValidateTypename(DataType& dataType)
{
    if (dataType.IsUnknown) {
        Errors.emplace_back("Cannot create object of unknown type");
    }
    else if (dataType.AType == DataType::TypeT::Complex)
    {
        auto* namespace_ = Namespace;
        if (dataType.ComplexType.size() > 1)
        {
            const auto foundNamespace = std::find_if(AllNamespaces->GetSeq().begin(), AllNamespaces->GetSeq().end(),
                                                     [&](NamespaceDeclNode* namespaceDecl)
                                                     {
                                                         return namespaceDecl->NamespaceName == dataType.ComplexType.
                                                                front();
                                                     });
            if (foundNamespace == AllNamespaces->GetSeq().end())
            {
                Errors.push_back("No namespace called " + std::string{ dataType.ComplexType.front() });
                return;
            }
            namespace_ = *foundNamespace;
        }

        // Ищем класс
        const auto& allClassesInNamespace = namespace_->Members->Classes;
        const auto foundClass = std::find_if(allClassesInNamespace.begin(), allClassesInNamespace.end(),
                                             [&](ClassDeclNode* class_)
                                             {
                                                 return class_->ClassName == dataType.ComplexType.back();
                                             });

        // Ищем структуру
        const auto& allStructsInNamespace = namespace_->Members->Structs;
        const auto foundStruct = std::find_if(allStructsInNamespace.begin(), allStructsInNamespace.end(),
                                              [&](StructDeclNode* struct_)
                                              {
                                                  return struct_->StructName == dataType.ComplexType.back();
                                              });

        if (foundClass == allClassesInNamespace.end() && foundStruct == allStructsInNamespace.end())
        {
            Errors.push_back("No class or struct " + dataType.ComplexType.back() +
                            " in namespace " + std::string{namespace_->NamespaceName});
            dataType.IsUnknown = true;
            return;
        }

        if (dataType.ComplexType.size() == 1)
        {
            dataType.ComplexType.insert(dataType.ComplexType.begin(), std::string{ Namespace->NamespaceName });
        }
    }
}

ClassDeclNode* ClassAnalyzer::FindClass(DataType const& dataType) const
{
    if (dataType.AType != DataType::TypeT::Complex)
        return nullptr;
    if (dataType.ArrayArity > 0)
        return nullptr;
    if (dataType.ComplexType.size() == 1)
    {
        for (auto* class_ : Namespace->Members->Classes)
        {
            if (dataType.ComplexType.back() == class_->ClassName)
                return class_;
        }
    }
    else
    {
        const auto& allNamespaces = AllNamespaces->GetSeq();
        const auto foundNamespace = std::find_if(allNamespaces.begin(), allNamespaces.end(),
                                                 [&](NamespaceDeclNode const* const namespace_)
                                                 {
                                                     return dataType.ComplexType.front() == namespace_->NamespaceName;
                                                 });
        if (foundNamespace == allNamespaces.end())
            return nullptr;
        for (auto* class_ : (*foundNamespace)->Members->Classes)
        {
            if (dataType.ComplexType.back() == class_->ClassName)
                return class_;
        }
    }

    return nullptr;
}

StructDeclNode* ClassAnalyzer::FindStruct(DataType const& dataType) const
{
    if (dataType.AType != DataType::TypeT::Complex)
        return nullptr;
    if (dataType.ArrayArity > 0)
        return nullptr;

    // Ищем в текущем namespace
    if (Namespace)
    {
        for (auto* struct_ : Namespace->Members->Structs)
        {
            if (dataType.ComplexType.back() == struct_->StructName)
                return struct_;
        }
    }

    // Ищем в других namespace
    if (dataType.ComplexType.size() > 1)
    {
        const auto& allNamespaces = AllNamespaces->GetSeq();
        const auto foundNamespace = std::find_if(allNamespaces.begin(), allNamespaces.end(),
            [&](NamespaceDeclNode const* const namespace_)
            {
                return dataType.ComplexType.front() == namespace_->NamespaceName;
            });

        if (foundNamespace != allNamespaces.end())
        {
            for (auto* struct_ : (*foundNamespace)->Members->Structs)
            {
                if (dataType.ComplexType.back() == struct_->StructName)
                    return struct_;
            }
        }
    }

    return nullptr;
}

void ClassAnalyzer::FillTables(FieldDeclNode* field)
{
    const auto nameId = File.Constants.FindUtf8(field->VarDecl->Identifier);
    const auto typeId = File.Constants.FindUtf8(field->VarDecl->AType.ToDescriptor());
    const auto accessFlags = ToAccessFlags(field->Visibility);
    File.Fields.push_back({ nameId, typeId, accessFlags });
}

void ClassAnalyzer::FillTables(MethodDeclNode* method)
{
    const auto nameId = File.Constants.FindUtf8(method->Identifier());
    const auto methodDescriptor = method->Identifier() == "main" && method->IsStatic
                                      ? "([Ljava/lang/String;)V"
                                      : method->ToDescriptor();

    const auto typeId = File.Constants.FindUtf8(methodDescriptor);
    const auto accessFlags = ToAccessFlags(method->Visibility, method->IsStatic);
    File.Methods.push_back({ nameId, typeId, accessFlags, method });
}

void ClassAnalyzer::FillTables()
{
    if (CurrentClass)
    {
        for (auto* constructor : CurrentClass->Members->Constructors)
        {
            const auto nameId = File.Constants.FindUtf8("<init>");
            const auto typeId = File.Constants.FindUtf8("()V");
            const auto accessFlags = ToAccessFlags(constructor->Visibility, false);
            File.Methods.push_back({ nameId, typeId, accessFlags, constructor });
        }

        for (auto* field : CurrentClass->Members->Fields) {
            FillTables(field);
        }
        for (auto* method : CurrentClass->Members->Methods) {
            FillTables(method);
        }
    }
    else if (CurrentStruct)
    {
        for (auto* field : CurrentStruct->Members->Fields) {
            FillTables(field);
        }
        for (auto* method : CurrentStruct->Members->Methods) {
            FillTables(method);
        }
    }
}

Bytes ToBytes(const ConstantTable& constants)
{
    auto bytes = ToBytes((uint16_t)(constants.Constants.size() + 1));
    for (auto const& constant : constants.Constants) { append(bytes, ToBytes(constant)); }
    return bytes;
}

Bytes ToBytes(JvmField field)
{
    Bytes bytes;
    append(bytes, ToBytes(static_cast<uint16_t>(field.AccessFlags)));
    append(bytes, ToBytes(field.NameId));
    append(bytes, ToBytes(field.TypeId));
    constexpr auto attributesCount = (uint16_t)0;
    append(bytes, ToBytes(attributesCount));
    return bytes;
}

Bytes ToBytes(ExprNode* expr, ClassFile& file);

Bytes ToBytes(Qualified_or_expr* expr, ClassFile& file)
{
    switch (expr->Type)
    {
        case Qualified_or_expr::TypeT::Expr:
            return ToBytes(expr->Child, file);
        case Qualified_or_expr::TypeT::ArrayElementExpr:
        {
            const auto arrayType = expr->Previous->AType;
            const auto elementType = expr->AType;
            Bytes bytes;
            append(bytes, ToBytes(expr->Previous, file));
            append(bytes, ToBytes(expr->Child, file));
            if (elementType.IsPrimitiveType())
            {
                if (elementType == DataType::IntType)
                    append(bytes, (uint8_t)Command::iaload);
                else if (elementType == DataType::CharType)
                    append(bytes, (uint8_t)Command::caload);
                else if (elementType == DataType::BoolType)
                    append(bytes, (uint8_t)Command::baload);
            }
            else
                if (elementType.IsReferenceType()) { append(bytes, (uint8_t)Command::aaload); }
            return bytes;
        }
        case Qualified_or_expr::TypeT::ComplexArrayType:
            break;
        case Qualified_or_expr::TypeT::Integer:
        {
            Bytes bytes;
            const auto intVal = expr->Integer;
            if (intVal >= -32768 && intVal <= 32767)
            {
                const auto intBytes = ToBytes((IntT)intVal);
                bytes.push_back((uint8_t)Command::sipush);
                bytes.push_back(intBytes[2]);
                bytes.push_back(intBytes[3]);
            }
            else
            {
                const auto constantId = file.Constants.FindInt(expr->Integer);
                const auto constantIdBytes = ToBytes(constantId);
                append(bytes, (uint8_t)Command::ldc_w);
                append(bytes, constantIdBytes);
            }
            return bytes;
        }
        case Qualified_or_expr::TypeT::Float:
            break;
        case Qualified_or_expr::TypeT::String:
        {
            Bytes bytes;

            const auto stringClassId = file.Constants.FindClass(STD_STRING_TYPE.ToTypename());
            append(bytes, (uint8_t)Command::new_);
            append(bytes, ToBytes(stringClassId));
            append(bytes, (uint8_t)Command::dup);

            const auto stringLiteralId = file.Constants.FindString(expr->String);
            append(bytes, (uint8_t)Command::ldc_w);
            append(bytes, ToBytes(stringLiteralId));

            const auto constructorId = file.Constants.FindMethodRef(STD_STRING_TYPE.ToTypename(),
                                                                    STD_STRING_CONSTRUCTOR_INFO.Name,
                                                                    STD_STRING_CONSTRUCTOR_INFO.Descriptor);
            append(bytes, (uint8_t)Command::invokespecial);
            append(bytes, ToBytes(constructorId));
            return bytes;
        }
        case Qualified_or_expr::TypeT::Char:
        {
            Bytes bytes;
            append(bytes, (uint8_t)Command::bipush);
            append(bytes, expr->Char);
            return bytes;
        }
        case Qualified_or_expr::TypeT::Bool:
        {
            Bytes bytes;
            if (expr->Bool)
                append(bytes, (uint8_t)Command::iconst_1);
            else
                append(bytes, (uint8_t)Command::iconst_0);
            return bytes;
        }
        case Qualified_or_expr::TypeT::Identifier:
        {
            Bytes bytes;
            if (expr->ActualVar)
            {
                auto* const var = expr->ActualVar;
                if (var->AType.IsPrimitiveType())
                {
                    append(bytes, (uint8_t)Command::iload);
                    append(bytes, (uint8_t)var->PositionInMethod);
                }
                if (var->AType.IsReferenceType())
                {
                    append(bytes, (uint8_t)Command::aload);
                    append(bytes, (uint8_t)var->PositionInMethod);
                }
                return bytes;
            }
            if (expr->ActualField)
            {
                auto* const field = expr->ActualField;
                Bytes objectBytes;
                append(objectBytes, (uint8_t)Command::aload_0);
                append(bytes, objectBytes);
                append(bytes, (uint8_t)Command::getfield);

                const auto fieldRefId = file.Constants.FindFieldRef(field->Class->ToDataType().ToTypename(),
                                                                    field->VarDecl->Identifier,
                                                                    field->VarDecl->AType.ToDescriptor());
                append(bytes, ToBytes(fieldRefId));
                return bytes;
            }
            throw std::runtime_error{ "could not load " + std::string{ expr->Identifier } };
        }
        case Qualified_or_expr::TypeT::SimpleMethodCall:
        {
            Bytes bytes;

            const auto* method = expr->ActualMethodCall;

            // Если метод нестатический, загружаем this (aload_0)
            if (method && !method->IsStatic)
            {
                append(bytes, (uint8_t)Command::aload_0);
            }

            // Загружаем аргументы на стек
            for (auto* arg : expr->Arguments->GetSeq())
            {
                append(bytes, ToBytes(arg, file));
            }

            const auto methodRefConstant = file.Constants.FindMethodRef(
                method->Class->ToDataType().ToTypename(),
                method->Identifier(),
                method->ToDescriptor()
            );

            // Выбираем правильную инструкцию вызова
            if (method->IsStatic)
            {
                append(bytes, (uint8_t)Command::invokestatic);
            }
            else
            {
                append(bytes, (uint8_t)Command::invokevirtual);
            }
            append(bytes, ToBytes(methodRefConstant));
            return bytes;
        }

        case Qualified_or_expr::TypeT::Dot:
        {
            if (expr->ActualField)
            {
                Bytes bytes;
                auto* const field = expr->ActualField;
                Bytes objectBytes = ToBytes(expr->Previous, file);
                append(bytes, objectBytes);
                append(bytes, (uint8_t)Command::getfield);

                const auto fieldRefId = file.Constants.FindFieldRef(field->Class->ToDataType().ToTypename(),
                                                                    field->VarDecl->Identifier,
                                                                    field->VarDecl->AType.ToDescriptor());
                append(bytes, ToBytes(fieldRefId));
                return bytes;
            }
            break;
        }
        case Qualified_or_expr::TypeT::DotMethodCall:
        {
            Bytes bytes;
            // Загружаем объект (предыдущее выражение) на стек
            append(bytes, ToBytes(expr->Previous, file));

            // Загружаем аргументы на стек
            for (auto* arg : expr->Arguments->GetSeq())
            {
                append(bytes, ToBytes(arg, file));
            }

            const auto* method = expr->ActualMethodCall;

            std::cout << "[DEBUG] Generating DotMethodCall: "
              << method->Identifier()
              << ", Class: " << method->Class->ToDataType().ToTypename()
              << ", Descriptor: " << method->ToDescriptor()
              << ", IsStatic: " << method->IsStatic << std::endl;

            const auto methodRefConstant = file.Constants.FindMethodRef(
                method->Class->ToDataType().ToTypename(),
                method->Identifier(),
                method->ToDescriptor()
            );

            // Выбираем правильную инструкцию вызова
            if (method->IsStatic)
            {
                append(bytes, (uint8_t)Command::invokestatic);
            }
            else
            {
                append(bytes, (uint8_t)Command::invokevirtual);
            }
            append(bytes, ToBytes(methodRefConstant));
            return bytes;
        }
        case Qualified_or_expr::TypeT::ArrayLength:
        {
            Bytes bytes;
            // �������� ��������� ����� �� �����
            append(bytes, ToBytes(expr->Previous, file));
            append(bytes, (uint8_t)Command::arraylength);
            return bytes;
        }
        default: ;
    }
    return {};
}

enum class ArrayType : uint8_t
{
    Boolean = 4,
    Char = 5,
    Float = 6,
    Double = 7,
    Byte = 8,
    Short = 9,
    Int = 10,
    Long = 11
};

Bytes ToBytes(ExprNode* expr, ClassFile& file)
{
    if (expr->Type == ExprNode::TypeT::Null)
    {
        Bytes bytes;
        append(bytes, (uint8_t)Command::aconst_null);
        return bytes;
    }
    if (expr->OverloadedOperation)
    {
        Bytes bytes;

        if (IsBinary(expr->Type))
        {
            const auto leftBytes = ToBytes(expr->Left, file);
            const auto rightBytes = ToBytes(expr->Right, file);
            append(bytes, leftBytes);
            append(bytes, rightBytes);
        }
        if (IsUnary(expr->Type))
        {
            const auto childBytes = ToBytes(expr->Child, file);
            append(bytes, childBytes);
        }
        const auto operatorRef = file.Constants.FindMethodRef(expr->OverloadedOperation->Class->ToDataType().
                                                                    ToTypename(),
                                                              expr->OverloadedOperation->Identifier(),
                                                              expr->OverloadedOperation->ToDescriptor());
        append(bytes, (uint8_t)Command::invokestatic);
        append(bytes, ToBytes(operatorRef));
        return bytes;
    }

    if (expr->Type == ExprNode::TypeT::Increment || expr->Type == ExprNode::TypeT::Decrement)
    {
        Bytes bytes;
        auto* access = expr->Child->Access;
        if (!access)
            throw std::runtime_error{ "Internal error: increment not for a variable or field" };

        FieldDeclNode* field = access->ActualField;
        VarDeclNode* variable = access->ActualVar;

        if (variable)
        {
            auto varIndex = (uint8_t)variable->PositionInMethod;
            // ��������� ������� iinc
            append(bytes, (uint8_t)Command::iinc);
            // ��������� varIndex
            append(bytes, varIndex);
            // ��������� ��������� 1 / -1
            int8_t incVal = expr->Type == ExprNode::TypeT::Increment ? 1 : -1;
            append(bytes, incVal);
            // ��������� ��� �� ���������� iload
            append(bytes, (uint8_t)Command::iload);
            append(bytes, (uint8_t)variable->PositionInMethod);
        }
        if (field)
        {
            // ��������� ���� (getfield)
            // ��������� 1 �� ���� (iconst_1)
            // ��������� �������� iadd / isub
            // ��������� ������� dup
            // ������� putfield
        }
        return bytes;
    }

    if (IsComparison(expr->Type) || expr->Type == ExprNode::TypeT::Not)
    {
        Bytes bytes;
        if (expr->Type == ExprNode::TypeT::Not)
        {
            const auto childBytes = ToBytes(expr->Child, file);
            append(bytes, childBytes);
        }
        else
        {
            const auto leftBytes = ToBytes(expr->Left, file);
            const auto rightBytes = ToBytes(expr->Right, file);

            append(bytes, leftBytes);
            append(bytes, rightBytes);
        }

        Command command{};

        // ReSharper disable once CppIncompleteSwitchStatement 
        // ReSharper disable once CppDefaultCaseNotHandledInSwitchStatement
        switch (expr->Type)
        {
                // NOLINT(clang-diagnostic-switch)
            case ExprNode::TypeT::Less:
                command = Command::if_icmpge;
                break;
            case ExprNode::TypeT::Greater:
                command = Command::if_icmple;
                break;
            case ExprNode::TypeT::Equal:
                command = Command::if_icmpne;
                break;
            case ExprNode::TypeT::NotEqual:
                command = Command::if_icmpeq;
                break;
            case ExprNode::TypeT::GreaterOrEqual:
                command = Command::if_icmplt;
                break;
            case ExprNode::TypeT::LessOrEqual:
                command = Command::if_icmpgt;
                break;
            case ExprNode::TypeT::Not:
                command = Command::ifne;
                break;
        }

        append(bytes, (uint8_t)command);
        const auto falseCommandOffset = ToBytes((int16_t)7);
        append(bytes, falseCommandOffset);
        // ��������� true
        append(bytes, (uint8_t)Command::iconst_1);
        // ������� �� ������� if/else
        append(bytes, (uint8_t)Command::goto_);
        const auto trueOffset = ToBytes((int16_t)4);
        append(bytes, trueOffset);
        // ��������� false
        append(bytes, (uint8_t)Command::iconst_0);
        // �������, ������� ������ �� ������.
        // ������� �� ������ ������, ����� ������ ���� ���� ������� �� goto
        append(bytes, (uint8_t)Command::nop);

        return bytes;
    }

    if (expr->Type == ExprNode::TypeT::Assign)
    {
        if (expr->Left->Access && expr->Left->Access->ActualVar)
        {
            Bytes bytes;
            const auto rightBytes = ToBytes(expr->Right, file);
            append(bytes, rightBytes);
            auto* var = expr->Left->Access->ActualVar;
            const auto variableNumberBytes = (uint8_t)(var->PositionInMethod);
            if (var->AType.IsReferenceType()) { append(bytes, (uint8_t)Command::astore); }
            else
                if (var->AType.IsPrimitiveType()) { append(bytes, (uint8_t)Command::istore); }

            append(bytes, variableNumberBytes);
            return bytes;
        }
        throw std::runtime_error{ "only variable can be assigned" };
    }

    if (IsLogical(expr->Type) && IsBinary(expr->Type))
    {
        Bytes bytes;
        const auto leftBytes = ToBytes(expr->Left, file);
        const auto rightBytes = ToBytes(expr->Right, file);

        append(bytes, leftBytes);

        Command command{};
        Bytes firstJumpBytes;

        constexpr auto ifeqLength = 3;
        constexpr auto gotoLength = 3;
        constexpr auto iconstLength = 1;

        const auto trueValueOffset = rightBytes.size() + ifeqLength + iconstLength;
        const auto falseValueOffset = rightBytes.size() + ifeqLength + iconstLength * 2 + gotoLength;

        if (expr->Type == ExprNode::TypeT::And)
        {
            command = Command::ifeq;
            firstJumpBytes = ToBytes((uint16_t)falseValueOffset);
        }
        else if (expr->Type == ExprNode::TypeT::Or)
        {
            command = Command::ifne;
            firstJumpBytes = ToBytes((uint16_t)trueValueOffset);
        }

        append(bytes, (uint8_t)command);
        append(bytes, firstJumpBytes);

        append(bytes, rightBytes);

        append(bytes, (uint8_t)Command::ifeq);
        append(bytes, ToBytes((uint16_t)(ifeqLength + gotoLength + iconstLength)));

        append(bytes, (uint8_t)Command::iconst_1);

        append(bytes, (uint8_t)Command::goto_);
        append(bytes, ToBytes((uint16_t)(gotoLength + iconstLength)));

        append(bytes, (uint8_t)Command::iconst_0);

        append(bytes, (uint8_t)Command::nop);

        return bytes;
    }

    if (IsBinary(expr->Type))
    {
        Bytes bytes;
        const auto leftBytes = ToBytes(expr->Left, file);
        const auto rightBytes = ToBytes(expr->Right, file);
        append(bytes, leftBytes);
        append(bytes, rightBytes);
        if (expr->AType.IsPrimitiveType())
        {
            switch (expr->Type) // NOLINT(clang-diagnostic-switch-enum)
            {
                case ExprNode::TypeT::BinPlus:
                    append(bytes, (uint8_t)Command::iadd);
                    break;
                case ExprNode::TypeT::BinMinus:
                    append(bytes, (uint8_t)Command::isub);
                    break;
                case ExprNode::TypeT::Multiply:
                    append(bytes, (uint8_t)Command::imul);
                    break;
                case ExprNode::TypeT::Divide:
                    append(bytes, (uint8_t)Command::idiv);
                    break;

                default:
                    throw std::runtime_error{ "Not supported" };
            }
        }
        else { throw std::runtime_error{ "Only ints are supported" }; }
        return bytes;
    }

    if (IsUnary(expr->Type))
    {
        Bytes bytes;
        const auto childBytes = ToBytes(expr->Child, file);
        append(bytes, childBytes);
        switch (expr->Type)
        {
            case ExprNode::TypeT::UnaryMinus:
            {
                append(bytes, (uint8_t)Command::ineg);
                break;
            }
            case ExprNode::TypeT::UnaryPlus:
                break; /* noop */
            default:
                throw std::runtime_error{ "Not supported operation " + ToString(expr->Type) };
        }

        return bytes;
    }

    if (expr->Type == ExprNode::TypeT::Qualified_or_expr) { return ToBytes(expr->Access, file); }

    if (expr->Type == ExprNode::TypeT::SimpleNew)
    {
        const auto type = expr->AType;

        // Для простых типов создаем массив, для Complex - объект
        if (type.AType == DataType::TypeT::Complex)
        {
            const auto classIdConstant = file.Constants.FindClass(type.ToTypename());

            std::cout << "[DEBUG] Creating object of type: " << type.ToTypename() << std::endl;

            Bytes bytes;
            append(bytes, (uint8_t)Command::new_);
            append(bytes, ToBytes(classIdConstant));
            append(bytes, (uint8_t)Command::dup);

            // ВАЖНО: вызываем конструктор СОЗДАВАЕМОГО КЛАССА, а не Object!
            const auto constructorRef = file.Constants.FindMethodRef(
                type.ToTypename(),  // Например "HelloWorld/N"
                "<init>",           // Имя конструктора
                "()V"               // Дескриптор (без аргументов)
            );

            std::cout << "[DEBUG] Constructor ref for " << type.ToTypename()
                      << ".<init>()V: " << constructorRef << std::endl;

            if (constructorRef == 0)
            {
                // Если конструктор не найден (ошибка в таблице констант)
                std::cout << "[ERROR] Constructor not found for " << type.ToTypename() << std::endl;
                throw std::runtime_error("Constructor not found for " + type.ToTypename());
            }

            append(bytes, (uint8_t)Command::invokespecial);
            append(bytes, ToBytes(constructorRef));

            return bytes;
        }

        throw std::runtime_error{ "Cannot create object of type " + ToString(type) };
    }

    if (expr->Type == ExprNode::TypeT::ArrayNew)
    {
        const auto type = expr->AType;
        auto elementType = type;
        elementType.ArrayArity = 0;
        if (type.ArrayArity == 0)
            throw std::runtime_error{ "Internal error: array arity = 0 in ArrayNew expr" };
        if (type.ArrayArity > 1)
            throw std::runtime_error{ "Cannot create multidimensional array" };
        if (elementType.IsPrimitiveType())
        {
            Bytes bytes;
            append(bytes, ToBytes(expr->Child, file));
            append(bytes, (uint8_t)Command::newarray);
            if (type.AType == DataType::TypeT::Int)
                append(bytes, (uint8_t)ArrayType::Int);
            else if (type.AType == DataType::TypeT::Char)
                append(bytes, (uint8_t)ArrayType::Char);
            else if (type.AType == DataType::TypeT::Bool)
                append(bytes, (uint8_t)ArrayType::Boolean);
            return bytes;
        }
        if (elementType.IsReferenceType())
        {
            Bytes bytes;
            append(bytes, ToBytes(expr->Child, file));
            append(bytes, (uint8_t)Command::anewarray);
            const auto classId = file.Constants.FindClass(elementType.ToTypename());
            append(bytes, ToBytes(classId));
            return bytes;
        }
    }

    if (expr->Type == ExprNode::TypeT::AssignOnArrayElement)
    {
        const auto arrayType = expr->ArrayExpr->AType;
        auto elementType = arrayType;
        elementType.ArrayArity--;
        Bytes bytes;
        append(bytes, ToBytes(expr->ArrayExpr, file));
        append(bytes, ToBytes(expr->IndexExpr, file));
        append(bytes, ToBytes(expr->AssignExpr, file));
        if (elementType.IsPrimitiveType())
        {
            if (elementType == DataType::IntType)
                append(bytes, (uint8_t)Command::iastore);
            else if (elementType == DataType::CharType)
                append(bytes, (uint8_t)Command::castore);
            else if (elementType == DataType::BoolType)
                append(bytes, (uint8_t)Command::bastore);
        }
        if (elementType.IsReferenceType()) { append(bytes, (uint8_t)Command::aastore); }
        return bytes;
    }

    if (expr->Type == ExprNode::TypeT::AssignOnField)
    {
        Bytes bytes;

        Bytes objectBytes;

        if (expr->ObjectExpr) { objectBytes = ToBytes(expr->ObjectExpr, file); }
        else { append(objectBytes, (uint8_t)Command::aload_0); }

        auto* const field = expr->Field;
        append(bytes, objectBytes);
        append(bytes, ToBytes(expr->AssignExpr, file));

        append(bytes, (uint8_t)Command::putfield);
        const auto fieldRefId = file.Constants.FindFieldRef(field->Class->ToDataType().ToTypename(),
                                                            field->VarDecl->Identifier,
                                                            field->VarDecl->AType.ToDescriptor());
        append(bytes, ToBytes(fieldRefId));
        return bytes;
    }

    return {};
}

Bytes ToBytes(VarDeclNode* node, ClassFile& file)
{
    Bytes bytes;

    // ������������� ����������
    if (node->InitExpr) { append(bytes, ToBytes(node->InitExpr, file)); }
    else
    {
        if (node->AType.IsPrimitiveType()) { append(bytes, (uint8_t)Command::iconst_0); }
        else if (node->AType.IsReferenceType()) { append(bytes, (uint8_t)Command::aconst_null); }
        else { throw std::runtime_error("unsupported type of variable " + ToString(node->AType)); }
    }

    if (node->AType.IsPrimitiveType()) { append(bytes, (uint8_t)Command::istore); }
    else
        if (node->AType.IsReferenceType()) { append(bytes, (uint8_t)Command::astore); }

    append(bytes, (uint8_t)node->PositionInMethod);

    return bytes;
}

Bytes ToBytes(StmtNode* stmt, ClassFile& file);

Bytes ToBytes(StmtSeqNode* block, ClassFile& file)
{
    Bytes bytes;
    for (auto* stmt : block->GetSeq()) { append(bytes, ToBytes(stmt, file)); }
    return bytes;
}

Bytes ToBytes(IfNode* stmt, ClassFile& file)
{
    const auto hasElse = stmt->ElseBranch != nullptr;
    const auto conditionBytes = ToBytes(stmt->Condition, file);
    auto trueBranchBytes = ToBytes(stmt->ThenBranch, file);
    const auto elseBytes = ToBytes(stmt->ElseBranch, file);

    Bytes bytes;
    append(bytes, conditionBytes);

    if (hasElse)
    {
        const auto trueBranchOffset = ToBytes((int16_t)(elseBytes.size() + 3));
        append(trueBranchBytes, (uint8_t)Command::goto_);
        append(trueBranchBytes, trueBranchOffset);
    }

    append(bytes, (uint8_t)Command::ifeq);
    append(bytes, ToBytes((int16_t)(trueBranchBytes.size() + 3)));
    append(bytes, trueBranchBytes);
    append(bytes, elseBytes);
    append(bytes, (uint8_t)Command::nop);

    return bytes;
}

Bytes ReturnToBytes(ExprNode* returnExpr, ClassFile& file)
{
    Bytes bytes;
    if (returnExpr == nullptr) { append(bytes, (uint8_t)Command::return_); }
    else if (returnExpr->AType == DataType::IntType || returnExpr->AType == DataType::BoolType)
    {
        append(bytes, ToBytes(returnExpr, file));
        append(bytes, (uint8_t)Command::ireturn);
    }
    else if (returnExpr->AType.IsReferenceType())
    {
        append(bytes, ToBytes(returnExpr, file));
        append(bytes, (uint8_t)Command::areturn);
    }

    return bytes;
}

Bytes ToBytes(WhileNode* while_, ClassFile& file)
{
    Bytes bytes;

    const auto conditionBytes = ToBytes(while_->Condition, file);
    const auto bodyBytes = ToBytes(while_->Body, file);

    constexpr auto ifeqCommandLength = 3;
    constexpr auto gotoCommandLength = 3;
    const auto gotoBytesOffset = -static_cast<int16_t>(conditionBytes.size() + bodyBytes.size() + ifeqCommandLength);
    const auto ifeqBytesOffset = static_cast<int16_t>(bodyBytes.size() + ifeqCommandLength + gotoCommandLength);
    // ��������� �������
    append(bytes, conditionBytes);

    // ��������� ��������� ������� �� ����
    append(bytes, (uint8_t)Command::ifeq);
    append(bytes, ToBytes(ifeqBytesOffset));

    // ���� �����
    append(bytes, bodyBytes);

    // ������ �� �������� ������� �����
    append(bytes, (uint8_t)Command::goto_);
    append(bytes, ToBytes((int16_t)gotoBytesOffset));

    append(bytes, (uint8_t)Command::nop);

    return bytes;
}

Bytes ToBytes(DoWhileNode* doWhile, ClassFile& file)
{
    Bytes bytes;

    const auto conditionBytes = ToBytes(doWhile->Condition, file);
    const auto bodyBytes = ToBytes(doWhile->Body, file);

    constexpr auto ifeqCommandLength = 3;
    constexpr auto gotoCommandLength = 3;
    const auto gotoBytesOffset = -static_cast<int16_t>(conditionBytes.size() + bodyBytes.size() + ifeqCommandLength);
    const auto ifeqBytesOffset = static_cast<int16_t>(bodyBytes.size() + ifeqCommandLength + gotoCommandLength);
    // ���� �����
    append(bytes, bodyBytes);

    // ��������� �������
    append(bytes, conditionBytes);

    // ��������� ��������� ������� �� ����
    append(bytes, (uint8_t)Command::ifeq);
    append(bytes, ToBytes(ifeqBytesOffset));

    // ���� �����
    append(bytes, bodyBytes);

    // ������ �� �������� ������� �����
    append(bytes, (uint8_t)Command::goto_);
    append(bytes, ToBytes((int16_t)gotoBytesOffset));

    append(bytes, (uint8_t)Command::nop);

    return bytes;
}

Bytes ToBytes(ForNode* for_, ClassFile& file)
{
    Bytes bytes;

    Bytes firstBytes;

    if (for_->FirstExpr)
        append(bytes, ToBytes(for_->FirstExpr, file));
    else if (for_->VarDecl)
        append(bytes, ToBytes(for_->VarDecl, file));

    const auto conditionBytes = ToBytes(for_->Condition, file);
    const auto iterExprBytes = ToBytes(for_->IterExpr, file);
    auto bodyBytes = ToBytes(for_->Body, file);
    append(bodyBytes, iterExprBytes);

    constexpr auto ifeqCommandLength = 3;
    constexpr auto gotoCommandLength = 3;
    const auto gotoBytesOffset = -static_cast<int16_t>(conditionBytes.size() + bodyBytes.size() + ifeqCommandLength);
    const auto ifeqBytesOffset = static_cast<int16_t>(bodyBytes.size() + ifeqCommandLength + gotoCommandLength);

    append(bytes, firstBytes);

    // ��������� �������
    append(bytes, conditionBytes);

    // ��������� ��������� ������� �� ����
    append(bytes, (uint8_t)Command::ifeq);
    append(bytes, ToBytes(ifeqBytesOffset));

    // ���� �����
    append(bytes, bodyBytes);

    // ������ �� �������� ������� �����
    append(bytes, (uint8_t)Command::goto_);
    append(bytes, ToBytes((int16_t)gotoBytesOffset));

    append(bytes, (uint8_t)Command::nop);

    return bytes;
}

Bytes ToBytes(StmtNode* stmt, ClassFile& file)
{
    if (!stmt)
        return {};
    Bytes bytes;

    switch (stmt->Type)
    {
        case StmtNode::TypeT::Empty:
            return bytes;
        case StmtNode::TypeT::VarDecl:
            return ToBytes(stmt->VarDecl, file);
        case StmtNode::TypeT::While:
            return ToBytes(stmt->While, file);
        case StmtNode::TypeT::DoWhile:
            return ToBytes(stmt->DoWhile, file);
        case StmtNode::TypeT::For:
            return ToBytes(stmt->For, file);
        case StmtNode::TypeT::Foreach:
            break;
        case StmtNode::TypeT::BlockStmt:
            return ToBytes(stmt->Block, file);
        case StmtNode::TypeT::IfStmt:
            return ToBytes(stmt->If, file);
        case StmtNode::TypeT::Return:
            return ReturnToBytes(stmt->Expr, file);
        case StmtNode::TypeT::ExprStmt:
            return ToBytes(stmt->Expr, file);
        default: ;
    }
    return {};
}

Bytes ToBytes(MethodDeclNode* method, ClassFile& classFile)
{
    Bytes bytes;

    constexpr auto stackSize = (uint16_t)1000;
    append(bytes, ToBytes(stackSize));

    const uint16_t localVariablesCount = method->Variables.size()+1;

    append(bytes, ToBytes(localVariablesCount));

    Bytes codeBytes;

    std::cout << "[DEBUG] Generating bytecode for method: "
              << (method->IsConstructor ? "constructor " : "")
              << method->Identifier()
              << " in class: ";

    if (method->IsConstructor)
    {
        std::cout << "[DEBUG BYTECODE] Generating constructor for class: ";
        if (method->Class) {
            std::cout << method->Class->ClassName;
        } else {
            std::cout << "null";
        }
        std::cout << std::endl;

        append(codeBytes, (uint8_t)Command::aload_0);
        append(codeBytes, (uint8_t)Command::invokespecial);

        // ВАЖНО: убедитесь, что вызывается конструктор Object, а не этого же класса
        std::string superClassName = JAVA_OBJECT_TYPE.ToTypename();


        const auto javaBaseObjectConstructor = classFile.Constants.FindMethodRef(
            superClassName,
            "<init>",
            "()V"
        );

        std::cout << "[DEBUG BYTECODE] Calling super constructor: "
                  << superClassName << ".<init>()"
                  << " (constant id: " << javaBaseObjectConstructor << ")" << std::endl;

        append(codeBytes, ToBytes(javaBaseObjectConstructor));
    }

    for (auto* stmt : method->Body->GetSeq()) { append(codeBytes, ToBytes(stmt, classFile)); }

    append(codeBytes, (uint8_t)Command::return_);

    append(bytes, ToBytes((uint32_t)codeBytes.size()));
    append(bytes, codeBytes);

    constexpr auto exceptionTableSize = (uint16_t)0;
    constexpr auto attributesTableSize = (uint16_t)0;

    append(bytes, ToBytes(exceptionTableSize));
    append(bytes, ToBytes(attributesTableSize));

    return bytes;
}

Bytes ToBytes(JvmMethod method, ClassFile& classFile)
{
    Bytes bytes;
    append(bytes, ToBytes(static_cast<uint16_t>(method.AccessFlags)));
    append(bytes, ToBytes(method.NameId));
    append(bytes, ToBytes(method.TypeId));
    constexpr auto attributesCount = (uint16_t)1; // The only attribute is Code
    append(bytes, ToBytes(attributesCount));
    append(bytes, ToBytes(classFile.Constants.FindUtf8("Code")));
    const auto codeBytes = ToBytes(method.ActualMethod, classFile);
    auto codeBytesLength = ToBytes((uint32_t)codeBytes.size());
    append(bytes, codeBytesLength);
    append(bytes, codeBytes);
    return bytes;
}

#include <filesystem>
#include <fstream>

void ClassAnalyzer::Generate()
{
    using namespace std::filesystem;

    std::string typeName;
    if (CurrentClass) typeName = std::string{ CurrentClass->ClassName };
    else if (CurrentStruct) typeName = std::string{ CurrentStruct->StructName };
    else return ;

    const auto filename = typeName + ".class";
    auto filepath = current_path() / "Output" / Namespace->NamespaceName / filename;
    create_directory(current_path() / "Output" / Namespace->NamespaceName);

    std::fstream out{ filepath, std::ios_base::out | std::ios_base::binary | std::ios_base::trunc };
    out << (char)0xCA << (char)0xFE << (char)0xBA << (char)0xBE;

    const auto minorVersion = ::ToBytes(ClassFile::MinorVersion);
    out.write((char*)minorVersion.data(), minorVersion.size());
    const auto majorVersion = ::ToBytes(ClassFile::MajorVersion);
    out.write((char*)majorVersion.data(), majorVersion.size());

    auto const classBytes = this->ToBytes();
    auto const constantBytes = ::ToBytes(File.Constants);
    out.write((char*)constantBytes.data(), constantBytes.size());

    out.write((char*)classBytes.data(), classBytes.size());

    const auto classAttributesCount = ::ToBytes((uint16_t)0);
    out.write((char*)classAttributesCount.data(), classAttributesCount.size());
}

Bytes ClassAnalyzer::ToBytes()
{
    Bytes bytes;

    // Определяем имя типа
    std::string typeName;
    AccessFlags accessFlags = AccessFlags::Super;

    if (CurrentClass)
    {
        typeName = CurrentClass->ToDataType().ToTypename();
        accessFlags = accessFlags | AccessFlags::Public;
    }
    else if (CurrentStruct)
    {
        typeName = CurrentStruct->ToDataType().ToTypename();
        accessFlags = AccessFlags::Public | AccessFlags::Final; // Структуры final
        // У структур НЕТ флага Super!
    }
    else
    {
        return bytes; // Пустой результат
    }

    const auto classConstantId = File.Constants.FindClass(typeName);

    // ВАЖНО: Для структур суперкласс должен быть java/lang/Object
    const auto superClassId = File.Constants.FindClass(JAVA_OBJECT_TYPE.ToTypename());

    append(bytes, ::ToBytes((uint16_t)accessFlags));
    append(bytes, ::ToBytes(classConstantId));
    append(bytes, ::ToBytes(superClassId));

    constexpr auto interfacesCount = (uint16_t)0;
    append(bytes, ::ToBytes(interfacesCount));

    append(bytes, ::ToBytes((uint16_t)File.Fields.size()));
    for (auto field : File.Fields) {
        append(bytes, ::ToBytes(field));
    }

    // Сортируем методы: сначала конструкторы
    std::sort(File.Methods.begin(), File.Methods.end(), [](auto const& lhs, auto const& rhs)
    {
        bool lhsIsCtor = lhs.ActualMethod && lhs.ActualMethod->IsConstructor;
        bool rhsIsCtor = rhs.ActualMethod && rhs.ActualMethod->IsConstructor;
        return lhsIsCtor > rhsIsCtor;
    });

    append(bytes, ::ToBytes((uint16_t)File.Methods.size()));
    for (auto method : File.Methods) {
        append(bytes, ::ToBytes(method, File));
    }

    return bytes;
}

 //#include <WinSock2.h>
 //#pragma comment(lib, "Ws2_32.lib")
Bytes ToBytes(const uint32_t n)
{
    union
    {
        uint32_t num;
        unsigned char bytes[sizeof(uint32_t)];
    } u;

    u.num = n;  // Сохраняем значение

    Bytes bytes(sizeof(n), '\0');

    // Копируем байты в обратном порядке (big-endian для JVM)
    for (size_t i = 0; i < sizeof(n); i++) {
        bytes[sizeof(n) - 1 - i] = u.bytes[i];
    }

    return bytes;
}

Bytes ToBytes(const int16_t n)
{
    Bytes bytes;
    const auto otherBytes = ToBytes((int32_t)n);
    bytes.push_back(otherBytes[2]);
    bytes.push_back(otherBytes[3]);
    return bytes;
}

Bytes ToBytes(const uint16_t n)
{
    const auto netNum = n;
    Bytes bytes(sizeof n, '\0');
    for (int i = 0; i < bytes.size(); i++)
        bytes[bytes.size() - 1 - i] = (netNum >> (i * 8));
    return bytes;
}

Bytes ToBytes(const IntT n)
{
    const auto netNum = n;
    Bytes bytes(sizeof n, '\0');
    for (int i = 0; i < bytes.size(); i++)
        bytes[bytes.size() - 1 - i] = (netNum >> (i * 8));
    return bytes;
}

Bytes ToBytes(Constant const& constant)
{
    Bytes bytes;
    append(bytes, static_cast<uint8_t>(constant.Type));
    switch (constant.Type)
    {
        case Constant::TypeT::Utf8:
            append(bytes, ToBytes((uint16_t)constant.Utf8.size()));
            append(bytes, constant.Utf8);
            break;
        case Constant::TypeT::Integer:
            append(bytes, ToBytes(constant.Integer));
            break;
        case Constant::TypeT::Float:
            throw std::runtime_error{ "Float is not supported" };
        case Constant::TypeT::String:
            append(bytes, ToBytes(constant.Utf8Id));
            break;
        case Constant::TypeT::NameAndType:
            append(bytes, ToBytes(constant.NameId));
            append(bytes, ToBytes(constant.TypeId));
            break;
        case Constant::TypeT::Class:
            append(bytes, ToBytes(constant.ClassNameId));
            break;
        case Constant::TypeT::MethodRef:
        case Constant::TypeT::FieldRef:
            append(bytes, ToBytes(constant.ClassId));
            append(bytes, ToBytes(constant.NameAndTypeId));
            break;
        default: ;
    }
    return bytes;
}
