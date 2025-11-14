%{
#include "ShatalovParser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_token(const char* type, const char* value) {
    printf("LEXER: %s: %s\n", type, value);
}
%}

%option noyywrap
%option yylineno

DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*

%x STRING_LITERAL
%x CHARACTER_LITERAL

%%

[ \t\r\n]+    ;

"int"       { printf("LEXER: int keyword\n"); return INT_TYPE; }
"char"      { printf("LEXER: char keyword\n"); return CHAR_TYPE; }
"string"    { printf("LEXER: string keyword\n"); return STRING_TYPE; }
"bool"      { printf("LEXER: bool keyword\n"); return BOOL_TYPE; }

{DIGIT}+    { 
    yylval.int_value = atoi(yytext); 
    printf("LEXER: INTEGER_LITERAL: %d\n", yylval.int_value);
    return INTEGER_LITERAL; 
}

\"          { 
    BEGIN(STRING_LITERAL); 
    yylval.string_value = malloc(256);
    strcpy(yylval.string_value, "");
}

<STRING_LITERAL>[^\\\"]+        { 
    strcat(yylval.string_value, yytext);
}

<STRING_LITERAL>\\n             { strcat(yylval.string_value, "\n"); }
<STRING_LITERAL>\\t             { strcat(yylval.string_value, "\t"); }
<STRING_LITERAL>\\r             { strcat(yylval.string_value, "\r"); }
<STRING_LITERAL>\\\"            { strcat(yylval.string_value, "\""); }
<STRING_LITERAL>\\\\            { strcat(yylval.string_value, "\\"); }

<STRING_LITERAL>\"              { 
    BEGIN(INITIAL); 
    printf("LEXER: STRING_LITERAL: \"%s\"\n", yylval.string_value);
    return STRING_LITERAL;
}

<CHARACTER_LITERAL>\'              { 
    BEGIN(INITIAL);
    printf("LEXER: CHAR_LITERAL: '%c'\n", yylval.char_value);
    return CHAR_LITERAL;
}

<CHARACTER_LITERAL>[^\\\']         { 
    yylval.char_value = yytext[0]; 
    BEGIN(INITIAL);
    printf("LEXER: CHAR_LITERAL: '%c'\n", yylval.char_value);
    return CHAR_LITERAL;
}

<CHARACTER_LITERAL>\\n             { yylval.char_value = '\n'; BEGIN(INITIAL); return CHAR_LITERAL; }
<CHARACTER_LITERAL>\\t             { yylval.char_value = '\t'; BEGIN(INITIAL); return CHAR_LITERAL; }
<CHARACTER_LITERAL>\\r             { yylval.char_value = '\r'; BEGIN(INITIAL); return CHAR_LITERAL; }
<CHARACTER_LITERAL>\\\'            { yylval.char_value = '\''; BEGIN(INITIAL); return CHAR_LITERAL; }
<CHARACTER_LITERAL>\\\\            { yylval.char_value = '\\'; BEGIN(INITIAL); return CHAR_LITERAL; }

<CHARACTER_LITERAL>\'              { 
    printf("LEXER: Empty char literal error\n");
    BEGIN(INITIAL);
}

"+"         { printf("LEXER: PLUS operator\n"); return '+'; }
"-"         { printf("LEXER: MINUS operator\n"); return '-'; }
"*"         { printf("LEXER: MULTIPLY operator\n"); return '*'; }
"/"         { printf("LEXER: DIVIDE operator\n"); return '/'; }
"="         { printf("LEXER: ASSIGN operator\n"); return '='; }
"=="        { printf("LEXER: EQUAL operator\n"); return EQUAL; }
"!="        { printf("LEXER: NOT_EQUAL operator\n"); return NOT_EQUAL; }
"<"         { printf("LEXER: LESS operator\n"); return '<'; }
">"         { printf("LEXER: GREATER operator\n"); return '>'; }
"<="        { printf("LEXER: LESS_EQUAL operator\n"); return LESS_EQUAL; }
">="        { printf("LEXER: GREATER_EQUAL operator\n"); return GREATER_EQUAL; }

";"         { printf("LEXER: SEMICOLON\n"); return ';'; }
","         { printf("LEXER: COMMA\n"); return ','; }
"("         { printf("LEXER: LPAREN\n"); return '('; }
")"         { printf("LEXER: RPAREN\n"); return ')'; }
"{"         { printf("LEXER: LBRACE\n"); return '{'; }
"}"         { printf("LEXER: RBRACE\n"); return '}'; }

{ID}        { 
    yylval.string_value = strdup(yytext); 
    printf("LEXER: IDENTIFIER: %s\n", yytext);
    return IDENTIFIER; 
}

.           { 
    printf("LEXER: UNKNOWN CHARACTER: '%s'\n", yytext); 
}

%%