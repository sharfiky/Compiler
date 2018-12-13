/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/grammar.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>


#include <vector>
#include "RuleClasses/RuleClasses.h"
#include "Location/Location.h"


int yylex(void);
void yyerror(IProgram* root, const char *);
int yydebug = 1;
extern Location location;

extern "C" int yywrap()
{
        return 1;
}

#line 87 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_HOME_GREGORY_COMPILER_CMAKE_BUILD_DEBUG_PARSER_HPP_INCLUDED
# define YY_YY_HOME_GREGORY_COMPILER_CMAKE_BUILD_DEBUG_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 22 "src/grammar.y" /* yacc.c:355  */

	#include "RuleClasses/RuleClasses.h"
	#include <vector>
	#include <iostream>
	#include <deque>
	//#include "Visitors/PrettyPrinterVisitor.h"

#line 125 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_CLASS = 258,
    T_PUBLIC = 259,
    T_STATIC = 260,
    T_MAIN = 261,
    T_VOID = 262,
    T_INT = 263,
    T_BOOL = 264,
    T_IF = 265,
    T_ELSE = 266,
    T_RETURN = 267,
    T_LESS = 268,
    T_PRINTLN = 269,
    T_ASSIGN = 270,
    T_STRING = 271,
    T_AND = 272,
    T_NEW = 273,
    T_THIS = 274,
    T_LENGTH = 275,
    T_WHILE = 276,
    T_TRUE = 277,
    T_FALSE = 278,
    T_NUMBER = 279,
    T_ID = 280
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "src/grammar.y" /* yacc.c:355  */

    std::string* val;
    int intVal;
    bool boolVal;
    IProgram* programVal;
    IMainClass* mainClassDeclarationVal;
    std::vector<IClassDecl*>* classDeclarationListVal;
    IClassDecl* classDeclarationVal;
    std::vector<IVarDecl*>* variableDeclarationListVal;
    IVarDecl* variableDeclarationVal;
    IMethodDecl* methodDeclarationVal;
    std::vector<IMethodDecl*>* methodDeclarationListVal;
    IArg* argVal;
    std::vector<IArg*>* formalListVal;
    IStatement* statementVal;
    IType* typeVal;
    IExp* expressionVal;
    std::vector<IExp*>* expressionListVal;
    std::deque<IStatement*>* statementListVal;

#line 184 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (IProgram*& root);

#endif /* !YY_YY_HOME_GREGORY_COMPILER_CMAKE_BUILD_DEBUG_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,     2,     2,     2,
      27,    30,    38,    36,    33,    37,    40,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      35,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    31,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   115,   117,   123,   131,   142,   145,   151,
     154,   161,   163,   170,   179,   189,   192,   195,   198,   206,
     209,   212,   220,   225,   228,   231,   234,   237,   241,   248,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   278,
     281,   284,   288,   292,   295,   298,   301,   304,   309,   312,
     315,   320,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CLASS", "T_PUBLIC", "T_STATIC",
  "T_MAIN", "T_VOID", "T_INT", "T_BOOL", "T_IF", "T_ELSE", "T_RETURN",
  "T_LESS", "T_PRINTLN", "T_ASSIGN", "T_STRING", "T_AND", "T_NEW",
  "T_THIS", "T_LENGTH", "T_WHILE", "T_TRUE", "T_FALSE", "T_NUMBER", "T_ID",
  "'{'", "'('", "'['", "']'", "')'", "'}'", "';'", "','", "'='", "'<'",
  "'+'", "'-'", "'*'", "'/'", "'.'", "'!'", "$accept", "Program",
  "ClassDeclList", "MainClass", "ClassDecl", "VarDeclList",
  "StatementList", "MethodDeclList", "VarDecl", "MethodDecl", "Type",
  "ArgList", "Argument", "Statement", "Expression", "ExpressionList", "Id",
  "Number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   123,    40,    91,    93,
      41,   125,    59,    44,    61,    60,    43,    45,    42,    47,
      46,    33
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -20,    19,   -92,   -92,    14,   -92,    21,    35,   -20,
     -92,    45,    44,    64,   -92,    66,     9,    46,    48,   -92,
      -2,   -92,   -20,   -92,    67,    53,     9,   -92,   -92,    52,
      57,   -92,   -20,   -92,    58,    59,   -20,     9,    62,   -20,
     -26,   -92,    75,   -92,    76,     9,    90,   -92,   -92,    78,
      80,    83,    90,    82,    90,    -8,     2,    71,    71,    71,
      91,    99,   -92,    71,    71,   102,    -8,     5,   -92,   -92,
     -92,   -92,    71,    71,    71,    24,   -92,   -92,    89,   103,
     -92,   -92,   117,   130,    71,    93,   105,   143,   209,   209,
      71,    71,    90,    71,    71,    71,    71,    71,    12,   104,
      90,   101,   -92,   157,    71,   107,   -92,   209,   170,   133,
     209,   209,   209,   209,   209,   -92,   121,   -92,   -92,    71,
     118,   183,   -92,   -92,    90,    71,   196,   -92,   -92,   -92,
     209,    16,   -92,   -92,    71,   209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,    51,     0,     1,     2,     0,     0,
       4,     0,     0,     0,     7,     0,    11,     0,    17,    16,
       0,     8,     0,    18,     0,     0,     0,     6,    12,     0,
       0,    15,     0,    13,     0,     0,     0,    19,     0,     0,
       0,    20,     0,    22,     0,     0,     9,     7,    21,     0,
       0,     0,     9,     0,     9,     0,     9,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    18,     0,    43,    40,
      41,    52,     0,     0,     0,     0,    42,    39,     0,     0,
      23,     5,     0,     0,     0,     0,     0,     0,    33,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,    47,    29,     0,     0,
      30,    31,    32,    34,    35,    37,     0,    26,    25,     0,
       0,     0,    45,    36,     0,    48,     0,    14,    44,    24,
      49,     0,    28,    38,     0,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,   -92,   -92,   112,    13,   -92,   -92,   -92,
     -23,   -92,   106,   -91,   -16,   -92,    -1,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     3,    10,    16,    53,    20,    21,    28,
      22,    40,    41,    54,    75,   131,    76,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,   109,    26,    32,    44,     4,     1,    45,    12,   118,
      18,    19,    49,    85,    39,    23,    50,    18,    19,     6,
      63,    29,    39,    51,     9,    23,    64,     4,    52,    27,
       4,    35,   115,   129,     4,    38,    23,     4,    43,    11,
       8,    90,    78,    79,    23,    55,   133,    82,    83,   134,
      13,    55,    91,    55,    92,    66,    87,    88,    89,    93,
      94,    95,    96,    97,    98,    60,    86,    62,   103,    65,
      14,    15,    17,    24,   107,   108,    25,   110,   111,   112,
     113,   114,    31,    30,    33,    34,    37,    36,   121,    67,
      68,    55,    42,    69,    70,    71,     4,   116,    72,    55,
      49,    46,    47,   126,    50,    57,    90,    58,    73,   130,
      59,    51,    74,    61,    84,     4,    52,    91,   135,    99,
      90,   104,    80,    55,    93,    94,    95,    96,    97,    98,
      81,    91,   105,   100,    90,   119,   117,   122,    93,    94,
      95,    96,    97,    98,   124,    91,   101,    90,   125,   127,
       0,    48,    93,    94,    95,    96,    97,    98,    91,    56,
      90,     0,   102,     0,     0,    93,    94,    95,    96,    97,
      98,    91,     0,   106,    90,     0,     0,     0,    93,    94,
      95,    96,    97,    98,     0,    91,     0,    90,     0,   120,
       0,     0,    93,    94,    95,    96,    97,    98,    91,   123,
      90,     0,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    91,   128,    90,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    91,     0,    90,     0,   132,     0,
       0,    93,    94,    95,    96,    97,    98,    91,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
       1,    92,     4,    26,    30,    25,     3,    33,     9,   100,
       8,     9,    10,     8,    37,    16,    14,     8,     9,     0,
      28,    22,    45,    21,     3,    26,    34,    25,    26,    31,
      25,    32,    20,   124,    25,    36,    37,    25,    39,     4,
      26,    17,    58,    59,    45,    46,    30,    63,    64,    33,
       5,    52,    28,    54,    30,    56,    72,    73,    74,    35,
      36,    37,    38,    39,    40,    52,    67,    54,    84,    56,
      26,     7,     6,    27,    90,    91,    28,    93,    94,    95,
      96,    97,    29,    16,    32,    28,    27,    29,   104,    18,
      19,    92,    30,    22,    23,    24,    25,    98,    27,   100,
      10,    26,    26,   119,    14,    27,    17,    27,    37,   125,
      27,    21,    41,    31,    12,    25,    26,    28,   134,    30,
      17,    28,    31,   124,    35,    36,    37,    38,    39,    40,
      31,    28,    27,    30,    17,    34,    32,    30,    35,    36,
      37,    38,    39,    40,    11,    28,    29,    17,    27,    31,
      -1,    45,    35,    36,    37,    38,    39,    40,    28,    47,
      17,    -1,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    28,    -1,    30,    17,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    28,    -1,    17,    -1,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    28,    29,
      17,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    28,    29,    17,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    28,    -1,    17,    -1,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,    45,    25,    58,     0,    44,    26,     3,
      46,     4,    58,     5,    26,     7,    47,     6,     8,     9,
      49,    50,    52,    58,    27,    28,     4,    31,    51,    58,
      16,    29,    52,    32,    28,    58,    29,    27,    58,    52,
      53,    54,    30,    58,    30,    33,    26,    26,    54,    10,
      14,    21,    26,    48,    55,    58,    47,    27,    27,    27,
      48,    31,    48,    28,    34,    48,    58,    18,    19,    22,
      23,    24,    27,    37,    41,    56,    58,    59,    56,    56,
      31,    31,    56,    56,    12,     8,    58,    56,    56,    56,
      17,    28,    30,    35,    36,    37,    38,    39,    40,    30,
      30,    29,    32,    56,    28,    27,    30,    56,    56,    55,
      56,    56,    56,    56,    56,    20,    58,    32,    55,    34,
      32,    56,    30,    29,    11,    27,    56,    31,    29,    55,
      56,    57,    32,    30,    33,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    47,    47,    48,
      48,    49,    49,    50,    51,    52,    52,    52,    52,    53,
      53,    53,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    58,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,    17,     6,     0,     2,     0,
       2,     0,     2,     3,    13,     3,     1,     1,     1,     0,
       1,     3,     2,     3,     7,     5,     5,     4,     7,     3,
       3,     3,     3,     2,     3,     3,     4,     3,     6,     1,
       1,     1,     1,     1,     5,     4,     2,     3,     0,     1,
       3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (root, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, IProgram*& root)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (root);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, IProgram*& root)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, root);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, IProgram*& root)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, root); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, IProgram*& root)
{
  YYUSE (yyvaluep);
  YYUSE (root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (IProgram*& root)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 108 "src/grammar.y" /* yacc.c:1646  */
    {
        printf("kek");
        root = new CProgram((yyvsp[-1].mainClassDeclarationVal), *(yyvsp[0].classDeclarationListVal));
    }
#line 1390 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 115 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.classDeclarationListVal) = new std::vector<IClassDecl *>();
    }
#line 1398 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 117 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyvsp[-1].classDeclarationListVal)->push_back((yyvsp[0].classDeclarationVal));
        (yyval.classDeclarationListVal) = (yyvsp[-1].classDeclarationListVal);
    }
#line 1407 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 124 "src/grammar.y" /* yacc.c:1646  */
    {

        std::cerr<<"mainClass\n";
        (yyval.mainClassDeclarationVal) = new CMainClass( *(yyvsp[-15].val), *(yyvsp[-5].val), *(yyvsp[-2].statementListVal));
    }
#line 1417 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.classDeclarationVal) = new CClassDecl(*(yyvsp[-4].val), *(yyvsp[-2].variableDeclarationListVal), *(yyvsp[-1].methodDeclarationListVal));
    }
#line 1425 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 142 "src/grammar.y" /* yacc.c:1646  */
    {
        std::cerr<<"VarDecllist\n";
        (yyval.variableDeclarationListVal) = new std::vector<IVarDecl *>();
    }
#line 1434 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyvsp[-1].variableDeclarationListVal)->push_back((yyvsp[0].variableDeclarationVal));
        (yyval.variableDeclarationListVal) = (yyvsp[-1].variableDeclarationListVal);
    }
#line 1443 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 151 "src/grammar.y" /* yacc.c:1646  */
    {
        std::cerr<<"Empty statement List\n";
        (yyval.statementListVal) = new std::deque<IStatement *> ();
    }
#line 1452 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyvsp[0].statementListVal)->push_front((yyvsp[-1].statementVal));
        (yyval.statementListVal) = (yyvsp[0].statementListVal);
    }
#line 1461 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.methodDeclarationListVal) = new std::vector<IMethodDecl*>();
    }
#line 1469 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 163 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyvsp[-1].methodDeclarationListVal)->push_back((yyvsp[0].methodDeclarationVal));
        (yyval.methodDeclarationListVal) = (yyvsp[-1].methodDeclarationListVal);
    }
#line 1478 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "src/grammar.y" /* yacc.c:1646  */
    {

        std::cerr<<"VarDecl\n"<<"\n";
        (yyval.variableDeclarationVal) = new CVarDecl((yyvsp[-2].typeVal), *(yyvsp[-1].val));
    }
#line 1488 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 183 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.methodDeclarationVal) = new CMethodDecl((yyvsp[-11].typeVal), *(yyvsp[-10].val), *(yyvsp[-8].formalListVal), *(yyvsp[-5].variableDeclarationListVal), *(yyvsp[-4].statementListVal), (yyvsp[-2].expressionVal));
    }
#line 1496 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.typeVal) = new CStandardType( CStandardType::StandardType::INT_ARRAY);
    }
#line 1504 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.typeVal) = new CStandardType( CStandardType::StandardType::BOOL);
    }
#line 1512 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.typeVal) = new CStandardType( CStandardType::StandardType::INT );
    }
#line 1520 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.typeVal) = new CUserType( *(yyvsp[0].val));
    }
#line 1528 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.formalListVal) = new std::vector<IArg*>();
    }
#line 1536 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 209 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.formalListVal) = new std::vector<IArg*>(1, (yyvsp[0].argVal));
    }
#line 1544 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 212 "src/grammar.y" /* yacc.c:1646  */
    {
        std::cerr<<"ArgList\n";
        (yyvsp[-2].formalListVal)->push_back((yyvsp[0].argVal));
        (yyval.formalListVal) = (yyvsp[-2].formalListVal);
     }
#line 1554 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 220 "src/grammar.y" /* yacc.c:1646  */
    { (yyval.argVal) = new CArg((yyvsp[-1].typeVal), *(yyvsp[0].val));}
#line 1560 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 225 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.statementVal) = new CStatementListStatement( *(yyvsp[-1].statementListVal));
	}
#line 1568 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.statementVal) = new CIfStatement( (yyvsp[-4].expressionVal), (yyvsp[-2].statementVal), (yyvsp[0].statementVal));
	}
#line 1576 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 231 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.statementVal) = new CWhileStatement( (yyvsp[-2].expressionVal), (yyvsp[0].statementVal));
	}
#line 1584 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 234 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.statementVal) = new CPrintStatement( (yyvsp[-2].expressionVal));
	}
#line 1592 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 237 "src/grammar.y" /* yacc.c:1646  */
    {
	    std::cerr<<"ex=ex"<<"\n";
		(yyval.statementVal) = new CAssignStatement( *(yyvsp[-3].val), (yyvsp[-1].expressionVal));
	}
#line 1601 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 241 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.statementVal) = new CArrayAssignStatement( *(yyvsp[-6].val), (yyvsp[-4].expressionVal), (yyvsp[-1].expressionVal));

}
#line 1610 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 248 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::AND, (yyvsp[0].expressionVal));
	}
#line 1618 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 251 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::LESS, (yyvsp[0].expressionVal));
	}
#line 1626 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::PLUS, (yyvsp[0].expressionVal));
	}
#line 1634 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 257 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::MINUS, (yyvsp[0].expressionVal));
	}
#line 1642 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 260 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CUnaryOpExpression( CUnaryOpExpression::UnaryOp::MINUS, (yyvsp[0].expressionVal));
	}
#line 1650 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 263 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::TIMES, (yyvsp[0].expressionVal));
	}
#line 1658 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 266 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBinOpExpression( (yyvsp[-2].expressionVal), CBinOpExpression::BinOp::DIVIDE, (yyvsp[0].expressionVal));
	}
#line 1666 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 269 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CIndexExpression( (yyvsp[-3].expressionVal), (yyvsp[-1].expressionVal));
	}
#line 1674 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 272 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CLenghtExpression( (yyvsp[-2].expressionVal));
	}
#line 1682 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 275 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CMethodExpression( (yyvsp[-5].expressionVal), *(yyvsp[-3].val), *(yyvsp[-1].expressionListVal));
	}
#line 1690 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 278 "src/grammar.y" /* yacc.c:1646  */
    {
	    (yyval.expressionVal) = new CIntLiteralExpression((yyvsp[0].intVal));
	}
#line 1698 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 281 "src/grammar.y" /* yacc.c:1646  */
    {
	    (yyval.expressionVal) = new CBoolLiteralExpression(true);
	}
#line 1706 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 284 "src/grammar.y" /* yacc.c:1646  */
    {
	    (yyval.expressionVal) = new CBoolLiteralExpression(false);
	}
#line 1714 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 288 "src/grammar.y" /* yacc.c:1646  */
    {
	    std::cerr<<"expr-id"<<"\n";
		(yyval.expressionVal) = new CIdentifierExpression( *(yyvsp[0].val));
	}
#line 1723 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 292 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CThisExpression( );
	}
#line 1731 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 295 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CNewIntArrayExpression( (yyvsp[-1].expressionVal) );
	}
#line 1739 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 298 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CNewExpression( *(yyvsp[-2].val));
	}
#line 1747 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 301 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CUnaryOpExpression( CUnaryOpExpression::UnaryOp::NOT, (yyvsp[0].expressionVal));
	}
#line 1755 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 304 "src/grammar.y" /* yacc.c:1646  */
    {
		(yyval.expressionVal) = new CBracesExpression( (yyvsp[-1].expressionVal));
}
#line 1763 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 309 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.expressionListVal) = new std::vector<IExp*>();
    }
#line 1771 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 312 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.expressionListVal) = new std::vector<IExp*>(1, (yyvsp[0].expressionVal));
    }
#line 1779 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 315 "src/grammar.y" /* yacc.c:1646  */
    {
            (yyvsp[-2].expressionListVal)->push_back((yyvsp[0].expressionVal));
    		(yyval.expressionListVal) = (yyvsp[-2].expressionListVal);
    }
#line 1788 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 320 "src/grammar.y" /* yacc.c:1646  */
    {
        std::cerr<<"ID:" << *(yyvsp[0].val)<<"\n";
        (yyval.val) = (yyvsp[0].val);
    }
#line 1797 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 325 "src/grammar.y" /* yacc.c:1646  */
    {
        (yyval.intVal) = (yyvsp[0].intVal);
    }
#line 1805 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
    break;


#line 1809 "/home/gregory/Compiler/cmake-build-debug/parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (root, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (root, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, root);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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
                  yystos[yystate], yyvsp, root);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (root, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, root);
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
  return yyresult;
}
#line 328 "src/grammar.y" /* yacc.c:1906  */


void yyerror(IProgram * root, const char *s)
{
	std::cerr <<"ERROR: " << s <<"\n";
	std::cerr << location.lineNumber<<":"<<location.firstColumn<<"\n";
}
