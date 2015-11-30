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
     MAIN_TOKEN = 265,
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
     NOT_TOKEN = 282,
     NE_TOKEN = 283,
     ASSIGN_TOKEN = 284,
     GT_TOKEN = 285,
     LT_TOKEN = 286,
     GE_TOKEN = 287,
     LE_TOKEN = 288,
     EQ_TOKEN = 289,
     OPEN_PARENTHESIS_TOKEN = 290,
     CLOSE_PARENTHESIS_TOKEN = 291,
     OPEN_BRACKET_TOKEN = 292,
     CLOSE_BRACKET_TOKEN = 293,
     COLON_TOKEN = 294,
     SEMICOLON_TOKEN = 295,
     COMMA_TOKEN = 296,
     WRITE_TOKEN = 297
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
#define MAIN_TOKEN 265
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
#define NOT_TOKEN 282
#define NE_TOKEN 283
#define ASSIGN_TOKEN 284
#define GT_TOKEN 285
#define LT_TOKEN 286
#define GE_TOKEN 287
#define LE_TOKEN 288
#define EQ_TOKEN 289
#define OPEN_PARENTHESIS_TOKEN 290
#define CLOSE_PARENTHESIS_TOKEN 291
#define OPEN_BRACKET_TOKEN 292
#define CLOSE_BRACKET_TOKEN 293
#define COLON_TOKEN 294
#define SEMICOLON_TOKEN 295
#define COMMA_TOKEN 296
#define WRITE_TOKEN 297




/* Copy the first part of user declarations.  */
#line 1 "coffee-music.y"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

void yyerror(const char *str)
{
  exit(1);
}
char* concat_str(int argc, ...);




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 65 "coffee-music.y"
{
   char* strval;
}
/* Line 193 of yacc.c.  */
#line 201 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "y.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    21,    25,
      28,    34,    40,    47,    58,    65,    74,    83,    92,    96,
     103,   110,   111,   115,   119,   120,   122,   124,   126,   128,
     136,   144,   152,   160,   168,   176,   184,   192,   200,   208,
     216,   218,   220,   224,   228,   232,   234,   236,   238,   240,
     246
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    10,    49,    -1,    47,    40,
      -1,     6,     3,    -1,     7,     3,    -1,    37,    50,    38,
      -1,    37,    50,    38,    -1,    46,    50,    -1,    47,    29,
      52,    40,    50,    -1,     3,    29,    52,    40,    50,    -1,
      15,    35,    55,    36,    48,    50,    -1,    13,    35,    51,
      40,    55,    40,    51,    36,    48,    50,    -1,    11,    35,
      55,    36,    48,    50,    -1,    11,    35,    55,    36,    48,
      12,    48,    50,    -1,    16,    35,    57,    36,    37,    58,
      38,    50,    -1,    14,    48,    15,    35,    55,    36,    40,
      50,    -1,    19,    40,    50,    -1,    42,    35,     3,    36,
      40,    50,    -1,    42,    35,     4,    36,    40,    50,    -1,
      -1,     3,    29,    52,    -1,    51,    41,    51,    -1,    -1,
      55,    -1,    53,    -1,     4,    -1,    57,    -1,    35,    53,
      36,    22,    35,    53,    36,    -1,    35,    53,    36,    23,
      35,    53,    36,    -1,    35,    53,    36,    24,    35,    53,
      36,    -1,    35,    53,    36,    20,    35,    53,    36,    -1,
      35,    53,    36,    21,    35,    53,    36,    -1,    35,    53,
      36,    31,    35,    53,    36,    -1,    35,    53,    36,    30,
      35,    53,    36,    -1,    35,    53,    36,    33,    35,    53,
      36,    -1,    35,    53,    36,    32,    35,    53,    36,    -1,
      35,    53,    36,    34,    35,    53,    36,    -1,    35,    53,
      36,    28,    35,    53,    36,    -1,    56,    -1,    54,    -1,
      55,    25,    55,    -1,    55,    26,    55,    -1,    35,    55,
      36,    -1,     8,    -1,     9,    -1,     3,    -1,     5,    -1,
      17,    52,    39,    48,    58,    -1,    18,    39,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    79,    84,    89,    91,    97,   102,   107,
     109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   132,   136,   138,   141,   145,   147,   149,   154,   156,
     158,   160,   162,   164,   169,   171,   173,   175,   177,   179,
     184,   186,   188,   190,   192,   197,   199,   204,   206,   211,
     213
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "MUSIC", "NUMBER", "TYPE",
  "MUSIC_TYPE", "TRUE_TOKEN", "FALSE_TOKEN", "MAIN_TOKEN", "IF_TOKEN",
  "ELSE_TOKEN", "FOR_TOKEN", "DO_TOKEN", "WHILE_TOKEN", "SWITCH_TOKEN",
  "CASE_TOKEN", "DEFAULT_TOKEN", "BREAK_TOKEN", "PLUS_TOKEN",
  "MINUS_TOKEN", "MULT_TOKEN", "DIV_TOKEN", "MOD_TOKEN", "AND_TOKEN",
  "OR_TOKEN", "NOT_TOKEN", "NE_TOKEN", "ASSIGN_TOKEN", "GT_TOKEN",
  "LT_TOKEN", "GE_TOKEN", "LE_TOKEN", "EQ_TOKEN", "OPEN_PARENTHESIS_TOKEN",
  "CLOSE_PARENTHESIS_TOKEN", "OPEN_BRACKET_TOKEN", "CLOSE_BRACKET_TOKEN",
  "COLON_TOKEN", "SEMICOLON_TOKEN", "COMMA_TOKEN", "WRITE_TOKEN",
  "$accept", "Program", "Main", "Variables", "Variable", "Block",
  "MainBlock", "Content", "ForExpression", "Expression",
  "ArithmeticalExpression", "RelationalExpression", "LogicalExpression",
  "BooleanValue", "Termin", "Cases", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    46,    47,    47,    48,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    57,    57,    58,
      58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     3,     3,     2,
       5,     5,     6,    10,     6,     8,     8,     8,     3,     6,
       6,     0,     3,     3,     0,     1,     1,     1,     1,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       1,     1,     3,     3,     3,     1,     1,     1,     1,     5,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    21,     3,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     5,     6,     0,    24,    21,     0,     0,     0,    21,
       0,     9,     0,     4,     8,    47,    27,    48,    45,    46,
       0,     0,    26,    41,    25,    40,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,    24,     7,
       0,     0,     0,     0,     0,    21,     0,    44,    11,    42,
      43,     0,    21,    22,     0,    23,     0,    21,     0,    21,
      21,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    24,     0,    12,     0,     0,
       0,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    21,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    17,     0,    50,    16,     0,    32,
      33,    29,    30,    31,    39,    35,    34,    37,    36,    38,
      21,     0,     0,    13,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    17,    18,    26,     5,    19,    50,    41,
      42,    43,    44,    45,    46,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
       0,   -15,    26,   -68,   107,   -68,   -68,     6,    38,    43,
      17,    22,    27,    24,    36,    54,    53,   107,   -24,    68,
      58,   -68,   -68,    60,    93,   107,   104,    60,    48,   107,
      52,   -68,    58,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
      10,    84,   -68,   -68,    73,   -68,   -68,    10,    61,    96,
      62,    70,   100,    75,   101,   -68,   109,   110,   121,   111,
      79,   107,    60,    60,   124,    27,    58,    60,    93,   -68,
      60,    27,   125,   123,   126,   107,   108,   -68,   -68,   -68,
     -68,   120,    18,   -68,    14,   -68,    91,   107,   116,   107,
     107,   -68,   129,   130,   132,   133,   134,   136,   137,   138,
     139,   140,   141,    27,   -68,    93,   142,   -68,    58,   105,
     143,   -68,   -68,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,   107,   -13,   107,   131,    27,   107,
       1,   144,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   -68,    27,   -68,    27,   -68,   -68,   157,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     107,   116,   135,   -68,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   -68,   -68,   -54,   -68,   -17,   -67,   -18,
     -38,   -68,   -20,   -68,   166,    16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    85,    59,    48,    35,    32,    37,    53,    51,    64,
       1,    82,    55,    35,    58,    37,    33,    87,    38,    39,
      60,     7,     4,   143,     8,     9,     6,    60,    68,    10,
     103,    11,    12,    13,    14,    20,   130,    15,   125,    62,
      63,    21,    79,    80,    78,    40,    22,    84,    83,   124,
      86,    35,    23,    37,   105,    56,    57,    24,    91,    27,
      16,    35,    36,    37,    25,   104,    38,    39,    38,    39,
     107,    28,   111,   112,   146,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,    62,    63,    30,   160,
     127,   161,   148,    40,    29,    47,    49,    65,    62,    63,
      62,    63,    67,    68,    62,    63,    34,   142,    69,   144,
       7,    71,   147,     8,     9,    77,    62,    63,    10,    52,
      11,    12,    13,    14,    61,    66,    15,   106,    92,    93,
      94,    95,    96,   108,   109,    70,    97,    72,    98,    99,
     100,   101,   102,   163,   128,    73,    74,    76,    97,    16,
      98,    99,   100,   101,   102,    92,    93,    94,    95,    96,
      81,    75,    88,    89,   113,   114,    90,   115,   116,   117,
     145,   118,   119,   120,   121,   122,   123,   164,     0,     0,
     149,   129,   126,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   162,    54
};

static const yytype_int16 yycheck[] =
{
      17,    68,    40,    23,     3,    29,     5,    27,    25,    47,
      10,    65,    29,     3,    32,     5,    40,    71,     8,     9,
      40,     3,    37,    36,     6,     7,     0,    47,    41,    11,
      12,    13,    14,    15,    16,    29,    35,    19,   105,    25,
      26,     3,    62,    63,    61,    35,     3,    67,    66,   103,
      70,     3,    35,     5,    40,     3,     4,    35,    75,    35,
      42,     3,     4,     5,    37,    82,     8,     9,     8,     9,
      87,    35,    89,    90,   128,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    25,    26,    35,   143,
     108,   145,   130,    35,    40,    35,     3,    36,    25,    26,
      25,    26,    40,    41,    25,    26,    38,   124,    38,   126,
       3,    36,   129,     6,     7,    36,    25,    26,    11,    15,
      13,    14,    15,    16,    40,    29,    19,    36,    20,    21,
      22,    23,    24,    17,    18,    35,    28,    36,    30,    31,
      32,    33,    34,   160,    39,    36,    36,    36,    28,    42,
      30,    31,    32,    33,    34,    20,    21,    22,    23,    24,
      36,    40,    37,    40,    35,    35,    40,    35,    35,    35,
      39,    35,    35,    35,    35,    35,    35,   161,    -1,    -1,
      36,    38,    40,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    44,    45,    37,    49,     0,     3,     6,     7,
      11,    13,    14,    15,    16,    19,    42,    46,    47,    50,
      29,     3,     3,    35,    35,    37,    48,    35,    35,    40,
      35,    50,    29,    40,    38,     3,     4,     5,     8,     9,
      35,    52,    53,    54,    55,    56,    57,    35,    55,     3,
      51,    50,    15,    55,    57,    50,     3,     4,    52,    53,
      55,    40,    25,    26,    53,    36,    29,    40,    41,    38,
      35,    36,    36,    36,    36,    40,    36,    36,    50,    55,
      55,    36,    48,    52,    55,    51,    55,    48,    37,    40,
      40,    50,    20,    21,    22,    23,    24,    28,    30,    31,
      32,    33,    34,    12,    50,    40,    36,    50,    17,    18,
      58,    50,    50,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    48,    51,    40,    52,    39,    38,
      35,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    50,    36,    50,    39,    48,    50,    53,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      48,    48,    36,    50,    58
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
#line 75 "coffee-music.y"
    { printf("%s\n", (yyvsp[(1) - (1)].strval)); }
    break;

  case 3:
#line 80 "coffee-music.y"
    { (yyval.strval) = concat_str(2, "int main(void) ",(yyvsp[(2) - (2)].strval)); }
    break;

  case 4:
#line 85 "coffee-music.y"
    { (yyval.strval) = concat_str(2, (yyvsp[(1) - (2)].strval), ";\n"); }
    break;

  case 5:
#line 90 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, (yyvsp[(1) - (2)].strval), " ", (yyvsp[(2) - (2)].strval)); }
    break;

  case 6:
#line 92 "coffee-music.y"
    { (yyval.strval) = concat_str( 2, "char* ", (yyvsp[(2) - (2)].strval));}
    break;

  case 7:
#line 98 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "{\n", (yyvsp[(2) - (3)].strval), "\n}"); }
    break;

  case 8:
#line 103 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "{\n FILE * music = wavfile_open(\"ec1150e.wav\");\n", (yyvsp[(2) - (3)].strval), "\n wavfile_close(music); \n return 0;\n}"); }
    break;

  case 9:
#line 108 "coffee-music.y"
    { (yyval.strval) = concat_str( 2, (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval)); }
    break;

  case 10:
#line 110 "coffee-music.y"
    { (yyval.strval) = concat_str( 5, (yyvsp[(1) - (5)].strval), " = ", (yyvsp[(3) - (5)].strval), ";\n", (yyvsp[(5) - (5)].strval)); }
    break;

  case 11:
#line 112 "coffee-music.y"
    { (yyval.strval) = concat_str( 5, (yyvsp[(1) - (5)].strval), " = ", (yyvsp[(3) - (5)].strval), ";\n", (yyvsp[(5) - (5)].strval)); }
    break;

  case 12:
#line 114 "coffee-music.y"
    { (yyval.strval) = concat_str( 6,"while ( ", (yyvsp[(3) - (6)].strval), " )\n", (yyvsp[(5) - (6)].strval), "\n", (yyvsp[(6) - (6)].strval)); }
    break;

  case 13:
#line 116 "coffee-music.y"
    { (yyval.strval) = concat_str( 10, "for ( ", (yyvsp[(3) - (10)].strval), " ; ", (yyvsp[(5) - (10)].strval), " ; ", (yyvsp[(7) - (10)].strval), " )\n", (yyvsp[(9) - (10)].strval), "\n", (yyvsp[(10) - (10)].strval)); }
    break;

  case 14:
#line 118 "coffee-music.y"
    { (yyval.strval) = concat_str( 6, "if ( ", (yyvsp[(3) - (6)].strval), " )\n", (yyvsp[(5) - (6)].strval), "\n", (yyvsp[(6) - (6)].strval)) ; }
    break;

  case 15:
#line 120 "coffee-music.y"
    { (yyval.strval) = concat_str( 9, "if ( ",  (yyvsp[(3) - (8)].strval), " )\n", (yyvsp[(5) - (8)].strval), "\n", "else\n", (yyvsp[(7) - (8)].strval) , "\n", (yyvsp[(8) - (8)].strval)); }
    break;

  case 16:
#line 122 "coffee-music.y"
    { (yyval.strval) = concat_str( 6, "switch ( ", (yyvsp[(3) - (8)].strval), " )\n{\n", (yyvsp[(6) - (8)].strval), "\n}", (yyvsp[(8) - (8)].strval)); }
    break;

  case 17:
#line 124 "coffee-music.y"
    { (yyval.strval) = concat_str( 7, "do\n", (yyvsp[(2) - (8)].strval), "\n", "while ( ", (yyvsp[(5) - (8)].strval), " );\n", (yyvsp[(8) - (8)].strval)); }
    break;

  case 18:
#line 126 "coffee-music.y"
    { (yyval.strval) = "break;\n"; }
    break;

  case 19:
#line 128 "coffee-music.y"
    { (yyval.strval) = concat_str( 4, "wavfile_write_music( music, ", (yyvsp[(3) - (6)].strval), ");\n",(yyvsp[(6) - (6)].strval));}
    break;

  case 20:
#line 130 "coffee-music.y"
    { (yyval.strval) = concat_str( 4, "wavfile_write_music( music, \"", (yyvsp[(3) - (6)].strval), "\");\n",(yyvsp[(6) - (6)].strval));}
    break;

  case 21:
#line 132 "coffee-music.y"
    { (yyval.strval) = ""; }
    break;

  case 22:
#line 137 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, (yyvsp[(1) - (3)].strval), " = ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 23:
#line 139 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, (yyvsp[(1) - (3)].strval), ", " , (yyvsp[(3) - (3)].strval)); }
    break;

  case 24:
#line 141 "coffee-music.y"
    { (yyval.strval) = ""; }
    break;

  case 25:
#line 146 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 26:
#line 148 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 27:
#line 150 "coffee-music.y"
    { (yyval.strval) = concat_str(3, "\"", (yyvsp[(1) - (1)].strval), "\""); }
    break;

  case 28:
#line 155 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 29:
#line 157 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " * ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 30:
#line 159 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " / ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 31:
#line 161 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " % ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 32:
#line 163 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " + ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 33:
#line 165 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " - ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 34:
#line 170 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " < ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 35:
#line 172 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " > ", "( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 36:
#line 174 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " <= ","( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 37:
#line 176 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " >= ","( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 38:
#line 178 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " == ","( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 39:
#line 180 "coffee-music.y"
    { (yyval.strval) = concat_str(7, "( ", (yyvsp[(2) - (7)].strval), " )", " != ","( ", (yyvsp[(6) - (7)].strval), " )"); }
    break;

  case 40:
#line 185 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 41:
#line 187 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 42:
#line 189 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " && ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 43:
#line 191 "coffee-music.y"
    { (yyval.strval) = concat_str(3, (yyvsp[(1) - (3)].strval), " || ", (yyvsp[(3) - (3)].strval)); }
    break;

  case 44:
#line 193 "coffee-music.y"
    { (yyval.strval) = concat_str( 3, "( ", (yyvsp[(2) - (3)].strval), " )"); }
    break;

  case 45:
#line 198 "coffee-music.y"
    { (yyval.strval) = "1"; }
    break;

  case 46:
#line 200 "coffee-music.y"
    { (yyval.strval) = "0"; }
    break;

  case 47:
#line 205 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 48:
#line 207 "coffee-music.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); }
    break;

  case 49:
#line 212 "coffee-music.y"
    { (yyval.strval) = concat_str(5, "case ", (yyvsp[(2) - (5)].strval), " : ", (yyvsp[(4) - (5)].strval) ,(yyvsp[(5) - (5)].strval)); }
    break;

  case 50:
#line 214 "coffee-music.y"
    { (yyval.strval) = concat_str(2, "default : \n", (yyvsp[(3) - (3)].strval)); }
    break;


/* Line 1267 of yacc.c.  */
#line 1789 "y.tab.c"
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


#line 218 "coffee-music.y"


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
   int yydebug = 1;
   yyparse();
}

