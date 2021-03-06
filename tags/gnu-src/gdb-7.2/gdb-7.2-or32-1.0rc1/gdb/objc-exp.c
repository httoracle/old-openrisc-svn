/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     INT = 258,
     FLOAT = 259,
     STRING = 260,
     NSSTRING = 261,
     SELECTOR = 262,
     NAME = 263,
     TYPENAME = 264,
     CLASSNAME = 265,
     NAME_OR_INT = 266,
     STRUCT = 267,
     CLASS = 268,
     UNION = 269,
     ENUM = 270,
     SIZEOF = 271,
     UNSIGNED = 272,
     COLONCOLON = 273,
     TEMPLATE = 274,
     ERROR = 275,
     SIGNED_KEYWORD = 276,
     LONG = 277,
     SHORT = 278,
     INT_KEYWORD = 279,
     CONST_KEYWORD = 280,
     VOLATILE_KEYWORD = 281,
     DOUBLE_KEYWORD = 282,
     VARIABLE = 283,
     ASSIGN_MODIFY = 284,
     ABOVE_COMMA = 285,
     OROR = 286,
     ANDAND = 287,
     NOTEQUAL = 288,
     EQUAL = 289,
     GEQ = 290,
     LEQ = 291,
     RSH = 292,
     LSH = 293,
     DECREMENT = 294,
     INCREMENT = 295,
     UNARY = 296,
     ARROW = 297,
     BLOCKNAME = 298
   };
#endif
#define INT 258
#define FLOAT 259
#define STRING 260
#define NSSTRING 261
#define SELECTOR 262
#define NAME 263
#define TYPENAME 264
#define CLASSNAME 265
#define NAME_OR_INT 266
#define STRUCT 267
#define CLASS 268
#define UNION 269
#define ENUM 270
#define SIZEOF 271
#define UNSIGNED 272
#define COLONCOLON 273
#define TEMPLATE 274
#define ERROR 275
#define SIGNED_KEYWORD 276
#define LONG 277
#define SHORT 278
#define INT_KEYWORD 279
#define CONST_KEYWORD 280
#define VOLATILE_KEYWORD 281
#define DOUBLE_KEYWORD 282
#define VARIABLE 283
#define ASSIGN_MODIFY 284
#define ABOVE_COMMA 285
#define OROR 286
#define ANDAND 287
#define NOTEQUAL 288
#define EQUAL 289
#define GEQ 290
#define LEQ 291
#define RSH 292
#define LSH 293
#define DECREMENT 294
#define INCREMENT 295
#define UNARY 296
#define ARROW 297
#define BLOCKNAME 298




/* Copy the first part of user declarations.  */
#line 35 "objc-exp.y"


#include "defs.h"
#include "gdb_string.h"
#include <ctype.h>
#include "expression.h"

#include "objc-lang.h"	/* For objc language constructs.  */

#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "c-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols.  */
#include "top.h"
#include "completer.h" /* For skip_quoted().  */
#include "block.h"

#define parse_type builtin_type (parse_gdbarch)

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror,
   etc), as well as gratuitiously global symbol names, so we can have
   multiple yacc generated parsers in gdb.  Note that these are only
   the variables produced by yacc.  If other parser generators (bison,
   byacc, etc) produce additional global names that conflict at link
   time, then those parser generators need to be fixed instead of
   adding those names to this list.  */

#define	yymaxdepth	objc_maxdepth
#define	yyparse		objc_parse
#define	yylex		objc_lex
#define	yyerror		objc_error
#define	yylval		objc_lval
#define	yychar		objc_char
#define	yydebug		objc_debug
#define	yypact		objc_pact	
#define	yyr1		objc_r1			
#define	yyr2		objc_r2			
#define	yydef		objc_def		
#define	yychk		objc_chk		
#define	yypgo		objc_pgo		
#define	yyact		objc_act		
#define	yyexca		objc_exca
#define yyerrflag	objc_errflag
#define yynerrs		objc_nerrs
#define	yyps		objc_ps
#define	yypv		objc_pv
#define	yys		objc_s
#define	yy_yys		objc_yys
#define	yystate		objc_state
#define	yytmp		objc_tmp
#define	yyv		objc_v
#define	yy_yyv		objc_yyv
#define	yyval		objc_val
#define	yylloc		objc_lloc
#define yyreds		objc_reds		/* With YYDEBUG defined */
#define yytoks		objc_toks		/* With YYDEBUG defined */
#define yyname  	objc_name          	/* With YYDEBUG defined */
#define yyrule  	objc_rule          	/* With YYDEBUG defined */
#define yylhs		objc_yylhs
#define yylen		objc_yylen
#define yydefred	objc_yydefred
#define yydgoto		objc_yydgoto
#define yysindex	objc_yysindex
#define yyrindex	objc_yyrindex
#define yygindex	objc_yygindex
#define yytable		objc_yytable
#define yycheck		objc_yycheck

#ifndef YYDEBUG
#define	YYDEBUG	0		/* Default to no yydebug support.  */
#endif

int
yyparse (void);

static int
yylex (void);

void
yyerror (char *);



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 126 "objc-exp.y"
typedef union YYSTYPE {
    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val_int;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    struct ttype tsym;
    struct symtoken ssym;
    int voidval;
    struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;
    struct objc_class_str class;

    struct type **tvec;
    int *ivec;
  } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 273 "objc-exp.c.tmp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 151 "objc-exp.y"

/* YYSTYPE gets defined by %union.  */
static int
parse_number (char *, int, int, YYSTYPE *);


/* Line 214 of yacc.c.  */
#line 290 "objc-exp.c.tmp"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE xfree
# endif
# ifndef YYMALLOC
#  define YYMALLOC xmalloc
# endif

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   793

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  29
/* YYNRULES -- Number of rules. */
#define YYNRULES  146
/* YYNRULES -- Number of states. */
#define YYNSTATES  236

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    52,    38,     2,
      58,    65,    50,    48,    30,    49,    56,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
      41,    32,    42,    33,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    63,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    36,    67,    62,     2,     2,     2,
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
      25,    26,    27,    28,    29,    31,    34,    35,    39,    40,
      43,    44,    45,    46,    53,    54,    55,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    18,    21,
      24,    27,    30,    33,    36,    39,    42,    45,    49,    53,
      58,    62,    66,    71,    76,    77,    83,    84,    90,    91,
      97,    99,   101,   103,   106,   110,   113,   116,   117,   123,
     125,   126,   128,   132,   134,   138,   143,   148,   152,   156,
     160,   164,   168,   172,   176,   180,   184,   188,   192,   196,
     200,   204,   208,   212,   216,   220,   224,   228,   234,   238,
     242,   244,   246,   248,   250,   252,   254,   259,   261,   263,
     265,   269,   273,   277,   282,   284,   287,   289,   291,   294,
     297,   300,   304,   308,   310,   313,   315,   318,   320,   324,
     327,   329,   332,   334,   337,   341,   344,   348,   350,   352,
     354,   356,   358,   360,   363,   367,   370,   374,   378,   383,
     386,   390,   392,   395,   398,   401,   404,   407,   410,   412,
     415,   417,   423,   426,   429,   431,   433,   435,   437,   439,
     443,   445,   447,   449,   451,   453,   455
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      69,     0,    -1,    71,    -1,    70,    -1,    91,    -1,    72,
      -1,    71,    30,    72,    -1,    50,    72,    -1,    38,    72,
      -1,    49,    72,    -1,    61,    72,    -1,    62,    72,    -1,
      54,    72,    -1,    53,    72,    -1,    72,    54,    -1,    72,
      53,    -1,    16,    72,    -1,    72,    59,    95,    -1,    72,
      59,    85,    -1,    72,    59,    50,    72,    -1,    72,    56,
      95,    -1,    72,    56,    85,    -1,    72,    56,    50,    72,
      -1,    72,    57,    71,    63,    -1,    -1,    57,     9,    73,
      76,    63,    -1,    -1,    57,    10,    74,    76,    63,    -1,
      -1,    57,    72,    75,    76,    63,    -1,    95,    -1,    77,
      -1,    78,    -1,    77,    78,    -1,    95,    64,    72,    -1,
      64,    72,    -1,    30,    72,    -1,    -1,    72,    58,    79,
      81,    65,    -1,    66,    -1,    -1,    72,    -1,    81,    30,
      72,    -1,    67,    -1,    80,    81,    82,    -1,    80,    91,
      82,    72,    -1,    58,    91,    65,    72,    -1,    58,    71,
      65,    -1,    72,    47,    72,    -1,    72,    50,    72,    -1,
      72,    51,    72,    -1,    72,    52,    72,    -1,    72,    48,
      72,    -1,    72,    49,    72,    -1,    72,    46,    72,    -1,
      72,    45,    72,    -1,    72,    40,    72,    -1,    72,    39,
      72,    -1,    72,    44,    72,    -1,    72,    43,    72,    -1,
      72,    41,    72,    -1,    72,    42,    72,    -1,    72,    38,
      72,    -1,    72,    37,    72,    -1,    72,    36,    72,    -1,
      72,    35,    72,    -1,    72,    34,    72,    -1,    72,    33,
      72,    64,    72,    -1,    72,    32,    72,    -1,    72,    29,
      72,    -1,     3,    -1,    11,    -1,     4,    -1,    84,    -1,
      28,    -1,     7,    -1,    16,    58,    91,    65,    -1,     5,
      -1,     6,    -1,    60,    -1,    83,    18,    95,    -1,    83,
      18,    95,    -1,    92,    18,    95,    -1,    92,    18,    62,
      95,    -1,    85,    -1,    18,    95,    -1,    96,    -1,    92,
      -1,    92,    25,    -1,    92,    26,    -1,    92,    87,    -1,
      92,    25,    87,    -1,    92,    26,    87,    -1,    50,    -1,
      50,    87,    -1,    38,    -1,    38,    87,    -1,    88,    -1,
      58,    87,    65,    -1,    88,    89,    -1,    89,    -1,    88,
      90,    -1,    90,    -1,    57,    63,    -1,    57,     3,    63,
      -1,    58,    65,    -1,    58,    94,    65,    -1,    86,    -1,
       9,    -1,    10,    -1,    24,    -1,    22,    -1,    23,    -1,
      22,    24,    -1,    17,    22,    24,    -1,    22,    22,    -1,
      22,    22,    24,    -1,    17,    22,    22,    -1,    17,    22,
      22,    24,    -1,    23,    24,    -1,    17,    23,    24,    -1,
      27,    -1,    22,    27,    -1,    12,    95,    -1,    13,    95,
      -1,    14,    95,    -1,    15,    95,    -1,    17,    93,    -1,
      17,    -1,    21,    93,    -1,    21,    -1,    19,    95,    41,
      91,    42,    -1,    25,    92,    -1,    26,    92,    -1,     9,
      -1,    24,    -1,    22,    -1,    23,    -1,    91,    -1,    94,
      30,    91,    -1,     8,    -1,    60,    -1,     9,    -1,    10,
      -1,    11,    -1,     8,    -1,    60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   231,   231,   232,   235,   242,   243,   248,   252,   256,
     260,   264,   268,   272,   276,   280,   284,   288,   294,   301,
     305,   312,   320,   324,   333,   332,   355,   354,   370,   369,
     378,   380,   383,   384,   387,   389,   391,   398,   395,   405,
     409,   412,   416,   420,   423,   430,   436,   442,   448,   452,
     456,   460,   464,   468,   472,   476,   480,   484,   488,   492,
     496,   500,   504,   508,   512,   516,   520,   524,   528,   532,
     538,   545,   556,   563,   566,   570,   577,   585,   610,   618,
     635,   645,   660,   673,   698,   699,   727,   782,   788,   789,
     790,   792,   794,   798,   800,   802,   804,   806,   809,   811,
     816,   823,   825,   829,   831,   835,   837,   849,   853,   855,
     863,   865,   867,   869,   871,   873,   875,   877,   879,   881,
     883,   885,   887,   889,   892,   895,   898,   901,   905,   907,
     911,   913,   920,   921,   924,   925,   931,   937,   946,   951,
     958,   959,   960,   961,   962,   965,   966
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "STRING", "NSSTRING",
  "SELECTOR", "NAME", "TYPENAME", "CLASSNAME", "NAME_OR_INT", "STRUCT",
  "CLASS", "UNION", "ENUM", "SIZEOF", "UNSIGNED", "COLONCOLON", "TEMPLATE",
  "ERROR", "SIGNED_KEYWORD", "LONG", "SHORT", "INT_KEYWORD",
  "CONST_KEYWORD", "VOLATILE_KEYWORD", "DOUBLE_KEYWORD", "VARIABLE",
  "ASSIGN_MODIFY", "','", "ABOVE_COMMA", "'='", "'?'", "OROR", "ANDAND",
  "'|'", "'^'", "'&'", "NOTEQUAL", "EQUAL", "'<'", "'>'", "GEQ", "LEQ",
  "RSH", "LSH", "'@'", "'+'", "'-'", "'*'", "'/'", "'%'", "DECREMENT",
  "INCREMENT", "UNARY", "'.'", "'['", "'('", "ARROW", "BLOCKNAME", "'!'",
  "'~'", "']'", "':'", "')'", "'{'", "'}'", "$accept", "start", "type_exp",
  "exp1", "exp", "@1", "@2", "@3", "msglist", "msgarglist", "msgarg", "@4",
  "lcurly", "arglist", "rcurly", "block", "variable", "qualified_name",
  "ptype", "abs_decl", "direct_abs_decl", "array_mod", "func_mod", "type",
  "typebase", "typename", "nonempty_typelist", "name", "name_not_typename", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      44,   285,    61,    63,   286,   287,   124,    94,    38,   288,
     289,    60,    62,   290,   291,   292,   293,    64,    43,    45,
      42,    47,    37,   294,   295,   296,    46,    91,    40,   297,
     298,    33,   126,    93,    58,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    68,    69,    69,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    72,    74,    72,    75,    72,
      76,    76,    77,    77,    78,    78,    78,    79,    72,    80,
      81,    81,    81,    82,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    83,
      83,    84,    85,    85,    84,    84,    84,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     4,
       3,     3,     4,     4,     0,     5,     0,     5,     0,     5,
       1,     1,     1,     2,     3,     2,     2,     0,     5,     1,
       0,     1,     3,     1,     3,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       3,     3,     3,     4,     1,     2,     1,     1,     2,     2,
       2,     3,     3,     1,     2,     1,     2,     1,     3,     2,
       1,     2,     1,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     1,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     5,     2,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,    70,    72,    77,    78,    75,   145,   108,   109,    71,
       0,     0,     0,     0,     0,   128,     0,     0,   130,   111,
     112,   110,     0,     0,   121,    74,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,    39,     0,     3,     2,
       5,    40,     0,    73,    84,   107,     4,    87,    86,   140,
     142,   143,   144,   141,   123,   124,   125,   126,     0,    16,
       0,   134,   136,   137,   135,   127,    85,     0,   136,   137,
     129,   115,   113,   122,   119,   132,   133,     8,     9,     7,
      13,    12,    24,    26,    28,     0,     0,    10,    11,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    14,     0,     0,    37,     0,    41,
       0,     0,     0,     0,    88,    89,    95,    93,     0,     0,
      90,    97,   100,   102,     0,   117,   114,   120,     0,   116,
       0,     0,     0,    47,     0,     6,    69,    68,     0,    66,
      65,    64,    63,    62,    57,    56,    60,    61,    59,    58,
      55,    54,    48,    52,    53,    49,    50,    51,   142,   143,
       0,    21,    20,     0,    40,     0,    18,    17,     0,    43,
      44,     0,    81,     0,    82,    91,    92,    96,    94,     0,
     103,   105,     0,   138,    87,     0,     0,    99,   101,    76,
     118,     0,     0,     0,     0,    31,    32,    30,     0,     0,
      46,     0,    22,    23,     0,    19,    42,    45,    83,   104,
      98,     0,   106,   131,    36,    35,    25,    33,     0,     0,
      27,    29,    67,    38,   139,    34
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    37,    38,    85,    40,   140,   141,   142,   204,   205,
     206,   174,    41,   120,   180,    42,    43,    44,    45,   130,
     131,   132,   133,   193,    60,    65,   195,   207,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const short yypact[] =
{
     220,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
      19,    19,    19,    19,   284,    28,    19,    19,   118,    16,
      -9,   -86,   240,   240,   -86,   -86,   220,   220,   220,   220,
     220,   348,   220,     8,   220,   220,   -86,    44,   -86,    23,
     573,   220,    91,   -86,   -86,   -86,   -86,   119,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   220,   129,
      93,   -86,    47,    88,   -86,   -86,   -86,    73,   -86,   -86,
     -86,   100,   -86,   -86,   -86,   -86,   -86,   129,   129,   129,
     129,   129,    97,   108,   573,   -20,    63,   129,   129,   -86,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   -86,   -86,   491,   220,   -86,   511,   573,
     -21,    69,    19,   112,    -3,    -3,    -3,    -3,    -1,   433,
     -86,    50,   -86,   -86,    78,   122,   -86,   -86,   240,   -86,
      95,    95,    95,   -86,   220,   573,   573,   573,   540,   625,
     649,   672,   694,   715,   734,   734,   157,   157,   157,   157,
     267,   267,   331,   496,   496,   129,   129,   129,    97,   108,
     220,   -86,   -86,     4,   220,   220,   -86,   -86,   220,   -86,
     -86,   220,   132,    19,   -86,   -86,   -86,   -86,   -86,    84,
     -86,   -86,    86,   -86,   123,   -17,    51,   -86,   -86,   412,
     -86,   110,   220,   220,    90,    95,   -86,    92,    99,   103,
     129,   220,   129,   -86,   -16,   129,   573,   129,   -86,   -86,
     -86,   240,   -86,   -86,   573,   573,   -86,   -86,    92,   220,
     -86,   -86,   600,   -86,   -86,   573
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
     -86,   -86,   -86,     3,   -10,   -86,   -86,   -86,   -85,   -86,
     -51,   -86,   -86,   -11,    37,   -86,   -86,   -79,   -86,     6,
     -86,    36,    39,     1,     0,   161,   -86,    -5,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -110
static const short yytable[] =
{
      47,    46,   189,    39,    59,    54,    55,    56,    57,   178,
      90,    66,    67,   221,   178,    74,    77,    78,    79,    80,
      81,    84,    75,    76,    87,    88,   -79,    49,    50,    51,
      52,   119,    47,    86,    90,   126,   171,    61,    71,   176,
      72,    47,   121,    73,    89,   143,   179,   127,   222,   233,
      62,    63,    64,    90,   128,   129,   208,   209,    47,   134,
       7,     8,   190,    10,    11,    12,    13,   213,    15,   135,
      17,   136,    18,    19,    20,    21,    22,    23,    24,    53,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,    49,    50,    51,    52,   128,   196,   122,
     172,   123,   137,   177,   138,  -108,   191,   182,   184,   173,
      49,    50,    51,    52,   139,   202,  -109,    61,   144,   194,
     185,   186,   187,   188,   210,   192,   179,   123,   194,   201,
      68,    69,    64,   199,   124,   125,   200,   219,   124,   125,
     -80,   220,   223,   226,   227,    53,   229,   126,   181,   203,
     212,   126,   230,   214,   119,   215,   231,   197,   216,   127,
     198,   217,    53,   127,   183,     0,   128,   129,   218,    70,
     128,   129,   113,   114,     0,   115,   116,   117,   118,   210,
       0,     0,   224,   225,     0,     0,   194,     0,     0,     0,
     228,   232,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,   115,   116,   117,   118,     0,     0,   235,
       0,   194,   234,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,     7,
       8,     0,    10,    11,    12,    13,     0,    15,    26,    17,
       0,    18,    19,    20,    21,    22,    23,    24,     0,    27,
      28,     0,     0,    29,    30,     0,     0,    31,    32,     0,
      33,    34,    35,     0,     0,     0,    36,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   107,   108,   109,   110,   111,   112,
     113,   114,    26,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,    29,    30,     0,
       0,    31,    58,     0,    33,    34,    35,     0,     0,     0,
      36,     1,     2,     3,     4,     5,     6,    82,    83,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,   108,
     109,   110,   111,   112,   113,   114,    26,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,    29,    30,     0,     0,    31,    32,     0,    33,    34,
      35,     0,     0,     0,    36,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     7,     8,     0,    10,    11,    12,    13,     0,
      15,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    29,    30,     0,     0,    31,
      32,   126,    33,    34,    35,     0,     0,     0,    36,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
     128,   129,     0,     0,     0,     0,     0,     0,   191,    49,
     168,   169,    52,    10,    11,    12,    13,     0,    15,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    49,
     168,   169,    52,    10,    11,    12,    13,     0,    15,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,     0,
       0,   170,     0,     0,     0,     0,   110,   111,   112,   113,
     114,    53,   115,   116,   117,   118,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    53,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
       0,     0,    91,     0,   211,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,   115,
     116,   117,   118,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       0,   115,   116,   117,   118,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,   115,   116,   117,   118,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118
};

static const short yycheck[] =
{
       0,     0,     3,     0,    14,    10,    11,    12,    13,    30,
      30,    16,    17,    30,    30,    24,    26,    27,    28,    29,
      30,    31,    22,    23,    34,    35,    18,     8,     9,    10,
      11,    41,    32,    32,    30,    38,   115,     9,    22,   118,
      24,    41,    41,    27,     0,    65,    67,    50,    65,    65,
      22,    23,    24,    30,    57,    58,   141,   142,    58,    58,
       9,    10,    63,    12,    13,    14,    15,    63,    17,    22,
      19,    24,    21,    22,    23,    24,    25,    26,    27,    60,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     8,     9,    10,    11,    57,    58,    18,
     115,    18,    24,   118,    41,    18,    65,   122,   123,   116,
       8,     9,    10,    11,    24,    30,    18,     9,    65,   129,
     124,   125,   126,   127,   144,   129,    67,    18,   138,   138,
      22,    23,    24,    65,    25,    26,    24,    63,    25,    26,
      18,    65,    42,    63,   205,    60,    64,    38,   121,    64,
     170,    38,    63,   174,   174,   175,    63,   131,   178,    50,
     131,   181,    60,    50,    62,    -1,    57,    58,   183,    18,
      57,    58,    53,    54,    -1,    56,    57,    58,    59,   199,
      -1,    -1,   202,   203,    -1,    -1,   196,    -1,    -1,    -1,
     205,   211,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    -1,    -1,   229,
      -1,   221,   221,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,     9,
      10,    -1,    12,    13,    14,    15,    -1,    17,    38,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    49,
      50,    -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,
      60,    61,    62,    -1,    -1,    -1,    66,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    38,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,
      66,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    38,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    66,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,     9,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    38,    60,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    60,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    60,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    29,    -1,    64,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    21,    22,
      23,    24,    25,    26,    27,    28,    38,    49,    50,    53,
      54,    57,    58,    60,    61,    62,    66,    69,    70,    71,
      72,    80,    83,    84,    85,    86,    91,    92,    96,     8,
       9,    10,    11,    60,    95,    95,    95,    95,    58,    72,
      92,     9,    22,    23,    24,    93,    95,    95,    22,    23,
      93,    22,    24,    27,    24,    92,    92,    72,    72,    72,
      72,    72,     9,    10,    72,    71,    91,    72,    72,     0,
      30,    29,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    56,    57,    58,    59,    72,
      81,    91,    18,    18,    25,    26,    38,    50,    57,    58,
      87,    88,    89,    90,    91,    22,    24,    24,    41,    24,
      73,    74,    75,    65,    65,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,     9,    10,
      50,    85,    95,    71,    79,    50,    85,    95,    30,    67,
      82,    82,    95,    62,    95,    87,    87,    87,    87,     3,
      63,    65,    87,    91,    92,    94,    58,    89,    90,    65,
      24,    91,    30,    64,    76,    77,    78,    95,    76,    76,
      72,    64,    72,    63,    81,    72,    72,    72,    95,    63,
      65,    30,    65,    42,    72,    72,    63,    78,    95,    64,
      63,    63,    72,    65,    91,    72
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to xreallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to xreallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 4:
#line 236 "objc-exp.y"
    { write_exp_elt_opcode(OP_TYPE);
			  write_exp_elt_type(yyvsp[0].tval);
			  write_exp_elt_opcode(OP_TYPE);}
    break;

  case 6:
#line 244 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_COMMA); }
    break;

  case 7:
#line 249 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_IND); }
    break;

  case 8:
#line 253 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_ADDR); }
    break;

  case 9:
#line 257 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_NEG); }
    break;

  case 10:
#line 261 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_LOGICAL_NOT); }
    break;

  case 11:
#line 265 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_COMPLEMENT); }
    break;

  case 12:
#line 269 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_PREINCREMENT); }
    break;

  case 13:
#line 273 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_PREDECREMENT); }
    break;

  case 14:
#line 277 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_POSTINCREMENT); }
    break;

  case 15:
#line 281 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_POSTDECREMENT); }
    break;

  case 16:
#line 285 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_SIZEOF); }
    break;

  case 17:
#line 289 "objc-exp.y"
    { write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 18:
#line 295 "objc-exp.y"
    { /* exp->type::name becomes exp->*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 19:
#line 302 "objc-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 20:
#line 306 "objc-exp.y"
    { write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 21:
#line 313 "objc-exp.y"
    { /* exp.type::name becomes exp.*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 22:
#line 321 "objc-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 23:
#line 325 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_SUBSCRIPT); }
    break;

  case 24:
#line 333 "objc-exp.y"
    {
			  CORE_ADDR class;

			  class = lookup_objc_class (parse_gdbarch,
						     copy_name (yyvsp[0].tsym.stoken));
			  if (class == 0)
			    error ("%s is not an ObjC Class", 
				   copy_name (yyvsp[0].tsym.stoken));
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_int);
			  write_exp_elt_longcst ((LONGEST) class);
			  write_exp_elt_opcode (OP_LONG);
			  start_msglist();
			}
    break;

  case 25:
#line 348 "objc-exp.y"
    { write_exp_elt_opcode (OP_OBJC_MSGCALL);
			  end_msglist();
			  write_exp_elt_opcode (OP_OBJC_MSGCALL); 
			}
    break;

  case 26:
#line 355 "objc-exp.y"
    {
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_int);
			  write_exp_elt_longcst ((LONGEST) yyvsp[0].class.class);
			  write_exp_elt_opcode (OP_LONG);
			  start_msglist();
			}
    break;

  case 27:
#line 363 "objc-exp.y"
    { write_exp_elt_opcode (OP_OBJC_MSGCALL);
			  end_msglist();
			  write_exp_elt_opcode (OP_OBJC_MSGCALL); 
			}
    break;

  case 28:
#line 370 "objc-exp.y"
    { start_msglist(); }
    break;

  case 29:
#line 372 "objc-exp.y"
    { write_exp_elt_opcode (OP_OBJC_MSGCALL);
			  end_msglist();
			  write_exp_elt_opcode (OP_OBJC_MSGCALL); 
			}
    break;

  case 30:
#line 379 "objc-exp.y"
    { add_msglist(&yyvsp[0].sval, 0); }
    break;

  case 34:
#line 388 "objc-exp.y"
    { add_msglist(&yyvsp[-2].sval, 1); }
    break;

  case 35:
#line 390 "objc-exp.y"
    { add_msglist(0, 1);   }
    break;

  case 36:
#line 392 "objc-exp.y"
    { add_msglist(0, 0);   }
    break;

  case 37:
#line 398 "objc-exp.y"
    { start_arglist (); }
    break;

  case 38:
#line 400 "objc-exp.y"
    { write_exp_elt_opcode (OP_FUNCALL);
			  write_exp_elt_longcst ((LONGEST) end_arglist ());
			  write_exp_elt_opcode (OP_FUNCALL); }
    break;

  case 39:
#line 406 "objc-exp.y"
    { start_arglist (); }
    break;

  case 41:
#line 413 "objc-exp.y"
    { arglist_len = 1; }
    break;

  case 42:
#line 417 "objc-exp.y"
    { arglist_len++; }
    break;

  case 43:
#line 421 "objc-exp.y"
    { yyval.lval = end_arglist () - 1; }
    break;

  case 44:
#line 424 "objc-exp.y"
    { write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) yyvsp[0].lval);
			  write_exp_elt_opcode (OP_ARRAY); }
    break;

  case 45:
#line 431 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_MEMVAL);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_MEMVAL); }
    break;

  case 46:
#line 437 "objc-exp.y"
    { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 47:
#line 443 "objc-exp.y"
    { }
    break;

  case 48:
#line 449 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_REPEAT); }
    break;

  case 49:
#line 453 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_MUL); }
    break;

  case 50:
#line 457 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_DIV); }
    break;

  case 51:
#line 461 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_REM); }
    break;

  case 52:
#line 465 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_ADD); }
    break;

  case 53:
#line 469 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_SUB); }
    break;

  case 54:
#line 473 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_LSH); }
    break;

  case 55:
#line 477 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_RSH); }
    break;

  case 56:
#line 481 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_EQUAL); }
    break;

  case 57:
#line 485 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_NOTEQUAL); }
    break;

  case 58:
#line 489 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_LEQ); }
    break;

  case 59:
#line 493 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_GEQ); }
    break;

  case 60:
#line 497 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_LESS); }
    break;

  case 61:
#line 501 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_GTR); }
    break;

  case 62:
#line 505 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_AND); }
    break;

  case 63:
#line 509 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_XOR); }
    break;

  case 64:
#line 513 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_IOR); }
    break;

  case 65:
#line 517 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_AND); }
    break;

  case 66:
#line 521 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_OR); }
    break;

  case 67:
#line 525 "objc-exp.y"
    { write_exp_elt_opcode (TERNOP_COND); }
    break;

  case 68:
#line 529 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN); }
    break;

  case 69:
#line 533 "objc-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (yyvsp[-1].opcode);
			  write_exp_elt_opcode (BINOP_ASSIGN_MODIFY); }
    break;

  case 70:
#line 539 "objc-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (yyvsp[0].typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)(yyvsp[0].typed_val_int.val));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 71:
#line 546 "objc-exp.y"
    { YYSTYPE val;
			  parse_number (yyvsp[0].ssym.stoken.ptr, yyvsp[0].ssym.stoken.length, 0, &val);
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (val.typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)val.typed_val_int.val);
			  write_exp_elt_opcode (OP_LONG);
			}
    break;

  case 72:
#line 557 "objc-exp.y"
    { write_exp_elt_opcode (OP_DOUBLE);
			  write_exp_elt_type (yyvsp[0].typed_val_float.type);
			  write_exp_elt_dblcst (yyvsp[0].typed_val_float.dval);
			  write_exp_elt_opcode (OP_DOUBLE); }
    break;

  case 75:
#line 571 "objc-exp.y"
    {
			  write_exp_elt_opcode (OP_OBJC_SELECTOR);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_OBJC_SELECTOR); }
    break;

  case 76:
#line 578 "objc-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_int);
			  CHECK_TYPEDEF (yyvsp[-1].tval);
			  write_exp_elt_longcst ((LONGEST) TYPE_LENGTH (yyvsp[-1].tval));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 77:
#line 586 "objc-exp.y"
    { /* C strings are converted into array
			     constants with an explicit null byte
			     added at the end.  Thus the array upper
			     bound is the string length.  There is no
			     such thing in C as a completely empty
			     string.  */
			  char *sp = yyvsp[0].sval.ptr; int count = yyvsp[0].sval.length;
			  while (count-- > 0)
			    {
			      write_exp_elt_opcode (OP_LONG);
			      write_exp_elt_type (parse_type->builtin_char);
			      write_exp_elt_longcst ((LONGEST)(*sp++));
			      write_exp_elt_opcode (OP_LONG);
			    }
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_char);
			  write_exp_elt_longcst ((LONGEST)'\0');
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) (yyvsp[0].sval.length));
			  write_exp_elt_opcode (OP_ARRAY); }
    break;

  case 78:
#line 613 "objc-exp.y"
    { write_exp_elt_opcode (OP_OBJC_NSSTRING);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_OBJC_NSSTRING); }
    break;

  case 79:
#line 619 "objc-exp.y"
    {
			  if (yyvsp[0].ssym.sym != 0)
			      yyval.bval = SYMBOL_BLOCK_VALUE (yyvsp[0].ssym.sym);
			  else
			    {
			      struct symtab *tem =
				  lookup_symtab (copy_name (yyvsp[0].ssym.stoken));
			      if (tem)
				yyval.bval = BLOCKVECTOR_BLOCK (BLOCKVECTOR (tem), STATIC_BLOCK);
			      else
				error ("No file or function \"%s\".",
				       copy_name (yyvsp[0].ssym.stoken));
			    }
			}
    break;

  case 80:
#line 636 "objc-exp.y"
    { struct symbol *tem
			    = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					     VAR_DOMAIN, (int *) NULL);
			  if (!tem || SYMBOL_CLASS (tem) != LOC_BLOCK)
			    error ("No function \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));
			  yyval.bval = SYMBOL_BLOCK_VALUE (tem); }
    break;

  case 81:
#line 646 "objc-exp.y"
    { struct symbol *sym;
			  sym = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					       VAR_DOMAIN, (int *) NULL);
			  if (sym == 0)
			    error ("No symbol \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));

			  write_exp_elt_opcode (OP_VAR_VALUE);
			  /* block_found is set by lookup_symbol.  */
			  write_exp_elt_block (block_found);
			  write_exp_elt_sym (sym);
			  write_exp_elt_opcode (OP_VAR_VALUE); }
    break;

  case 82:
#line 661 "objc-exp.y"
    {
			  struct type *type = yyvsp[-2].tval;
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 83:
#line 674 "objc-exp.y"
    {
			  struct type *type = yyvsp[-3].tval;
			  struct stoken tmp_token;
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  if (strcmp (type_name_no_tag (type), yyvsp[0].sval.ptr) != 0)
			    error ("invalid destructor `%s::~%s'",
				   type_name_no_tag (type), yyvsp[0].sval.ptr);

			  tmp_token.ptr = (char*) alloca (yyvsp[0].sval.length + 2);
			  tmp_token.length = yyvsp[0].sval.length + 1;
			  tmp_token.ptr[0] = '~';
			  memcpy (tmp_token.ptr+1, yyvsp[0].sval.ptr, yyvsp[0].sval.length);
			  tmp_token.ptr[tmp_token.length] = 0;
			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (tmp_token);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 85:
#line 700 "objc-exp.y"
    {
			  char *name = copy_name (yyvsp[0].sval);
			  struct symbol *sym;
			  struct minimal_symbol *msymbol;

			  sym =
			    lookup_symbol (name, (const struct block *) NULL,
					   VAR_DOMAIN, (int *) NULL);
			  if (sym)
			    {
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      break;
			    }

			  msymbol = lookup_minimal_symbol (name, NULL, NULL);
			  if (msymbol != NULL)
			    write_exp_msymbol (msymbol);
			  else if (!have_full_symbols () && !have_partial_symbols ())
			    error ("No symbol table is loaded.  Use the \"file\" command.");
			  else
			    error ("No symbol \"%s\" in current context.", name);
			}
    break;

  case 86:
#line 728 "objc-exp.y"
    { struct symbol *sym = yyvsp[0].ssym.sym;

			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0 ||
				      contained_in (block_found, 
						    innermost_block))
				    innermost_block = block_found;
				}

			      write_exp_elt_opcode (OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			    }
			  else if (yyvsp[0].ssym.is_a_field_of_this)
			    {
			      /* C++/ObjC: it hangs off of `this'/'self'.  
				 Must not inadvertently convert from a 
				 method call to data ref.  */
			      if (innermost_block == 0 || 
				  contained_in (block_found, innermost_block))
				innermost_block = block_found;
			      write_exp_elt_opcode (OP_OBJC_SELF);
			      write_exp_elt_opcode (OP_OBJC_SELF);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			      write_exp_string (yyvsp[0].ssym.stoken);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			    }
			  else
			    {
			      struct minimal_symbol *msymbol;
			      char *arg = copy_name (yyvsp[0].ssym.stoken);

			      msymbol =
				lookup_minimal_symbol (arg, NULL, NULL);
			      if (msymbol != NULL)
				write_exp_msymbol (msymbol);
			      else if (!have_full_symbols () && 
				       !have_partial_symbols ())
				error ("No symbol table is loaded.  Use the \"file\" command.");
			      else
				error ("No symbol \"%s\" in current context.",
				       copy_name (yyvsp[0].ssym.stoken));
			    }
			}
    break;

  case 90:
#line 791 "objc-exp.y"
    { yyval.tval = follow_types (yyvsp[-1].tval); }
    break;

  case 91:
#line 793 "objc-exp.y"
    { yyval.tval = follow_types (yyvsp[-2].tval); }
    break;

  case 92:
#line 795 "objc-exp.y"
    { yyval.tval = follow_types (yyvsp[-2].tval); }
    break;

  case 93:
#line 799 "objc-exp.y"
    { push_type (tp_pointer); yyval.voidval = 0; }
    break;

  case 94:
#line 801 "objc-exp.y"
    { push_type (tp_pointer); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 95:
#line 803 "objc-exp.y"
    { push_type (tp_reference); yyval.voidval = 0; }
    break;

  case 96:
#line 805 "objc-exp.y"
    { push_type (tp_reference); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 98:
#line 810 "objc-exp.y"
    { yyval.voidval = yyvsp[-1].voidval; }
    break;

  case 99:
#line 812 "objc-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			}
    break;

  case 100:
#line 817 "objc-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			  yyval.voidval = 0;
			}
    break;

  case 101:
#line 824 "objc-exp.y"
    { push_type (tp_function); }
    break;

  case 102:
#line 826 "objc-exp.y"
    { push_type (tp_function); }
    break;

  case 103:
#line 830 "objc-exp.y"
    { yyval.lval = -1; }
    break;

  case 104:
#line 832 "objc-exp.y"
    { yyval.lval = yyvsp[-1].typed_val_int.val; }
    break;

  case 105:
#line 836 "objc-exp.y"
    { yyval.voidval = 0; }
    break;

  case 106:
#line 838 "objc-exp.y"
    { xfree (yyvsp[-1].tvec); yyval.voidval = 0; }
    break;

  case 108:
#line 854 "objc-exp.y"
    { yyval.tval = yyvsp[0].tsym.type; }
    break;

  case 109:
#line 856 "objc-exp.y"
    {
			  if (yyvsp[0].class.type == NULL)
			    error ("No symbol \"%s\" in current context.", 
				   copy_name(yyvsp[0].class.stoken));
			  else
			    yyval.tval = yyvsp[0].class.type;
			}
    break;

  case 110:
#line 864 "objc-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 111:
#line 866 "objc-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 112:
#line 868 "objc-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 113:
#line 870 "objc-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 114:
#line 872 "objc-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 115:
#line 874 "objc-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 116:
#line 876 "objc-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 117:
#line 878 "objc-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 118:
#line 880 "objc-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 119:
#line 882 "objc-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 120:
#line 884 "objc-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 121:
#line 886 "objc-exp.y"
    { yyval.tval = parse_type->builtin_double; }
    break;

  case 122:
#line 888 "objc-exp.y"
    { yyval.tval = parse_type->builtin_long_double; }
    break;

  case 123:
#line 890 "objc-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 124:
#line 893 "objc-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 125:
#line 896 "objc-exp.y"
    { yyval.tval = lookup_union (copy_name (yyvsp[0].sval),
					     expression_context_block); }
    break;

  case 126:
#line 899 "objc-exp.y"
    { yyval.tval = lookup_enum (copy_name (yyvsp[0].sval),
					    expression_context_block); }
    break;

  case 127:
#line 902 "objc-exp.y"
    { yyval.tval = lookup_unsigned_typename (parse_language,
							 parse_gdbarch,
							 TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 128:
#line 906 "objc-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_int; }
    break;

  case 129:
#line 908 "objc-exp.y"
    { yyval.tval = lookup_signed_typename (parse_language,
						       parse_gdbarch,
						       TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 130:
#line 912 "objc-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 131:
#line 914 "objc-exp.y"
    { yyval.tval = lookup_template_type(copy_name(yyvsp[-3].sval), yyvsp[-1].tval,
						    expression_context_block);
			}
    break;

  case 132:
#line 920 "objc-exp.y"
    { yyval.tval = yyvsp[0].tval; }
    break;

  case 133:
#line 921 "objc-exp.y"
    { yyval.tval = yyvsp[0].tval; }
    break;

  case 135:
#line 926 "objc-exp.y"
    {
		  yyval.tsym.stoken.ptr = "int";
		  yyval.tsym.stoken.length = 3;
		  yyval.tsym.type = parse_type->builtin_int;
		}
    break;

  case 136:
#line 932 "objc-exp.y"
    {
		  yyval.tsym.stoken.ptr = "long";
		  yyval.tsym.stoken.length = 4;
		  yyval.tsym.type = parse_type->builtin_long;
		}
    break;

  case 137:
#line 938 "objc-exp.y"
    {
		  yyval.tsym.stoken.ptr = "short";
		  yyval.tsym.stoken.length = 5;
		  yyval.tsym.type = parse_type->builtin_short;
		}
    break;

  case 138:
#line 947 "objc-exp.y"
    { yyval.tvec = (struct type **) xmalloc (sizeof (struct type *) * 2);
		  yyval.ivec[0] = 1;	/* Number of types in vector.  */
		  yyval.tvec[1] = yyvsp[0].tval;
		}
    break;

  case 139:
#line 952 "objc-exp.y"
    { int len = sizeof (struct type *) * (++(yyvsp[-2].ivec[0]) + 1);
		  yyval.tvec = (struct type **) xrealloc ((char *) yyvsp[-2].tvec, len);
		  yyval.tvec[yyval.ivec[0]] = yyvsp[0].tval;
		}
    break;

  case 140:
#line 958 "objc-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 141:
#line 959 "objc-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 142:
#line 960 "objc-exp.y"
    { yyval.sval = yyvsp[0].tsym.stoken; }
    break;

  case 143:
#line 961 "objc-exp.y"
    { yyval.sval = yyvsp[0].class.stoken; }
    break;

  case 144:
#line 962 "objc-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 2419 "objc-exp.c.tmp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 976 "objc-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.  LEN is the
   number of characters in it.  */

/*** Needs some error checking for the float case.  ***/

static int
parse_number (p, len, parsed_float, putithere)
     char *p;
     int len;
     int parsed_float;
     YYSTYPE *putithere;
{
  /* FIXME: Shouldn't these be unsigned?  We don't deal with negative
     values here, and we do kind of silly things like cast to
     unsigned.  */
  LONGEST n = 0;
  LONGEST prevn = 0;
  unsigned LONGEST un;

  int i = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;

  /* Number of "L" suffixes encountered.  */
  int long_p = 0;

  /* We have found a "L" or "U" suffix.  */
  int found_suffix = 0;

  unsigned LONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      char c;

      /* It's a float since it contains a point or an exponent.  */

      sscanf (p, "%" DOUBLEST_SCAN_FORMAT "%c",
	      &putithere->typed_val_float.dval, &c);

      /* See if it has `f' or `l' suffix (float or long double).  */

      c = tolower (p[len - 1]);

      if (c == 'f')
	putithere->typed_val_float.type = parse_type->builtin_float;
      else if (c == 'l')
	putithere->typed_val_float.type = parse_type->builtin_long_double;
      else if (isdigit (c) || c == '.')
	putithere->typed_val_float.type = parse_type->builtin_double;
      else
	return ERROR;

      return FLOAT;
    }

  /* Handle base-switching prefixes 0x, 0t, 0d, and 0.  */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;

      case 't':
      case 'T':
      case 'd':
      case 'D':
	if (len >= 3)
	  {
	    p += 2;
	    base = 10;
	    len -= 2;
	  }
	break;

      default:
	base = 8;
	break;
      }

  while (len-- > 0)
    {
      c = *p++;
      if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
      if (c != 'l' && c != 'u')
	n *= base;
      if (c >= '0' && c <= '9')
	{
	  if (found_suffix)
	    return ERROR;
	  n += i = c - '0';
	}
      else
	{
	  if (base > 10 && c >= 'a' && c <= 'f')
	    {
	      if (found_suffix)
		return ERROR;
	      n += i = c - 'a' + 10;
	    }
	  else if (c == 'l')
	    {
	      ++long_p;
	      found_suffix = 1;
	    }
	  else if (c == 'u')
	    {
	      unsigned_p = 1;
	      found_suffix = 1;
	    }
	  else
	    return ERROR;	/* Char not a digit.  */
	}
      if (i >= base)
	return ERROR;		/* Invalid digit in this base.  */

      /* Portably test for overflow (only works for nonzero values, so
	 make a second check for zero).  FIXME: Can't we just make n
	 and prevn unsigned and avoid this?  */
      if (c != 'l' && c != 'u' && (prevn >= n) && n != 0)
	unsigned_p = 1;		/* Try something unsigned.  */

      /* Portably test for unsigned overflow.
	 FIXME: This check is wrong; for example it doesn't find 
	 overflow on 0x123456789 when LONGEST is 32 bits.  */
      if (c != 'l' && c != 'u' && n != 0)
	{	
	  if ((unsigned_p && (unsigned LONGEST) prevn >= (unsigned LONGEST) n))
	    error ("Numeric constant too large.");
	}
      prevn = n;
    }

  /* An integer constant is an int, a long, or a long long.  An L
     suffix forces it to be long; an LL suffix forces it to be long
     long.  If not forced to a larger size, it gets the first type of
     the above that it fits in.  To figure out whether it fits, we
     shift it right and see whether anything remains.  Note that we
     can't shift sizeof (LONGEST) * HOST_CHAR_BIT bits or more in one
     operation, because many compilers will warn about such a shift
     (which always produces a zero result).  Sometimes gdbarch_int_bit
     or gdbarch_long_int will be that big, sometimes not.  To deal with
     the case where it is we just always shift the value more than
     once, with fewer bits each time.  */

  un = (unsigned LONGEST)n >> 2;
  if (long_p == 0
      && (un >> (gdbarch_int_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((unsigned LONGEST)1) << (gdbarch_int_bit (parse_gdbarch) - 1);

      /* A large decimal (not hex or octal) constant (between INT_MAX
	 and UINT_MAX) is a long or unsigned long, according to ANSI,
	 never an unsigned int, but this code treats it as unsigned
	 int.  This probably should be fixed.  GCC gives a warning on
	 such constants.  */

      unsigned_type = parse_type->builtin_unsigned_int;
      signed_type = parse_type->builtin_int;
    }
  else if (long_p <= 1
	   && (un >> (gdbarch_long_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((unsigned LONGEST)1) << (gdbarch_long_bit (parse_gdbarch) - 1);
      unsigned_type = parse_type->builtin_unsigned_long;
      signed_type = parse_type->builtin_long;
    }
  else
    {
      high_bit = (((unsigned LONGEST)1)
		  << (gdbarch_long_long_bit (parse_gdbarch) - 32 - 1)
		  << 16
		  << 16);
      if (high_bit == 0)
	/* A long long does not fit in a LONGEST.  */
	high_bit =
	  (unsigned LONGEST)1 << (sizeof (LONGEST) * HOST_CHAR_BIT - 1);
      unsigned_type = parse_type->builtin_unsigned_long_long;
      signed_type = parse_type->builtin_long_long;
    }

   putithere->typed_val_int.val = n;

   /* If the high bit of the worked out type is set then this number
      has to be unsigned.  */

   if (unsigned_p || (n & high_bit)) 
     {
       putithere->typed_val_int.type = unsigned_type;
     }
   else 
     {
       putithere->typed_val_int.type = signed_type;
     }

   return INT;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
};

static const struct token tokentab3[] =
  {
    {">>=", ASSIGN_MODIFY, BINOP_RSH},
    {"<<=", ASSIGN_MODIFY, BINOP_LSH}
  };

static const struct token tokentab2[] =
  {
    {"+=", ASSIGN_MODIFY, BINOP_ADD},
    {"-=", ASSIGN_MODIFY, BINOP_SUB},
    {"*=", ASSIGN_MODIFY, BINOP_MUL},
    {"/=", ASSIGN_MODIFY, BINOP_DIV},
    {"%=", ASSIGN_MODIFY, BINOP_REM},
    {"|=", ASSIGN_MODIFY, BINOP_BITWISE_IOR},
    {"&=", ASSIGN_MODIFY, BINOP_BITWISE_AND},
    {"^=", ASSIGN_MODIFY, BINOP_BITWISE_XOR},
    {"++", INCREMENT, BINOP_END},
    {"--", DECREMENT, BINOP_END},
    {"->", ARROW, BINOP_END},
    {"&&", ANDAND, BINOP_END},
    {"||", OROR, BINOP_END},
    {"::", COLONCOLON, BINOP_END},
    {"<<", LSH, BINOP_END},
    {">>", RSH, BINOP_END},
    {"==", EQUAL, BINOP_END},
    {"!=", NOTEQUAL, BINOP_END},
    {"<=", LEQ, BINOP_END},
    {">=", GEQ, BINOP_END}
  };

/* Read one token, getting characters through lexptr.  */

static int
yylex ()
{
  int c, tokchr;
  int namelen;
  unsigned int i;
  char *tokstart;
  char *tokptr;
  int tempbufindex;
  static char *tempbuf;
  static int tempbufsize;
  
 retry:

  tokstart = lexptr;
  /* See if it is a special token of length 3.  */
  for (i = 0; i < sizeof tokentab3 / sizeof tokentab3[0]; i++)
    if (strncmp (tokstart, tokentab3[i].operator, 3) == 0)
      {
	lexptr += 3;
	yylval.opcode = tokentab3[i].opcode;
	return tokentab3[i].token;
      }

  /* See if it is a special token of length 2.  */
  for (i = 0; i < sizeof tokentab2 / sizeof tokentab2[0]; i++)
    if (strncmp (tokstart, tokentab2[i].operator, 2) == 0)
      {
	lexptr += 2;
	yylval.opcode = tokentab2[i].opcode;
	return tokentab2[i].token;
      }

  c = 0;
  switch (tokchr = *tokstart)
    {
    case 0:
      return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '\'':
      /* We either have a character constant ('0' or '\177' for
	 example) or we have a quoted symbol reference ('foo(int,int)'
	 in C++ for example).  */
      lexptr++;
      c = *lexptr++;
      if (c == '\\')
	c = parse_escape (parse_gdbarch, &lexptr);
      else if (c == '\'')
	error ("Empty character constant.");

      yylval.typed_val_int.val = c;
      yylval.typed_val_int.type = parse_type->builtin_char;

      c = *lexptr++;
      if (c != '\'')
	{
	  namelen = skip_quoted (tokstart) - tokstart;
	  if (namelen > 2)
	    {
	      lexptr = tokstart + namelen;
	      if (lexptr[-1] != '\'')
		error ("Unmatched single quote.");
	      namelen -= 2;
	      tokstart++;
	      goto tryname;
	    }
	  error ("Invalid character constant.");
	}
      return INT;

    case '(':
      paren_depth++;
      lexptr++;
      return '(';

    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return ')';

    case ',':
      if (comma_terminates && paren_depth == 0)
	return 0;
      lexptr++;
      return ',';

    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] < '0' || lexptr[1] > '9')
	goto symbol;		/* Nope, must be a symbol.  */
      /* FALL THRU into number case.  */

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
	/* It's a number.  */
	int got_dot = 0, got_e = 0, toktype = FLOAT;
	/* Initialize toktype to anything other than ERROR.  */
	char *p = tokstart;
	int hex = input_radix > 10;
	int local_radix = input_radix;
	if (tokchr == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	    local_radix = 16;
	  }
	else if (tokchr == '0' && (p[1]=='t' || p[1]=='T' || p[1]=='d' || p[1]=='D'))
	  {
	    p += 2;
	    hex = 0;
	    local_radix = 10;
	  }

	for (;; ++p)
	  {
	    /* This test includes !hex because 'e' is a valid hex digit
	       and thus does not indicate a floating point number when
	       the radix is hex.  */

	    if (!hex && (*p == 'e' || *p == 'E'))
	      if (got_e)
		toktype = ERROR;	/* Only one 'e' in a float.  */
	      else
		got_e = 1;
	    /* This test does not include !hex, because a '.' always
	       indicates a decimal floating point number regardless of
	       the radix.  */
	    else if (*p == '.')
	      if (got_dot)
		toktype = ERROR;	/* Only one '.' in a float.  */
	      else
		got_dot = 1;
	    else if (got_e && (p[-1] == 'e' || p[-1] == 'E') &&
		    (*p == '-' || *p == '+'))
	      /* This is the sign of the exponent, not the end of the
		 number.  */
	      continue;
	    /* Always take decimal digits; parse_number handles radix
               error.  */
	    else if (*p >= '0' && *p <= '9')
	      continue;
	    /* We will take letters only if hex is true, and only up
	       to what the input radix would permit.  FSF was content
	       to rely on parse_number to validate; but it leaks.  */
	    else if (*p >= 'a' && *p <= 'z') 
	      {
		if (!hex || *p >= ('a' + local_radix - 10))
		  toktype = ERROR;
	      }
	    else if (*p >= 'A' && *p <= 'Z') 
	      {
		if (!hex || *p >= ('A' + local_radix - 10))
		  toktype = ERROR;
	      }
	    else break;
	  }
	if (toktype != ERROR)
	  toktype = parse_number (tokstart, p - tokstart, 
				  got_dot | got_e, &yylval);
        if (toktype == ERROR)
	  {
	    char *err_copy = (char *) alloca (p - tokstart + 1);

	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error ("Invalid number \"%s\".", err_copy);
	  }
	lexptr = p;
	return toktype;
      }

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
#if 0
    case '@':		/* Moved out below.  */
#endif
    case '<':
    case '>':
    case '[':
    case ']':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return tokchr;

    case '@':
      if (strncmp(tokstart, "@selector", 9) == 0)
	{
	  tokptr = strchr(tokstart, '(');
	  if (tokptr == NULL)
	    {
	      error ("Missing '(' in @selector(...)");
	    }
	  tempbufindex = 0;
	  tokptr++;	/* Skip the '('.  */
	  do {
	    /* Grow the static temp buffer if necessary, including
	       allocating the first one on demand.  */
	    if (tempbufindex + 1 >= tempbufsize)
	      {
		tempbuf = (char *) xrealloc (tempbuf, tempbufsize += 64);
	      }
	    tempbuf[tempbufindex++] = *tokptr++;
	  } while ((*tokptr != ')') && (*tokptr != '\0'));
	  if (*tokptr++ != ')')
	    {
	      error ("Missing ')' in @selector(...)");
	    }
	  tempbuf[tempbufindex] = '\0';
	  yylval.sval.ptr = tempbuf;
	  yylval.sval.length = tempbufindex;
	  lexptr = tokptr;
	  return SELECTOR;
	}
      if (tokstart[1] != '"')
        {
          lexptr++;
          return tokchr;
        }
      /* ObjC NextStep NSString constant: fall thru and parse like
         STRING.  */
      tokstart++;

    case '"':

      /* Build the gdb internal form of the input string in tempbuf,
	 translating any standard C escape forms seen.  Note that the
	 buffer is null byte terminated *only* for the convenience of
	 debugging gdb itself and printing the buffer contents when
	 the buffer contains no embedded nulls.  Gdb does not depend
	 upon the buffer being null byte terminated, it uses the
	 length string instead.  This allows gdb to handle C strings
	 (as well as strings in other languages) with embedded null
	 bytes.  */

      tokptr = ++tokstart;
      tempbufindex = 0;

      do {
	/* Grow the static temp buffer if necessary, including
	   allocating the first one on demand.  */
	if (tempbufindex + 1 >= tempbufsize)
	  {
	    tempbuf = (char *) xrealloc (tempbuf, tempbufsize += 64);
	  }
	switch (*tokptr)
	  {
	  case '\0':
	  case '"':
	    /* Do nothing, loop will terminate.  */
	    break;
	  case '\\':
	    tokptr++;
	    c = parse_escape (parse_gdbarch, &tokptr);
	    if (c == -1)
	      {
		continue;
	      }
	    tempbuf[tempbufindex++] = c;
	    break;
	  default:
	    tempbuf[tempbufindex++] = *tokptr++;
	    break;
	  }
      } while ((*tokptr != '"') && (*tokptr != '\0'));
      if (*tokptr++ != '"')
	{
	  error ("Unterminated string in expression.");
	}
      tempbuf[tempbufindex] = '\0';	/* See note above.  */
      yylval.sval.ptr = tempbuf;
      yylval.sval.length = tempbufindex;
      lexptr = tokptr;
      return (tokchr == '@' ? NSSTRING : STRING);
    }

  if (!(tokchr == '_' || tokchr == '$' || 
       (tokchr >= 'a' && tokchr <= 'z') || (tokchr >= 'A' && tokchr <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error ("Invalid character '%c' in expression.", c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '<');)
    {
       if (c == '<')
	 {
	   int i = namelen;
	   while (tokstart[++i] && tokstart[i] != '>');
	   if (tokstart[i] == '>')
	     namelen = i;
	  }
       c = tokstart[++namelen];
     }

  /* The token "if" terminates the expression and is NOT 
     removed from the input stream.  */
  if (namelen == 2 && tokstart[0] == 'i' && tokstart[1] == 'f')
    {
      return 0;
    }

  lexptr += namelen;

  tryname:

  /* Catch specific keywords.  Should be done with a data structure.  */
  switch (namelen)
    {
    case 8:
      if (strncmp (tokstart, "unsigned", 8) == 0)
	return UNSIGNED;
      if (parse_language->la_language == language_cplus
	  && strncmp (tokstart, "template", 8) == 0)
	return TEMPLATE;
      if (strncmp (tokstart, "volatile", 8) == 0)
	return VOLATILE_KEYWORD;
      break;
    case 6:
      if (strncmp (tokstart, "struct", 6) == 0)
	return STRUCT;
      if (strncmp (tokstart, "signed", 6) == 0)
	return SIGNED_KEYWORD;
      if (strncmp (tokstart, "sizeof", 6) == 0)
	return SIZEOF;
      if (strncmp (tokstart, "double", 6) == 0) 
	return DOUBLE_KEYWORD;
      break;
    case 5:
      if ((parse_language->la_language == language_cplus)
	  && strncmp (tokstart, "class", 5) == 0)
	return CLASS;
      if (strncmp (tokstart, "union", 5) == 0)
	return UNION;
      if (strncmp (tokstart, "short", 5) == 0)
	return SHORT;
      if (strncmp (tokstart, "const", 5) == 0)
	return CONST_KEYWORD;
      break;
    case 4:
      if (strncmp (tokstart, "enum", 4) == 0)
	return ENUM;
      if (strncmp (tokstart, "long", 4) == 0)
	return LONG;
      break;
    case 3:
      if (strncmp (tokstart, "int", 3) == 0)
	return INT_KEYWORD;
      break;
    default:
      break;
    }

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  if (*tokstart == '$')
    {
      write_dollar_variable (yylval.sval);
      return VARIABLE;
    }

  /* Use token-type BLOCKNAME for symbols that happen to be defined as
     functions or symtabs.  If this is not so, then ...
     Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
  {
    char *tmp = copy_name (yylval.sval);
    struct symbol *sym;
    int is_a_field_of_this = 0, *need_this;
    int hextype;

    if (parse_language->la_language == language_cplus ||
	parse_language->la_language == language_objc)
      need_this = &is_a_field_of_this;
    else
      need_this = (int *) NULL;

    sym = lookup_symbol (tmp, expression_context_block,
			 VAR_DOMAIN,
			 need_this);
    /* Call lookup_symtab, not lookup_partial_symtab, in case there
       are no psymtabs (coff, xcoff, or some future change to blow
       away the psymtabs once symbols are read).  */
    if ((sym && SYMBOL_CLASS (sym) == LOC_BLOCK) ||
        lookup_symtab (tmp))
      {
	yylval.ssym.sym = sym;
	yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	return BLOCKNAME;
      }
    if (sym && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
        {
#if 1
	  /* Despite the following flaw, we need to keep this code
	     enabled.  Because we can get called from
	     check_stub_method, if we don't handle nested types then
	     it screws many operations in any program which uses
	     nested types.  */
	  /* In "A::x", if x is a member function of A and there
	     happens to be a type (nested or not, since the stabs
	     don't make that distinction) named x, then this code
	     incorrectly thinks we are dealing with nested types
	     rather than a member function.  */

	  char *p;
	  char *namestart;
	  struct symbol *best_sym;

	  /* Look ahead to detect nested types.  This probably should
	     be done in the grammar, but trying seemed to introduce a
	     lot of shift/reduce and reduce/reduce conflicts.  It's
	     possible that it could be done, though.  Or perhaps a
	     non-grammar, but less ad hoc, approach would work well.  */

	  /* Since we do not currently have any way of distinguishing
	     a nested type from a non-nested one (the stabs don't tell
	     us whether a type is nested), we just ignore the
	     containing type.  */

	  p = lexptr;
	  best_sym = sym;
	  while (1)
	    {
	      /* Skip whitespace.  */
	      while (*p == ' ' || *p == '\t' || *p == '\n')
		++p;
	      if (*p == ':' && p[1] == ':')
		{
		  /* Skip the `::'.  */
		  p += 2;
		  /* Skip whitespace.  */
		  while (*p == ' ' || *p == '\t' || *p == '\n')
		    ++p;
		  namestart = p;
		  while (*p == '_' || *p == '$' || (*p >= '0' && *p <= '9')
			 || (*p >= 'a' && *p <= 'z')
			 || (*p >= 'A' && *p <= 'Z'))
		    ++p;
		  if (p != namestart)
		    {
		      struct symbol *cur_sym;
		      /* As big as the whole rest of the expression,
			 which is at least big enough.  */
		      char *ncopy = alloca (strlen (tmp) +
					    strlen (namestart) + 3);
		      char *tmp1;

		      tmp1 = ncopy;
		      memcpy (tmp1, tmp, strlen (tmp));
		      tmp1 += strlen (tmp);
		      memcpy (tmp1, "::", 2);
		      tmp1 += 2;
		      memcpy (tmp1, namestart, p - namestart);
		      tmp1[p - namestart] = '\0';
		      cur_sym = lookup_symbol (ncopy, 
					       expression_context_block,
					       VAR_DOMAIN, (int *) NULL);
		      if (cur_sym)
			{
			  if (SYMBOL_CLASS (cur_sym) == LOC_TYPEDEF)
			    {
			      best_sym = cur_sym;
			      lexptr = p;
			    }
			  else
			    break;
			}
		      else
			break;
		    }
		  else
		    break;
		}
	      else
		break;
	    }

	  yylval.tsym.type = SYMBOL_TYPE (best_sym);
#else /* not 0 */
	  yylval.tsym.type = SYMBOL_TYPE (sym);
#endif /* not 0 */
	  return TYPENAME;
        }
    yylval.tsym.type
      = language_lookup_primitive_type_by_name (parse_language,
						parse_gdbarch, tmp);
    if (yylval.tsym.type != NULL)
      return TYPENAME;

    /* See if it's an ObjC classname.  */
    if (!sym)
      {
	CORE_ADDR Class = lookup_objc_class (parse_gdbarch, tmp);
	if (Class)
	  {
	    yylval.class.class = Class;
	    if ((sym = lookup_struct_typedef (tmp, 
					      expression_context_block, 
					      1)))
	      yylval.class.type = SYMBOL_TYPE (sym);
	    return CLASSNAME;
	  }
      }

    /* Input names that aren't symbols but ARE valid hex numbers,
       when the input radix permits them, can be names or numbers
       depending on the parse.  Note we support radixes > 16 here.  */
    if (!sym && 
        ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10) ||
         (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10)))
      {
 	YYSTYPE newlval;	/* Its value is ignored.  */
	hextype = parse_number (tokstart, namelen, 0, &newlval);
	if (hextype == INT)
	  {
	    yylval.ssym.sym = sym;
	    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	    return NAME_OR_INT;
	  }
      }

    /* Any other kind of symbol.  */
    yylval.ssym.sym = sym;
    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
    return NAME;
  }
}

void
yyerror (msg)
     char *msg;
{
  if (*lexptr == '\0')
    error("A %s near end of expression.",  (msg ? msg : "error"));
  else
    error ("A %s in expression, near `%s'.", (msg ? msg : "error"), 
	   lexptr);
}


