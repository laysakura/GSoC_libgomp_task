
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 26 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"
#include "ld.h"
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldfile.h"
#include "ldemul.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;

lang_memory_region_type *region;

bfd_boolean ldgram_want_filename = TRUE;
FILE *saved_script_handle = NULL;
bfd_boolean force_make_executable = FALSE;

bfd_boolean ldgram_in_script = FALSE;
bfd_boolean ldgram_had_equals = FALSE;
bfd_boolean ldgram_had_keep = FALSE;
char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;


/* Line 189 of yacc.c  */
#line 120 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     NAME = 259,
     LNAME = 260,
     OREQ = 261,
     ANDEQ = 262,
     RSHIFTEQ = 263,
     LSHIFTEQ = 264,
     DIVEQ = 265,
     MULTEQ = 266,
     MINUSEQ = 267,
     PLUSEQ = 268,
     OROR = 269,
     ANDAND = 270,
     NE = 271,
     EQ = 272,
     GE = 273,
     LE = 274,
     RSHIFT = 275,
     LSHIFT = 276,
     UNARY = 277,
     END = 278,
     ALIGN_K = 279,
     BLOCK = 280,
     BIND = 281,
     QUAD = 282,
     SQUAD = 283,
     LONG = 284,
     SHORT = 285,
     BYTE = 286,
     SECTIONS = 287,
     PHDRS = 288,
     DATA_SEGMENT_ALIGN = 289,
     DATA_SEGMENT_RELRO_END = 290,
     DATA_SEGMENT_END = 291,
     SORT_BY_NAME = 292,
     SORT_BY_ALIGNMENT = 293,
     SIZEOF_HEADERS = 294,
     OUTPUT_FORMAT = 295,
     FORCE_COMMON_ALLOCATION = 296,
     OUTPUT_ARCH = 297,
     INHIBIT_COMMON_ALLOCATION = 298,
     SEGMENT_START = 299,
     INCLUDE = 300,
     MEMORY = 301,
     DEFSYMEND = 302,
     NOLOAD = 303,
     DSECT = 304,
     COPY = 305,
     INFO = 306,
     OVERLAY = 307,
     DEFINED = 308,
     TARGET_K = 309,
     SEARCH_DIR = 310,
     MAP = 311,
     ENTRY = 312,
     NEXT = 313,
     SIZEOF = 314,
     ADDR = 315,
     LOADADDR = 316,
     MAX_K = 317,
     MIN_K = 318,
     STARTUP = 319,
     HLL = 320,
     SYSLIB = 321,
     FLOAT = 322,
     NOFLOAT = 323,
     NOCROSSREFS = 324,
     ORIGIN = 325,
     FILL = 326,
     LENGTH = 327,
     CREATE_OBJECT_SYMBOLS = 328,
     INPUT = 329,
     GROUP = 330,
     OUTPUT = 331,
     CONSTRUCTORS = 332,
     ALIGNMOD = 333,
     AT = 334,
     SUBALIGN = 335,
     PROVIDE = 336,
     AS_NEEDED = 337,
     CHIP = 338,
     LIST = 339,
     SECT = 340,
     ABSOLUTE = 341,
     LOAD = 342,
     NEWLINE = 343,
     ENDWORD = 344,
     ORDER = 345,
     NAMEWORD = 346,
     ASSERT_K = 347,
     FORMAT = 348,
     PUBLIC = 349,
     BASE = 350,
     ALIAS = 351,
     TRUNCATE = 352,
     REL = 353,
     INPUT_SCRIPT = 354,
     INPUT_MRI_SCRIPT = 355,
     INPUT_DEFSYM = 356,
     CASE = 357,
     EXTERN = 358,
     START = 359,
     VERS_TAG = 360,
     VERS_IDENTIFIER = 361,
     GLOBAL = 362,
     LOCAL = 363,
     VERSIONK = 364,
     INPUT_VERSION_SCRIPT = 365,
     KEEP = 366,
     ONLY_IF_RO = 367,
     ONLY_IF_RW = 368,
     EXCLUDE_FILE = 369
   };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define LNAME 260
#define OREQ 261
#define ANDEQ 262
#define RSHIFTEQ 263
#define LSHIFTEQ 264
#define DIVEQ 265
#define MULTEQ 266
#define MINUSEQ 267
#define PLUSEQ 268
#define OROR 269
#define ANDAND 270
#define NE 271
#define EQ 272
#define GE 273
#define LE 274
#define RSHIFT 275
#define LSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define DATA_SEGMENT_ALIGN 289
#define DATA_SEGMENT_RELRO_END 290
#define DATA_SEGMENT_END 291
#define SORT_BY_NAME 292
#define SORT_BY_ALIGNMENT 293
#define SIZEOF_HEADERS 294
#define OUTPUT_FORMAT 295
#define FORCE_COMMON_ALLOCATION 296
#define OUTPUT_ARCH 297
#define INHIBIT_COMMON_ALLOCATION 298
#define SEGMENT_START 299
#define INCLUDE 300
#define MEMORY 301
#define DEFSYMEND 302
#define NOLOAD 303
#define DSECT 304
#define COPY 305
#define INFO 306
#define OVERLAY 307
#define DEFINED 308
#define TARGET_K 309
#define SEARCH_DIR 310
#define MAP 311
#define ENTRY 312
#define NEXT 313
#define SIZEOF 314
#define ADDR 315
#define LOADADDR 316
#define MAX_K 317
#define MIN_K 318
#define STARTUP 319
#define HLL 320
#define SYSLIB 321
#define FLOAT 322
#define NOFLOAT 323
#define NOCROSSREFS 324
#define ORIGIN 325
#define FILL 326
#define LENGTH 327
#define CREATE_OBJECT_SYMBOLS 328
#define INPUT 329
#define GROUP 330
#define OUTPUT 331
#define CONSTRUCTORS 332
#define ALIGNMOD 333
#define AT 334
#define SUBALIGN 335
#define PROVIDE 336
#define AS_NEEDED 337
#define CHIP 338
#define LIST 339
#define SECT 340
#define ABSOLUTE 341
#define LOAD 342
#define NEWLINE 343
#define ENDWORD 344
#define ORDER 345
#define NAMEWORD 346
#define ASSERT_K 347
#define FORMAT 348
#define PUBLIC 349
#define BASE 350
#define ALIAS 351
#define TRUNCATE 352
#define REL 353
#define INPUT_SCRIPT 354
#define INPUT_MRI_SCRIPT 355
#define INPUT_DEFSYM 356
#define CASE 357
#define EXTERN 358
#define START 359
#define VERS_TAG 360
#define VERS_IDENTIFIER 361
#define GLOBAL 362
#define LOCAL 363
#define VERSIONK 364
#define INPUT_VERSION_SCRIPT 365
#define KEEP 366
#define ONLY_IF_RO 367
#define ONLY_IF_RW 368
#define EXCLUDE_FILE 369




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 71 "ldgram.y"

  bfd_vma integer;
  struct big_int
    {
      bfd_vma integer;
      char *str;
    } bigint;
  fill_type *fill;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  struct wildcard_list *wildcard_list;
  struct name_list *name_list;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      bfd_boolean filehdr;
      bfd_boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;



/* Line 214 of yacc.c  */
#line 415 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 427 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNRULES -- Number of states.  */
#define YYNSTATES  689

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   369

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,     2,     2,     2,    34,    21,     2,
      37,   133,    32,    30,   131,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   132,
      24,     6,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   134,     2,   135,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    19,    54,   137,     2,     2,     2,
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
       5,     7,     8,     9,    10,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    17,    18,    23,
      24,    27,    31,    32,    35,    40,    42,    44,    47,    49,
      54,    59,    63,    66,    71,    75,    80,    85,    90,    95,
     100,   103,   106,   109,   114,   119,   122,   125,   128,   131,
     132,   138,   141,   142,   146,   149,   150,   152,   156,   158,
     162,   163,   165,   169,   171,   174,   178,   179,   182,   185,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   204,
     206,   211,   216,   221,   226,   235,   240,   242,   244,   249,
     250,   256,   261,   262,   268,   273,   278,   280,   284,   287,
     289,   293,   296,   297,   303,   304,   312,   313,   320,   325,
     328,   331,   332,   337,   340,   341,   349,   351,   353,   355,
     357,   363,   368,   373,   381,   389,   397,   405,   414,   417,
     419,   423,   425,   427,   431,   436,   438,   439,   445,   448,
     450,   452,   454,   459,   461,   466,   471,   474,   476,   477,
     479,   481,   483,   485,   487,   489,   491,   494,   495,   497,
     499,   501,   503,   505,   507,   509,   511,   513,   515,   519,
     523,   530,   532,   533,   539,   542,   546,   547,   548,   556,
     560,   564,   565,   569,   571,   574,   576,   579,   584,   589,
     593,   597,   599,   604,   608,   609,   611,   613,   614,   617,
     621,   622,   625,   628,   632,   637,   640,   643,   646,   650,
     654,   658,   662,   666,   670,   674,   678,   682,   686,   690,
     694,   698,   702,   706,   710,   716,   720,   724,   729,   731,
     733,   738,   743,   748,   753,   758,   765,   772,   779,   784,
     791,   796,   798,   805,   812,   819,   824,   829,   833,   834,
     839,   840,   845,   846,   848,   850,   851,   852,   853,   854,
     855,   856,   875,   876,   877,   878,   879,   880,   899,   900,
     901,   909,   911,   913,   915,   917,   919,   923,   924,   927,
     931,   934,   941,   952,   955,   957,   958,   960,   963,   964,
     965,   969,   970,   971,   972,   973,   985,   990,   991,   994,
     995,   996,  1003,  1005,  1006,  1010,  1016,  1017,  1021,  1022,
    1025,  1026,  1032,  1034,  1037,  1042,  1048,  1055,  1057,  1060,
    1061,  1064,  1069,  1074,  1083,  1085,  1089,  1090,  1100,  1101,
    1109,  1110
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,   115,   153,    -1,   116,   143,    -1,   126,
     239,    -1,   117,   141,    -1,     4,    -1,    -1,   142,     4,
       6,   202,    -1,    -1,   144,   145,    -1,   145,   146,   104,
      -1,    -1,    99,   202,    -1,    99,   202,   131,   202,    -1,
       4,    -1,   100,    -1,   106,   148,    -1,   105,    -1,   110,
       4,     6,   202,    -1,   110,     4,   131,   202,    -1,   110,
       4,   202,    -1,   109,     4,    -1,   101,     4,   131,   202,
      -1,   101,     4,   202,    -1,   101,     4,     6,   202,    -1,
      38,     4,     6,   202,    -1,    38,     4,   131,   202,    -1,
      94,     4,     6,   202,    -1,    94,     4,   131,   202,    -1,
     102,   150,    -1,   103,   149,    -1,   107,     4,    -1,   112,
       4,   131,     4,    -1,   112,     4,   131,     3,    -1,   111,
     202,    -1,   113,     3,    -1,   118,   151,    -1,   119,   152,
      -1,    -1,    61,   140,   147,   145,    36,    -1,   120,     4,
      -1,    -1,   148,   131,     4,    -1,   148,     4,    -1,    -1,
       4,    -1,   149,   131,     4,    -1,     4,    -1,   150,   131,
       4,    -1,    -1,     4,    -1,   151,   131,     4,    -1,     4,
      -1,   152,     4,    -1,   152,   131,     4,    -1,    -1,   154,
     155,    -1,   155,   156,    -1,    -1,   184,    -1,   163,    -1,
     231,    -1,   193,    -1,   194,    -1,   196,    -1,   198,    -1,
     165,    -1,   241,    -1,   132,    -1,    70,    37,     4,   133,
      -1,    71,    37,   140,   133,    -1,    92,    37,   140,   133,
      -1,    56,    37,     4,   133,    -1,    56,    37,     4,   131,
       4,   131,     4,   133,    -1,    58,    37,     4,   133,    -1,
      57,    -1,    59,    -1,    90,    37,   159,   133,    -1,    -1,
      91,   157,    37,   159,   133,    -1,    72,    37,   140,   133,
      -1,    -1,    61,   140,   158,   155,    36,    -1,    85,    37,
     199,   133,    -1,   119,    37,   152,   133,    -1,     4,    -1,
     159,   131,     4,    -1,   159,     4,    -1,     5,    -1,   159,
     131,     5,    -1,   159,     5,    -1,    -1,    98,    37,   160,
     159,   133,    -1,    -1,   159,   131,    98,    37,   161,   159,
     133,    -1,    -1,   159,    98,    37,   162,   159,   133,    -1,
      46,    53,   164,    54,    -1,   164,   207,    -1,   164,   165,
      -1,    -1,    73,    37,     4,   133,    -1,   182,   181,    -1,
      -1,   108,   166,    37,   202,   131,     4,   133,    -1,     4,
      -1,    32,    -1,    15,    -1,   167,    -1,   130,    37,   169,
     133,   167,    -1,    51,    37,   167,   133,    -1,    52,    37,
     167,   133,    -1,    51,    37,    52,    37,   167,   133,   133,
      -1,    51,    37,    51,    37,   167,   133,   133,    -1,    52,
      37,    51,    37,   167,   133,   133,    -1,    52,    37,    52,
      37,   167,   133,   133,    -1,    51,    37,   130,    37,   169,
     133,   167,   133,    -1,   169,   167,    -1,   167,    -1,   170,
     183,   168,    -1,   168,    -1,     4,    -1,   134,   170,   135,
      -1,   168,    37,   170,   133,    -1,   171,    -1,    -1,   127,
      37,   173,   171,   133,    -1,   182,   181,    -1,    89,    -1,
     132,    -1,    93,    -1,    51,    37,    93,   133,    -1,   172,
      -1,   177,    37,   200,   133,    -1,    87,    37,   178,   133,
      -1,   175,   174,    -1,   174,    -1,    -1,   175,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,   200,
      -1,     6,   178,    -1,    -1,    14,    -1,    13,    -1,    12,
      -1,    11,    -1,    10,    -1,     9,    -1,     8,    -1,     7,
      -1,   132,    -1,   131,    -1,     4,     6,   200,    -1,     4,
     180,   200,    -1,    97,    37,     4,     6,   200,   133,    -1,
     131,    -1,    -1,    62,    53,   186,   185,    54,    -1,   185,
     186,    -1,   185,   131,   186,    -1,    -1,    -1,     4,   187,
     190,    16,   188,   183,   189,    -1,    86,     6,   200,    -1,
      88,     6,   200,    -1,    -1,    37,   191,   133,    -1,   192,
      -1,   191,   192,    -1,     4,    -1,   136,     4,    -1,    80,
      37,   140,   133,    -1,    81,    37,   195,   133,    -1,    81,
      37,   133,    -1,   195,   183,   140,    -1,   140,    -1,    82,
      37,   197,   133,    -1,   197,   183,   140,    -1,    -1,    83,
      -1,    84,    -1,    -1,     4,   199,    -1,     4,   131,   199,
      -1,    -1,   201,   202,    -1,    31,   202,    -1,    37,   202,
     133,    -1,    74,    37,   202,   133,    -1,   136,   202,    -1,
      30,   202,    -1,   137,   202,    -1,   202,    32,   202,    -1,
     202,    33,   202,    -1,   202,    34,   202,    -1,   202,    30,
     202,    -1,   202,    31,   202,    -1,   202,    29,   202,    -1,
     202,    28,   202,    -1,   202,    23,   202,    -1,   202,    22,
     202,    -1,   202,    27,   202,    -1,   202,    26,   202,    -1,
     202,    24,   202,    -1,   202,    25,   202,    -1,   202,    21,
     202,    -1,   202,    20,   202,    -1,   202,    19,   202,    -1,
     202,    15,   202,    16,   202,    -1,   202,    18,   202,    -1,
     202,    17,   202,    -1,    69,    37,     4,   133,    -1,     3,
      -1,    55,    -1,    75,    37,     4,   133,    -1,    76,    37,
       4,   133,    -1,    77,    37,     4,   133,    -1,   102,    37,
     202,   133,    -1,    38,    37,   202,   133,    -1,    38,    37,
     202,   131,   202,   133,    -1,    48,    37,   202,   131,   202,
     133,    -1,    49,    37,   202,   131,   202,   133,    -1,    50,
      37,   202,   133,    -1,    60,    37,     4,   131,   202,   133,
      -1,    39,    37,   202,   133,    -1,     4,    -1,    78,    37,
     202,   131,   202,   133,    -1,    79,    37,   202,   131,   202,
     133,    -1,   108,    37,   202,   131,     4,   133,    -1,    86,
      37,     4,   133,    -1,    88,    37,     4,   133,    -1,    95,
      25,     4,    -1,    -1,    95,    37,   202,   133,    -1,    -1,
      96,    37,   202,   133,    -1,    -1,   128,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,   208,   222,   204,
     205,   209,   206,    53,   210,   176,    54,   211,   225,   203,
     226,   179,   212,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      68,   213,   223,   224,   204,   205,   214,    53,   215,   227,
      54,   216,   225,   203,   226,   179,   217,   183,    -1,    -1,
      -1,    91,   218,   222,   219,    53,   164,    54,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    37,
     220,   133,    -1,    -1,    37,   133,    -1,   202,   221,    16,
      -1,   221,    16,    -1,    40,    37,   202,   133,   221,    16,
      -1,    40,    37,   202,   133,    39,    37,   202,   133,   221,
      16,    -1,   202,    16,    -1,    16,    -1,    -1,    85,    -1,
      25,     4,    -1,    -1,    -1,   226,    16,     4,    -1,    -1,
      -1,    -1,    -1,   227,     4,   228,    53,   176,    54,   229,
     226,   179,   230,   183,    -1,    47,    53,   232,    54,    -1,
      -1,   232,   233,    -1,    -1,    -1,     4,   234,   236,   237,
     235,   132,    -1,   202,    -1,    -1,     4,   238,   237,    -1,
      95,    37,   202,   133,   237,    -1,    -1,    37,   202,   133,
      -1,    -1,   240,   243,    -1,    -1,   242,   125,    53,   243,
      54,    -1,   244,    -1,   243,   244,    -1,    53,   246,    54,
     132,    -1,   121,    53,   246,    54,   132,    -1,   121,    53,
     246,    54,   245,   132,    -1,   121,    -1,   245,   121,    -1,
      -1,   247,   132,    -1,   123,    16,   247,   132,    -1,   124,
      16,   247,   132,    -1,   123,    16,   247,   132,   124,    16,
     247,   132,    -1,   122,    -1,   247,   132,   122,    -1,    -1,
     247,   132,   119,     4,    53,   248,   247,   250,    54,    -1,
      -1,   119,     4,    53,   249,   247,   250,    54,    -1,    -1,
     132,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   169,   170,   171,   175,   179,   179,   189,
     189,   202,   203,   207,   208,   209,   212,   215,   216,   217,
     219,   221,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   240,   241,   243,   245,   247,   249,   251,   252,   254,
     253,   257,   259,   263,   264,   265,   269,   271,   275,   277,
     282,   283,   284,   288,   290,   292,   297,   297,   308,   309,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   327,   329,   331,   334,   336,   338,   340,   342,   344,
     343,   347,   350,   349,   353,   357,   361,   364,   367,   370,
     373,   376,   380,   379,   384,   383,   388,   387,   394,   398,
     399,   400,   404,   406,   407,   407,   415,   419,   423,   430,
     436,   442,   448,   454,   460,   466,   472,   478,   487,   496,
     507,   516,   527,   535,   539,   546,   548,   547,   554,   555,
     559,   560,   565,   570,   571,   576,   583,   584,   587,   589,
     593,   595,   597,   599,   601,   606,   616,   618,   622,   624,
     626,   628,   630,   632,   634,   636,   641,   641,   646,   650,
     658,   666,   666,   670,   674,   675,   676,   681,   680,   688,
     696,   706,   707,   711,   712,   716,   718,   723,   728,   729,
     734,   736,   742,   744,   746,   750,   752,   758,   761,   770,
     781,   781,   787,   789,   791,   793,   795,   797,   800,   802,
     804,   806,   808,   810,   812,   814,   816,   818,   820,   822,
     824,   826,   828,   830,   832,   834,   836,   838,   840,   842,
     845,   847,   849,   851,   853,   855,   857,   859,   861,   863,
     872,   874,   876,   878,   880,   882,   884,   890,   891,   895,
     896,   900,   901,   905,   906,   907,   910,   913,   916,   922,
     924,   910,   931,   933,   935,   940,   942,   930,   952,   954,
     952,   962,   963,   964,   965,   966,   970,   971,   972,   976,
     977,   982,   983,   988,   989,   994,   995,  1000,  1002,  1007,
    1010,  1023,  1027,  1032,  1034,  1025,  1042,  1045,  1047,  1051,
    1052,  1051,  1061,  1106,  1109,  1121,  1130,  1133,  1142,  1142,
    1156,  1156,  1166,  1167,  1171,  1175,  1179,  1186,  1190,  1198,
    1201,  1205,  1209,  1213,  1220,  1224,  1229,  1228,  1239,  1238,
    1250,  1252
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "LNAME", "'='", "OREQ",
  "ANDEQ", "RSHIFTEQ", "LSHIFTEQ", "DIVEQ", "MULTEQ", "MINUSEQ", "PLUSEQ",
  "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "NE", "EQ", "'<'",
  "'>'", "GE", "LE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND", "QUAD", "SQUAD",
  "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "DATA_SEGMENT_ALIGN",
  "DATA_SEGMENT_RELRO_END", "DATA_SEGMENT_END", "SORT_BY_NAME",
  "SORT_BY_ALIGNMENT", "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INHIBIT_COMMON_ALLOCATION",
  "SEGMENT_START", "INCLUDE", "MEMORY", "DEFSYMEND", "NOLOAD", "DSECT",
  "COPY", "INFO", "OVERLAY", "DEFINED", "TARGET_K", "SEARCH_DIR", "MAP",
  "ENTRY", "NEXT", "SIZEOF", "ADDR", "LOADADDR", "MAX_K", "MIN_K",
  "STARTUP", "HLL", "SYSLIB", "FLOAT", "NOFLOAT", "NOCROSSREFS", "ORIGIN",
  "FILL", "LENGTH", "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT",
  "CONSTRUCTORS", "ALIGNMOD", "AT", "SUBALIGN", "PROVIDE", "AS_NEEDED",
  "CHIP", "LIST", "SECT", "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD",
  "ORDER", "NAMEWORD", "ASSERT_K", "FORMAT", "PUBLIC", "BASE", "ALIAS",
  "TRUNCATE", "REL", "INPUT_SCRIPT", "INPUT_MRI_SCRIPT", "INPUT_DEFSYM",
  "CASE", "EXTERN", "START", "VERS_TAG", "VERS_IDENTIFIER", "GLOBAL",
  "LOCAL", "VERSIONK", "INPUT_VERSION_SCRIPT", "KEEP", "ONLY_IF_RO",
  "ONLY_IF_RW", "EXCLUDE_FILE", "','", "';'", "')'", "'['", "']'", "'!'",
  "'~'", "$accept", "file", "filename", "defsym_expr", "$@1",
  "mri_script_file", "$@2", "mri_script_lines", "mri_script_command",
  "$@3", "ordernamelist", "mri_load_name_list", "mri_abs_name_list",
  "casesymlist", "extern_name_list", "script_file", "$@4", "ifile_list",
  "ifile_p1", "$@5", "$@6", "input_list", "@7", "@8", "@9", "sections",
  "sec_or_group_p1", "statement_anywhere", "$@10", "wildcard_name",
  "wildcard_spec", "exclude_name_list", "file_NAME_list",
  "input_section_spec_no_keep", "input_section_spec", "$@11", "statement",
  "statement_list", "statement_list_opt", "length", "fill_exp", "fill_opt",
  "assign_op", "end", "assignment", "opt_comma", "memory",
  "memory_spec_list", "memory_spec", "$@12", "origin_spec", "length_spec",
  "attributes_opt", "attributes_list", "attributes_string", "startup",
  "high_level_library", "high_level_library_NAME_list",
  "low_level_library", "low_level_library_NAME_list",
  "floating_point_support", "nocrossref_list", "mustbe_exp", "$@13", "exp",
  "memspec_at_opt", "opt_at", "opt_subalign", "sect_constraint", "section",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "type", "atype", "opt_exp_with_type",
  "opt_exp_without_type", "opt_nocrossrefs", "memspec_opt", "phdr_opt",
  "overlay_section", "$@26", "$@27", "$@28", "phdrs", "phdr_list", "phdr",
  "$@29", "$@30", "phdr_type", "phdr_qualifiers", "phdr_val",
  "version_script_file", "$@31", "version", "$@32", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@33", "@34",
  "opt_semicolon", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    61,   261,   262,   263,
     264,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   123,   125,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,    44,    59,    41,    91,    93,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   138,   139,   139,   139,   139,   140,   142,   141,   144,
     143,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   147,
     146,   146,   146,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   152,   152,   152,   154,   153,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   157,
     156,   156,   158,   156,   156,   156,   159,   159,   159,   159,
     159,   159,   160,   159,   161,   159,   162,   159,   163,   164,
     164,   164,   165,   165,   166,   165,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   172,   173,   172,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   178,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   181,   181,   182,   182,
     182,   183,   183,   184,   185,   185,   185,   187,   186,   188,
     189,   190,   190,   191,   191,   192,   192,   193,   194,   194,
     195,   195,   196,   197,   197,   198,   198,   199,   199,   199,
     201,   200,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   206,   208,   209,   210,   211,
     212,   207,   213,   214,   215,   216,   217,   207,   218,   219,
     207,   220,   220,   220,   220,   220,   221,   221,   221,   222,
     222,   222,   222,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   228,   229,   230,   227,   231,   232,   232,   234,
     235,   233,   236,   237,   237,   237,   238,   238,   240,   239,
     242,   241,   243,   243,   244,   244,   244,   245,   245,   246,
     246,   246,   246,   246,   247,   247,   248,   247,   249,   247,
     250,   250
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     0,     4,     0,
       2,     3,     0,     2,     4,     1,     1,     2,     1,     4,
       4,     3,     2,     4,     3,     4,     4,     4,     4,     4,
       2,     2,     2,     4,     4,     2,     2,     2,     2,     0,
       5,     2,     0,     3,     2,     0,     1,     3,     1,     3,
       0,     1,     3,     1,     2,     3,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     8,     4,     1,     1,     4,     0,
       5,     4,     0,     5,     4,     4,     1,     3,     2,     1,
       3,     2,     0,     5,     0,     7,     0,     6,     4,     2,
       2,     0,     4,     2,     0,     7,     1,     1,     1,     1,
       5,     4,     4,     7,     7,     7,     7,     8,     2,     1,
       3,     1,     1,     3,     4,     1,     0,     5,     2,     1,
       1,     1,     4,     1,     4,     4,     2,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       6,     1,     0,     5,     2,     3,     0,     0,     7,     3,
       3,     0,     3,     1,     2,     1,     2,     4,     4,     3,
       3,     1,     4,     3,     0,     1,     1,     0,     2,     3,
       0,     2,     2,     3,     4,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     1,     1,
       4,     4,     4,     4,     4,     6,     6,     6,     4,     6,
       4,     1,     6,     6,     6,     4,     4,     3,     0,     4,
       0,     4,     0,     1,     1,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,     0,    18,     0,     0,
       7,     1,     1,     1,     1,     1,     3,     0,     2,     3,
       2,     6,    10,     2,     1,     0,     1,     2,     0,     0,
       3,     0,     0,     0,     0,    11,     4,     0,     2,     0,
       0,     6,     1,     0,     3,     5,     0,     3,     0,     2,
       0,     5,     1,     2,     4,     5,     6,     1,     2,     0,
       2,     4,     4,     8,     1,     3,     0,     9,     0,     7,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    56,     9,     7,   298,     0,     2,    59,     3,    12,
       5,     0,     4,     0,     1,    57,    10,     0,   309,     0,
     299,   302,     0,     0,     0,     0,    76,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   186,
       0,     0,    79,     0,     0,   104,     0,    69,    58,    61,
      67,     0,    60,    63,    64,    65,    66,    62,    68,     0,
      15,     0,     0,     0,     0,    16,     0,     0,     0,    18,
      45,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,   314,     0,     0,     0,     0,   309,   303,
     190,   155,   154,   153,   152,   151,   150,   149,   148,   190,
     101,   287,     0,     0,     6,    82,     0,     0,     0,     0,
       0,     0,     0,   184,   187,     0,     0,     0,     0,     0,
       0,   157,   156,   103,     0,     0,    39,     0,   218,   231,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,    48,    30,    46,    31,    17,
      32,    22,     0,    35,     0,    36,    51,    37,    53,    38,
      41,    11,     8,     0,     0,     0,     0,   310,     0,   158,
       0,   159,     0,     0,     0,     0,    59,   167,   166,     0,
       0,     0,     0,     0,   179,   181,   162,   162,   187,     0,
      86,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,   196,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   195,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    44,     0,     0,     0,    21,     0,     0,    54,
       0,   318,     0,     0,   304,     0,   315,     0,   191,   246,
      98,   252,   258,   100,    99,   289,   286,   288,     0,    73,
      75,   300,   171,     0,    70,    71,    81,   102,   177,   161,
     178,     0,   182,     0,   187,   188,    84,    92,    88,    91,
       0,     0,    78,     0,    72,   190,     0,    85,     0,    26,
      27,    42,    28,    29,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   215,   213,   212,   211,   206,   205,
     209,   210,   208,   207,   204,   203,   201,   202,   198,   199,
     200,    14,    25,    23,    49,    47,    43,    19,    20,    34,
      33,    52,    55,     0,   311,   312,     0,   307,   305,     0,
     267,     0,   267,     0,     0,    83,     0,     0,   163,     0,
     164,   180,   183,   189,     0,    96,    87,    90,     0,    80,
       0,     0,   301,    40,     0,   224,   230,     0,     0,   228,
       0,   217,   194,   220,   221,   222,     0,     0,   235,   236,
     223,     0,     0,   320,     0,   316,   308,   306,     0,     0,
     267,     0,   240,   274,     0,   275,   259,   292,   293,     0,
     175,     0,     0,   173,     0,   165,     0,     0,    94,   160,
       0,     0,     0,     0,     0,     0,     0,     0,   214,   321,
       0,     0,     0,   261,   262,   263,   264,   265,   268,     0,
       0,     0,     0,   270,     0,   242,   273,   276,   240,     0,
     296,     0,   290,     0,   176,   172,   174,     0,   162,    93,
       0,     0,   105,   225,   226,   227,   229,   232,   233,   234,
     319,     0,   320,   266,     0,   269,     0,     0,   247,   242,
     101,     0,   293,     0,     0,    74,   190,     0,    97,     0,
     313,     0,   267,     0,     0,   245,   253,     0,     0,   294,
       0,   291,   169,     0,   168,    95,   317,     0,     0,   239,
       0,   243,   244,     0,     0,   260,   297,   293,   190,     0,
     271,   241,   248,   254,   295,   170,     0,   138,   281,   267,
     122,   108,   107,   140,   141,   142,   143,   144,     0,     0,
       0,   129,   131,     0,     0,   130,     0,   109,     0,   125,
     133,   137,   139,     0,     0,     0,     0,     0,     0,     0,
     190,   126,     0,   106,     0,   121,   162,     0,   136,   249,
     190,   128,   282,   255,   272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,     0,   119,     0,     0,   123,
       0,   162,   278,     0,     0,   278,     0,     0,   132,     0,
     111,     0,     0,   112,   135,   106,     0,     0,   118,   120,
     124,     0,   238,   134,   138,   238,     0,     0,     0,     0,
       0,   127,   110,   277,     0,   279,     0,   279,     0,     0,
       0,     0,     0,     0,   147,   283,   147,   114,   113,     0,
     115,   116,   237,   190,     0,   250,   279,   256,   117,   146,
     280,   162,   147,   162,   251,   284,   257,   162,   285
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   105,    10,    11,     8,     9,    16,    80,   212,
     159,   158,   156,   167,   169,     6,     7,    15,    48,   116,
     186,   203,   394,   491,   447,    49,   182,    50,   119,   577,
     578,   617,   596,   579,   580,   615,   581,   582,   583,   584,
     613,   675,    99,   123,    51,   620,    52,   293,   188,   292,
     488,   534,   387,   442,   443,    53,    54,   196,    55,   197,
      56,   199,   614,   180,   217,   655,   475,   508,   543,   284,
     380,   525,   557,   622,   681,   381,   544,   558,   625,   683,
     382,   479,   469,   431,   432,   435,   478,   642,   664,   586,
     624,   676,   687,    57,   183,   287,   383,   514,   438,   482,
     512,    12,    13,    58,    59,    20,    21,   379,    86,    87,
     462,   373,   460
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -604
static const yytype_int16 yypact[] =
{
     146,  -604,  -604,  -604,  -604,    53,  -604,  -604,  -604,  -604,
    -604,    21,  -604,   -23,  -604,   690,  1297,   166,   164,   122,
     -23,  -604,   689,   160,   170,   182,  -604,   193,  -604,   244,
     202,   228,   233,   255,   263,   265,   273,   274,  -604,  -604,
     275,   279,  -604,   282,   298,  -604,   301,  -604,  -604,  -604,
    -604,   -51,  -604,  -604,  -604,  -604,  -604,  -604,  -604,   156,
    -604,   314,   244,   335,   603,  -604,   338,   341,   342,  -604,
    -604,   345,   349,   351,   603,   354,   356,   357,   359,   373,
     276,   603,   375,  -604,   365,   366,   334,   257,   164,  -604,
    -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,
    -604,  -604,   386,   387,  -604,  -604,   389,   390,   244,   244,
     391,   244,    19,  -604,   392,    28,   362,   244,   396,   367,
     359,  -604,  -604,  -604,   352,    25,  -604,    36,  -604,  -604,
     603,   603,   603,   371,   372,   380,   382,   383,  -604,   385,
     400,   403,   404,   405,   406,   407,   410,   413,   415,   417,
     418,   603,   603,  1319,   229,  -604,   271,  -604,   293,    37,
    -604,  -604,   337,  1609,   325,  -604,  -604,   326,  -604,    40,
    -604,  -604,  1609,   408,   -95,   -95,   328,   -54,   409,  -604,
     603,  -604,   310,    13,     8,   329,  -604,  -604,  -604,   332,
     333,   336,   344,   346,  -604,  -604,   112,   118,    68,   347,
    -604,  -604,   430,    24,    28,   348,   464,   603,    85,   -23,
     603,   603,  -604,   603,   603,  -604,  -604,   891,   603,   603,
     603,   603,   603,   467,   468,   603,   474,   483,   486,   603,
     603,   487,   492,   603,   603,  -604,  -604,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   603,   603,   603,  1609,
     493,   494,  -604,   495,   603,   603,  1609,   124,   497,  -604,
     498,  -604,   374,   376,  -604,   499,  -604,   -31,  1609,   689,
    -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,   500,  -604,
    -604,   755,   470,    45,  -604,  -604,  -604,  -604,  -604,  -604,
    -604,   244,  -604,   244,   392,  -604,  -604,  -604,  -604,  -604,
     472,   111,  -604,    33,  -604,  -604,  1434,  -604,   -18,  1609,
    1609,  1324,  1609,  1609,  -604,   871,   911,  1454,  1474,   931,
     381,   378,   951,   384,   393,   397,  1494,  1514,   399,   401,
     988,  1549,  1631,  1085,   967,   701,  1199,  1280,   851,   851,
     296,   296,   296,   296,   339,   339,    72,    72,  -604,  -604,
    -604,  1609,  1609,  1609,  -604,  -604,  -604,  1609,  1609,  -604,
    -604,  -604,  -604,   -95,   105,   -54,   460,  -604,  -604,     0,
     445,   524,   445,   603,   394,  -604,    12,   502,  -604,   389,
    -604,  -604,  -604,  -604,    28,  -604,  -604,  -604,   478,  -604,
     402,   512,  -604,  -604,   603,  -604,  -604,   603,   603,  -604,
     603,  -604,  -604,  -604,  -604,  -604,   603,   603,  -604,  -604,
    -604,   525,   603,   411,   520,  -604,  -604,  -604,     9,   501,
    1569,   521,   444,  -604,  1666,   456,  -604,  1609,    14,   538,
    -604,   540,     7,  -604,   459,  -604,   103,    28,  -604,  -604,
     423,  1008,  1028,  1048,  1068,  1105,  1125,   424,  1609,   -54,
     496,   -95,   -95,  -604,  -604,  -604,  -604,  -604,  -604,   425,
     603,    69,   530,  -604,   514,   463,  -604,  -604,   444,   507,
     527,   528,  -604,   433,  -604,  -604,  -604,   561,   437,  -604,
     109,    28,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,
    -604,   438,   411,  -604,  1145,  -604,   603,   532,  -604,   463,
    -604,   603,    14,   603,   439,  -604,  -604,   488,  -604,   119,
     -54,   526,   232,  1165,   603,   162,  -604,   330,  1185,  -604,
    1222,  -604,  -604,   569,  -604,  -604,  -604,   546,   572,  -604,
    1242,  -604,  -604,   537,   541,  -604,  -604,    14,  -604,   603,
    -604,  -604,  -604,  -604,  -604,  -604,  1262,   623,  -604,   548,
     422,  -604,  -604,  -604,  -604,  -604,  -604,  -604,   558,   559,
     567,  -604,  -604,   568,   574,  -604,   222,  -604,   576,  -604,
    -604,  -604,   623,   555,   577,   -51,    46,   599,   206,   281,
    -604,  -604,   199,  -604,   579,  -604,    80,   222,  -604,  -604,
    -604,  -604,  -604,  -604,  -604,   580,   581,   489,   582,   490,
     584,   587,   503,   504,  -604,    78,  -604,    11,   224,  -604,
     222,   149,   600,   506,   575,   600,   199,   199,  -604,   199,
    -604,   199,   199,  -604,  -604,   510,   511,   199,  -604,  -604,
    -604,   625,   535,  -604,   623,   535,   513,   515,    30,   516,
     517,  -604,  -604,  -604,   606,  -604,   591,  -604,   523,   529,
     199,   536,   543,   631,    50,  -604,    50,  -604,  -604,   550,
    -604,  -604,  -604,  -604,   643,  -604,  -604,  -604,  -604,  -604,
    -604,   437,    50,   437,  -604,  -604,  -604,   437,  -604
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -604,  -604,   -57,  -604,  -604,  -604,  -604,   442,  -604,  -604,
    -604,  -604,  -604,  -604,   539,  -604,  -604,   471,  -604,  -604,
    -604,  -194,  -604,  -604,  -604,  -604,   161,  -176,  -604,   -40,
    -356,    41,    76,    70,  -604,  -604,   102,  -604,    42,  -604,
      15,  -603,  -604,   107,  -335,  -195,  -604,  -604,  -271,  -604,
    -604,  -604,  -604,  -604,   245,  -604,  -604,  -604,  -604,  -604,
    -604,  -179,   -90,  -604,   -60,    48,   212,   195,  -604,  -604,
    -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,
    -604,  -604,  -604,  -410,   324,  -604,  -604,    82,  -538,  -604,
    -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -604,  -451,
    -604,  -604,  -604,  -604,  -604,   505,   -17,  -604,   620,  -167,
    -604,  -604,   207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -301
static const yytype_int16 yytable[] =
{
     179,   301,   303,    89,   153,   126,   283,   272,   273,   181,
     313,   440,   128,   129,   163,   593,   440,   285,   480,   305,
     472,   172,   390,   104,    82,    17,   561,    83,   308,   309,
      18,   210,   200,   201,   593,    18,   402,   308,   309,   130,
     131,   262,   213,   562,   269,   561,   132,   133,   134,   187,
     602,   190,   191,    14,   193,   195,   673,   135,   136,   137,
     205,   529,   562,   677,   138,   275,   674,   286,   276,   139,
     215,   216,   198,   463,   464,   465,   466,   467,   140,   685,
     121,   122,   635,   141,   142,   143,   144,   145,   146,   269,
     377,   235,   236,   561,   259,   147,   554,   148,    19,   388,
     603,   378,   266,    19,   253,   254,   255,   308,   309,   481,
     562,   149,   538,   308,   309,   396,   397,   150,   445,   666,
     278,   426,   310,   308,   309,   393,   202,   369,   370,   594,
     569,   310,   427,   463,   464,   465,   466,   467,   682,   288,
     485,   289,   468,   441,   637,   151,   152,   316,   441,   587,
     319,   320,   194,   322,   323,   311,   211,   312,   325,   326,
     327,   328,   329,   660,   311,   332,   399,   214,   263,   336,
     337,   270,    81,   340,   341,    88,   389,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   304,
     446,   310,   468,   593,   367,   368,   423,   310,   574,   398,
     593,   299,   576,   100,   561,   619,   270,   310,   317,   102,
     595,   561,   585,   101,   275,   400,   593,   276,   593,   424,
     103,   562,   128,   129,   311,   257,   489,   561,   562,   561,
     311,   595,   518,   299,   391,   300,   392,   585,   104,   299,
     311,   302,   535,   490,   562,   106,   562,   605,   606,   130,
     131,     1,     2,     3,   639,   107,   132,   133,   134,   471,
     108,   537,     4,   594,   569,   605,   606,   135,   136,   137,
     299,   124,   640,    82,   138,   593,    83,    84,    85,   139,
     541,   542,   109,   517,   501,   502,   561,   519,   140,   607,
     110,    89,   111,   141,   142,   143,   144,   145,   146,   585,
     112,   113,   114,   562,   279,   147,   115,   148,   125,   117,
     430,   434,   430,   437,   249,   250,   251,   252,   253,   254,
     255,   149,   610,   611,   279,   118,   608,   150,   120,   127,
     128,   129,   154,   264,   451,   155,   157,   452,   453,   160,
     454,   283,   574,   161,   608,   162,   455,   456,   164,   165,
     258,   166,   458,   168,   280,   151,   152,   130,   131,   251,
     252,   253,   254,   255,   132,   133,   134,   170,   281,   173,
     171,   174,   175,    34,   545,   135,   136,   137,   176,   177,
     184,   185,   138,   187,   189,   192,   198,   139,   281,   204,
     206,   282,   260,    34,   207,   209,   140,    44,   218,   219,
     504,   141,   142,   143,   144,   145,   146,   220,    45,   221,
     222,   282,   223,   147,   261,   148,   532,    44,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   224,    45,   149,
     225,   226,   227,   228,   229,   150,   523,   230,   128,   129,
     231,   528,   232,   530,   233,   234,   267,   268,   555,  -106,
     274,   271,   290,   277,   540,   294,   295,   307,   265,   296,
     315,   330,   331,   151,   152,   130,   131,   297,   333,   298,
     306,   314,   428,   133,   134,   429,   684,   334,   686,   556,
     335,   338,   688,   135,   136,   137,   339,   364,   365,   366,
     138,   371,   372,   376,   384,   139,   374,   386,   375,   395,
     623,   411,   410,   425,   140,   448,   450,   413,   444,   141,
     142,   143,   144,   145,   146,   439,   414,   128,   129,   457,
     415,   147,   418,   148,   419,   449,   461,   473,   470,   474,
     433,   477,   483,   459,   484,   487,   505,   149,   609,   612,
     500,   506,   616,   150,   130,   131,   492,   499,   503,   507,
     510,   132,   133,   134,   511,   513,   515,   516,   299,   524,
     520,   531,   135,   136,   137,   548,   533,   638,   609,   138,
     536,   151,   152,   549,   139,   471,   646,   647,   550,   616,
     552,   649,   650,   140,   553,   588,   589,   652,   141,   142,
     143,   144,   145,   146,   590,   591,   128,   129,   638,   599,
     147,   592,   148,   597,   600,   604,   618,   626,   627,   629,
     669,   631,   628,   630,   632,   641,   149,   560,   644,   653,
     654,   663,   150,   130,   131,   672,   633,   634,   561,   643,
     132,   133,   134,  -122,   651,   665,   658,   680,   659,   661,
     662,   135,   136,   137,   321,   562,   667,   291,   138,   208,
     151,   152,   668,   139,   563,   564,   565,   566,   567,   670,
     648,   527,   140,   621,   568,   569,   671,   141,   142,   143,
     144,   145,   146,   678,   598,   636,   656,   486,   679,   147,
     509,   148,   601,   657,    22,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   526,   149,   436,   645,   178,   521,
     570,   150,   571,     0,   318,     0,   572,     0,     0,     0,
      44,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,    23,    24,     0,   151,
     152,     0,     0,     0,     0,     0,    25,    26,    27,    28,
     573,    29,    30,   574,     0,   575,     0,   576,     0,    22,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
      41,    42,    43,     0,     0,     0,     0,    44,     0,     0,
       0,   385,     0,     0,     0,     0,     0,     0,    45,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,    46,
       0,    25,    26,    27,    28,  -300,    29,    30,     0,     0,
       0,     0,    47,     0,     0,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,    41,    42,    43,     0,     0,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   237,    47,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   404,   237,   405,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   237,   324,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   237,   406,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   237,   409,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   237,   412,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     237,   420,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     237,   493,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     237,   494,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     237,   495,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     237,   496,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,     0,     0,   237,   497,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   237,   498,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   237,   522,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   539,     0,
       0,    60,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,   237,    61,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   547,     0,     0,    62,     0,
     403,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   551,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,    63,     0,     0,     0,   559,    64,    65,    66,    67,
      68,   -42,    69,    70,    71,     0,    72,    73,    74,    75,
      76,     0,     0,     0,     0,    77,    78,    79,    63,     0,
       0,     0,     0,    64,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,     0,     0,
       0,     0,    77,    78,    79,     0,     0,     0,     0,   237,
     256,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   401,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   237,   407,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   408,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   416,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   417,   237,   422,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     421,   237,   476,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255
};

static const yytype_int16 yycheck[] =
{
      90,   196,   197,    20,    64,    62,   182,   174,   175,    99,
     204,     4,     3,     4,    74,     4,     4,     4,     4,   198,
     430,    81,   293,     4,   119,     4,    15,   122,     4,     5,
      53,     6,     4,     5,     4,    53,    54,     4,     5,    30,
      31,     4,     6,    32,     4,    15,    37,    38,    39,     4,
       4,   108,   109,     0,   111,   112,     6,    48,    49,    50,
     117,   512,    32,   666,    55,   119,    16,    54,   122,    60,
     130,   131,     4,    64,    65,    66,    67,    68,    69,   682,
     131,   132,     4,    74,    75,    76,    77,    78,    79,     4,
     121,   151,   152,    15,   154,    86,   547,    88,   121,    54,
      54,   132,   162,   121,    32,    33,    34,     4,     5,    95,
      32,   102,   522,     4,     5,     4,     5,   108,   389,   657,
     180,   121,    98,     4,     5,   304,    98,     3,     4,    51,
      52,    98,   132,    64,    65,    66,    67,    68,   676,   131,
     133,   133,   133,   136,   133,   136,   137,   207,   136,   559,
     210,   211,   133,   213,   214,   131,   131,   133,   218,   219,
     220,   221,   222,   133,   131,   225,   133,   131,   131,   229,
     230,   131,     6,   233,   234,    53,   131,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   131,
     394,    98,   133,     4,   264,   265,   373,    98,   130,    98,
       4,   131,   134,    53,    15,   135,   131,    98,   133,    37,
     576,    15,   557,    53,   119,   315,     4,   122,     4,   124,
      37,    32,     3,     4,   131,     6,   133,    15,    32,    15,
     131,   597,   133,   131,   301,   133,   303,   582,     4,   131,
     131,   133,   133,   447,    32,    53,    32,    51,    52,    30,
      31,   115,   116,   117,   620,    37,    37,    38,    39,    37,
      37,    39,   126,    51,    52,    51,    52,    48,    49,    50,
     131,   125,   133,   119,    55,     4,   122,   123,   124,    60,
     128,   129,    37,   488,   461,   462,    15,   491,    69,    93,
      37,   318,    37,    74,    75,    76,    77,    78,    79,   644,
      37,    37,    37,    32,     4,    86,    37,    88,     4,    37,
     380,   381,   382,   383,    28,    29,    30,    31,    32,    33,
      34,   102,    51,    52,     4,    37,   130,   108,    37,     4,
       3,     4,     4,     6,   404,     4,     4,   407,   408,     4,
     410,   527,   130,     4,   130,     4,   416,   417,     4,     3,
     131,     4,   422,     4,    54,   136,   137,    30,    31,    30,
      31,    32,    33,    34,    37,    38,    39,     4,    68,     4,
     104,    16,    16,    73,    54,    48,    49,    50,    54,   132,
       4,     4,    55,     4,     4,     4,     4,    60,    68,    37,
       4,    91,   131,    73,    37,    53,    69,    97,    37,    37,
     470,    74,    75,    76,    77,    78,    79,    37,   108,    37,
      37,    91,    37,    86,   131,    88,   516,    97,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    37,   108,   102,
      37,    37,    37,    37,    37,   108,   506,    37,     3,     4,
      37,   511,    37,   513,    37,    37,   131,   131,   548,    37,
     132,    53,   133,    54,   524,   133,   133,    37,   131,   133,
       6,     4,     4,   136,   137,    30,    31,   133,     4,   133,
     133,   133,    37,    38,    39,    40,   681,     4,   683,   549,
       4,     4,   687,    48,    49,    50,     4,     4,     4,     4,
      55,     4,     4,     4,     4,    60,   132,    37,   132,    37,
     600,   133,   131,    53,    69,    37,     4,   133,    16,    74,
      75,    76,    77,    78,    79,   131,   133,     3,     4,     4,
     133,    86,   133,    88,   133,   133,    16,    16,    37,    95,
      16,    85,     4,   132,     4,    86,    16,   102,   588,   589,
      54,    37,   592,   108,    30,    31,   133,   133,   133,    96,
      53,    37,    38,    39,    37,    37,   133,     6,   131,    37,
     132,   132,    48,    49,    50,     6,    88,   617,   618,    55,
      54,   136,   137,    37,    60,    37,   626,   627,    16,   629,
      53,   631,   632,    69,    53,    37,    37,   637,    74,    75,
      76,    77,    78,    79,    37,    37,     3,     4,   648,    54,
      86,    37,    88,    37,    37,    16,    37,    37,    37,    37,
     660,    37,   133,   133,    37,    25,   102,     4,    53,     4,
      95,    25,   108,    30,    31,     4,   133,   133,    15,   133,
      37,    38,    39,   133,   133,    54,   133,     4,   133,   133,
     133,    48,    49,    50,   212,    32,   133,   186,    55,   120,
     136,   137,   133,    60,    41,    42,    43,    44,    45,   133,
     629,   510,    69,   597,    51,    52,   133,    74,    75,    76,
      77,    78,    79,   133,   582,   615,   644,   442,   673,    86,
     478,    88,   585,   645,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   509,   102,   382,   625,    88,   502,
      87,   108,    89,    -1,   209,    -1,    93,    -1,    -1,    -1,
      97,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    46,    47,    -1,   136,
     137,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
     127,    61,    62,   130,    -1,   132,    -1,   134,    -1,     4,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    56,    57,    58,    59,   125,    61,    62,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,   132,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   131,    15,   133,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   133,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   133,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   133,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   133,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   133,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   133,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   133,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   133,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   133,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    15,   133,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   133,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   133,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,   133,    -1,
      -1,     4,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    15,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   133,    -1,    -1,    61,    -1,
      36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,   133,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,   118,   119,   120,    94,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,    -1,   105,
     106,   107,    -1,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    15,
     131,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   131,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   131,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   131,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   131,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   131,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,   116,   117,   126,   139,   153,   154,   143,   144,
     141,   142,   239,   240,     0,   155,   145,     4,    53,   121,
     243,   244,     4,    46,    47,    56,    57,    58,    59,    61,
      62,    70,    71,    72,    73,    80,    81,    82,    83,    84,
      85,    90,    91,    92,    97,   108,   119,   132,   156,   163,
     165,   182,   184,   193,   194,   196,   198,   231,   241,   242,
       4,    38,    61,    94,    99,   100,   101,   102,   103,   105,
     106,   107,   109,   110,   111,   112,   113,   118,   119,   120,
     146,     6,   119,   122,   123,   124,   246,   247,    53,   244,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   180,
      53,    53,    37,    37,     4,   140,    53,    37,    37,    37,
      37,    37,    37,    37,    37,    37,   157,    37,    37,   166,
      37,   131,   132,   181,   125,     4,   140,     4,     3,     4,
      30,    31,    37,    38,    39,    48,    49,    50,    55,    60,
      69,    74,    75,    76,    77,    78,    79,    86,    88,   102,
     108,   136,   137,   202,     4,     4,   150,     4,   149,   148,
       4,     4,     4,   202,     4,     3,     4,   151,     4,   152,
       4,   104,   202,     4,    16,    16,    54,   132,   246,   200,
     201,   200,   164,   232,     4,     4,   158,     4,   186,     4,
     140,   140,     4,   140,   133,   140,   195,   197,     4,   199,
       4,     5,    98,   159,    37,   140,     4,    37,   152,    53,
       6,   131,   147,     6,   131,   202,   202,   202,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,   202,   202,    15,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   131,     6,   131,   202,
     131,   131,     4,   131,     6,   131,   202,   131,   131,     4,
     131,    53,   247,   247,   132,   119,   122,    54,   202,     4,
      54,    68,    91,   165,   207,     4,    54,   233,   131,   133,
     133,   155,   187,   185,   133,   133,   133,   133,   133,   131,
     133,   183,   133,   183,   131,   199,   133,    37,     4,     5,
      98,   131,   133,   159,   133,     6,   202,   133,   243,   202,
     202,   145,   202,   202,   133,   202,   202,   202,   202,   202,
       4,     4,   202,     4,     4,     4,   202,   202,     4,     4,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,     4,     4,     4,   202,   202,     3,
       4,     4,     4,   249,   132,   132,     4,   121,   132,   245,
     208,   213,   218,   234,     4,    36,    37,   190,    54,   131,
     186,   140,   140,   199,   160,    37,     4,     5,    98,   133,
     200,   131,    54,    36,   131,   133,   133,   131,   131,   133,
     131,   133,   133,   133,   133,   133,   131,   131,   133,   133,
     133,   131,    16,   247,   124,    53,   121,   132,    37,    40,
     202,   221,   222,    16,   202,   223,   222,   202,   236,   131,
       4,   136,   191,   192,    16,   186,   159,   162,    37,   133,
       4,   202,   202,   202,   202,   202,   202,     4,   202,   132,
     250,    16,   248,    64,    65,    66,    67,    68,   133,   220,
      37,    37,   221,    16,    95,   204,    16,    85,   224,   219,
       4,    95,   237,     4,     4,   133,   192,    86,   188,   133,
     159,   161,   133,   133,   133,   133,   133,   133,   133,   133,
      54,   247,   247,   133,   202,    16,    37,    96,   205,   204,
      53,    37,   238,    37,   235,   133,     6,   183,   133,   159,
     132,   250,   133,   202,    37,   209,   205,   164,   202,   237,
     202,   132,   200,    88,   189,   133,    54,    39,   221,   133,
     202,   128,   129,   206,   214,    54,   133,   133,     6,    37,
      16,   133,    53,    53,   237,   200,   202,   210,   215,   133,
       4,    15,    32,    41,    42,    43,    44,    45,    51,    52,
      87,    89,    93,   127,   130,   132,   134,   167,   168,   171,
     172,   174,   175,   176,   177,   182,   227,   221,    37,    37,
      37,    37,    37,     4,    51,   168,   170,    37,   174,    54,
      37,   181,     4,    54,    16,    51,    52,    93,   130,   167,
      51,    52,   167,   178,   200,   173,   167,   169,    37,   135,
     183,   170,   211,   200,   228,   216,    37,    37,   133,    37,
     133,    37,    37,   133,   133,     4,   171,   133,   167,   168,
     133,    25,   225,   133,    53,   225,   167,   167,   169,   167,
     167,   133,   167,     4,    95,   203,   176,   203,   133,   133,
     133,   133,   133,    25,   226,    54,   226,   133,   133,   167,
     133,   133,     4,     6,    16,   179,   229,   179,   133,   178,
       4,   212,   226,   217,   183,   179,   183,   230,   183
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 7:

/* Line 1455 of yacc.c  */
#line 179 "ldgram.y"
    { ldlex_defsym(); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 181 "ldgram.y"
    {
		  ldlex_popstate();
		  lang_add_assignment(exp_assop((yyvsp[(3) - (4)].token),(yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)));
		}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 189 "ldgram.y"
    {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 194 "ldgram.y"
    {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 209 "ldgram.y"
    {
			einfo(_("%P%F: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[(1) - (1)].name));
			}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 212 "ldgram.y"
    {
			config.map_filename = "-";
			}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 218 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 220 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 222 "ldgram.y"
    { mri_public((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree)); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 224 "ldgram.y"
    { mri_format((yyvsp[(2) - (2)].name)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 226 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 228 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 230 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 232 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 234 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 236 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 238 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 242 "ldgram.y"
    { mri_name((yyvsp[(2) - (2)].name)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 244 "ldgram.y"
    { mri_alias((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].name),0);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 246 "ldgram.y"
    { mri_alias ((yyvsp[(2) - (4)].name), 0, (int) (yyvsp[(4) - (4)].bigint).integer); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 248 "ldgram.y"
    { mri_base((yyvsp[(2) - (2)].etree)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 250 "ldgram.y"
    { mri_truncate ((unsigned int) (yyvsp[(2) - (2)].bigint).integer); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 254 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 256 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 258 "ldgram.y"
    { lang_add_entry ((yyvsp[(2) - (2)].name), FALSE); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 263 "ldgram.y"
    { mri_order((yyvsp[(3) - (3)].name)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 264 "ldgram.y"
    { mri_order((yyvsp[(2) - (2)].name)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 270 "ldgram.y"
    { mri_load((yyvsp[(1) - (1)].name)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 271 "ldgram.y"
    { mri_load((yyvsp[(3) - (3)].name)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 276 "ldgram.y"
    { mri_only_load((yyvsp[(1) - (1)].name)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 278 "ldgram.y"
    { mri_only_load((yyvsp[(3) - (3)].name)); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 282 "ldgram.y"
    { (yyval.name) = NULL; }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 289 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(1) - (1)].name)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 291 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(2) - (2)].name)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 293 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(3) - (3)].name)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 297 "ldgram.y"
    {
	 ldlex_both();
	}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 301 "ldgram.y"
    {
	ldlex_popstate();
	}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 326 "ldgram.y"
    { lang_add_target((yyvsp[(3) - (4)].name)); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 328 "ldgram.y"
    { ldfile_add_library_path ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 330 "ldgram.y"
    { lang_add_output((yyvsp[(3) - (4)].name), 1); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 332 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (4)].name), (char *) NULL,
					    (char *) NULL, 1); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 335 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (8)].name), (yyvsp[(5) - (8)].name), (yyvsp[(7) - (8)].name), 1); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 337 "ldgram.y"
    { ldfile_set_output_arch ((yyvsp[(3) - (4)].name), bfd_arch_unknown); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 339 "ldgram.y"
    { command_line.force_common_definition = TRUE ; }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 341 "ldgram.y"
    { command_line.inhibit_common_definition = TRUE ; }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 344 "ldgram.y"
    { lang_enter_group (); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 346 "ldgram.y"
    { lang_leave_group (); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 348 "ldgram.y"
    { lang_add_map((yyvsp[(3) - (4)].name)); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 350 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 352 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 354 "ldgram.y"
    {
		  lang_add_nocrossref ((yyvsp[(3) - (4)].nocrossref));
		}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 362 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 365 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 368 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 371 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 374 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 377 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 380 "ldgram.y"
    { (yyval.integer) = as_needed; as_needed = TRUE; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 382 "ldgram.y"
    { as_needed = (yyvsp[(3) - (5)].integer); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 384 "ldgram.y"
    { (yyval.integer) = as_needed; as_needed = TRUE; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 386 "ldgram.y"
    { as_needed = (yyvsp[(5) - (7)].integer); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 388 "ldgram.y"
    { (yyval.integer) = as_needed; as_needed = TRUE; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 390 "ldgram.y"
    { as_needed = (yyvsp[(4) - (6)].integer); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 405 "ldgram.y"
    { lang_add_entry ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 407 "ldgram.y"
    {ldlex_expression ();}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 408 "ldgram.y"
    { ldlex_popstate ();
		  lang_add_assignment (exp_assert ((yyvsp[(4) - (7)].etree), (yyvsp[(6) - (7)].name))); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 416 "ldgram.y"
    {
			  (yyval.cname) = (yyvsp[(1) - (1)].name);
			}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 420 "ldgram.y"
    {
			  (yyval.cname) = "*";
			}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 424 "ldgram.y"
    {
			  (yyval.cname) = "?";
			}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 431 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(1) - (1)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 437 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (5)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(3) - (5)].name_list);
			}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 443 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 449 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 455 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 461 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 467 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 473 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 479 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(7) - (8)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(5) - (8)].name_list);
			}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 488 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(2) - (2)].cname);
			  tmp->next = (yyvsp[(1) - (2)].name_list);
			  (yyval.name_list) = tmp;
			}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 497 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(1) - (1)].cname);
			  tmp->next = NULL;
			  (yyval.name_list) = tmp;
			}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 508 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = (yyvsp[(1) - (3)].wildcard_list);
			  tmp->spec = (yyvsp[(3) - (3)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 517 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = NULL;
			  tmp->spec = (yyvsp[(1) - (1)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 528 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[(1) - (1)].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 536 "ldgram.y"
    {
			  lang_add_wild (NULL, (yyvsp[(2) - (3)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 540 "ldgram.y"
    {
			  lang_add_wild (&(yyvsp[(1) - (4)].wildcard), (yyvsp[(3) - (4)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 548 "ldgram.y"
    { ldgram_had_keep = TRUE; }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 550 "ldgram.y"
    { ldgram_had_keep = FALSE; }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 556 "ldgram.y"
    {
 		lang_add_attribute(lang_object_symbols_statement_enum);
	      	}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 561 "ldgram.y"
    {

		  lang_add_attribute(lang_constructors_statement_enum);
		}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 566 "ldgram.y"
    {
		  constructors_sorted = TRUE;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 572 "ldgram.y"
    {
			  lang_add_data ((int) (yyvsp[(1) - (4)].integer), (yyvsp[(3) - (4)].etree));
			}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 577 "ldgram.y"
    {
			  lang_add_fill ((yyvsp[(3) - (4)].fill));
			}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 594 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 596 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 598 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 600 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 602 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 607 "ldgram.y"
    {
		  (yyval.fill) = exp_get_fill ((yyvsp[(1) - (1)].etree),
				     0,
				     "fill value",
				     lang_first_phase_enum);
		}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 617 "ldgram.y"
    { (yyval.fill) = (yyvsp[(2) - (2)].fill); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 618 "ldgram.y"
    { (yyval.fill) = (fill_type *) 0; }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 623 "ldgram.y"
    { (yyval.token) = '+'; }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 625 "ldgram.y"
    { (yyval.token) = '-'; }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 627 "ldgram.y"
    { (yyval.token) = '*'; }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 629 "ldgram.y"
    { (yyval.token) = '/'; }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 631 "ldgram.y"
    { (yyval.token) = LSHIFT; }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 633 "ldgram.y"
    { (yyval.token) = RSHIFT; }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 635 "ldgram.y"
    { (yyval.token) = '&'; }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 637 "ldgram.y"
    { (yyval.token) = '|'; }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 647 "ldgram.y"
    {
		  lang_add_assignment (exp_assop ((yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].name), (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 651 "ldgram.y"
    {
		  lang_add_assignment (exp_assop ('=', (yyvsp[(1) - (3)].name),
						  exp_binop ((yyvsp[(2) - (3)].token),
							     exp_nameop (NAME,
									 (yyvsp[(1) - (3)].name)),
							     (yyvsp[(3) - (3)].etree))));
		}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 659 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree)));
		}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 681 "ldgram.y"
    { region = lang_memory_region_lookup ((yyvsp[(1) - (1)].name), TRUE); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 684 "ldgram.y"
    {}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 689 "ldgram.y"
    { region->current =
		 region->origin =
		 exp_get_vma((yyvsp[(3) - (3)].etree), 0L,"origin", lang_first_phase_enum);
}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 697 "ldgram.y"
    { region->length = exp_get_vma((yyvsp[(3) - (3)].etree),
					       ~((bfd_vma)0),
					       "length",
					       lang_first_phase_enum);
		}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 706 "ldgram.y"
    { /* dummy action to avoid bison 1.25 error message */ }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 717 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(1) - (1)].name), 0); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 719 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(2) - (2)].name), 1); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 724 "ldgram.y"
    { lang_startup((yyvsp[(3) - (4)].name)); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 730 "ldgram.y"
    { ldemul_hll((char *)NULL); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 735 "ldgram.y"
    { ldemul_hll((yyvsp[(3) - (3)].name)); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 737 "ldgram.y"
    { ldemul_hll((yyvsp[(1) - (1)].name)); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 745 "ldgram.y"
    { ldemul_syslib((yyvsp[(3) - (3)].name)); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 751 "ldgram.y"
    { lang_float(TRUE); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 753 "ldgram.y"
    { lang_float(FALSE); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 758 "ldgram.y"
    {
		  (yyval.nocrossref) = NULL;
		}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 762 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (2)].name);
		  n->next = (yyvsp[(2) - (2)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 771 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (3)].name);
		  n->next = (yyvsp[(3) - (3)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 781 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 783 "ldgram.y"
    { ldlex_popstate (); (yyval.etree)=(yyvsp[(2) - (2)].etree);}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 788 "ldgram.y"
    { (yyval.etree) = exp_unop ('-', (yyvsp[(2) - (2)].etree)); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 790 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (3)].etree); }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 792 "ldgram.y"
    { (yyval.etree) = exp_unop ((int) (yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].etree)); }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 794 "ldgram.y"
    { (yyval.etree) = exp_unop ('!', (yyvsp[(2) - (2)].etree)); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 796 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (2)].etree); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 798 "ldgram.y"
    { (yyval.etree) = exp_unop ('~', (yyvsp[(2) - (2)].etree));}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 801 "ldgram.y"
    { (yyval.etree) = exp_binop ('*', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 803 "ldgram.y"
    { (yyval.etree) = exp_binop ('/', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 805 "ldgram.y"
    { (yyval.etree) = exp_binop ('%', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 807 "ldgram.y"
    { (yyval.etree) = exp_binop ('+', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 809 "ldgram.y"
    { (yyval.etree) = exp_binop ('-' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 811 "ldgram.y"
    { (yyval.etree) = exp_binop (LSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 813 "ldgram.y"
    { (yyval.etree) = exp_binop (RSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 815 "ldgram.y"
    { (yyval.etree) = exp_binop (EQ , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 817 "ldgram.y"
    { (yyval.etree) = exp_binop (NE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 819 "ldgram.y"
    { (yyval.etree) = exp_binop (LE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 821 "ldgram.y"
    { (yyval.etree) = exp_binop (GE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 823 "ldgram.y"
    { (yyval.etree) = exp_binop ('<' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 825 "ldgram.y"
    { (yyval.etree) = exp_binop ('>' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 827 "ldgram.y"
    { (yyval.etree) = exp_binop ('&' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 829 "ldgram.y"
    { (yyval.etree) = exp_binop ('^' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 831 "ldgram.y"
    { (yyval.etree) = exp_binop ('|' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 833 "ldgram.y"
    { (yyval.etree) = exp_trinop ('?' , (yyvsp[(1) - (5)].etree), (yyvsp[(3) - (5)].etree), (yyvsp[(5) - (5)].etree)); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 835 "ldgram.y"
    { (yyval.etree) = exp_binop (ANDAND , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 837 "ldgram.y"
    { (yyval.etree) = exp_binop (OROR , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 839 "ldgram.y"
    { (yyval.etree) = exp_nameop (DEFINED, (yyvsp[(3) - (4)].name)); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 841 "ldgram.y"
    { (yyval.etree) = exp_bigintop ((yyvsp[(1) - (1)].bigint).integer, (yyvsp[(1) - (1)].bigint).str); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 843 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF_HEADERS,0); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 846 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 848 "ldgram.y"
    { (yyval.etree) = exp_nameop (ADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 850 "ldgram.y"
    { (yyval.etree) = exp_nameop (LOADADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 852 "ldgram.y"
    { (yyval.etree) = exp_unop (ABSOLUTE, (yyvsp[(3) - (4)].etree)); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 854 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 856 "ldgram.y"
    { (yyval.etree) = exp_binop (ALIGN_K,(yyvsp[(3) - (6)].etree),(yyvsp[(5) - (6)].etree)); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 858 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_ALIGN, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree)); }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 860 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_RELRO_END, (yyvsp[(5) - (6)].etree), (yyvsp[(3) - (6)].etree)); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 862 "ldgram.y"
    { (yyval.etree) = exp_unop (DATA_SEGMENT_END, (yyvsp[(3) - (4)].etree)); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 864 "ldgram.y"
    { /* The operands to the expression node are
			     placed in the opposite order from the way
			     in which they appear in the script as
			     that allows us to reuse more code in
			     fold_binary.  */
			  (yyval.etree) = exp_binop (SEGMENT_START,
					  (yyvsp[(5) - (6)].etree),
					  exp_nameop (NAME, (yyvsp[(3) - (6)].name))); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 873 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 875 "ldgram.y"
    { (yyval.etree) = exp_nameop (NAME,(yyvsp[(1) - (1)].name)); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 877 "ldgram.y"
    { (yyval.etree) = exp_binop (MAX_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 879 "ldgram.y"
    { (yyval.etree) = exp_binop (MIN_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 881 "ldgram.y"
    { (yyval.etree) = exp_assert ((yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].name)); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 883 "ldgram.y"
    { (yyval.etree) = exp_nameop (ORIGIN, (yyvsp[(3) - (4)].name)); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 885 "ldgram.y"
    { (yyval.etree) = exp_nameop (LENGTH, (yyvsp[(3) - (4)].name)); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 890 "ldgram.y"
    { (yyval.name) = (yyvsp[(3) - (3)].name); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 891 "ldgram.y"
    { (yyval.name) = 0; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 895 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 896 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 900 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 901 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 905 "ldgram.y"
    { (yyval.token) = ONLY_IF_RO; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 906 "ldgram.y"
    { (yyval.token) = ONLY_IF_RW; }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 907 "ldgram.y"
    { (yyval.token) = 0; }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 910 "ldgram.y"
    { ldlex_expression(); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 913 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 916 "ldgram.y"
    {
			  lang_enter_output_section_statement((yyvsp[(1) - (8)].name), (yyvsp[(3) - (8)].etree),
							      sectype,
							      0, (yyvsp[(5) - (8)].etree), (yyvsp[(4) - (8)].etree), (yyvsp[(7) - (8)].token));
			}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 922 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 924 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[(16) - (16)].fill), (yyvsp[(13) - (16)].name), (yyvsp[(15) - (16)].section_phdr), (yyvsp[(14) - (16)].name));
		}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 929 "ldgram.y"
    {}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 931 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 933 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 935 "ldgram.y"
    {
			  lang_enter_overlay ((yyvsp[(3) - (8)].etree), (yyvsp[(6) - (8)].etree));
			}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 940 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 942 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[(5) - (16)].etree), (int) (yyvsp[(4) - (16)].integer),
					      (yyvsp[(16) - (16)].fill), (yyvsp[(13) - (16)].name), (yyvsp[(15) - (16)].section_phdr), (yyvsp[(14) - (16)].name));
			}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 952 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 954 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assop ('=', ".", (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 962 "ldgram.y"
    { sectype = noload_section; }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 963 "ldgram.y"
    { sectype = dsect_section; }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 964 "ldgram.y"
    { sectype = copy_section; }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 965 "ldgram.y"
    { sectype = info_section; }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 966 "ldgram.y"
    { sectype = overlay_section; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 971 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 972 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 976 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (3)].etree); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 977 "ldgram.y"
    { (yyval.etree) = (etree_type *)NULL;  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 982 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (6)].etree); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 984 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (10)].etree); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 988 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (2)].etree); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 989 "ldgram.y"
    { (yyval.etree) = (etree_type *) NULL;  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 994 "ldgram.y"
    { (yyval.integer) = 0; }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 996 "ldgram.y"
    { (yyval.integer) = 1; }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1001 "ldgram.y"
    { (yyval.name) = (yyvsp[(2) - (2)].name); }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1002 "ldgram.y"
    { (yyval.name) = DEFAULT_MEMORY_REGION; }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1007 "ldgram.y"
    {
		  (yyval.section_phdr) = NULL;
		}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1011 "ldgram.y"
    {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[(3) - (3)].name);
		  n->used = FALSE;
		  n->next = (yyvsp[(1) - (3)].section_phdr);
		  (yyval.section_phdr) = n;
		}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1027 "ldgram.y"
    {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[(2) - (2)].name));
			}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1032 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1034 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[(9) - (9)].fill), (yyvsp[(8) - (9)].section_phdr));
			}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1051 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1052 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1054 "ldgram.y"
    {
		  lang_new_phdr ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].etree), (yyvsp[(4) - (6)].phdr).filehdr, (yyvsp[(4) - (6)].phdr).phdrs, (yyvsp[(4) - (6)].phdr).at,
				 (yyvsp[(4) - (6)].phdr).flags);
		}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1062 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(1) - (1)].etree);

		  if ((yyvsp[(1) - (1)].etree)->type.node_class == etree_name
		      && (yyvsp[(1) - (1)].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR", "PT_TLS"
			};

		      s = (yyvsp[(1) - (1)].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		      if (i == sizeof phdr_types / sizeof phdr_types[0])
			{
			  if (strcmp (s, "PT_GNU_EH_FRAME") == 0)
			    (yyval.etree) = exp_intop (0x6474e550);
			  else if (strcmp (s, "PT_GNU_STACK") == 0)
			    (yyval.etree) = exp_intop (0x6474e551);
			  else
			    {
			      einfo (_("\
%X%P:%S: unknown phdr type `%s' (try integer literal)\n"),
				     s);
			      (yyval.etree) = exp_intop (0);
			    }
			}
		    }
		}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1106 "ldgram.y"
    {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1110 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(3) - (3)].phdr);
		  if (strcmp ((yyvsp[(1) - (3)].name), "FILEHDR") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).filehdr = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "PHDRS") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).phdrs = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "FLAGS") == 0 && (yyvsp[(2) - (3)].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[(2) - (3)].etree);
		  else
		    einfo (_("%X%P:%S: PHDRS syntax error at `%s'\n"), (yyvsp[(1) - (3)].name));
		}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1122 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(5) - (5)].phdr);
		  (yyval.phdr).at = (yyvsp[(3) - (5)].etree);
		}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1130 "ldgram.y"
    {
		  (yyval.etree) = NULL;
		}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1134 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(2) - (3)].etree);
		}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1142 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1147 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1156 "ldgram.y"
    {
		  ldlex_version_script ();
		}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1160 "ldgram.y"
    {
		  ldlex_popstate ();
		}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1172 "ldgram.y"
    {
		  lang_register_vers_node (NULL, (yyvsp[(2) - (4)].versnode), NULL);
		}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1176 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (5)].name), (yyvsp[(3) - (5)].versnode), NULL);
		}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1180 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].versnode), (yyvsp[(5) - (6)].deflist));
		}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1187 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[(1) - (1)].name));
		}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1191 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[(1) - (2)].deflist), (yyvsp[(2) - (2)].name));
		}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1198 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1202 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(1) - (2)].versyms), NULL);
		}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1206 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (4)].versyms), NULL);
		}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1210 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[(3) - (4)].versyms));
		}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1214 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (8)].versyms), (yyvsp[(7) - (8)].versyms));
		}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1221 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang);
		}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1225 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang);
		}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1229 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(4) - (5)].name);
			}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1234 "ldgram.y"
    {
			  (yyval.versyms) = (yyvsp[(7) - (9)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(6) - (9)].name);
			}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1239 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(2) - (3)].name);
			}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1244 "ldgram.y"
    {
			  (yyval.versyms) = (yyvsp[(5) - (7)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(4) - (7)].name);
			}
    break;



/* Line 1455 of yacc.c  */
#line 4513 "y.tab.c"
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
		      yytoken, &yylval);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 1255 "ldgram.y"

void
yyerror(arg)
     const char *arg;
{
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}

