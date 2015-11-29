/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     TRUE_TOKEN = 263,
     FALSE_TOKEN = 264,
     VOID_TOKEN = 265,
     MAIN_TOKEN = 266,
     IF_TOKEN = 267,
     ELSE_TOKEN = 268,
     FOR_TOKEN = 269,
     DO_TOKEN = 270,
     WHILE_TOKEN = 271,
     SWITCH_TOKEN = 272,
     CASE_TOKEN = 273,
     DEFAULT_TOKEN = 274,
     BREAK_TOKEN = 275,
     PLUS_TOKEN = 276,
     MINUS_TOKEN = 277,
     MULT_TOKEN = 278,
     DIV_TOKEN = 279,
     MOD_TOKEN = 280,
     AND_TOKEN = 281,
     OR_TOKEN = 282,
     NOT_TOKEN = 283,
     NE_TOKEN = 284,
     ASSIGN_TOKEN = 285,
     GT_TOKEN = 286,
     LT_TOKEN = 287,
     GE_TOKEN = 288,
     LE_TOKEN = 289,
     EQ_TOKEN = 290,
     OPEN_PARENTHESIS_TOKEN = 291,
     CLOSE_PARENTHESIS_TOKEN = 292,
     OPEN_BRACKET_TOKEN = 293,
     CLOSE_BRACKET_TOKEN = 294,
     COLON_TOKEN = 295,
     SEMICOLON_TOKEN = 296,
     COMMA_TOKEN = 297,
     WRITE_TOKEN = 298
   };
#endif
/* Tokens.  */
#define NAME 258
#define MUSIC 259
#define NUMBER 260
#define TYPE 261
#define MUSIC_TYPE 262
#define TRUE_TOKEN 263
#define FALSE_TOKEN 264
#define VOID_TOKEN 265
#define MAIN_TOKEN 266
#define IF_TOKEN 267
#define ELSE_TOKEN 268
#define FOR_TOKEN 269
#define DO_TOKEN 270
#define WHILE_TOKEN 271
#define SWITCH_TOKEN 272
#define CASE_TOKEN 273
#define DEFAULT_TOKEN 274
#define BREAK_TOKEN 275
#define PLUS_TOKEN 276
#define MINUS_TOKEN 277
#define MULT_TOKEN 278
#define DIV_TOKEN 279
#define MOD_TOKEN 280
#define AND_TOKEN 281
#define OR_TOKEN 282
#define NOT_TOKEN 283
#define NE_TOKEN 284
#define ASSIGN_TOKEN 285
#define GT_TOKEN 286
#define LT_TOKEN 287
#define GE_TOKEN 288
#define LE_TOKEN 289
#define EQ_TOKEN 290
#define OPEN_PARENTHESIS_TOKEN 291
#define CLOSE_PARENTHESIS_TOKEN 292
#define OPEN_BRACKET_TOKEN 293
#define CLOSE_BRACKET_TOKEN 294
#define COLON_TOKEN 295
#define SEMICOLON_TOKEN 296
#define COMMA_TOKEN 297
#define WRITE_TOKEN 298




/* Copy the first part of user declarations.  */
#line 1 "coffee-music.y"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

char* concat_str(int argc, ...);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 62 "coffee-music.y"
{
   char* strval;
}
/* Line 193 of yacc.c.  */
#line 198 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    13,    16,    19,    23,    27,    30,
      36,    42,    49,    60,    67,    76,    85,    94,    98,   105,
     112,   113,   117,   121,   122,   124,   126,   128,   130,   134,
     138,   142,   146,   150,   154,   158,   162,   166,   170,   174,
     178,   182,   184,   186,   190,   194,   198,   200,   202,   204,
     206,   212
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     6,    11,    36,    10,    37,    49,    -1,
      47,    41,    -1,     6,     3,    -1,     7,     3,    -1,    38,
      50,    39,    -1,    38,    50,    39,    -1,    46,    50,    -1,
      47,    30,    52,    41,    50,    -1,     3,    30,    52,    41,
      50,    -1,    16,    36,    55,    37,    48,    50,    -1,    14,
      36,    51,    41,    55,    41,    51,    37,    48,    50,    -1,
      12,    36,    55,    37,    48,    50,    -1,    12,    36,    55,
      37,    48,    13,    48,    50,    -1,    17,    36,    52,    37,
      38,    58,    39,    50,    -1,    15,    48,    16,    36,    55,
      37,    41,    50,    -1,    20,    41,    50,    -1,    43,    36,
       3,    37,    41,    50,    -1,    43,    36,     4,    37,    41,
      50,    -1,    -1,     3,    30,    52,    -1,    51,    42,    51,
      -1,    -1,    55,    -1,    53,    -1,     4,    -1,    57,    -1,
      53,    23,    53,    -1,    53,    24,    53,    -1,    53,    25,
      53,    -1,    53,    21,    53,    -1,    53,    22,    53,    -1,
      36,    53,    37,    -1,    53,    32,    53,    -1,    53,    31,
      53,    -1,    53,    34,    53,    -1,    53,    33,    53,    -1,
      53,    35,    53,    -1,    53,    29,    53,    -1,    36,    54,
      37,    -1,    56,    -1,    54,    -1,    55,    26,    55,    -1,
      55,    27,    55,    -1,    36,    55,    37,    -1,     8,    -1,
       9,    -1,     3,    -1,     5,    -1,    18,    52,    40,    48,
      58,    -1,    19,    40,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    76,    81,    83,    89,    94,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     124,   128,   130,   133,   137,   139,   141,   146,   148,   150,
     152,   154,   156,   158,   163,   165,   167,   169,   171,   173,
     175,   180,   182,   184,   186,   188,   193,   195,   200,   202,
     207,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "MUSIC", "NUMBER", "TYPE",
  "MUSIC_TYPE", "TRUE_TOKEN", "FALSE_TOKEN", "VOID_TOKEN", "MAIN_TOKEN",
  "IF_TOKEN", "ELSE_TOKEN", "FOR_TOKEN", "DO_TOKEN", "WHILE_TOKEN",
  "SWITCH_TOKEN", "CASE_TOKEN", "DEFAULT_TOKEN", "BREAK_TOKEN",
  "PLUS_TOKEN", "MINUS_TOKEN", "MULT_TOKEN", "DIV_TOKEN", "MOD_TOKEN",
  "AND_TOKEN", "OR_TOKEN", "NOT_TOKEN", "NE_TOKEN", "ASSIGN_TOKEN",
  "GT_TOKEN", "LT_TOKEN", "GE_TOKEN", "LE_TOKEN", "EQ_TOKEN",
  "OPEN_PARENTHESIS_TOKEN", "CLOSE_PARENTHESIS_TOKEN",
  "OPEN_BRACKET_TOKEN", "CLOSE_BRACKET_TOKEN", "COLON_TOKEN",
  "SEMICOLON_TOKEN", "COMMA_TOKEN", "WRITE_TOKEN", "$accept", "Main",
  "Variables", "Variable", "Block", "MainBlock", "Content",
  "ForExpression", "Expression", "ArithmeticalExpression",
  "RelationalExpression", "LogicalExpression", "BooleanValue", "Termin",
  "Cases", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    48,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     2,     2,     3,     3,     2,     5,
       5,     6,    10,     6,     8,     8,     8,     3,     6,     6,
       0,     3,     3,     0,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     1,     1,     1,     1,
       5,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    20,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     4,     5,     0,    23,    20,     0,
       0,     0,    20,     0,     8,     0,     3,     7,    48,    26,
      49,    46,    47,     0,     0,    25,    42,    24,    41,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    42,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     6,     0,     0,     0,     0,     0,    20,
      33,    40,    45,    10,     0,    31,    32,    28,    29,    30,
      39,    35,    34,    37,    36,    38,    43,    44,    20,    21,
       0,    22,     0,    20,     0,    20,    20,     9,     0,     0,
      13,    23,     0,    11,     0,     0,     0,    18,    19,    20,
       0,    20,     0,     0,    20,    14,     0,    16,     0,    51,
      15,    20,     0,    12,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    20,    21,    29,     9,    22,    53,    44,    50,
      46,    47,    48,    49,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
       0,    20,    16,     3,   -82,    51,    28,    25,   110,   -82,
      38,    72,    89,    64,    66,    69,    74,    76,    78,    79,
     110,    48,    81,    82,   -82,   -82,    96,   120,   110,   115,
      96,    82,   110,    26,   -82,    82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,    96,    97,   140,   -82,    17,   -82,   -82,
     140,    45,   118,     5,   101,   106,    57,   113,   -82,   114,
     122,   111,   112,   123,    71,   110,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,    96,    96,    69,
      82,    96,   120,   -82,    96,    69,   128,   126,   127,   110,
     -82,   -82,   -82,   -82,     6,    -2,    -2,   -82,   -82,   -82,
     155,   155,   155,   155,   155,   155,   -82,   -82,    21,   -82,
     -23,   -82,   102,   110,    62,   110,   110,   -82,   133,    69,
     -82,   120,   141,   -82,    82,   143,   142,   -82,   -82,   110,
     -35,   110,   144,    69,   110,   -82,    69,   -82,    69,   -82,
     -82,   110,    62,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   -82,   -59,   -82,   -20,   -81,   -21,   -18,
     145,   -11,   -82,   -82,    43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      34,   111,   136,    77,    78,    45,     1,    82,    54,    38,
      57,    40,    58,    45,    61,    51,     4,    45,   121,    56,
     108,    68,    69,    70,    10,    62,   113,    11,    12,    59,
      60,     3,    64,    13,   119,    14,    15,    16,    17,     5,
     130,    18,    94,    77,    78,    93,    81,    82,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   109,
     129,     6,    45,     8,    19,     7,   106,   107,    23,   117,
     110,    77,    78,   112,   139,    24,   118,   141,    35,   142,
     124,   125,    79,    77,    78,    38,    39,    40,   120,    36,
      41,    42,    25,   123,    85,   127,   128,    77,    78,    38,
      26,    40,    27,   132,    41,    42,    45,    28,    92,   135,
      30,   137,    31,    10,   140,    33,    11,    12,    43,    32,
      37,   143,    13,    52,    14,    15,    16,    17,    77,    78,
      18,    55,    43,    66,    67,    68,    69,    70,    65,   122,
      83,    71,    84,    72,    73,    74,    75,    76,    80,    90,
      86,    87,    89,    19,    66,    67,    68,    69,    70,    88,
      91,    66,    67,    68,    69,    70,   114,   115,   116,    71,
      90,    72,    73,    74,    75,    76,    66,    67,    68,    69,
      70,   134,   131,   133,   138,   144,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
      20,    82,    37,    26,    27,    23,     6,    42,    28,     3,
      31,     5,    32,    31,    35,    26,     0,    35,    41,    30,
      79,    23,    24,    25,     3,    43,    85,     6,     7,     3,
       4,    11,    43,    12,    13,    14,    15,    16,    17,    36,
     121,    20,    36,    26,    27,    65,    41,    42,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    80,
     119,    10,    80,    38,    43,    37,    77,    78,    30,    89,
      81,    26,    27,    84,   133,     3,    94,   136,    30,   138,
      18,    19,    37,    26,    27,     3,     4,     5,   108,    41,
       8,     9,     3,   113,    37,   115,   116,    26,    27,     3,
      36,     5,    36,   124,     8,     9,   124,    38,    37,   129,
      36,   131,    36,     3,   134,    36,     6,     7,    36,    41,
      39,   141,    12,     3,    14,    15,    16,    17,    26,    27,
      20,    16,    36,    21,    22,    23,    24,    25,    41,    37,
      39,    29,    36,    31,    32,    33,    34,    35,    30,    37,
      37,    37,    41,    43,    21,    22,    23,    24,    25,    37,
      37,    21,    22,    23,    24,    25,    38,    41,    41,    29,
      37,    31,    32,    33,    34,    35,    21,    22,    23,    24,
      25,    39,    41,    40,    40,   142,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    45,    11,     0,    36,    10,    37,    38,    49,
       3,     6,     7,    12,    14,    15,    16,    17,    20,    43,
      46,    47,    50,    30,     3,     3,    36,    36,    38,    48,
      36,    36,    41,    36,    50,    30,    41,    39,     3,     4,
       5,     8,     9,    36,    52,    53,    54,    55,    56,    57,
      53,    55,     3,    51,    50,    16,    55,    52,    50,     3,
       4,    52,    53,    54,    55,    41,    21,    22,    23,    24,
      25,    29,    31,    32,    33,    34,    35,    26,    27,    37,
      30,    41,    42,    39,    36,    37,    37,    37,    37,    41,
      37,    37,    37,    50,    36,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    55,    55,    48,    52,
      55,    51,    55,    48,    38,    41,    41,    50,    53,    13,
      50,    41,    37,    50,    18,    19,    58,    50,    50,    48,
      51,    41,    52,    40,    39,    50,    37,    50,    40,    48,
      50,    48,    48,    50,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 72 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (6)].strval), " main () ",(yyvsp[(6) - (6)].strval)); }
    break;

  case 3:
#line 77 "coffee-music.y"
    { (yyval.strval) = concat_str(2, (yyvsp[(1) - (2)].strval), ";\n"); }
    break;

  case 4:
#line 82 "coffee-music.y"
    { (yyval.strval) = concat_str( 2, (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval)); }
    break;

  case 5:
#line 84 "coffee-music.y"
    { (yyval.strval) = concat_str( 2, "char* ", (yyvsp[(2) - (2)].strval));}
    break;

  case 6:
#line 90 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "{\n", (yyvsp[(2) - (3)].strval), "\n}"); }
    break;

  case 7:
#line 95 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "{\n FILE * music = wavfile_open(\"music.wav\");\n", (yyvsp[(2) - (3)].strval), "\n wavfile_close(music); \n return 0;}"); }
    break;

  case 8:
#line 100 "coffee-music.y"
    { (yyval.strval) = concat_str( 2, (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval)); }
    break;

  case 9:
#line 102 "coffee-music.y"
    { (yyval.strval) = concat_str( 5, (yyvsp[(1) - (5)].strval), " = ", (yyvsp[(3) - (5)].strval), ";\n", (yyvsp[(5) - (5)].strval)); }
    break;

  case 10:
#line 104 "coffee-music.y"
    { (yyval.strval) = concat_str( 5, (yyvsp[(1) - (5)].strval), " = ", (yyvsp[(3) - (5)].strval), ";\n", (yyvsp[(5) - (5)].strval)); }
    break;

  case 11:
#line 106 "coffee-music.y"
    { (yyval.strval) = concat_str( 6,"while ( ", (yyvsp[(3) - (6)].strval), " )\n", (yyvsp[(5) - (6)].strval), "\n", (yyvsp[(6) - (6)].strval)); }
    break;

  case 12:
#line 108 "coffee-music.y"
    { (yyval.strval) = concat_str( 10, "for ( ", (yyvsp[(3) - (10)].strval), " ; ", (yyvsp[(5) - (10)].strval), " ; ", (yyvsp[(7) - (10)].strval), " )\n", (yyvsp[(9) - (10)].strval), "\n", (yyvsp[(10) - (10)].strval)); }
    break;

  case 13:
#line 110 "coffee-music.y"
    { (yyval.strval) = concat_str( 6, "if ( ", (yyvsp[(3) - (6)].strval), " )\n", (yyvsp[(5) - (6)].strval), "\n", (yyvsp[(6) - (6)].strval)) ; }
    break;

  case 14:
#line 112 "coffee-music.y"
    { (yyval.strval) = concat_str( 9, "if ( ",  (yyvsp[(3) - (8)].strval), " )\n", (yyvsp[(5) - (8)].strval), "\n", "else\n", (yyvsp[(7) - (8)].strval) , "\n", (yyvsp[(8) - (8)].strval)); }
    break;

  case 15:
#line 114 "coffee-music.y"
    { (yyval.strval) = concat_str( 6, "switch ( ", (yyvsp[(3) - (8)].strval), " )\n{\n", (yyvsp[(6) - (8)].strval), "\n}", (yyvsp[(8) - (8)].strval)); }
    break;

  case 16:
#line 116 "coffee-music.y"
    { (yyval.strval) = concat_str( 7, "do\n", (yyvsp[(2) - (8)].strval), "\n", "while ( ", (yyvsp[(5) - (8)].strval), " );\n", (yyvsp[(8) - (8)].strval)); }
    break;

  case 17:
#line 118 "coffee-music.y"
    { (yyval.strval) = "break;\n"; }
    break;

  case 18:
#line 120 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "wavfile_write_music( music, ", (yyvsp[(3) - (6)].strval), ");");}
    break;

  case 19:
#line 122 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "wavfile_write_music( music, \"$3\");");}
    break;

  case 20:
#line 124 "coffee-music.y"
    { (yyval.strval) = ""; }
    break;

  case 21:
#line 129 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, (yyvsp[(1) - (3)].strval), " = ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 22:
#line 131 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, (yyvsp[(1) - (3)].strval), ", " , (yyvsp[(3) - (3)].strval)); }
    break;

  case 23:
#line 133 "coffee-music.y"
    { (yyval.strval) = ""; }
    break;

  case 24:
#line 138 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 25:
#line 140 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 26:
#line 142 "coffee-music.y"
    { (yyval.strval) = concat_str(3, "\"", (yyvsp[(1) - (1)].strval), "\""); }
    break;

  case 27:
#line 147 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 28:
#line 149 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " * ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 29:
#line 151 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " / ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 30:
#line 153 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " % ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 31:
#line 155 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " + ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 32:
#line 157 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " - ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 33:
#line 159 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "( ", (yyvsp[(2) - (3)].strval), " )"); }
    break;

  case 34:
#line 164 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " < ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 35:
#line 166 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " > ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 36:
#line 168 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " <= ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 37:
#line 170 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " >= ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 38:
#line 172 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " == ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 39:
#line 174 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " != ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 40:
#line 176 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "( ", (yyvsp[(2) - (3)].strval), " )"); }
    break;

  case 41:
#line 181 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 42:
#line 183 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 43:
#line 185 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " && ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 44:
#line 187 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " || ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 45:
#line 189 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "( ", (yyvsp[(2) - (3)].strval), " )"); }
    break;

  case 46:
#line 194 "coffee-music.y"
    { (yyval.strval) = "true"; }
    break;

  case 47:
#line 196 "coffee-music.y"
    { (yyval.strval) = "false"; }
    break;

  case 48:
#line 201 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 49:
#line 203 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 50:
#line 208 "coffee-music.y"
    { (yyval.strval) = concat_str(5, "case ", (yyvsp[(2) - (5)].strval), " : ", (yyvsp[(4) - (5)].strval) ,(yyvsp[(5) - (5)].strval)); }
    break;

  case 51:
#line 210 "coffee-music.y"
    { (yyval.strval) = concat_str(2, "default : \n", (yyvsp[(3) - (3)].strval)); }
    break;


/* Line 1267 of yacc.c.  */
#line 1781 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 214 "coffee-music.y"


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
