%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Parser.tab.h"

char currentStringLiteral[1024];
int currentStringIndex = 0;
char currentCharacter[10];
int currentCharIndex = 0;

void reset_string(char* str, int* index) {
    str[0] = '\0';
    *index = 0;
}

void append_char(char* str, int* index, char c) {
    if (*index < 1024 - 1) {
        str[(*index)++] = c;
        str[*index] = '\0';
    }
}

void append_string(char* str, int* index, const char* src) {
    int len = strlen(src);
    if (*index + len < 1024 - 1) {
        strcpy(str + *index, src);
        *index += len;
    }
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

"/*"                                    { BEGIN(MULTILINE_COMMENT); }
<MULTILINE_COMMENT>[^*\n]+              { /* ignore */ }
<MULTILINE_COMMENT>\*[^/\n]             { /* ignore */ }
<MULTILINE_COMMENT>\*+\/                { BEGIN(INITIAL); }
<MULTILINE_COMMENT><<EOF>>              { BEGIN(INITIAL); }
                                        
\/\/.*                                  { /* ignore single-line comments */ }

\"                                      {
    reset_string(currentStringLiteral, &currentStringIndex);
    BEGIN(STRING_LITERAL);
}
<STRING_LITERAL>[^\\\"\n]+              { append_string(currentStringLiteral, &currentStringIndex, yytext); }
<STRING_LITERAL>\\x[0-9a-fA-F]{1,4}     {
    int hexValue;
    sscanf(yytext + 2, "%x", &hexValue);
    append_char(currentStringLiteral, &currentStringIndex, (char)hexValue);
}
<STRING_LITERAL>\\n                     { append_char(currentStringLiteral, &currentStringIndex, '\n'); }
<STRING_LITERAL>\\t                     { append_char(currentStringLiteral, &currentStringIndex, '\t'); }
<STRING_LITERAL>\\r                     { append_char(currentStringLiteral, &currentStringIndex, '\r'); }
<STRING_LITERAL>\\\\                    { append_char(currentStringLiteral, &currentStringIndex, '\\'); }
<STRING_LITERAL>\\\"                    { append_char(currentStringLiteral, &currentStringIndex, '\"'); }
<STRING_LITERAL>\"                      {
    yylval.string_value = strdup(currentStringLiteral);
    BEGIN(INITIAL);
    return STRING_LITERAL;
}

\'                                      {
    reset_string(currentCharacter, &currentCharIndex);
    BEGIN(CHARACTER_LITERAL);
}
<CHARACTER_LITERAL>[^\'\\]              { 
    append_string(currentCharacter, &currentCharIndex, yytext);
}
<CHARACTER_LITERAL>\\x[0-9a-fA-F]{1,4}  {
    int hexValue;
    sscanf(yytext + 2, "%x", &hexValue);
    append_char(currentCharacter, &currentCharIndex, (char)hexValue);
}
<CHARACTER_LITERAL>\\n                  { append_char(currentCharacter, &currentCharIndex, '\n'); }
<CHARACTER_LITERAL>\\t                  { append_char(currentCharacter, &currentCharIndex, '\t'); }
<CHARACTER_LITERAL>\\r                  { append_char(currentCharacter, &currentCharIndex, '\r'); }
<CHARACTER_LITERAL>\\\\                 { append_char(currentCharacter, &currentCharIndex, '\\'); }
<CHARACTER_LITERAL>\\\'                 { append_char(currentCharacter, &currentCharIndex, '\''); }
<CHARACTER_LITERAL>\'                   {
    if (strlen(currentCharacter) == 1) {
        yylval.char_value = currentCharacter[0];
        BEGIN(INITIAL);
        return CHAR_LITERAL;
    }
    BEGIN(INITIAL);
}

Console\.WriteLine                      { return CONSOLE_WRITELINE; }
Console\.Write                          { return CONSOLE_WRITE; }
Console\.ReadLine                       { return CONSOLE_READLINE; }
Console\.Read                           { return CONSOLE_READ; }

int                                     { return INT_TYPE; }
float                                   { return FLOAT_TYPE; }
double                                  { return DOUBLE_TYPE; }
bool                                    { return BOOL_TYPE; }
char                                    { return CHAR_TYPE; }
string                                  { return STRING_TYPE; }
void                                    { return VOID; }
var                                     { return VAR; }
decimal                                 { return DECIMAL_TYPE; }
protected                               { return PROTECTED; }
internal                                { return INTERNAL; }
virtual                                 { return VIRTUAL; }
override                                { return OVERRIDE; }
abstract                                { return ABSTRACT; }
sealed                                  { return SEALED; }
base                                    { return BASE; }

get                                     { return GET; }
set                                     { return SET; }

in                                      { return IN; }

class                                   { return CLASS; }
struct                                  { return STRUCT; }
interface                               { return INTERFACE; }
enum                                    { return ENUM; }
public                                  { return PUBLIC; }
private                                 { return PRIVATE; }
static                                  { return STATIC; }
new                                     { return NEW; }
this                                    { return THIS; }
namespace                               { return NAMESPACE; }
using                                   { return USING; }

if                                      { return IF; }
else                                    { return ELSE; }
while                                   { return WHILE; }
for                                     { return FOR; }
foreach                                 { return FOREACH; }
do                                      { return DO; }
switch                                  { return SWITCH; }
case                                    { return CASE; }
default                                 { return DEFAULT; }
return                                  { return RETURN; }
break                                   { return BREAK; }
continue                                { return CONTINUE; }
goto                                    { return GOTO; }

true                                    { 
    yylval.bool_value = 1;
    return BOOL_LITERAL_TRUE; 
}
false                                   { 
    yylval.bool_value = 0;
    return BOOL_LITERAL_FALSE; 
}

null                                    { return NULL_LITERAL; }


{DIGIT}+             { 
    yylval.int_value = atoi(yytext);
    return INTEGER_LITERAL;
}

{DIGIT}+\.{DIGIT}*   {
    yylval.double_value = atof(yytext);
    return DOUBLE_LITERAL;
}

{DIGIT}+\.{DIGIT}*[fF] {
    char* endptr;
    yylval.float_value = strtof(yytext, &endptr);
    return FLOAT_LITERAL;
}

{ID}                 { 
    yylval.string_value = strdup(yytext);
    return IDENTIFIER; 
}

"+"                  { return '+'; }
"-"                  { return '-'; }
"++"                 { return INCREMENT; }
"--"                 { return DECREMENT; }
"*"                  { return '*'; }
"/"                  { return '/'; }
"%="                 { return MOD_ASSIGNMENT; }
"%"                  { return '%'; }
"="                  { return '='; }
"=="                 { return EQUAL; }
"!="                 { return NOT_EQUAL; }
"<"                  { return '<'; }
">"                  { return '>'; }
"<="                 { return LESS_EQUAL; }
">="                 { return GREATER_EQUAL; }
"&&"                 { return AND; }
"||"                 { return OR; }
"!"                  { return '!'; }
"&"                  { return '&'; }
"|"                  { return '|'; }
"~"                  { return '~'; }
"?"                  { return '?'; }
"??"                 { return NULL_COALESCING; }
"::"                 { return NAMESPACE_ACCESS; }

"+="                 { return PLUS_ASSIGNMENT; }
"-="                 { return MINUS_ASSIGNMENT; }
"*="                 { return MUL_ASSIGNMENT; }
"/="                 { return DIV_ASSIGNMENT; }
"|="                 { return OR_ASSIGNMENT; }

"["                  { return '['; }
"]"                  { return ']'; }
","                  { return ','; }
"."                  { return '.'; }
";"                  { return ';'; }
":"                  { return ':'; }
"("                  { return '('; }
")"                  { return ')'; }
"{"                  { return '{'; }
"}"                  { return '}'; }

[ \t\r\n]+           {  }

.                    { return yytext[0]; }

%%