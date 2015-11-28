%{
#include "y.tab.h"

%}
%option nounput yylineno

#

%%

"for"					{return FOR_TOKEN;}
"while"					{return WHILE_TOKEN;}
"if"					{return IF_TOKEN;}
"do"					{return DO_TOKEN;}
"else"					{return ELSE_TOKEN;}
"true"					{return TRUE_TOKEN;}
"false"					{return FALSE_TOKEN;}
"writemusic"			{return PRINT;}
"case"					{return CASE;}
"default"				{return DEFAULT;}
"switch"				{return SWITCH_TOKEN;}
"break"					{return BREAK_TOKEN;}
"+"						{return OP_PLUS;}
"-"						{return OP_MINUS;}
"*"						{return OP_MULT;}
"/"						{return OP_DIV;}
"%"						{return OP_MOD;}
"<="					{return OP_LE;}
">="					{return OP_GE;}
"=="					{return OP_EQ;}
">"						{return OP_GT;}
"<"						{return OP_LT;}
"="						{return OP_ASSIGN;}
":"						{return COLON;}
"!="					{return OP_NE;}
"||"					{return OP_OR;}
"&&"					{return OP_AND;}
"!"						{return NOT;}
int|music|char\*    	{yylval.strval=strdup(yytext);return TYPE;}
[a-z][a-z0-9]*			{yylval.strval=strdup(yytext);return NAME;}
([-]?[1-9][0-9]*)|0		{yylval.strval=strdup(yytext);return NUMBER;}
(A|B|C|D|E|F|G)+		{yylval.strval=strdup(yytext);return MUSIC;}
"{"						{return OPEN_C_BRACKET;}
"}"						{return CLOSE_C_BRACKET;}
"["						{return OPEN_S_BRACKET;}
"]"						{return CLOSE_S_BRACKET;}
"("						{return OPEN_PARENTHESIS;}
")"						{return CLOSE_PARENTHESIS;}
";"						{return SEMICOLON;}
"."						{return DOT;}
","						{return COMMA;}
[ \t\n]						;
.						{printf("unexpected character\n");}

%%

int yywrap(void)
{
	return 1;
}