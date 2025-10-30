%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "myParserPrintf.tab.h"  

#define MAX_STRING_LENGTH 1024
#define MAX_COMMENT_LENGTH 4096

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

void reset_string(char* str, int* index) {
    str[0] = '\0';
    *index = 0;
}

void append_char(char* str, int* index, char c) {
    if (*index < MAX_STRING_LENGTH - 1) {
        str[(*index)++] = c;
        str[*index] = '\0';
    }
}

void append_string(char* str, int* index, const char* src) {
    int len = strlen(src);
    if (*index + len < MAX_STRING_LENGTH - 1) {
        strcpy(str + *index, src);
        *index += len;
    }
}

void process_numeric_literal(const char* type, const char* text) {
    char cleaned[256];
    int j = 0;
    int i;  // Объявляем переменную вне цикла

    for (i = 0; text[i] != '\0' && j < 255; i++) {
        if (text[i] != '_') {
            cleaned[j++] = text[i];
        }
    }
    cleaned[j] = '\0';
    
    char* endptr;
    long int_value = strtol(cleaned, &endptr, 10);
    printf("%s: %s -> %ld\n", type, text, int_value);
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
%{
char currentStringLiteral[MAX_STRING_LENGTH];
char currentComment[MAX_COMMENT_LENGTH];
char currentCharacter[10];
int currentInteger;
double currentFloatingPoint;
char buffer[10];
int currentStringIndex = 0;
int currentCommentIndex = 0;
int currentCharIndex = 0;
%}

"char"                 { return CHAR_KW; }
"int"                  { return INT_KW; }
"var"                  { return VAR_KW; }
"void"                 { return VOID_KW; }                              
								
"public"               { return PUBLIC; }
"protected"            { return PROTECTED; }
"private"              { return PRIVATE; }
"internal"             { return INTERNAL; }

"struct"               { return STRUCT; }
"class"                { return CLASS_KW; }
"static"               { return STATIC; }
"enum"                 { return ENUM; }

"new"                  { return NEW_KW; }
"this"                 { return THIS_KW; }
"base"                 { return BASE_KW; }

"float"                { return FLOAT_KW; }
"double"               { return DOUBLE_KW; }
"decimal"              { return DECIMAL_KW; }
"bool"                 { return BOOL_KW; }
"true"                 { return TRUE_KW; }
"false"                { return FALSE_KW; }
"null"                 { return NULL_KW; }

"&&"                 { return AND; }
"||"                 { return OR; }
"!"                  { return '!'; }
"&"                  { return BITWISE_AND; }
"|"                  { return BITWISE_OR; }
"~"                  { return TILDE; }

"["                  { return '['; }
"]"                  { return ']'; }
","                  { return ','; }

{DIGIT}+\.{DIGIT}*({FSUFFIX}|{DSUFFIX}|{MSUFFIX})? {
    yylval._floatingPoint = atof(yytext);
    return FLOATING_POINT;
}

{DIGIT}+{FSUFFIX}    {
    yylval._floatValue = atof(yytext);
    return FLOAT_LITERAL;
}

{DIGIT}+{DSUFFIX}    { 
    yylval._floatingPoint = atof(yytext);
    return FLOATING_POINT;
}

{DIGIT}+{MSUFFIX}    { 
    yylval._floatingPoint = atof(yytext);
    return DECIMAL_LITERAL;
}

{DIGIT}({DIGIT}|_)*{DIGIT}             { 
    yylval._integer = atoi(yytext);
    return INTEGER;
}

"++"      { return INCREMENT; }
"+"       { return '+'; }
"--"      { return DECREMENT; }
"-"       { return '-'; }
"*"       { return '*'; }
"/"       { return '/'; }
"%"       { return '%'; }

"=="      { return EQUAL; }
"!="      { return NOT_EQUAL; }
"<"       { return '<'; }
">"       { return '>'; }
"<="      { return LESS_OR_EQUAL; }
">="      { return GREATER_OR_EQUAL; }

"="       { return '='; }
"+="      { return PLUS_ASSIGN; }
"-="      { return MINUS_ASSIGN; }
"*="      { return MULTIPLY_ASSIGN; }
"/="      { return DIVISION_ASSIGN; }
"%="      { return '%'; }  
"|="      { return '|'; }  

"."       { return '.'; }
";"       { return ';'; }
":"       { return ':'; }
"?"       { return '?'; }
"??"      { return '?'; }  
"::"      { return ':'; }  
"("       { return '('; }
")"       { return ')'; }
"{"       { return '{'; }
"}"       { return '}'; }

{ID}      { 
    yylval._identifier = strdup(yytext);
    return IDENTIFIER; 
}

[ \t\r\n]+    ;  

.         { return yytext[0]; }  

%%

int main() {
    printf("=== C# Lexer Started ===\n");
    yylex();
    printf("=== C# Lexer Finished ===\n");
    return 0;
}