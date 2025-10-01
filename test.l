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

public                 { printf("Keyword: %s\n", yytext); }
protected              { printf("Keyword: %s\n", yytext); }
private                { printf("Keyword: %s\n", yytext); }
internal               { printf("Keyword: %s\n", yytext); }
"protected internal"   { printf("Keyword: %s\n", yytext); }
"internal protected"   { printf("Keyword: %s\n", yytext); }

struct               { printf("Keyword: %s\n", yytext); }
class                { printf("Keyword: %s\n", yytext); }
static               { printf("Keyword: %s\n", yytext); }
enum                 { printf("Keyword: %s\n", yytext); }

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

{ID}      { printf("IDENTIFIER: %s\n", yytext); }

[ \t\r\n]+    ;

.         { printf("Unknown character: %s\n", yytext); }

%%

int main() {
    yylex();
    return 0;
}