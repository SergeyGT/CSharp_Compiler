%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
FSUFFIX  [fF]
DSUFFIX  [dD]
MSUFFIX  [mM]

%%

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

for                  { print_token_simple("KEYWORD_FOR"); }
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