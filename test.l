%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
using namespace std;


std::string currentStringLiteral;
std::string currentComment;
int currentInteger;
std::string currentCharacter;
double currentFloatingPoint;
char buffer[10];

void print_token(const char* type, const char* value) {
    printf("%s: %s\n", type, value);
}

void print_token_simple(const char* type) {
    printf("%s\n", type);
}

void print_literal(const char* type, const char* text, double value) {
    printf("%s: %s -> %g\n", type, text, value);
}

void print_decimal_literal(const char* type, const char* text, double value) {
    printf("%s: %s -> %.15g\n", type, text, value);
}

%}

%option noyywrap
%option never-interactive
%option yylineno

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
FSUFFIX  [fF]
DSUFFIX  [dD]
MSUFFIX  [mM]


%x MULTILINE_COMMENT
%x STRING_LITERAL
%x VERBATIM_STRING_LITERAL
%x CHARACTER_LITERAL

%%


"/*"                                    {
                                            currentComment.clear();
                                            BEGIN(MULTILINE_COMMENT);
                                        }

<MULTILINE_COMMENT>[^*\n]*              {
                                            currentComment += yytext;
                                        }

<MULTILINE_COMMENT>\*+[^*/\n]*          {
                                            currentComment += yytext;
                                        }

<MULTILINE_COMMENT>\n                   {
                                            currentComment += yytext;
                                        }

<MULTILINE_COMMENT>\*+\/                {
                                            printf("MULTILINE_COMMENT: %s\n", currentComment.c_str());
                                            BEGIN(INITIAL);
                                        }

<MULTILINE_COMMENT><<EOF>>              {
                                            printf("Error! Expected end of multiline comment but found end of file! Line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }
                                        
\/\/.*                                  { printf("Found single-line comment: %s\n", yytext);}

\"                                      {
                                            currentStringLiteral.clear();
                                            BEGIN(STRING_LITERAL);
                                        }

<STRING_LITERAL>[^\\\"\\\n]+            {
                                            currentStringLiteral += yytext;
                                        }
<STRING_LITERAL>\\x[0-9a-fA-F]{1,4}     {
                                            std::fill(std::begin(buffer), std::end(buffer), 0);
                                            std::copy(yytext, yytext + yyleng, buffer);
                                            std::sscanf(buffer + 2, "%x", &currentInteger);
                                            currentStringLiteral = static_cast<char>(currentInteger);
                                        }
<STRING_LITERAL>\\n                     {
                                            currentStringLiteral += "\n";
                                        }
<STRING_LITERAL>\\t                     {
                                            currentStringLiteral += "\t";
                                        }
<STRING_LITERAL>\\a                     {
                                            currentStringLiteral += "\a";
                                        }
<STRING_LITERAL>\\b                     {
                                            currentStringLiteral += "\b";
                                        }
<STRING_LITERAL>\\f                     {
                                            currentStringLiteral += "\f";
                                        }
<STRING_LITERAL>\n                      {
                                            printf("Error! Expected end of multiline comment but found end of file! Line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }
<STRING_LITERAL><<EOF>>                 {
                                            printf("Error! Expected end of multiline comment but found end of file! Line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }
<STRING_LITERAL>\\r                     {
                                            currentStringLiteral += "\r";
                                        }
<STRING_LITERAL>\\v                     {
                                            currentStringLiteral += "\v";
                                        }
<STRING_LITERAL>\\?                     {
                                            currentStringLiteral += "\?";
                                        }
<STRING_LITERAL>\\0                     {
                                            currentStringLiteral += "\0";
                                        }
<STRING_LITERAL>\\\\                    {
                                            currentStringLiteral += "\\";
                                        }
<STRING_LITERAL>\\\"                    {
                                            currentStringLiteral += "\"";
                                        }
<STRING_LITERAL>\\\'                    {
                                            currentStringLiteral += "\'";
                                        }
<STRING_LITERAL>\"                      {
                                            printf("%s\n", currentStringLiteral.c_str());
                                            BEGIN(INITIAL);
                                        }
@\"                                     {
                                            currentStringLiteral.clear();
                                            BEGIN(VERBATIM_STRING_LITERAL);
                                        }
<VERBATIM_STRING_LITERAL>\"\"           {
                                            currentStringLiteral += "\"";
                                        }
<VERBATIM_STRING_LITERAL>[^"\n]+        {
                                            currentStringLiteral += yytext;
                                        }
<VERBATIM_STRING_LITERAL>\n             {
                                            currentStringLiteral += "\n";
                                        }
<VERBATIM_STRING_LITERAL>\"             {
                                            printf("%s\n", currentStringLiteral.c_str());
                                            BEGIN(INITIAL);
                                        }
<VERBATIM_STRING_LITERAL><<EOF>>        {
                                            printf("Error! Expected end of multiline comment but found end of file! Line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }
\'                                      {
                                            currentCharacter.clear();
                                            BEGIN(CHARACTER_LITERAL);
                                        }

<CHARACTER_LITERAL>\'                   {
                                            if (currentCharacter.size() == 0) 
                                            {
                                                printf("Error! Found empty character literal\n");
                                            }
                                            else if (currentCharacter.size() > 1)
                                            {
                                                printf("Error! Character literal is not allowed to have more then one character\n");
                                            }
                                            else 
                                            {
                                                printf("%c\n", currentCharacter[0]);
                                            }
                                            BEGIN(INITIAL);
                                        }
<CHARACTER_LITERAL>[^\'\\]+             {
                                                currentCharacter += yytext;                                                    
                                        }
<CHARACTER_LITERAL>\\x[0-9a-fA-F]{1,4}  {
                                            std::fill(std::begin(buffer), std::end(buffer), 0);
                                            std::copy(yytext + 2, yytext + yyleng, buffer);
                                            std::sscanf(buffer, "%x", &currentInteger);
                                            currentCharacter += static_cast<char>(currentInteger);
                                        }
<CHARACTER_LITERAL>\\n                  {
                                            currentCharacter += '\n';
                                        }
<CHARACTER_LITERAL>\\t                  {
                                            currentCharacter += '\t';
                                        }
<CHARACTER_LITERAL>\\a                  {
                                            currentCharacter += '\a';
                                        }
<CHARACTER_LITERAL>\\b                  {
                                            currentCharacter += '\b';
                                        }
<CHARACTER_LITERAL>\\f                  {
                                            currentCharacter += '\f';
                                        }
<CHARACTER_LITERAL>\\r                  {
                                            currentCharacter += '\r';
                                        }
<CHARACTER_LITERAL>\\v                  {
                                            currentCharacter += '\v';
                                        }
<CHARACTER_LITERAL>\\?                  {
                                            currentCharacter += '\?';
                                        }
<CHARACTER_LITERAL>\\0                  {
                                            currentCharacter += '\0';
                                        }
<CHARACTER_LITERAL>\\\\                 {
                                            currentCharacter += '\\';
                                        }
<CHARACTER_LITERAL>\\\"                 {      
                                            currentCharacter += '\"';
                                        }
<CHARACTER_LITERAL>\\\'                 {
                                            currentCharacter += '\'';
                                        }




char                                    { printf("TYPE: %s\n", yytext); }
int                                     { printf("TYPE: %s\n", yytext); }
var                                     { printf("TYPE: %s\n", yytext); }
void                                    { printf("TYPE: %s\n", yytext); }
string                                  { printf("TYPE: %s\n", yytext); }


out                                     { printf("PARAMETER_MODIFIER: %s\n", yytext); }
ref                                     { printf("PARAMETER_MODIFIER: %s\n", yytext); }


namespace                               { printf("KEYWORD: %s\n", yytext); }
using                                   { printf("KEYWORD: %s\n", yytext); }


public                 { print_token("ACCESS_MODIFIER", yytext); }
protected              { print_token("ACCESS_MODIFIER", yytext); }
private                { print_token("ACCESS_MODIFIER", yytext); }
internal               { print_token("ACCESS_MODIFIER", yytext); }
"protected internal"   { print_token("ACCESS_MODIFIER", yytext); }
"internal protected"   { print_token("ACCESS_MODIFIER", yytext); }

struct               { print_token("KEYWORD", yytext); }
class                { print_token("KEYWORD", yytext); }
static               { print_token("KEYWORD", yytext); }
enum                 { print_token("KEYWORD", yytext); }
interface            { print_token("KEYWORD", yytext); }
abstract             { print_token("KEYWORD", yytext); }
sealed               { print_token("KEYWORD", yytext); }
virtual              { print_token("KEYWORD", yytext); }
override             { print_token("KEYWORD", yytext); }
new                  { print_token("KEYWORD", yytext); }
this                 { print_token("KEYWORD", yytext); }
base                 { print_token("KEYWORD", yytext); }

for                  { print_token("KEYWORD", yytext); }
foreach              { print_token("KEYWORD", yytext); }
while                { print_token("KEYWORD", yytext); }
do                   { print_token("KEYWORD", yytext); }
continue             { print_token("KEYWORD", yytext); }
if                   { print_token("KEYWORD", yytext); }
else                 { print_token("KEYWORD", yytext); }
switch               { print_token("KEYWORD", yytext); }
case                 { print_token("KEYWORD", yytext); }
default              { print_token("KEYWORD", yytext); }
break                { print_token("KEYWORD", yytext); }
return               { print_token("KEYWORD", yytext); }
goto                 { print_token("KEYWORD", yytext); }

float                { print_token("FLOAT_KEYWORD", yytext); }
double               { print_token("DOUBLE_KEYWORD", yytext); }
decimal              { print_token("DECIMAL_KEYWORD", yytext); }
bool                 { print_token("BOOL_KEYWORD", yytext); }
true                 { print_token_simple("BOOL_LITERAL_TRUE"); }
false                { print_token_simple("BOOL_LITERAL_FALSE"); }

"&&"                 { print_token("OPERATOR", yytext); }
"||"                 { print_token("OPERATOR", yytext); }
"!"                  { print_token("OPERATOR", yytext); }
"&"                  { print_token("OPERATOR", yytext); }
"|"                  { print_token("OPERATOR", yytext); }
"~"                  { print_token("OPERATOR", yytext); }

Console\.WriteLine   { print_token("CONSOLE_METHOD", yytext); }
Console\.Write       { print_token("CONSOLE_METHOD", yytext); }
Console\.ReadLine    { print_token("CONSOLE_METHOD", yytext); }
Console\.Read        { print_token("CONSOLE_METHOD", yytext); }

"["                  { print_token("LBRACKET", yytext); }
"]"                  { print_token("RBRACKET", yytext); }
","                  { print_token("COMMA", yytext); }

{DIGIT}+\.{DIGIT}*({FSUFFIX}|{DSUFFIX}|{MSUFFIX})? {
    char* endptr;
    char* input_text = strdup(yytext);
    int length = strlen(input_text);
    char last_char = input_text[length - 1];

    if (last_char == 'f' || last_char == 'F'){
        input_text[length - 1] = '\0';
        print_literal("FLOAT_LITERAL", yytext, strtof(input_text, &endptr));
    } else if (last_char == 'm' || last_char == 'M'){
        input_text[length - 1] = '\0';
        print_decimal_literal("DECIMAL_LITERAL", yytext, strtod(input_text, &endptr));
    } else if (last_char == 'd' || last_char == 'D'){
        input_text[length - 1] = '\0';
        print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
    } else{
        print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
    }
    free(input_text);
}

{DIGIT}+{FSUFFIX}    {
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_literal("FLOAT_LITERAL", yytext, strtof(input_text, &endptr));
    free(input_text); 
}

{DIGIT}+{DSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
    free(input_text);
}

{DIGIT}+{MSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_decimal_literal("DECIMAL_LITERAL", yytext, strtod(input_text, &endptr));
    free(input_text);
}

"+"       { print_token("OPERATOR", yytext); }
"-"       { print_token("OPERATOR", yytext); }
"*"       { print_token("OPERATOR", yytext); }
"/"       { print_token("OPERATOR", yytext); }
"%"       { print_token("OPERATOR", yytext); }

"=="      { print_token("OPERATOR", yytext); }
"!="      { print_token("OPERATOR", yytext); }
"<"       { print_token("OPERATOR", yytext); }
">"       { print_token("OPERATOR", yytext); }
"<="      { print_token("OPERATOR", yytext); }
">="      { print_token("OPERATOR", yytext); }

"="       { print_token("OPERATOR", yytext); }
"+="      { print_token("OPERATOR", yytext); }
"-="      { print_token("OPERATOR", yytext); }
"*="      { print_token("OPERATOR", yytext); }
"/="      { print_token("OPERATOR", yytext); }
"%="      { print_token("OPERATOR", yytext); }
"|="      { print_token("OPERATOR", yytext); }

"."       { print_token("DOT", yytext); }
";"       { print_token("SEMICOLON", yytext); }
":"       { print_token("COLON", yytext); }
"?"       { print_token("OPERATOR", yytext); }
"??"      { print_token("OPERATOR", yytext); }
"::"      { print_token("OPERATOR", yytext); }
"("       { print_token("LPAREN", yytext); }
")"       { print_token("RPAREN", yytext); }
"{"       { print_token("LBRACE", yytext); }
"}"       { print_token("RBRACE", yytext); }

\"(\\.|[^"\\])*\"     { print_token("STRING_LITERAL", yytext); }
\'(\\.|[^'\\])?\'     { print_token("CHAR_LITERAL", yytext); }

{ID}      { print_token("IDENTIFIER", yytext); }

[ \t\r\n]+    ;

.         { print_token("UNKNOWN_CHAR", yytext); }

%%

int main() {
    printf("=== C# Lexer Started ===\n");
    yylex();
    printf("=== C# Lexer Finished ===\n");
    return 0;
}