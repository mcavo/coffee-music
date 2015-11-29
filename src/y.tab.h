/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     MUSIC = 259,
     NUMBER = 260,
     TYPE = 261,
     MUSIC_TYPE = 262,
     MAIN_TOKEN = 263,
     VOID_TOKEN = 264,
     RETURN_TOKEN = 265,
     IF_TOKEN = 266,
     ELSE_TOKEN = 267,
     FOR_TOKEN = 268,
     DO_TOKEN = 269,
     WHILE_TOKEN = 270,
     SWITCH_TOKEN = 271,
     CASE_TOKEN = 272,
     DEFAULT_TOKEN = 273,
     BREAK_TOKEN = 274,
     PLUS_TOKEN = 275,
     MINUS_TOKEN = 276,
     MULT_TOKEN = 277,
     DIV_TOKEN = 278,
     MOD_TOKEN = 279,
     AND_TOKEN = 280,
     OR_TOKEN = 281,
     NOT = 282,
     NE_TOKEN = 283,
     ASSIGN_TOKEN = 284,
     GT_TOKEN = 285,
     LT_TOKEN = 286,
     GE_TOKEN = 287,
     LE_TOKEN = 288,
     EQ_TOKEN = 289,
     TRUE_TOKEN = 290,
     FALSE_TOKEN = 291,
     OPEN_PARENTHESIS_TOKEN = 292,
     CLOSE_PARENTHESIS_TOKEN = 293,
     OPEN_BRACKET_TOKEN = 294,
     CLOSE_BRACKET_TOKEN = 295,
     OPEN_SQR_BRACKET_TOKEN = 296,
     CLOSE_SQR_BRACKET_TOKEN = 297,
     COLON_TOKEN = 298,
     SEMICOLON_TOKEN = 299,
     COMMA_TOKEN = 300,
     WRITE_TOKEN = 301
   };
#endif
/* Tokens.  */
#define NAME 258
#define MUSIC 259
#define NUMBER 260
#define TYPE 261
#define MUSIC_TYPE 262
#define MAIN_TOKEN 263
#define VOID_TOKEN 264
#define RETURN_TOKEN 265
#define IF_TOKEN 266
#define ELSE_TOKEN 267
#define FOR_TOKEN 268
#define DO_TOKEN 269
#define WHILE_TOKEN 270
#define SWITCH_TOKEN 271
#define CASE_TOKEN 272
#define DEFAULT_TOKEN 273
#define BREAK_TOKEN 274
#define PLUS_TOKEN 275
#define MINUS_TOKEN 276
#define MULT_TOKEN 277
#define DIV_TOKEN 278
#define MOD_TOKEN 279
#define AND_TOKEN 280
#define OR_TOKEN 281
#define NOT 282
#define NE_TOKEN 283
#define ASSIGN_TOKEN 284
#define GT_TOKEN 285
#define LT_TOKEN 286
#define GE_TOKEN 287
#define LE_TOKEN 288
#define EQ_TOKEN 289
#define TRUE_TOKEN 290
#define FALSE_TOKEN 291
#define OPEN_PARENTHESIS_TOKEN 292
#define CLOSE_PARENTHESIS_TOKEN 293
#define OPEN_BRACKET_TOKEN 294
#define CLOSE_BRACKET_TOKEN 295
#define OPEN_SQR_BRACKET_TOKEN 296
#define CLOSE_SQR_BRACKET_TOKEN 297
#define COLON_TOKEN 298
#define SEMICOLON_TOKEN 299
#define COMMA_TOKEN 300
#define WRITE_TOKEN 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 42 "coffee-music.y"
{
   char* strval;
}
/* Line 1529 of yacc.c.  */
#line 145 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

