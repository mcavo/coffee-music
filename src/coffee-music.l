%{
#include "y.tab.h"

%}
%option nounput yylineno

%%


int											yylval.strval=strdup(yytext);return TYPE;
music										yylval.strval=strdup(yytext);return MUSIC_TYPE;
true										yylval.strval=strdup(yytext);return TRUE_TOKEN;
false										yylval.strval=strdup(yytext);return FALSE_TOKEN;
do											yylval.strval=strdup(yytext);return DO_TOKEN;
while										yylval.strval=strdup(yytext);return WHILE_TOKEN;
if											yylval.strval=strdup(yytext);return IF_TOKEN;
else										yylval.strval=strdup(yytext);return ELSE_TOKEN;
switch										yylval.strval=strdup(yytext);return SWITCH_TOKEN;
case										yylval.strval=strdup(yytext);return CASE_TOKEN;
break										yylval.strval=strdup(yytext);return BREAK_TOKEN;
default										yylval.strval=strdup(yytext);return DEFAULT_TOKEN;
main										yylval.strval=strdup(yytext);return MAIN_TOKEN;
for											return FOR_TOKEN;
writemusic									yylval.strval=strdup(yytext);return WRITE_TOKEN;

\{											return OPEN_BRACKET_TOKEN;
\}											return CLOSE_BRACKET_TOKEN;
\(											return OPEN_PARENTHESIS_TOKEN;
\)											return CLOSE_PARENTHESIS_TOKEN;

\;											return SEMICOLON_TOKEN;
\,											return COMMA_TOKEN;

\:											return COLON_TOKEN;

\%											return MOD_TOKEN;
\+											return PLUS_TOKEN;
\-											return MINUS_TOKEN;
\*											return MULT_TOKEN;
\/											return DIV_TOKEN;
\=											return ASSIGN_TOKEN;

\<=											return LE_TOKEN;
\>=											return GE_TOKEN;
\=\=										return EQ_TOKEN;
\!\=										return NE_TOKEN;
\>											return GT_TOKEN;
\<											return LT_TOKEN;

\|\|										return OR_TOKEN;
\&\&\										return AND_TOKEN;
\!											return NOT_TOKEN;

([a-z][a-z0-9]*)							yylval.strval=strdup(yytext);return NAME;
(([-]?[1-9][0-9]*)|0)						yylval.strval=strdup(yytext);return NUMBER;
((([C|D|F|G|A][#|b|2]?)|([E|B][2]?)|[S])+)	yylval.strval = strdup(yytext);return MUSIC;



\n											;
[ \t\n]+									; 

%%



int yywrap(void)
{
	return 1;
}