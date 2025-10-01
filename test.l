%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
%}

%option noyywrap
%option never-interactive

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
FSUFFIX  [fF]
DSUFFIX  [dD]
MSUFFIX  [mM]

%%

public                 { printf("ACCESS_MODIFIER: %s\n", yytext); }
protected              { printf("ACCESS_MODIFIER: %s\n", yytext); }
private                { printf("ACCESS_MODIFIER: %s\n", yytext); }
internal               { printf("ACCESS_MODIFIER: %s\n", yytext); }
"protected internal"   { printf("ACCESS_MODIFIER: %s\n", yytext); }
"internal protected"   { printf("ACCESS_MODIFIER: %s\n", yytext); }

struct               { printf("KEYWORD: %s\n", yytext); }
class                { printf("KEYWORD: %s\n", yytext); }
static               { printf("KEYWORD: %s\n", yytext); }
enum                 { printf("KEYWORD: %s\n", yytext); }
interface            { printf("KEYWORD: %s\n", yytext); }
abstract             { printf("KEYWORD: %s\n", yytext); }
sealed               { printf("KEYWORD: %s\n", yytext); }
virtual              { printf("KEYWORD: %s\n", yytext); }
override             { printf("KEYWORD: %s\n", yytext); }
new                  { printf("KEYWORD: %s\n", yytext); }
this                 { printf("KEYWORD: %s\n", yytext); }
base                 { printf("KEYWORD: %s\n", yytext); }
for       			 { printf("KEYWORD: for\n"); }
foreach   { printf("KEYWORD: %s\n", yytext); }
while     { printf("KEYWORD: %s\n", yytext); }
do        { printf("KEYWORD: %s\n", yytext); }
continue  { printf("KEYWORD: %s\n", yytext); }
if        { printf("KEYWORD: %s\n", yytext); }
else      { printf("KEYWORD: %s\n", yytext); }
switch    { printf("KEYWORD: %s\n", yytext); }
case      { printf("KEYWORD: %s\n", yytext); }
default   { printf("KEYWORD: %s\n", yytext); }
break     { printf("KEYWORD: %s\n", yytext); }
return    { printf("KEYWORD: %s\n", yytext); }
goto      { printf("KEYWORD: %s\n", yytext); }

float     { printf("FLOAT_KEYWORD: %s\n", yytext); }
double    { printf("DOUBLE_KEYWORD: %s\n", yytext); }
decimal   { printf("DECIMAL_KEYWORD: %s\n", yytext); }
bool      { printf("BOOL_KEYWORD: %s\n", yytext); }
true      { printf("BOOL_LITERAL: true\n"); }
false     { printf("BOOL_LITERAL: false\n"); }

"&&"      { printf("Operator: %s\n", yytext); }
"||"      { printf("Operator: %s\n", yytext); }
"!"       { printf("Operator: %s\n", yytext); }
"&"       { printf("Operator: %s\n", yytext); }
"|"       { printf("Operator: %s\n", yytext); }
"~"       { printf("Operator: %s\n", yytext); }

Console\.WriteLine    { printf("CONSOLE_METHOD: %s\n", yytext); }
Console\.Write       { printf("CONSOLE_METHOD:%s\n", yytext); }
Console\.ReadLine    { printf("CONSOLE_METHOD: %s\n", yytext); }
Console\.Read        { printf("CONSOLE_METHOD: %s\n", yytext); }

"["       { printf("LBRACKET: %s\n", yytext); }
"]"       { printf("RBRACKET: %s\n", yytext); }
","       { printf("COMMA: %s\n", yytext); }

{DIGIT}+\.{DIGIT}*({FSUFFIX}|{DSUFFIX}|{MSUFFIX})? {
    char* endptr;
    char* input_text = strdup(yytext);
    int length = strlen(input_text);
    char last_char = input_text[length - 1];

    if (last_char == 'f' || last_char == 'F'){
        input_text[length - 1] = '\0';
        printf("FLOAT_LITERAL: %s -> %g\n", yytext, strtof(input_text, &endptr));
    } else if (last_char == 'm' || last_char == 'M'){
        input_text[length - 1] = '\0';
        printf("DECIMAL_LITERAL: %s -> %.15g\n", yytext, strtod(input_text, &endptr));
    } else if (last_char == 'd' || last_char == 'D'){
        input_text[length - 1] = '\0';
        printf("DOUBLE_LITERAL: %s -> %g\n", yytext, strtod(input_text, &endptr));
    } else{
        printf("DOUBLE_LITERAL: %s -> %g\n", yytext, strtod(input_text, &endptr));
    }
    free(input_text);
}

{DIGIT}+{FSUFFIX}    {
       char* endptr;
       char* input_text = strdup(yytext);
       input_text[strlen(input_text) - 1] = '\0';
       printf("FLOAT_LITERAL: %s -> %g\n", yytext, strtof(input_text, &endptr));
       free(input_text); 
     }

{DIGIT}+{DSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    printf("DOUBLE_LITERAL: %s -> %g\n", yytext, strtod(input_text, &endptr));
    free(input_text);
    }

{DIGIT}+{MSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    printf("DECIMAL_LITERAL: %s -> %.15g\n", yytext, strtod(input_text, &endptr));
    free(input_text);
    }

"+"       { printf("Operator: %s\n", yytext); }
"-"       { printf("Operator: %s\n", yytext); }
"*"       { printf("Operator: %s\n", yytext); }
"/"       { printf("Operator: %s\n", yytext); }
"%"       { printf("Operator: %s\n", yytext); }
"=="      { printf("Operator: %s\n", yytext); }
"!="      { printf("Operator: %s\n", yytext); }
"<"       { printf("Operator: %s\n", yytext); }
">"       { printf("Operator: %s\n", yytext); }
"<="      { printf("Operator: %s\n", yytext); }
">="      { printf("Operator: %s\n", yytext); }
"="       { printf("Operator: %s\n", yytext); }
"+="      { printf("Operator: %s\n", yytext); }
"-="      { printf("Operator: %s\n", yytext); }
"*="      { printf("Operator: %s\n", yytext); }
"/="      { printf("Operator: %s\n", yytext); }
"%="      { printf("Operator: %s\n", yytext); }
"|="      { printf("Operator: %s\n", yytext); }

"."       { printf("DOT: %s\n", yytext); }
";"       { printf("SEMICOLON: %s\n", yytext); }
":"       { printf("COLON: %s\n", yytext); }
"?"       { printf("OPERATOR: %s\n", yytext); }
"??"      { printf("OPERATOR: %s\n", yytext); }
"::"      { printf("OPERATOR: %s\n", yytext); }
"("       { printf("LPAREN: %s\n", yytext); }
")"       { printf("RPAREN: %s\n", yytext); }
"{"       { printf("LBRACE: %s\n", yytext); }
"}"       { printf("RBRACE: %s\n", yytext); }


\"(\\.|[^"\\])*\"     { printf("STRING_LITERAL: %s\n", yytext); }
\'(\\.|[^'\\])?\'     { printf("CHAR_LITERAL: %s\n", yytext); }

{ID}      { printf("IDENTIFIER: %s\n", yytext); }

[ \t\r\n]+    ;

.         { printf("Unknown character: %s\n", yytext); }

%%

int main() {
    yylex();
    return 0;
}