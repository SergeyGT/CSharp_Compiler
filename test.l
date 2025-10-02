%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_STRING_LENGTH 1024
#define MAX_COMMENT_LENGTH 4096

char currentStringLiteral[MAX_STRING_LENGTH];
char currentComment[MAX_COMMENT_LENGTH];
char currentCharacter[10];
int currentInteger;
double currentFloatingPoint;
char buffer[10];
int currentStringIndex = 0;
int currentCommentIndex = 0;
int currentCharIndex = 0;

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
                                            reset_string(currentComment, &currentCommentIndex);
                                            BEGIN(MULTILINE_COMMENT);
                                        }

<MULTILINE_COMMENT>[^*\n]+              { append_string(currentComment, &currentCommentIndex, yytext);}

<MULTILINE_COMMENT>\*+[^*/\n]*          { append_string(currentComment, &currentCommentIndex, yytext);}

<MULTILINE_COMMENT>\n                   { append_string(currentComment, &currentCommentIndex, yytext);}

<MULTILINE_COMMENT>\*+\/                {
                                            printf("MULTILINE_COMMENT: %s\n", currentComment);
                                            BEGIN(INITIAL);
                                        }

<MULTILINE_COMMENT><<EOF>>              {
                                            printf("Error! Expected end of multiline comment but found end of file! Line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }
                                        
\/\/.*                                  { printf("Found single-line comment: %s\n", yytext);}

\"                                      {
                                            reset_string(currentStringLiteral, &currentStringIndex);
                                            BEGIN(STRING_LITERAL);
                                        }

<STRING_LITERAL>[^\\\"\n]+              { append_string(currentStringLiteral, &currentStringIndex, yytext);}

<STRING_LITERAL>\\x[0-9a-fA-F]{1,4}     {
                                            memset(buffer, 0, sizeof(buffer));
                                            strncpy(buffer, yytext, yyleng);
                                            sscanf(buffer + 2, "%x", &currentInteger);
                                            append_char(currentStringLiteral, &currentStringIndex, (char)currentInteger);
                                        }

<STRING_LITERAL>\\n                     { append_char(currentStringLiteral, &currentStringIndex, '\n');}

<STRING_LITERAL>\\t                     { append_char(currentStringLiteral, &currentStringIndex, '\t');}

<STRING_LITERAL>\\a                     { append_char(currentStringLiteral, &currentStringIndex, '\a');}

<STRING_LITERAL>\\b                     { append_char(currentStringLiteral, &currentStringIndex, '\b');}

<STRING_LITERAL>\\f                     { append_char(currentStringLiteral, &currentStringIndex, '\f');}

<STRING_LITERAL>\n                      {
                                            printf("Error! Unterminated string literal at line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }

<STRING_LITERAL><<EOF>>                 {
                                            printf("Error! Unterminated string literal at line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }

<STRING_LITERAL>\\r                     { append_char(currentStringLiteral, &currentStringIndex, '\r');}

<STRING_LITERAL>\\v                     { append_char(currentStringLiteral, &currentStringIndex, '\v');}

<STRING_LITERAL>\\?                     { append_char(currentStringLiteral, &currentStringIndex, '\?');}

<STRING_LITERAL>\\0                     { append_char(currentStringLiteral, &currentStringIndex, '\0');}

<STRING_LITERAL>\\\\                    { append_char(currentStringLiteral, &currentStringIndex, '\\');}

<STRING_LITERAL>\\\"                    { append_char(currentStringLiteral, &currentStringIndex, '\"');}

<STRING_LITERAL>\\\'                    { append_char(currentStringLiteral, &currentStringIndex, '\'');}

<STRING_LITERAL>\"                      {
                                            printf("STRING_LITERAL: %s\n", currentStringLiteral);
                                            BEGIN(INITIAL);
                                        }

@\"                                     {
                                            reset_string(currentStringLiteral, &currentStringIndex);
                                            BEGIN(VERBATIM_STRING_LITERAL);
                                        }

<VERBATIM_STRING_LITERAL>\"\"           { append_char(currentStringLiteral, &currentStringIndex, '\"');}

<VERBATIM_STRING_LITERAL>[^"\n]+        { append_string(currentStringLiteral, &currentStringIndex, yytext);}

<VERBATIM_STRING_LITERAL>\n             { append_char(currentStringLiteral, &currentStringIndex, '\n');}

<VERBATIM_STRING_LITERAL>\"             {
                                            printf("VERBATIM_STRING_LITERAL: %s\n", currentStringLiteral);
                                            BEGIN(INITIAL);
                                        }

<VERBATIM_STRING_LITERAL><<EOF>>        {
                                            printf("Error! Unterminated verbatim string literal at line: %d\n", yylineno);
                                            BEGIN(INITIAL);
                                        }

\'                                      {
                                            reset_string(currentCharacter, &currentCharIndex);
                                            BEGIN(CHARACTER_LITERAL);
                                        }

<CHARACTER_LITERAL>\'                   {
                                            if (strlen(currentCharacter) == 0) 
                                            {
                                                printf("Error! Found empty character literal\n");
                                            }
                                            else if (strlen(currentCharacter) > 1)
                                            {
                                                printf("Error! Character literal is not allowed to have more than one character\n");
                                            }
                                            else 
                                            {
                                                printf("CHAR_LITERAL: %c\n", currentCharacter[0]);
                                            }
                                            BEGIN(INITIAL);
                                        }

<CHARACTER_LITERAL>[^\'\\]+             { append_string(currentCharacter, &currentCharIndex, yytext);}

<CHARACTER_LITERAL>\\x[0-9a-fA-F]{1,4}  {
                                            memset(buffer, 0, sizeof(buffer));
                                            strncpy(buffer, yytext + 2, yyleng - 2);
                                            sscanf(buffer, "%x", &currentInteger);
                                            append_char(currentCharacter, &currentCharIndex, (char)currentInteger);
                                        }

<CHARACTER_LITERAL>\\n                  { append_char(currentCharacter, &currentCharIndex, '\n');}

<CHARACTER_LITERAL>\\t                  { append_char(currentCharacter, &currentCharIndex, '\t');}

<CHARACTER_LITERAL>\\a                  { append_char(currentCharacter, &currentCharIndex, '\a');}

<CHARACTER_LITERAL>\\b                  { append_char(currentCharacter, &currentCharIndex, '\b');}

<CHARACTER_LITERAL>\\f                  { append_char(currentCharacter, &currentCharIndex, '\f');}

<CHARACTER_LITERAL>\\r                  { append_char(currentCharacter, &currentCharIndex, '\r');}

<CHARACTER_LITERAL>\\v                  { append_char(currentCharacter, &currentCharIndex, '\v');}

<CHARACTER_LITERAL>\\?                  { append_char(currentCharacter, &currentCharIndex, '\?');}

<CHARACTER_LITERAL>\\0                  { append_char(currentCharacter, &currentCharIndex, '\0');}

<CHARACTER_LITERAL>\\\\                 { append_char(currentCharacter, &currentCharIndex, '\\');}

<CHARACTER_LITERAL>\\\"                 { append_char(currentCharacter, &currentCharIndex, '\"');}

<CHARACTER_LITERAL>\\\'                 { append_char(currentCharacter, &currentCharIndex, '\'');}



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

{ID}\.{ID}  { print_token("CONSOLE_METHOD", yytext); }
{ID}\.{ID}      { print_token("CONSOLE_METHOD", yytext); }
{ID}\.{ID}  { print_token("CONSOLE_METHOD", yytext); }
{ID}\.{ID}      { print_token("CONSOLE_METHOD", yytext); }

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
{DIGIT}+             { 
    char* endptr;
    long value = strtol(yytext, &endptr, 10);
    printf("INTEGER_LITERAL: %s -> %ld\n", yytext, value);
}

{DIGIT}              { print_token("DIGIT", yytext); }

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