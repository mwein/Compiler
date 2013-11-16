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
     ENDLINE = 258,
     CASSIGN_ADD = 259,
     CASSIGN_SUB = 260,
     CASSIGN_MULT = 261,
     CASSIGN_DIV = 262,
     CASSIGN_MOD = 263,
     COMP_EQU = 264,
     COMP_NEQU = 265,
     COMP_LESS = 266,
     COMP_LTE = 267,
     COMP_GTR = 268,
     COMP_GTE = 269,
     BOOL_AND = 270,
     BOOL_OR = 271,
     COMMAND_PRINT = 272,
     COMMAND_IF = 273,
     COMMAND_ELSE = 274,
     COMMAND_WHILE = 275,
     COMMAND_BREAK = 276,
     COMMAND_RANDOM = 277,
     INT_LIT = 278,
     CHAR_LIT = 279,
     STRING_LIT = 280,
     TYPE = 281,
     META_TYPE = 282,
     ID = 283,
     UMINUS = 284,
     NOELSE = 285
   };
#endif
/* Tokens.  */
#define ENDLINE 258
#define CASSIGN_ADD 259
#define CASSIGN_SUB 260
#define CASSIGN_MULT 261
#define CASSIGN_DIV 262
#define CASSIGN_MOD 263
#define COMP_EQU 264
#define COMP_NEQU 265
#define COMP_LESS 266
#define COMP_LTE 267
#define COMP_GTR 268
#define COMP_GTE 269
#define BOOL_AND 270
#define BOOL_OR 271
#define COMMAND_PRINT 272
#define COMMAND_IF 273
#define COMMAND_ELSE 274
#define COMMAND_WHILE 275
#define COMMAND_BREAK 276
#define COMMAND_RANDOM 277
#define INT_LIT 278
#define CHAR_LIT 279
#define STRING_LIT 280
#define TYPE 281
#define META_TYPE 282
#define ID 283
#define UMINUS 284
#define NOELSE 285




/* Copy the first part of user declarations.  */
#line 1 "tube5.y"

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

#include "symbol_table.h"
#include "ast.h"
#include "type_info.h"

extern int line_num;
extern int yylex();
extern string out_filename;
 
symbolTable symbol_table;
int error_count = 0;

// Create an error function to call when the current line has an error
void yyerror(string err_string) {
  cout << "ERROR(line " << line_num << "): "
       << err_string << endl;
  error_count++;
}

// Create an alternate error function when a *different* line than being read in has an error.
void yyerror2(string err_string, int orig_line) {
  cout << "ERROR(line " << orig_line << "): "
       << err_string << endl;
  error_count++;
}



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
#line 36 "tube5.y"
{
  char * lexeme;
  ASTNode * ast_node;
  ASTNode_BaseChildren * ast_node_children;
}
/* Line 193 of yacc.c.  */
#line 197 "tube5-parser.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 210 "tube5-parser.tab.cc"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    34,     2,     2,
      39,    40,    32,    30,    43,    31,    37,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    36,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    12,    15,    18,    21,
      23,    25,    27,    30,    36,    40,    42,    47,    49,    51,
      55,    59,    63,    67,    71,    75,    79,    83,    87,    91,
      95,    99,   103,   107,   111,   115,   119,   123,   127,   130,
     133,   137,   139,   141,   143,   145,   147,   153,   160,   165,
     169,   171,   173,   176,   178,   183,   188,   193,   196,   199,
     201,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    -1,    48,    49,    -1,    50,
       3,    -1,    51,     3,    -1,    55,     3,    -1,    58,     3,
      -1,    61,    -1,    64,    -1,     3,    -1,    26,    28,    -1,
      27,    39,    26,    40,    28,    -1,    50,    29,    55,    -1,
      28,    -1,    52,    41,    55,    42,    -1,    52,    -1,    53,
      -1,    55,    30,    55,    -1,    55,    31,    55,    -1,    55,
      32,    55,    -1,    55,    33,    55,    -1,    55,    34,    55,
      -1,    55,     9,    55,    -1,    55,    10,    55,    -1,    55,
      11,    55,    -1,    55,    12,    55,    -1,    55,    13,    55,
      -1,    55,    14,    55,    -1,    55,    15,    55,    -1,    55,
      16,    55,    -1,    54,    29,    55,    -1,    54,     4,    55,
      -1,    54,     5,    55,    -1,    54,     6,    55,    -1,    54,
       7,    55,    -1,    54,     8,    55,    -1,    31,    55,    -1,
      35,    55,    -1,    39,    55,    40,    -1,    23,    -1,    24,
      -1,    25,    -1,    52,    -1,    53,    -1,    55,    37,    28,
      39,    40,    -1,    55,    37,    28,    39,    56,    40,    -1,
      22,    39,    55,    40,    -1,    56,    43,    57,    -1,    57,
      -1,    55,    -1,    17,    56,    -1,    21,    -1,    18,    39,
      55,    40,    -1,    20,    39,    55,    40,    -1,    59,    49,
      19,    49,    -1,    59,    49,    -1,    60,    49,    -1,    44,
      -1,    45,    -1,    62,    48,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    70,    73,    79,    80,    81,    82,    83,
      84,    85,    88,   112,   137,   143,   157,   163,   164,   167,
     171,   175,   179,   183,   187,   191,   195,   199,   203,   207,
     211,   215,   219,   223,   227,   231,   235,   239,   243,   247,
     251,   252,   256,   260,   264,   265,   266,   270,   278,   284,
     289,   297,   300,   306,   312,   318,   324,   329,   333,   339,
     340,   341
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDLINE", "CASSIGN_ADD", "CASSIGN_SUB",
  "CASSIGN_MULT", "CASSIGN_DIV", "CASSIGN_MOD", "COMP_EQU", "COMP_NEQU",
  "COMP_LESS", "COMP_LTE", "COMP_GTR", "COMP_GTE", "BOOL_AND", "BOOL_OR",
  "COMMAND_PRINT", "COMMAND_IF", "COMMAND_ELSE", "COMMAND_WHILE",
  "COMMAND_BREAK", "COMMAND_RANDOM", "INT_LIT", "CHAR_LIT", "STRING_LIT",
  "TYPE", "META_TYPE", "ID", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "UMINUS", "'.'", "NOELSE", "'('", "')'", "'['", "']'", "','",
  "'{'", "'}'", "$accept", "program", "statement_list", "statement",
  "var_declare", "declare_assign", "var_usage", "array_index", "lhs_ok",
  "expression", "argument_list", "argument", "command", "if_start",
  "while_start", "flow_command", "block_start", "block_end", "code_block", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    61,
      43,    45,    42,    47,    37,    33,   284,    46,   285,    40,
      41,    91,    93,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    52,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    58,    58,    59,    60,    61,    61,    61,    62,
      63,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     2,     2,     1,
       1,     1,     2,     5,     3,     1,     4,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     5,     6,     4,     3,
       1,     1,     2,     1,     4,     4,     4,     2,     2,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    11,     0,     0,     0,    53,     0,
      41,    42,    43,     0,     0,    15,     0,     0,     0,    59,
       4,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       9,     3,    10,    51,    52,    50,     0,     0,     0,    12,
       0,    38,    39,     0,     5,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
      57,    58,     0,     0,     0,     0,     0,     0,    40,    14,
       0,    33,    34,    35,    36,    37,    32,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    20,    21,    22,    23,
       0,     0,    60,    61,    49,    54,    55,    48,     0,    16,
       0,    56,    13,    46,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    20,    21,    22,    23,    24,    25,    26,
      34,    35,    27,    28,    29,    30,    31,   103,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
     -35,     3,    91,   -35,   -35,   336,   -29,   -19,   -35,   -18,
     -35,   -35,   -35,     2,   -16,   -35,   336,   336,   336,   -35,
     -35,     6,    31,     0,    10,    20,   128,    33,    91,    91,
     -35,   -35,   -35,   256,    -6,   -35,   336,   336,   336,   -35,
      12,    26,    26,   170,   -35,   336,   -35,   336,   336,   336,
     336,   336,   336,   336,   -35,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,    36,   -35,
      47,   -35,    62,   336,   181,   213,   224,    27,   -35,   256,
     136,   256,   256,   256,   256,   256,   256,   293,   293,   293,
     293,   293,   293,   301,   264,    38,    38,    26,    26,    26,
      30,    91,   -35,   -35,   -35,   -35,   -35,   -35,    45,   -35,
     317,   -35,   -35,   -35,   -21,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,    46,   -27,   -35,   -35,   -35,   -35,   -35,    -5,
     -34,     5,   -35,   -35,   -35,   -35,   -35,   -35,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -19
static const yytype_int8 yytable[] =
{
      33,    70,    71,     3,   -17,   -17,   -17,   -17,   -17,    44,
      36,    41,    42,    43,   -18,   -18,   -18,   -18,   -18,   115,
      37,    38,    73,    40,    48,    49,    50,    51,    52,   -17,
      39,    74,    75,    76,    46,    45,    69,    73,    77,   -18,
      79,    47,    80,    81,    82,    83,    84,    85,    86,    53,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    68,   100,     4,   101,   108,    33,   110,
      65,    66,    67,   112,   111,    68,   114,    72,   104,     5,
       6,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,    16,     4,     0,     0,    17,     0,     0,
       0,    18,     0,     0,     0,    33,    19,   102,     5,     6,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
      18,    54,     0,     0,     0,    19,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,     0,     0,    68,    63,    64,    65,    66,
      67,     0,     0,    68,     0,     0,     0,     0,   109,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
      63,    64,    65,    66,    67,     0,     0,    68,     0,     0,
      78,    63,    64,    65,    66,    67,     0,     0,    68,     0,
       0,   105,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,   106,    63,    64,    65,    66,    67,     0,
       0,    68,     0,     0,   107,    55,    56,    57,    58,    59,
      60,    61,    62,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,     0,     0,    68,    63,    64,    65,    66,    67,     0,
       0,    68,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,     0,     0,
      68,    63,    64,    65,    66,    67,     0,     0,    68,     9,
      10,    11,    12,     0,     0,    15,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,    18,   113,     9,    10,
      11,    12,     0,     0,    15,     0,     0,    16,     0,     0,
       0,    17,     0,     0,     0,    18
};

static const yytype_int8 yycheck[] =
{
       5,    28,    29,     0,     4,     5,     6,     7,     8,     3,
      39,    16,    17,    18,     4,     5,     6,     7,     8,    40,
      39,    39,    43,    39,     4,     5,     6,     7,     8,    29,
      28,    36,    37,    38,     3,    29,     3,    43,    26,    29,
      45,    41,    47,    48,    49,    50,    51,    52,    53,    29,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    37,    28,     3,    19,    40,    73,    39,
      32,    33,    34,    28,   101,    37,   110,    31,    73,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,     3,    -1,    -1,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,   110,    44,    45,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,     3,    -1,    -1,    -1,    44,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    37,    30,    31,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    30,    31,    32,    33,    34,    -1,    -1,    37,    -1,
      -1,    40,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    30,    31,    32,    33,    34,    -1,
      -1,    37,    -1,    -1,    40,     9,    10,    11,    12,    13,
      14,    15,    16,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    37,    30,    31,    32,    33,    34,    -1,
      -1,    37,     9,    10,    11,    12,    13,    14,    -1,    -1,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      37,    30,    31,    32,    33,    34,    -1,    -1,    37,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    48,     0,     3,    17,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    31,    35,    39,    44,
      49,    50,    51,    52,    53,    54,    55,    58,    59,    60,
      61,    62,    64,    55,    56,    57,    39,    39,    39,    28,
      39,    55,    55,    55,     3,    29,     3,    41,     4,     5,
       6,     7,     8,    29,     3,     9,    10,    11,    12,    13,
      14,    15,    16,    30,    31,    32,    33,    34,    37,     3,
      49,    49,    48,    43,    55,    55,    55,    26,    40,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      28,    19,    45,    63,    57,    40,    40,    40,    40,    42,
      39,    49,    28,    40,    56,    40
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
#line 62 "tube5.y"
    {
                 IC_Array ic_array;                         // Array to contain the intermediate code
                 (yyvsp[(1) - (1)].ast_node)->CompileTubeIC(symbol_table, ic_array); // Traverse AST, filling ic_array with code
                 ofstream out_file(out_filename.c_str());   // Open the output file
                 ic_array.PrintIC(out_file);                // Write IC to output file!
              ;}
    break;

  case 3:
#line 70 "tube5.y"
    {
	           (yyval.ast_node) = new ASTNode_Root;
                 ;}
    break;

  case 4:
#line 73 "tube5.y"
    {
                   if ((yyvsp[(2) - (2)].ast_node) != NULL) (yyvsp[(1) - (2)].ast_node)->AddChild((yyvsp[(2) - (2)].ast_node));
                   (yyval.ast_node) = (yyvsp[(1) - (2)].ast_node);
		 ;}
    break;

  case 5:
#line 79 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (2)].ast_node);  ;}
    break;

  case 6:
#line 80 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (2)].ast_node);  ;}
    break;

  case 7:
#line 81 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (2)].ast_node);  ;}
    break;

  case 8:
#line 82 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (2)].ast_node);  ;}
    break;

  case 9:
#line 83 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node_children);  ;}
    break;

  case 10:
#line 84 "tube5.y"
    {  (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node);  ;}
    break;

  case 11:
#line 85 "tube5.y"
    {  (yyval.ast_node) = NULL;  ;}
    break;

  case 12:
#line 88 "tube5.y"
    {
	          if (symbol_table.Lookup((yyvsp[(2) - (2)].lexeme)) != 0) {
		    string err_string = "re-defining variable '";
		    err_string += (yyvsp[(2) - (2)].lexeme);
                    err_string += "'";
                    yyerror(err_string);
		    exit(1);
                  }
		  string type_name = (yyvsp[(1) - (2)].lexeme);
		  int type_id = 0;
		  if (type_name == "int") type_id = Type::INT;
		  else if (type_name == "char") type_id = Type::CHAR;
		  else if (type_name == "string") type_id = Type::STRING;
		  else {
		    string err_string = "unknown type '";
		    err_string += (yyvsp[(1) - (2)].lexeme);
                    err_string += "'";
		    yyerror(err_string);
		  }
	          tableEntry * cur_entry = symbol_table.AddEntry(type_id, (yyvsp[(2) - (2)].lexeme));

	          (yyval.ast_node) = new ASTNode_Variable(cur_entry);
                  (yyval.ast_node)->SetLineNum(line_num);
	        ;}
    break;

  case 13:
#line 112 "tube5.y"
    {
	          if (symbol_table.Lookup((yyvsp[(5) - (5)].lexeme)) != 0) {
		    string err_string = "re-defining variable '";
		    err_string += (yyvsp[(5) - (5)].lexeme);
                    err_string += "'";
                    yyerror(err_string);
		    exit(1);
                  }
		  string type_name = (yyvsp[(3) - (5)].lexeme);
		  int type_id = 0;
		  if (type_name == "int") type_id = Type::INT_ARRAY;
		  else if (type_name == "char") type_id = Type::STRING;
		  else {
		    string err_string = "unknown type 'array(";
		    err_string += (yyvsp[(3) - (5)].lexeme);
                    err_string += ")'";
		    yyerror(err_string);
		  }
	          tableEntry * cur_entry = symbol_table.AddEntry(type_id, (yyvsp[(5) - (5)].lexeme));

	          (yyval.ast_node) = new ASTNode_Variable(cur_entry);
                  (yyval.ast_node)->SetLineNum(line_num);
	        ;}
    break;

  case 14:
#line 137 "tube5.y"
    {
	           (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node));
                   (yyval.ast_node)->SetLineNum(line_num);
	         ;}
    break;

  case 15:
#line 143 "tube5.y"
    {
	       tableEntry * cur_entry = symbol_table.Lookup((yyvsp[(1) - (1)].lexeme));
               if (cur_entry == NULL) {
		 string err_string = "unknown variable '";
		 err_string += (yyvsp[(1) - (1)].lexeme);
                 err_string += "'";
		 yyerror(err_string);
                 exit(1);
               }
	       (yyval.ast_node) = new ASTNode_Variable(cur_entry);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 16:
#line 157 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_ArrayAccess((yyvsp[(1) - (4)].ast_node), (yyvsp[(3) - (4)].ast_node));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 17:
#line 163 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node); ;}
    break;

  case 18:
#line 164 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node); ;}
    break;

  case 19:
#line 167 "tube5.y"
    { 
	       (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '+');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 20:
#line 171 "tube5.y"
    {
	       (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '-');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 21:
#line 175 "tube5.y"
    {
	       (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '*');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 22:
#line 179 "tube5.y"
    {
	       (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '/');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 23:
#line 183 "tube5.y"
    {
	       (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '%');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 24:
#line 187 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_EQU);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 25:
#line 191 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_NEQU);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 26:
#line 195 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_LESS);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 27:
#line 199 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_LTE);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 28:
#line 203 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_GTR);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 29:
#line 207 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), COMP_GTE);
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 30:
#line 211 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Bool2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '&');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 31:
#line 215 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Bool2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '|');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 32:
#line 219 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 33:
#line 223 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '+') );
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 34:
#line 227 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '-') );
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 35:
#line 231 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '*') );
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 36:
#line 235 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '/') );
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 37:
#line 239 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Assign((yyvsp[(1) - (3)].ast_node), new ASTNode_Math2((yyvsp[(1) - (3)].ast_node), (yyvsp[(3) - (3)].ast_node), '%') );
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 38:
#line 243 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math1((yyvsp[(2) - (2)].ast_node), '-');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 39:
#line 247 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Math1((yyvsp[(2) - (2)].ast_node), '!');
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 40:
#line 251 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(2) - (3)].ast_node); ;}
    break;

  case 41:
#line 252 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Literal(Type::INT, (yyvsp[(1) - (1)].lexeme));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 42:
#line 256 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Literal(Type::CHAR, (yyvsp[(1) - (1)].lexeme));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 43:
#line 260 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Literal(Type::STRING, (yyvsp[(1) - (1)].lexeme));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 44:
#line 264 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node); ;}
    break;

  case 45:
#line 265 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node); ;}
    break;

  case 46:
#line 266 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Method((yyvsp[(1) - (5)].ast_node), (yyvsp[(3) - (5)].lexeme));
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 47:
#line 270 "tube5.y"
    {
               ASTNode_Method * node = new ASTNode_Method((yyvsp[(1) - (6)].ast_node), (yyvsp[(3) - (6)].lexeme));
	       node->TransferChildren((ASTNode_VarChildren *) (yyvsp[(5) - (6)].ast_node));
	       delete (yyvsp[(5) - (6)].ast_node);
               node->TypeCheckArgs();
               (yyval.ast_node) = node;
               (yyval.ast_node)->SetLineNum(line_num);
             ;}
    break;

  case 48:
#line 278 "tube5.y"
    {
               (yyval.ast_node) = new ASTNode_Random((yyvsp[(3) - (4)].ast_node));
               (yyval.ast_node)->SetLineNum(line_num);
            ;}
    break;

  case 49:
#line 284 "tube5.y"
    {
		  ASTNode * node = (yyvsp[(1) - (3)].ast_node); // Grab the node used for arg list.
		  node->AddChild((yyvsp[(3) - (3)].ast_node));    // Save this argument in the node.
		  (yyval.ast_node) = node;
		;}
    break;

  case 50:
#line 289 "tube5.y"
    {
		  // Create a temporary AST node to hold the arg list.
		  (yyval.ast_node) = new ASTNode_TempNode(Type::VOID);
		  (yyval.ast_node)->AddChild((yyvsp[(1) - (1)].ast_node));   // Save this argument in the temp node.
                  (yyval.ast_node)->SetLineNum(line_num);
		;}
    break;

  case 51:
#line 297 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(1) - (1)].ast_node); ;}
    break;

  case 52:
#line 300 "tube5.y"
    {
	         (yyval.ast_node) = new ASTNode_Print(NULL);
	         (yyval.ast_node)->TransferChildren((ASTNode_VarChildren *) (yyvsp[(2) - (2)].ast_node));
             (yyval.ast_node)->SetLineNum(line_num);
	         delete (yyvsp[(2) - (2)].ast_node);
           ;}
    break;

  case 53:
#line 306 "tube5.y"
    {
             (yyval.ast_node) = new ASTNode_Break();
             (yyval.ast_node)->SetLineNum(line_num);
           ;}
    break;

  case 54:
#line 312 "tube5.y"
    {
             (yyval.ast_node_children) = new ASTNode_If((yyvsp[(3) - (4)].ast_node), NULL, NULL);
             (yyval.ast_node_children)->SetLineNum(line_num);
           ;}
    break;

  case 55:
#line 318 "tube5.y"
    {
                (yyval.ast_node_children) = new ASTNode_While((yyvsp[(3) - (4)].ast_node), NULL);
                (yyval.ast_node_children)->SetLineNum(line_num);
              ;}
    break;

  case 56:
#line 324 "tube5.y"
    {
                 (yyval.ast_node_children)->SetChild(1, (yyvsp[(2) - (4)].ast_node));
                 (yyval.ast_node_children)->SetChild(2, (yyvsp[(4) - (4)].ast_node));
                 (yyval.ast_node_children) = (yyvsp[(1) - (4)].ast_node_children);
               ;}
    break;

  case 57:
#line 329 "tube5.y"
    {
                 (yyval.ast_node_children) = (yyvsp[(1) - (2)].ast_node_children);
                 (yyval.ast_node_children)->SetChild(1, (yyvsp[(2) - (2)].ast_node));
               ;}
    break;

  case 58:
#line 333 "tube5.y"
    {
                 (yyval.ast_node_children) = (yyvsp[(1) - (2)].ast_node_children);
                 (yyval.ast_node_children)->SetChild(1, (yyvsp[(2) - (2)].ast_node));
               ;}
    break;

  case 59:
#line 339 "tube5.y"
    { symbol_table.IncScope(); ;}
    break;

  case 60:
#line 340 "tube5.y"
    { symbol_table.DecScope(); ;}
    break;

  case 61:
#line 341 "tube5.y"
    { (yyval.ast_node) = (yyvsp[(2) - (3)].ast_node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2048 "tube5-parser.tab.cc"
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


#line 343 "tube5.y"

void LexMain(int argc, char * argv[]);

int main(int argc, char * argv[])
{
  error_count = 0;
  LexMain(argc, argv);

  yyparse();

  if (error_count == 0) cout << "Parse Successful!" << endl;

  return 0;
}
