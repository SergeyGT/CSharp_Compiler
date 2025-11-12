%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myParserPrintf.tab.h"

void yyerror(const char* s);
%}

%option noyywrap

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
WS       [ \t\n\r]

%%

{WS}+    { /* skip whitespace */ }

"public"    { return PUBLIC; }
"protected" { return PROTECTED; }
"private"   { return PRIVATE; }
"internal"  { return INTERNAL; }
"static"    { return STATIC; }
"struct"    { return STRUCT; }
"enum"      { return ENUM; }
"bool"      { return BOOL_KW; }
"float"     { return FLOAT_KW; }
"double"    { return DOUBLE_KW; }
"decimal"   { return DECIMAL_KW; }
"true"      { return TRUE_KW; }
"false"     { return FALSE_KW; }
"null"      { return NULL_KW; }

{ID}        { yylval._identifier = strdup(yytext); return IDENTIFIER; }
{DIGIT}+    { yylval._integer = atoi(yytext); return INTEGER; }

{DIGIT}+\.{DIGIT}*([eE][-+]?{DIGIT}+)?   { yylval._floatingPoint = atof(yytext); return FLOATING_POINT; }
{DIGIT}+\.{DIGIT}*[fF]                    { yylval._floatValue = atof(yytext); return FLOAT_LITERAL; }
{DIGIT}+\.{DIGIT}*[mM]                    { yylval._floatingPoint = atof(yytext); return DECIMAL_LITERAL; }

\"([^"\\]|\\.)*\"   { 
    //yylval._string = strdup(yytext); 
    return STRING; 
}

'([^'\\]|\\.)'   { 
    yylval._character = yytext[1]; 
    return CHARACTER; 
}

"~"         { return TILDE; }

"=="        { return EQUAL; }
"!="        { return NOT_EQUAL; }
"<="        { return LESS_OR_EQUAL; }
">="        { return GREATER_OR_EQUAL; }
"&&"        { return AND; }
"||"        { return OR; }
"&"         { return BITWISE_AND; }
"|"         { return BITWISE_OR; }

"+="        { return PLUS_ASSIGN; }
"-="        { return MINUS_ASSIGN; }
"*="        { return MULTIPLY_ASSIGN; }
"/="        { return DIVISION_ASSIGN; }
"++"        { return INCREMENT; }
"--"        { return DECREMENT; }

"+"         { return '+'; }
"-"         { return '-'; }
"*"         { return '*'; }
"/"         { return '/'; }
"="         { return '='; }
"<"         { return '<'; }
">"         { return '>'; }
"!"         { return '!'; }
"."         { return '.'; }
","         { return ','; }
";"         { return ';'; }
"("         { return '('; }
")"         { return ')'; }
"{"         { return '{'; }
"}"         { return '}'; }
"["         { return '['; }
"]"         { return ']'; }

.           { printf("Unknown character: %s\n", yytext); }

%%