%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

char* concat_str(int argc, ...);

%}

%token <strval> NAME
%token <strval> MUSIC
%token <strval> NUMBER
%token <strval> TYPE
%token <strval> MUSIC_TYPE
%token <strval> TRUE_TOKEN 
%token <strval> FALSE_TOKEN 
%token <strval> VOID_TOKEN
%token <strval> MAIN_TOKEN
%token <strval> IF_TOKEN 
%token <strval> ELSE_TOKEN 
%token FOR_TOKEN 
%token <strval> DO_TOKEN 
%token <strval> WHILE_TOKEN 
%token <strval> SWITCH_TOKEN 
%token <strval> CASE_TOKEN 
%token <strval> DEFAULT_TOKEN 
%token <strval> BREAK_TOKEN
%token PLUS_TOKEN MINUS_TOKEN MULT_TOKEN DIV_TOKEN MOD_TOKEN
%token AND_TOKEN OR_TOKEN NOT_TOKEN NE_TOKEN ASSIGN_TOKEN GT_TOKEN LT_TOKEN GE_TOKEN LE_TOKEN EQ_TOKEN
%token OPEN_PARENTHESIS_TOKEN CLOSE_PARENTHESIS_TOKEN OPEN_BRACKET_TOKEN CLOSE_BRACKET_TOKEN 
%token COLON_TOKEN SEMICOLON_TOKEN COMMA_TOKEN
%token WRITE_TOKEN 

%right ASSIGN_TOKEN
%left OR_TOKEN AND_TOKEN
%left LE_TOKEN GE_TOKEN EQ_TOKEN NE_TOKEN
%left PLUS_TOKEN MINUS_TOKEN
%left MULT_TOKEN DIV_TOKEN MOD_TOKEN
%left NOT_TOKEN
%left COMMA_TOKEN


%type <strval> Main
%type <strval> Variables
%type <strval> Variable
%type <strval> Block
%type <strval> MainBlock
%type <strval> Content
%type <strval> ForExpression
%type <strval> Expression
%type <strval> ArithmeticalExpression
%type <strval> RelationalExpression
%type <strval> LogicalExpression
%type <strval> BooleanValue
%type <strval> Termin
%type <strval> Cases

%union {
   char* strval;
}

%start Main

%%

Main 
   : TYPE MAIN_TOKEN OPEN_PARENTHESIS_TOKEN VOID_TOKEN CLOSE_PARENTHESIS_TOKEN MainBlock
      { $$ = concat_str(3, $1, " main () ",$6); }
   ;

Variables
   : Variable SEMICOLON_TOKEN
      { $$ = concat_str(2, $1, ";\n"); }
   ;

Variable 
   : TYPE NAME
      { $$ = concat_str( 2, $1, $2); }
   | MUSIC_TYPE NAME
      { $$ = concat_str( 2, "char* ", $2);}
   ;


Block
   : OPEN_BRACKET_TOKEN Content CLOSE_BRACKET_TOKEN
      { $$ = concat_str( 3, "{\n", $2, "\n}"); }
   ;

MainBlock
   : OPEN_BRACKET_TOKEN Content CLOSE_BRACKET_TOKEN 
      { $$ = concat_str( 3, "{\n FILE * music = wavfile_open(\"music.wav\");\n", $2, "\n wavfile_close(music); \n return 0;}"); }
   ;

Content
   : Variables Content
   { $$ = concat_str( 2, $1, $2); }  
   | Variable ASSIGN_TOKEN Expression SEMICOLON_TOKEN Content  
      { $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
   | NAME ASSIGN_TOKEN Expression SEMICOLON_TOKEN Content       
      { $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
   | WHILE_TOKEN OPEN_PARENTHESIS_TOKEN LogicalExpression CLOSE_PARENTHESIS_TOKEN Block Content    
      { $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
   | FOR_TOKEN OPEN_PARENTHESIS_TOKEN ForExpression SEMICOLON_TOKEN LogicalExpression SEMICOLON_TOKEN ForExpression CLOSE_PARENTHESIS_TOKEN Block Content
      { $$ = concat_str( 10, "for ( ", $3, " ; ", $5, " ; ", $7, " )\n", $9, "\n", $10); }
   | IF_TOKEN OPEN_PARENTHESIS_TOKEN LogicalExpression CLOSE_PARENTHESIS_TOKEN Block Content
      { $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
   | IF_TOKEN OPEN_PARENTHESIS_TOKEN LogicalExpression CLOSE_PARENTHESIS_TOKEN Block ELSE_TOKEN Block Content
      { $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
   | SWITCH_TOKEN OPEN_PARENTHESIS_TOKEN Expression CLOSE_PARENTHESIS_TOKEN OPEN_BRACKET_TOKEN Cases CLOSE_BRACKET_TOKEN Content
      { $$ = concat_str( 6, "switch ( ", $3, " )\n{\n", $6, "\n}", $8); }
   | DO_TOKEN Block WHILE_TOKEN OPEN_PARENTHESIS_TOKEN LogicalExpression CLOSE_PARENTHESIS_TOKEN SEMICOLON_TOKEN Content
      { $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
   | BREAK_TOKEN SEMICOLON_TOKEN Content
      { $$ = "break;\n"; }
   | WRITE_TOKEN OPEN_PARENTHESIS_TOKEN NAME CLOSE_PARENTHESIS_TOKEN SEMICOLON_TOKEN Content
      { $$ = concat_str( 3, "wavfile_write_music( music, ", $3, ");");}
   | WRITE_TOKEN OPEN_PARENTHESIS_TOKEN MUSIC CLOSE_PARENTHESIS_TOKEN SEMICOLON_TOKEN Content
      { $$ = concat_str( 3, "wavfile_write_music( music, \"$3\");");}
   |
      { $$ = ""; }
   ;

ForExpression
   : NAME ASSIGN_TOKEN Expression 
      { $$ = concat_str( 3, $1, " = ", $3); }
   | ForExpression COMMA_TOKEN ForExpression
      { $$ = concat_str( 3, $1, ", " , $3); }
   |  
      { $$ = ""; }
   ;

Expression
   : LogicalExpression
      { $$ = $1; }
   | ArithmeticalExpression
      { $$ = $1; }
   | MUSIC
      { $$ = concat_str(3, "\"", $1, "\""); }
   ;

ArithmeticalExpression
   : Termin
      { $$ = $1; }
   | ArithmeticalExpression MULT_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " * ", $3); }
   | ArithmeticalExpression DIV_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " / ", $3); }
   | ArithmeticalExpression MOD_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " % ", $3); }
   | ArithmeticalExpression PLUS_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " + ", $3); }
   | ArithmeticalExpression MINUS_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " - ", $3); }
    | OPEN_PARENTHESIS_TOKEN ArithmeticalExpression CLOSE_PARENTHESIS_TOKEN
      { $$ = concat_str( 3, "( ", $2, " )"); }
   ;

RelationalExpression
   : ArithmeticalExpression LT_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " < ", $3); }
   | ArithmeticalExpression GT_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " > ", $3); }
   | ArithmeticalExpression LE_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " <= ", $3); }
   | ArithmeticalExpression GE_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " >= ", $3); }
   | ArithmeticalExpression EQ_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " == ", $3); }
   | ArithmeticalExpression NE_TOKEN ArithmeticalExpression
      { $$ = concat_str(3, $1, " != ", $3); }
   | OPEN_PARENTHESIS_TOKEN RelationalExpression CLOSE_PARENTHESIS_TOKEN
      { $$ = concat_str( 3, "( ", $2, " )"); }
   ;

LogicalExpression
   : BooleanValue
      { $$ = $1; }
   | RelationalExpression
      { $$ = $1; }
   | LogicalExpression AND_TOKEN LogicalExpression
      { $$ = concat_str(3, $1, " && ", $3); }
   | LogicalExpression OR_TOKEN LogicalExpression
      { $$ = concat_str(3, $1, " || ", $3); }
   | OPEN_PARENTHESIS_TOKEN LogicalExpression CLOSE_PARENTHESIS_TOKEN
      { $$ = concat_str( 3, "( ", $2, " )"); }
   ;

BooleanValue
   :  TRUE_TOKEN
      { $$ = "true"; }
   | FALSE_TOKEN
      { $$ = "false"; }
   ;

Termin
   : NAME
      { $$ = $1; }
   | NUMBER
      { $$ = $1; }
   ; 

Cases 
   : CASE_TOKEN Expression COLON_TOKEN Block Cases
      { $$ = concat_str(5, "case ", $2, " : ", $4 ,$5); }
   | DEFAULT_TOKEN COLON_TOKEN Block
      { $$ = concat_str(2, "default : \n", $3); }
   ;


%%

char* 
concat_str(int argc, ...){
   
   char * ans = NULL;
   char ** args = (char **)malloc(argc*sizeof(char *));

   int size = 0, i;

   va_list ap;
   va_start(ap, argc);
   
   for(i = 0; i < argc; i++)
   {
      args[i] = va_arg(ap, char *);
      size += strlen(args[i]);
   }

   ans = (char *)malloc((size+1)*sizeof(char)); // size+1 para el '\0'

   for(i = 0; i < argc; i++)
      sprintf(ans, "%s%s", ans, args[i]);

   va_end(ap);
   return ans;
}

int 
main() {
   printf("");
   int yydebug = 1;
   yyparse();
}