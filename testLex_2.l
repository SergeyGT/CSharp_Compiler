%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "myParserPrintf_test_1.tab.h"

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

void process_numeric_literal(const char* type, const char* text) {
    char cleaned[256];
    int j = 0;

    for (int i = 0; text[i] != '\0' && j < 255; i++) {
        if (text[i] != '_') {
            cleaned[j++] = text[i];
        }
    }
    cleaned[j] = '\0';
    
    char* endptr;
    long int_value = strtol(cleaned, &endptr, 10);
    printf("%s: %s -> %ld\n", type, text, int_value);
}

void yyerror(const char* s);
%}

%option noyywrap
%option never-interactive
%option yylineno

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
FSUFFIX  [fF]
DSUFFIX  [dD]
MSUFFIX  [mM]

%%

public               { print_token("ACCESS_MODIFIER", yytext); return PUBLIC; }
protected            { print_token("ACCESS_MODIFIER", yytext); return PROTECTED; }
private              { print_token("ACCESS_MODIFIER", yytext); return PRIVATE; }
internal             { print_token("ACCESS_MODIFIER", yytext); return INTERNAL; }
"protected internal" { print_token("ACCESS_MODIFIER", yytext); return PROTECTED_INTERNAL; }

struct               { print_token("KEYWORD", yytext); return STRUCT; }
class                { print_token("KEYWORD", yytext); return CLASS_KW; }
static               { print_token("KEYWORD", yytext); return STATIC; }
enum                 { print_token("KEYWORD", yytext); return ENUM; }

float                { print_token("TYPE_KEYWORD", yytext); return FLOAT_KW; }
double               { print_token("TYPE_KEYWORD", yytext); return DOUBLE_KW; }
decimal              { print_token("TYPE_KEYWORD", yytext); return DECIMAL_KW; }
bool                 { print_token("TYPE_KEYWORD", yytext); return BOOL_KW; }
int                  { print_token("TYPE_KEYWORD", yytext); return INT_KW; }

true                 { print_token_simple("BOOL_LITERAL_TRUE"); return TRUE_KW; }
false                { print_token_simple("BOOL_LITERAL_FALSE"); return FALSE_KW; }
null                 { print_token("KEYWORD", yytext); return NULL_KW; }

"&&"                 { print_token("OPERATOR", yytext); return AND; }
"||"                 { print_token("OPERATOR", yytext); return OR; }
"!"                  { print_token("OPERATOR", yytext); return '!'; }
"&"                  { print_token("OPERATOR", yytext); return BITWISE_AND; }
"|"                  { print_token("OPERATOR", yytext); return BITWISE_OR; }
"~"                  { print_token("OPERATOR", yytext); return TILDE; }

"["                  { print_token("LBRACKET", yytext); return '['; }
"]"                  { print_token("RBRACKET", yytext); return ']'; }
","                  { print_token("COMMA", yytext); return ','; }
"."                  { print_token("DOT", yytext); return '.'; }
";"                  { print_token("SEMICOLON", yytext); return ';'; }
":"                  { print_token("COLON", yytext); return ':'; }
"("                  { print_token("LPAREN", yytext); return '('; }
")"                  { print_token("RPAREN", yytext); return ')'; }
"{"                  { print_token("LBRACE", yytext); return '{'; }
"}"                  { print_token("RBRACE", yytext); return '}'; }

"++"                 { print_token("OPERATOR", yytext); return INCREMENT; }
"+"                  { print_token("OPERATOR", yytext); return '+'; }
"--"                 { print_token("OPERATOR", yytext); return DECREMENT; }
"-"                  { print_token("OPERATOR", yytext); return '-'; }
"*"                  { print_token("OPERATOR", yytext); return '*'; }
"/"                  { print_token("OPERATOR", yytext); return '/'; }
"%"                  { print_token("OPERATOR", yytext); return '%'; }

"=="                 { print_token("OPERATOR", yytext); return EQUAL; }
"!="                 { print_token("OPERATOR", yytext); return NOT_EQUAL; }
"<"                  { print_token("OPERATOR", yytext); return LESS; }
">"                  { print_token("OPERATOR", yytext); return GREATER; }
"<="                 { print_token("OPERATOR", yytext); return LESS_OR_EQUAL; }
">="                 { print_token("OPERATOR", yytext); return GREATER_OR_EQUAL; }

"="                  { print_token("OPERATOR", yytext); return '='; }
"+="                 { print_token("OPERATOR", yytext); return PLUS_ASSIGN; }
"-="                 { print_token("OPERATOR", yytext); return MINUS_ASSIGN; }
"*="                 { print_token("OPERATOR", yytext); return MULTIPLY_ASSIGN; }
"/="                 { print_token("OPERATOR", yytext); return DIVISION_ASSIGN; }

{DIGIT}+\.{DIGIT}*({FSUFFIX}|{DSUFFIX}|{MSUFFIX})? {
    char* endptr;
    char* input_text = strdup(yytext);
    int length = strlen(input_text);
    char last_char = input_text[length - 1];

    if (last_char == 'f' || last_char == 'F') {
        input_text[length - 1] = '\0';
        print_literal("FLOAT_LITERAL", yytext, strtof(input_text, &endptr));
        yylval._floatValue = strtof(input_text, &endptr);
        free(input_text);
        return FLOAT_LITERAL;
    } else if (last_char == 'm' || last_char == 'M') {
        input_text[length - 1] = '\0';
        print_decimal_literal("DECIMAL_LITERAL", yytext, strtod(input_text, &endptr));
        yylval._floatingPoint = strtod(input_text, &endptr);
        free(input_text);
        return DECIMAL_LITERAL;
    } else if (last_char == 'd' || last_char == 'D') {
        input_text[length - 1] = '\0';
        print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
        yylval._floatingPoint = strtod(input_text, &endptr);
        free(input_text);
        return FLOATING_POINT;
    } else {
        print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
        yylval._floatingPoint = strtod(input_text, &endptr);
        free(input_text);
        return FLOATING_POINT;
    }
}

{DIGIT}+{FSUFFIX}    {
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_literal("FLOAT_LITERAL", yytext, strtof(input_text, &endptr));
    yylval._floatValue = strtof(input_text, &endptr);
    free(input_text);
    return FLOAT_LITERAL; 
}

{DIGIT}+{DSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_literal("DOUBLE_LITERAL", yytext, strtod(input_text, &endptr));
    yylval._floatingPoint = strtod(input_text, &endptr);
    free(input_text);
    return FLOATING_POINT;
}

{DIGIT}+{MSUFFIX}    { 
    char* endptr;
    char* input_text = strdup(yytext);
    input_text[strlen(input_text) - 1] = '\0';
    print_decimal_literal("DECIMAL_LITERAL", yytext, strtod(input_text, &endptr));
    yylval._floatingPoint = strtod(input_text, &endptr);
    free(input_text);
    return DECIMAL_LITERAL;
}

{DIGIT}({DIGIT}|_)*{DIGIT} { 
    process_numeric_literal("INTEGER_LITERAL", yytext);
    yylval._integer = atoi(yytext);
    return INTEGER;
}

{DIGIT}              { 
    print_token("INTEGER_LITERAL", yytext); 
    yylval._integer = atoi(yytext); 
    return INTEGER;
}

"\""([^"\\]|\\.)*"\"" { 
    print_token("STRING_LITERAL", yytext); 
    yylval.string_value = strdup(yytext); 
    return STRING; 
}

'$'\"                { print_token("INTERPOLATED_STRING_START", yytext); return INTERPOLATED_STRING_START; }
'\"'                 { print_token("INTERPOLATED_STRING_END", yytext); return INTERPOLATED_STRING_END; }
{ID}                 { print_token("IDENTIFIER", yytext); yylval._identifier = strdup(yytext); return IDENTIFIER; }

[ \t\r\n]+           { /* skip whitespace */ }

.                    { print_token("UNKNOWN_CHAR", yytext); return yytext[0]; }

%%

void yyerror(const char* s) {
    fprintf(stderr, "Syntax Error at line %d: %s\n", yylineno, s);
    fflush(stderr); // Ensure error message is flushed
}