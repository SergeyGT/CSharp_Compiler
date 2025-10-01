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
foreach   { printf("KEYWORD: foreach\n"); }
while     { printf("KEYWORD: while\n"); }
do        { printf("KEYWORD: do\n"); }
continue  { printf("KEYWORD: continue\n"); }
if        { printf("KEYWORD: if\n"); }
else      { printf("KEYWORD: else\n"); }
switch    { printf("KEYWORD: switch\n"); }
case      { printf("KEYWORD: case\n"); }
default   { printf("KEYWORD: default\n"); }
break     { printf("KEYWORD: break\n"); }
return    { printf("KEYWORD: return\n"); }
goto      { printf("KEYWORD: goto\n"); }

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

Console\.WriteLine    { printf("CONSOLE_METHOD: Console.WriteLine\n"); }
Console\.Write       { printf("CONSOLE_METHOD: Console.Write\n"); }
Console\.ReadLine    { printf("CONSOLE_METHOD: Console.ReadLine\n"); }
Console\.Read        { printf("CONSOLE_METHOD: Console.Read\n"); }

"["       { printf("LBRACKET: [\n"); }
"]"       { printf("RBRACKET: ]\n"); }
","       { printf("COMMA: ,\n"); }

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

"."       { printf("DOT: .\n"); }
";"       { printf("SEMICOLON: ;\n"); }
":"       { printf("COLON: :\n"); }
"?"       { printf("OPERATOR: ?\n"); }
"??"      { printf("OPERATOR: ??\n"); }
"::"      { printf("OPERATOR: ::\n"); }
"("       { printf("LPAREN: (\n"); }
")"       { printf("RPAREN: )\n"); }
"{"       { printf("LBRACE: {\n"); }
"}"       { printf("RBRACE: }\n"); }

{ID}      { printf("IDENTIFIER: %s\n", yytext); }

[ \t\r\n]+    ;

.         { printf("Unknown character: %s\n", yytext); }

%%

int main() {
    yylex();
    return 0;
}