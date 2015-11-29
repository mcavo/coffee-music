%{
#include "y.tab.h"

%}
%option nounput yylineno

%%

[\"].*[\"]						{yylval.strval=strdup(yytext);return STRING;}
int									{yylval.strval=strdup(yytext);return TYPE;}
music								{yylval.strval=strdup(yytext);return MUSIC_TYPE;}
[a-z][a-z0-9]*						{yylval.strval=strdup(yytext);return NAME;}
([-]?[1-9][0-9]*)|0					{yylval.strval=strdup(yytext);return NUMBER;}
(([C|D|F|G|A][#]?) | [E|B])+		{yylval.strval=strdup(yytext);return MUSIC;}
"main"								{return MAIN_TOKEN;}
"void"								{return VOID_TOKEN;}
"true"								{return TRUE_TOKEN;}
"false"								{return FALSE_TOKEN;}
"for"								{return FOR_TOKEN;}
"do"								{return DO_TOKEN;}
"while"								{return WHILE_TOKEN;}
"if"								{return IF_TOKEN;}
"else"								{return ELSE_TOKEN;}
"writemusic"						{return WRITE_TOKEN;}
"switch"							{return SWITCH_TOKEN;}
"case"								{return CASE_TOKEN;}
"break"								{return BREAK_TOKEN;}
"default"							{return DEFAULT_TOKEN;}
"{"									{return OPEN_BRACKET_TOKEN;}
"}"									{return CLOSE_BRACKET_TOKEN;}
"["									{return OPEN_SQR_BRACKET_TOKEN;}
"]"									{return CLOSE_SQR_BRACKET_TOKEN;}
"("									{return OPEN_PARENTHESIS_TOKEN;}
")"									{return CLOSE_PARENTHESIS_TOKEN;}
";"									{return SEMICOLON_TOKEN;}
","									{return COMMA_TOKEN;}
"_"									{return UNDERSCORE_TOKEN;}
"+"									{return PLUS_TOKEN;}
"-"									{return MINUS_TOKEN;}
"*"									{return MULT_TOKEN;}
"/"									{return DIV_TOKEN;}
"%"									{return MOD_TOKEN;}
"<="								{return LE_TOKEN;}
">="								{return GE_TOKEN;}
"=="								{return EQ_TOKEN;}
">"									{return GT_TOKEN;}
"<"									{return LT_TOKEN;}
"="									{return ASSIGN_TOKEN;}
":"									{return COLON_TOKEN;}
"!="								{return NE_TOKEN;}
"||"								{return OR_TOKEN;}
"&&"								{return AND_TOKEN;}
"!"									{return NOT_TOKEN;}
[ \t\n]									;
.									{printf("unexpected character\n");}

%%

int yywrap(void)
{
	return 1;
}