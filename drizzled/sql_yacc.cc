/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         base_sql_parse
#define yylex           base_sql_lex
#define yyerror         base_sql_error
#define yylval          base_sql_lval
#define yychar          base_sql_char
#define yydebug         base_sql_debug
#define yynerrs         base_sql_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 25 "drizzled/sql_yacc.yy"

/* session is passed as an argument to yyparse(), and subsequently to yylex().
** The type will be void*, so it must be  cast to (Session*) when used.
** Use the YYSession macro for this.
*/

#define YYSession (session)

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 0

#define YYINITDEPTH 100
#define YYMAXDEPTH 3200                        /* Because of 64K stack */
#define Lex (session->lex())

#include <config.h>
#include <cstdio>
#include <drizzled/parser.h>
#include <drizzled/session.h>
#include <drizzled/alter_column.h>
#include <drizzled/alter_info.h>
#include <drizzled/message/alter_table.pb.h>
#include <drizzled/item/subselect.h>
#include <drizzled/table_ident.h>
#include <drizzled/var.h>
#include <drizzled/system_variables.h>
#include <drizzled/lex_input_stream.h>
#include <drizzled/show.h>

int yylex(union ParserType *yylval, drizzled::Session *session);

#define yyoverflow(A,B,C,D,E,F)               \
  {                                           \
    unsigned long val= *(F);                          \
    if (drizzled::my_yyoverflow((B), (D), &val)) \
    {                                         \
      yyerror(NULL, (A));                   \
      return 2;                               \
    }                                         \
    else                                      \
    {                                         \
      *(F)= (YYSIZE_T)val;                    \
    }                                         \
  }

#define DRIZZLE_YYABORT                         \
  do                                          \
  {                                           \
    YYABORT;                                  \
  } while (0)

#define DRIZZLE_YYABORT_UNLESS(A)         \
  if (!(A))                             \
  {                                     \
    parser::my_parse_error(YYSession->m_lip);\
    DRIZZLE_YYABORT;                      \
  }

namespace drizzled
{

class Table_ident;
class Item;
class Item_num;

namespace item
{
class Boolean;
class True;
class False;
}


/**
  @brief Bison callback to report a syntax/OOM error

  This function is invoked by the bison-generated parser
  when a syntax error, a parse error or an out-of-memory
  condition occurs. This function is not invoked when the
  parser is requested to abort by semantic action code
  by means of YYABORT or YYACCEPT macros. This is why these
  macros should not be used (use DRIZZLE_YYABORT/DRIZZLE_YYACCEPT
  instead).

  The parser will abort immediately after invoking this callback.

  This function is not for use in semantic actions and is internal to
  the parser, as it performs some pre-return cleanup.
  In semantic actions, please use parser::my_parse_error or my_error to
  push an error into the error stack and DRIZZLE_YYABORT
  to abort from the parser.
*/

static void base_sql_error(drizzled::Session *session, const char* s)
{
  parser::errorOn(session, s);
}

} /* namespace drizzled; */

using namespace drizzled;


/* Line 268 of yacc.c  */
#line 183 "drizzled/sql_yacc.cc"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACTION = 259,
     ADDDATE_SYM = 260,
     ADD_SYM = 261,
     AFTER_SYM = 262,
     AGGREGATE_SYM = 263,
     ALL = 264,
     ALTER_SYM = 265,
     ANALYZE_SYM = 266,
     AND_SYM = 267,
     ANY_SYM = 268,
     AS = 269,
     ASC = 270,
     ASENSITIVE_SYM = 271,
     AT_SYM = 272,
     AUTO_INC = 273,
     AVG_SYM = 274,
     BEFORE_SYM = 275,
     BEGIN_SYM = 276,
     BETWEEN_SYM = 277,
     BIGINT_SYM = 278,
     BINARY = 279,
     BIN_NUM = 280,
     BIT_SYM = 281,
     BLOB_SYM = 282,
     BOOLEAN_SYM = 283,
     BOOL_SYM = 284,
     BOTH = 285,
     BTREE_SYM = 286,
     BY = 287,
     CALL_SYM = 288,
     CASCADE = 289,
     CASCADED = 290,
     CASE_SYM = 291,
     CAST_SYM = 292,
     CATALOG_SYM = 293,
     CHAIN_SYM = 294,
     CHANGE_SYM = 295,
     CHARSET = 296,
     CHAR_SYM = 297,
     CHECKSUM_SYM = 298,
     CHECK_SYM = 299,
     CLOSE_SYM = 300,
     COALESCE = 301,
     COLLATE_SYM = 302,
     COLLATION_SYM = 303,
     COLUMNS = 304,
     COLUMN_SYM = 305,
     COMMENT_SYM = 306,
     COMMITTED_SYM = 307,
     COMMIT_SYM = 308,
     COMPACT_SYM = 309,
     COMPRESSED_SYM = 310,
     CONCURRENT = 311,
     CONDITION_SYM = 312,
     CONNECTION_SYM = 313,
     CONSISTENT_SYM = 314,
     CONSTRAINT = 315,
     CONTAINS_SYM = 316,
     CONVERT_SYM = 317,
     COUNT_SYM = 318,
     CREATE = 319,
     CROSS = 320,
     CUBE_SYM = 321,
     CURDATE = 322,
     CURTIME = 323,
     CURRENT_USER = 324,
     CURSOR_SYM = 325,
     DATABASE = 326,
     DATABASES = 327,
     DATA_SYM = 328,
     DATETIME_SYM = 329,
     DATE_ADD_INTERVAL = 330,
     DATE_SUB_INTERVAL = 331,
     DATE_SYM = 332,
     DAY_HOUR_SYM = 333,
     DAY_MICROSECOND_SYM = 334,
     DAY_MINUTE_SYM = 335,
     DAY_SECOND_SYM = 336,
     DAY_SYM = 337,
     DEALLOCATE_SYM = 338,
     DECIMAL_NUM = 339,
     DECIMAL_SYM = 340,
     DECLARE_SYM = 341,
     DEFAULT = 342,
     DEFINER = 343,
     DELETE_SYM = 344,
     DESC = 345,
     DESCRIBE = 346,
     DETERMINISTIC_SYM = 347,
     DISABLE_SYM = 348,
     DISCARD = 349,
     DISTINCT = 350,
     DIV_SYM = 351,
     DOUBLE_SYM = 352,
     DO_SYM = 353,
     DROP = 354,
     DUMPFILE = 355,
     DUPLICATE_SYM = 356,
     DYNAMIC_SYM = 357,
     EACH_SYM = 358,
     ELSE = 359,
     ENABLE_SYM = 360,
     ENCLOSED = 361,
     END = 362,
     ENDS_SYM = 363,
     END_OF_INPUT = 364,
     ENGINE_SYM = 365,
     ENUM_SYM = 366,
     EQUAL_SYM = 367,
     ERRORS = 368,
     ESCAPED = 369,
     ESCAPE_SYM = 370,
     EXCLUSIVE_SYM = 371,
     EXECUTE_SYM = 372,
     EXISTS = 373,
     EXTENDED_SYM = 374,
     EXTRACT_SYM = 375,
     FALSE_SYM = 376,
     FILE_SYM = 377,
     FIRST_SYM = 378,
     FIXED_SYM = 379,
     FLOAT_NUM = 380,
     FLUSH_SYM = 381,
     FORCE_SYM = 382,
     FOREIGN = 383,
     FOR_SYM = 384,
     FOUND_SYM = 385,
     FRAC_SECOND_SYM = 386,
     FROM = 387,
     FULL = 388,
     GE = 389,
     GLOBAL_SYM = 390,
     GROUP_CONCAT_SYM = 391,
     GROUP_SYM = 392,
     HASH_SYM = 393,
     HAVING = 394,
     HEX_NUM = 395,
     HOUR_MICROSECOND_SYM = 396,
     HOUR_MINUTE_SYM = 397,
     HOUR_SECOND_SYM = 398,
     HOUR_SYM = 399,
     IDENT = 400,
     IDENTIFIED_SYM = 401,
     IDENTITY_SYM = 402,
     IDENT_QUOTED = 403,
     IF = 404,
     IGNORE_SYM = 405,
     IMPORT = 406,
     INDEXES = 407,
     INDEX_SYM = 408,
     INFILE = 409,
     INNER_SYM = 410,
     INOUT_SYM = 411,
     INSENSITIVE_SYM = 412,
     INSERT = 413,
     INTERVAL_SYM = 414,
     INTO = 415,
     INT_SYM = 416,
     INVOKER = 417,
     IN_SYM = 418,
     IS = 419,
     ISOLATION = 420,
     ITERATE_SYM = 421,
     IPV6_SYM = 422,
     JOIN_SYM = 423,
     KEYS = 424,
     KEY_BLOCK_SIZE = 425,
     KEY_SYM = 426,
     KILL_SYM = 427,
     LAST_SYM = 428,
     LE = 429,
     LEADING = 430,
     LEFT = 431,
     LEVEL_SYM = 432,
     LEX_HOSTNAME = 433,
     LIKE = 434,
     LIMIT = 435,
     LINES = 436,
     LOAD = 437,
     LOCAL_SYM = 438,
     LOCKS_SYM = 439,
     LOCK_SYM = 440,
     LOGS_SYM = 441,
     LONG_NUM = 442,
     LONG_SYM = 443,
     MATCH = 444,
     MAX_SYM = 445,
     MAX_VALUE_SYM = 446,
     MEDIUM_SYM = 447,
     MERGE_SYM = 448,
     MICROSECOND_SYM = 449,
     MINUTE_MICROSECOND_SYM = 450,
     MINUTE_SECOND_SYM = 451,
     MINUTE_SYM = 452,
     MIN_SYM = 453,
     MODE_SYM = 454,
     MODIFIES_SYM = 455,
     MODIFY_SYM = 456,
     MOD_SYM = 457,
     MONTH_SYM = 458,
     NAMES_SYM = 459,
     NAME_SYM = 460,
     NATIONAL_SYM = 461,
     NATURAL = 462,
     NE = 463,
     NEW_SYM = 464,
     NEXT_SYM = 465,
     NONE_SYM = 466,
     NOT_SYM = 467,
     NOW_SYM = 468,
     NO_SYM = 469,
     NULL_SYM = 470,
     NUM = 471,
     NUMERIC_SYM = 472,
     OFFLINE_SYM = 473,
     OFFSET_SYM = 474,
     ON = 475,
     ONE_SHOT_SYM = 476,
     ONE_SYM = 477,
     ONLINE_SYM = 478,
     OPEN_SYM = 479,
     OPTIMIZE = 480,
     OPTION = 481,
     OPTIONALLY = 482,
     ORDER_SYM = 483,
     OR_SYM = 484,
     OUTER = 485,
     OUTFILE = 486,
     OUT_SYM = 487,
     PARTIAL = 488,
     POSITION_SYM = 489,
     PRECISION = 490,
     PREV_SYM = 491,
     PRIMARY_SYM = 492,
     PROCESS = 493,
     PROCESSLIST_SYM = 494,
     QUARTER_SYM = 495,
     QUERY_SYM = 496,
     RANGE_SYM = 497,
     READS_SYM = 498,
     READ_SYM = 499,
     READ_WRITE_SYM = 500,
     REAL = 501,
     REDUNDANT_SYM = 502,
     REFERENCES = 503,
     REGEXP_SYM = 504,
     RELEASE_SYM = 505,
     RENAME = 506,
     REPEATABLE_SYM = 507,
     REPEAT_SYM = 508,
     REPLACE = 509,
     REPLICATE = 510,
     REPLICATION = 511,
     RESTRICT = 512,
     RETURNS_SYM = 513,
     RETURN_SYM = 514,
     REVOKE = 515,
     RIGHT = 516,
     ROLLBACK_SYM = 517,
     ROLLUP_SYM = 518,
     ROUTINE_SYM = 519,
     ROWS_SYM = 520,
     ROW_FORMAT_SYM = 521,
     ROW_SYM = 522,
     SAVEPOINT_SYM = 523,
     SECOND_MICROSECOND_SYM = 524,
     SECOND_SYM = 525,
     SECURITY_SYM = 526,
     SELECT_SYM = 527,
     SENSITIVE_SYM = 528,
     SEPARATOR_SYM = 529,
     SERIALIZABLE_SYM = 530,
     SERIAL_SYM = 531,
     SERVER_SYM = 532,
     SESSION_SYM = 533,
     SET_SYM = 534,
     SET_VAR = 535,
     SHARE_SYM = 536,
     SHOW = 537,
     SIGNED_SYM = 538,
     SIMPLE_SYM = 539,
     SNAPSHOT_SYM = 540,
     SPECIFIC_SYM = 541,
     SQLEXCEPTION_SYM = 542,
     SQLSTATE_SYM = 543,
     SQLWARNING_SYM = 544,
     SQL_BIG_RESULT = 545,
     SQL_BUFFER_RESULT = 546,
     SQL_CALC_FOUND_ROWS = 547,
     SQL_SMALL_RESULT = 548,
     SQL_SYM = 549,
     STARTING = 550,
     START_SYM = 551,
     STATUS_SYM = 552,
     STDDEV_SAMP_SYM = 553,
     STD_SYM = 554,
     STOP_SYM = 555,
     STORED_SYM = 556,
     STRAIGHT_JOIN = 557,
     STRING_SYM = 558,
     SUBDATE_SYM = 559,
     SUBJECT_SYM = 560,
     SUBSTRING = 561,
     SUM_SYM = 562,
     SUSPEND_SYM = 563,
     SYSDATE = 564,
     TABLES = 565,
     TABLESPACE = 566,
     TABLE_REF_PRIORITY = 567,
     TABLE_SYM = 568,
     TEMPORARY_SYM = 569,
     TERMINATED = 570,
     TEXT_STRING = 571,
     TEXT_SYM = 572,
     THEN_SYM = 573,
     TIMESTAMP_ADD = 574,
     TIMESTAMP_DIFF = 575,
     TIMESTAMP_SYM = 576,
     TIME_SYM = 577,
     TO_SYM = 578,
     TRAILING = 579,
     TRANSACTION_SYM = 580,
     TRIM = 581,
     TRUE_SYM = 582,
     TRUNCATE_SYM = 583,
     TYPE_SYM = 584,
     ULONGLONG_NUM = 585,
     UNCOMMITTED_SYM = 586,
     UNDOFILE_SYM = 587,
     UNDO_SYM = 588,
     UNION_SYM = 589,
     UNIQUE_SYM = 590,
     UNKNOWN_SYM = 591,
     UNLOCK_SYM = 592,
     UNSIGNED_SYM = 593,
     UPDATE_SYM = 594,
     USAGE = 595,
     USER = 596,
     USE_SYM = 597,
     USING = 598,
     UTC_DATE_SYM = 599,
     UTC_TIME_SYM = 600,
     UTC_TIMESTAMP_SYM = 601,
     UTF8_SYM = 602,
     UUID_SYM = 603,
     VALUES = 604,
     VALUE_SYM = 605,
     VARBINARY = 606,
     VARCHAR_SYM = 607,
     VARIABLES = 608,
     VARIANCE_SYM = 609,
     VARYING = 610,
     VAR_SAMP_SYM = 611,
     WAIT_SYM = 612,
     WARNINGS = 613,
     WEEK_SYM = 614,
     WHEN_SYM = 615,
     WHERE = 616,
     WITH = 617,
     WITH_ROLLUP_SYM = 618,
     WORK_SYM = 619,
     WRITE_SYM = 620,
     XOR = 621,
     YEAR_MONTH_SYM = 622,
     YEAR_SYM = 623,
     ZEROFILL_SYM = 624,
     LESS_THAN = 625,
     GREATER_THAN = 626,
     CONCAT = 627,
     SHIFT_RIGHT = 628,
     SHIFT_LEFT = 629,
     UMINUS = 630
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACTION 259
#define ADDDATE_SYM 260
#define ADD_SYM 261
#define AFTER_SYM 262
#define AGGREGATE_SYM 263
#define ALL 264
#define ALTER_SYM 265
#define ANALYZE_SYM 266
#define AND_SYM 267
#define ANY_SYM 268
#define AS 269
#define ASC 270
#define ASENSITIVE_SYM 271
#define AT_SYM 272
#define AUTO_INC 273
#define AVG_SYM 274
#define BEFORE_SYM 275
#define BEGIN_SYM 276
#define BETWEEN_SYM 277
#define BIGINT_SYM 278
#define BINARY 279
#define BIN_NUM 280
#define BIT_SYM 281
#define BLOB_SYM 282
#define BOOLEAN_SYM 283
#define BOOL_SYM 284
#define BOTH 285
#define BTREE_SYM 286
#define BY 287
#define CALL_SYM 288
#define CASCADE 289
#define CASCADED 290
#define CASE_SYM 291
#define CAST_SYM 292
#define CATALOG_SYM 293
#define CHAIN_SYM 294
#define CHANGE_SYM 295
#define CHARSET 296
#define CHAR_SYM 297
#define CHECKSUM_SYM 298
#define CHECK_SYM 299
#define CLOSE_SYM 300
#define COALESCE 301
#define COLLATE_SYM 302
#define COLLATION_SYM 303
#define COLUMNS 304
#define COLUMN_SYM 305
#define COMMENT_SYM 306
#define COMMITTED_SYM 307
#define COMMIT_SYM 308
#define COMPACT_SYM 309
#define COMPRESSED_SYM 310
#define CONCURRENT 311
#define CONDITION_SYM 312
#define CONNECTION_SYM 313
#define CONSISTENT_SYM 314
#define CONSTRAINT 315
#define CONTAINS_SYM 316
#define CONVERT_SYM 317
#define COUNT_SYM 318
#define CREATE 319
#define CROSS 320
#define CUBE_SYM 321
#define CURDATE 322
#define CURTIME 323
#define CURRENT_USER 324
#define CURSOR_SYM 325
#define DATABASE 326
#define DATABASES 327
#define DATA_SYM 328
#define DATETIME_SYM 329
#define DATE_ADD_INTERVAL 330
#define DATE_SUB_INTERVAL 331
#define DATE_SYM 332
#define DAY_HOUR_SYM 333
#define DAY_MICROSECOND_SYM 334
#define DAY_MINUTE_SYM 335
#define DAY_SECOND_SYM 336
#define DAY_SYM 337
#define DEALLOCATE_SYM 338
#define DECIMAL_NUM 339
#define DECIMAL_SYM 340
#define DECLARE_SYM 341
#define DEFAULT 342
#define DEFINER 343
#define DELETE_SYM 344
#define DESC 345
#define DESCRIBE 346
#define DETERMINISTIC_SYM 347
#define DISABLE_SYM 348
#define DISCARD 349
#define DISTINCT 350
#define DIV_SYM 351
#define DOUBLE_SYM 352
#define DO_SYM 353
#define DROP 354
#define DUMPFILE 355
#define DUPLICATE_SYM 356
#define DYNAMIC_SYM 357
#define EACH_SYM 358
#define ELSE 359
#define ENABLE_SYM 360
#define ENCLOSED 361
#define END 362
#define ENDS_SYM 363
#define END_OF_INPUT 364
#define ENGINE_SYM 365
#define ENUM_SYM 366
#define EQUAL_SYM 367
#define ERRORS 368
#define ESCAPED 369
#define ESCAPE_SYM 370
#define EXCLUSIVE_SYM 371
#define EXECUTE_SYM 372
#define EXISTS 373
#define EXTENDED_SYM 374
#define EXTRACT_SYM 375
#define FALSE_SYM 376
#define FILE_SYM 377
#define FIRST_SYM 378
#define FIXED_SYM 379
#define FLOAT_NUM 380
#define FLUSH_SYM 381
#define FORCE_SYM 382
#define FOREIGN 383
#define FOR_SYM 384
#define FOUND_SYM 385
#define FRAC_SECOND_SYM 386
#define FROM 387
#define FULL 388
#define GE 389
#define GLOBAL_SYM 390
#define GROUP_CONCAT_SYM 391
#define GROUP_SYM 392
#define HASH_SYM 393
#define HAVING 394
#define HEX_NUM 395
#define HOUR_MICROSECOND_SYM 396
#define HOUR_MINUTE_SYM 397
#define HOUR_SECOND_SYM 398
#define HOUR_SYM 399
#define IDENT 400
#define IDENTIFIED_SYM 401
#define IDENTITY_SYM 402
#define IDENT_QUOTED 403
#define IF 404
#define IGNORE_SYM 405
#define IMPORT 406
#define INDEXES 407
#define INDEX_SYM 408
#define INFILE 409
#define INNER_SYM 410
#define INOUT_SYM 411
#define INSENSITIVE_SYM 412
#define INSERT 413
#define INTERVAL_SYM 414
#define INTO 415
#define INT_SYM 416
#define INVOKER 417
#define IN_SYM 418
#define IS 419
#define ISOLATION 420
#define ITERATE_SYM 421
#define IPV6_SYM 422
#define JOIN_SYM 423
#define KEYS 424
#define KEY_BLOCK_SIZE 425
#define KEY_SYM 426
#define KILL_SYM 427
#define LAST_SYM 428
#define LE 429
#define LEADING 430
#define LEFT 431
#define LEVEL_SYM 432
#define LEX_HOSTNAME 433
#define LIKE 434
#define LIMIT 435
#define LINES 436
#define LOAD 437
#define LOCAL_SYM 438
#define LOCKS_SYM 439
#define LOCK_SYM 440
#define LOGS_SYM 441
#define LONG_NUM 442
#define LONG_SYM 443
#define MATCH 444
#define MAX_SYM 445
#define MAX_VALUE_SYM 446
#define MEDIUM_SYM 447
#define MERGE_SYM 448
#define MICROSECOND_SYM 449
#define MINUTE_MICROSECOND_SYM 450
#define MINUTE_SECOND_SYM 451
#define MINUTE_SYM 452
#define MIN_SYM 453
#define MODE_SYM 454
#define MODIFIES_SYM 455
#define MODIFY_SYM 456
#define MOD_SYM 457
#define MONTH_SYM 458
#define NAMES_SYM 459
#define NAME_SYM 460
#define NATIONAL_SYM 461
#define NATURAL 462
#define NE 463
#define NEW_SYM 464
#define NEXT_SYM 465
#define NONE_SYM 466
#define NOT_SYM 467
#define NOW_SYM 468
#define NO_SYM 469
#define NULL_SYM 470
#define NUM 471
#define NUMERIC_SYM 472
#define OFFLINE_SYM 473
#define OFFSET_SYM 474
#define ON 475
#define ONE_SHOT_SYM 476
#define ONE_SYM 477
#define ONLINE_SYM 478
#define OPEN_SYM 479
#define OPTIMIZE 480
#define OPTION 481
#define OPTIONALLY 482
#define ORDER_SYM 483
#define OR_SYM 484
#define OUTER 485
#define OUTFILE 486
#define OUT_SYM 487
#define PARTIAL 488
#define POSITION_SYM 489
#define PRECISION 490
#define PREV_SYM 491
#define PRIMARY_SYM 492
#define PROCESS 493
#define PROCESSLIST_SYM 494
#define QUARTER_SYM 495
#define QUERY_SYM 496
#define RANGE_SYM 497
#define READS_SYM 498
#define READ_SYM 499
#define READ_WRITE_SYM 500
#define REAL 501
#define REDUNDANT_SYM 502
#define REFERENCES 503
#define REGEXP_SYM 504
#define RELEASE_SYM 505
#define RENAME 506
#define REPEATABLE_SYM 507
#define REPEAT_SYM 508
#define REPLACE 509
#define REPLICATE 510
#define REPLICATION 511
#define RESTRICT 512
#define RETURNS_SYM 513
#define RETURN_SYM 514
#define REVOKE 515
#define RIGHT 516
#define ROLLBACK_SYM 517
#define ROLLUP_SYM 518
#define ROUTINE_SYM 519
#define ROWS_SYM 520
#define ROW_FORMAT_SYM 521
#define ROW_SYM 522
#define SAVEPOINT_SYM 523
#define SECOND_MICROSECOND_SYM 524
#define SECOND_SYM 525
#define SECURITY_SYM 526
#define SELECT_SYM 527
#define SENSITIVE_SYM 528
#define SEPARATOR_SYM 529
#define SERIALIZABLE_SYM 530
#define SERIAL_SYM 531
#define SERVER_SYM 532
#define SESSION_SYM 533
#define SET_SYM 534
#define SET_VAR 535
#define SHARE_SYM 536
#define SHOW 537
#define SIGNED_SYM 538
#define SIMPLE_SYM 539
#define SNAPSHOT_SYM 540
#define SPECIFIC_SYM 541
#define SQLEXCEPTION_SYM 542
#define SQLSTATE_SYM 543
#define SQLWARNING_SYM 544
#define SQL_BIG_RESULT 545
#define SQL_BUFFER_RESULT 546
#define SQL_CALC_FOUND_ROWS 547
#define SQL_SMALL_RESULT 548
#define SQL_SYM 549
#define STARTING 550
#define START_SYM 551
#define STATUS_SYM 552
#define STDDEV_SAMP_SYM 553
#define STD_SYM 554
#define STOP_SYM 555
#define STORED_SYM 556
#define STRAIGHT_JOIN 557
#define STRING_SYM 558
#define SUBDATE_SYM 559
#define SUBJECT_SYM 560
#define SUBSTRING 561
#define SUM_SYM 562
#define SUSPEND_SYM 563
#define SYSDATE 564
#define TABLES 565
#define TABLESPACE 566
#define TABLE_REF_PRIORITY 567
#define TABLE_SYM 568
#define TEMPORARY_SYM 569
#define TERMINATED 570
#define TEXT_STRING 571
#define TEXT_SYM 572
#define THEN_SYM 573
#define TIMESTAMP_ADD 574
#define TIMESTAMP_DIFF 575
#define TIMESTAMP_SYM 576
#define TIME_SYM 577
#define TO_SYM 578
#define TRAILING 579
#define TRANSACTION_SYM 580
#define TRIM 581
#define TRUE_SYM 582
#define TRUNCATE_SYM 583
#define TYPE_SYM 584
#define ULONGLONG_NUM 585
#define UNCOMMITTED_SYM 586
#define UNDOFILE_SYM 587
#define UNDO_SYM 588
#define UNION_SYM 589
#define UNIQUE_SYM 590
#define UNKNOWN_SYM 591
#define UNLOCK_SYM 592
#define UNSIGNED_SYM 593
#define UPDATE_SYM 594
#define USAGE 595
#define USER 596
#define USE_SYM 597
#define USING 598
#define UTC_DATE_SYM 599
#define UTC_TIME_SYM 600
#define UTC_TIMESTAMP_SYM 601
#define UTF8_SYM 602
#define UUID_SYM 603
#define VALUES 604
#define VALUE_SYM 605
#define VARBINARY 606
#define VARCHAR_SYM 607
#define VARIABLES 608
#define VARIANCE_SYM 609
#define VARYING 610
#define VAR_SAMP_SYM 611
#define WAIT_SYM 612
#define WARNINGS 613
#define WEEK_SYM 614
#define WHEN_SYM 615
#define WHERE 616
#define WITH 617
#define WITH_ROLLUP_SYM 618
#define WORK_SYM 619
#define WRITE_SYM 620
#define XOR 621
#define YEAR_MONTH_SYM 622
#define YEAR_SYM 623
#define ZEROFILL_SYM 624
#define LESS_THAN 625
#define GREATER_THAN 626
#define CONCAT 627
#define SHIFT_RIGHT 628
#define SHIFT_LEFT 629
#define UMINUS 630




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
/* Line 293 of yacc.c  */
#line 127 "drizzled/sql_yacc.yy"
ParserType
{

/* Line 293 of yacc.c  */
#line 127 "drizzled/sql_yacc.yy"

  bool boolean;
  int  num;
  unsigned long ulong_num;
  uint64_t ulonglong_number;
  int64_t longlong_number;
  drizzled::lex_string_t lex_str;
  drizzled::lex_string_t *lex_str_ptr;
  drizzled::LEX_SYMBOL symbol;
  drizzled::Table_ident *table;
  const char* simple_string;
  drizzled::Item *item;
  drizzled::Item_num *item_num;
  drizzled::List<drizzled::Item> *item_list;
  drizzled::List<drizzled::String> *string_list;
  drizzled::String *string;
  drizzled::Key_part_spec *key_part;
  const drizzled::plugin::Function *udf;
  drizzled::TableList *table_list;
  drizzled::enum_field_types field_val;
  drizzled::sys_var_with_base variable;
  drizzled::sql_var_t var_type;
  drizzled::Key::Keytype key_type;
  drizzled::ha_key_alg key_alg;
  drizzled::ha_rkey_function ha_rkey_mode;
  drizzled::enum_tx_isolation tx_isolation;
  drizzled::Cast_target cast_type;
  const drizzled::charset_info_st *charset;
  drizzled::thr_lock_type lock_type;
  drizzled::interval_type interval, interval_time_st;
  drizzled::type::timestamp_t date_time_type;
  drizzled::Select_Lex *select_lex;
  drizzled::chooser_compare_func_creator boolfunc2creator;
  drizzled::LEX *lex;
  drizzled::index_hint_type index_hint;
  drizzled::enum_filetype filetype;
  drizzled::message::Table::ForeignKeyConstraint::ForeignKeyOption m_fk_option;
  drizzled::execute_string_t execute_string;



/* Line 293 of yacc.c  */
#line 1014 "drizzled/sql_yacc.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 167 "drizzled/sql_yacc.yy"

namespace drizzled
{
bool my_yyoverflow(short **a, union ParserType **b, unsigned long *yystacksize);
}


/* Line 343 of yacc.c  */
#line 1034 "drizzled/sql_yacc.cc"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  280
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  393
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  425
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1229
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2122

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   630

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   382,   375,     2,
     386,   387,   380,   379,   390,   378,   391,   381,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   370,     2,     2,   392,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   383,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   388,   374,   389,   384,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   371,   372,   373,   376,   377,
     385
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    68,    69,    77,    78,    92,    93,   100,
     106,   107,   113,   118,   121,   124,   125,   126,   131,   132,
     139,   142,   144,   145,   146,   153,   154,   156,   159,   163,
     165,   167,   170,   174,   176,   180,   184,   187,   191,   195,
     199,   200,   202,   203,   207,   208,   210,   212,   215,   217,
     220,   224,   226,   230,   234,   238,   242,   246,   249,   253,
     257,   261,   265,   269,   271,   273,   276,   278,   280,   282,
     287,   292,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   316,   318,   322,   324,   326,   329,   332,   340,   349,
     358,   361,   364,   365,   367,   370,   371,   373,   376,   377,
     382,   385,   391,   394,   397,   400,   406,   409,   410,   417,
     423,   426,   429,   432,   435,   439,   443,   447,   450,   453,
     456,   458,   461,   463,   465,   470,   475,   478,   481,   485,
     486,   490,   492,   498,   499,   503,   504,   506,   508,   509,
     513,   514,   516,   517,   521,   523,   525,   528,   531,   533,
     536,   537,   540,   544,   547,   548,   551,   555,   558,   559,
     561,   564,   566,   568,   571,   574,   576,   577,   579,   582,
     584,   586,   588,   592,   595,   597,   598,   600,   603,   605,
     607,   611,   614,   619,   621,   622,   625,   627,   629,   631,
     632,   634,   635,   637,   643,   644,   648,   652,   654,   655,
     658,   661,   664,   665,   669,   673,   680,   687,   689,   691,
     694,   697,   700,   702,   705,   708,   710,   712,   713,   715,
     717,   719,   721,   722,   724,   725,   727,   730,   731,   733,
     735,   738,   741,   743,   747,   750,   752,   754,   759,   762,
     764,   769,   770,   772,   773,   776,   778,   782,   783,   791,
     792,   798,   799,   802,   805,   807,   808,   810,   812,   814,
     818,   821,   825,   828,   833,   834,   841,   842,   843,   852,
     856,   861,   865,   869,   872,   875,   882,   888,   892,   896,
     898,   900,   902,   903,   905,   906,   908,   909,   912,   914,
     915,   917,   919,   923,   924,   928,   929,   934,   935,   940,
     941,   946,   948,   952,   956,   958,   961,   966,   969,   973,
     976,   980,   981,   985,   986,   987,   994,   997,   999,  1001,
    1004,  1007,  1015,  1016,  1018,  1021,  1023,  1025,  1027,  1029,
    1031,  1033,  1035,  1037,  1039,  1041,  1042,  1045,  1050,  1054,
    1056,  1058,  1062,  1067,  1068,  1069,  1070,  1073,  1076,  1078,
    1080,  1081,  1084,  1088,  1092,  1096,  1099,  1103,  1108,  1112,
    1117,  1121,  1126,  1128,  1132,  1137,  1141,  1145,  1152,  1154,
    1160,  1167,  1173,  1181,  1188,  1197,  1203,  1210,  1215,  1221,
    1225,  1230,  1232,  1236,  1240,  1244,  1248,  1252,  1256,  1262,
    1268,  1272,  1276,  1280,  1284,  1288,  1292,  1294,  1296,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1324,  1326,  1328,  1330,  1334,  1337,  1340,  1343,  1347,
    1351,  1357,  1364,  1369,  1374,  1377,  1384,  1390,  1397,  1402,
    1407,  1413,  1418,  1421,  1426,  1431,  1436,  1447,  1454,  1463,
    1470,  1475,  1480,  1487,  1492,  1497,  1502,  1510,  1518,  1526,
    1533,  1540,  1547,  1554,  1558,  1563,  1570,  1579,  1582,  1585,
    1594,  1603,  1610,  1613,  1618,  1625,  1632,  1641,  1650,  1657,
    1666,  1673,  1676,  1681,  1690,  1699,  1702,  1705,  1708,  1713,
    1718,  1722,  1726,  1732,  1741,  1747,  1752,  1759,  1764,  1771,
    1780,  1787,  1792,  1796,  1800,  1807,  1808,  1814,  1815,  1817,
    1819,  1823,  1828,  1833,  1839,  1845,  1850,  1851,  1852,  1860,
    1865,  1871,  1876,  1882,  1887,  1892,  1897,  1902,  1907,  1913,
    1914,  1923,  1924,  1928,  1932,  1934,  1939,  1940,  1942,  1943,
    1946,  1947,  1949,  1950,  1954,  1957,  1959,  1961,  1964,  1966,
    1968,  1971,  1974,  1976,  1978,  1980,  1983,  1985,  1989,  1990,
    1992,  1993,  1996,  2001,  2007,  2009,  2011,  2013,  2015,  2020,
    2022,  2026,  2030,  2034,  2035,  2042,  2043,  2050,  2051,  2060,
    2065,  2066,  2075,  2076,  2087,  2094,  2095,  2104,  2105,  2116,
    2123,  2125,  2128,  2131,  2132,  2137,  2141,  2147,  2151,  2152,
    2153,  2162,  2164,  2165,  2166,  2173,  2174,  2178,  2179,  2180,
    2186,  2187,  2189,  2190,  2192,  2193,  2196,  2200,  2204,  2206,
    2208,  2209,  2217,  2218,  2226,  2228,  2231,  2232,  2233,  2236,
    2237,  2240,  2241,  2243,  2245,  2247,  2249,  2253,  2255,  2259,
    2261,  2263,  2265,  2267,  2269,  2271,  2273,  2275,  2277,  2279,
    2281,  2283,  2285,  2287,  2289,  2291,  2293,  2295,  2297,  2299,
    2301,  2303,  2305,  2306,  2308,  2309,  2312,  2313,  2315,  2316,
    2317,  2321,  2322,  2323,  2327,  2330,  2331,  2332,  2337,  2342,
    2345,  2346,  2348,  2352,  2356,  2358,  2361,  2362,  2364,  2365,
    2370,  2375,  2378,  2379,  2381,  2383,  2384,  2386,  2387,  2389,
    2392,  2394,  2398,  2402,  2404,  2406,  2408,  2409,  2412,  2414,
    2416,  2418,  2420,  2422,  2424,  2426,  2428,  2430,  2432,  2434,
    2435,  2438,  2442,  2444,  2447,  2448,  2452,  2453,  2459,  2462,
    2464,  2468,  2474,  2475,  2483,  2488,  2490,  2494,  2496,  2497,
    2500,  2501,  2503,  2509,  2511,  2514,  2515,  2519,  2520,  2522,
    2523,  2525,  2526,  2527,  2535,  2536,  2537,  2543,  2546,  2548,
    2550,  2552,  2556,  2561,  2562,  2566,  2570,  2572,  2575,  2578,
    2579,  2583,  2584,  2590,  2594,  2596,  2600,  2602,  2606,  2608,
    2610,  2611,  2613,  2614,  2619,  2620,  2622,  2626,  2628,  2630,
    2632,  2633,  2634,  2641,  2642,  2652,  2656,  2658,  2662,  2666,
    2668,  2672,  2673,  2682,  2683,  2685,  2689,  2690,  2692,  2693,
    2697,  2700,  2704,  2708,  2713,  2719,  2725,  2731,  2737,  2740,
    2743,  2747,  2750,  2754,  2756,  2760,  2765,  2766,  2769,  2771,
    2773,  2774,  2777,  2780,  2781,  2786,  2787,  2792,  2794,  2796,
    2797,  2799,  2800,  2802,  2804,  2805,  2809,  2813,  2815,  2816,
    2820,  2825,  2827,  2829,  2832,  2833,  2835,  2839,  2840,  2842,
    2844,  2847,  2848,  2849,  2850,  2851,  2870,  2872,  2873,  2875,
    2876,  2878,  2880,  2881,  2883,  2885,  2887,  2890,  2893,  2894,
    2897,  2900,  2902,  2906,  2911,  2915,  2919,  2920,  2923,  2926,
    2928,  2932,  2936,  2937,  2941,  2943,  2945,  2946,  2950,  2953,
    2957,  2959,  2961,  2964,  2965,  2968,  2970,  2973,  2975,  2977,
    2979,  2981,  2984,  2987,  2989,  2991,  2993,  2995,  2997,  2999,
    3001,  3004,  3007,  3009,  3011,  3013,  3015,  3017,  3020,  3023,
    3025,  3027,  3029,  3031,  3033,  3035,  3038,  3041,  3043,  3045,
    3047,  3049,  3051,  3053,  3055,  3059,  3065,  3067,  3069,  3071,
    3075,  3080,  3086,  3088,  3094,  3098,  3101,  3103,  3107,  3110,
    3112,  3114,  3116,  3118,  3120,  3122,  3124,  3126,  3128,  3130,
    3132,  3134,  3136,  3138,  3140,  3142,  3144,  3146,  3148,  3150,
    3152,  3154,  3156,  3158,  3160,  3162,  3164,  3166,  3168,  3170,
    3172,  3174,  3176,  3178,  3180,  3182,  3184,  3186,  3188,  3190,
    3192,  3194,  3196,  3198,  3200,  3202,  3204,  3206,  3208,  3210,
    3212,  3214,  3216,  3218,  3220,  3222,  3224,  3226,  3228,  3230,
    3232,  3234,  3236,  3238,  3240,  3242,  3244,  3246,  3248,  3250,
    3252,  3254,  3256,  3258,  3260,  3262,  3264,  3266,  3268,  3270,
    3272,  3274,  3276,  3278,  3280,  3282,  3284,  3286,  3288,  3290,
    3292,  3294,  3296,  3298,  3300,  3302,  3304,  3306,  3308,  3310,
    3312,  3314,  3316,  3318,  3320,  3322,  3324,  3326,  3328,  3330,
    3332,  3334,  3336,  3338,  3340,  3342,  3344,  3346,  3348,  3350,
    3352,  3354,  3356,  3358,  3360,  3362,  3364,  3366,  3368,  3370,
    3372,  3374,  3376,  3378,  3380,  3382,  3384,  3386,  3388,  3390,
    3392,  3394,  3396,  3398,  3400,  3402,  3404,  3406,  3408,  3410,
    3412,  3414,  3416,  3418,  3420,  3422,  3424,  3426,  3428,  3430,
    3432,  3434,  3436,  3438,  3439,  3444,  3445,  3447,  3449,  3453,
    3454,  3457,  3459,  3461,  3463,  3465,  3466,  3468,  3469,  3471,
    3473,  3475,  3476,  3479,  3482,  3485,  3487,  3490,  3495,  3501,
    3506,  3513,  3515,  3517,  3519,  3521,  3523,  3525,  3528,  3531,
    3534,  3536,  3538,  3540,  3542,  3544,  3546,  3548,  3550,  3551,
    3555,  3556,  3560,  3561,  3563,  3564,  3568,  3571,  3572,  3574,
    3577,  3578,  3580,  3585,  3590,  3596,  3599,  3603,  3605,  3606,
    3608,  3609,  3614,  3615,  3617,  3619,  3620,  3623,  3626,  3628,
    3629,  3631,  3633,  3636,  3640,  3642,  3643,  3649,  3653,  3654
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     394,     0,    -1,   109,    -1,   395,   109,    -1,   396,    -1,
     793,    -1,   493,    -1,   510,    -1,   512,    -1,   799,    -1,
     397,    -1,   698,    -1,   709,    -1,   655,    -1,   661,    -1,
     715,    -1,   666,    -1,   721,    -1,   724,    -1,   802,    -1,
     514,    -1,   669,    -1,   800,    -1,   801,    -1,   518,    -1,
     772,    -1,   703,    -1,   508,    -1,   701,    -1,   791,    -1,
     692,    -1,   723,    -1,    64,    38,   761,    -1,    -1,    64,
     414,   313,   415,   759,   398,   401,    -1,    -1,    64,   497,
     399,   480,   153,   766,   482,   220,   759,   386,   488,   387,
     483,    -1,    -1,    64,    71,   415,   760,   400,   411,    -1,
     386,   429,   387,   416,   403,    -1,    -1,   386,   407,   387,
     402,   807,    -1,   386,   406,   387,   416,    -1,   406,   416,
      -1,   416,   403,    -1,    -1,    -1,   732,   407,   404,   804,
      -1,    -1,   732,   386,   407,   387,   405,   807,    -1,   179,
     759,    -1,   408,    -1,    -1,    -1,   272,   409,   529,   535,
     410,   428,    -1,    -1,   425,    -1,   425,   412,    -1,   425,
     390,   412,    -1,   412,    -1,   413,    -1,   413,   412,    -1,
     413,   390,   412,    -1,   767,    -1,   255,   370,   327,    -1,
     255,   370,   121,    -1,    88,   763,    -1,    88,    69,   540,
      -1,   767,   370,   767,    -1,   767,   370,   646,    -1,    -1,
     314,    -1,    -1,   149,   212,   118,    -1,    -1,   418,    -1,
     419,    -1,   419,   417,    -1,   419,    -1,   419,   418,    -1,
     419,   390,   418,    -1,   420,    -1,   110,   370,   767,    -1,
      51,   684,   763,    -1,    18,   684,   646,    -1,   255,   370,
     327,    -1,   255,   370,   121,    -1,    88,   763,    -1,    88,
      69,   540,    -1,   266,   370,   427,    -1,   122,   370,   763,
      -1,   767,   370,   768,    -1,   767,   370,   646,    -1,   423,
      -1,   424,    -1,    42,   279,    -1,    41,    -1,   347,    -1,
      87,    -1,   467,   421,   684,   422,    -1,   467,    47,   684,
     466,    -1,   467,    47,   684,   466,    -1,    54,    -1,    55,
      -1,    87,    -1,   102,    -1,   124,    -1,   247,    -1,   426,
      -1,   640,    -1,   528,   534,    -1,   430,    -1,   429,   390,
     430,    -1,   431,    -1,   432,    -1,   437,   433,    -1,   437,
     469,    -1,   475,   490,   482,   386,   488,   387,   483,    -1,
     435,   476,   490,   482,   386,   488,   387,   483,    -1,   435,
     128,   171,   490,   386,   488,   387,   469,    -1,   436,   433,
      -1,   435,   434,    -1,    -1,   434,    -1,    44,   541,    -1,
      -1,   436,    -1,    60,   490,    -1,    -1,   758,   438,   439,
     464,    -1,   321,   461,    -1,   321,   386,   216,   387,   461,
      -1,    74,   461,    -1,   442,   458,    -1,    42,   455,    -1,
     441,   386,   216,   387,   455,    -1,   317,   455,    -1,    -1,
     111,   440,   386,   492,   387,   455,    -1,   351,   386,   216,
     387,   453,    -1,   443,   458,    -1,    77,   453,    -1,   322,
     453,    -1,    27,   453,    -1,    85,   444,   458,    -1,   217,
     444,   458,    -1,   124,   444,   458,    -1,   348,   453,    -1,
     167,   453,    -1,    28,   454,    -1,   276,    -1,    42,   355,
      -1,    42,    -1,   352,    -1,   161,   448,   447,   449,    -1,
      23,   448,   447,   449,    -1,   246,   450,    -1,    97,   450,
      -1,    97,   235,   450,    -1,    -1,   386,   216,   387,    -1,
     445,    -1,   386,   216,   390,   216,   387,    -1,    -1,   386,
     216,   387,    -1,    -1,   283,    -1,   338,    -1,    -1,   386,
     216,   387,    -1,    -1,   369,    -1,    -1,   386,   216,   387,
      -1,   445,    -1,   215,    -1,   212,   215,    -1,   468,   171,
      -1,   335,    -1,   335,   171,    -1,    -1,   453,   451,    -1,
     453,    87,   747,    -1,   453,   452,    -1,    -1,   454,   451,
      -1,   454,    87,   750,    -1,   454,   452,    -1,    -1,   456,
      -1,   456,   457,    -1,   457,    -1,   451,    -1,    87,   747,
      -1,    47,   465,    -1,   452,    -1,    -1,   459,    -1,   459,
     460,    -1,   460,    -1,   451,    -1,    18,    -1,   276,    87,
     350,    -1,    87,   749,    -1,   452,    -1,    -1,   462,    -1,
     462,   463,    -1,   463,    -1,   451,    -1,    87,   213,   540,
      -1,    87,   751,    -1,   220,   339,   213,   540,    -1,   452,
      -1,    -1,    51,   763,    -1,   767,    -1,   465,    -1,    87,
      -1,    -1,    87,    -1,    -1,   237,    -1,   248,   759,   470,
     472,   473,    -1,    -1,   386,   471,   387,    -1,   471,   390,
     766,    -1,   766,    -1,    -1,   189,   133,    -1,   189,   233,
      -1,   189,   284,    -1,    -1,   220,   339,   474,    -1,   220,
      89,   474,    -1,   220,   339,   474,   220,    89,   474,    -1,
     220,    89,   474,   220,   339,   474,    -1,   257,    -1,    34,
      -1,   279,   215,    -1,   214,     4,    -1,   279,    87,    -1,
     477,    -1,   237,   171,    -1,   335,   478,    -1,   171,    -1,
     153,    -1,    -1,   477,    -1,   169,    -1,   153,    -1,   152,
      -1,    -1,   335,    -1,    -1,   481,    -1,   481,   485,    -1,
      -1,   484,    -1,   486,    -1,   484,   486,    -1,   343,   487,
      -1,   485,    -1,   170,   684,   645,    -1,    51,   763,    -1,
      31,    -1,   138,    -1,   488,   390,   489,   638,    -1,   489,
     638,    -1,   766,    -1,   766,   386,   216,   387,    -1,    -1,
     758,    -1,    -1,   391,   766,    -1,   746,    -1,   492,   390,
     746,    -1,    -1,    10,   497,   505,   313,   759,   494,   496,
      -1,    -1,    10,    71,   760,   495,   425,    -1,    -1,    94,
     311,    -1,   151,   311,    -1,   498,    -1,    -1,   223,    -1,
     218,    -1,   500,    -1,   498,   390,   500,    -1,     6,   504,
      -1,   499,   431,   506,    -1,     6,   432,    -1,   499,   386,
     429,   387,    -1,    -1,    40,   504,   758,   501,   437,   506,
      -1,    -1,    -1,   201,   504,   758,   502,   439,   464,   503,
     506,    -1,    99,   504,   758,    -1,    99,   128,   171,   490,
      -1,    99,   237,   171,    -1,    99,   477,   758,    -1,    93,
     169,    -1,   105,   169,    -1,    10,   504,   758,   279,    87,
     747,    -1,    10,   504,   758,    99,    87,    -1,   251,   507,
     759,    -1,    62,   323,   466,    -1,   417,    -1,   127,    -1,
     631,    -1,    -1,    50,    -1,    -1,   150,    -1,    -1,     7,
     766,    -1,   123,    -1,    -1,   323,    -1,    14,    -1,   296,
     325,   509,    -1,    -1,   362,    59,   285,    -1,    -1,    11,
     790,   511,   657,    -1,    -1,    44,   790,   513,   657,    -1,
      -1,   251,   790,   515,   516,    -1,   517,    -1,   516,   390,
     517,    -1,   759,   323,   759,    -1,   519,    -1,   272,   522,
      -1,   386,   520,   387,   807,    -1,   272,   524,    -1,   386,
     520,   387,    -1,   272,   592,    -1,   386,   521,   387,    -1,
      -1,   524,   523,   804,    -1,    -1,    -1,   525,   529,   535,
     526,   527,   534,    -1,   634,   640,    -1,   651,    -1,   528,
      -1,   651,   528,    -1,   528,   651,    -1,   132,   574,   623,
     628,   625,   634,   640,    -1,    -1,   530,    -1,   530,   533,
      -1,   533,    -1,    95,    -1,     9,    -1,   293,    -1,   290,
      -1,   302,    -1,   291,    -1,   532,    -1,   531,    -1,   292,
      -1,    -1,   129,   339,    -1,   185,   163,   281,   199,    -1,
     535,   390,   536,    -1,   536,    -1,   380,    -1,   537,   754,
     538,    -1,   537,   541,   538,   539,    -1,    -1,    -1,    -1,
      14,   766,    -1,    14,   763,    -1,   766,    -1,   763,    -1,
      -1,   386,   387,    -1,   541,   229,   541,    -1,   541,   366,
     541,    -1,   541,    12,   541,    -1,   212,   541,    -1,   542,
     164,   327,    -1,   542,   164,   212,   327,    -1,   542,   164,
     121,    -1,   542,   164,   212,   121,    -1,   542,   164,   336,
      -1,   542,   164,   212,   336,    -1,   542,    -1,   542,   164,
     215,    -1,   542,   164,   212,   215,    -1,   542,   112,   543,
      -1,   542,   545,   543,    -1,   542,   545,   546,   386,   815,
     387,    -1,   543,    -1,   544,   163,   386,   815,   387,    -1,
     544,   212,   163,   386,   815,   387,    -1,   544,   163,   386,
     541,   387,    -1,   544,   163,   386,   541,   390,   569,   387,
      -1,   544,   212,   163,   386,   541,   387,    -1,   544,   212,
     163,   386,   541,   390,   569,   387,    -1,   544,    22,   544,
      12,   543,    -1,   544,   212,    22,   544,    12,   543,    -1,
     544,   179,   547,   627,    -1,   544,   212,   179,   547,   627,
      -1,   544,   249,   544,    -1,   544,   212,   249,   544,    -1,
     544,    -1,   544,   374,   544,    -1,   544,   375,   544,    -1,
     544,   376,   544,    -1,   544,   377,   544,    -1,   544,   379,
     544,    -1,   544,   378,   544,    -1,   544,   379,   159,   541,
     617,    -1,   544,   378,   159,   541,   617,    -1,   544,   380,
     544,    -1,   544,   381,   544,    -1,   544,   382,   544,    -1,
     544,    96,   544,    -1,   544,   202,   544,    -1,   544,   383,
     544,    -1,   547,    -1,   370,    -1,   134,    -1,   372,    -1,
     174,    -1,   371,    -1,   208,    -1,     9,    -1,    13,    -1,
     756,    -1,   548,    -1,   549,    -1,   551,    -1,   550,    -1,
     547,    47,   767,    -1,   748,    -1,   560,    -1,   556,    -1,
     547,   373,   547,    -1,   379,   547,    -1,   378,   547,    -1,
     384,   547,    -1,   386,   815,   387,    -1,   386,   541,   387,
      -1,   386,   541,   390,   569,   387,    -1,   267,   386,   541,
     390,   569,   387,    -1,   118,   386,   815,   387,    -1,   388,
     766,   541,   389,    -1,    24,   547,    -1,    37,   386,   541,
      14,   568,   387,    -1,    36,   570,   572,   571,   107,    -1,
      62,   386,   541,   390,   568,   387,    -1,    87,   386,   756,
     387,    -1,   349,   386,   756,   387,    -1,   159,   541,   617,
     379,   541,    -1,    42,   386,   569,   387,    -1,    69,   540,
      -1,    77,   386,   541,   387,    -1,    82,   386,   541,   387,
      -1,   144,   386,   541,   387,    -1,   158,   386,   541,   390,
     541,   390,   541,   390,   541,   387,    -1,   159,   386,   541,
     390,   541,   387,    -1,   159,   386,   541,   390,   541,   390,
     569,   387,    -1,   176,   386,   541,   390,   541,   387,    -1,
     197,   386,   541,   387,    -1,   203,   386,   541,   387,    -1,
     261,   386,   541,   390,   541,   387,    -1,   270,   386,   541,
     387,    -1,   321,   386,   541,   387,    -1,   326,   386,   541,
     387,    -1,   326,   386,   175,   541,   132,   541,   387,    -1,
     326,   386,   324,   541,   132,   541,   387,    -1,   326,   386,
      30,   541,   132,   541,   387,    -1,   326,   386,   175,   132,
     541,   387,    -1,   326,   386,   324,   132,   541,   387,    -1,
     326,   386,    30,   132,   541,   387,    -1,   326,   386,   541,
     132,   541,   387,    -1,   341,   386,   387,    -1,   368,   386,
     541,   387,    -1,     5,   386,   541,   390,   541,   387,    -1,
       5,   386,   541,   390,   159,   541,   617,   387,    -1,    68,
     540,    -1,    67,   540,    -1,    75,   386,   541,   390,   159,
     541,   617,   387,    -1,    76,   386,   541,   390,   159,   541,
     617,   387,    -1,   120,   386,   617,   132,   541,   387,    -1,
     213,   540,    -1,   213,   386,   541,   387,    -1,   234,   386,
     544,   163,   541,   387,    -1,   304,   386,   541,   390,   541,
     387,    -1,   304,   386,   541,   390,   159,   541,   617,   387,
      -1,   306,   386,   541,   390,   541,   390,   541,   387,    -1,
     306,   386,   541,   390,   541,   387,    -1,   306,   386,   541,
     132,   541,   129,   541,   387,    -1,   306,   386,   541,   132,
     541,   387,    -1,   309,   540,    -1,   309,   386,   541,   387,
      -1,   319,   386,   618,   390,   541,   390,   541,   387,    -1,
     320,   386,   618,   390,   541,   390,   541,   387,    -1,   345,
     540,    -1,   344,   540,    -1,   346,   540,    -1,    46,   386,
     569,   387,    -1,    48,   386,   541,   387,    -1,    71,   386,
     387,    -1,    38,   386,   387,    -1,   117,   386,   541,   387,
     665,    -1,   149,   386,   541,   390,   541,   390,   541,   387,
      -1,   172,   722,   386,   541,   387,    -1,   194,   386,   541,
     387,    -1,   202,   386,   541,   390,   541,   387,    -1,   240,
     386,   541,   387,    -1,   253,   386,   541,   390,   541,   387,
      -1,   254,   386,   541,   390,   541,   390,   541,   387,    -1,
     328,   386,   541,   390,   541,   387,    -1,   357,   386,   541,
     387,    -1,   348,   386,   387,    -1,   167,   386,   387,    -1,
     357,   386,   541,   390,   541,   387,    -1,    -1,   762,   386,
     552,   553,   387,    -1,    -1,   554,    -1,   555,    -1,   554,
     390,   555,    -1,   537,   541,   538,   539,    -1,    19,   386,
     566,   387,    -1,    19,   386,    95,   566,   387,    -1,    63,
     386,   622,   380,   387,    -1,    63,   386,   566,   387,    -1,
      -1,    -1,    63,   386,    95,   557,   569,   558,   387,    -1,
     198,   386,   566,   387,    -1,   198,   386,    95,   566,   387,
      -1,   190,   386,   566,   387,    -1,   190,   386,    95,   566,
     387,    -1,   299,   386,   566,   387,    -1,   354,   386,   566,
     387,    -1,   298,   386,   566,   387,    -1,   356,   386,   566,
     387,    -1,   307,   386,   566,   387,    -1,   307,   386,    95,
     566,   387,    -1,    -1,   136,   386,   563,   559,   569,   565,
     564,   387,    -1,    -1,   392,   561,   562,    -1,   785,   280,
     541,    -1,   785,    -1,   392,   781,   785,   491,    -1,    -1,
      95,    -1,    -1,   274,   746,    -1,    -1,   635,    -1,    -1,
     622,   567,   541,    -1,    24,   446,    -1,    28,    -1,   283,
      -1,   283,   161,    -1,   161,    -1,   338,    -1,   338,   161,
      -1,    42,   446,    -1,    77,    -1,   322,    -1,    74,    -1,
      85,   444,    -1,   541,    -1,   569,   390,   541,    -1,    -1,
     541,    -1,    -1,   104,   541,    -1,   360,   541,   318,   541,
      -1,   572,   360,   541,   318,   541,    -1,   586,    -1,   577,
      -1,   576,    -1,   573,    -1,   388,   766,   573,   389,    -1,
     575,    -1,   576,   390,   575,    -1,   573,   585,   573,    -1,
     573,   302,   586,    -1,    -1,   573,   585,   573,   220,   578,
     541,    -1,    -1,   573,   302,   586,   220,   579,   541,    -1,
      -1,   573,   585,   573,   343,   580,   386,   616,   387,    -1,
     573,   207,   168,   586,    -1,    -1,   573,   176,   602,   168,
     573,   220,   581,   541,    -1,    -1,   573,   176,   602,   168,
     586,   582,   343,   386,   616,   387,    -1,   573,   207,   176,
     602,   168,   586,    -1,    -1,   573,   261,   602,   168,   573,
     220,   583,   541,    -1,    -1,   573,   261,   602,   168,   586,
     584,   343,   386,   616,   387,    -1,   573,   207,   261,   602,
     168,   586,    -1,   168,    -1,   155,   168,    -1,    65,   168,
      -1,    -1,   587,   759,   621,   611,    -1,   601,   600,   597,
      -1,   386,   600,   588,   387,   621,    -1,   595,   634,   640,
      -1,    -1,    -1,   588,   334,   811,   589,   812,   590,   634,
     640,    -1,   592,    -1,    -1,    -1,   593,   529,   535,   594,
     428,   534,    -1,    -1,   600,   596,   576,    -1,    -1,    -1,
     598,   529,   535,   599,   428,    -1,    -1,   272,    -1,    -1,
     230,    -1,    -1,   129,   168,    -1,   129,   228,    32,    -1,
     129,   137,    32,    -1,   127,    -1,   150,    -1,    -1,   604,
     477,   603,   606,   386,   615,   387,    -1,    -1,   342,   477,
     603,   607,   386,   613,   387,    -1,   605,    -1,   608,   605,
      -1,    -1,    -1,   610,   608,    -1,    -1,   612,   609,    -1,
      -1,   615,    -1,   766,    -1,   237,    -1,   614,    -1,   615,
     390,   614,    -1,   766,    -1,   616,   390,   766,    -1,   619,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,   141,
      -1,   142,    -1,   143,    -1,   195,    -1,   196,    -1,   269,
      -1,   367,    -1,   619,    -1,   131,    -1,    82,    -1,   359,
      -1,   144,    -1,   197,    -1,   203,    -1,   240,    -1,   270,
      -1,   194,    -1,   368,    -1,    -1,    14,    -1,    -1,   620,
     766,    -1,    -1,     9,    -1,    -1,    -1,   361,   624,   541,
      -1,    -1,    -1,   139,   626,   541,    -1,   115,   547,    -1,
      -1,    -1,   137,    32,   629,   630,    -1,   629,   390,   755,
     638,    -1,   755,   638,    -1,    -1,   363,    -1,   228,    32,
     632,    -1,   632,   390,   633,    -1,   633,    -1,   756,   638,
      -1,    -1,   635,    -1,    -1,   228,    32,   636,   637,    -1,
     637,   390,   755,   638,    -1,   755,   638,    -1,    -1,    15,
      -1,    90,    -1,    -1,   641,    -1,    -1,   641,    -1,   180,
     642,    -1,   643,    -1,   643,   390,   643,    -1,   643,   219,
     643,    -1,   330,    -1,   187,    -1,   216,    -1,    -1,   180,
     643,    -1,   216,    -1,   140,    -1,   187,    -1,   330,    -1,
      84,    -1,   125,    -1,   216,    -1,   330,    -1,   187,    -1,
      84,    -1,   125,    -1,    -1,   648,   649,    -1,   649,   390,
     650,    -1,   650,    -1,   392,   785,    -1,    -1,   160,   652,
     653,    -1,    -1,   231,   765,   654,   733,   736,    -1,   100,
     765,    -1,   647,    -1,    99,    38,   761,    -1,    99,   660,
     790,   659,   657,    -1,    -1,    99,   497,   153,   766,   220,
     759,   656,    -1,    99,    71,   659,   760,    -1,   658,    -1,
     657,   390,   658,    -1,   759,    -1,    -1,   149,   118,    -1,
      -1,   314,    -1,   117,   662,   663,   664,   665,    -1,   785,
      -1,   392,   785,    -1,    -1,   362,   214,   259,    -1,    -1,
      56,    -1,    -1,   357,    -1,    -1,    -1,   158,   667,   505,
     672,   668,   674,   690,    -1,    -1,    -1,   254,   670,   672,
     671,   674,    -1,   160,   673,    -1,   673,    -1,   658,    -1,
     677,    -1,   386,   387,   677,    -1,   386,   676,   387,   677,
      -1,    -1,   279,   675,   681,    -1,   676,   390,   753,    -1,
     753,    -1,   349,   680,    -1,   350,   680,    -1,    -1,   408,
     678,   804,    -1,    -1,   386,   408,   387,   679,   807,    -1,
     680,   390,   685,    -1,   685,    -1,   681,   390,   682,    -1,
     682,    -1,   756,   683,   689,    -1,   370,    -1,   280,    -1,
      -1,   370,    -1,    -1,   386,   686,   687,   387,    -1,    -1,
     688,    -1,   688,   390,   689,    -1,   689,    -1,   541,    -1,
      87,    -1,    -1,    -1,   220,   101,   691,   171,   339,   696,
      -1,    -1,   339,   505,   759,   279,   694,   693,   623,   634,
     644,    -1,   694,   390,   695,    -1,   695,    -1,   756,   683,
     689,    -1,   696,   390,   697,    -1,   697,    -1,   756,   683,
     689,    -1,    -1,    89,   700,   132,   759,   699,   623,   634,
     644,    -1,    -1,   150,    -1,   328,   702,   658,    -1,    -1,
     313,    -1,    -1,   282,   704,   705,    -1,    72,   708,    -1,
     310,   706,   708,    -1,   314,   310,   708,    -1,   313,   297,
     706,   708,    -1,    49,   707,   759,   706,   708,    -1,   479,
     707,   759,   706,   623,    -1,    63,   386,   380,   387,   358,
      -1,    63,   386,   380,   387,   113,    -1,   358,   639,    -1,
     113,   639,    -1,   780,   297,   708,    -1,   768,   297,    -1,
      64,   313,   759,    -1,   239,    -1,   780,   353,   708,    -1,
      64,    71,   415,   766,    -1,    -1,   707,   766,    -1,   132,
      -1,   163,    -1,    -1,   179,   763,    -1,   361,   541,    -1,
      -1,   712,   759,   710,   714,    -1,    -1,   712,   713,   711,
     518,    -1,    90,    -1,    91,    -1,    -1,   119,    -1,    -1,
     746,    -1,   766,    -1,    -1,   126,   716,   717,    -1,   717,
     390,   718,    -1,   718,    -1,    -1,   790,   719,   720,    -1,
     310,   362,   244,   185,    -1,   186,    -1,   297,    -1,   135,
     297,    -1,    -1,   657,    -1,   172,   722,   541,    -1,    -1,
      58,    -1,   241,    -1,   342,   760,    -1,    -1,    -1,    -1,
      -1,   182,   729,   725,   730,   154,   765,   726,   731,   160,
     727,   313,   759,   728,   733,   736,   739,   741,   744,    -1,
      73,    -1,    -1,    56,    -1,    -1,   254,    -1,   150,    -1,
      -1,    14,    -1,   254,    -1,   150,    -1,   254,    14,    -1,
     150,    14,    -1,    -1,    49,   734,    -1,   734,   735,    -1,
     735,    -1,   315,    32,   746,    -1,   227,   106,    32,   746,
      -1,   106,    32,   746,    -1,   114,    32,   746,    -1,    -1,
     181,   737,    -1,   737,   738,    -1,   738,    -1,   315,    32,
     746,    -1,   295,    32,   746,    -1,    -1,   150,   216,   740,
      -1,   181,    -1,   265,    -1,    -1,   386,   742,   387,    -1,
     386,   387,    -1,   742,   390,   743,    -1,   743,    -1,   756,
      -1,   392,   785,    -1,    -1,   279,   696,    -1,   764,    -1,
     745,   764,    -1,   764,    -1,   140,    -1,    25,    -1,   748,
      -1,   379,   752,    -1,   378,   752,    -1,   745,    -1,   752,
      -1,   215,    -1,   121,    -1,   327,    -1,   140,    -1,    25,
      -1,    77,   745,    -1,   321,   745,    -1,   745,    -1,   140,
      -1,    25,    -1,   752,    -1,   215,    -1,   379,   752,    -1,
     378,   752,    -1,   215,    -1,   121,    -1,   327,    -1,   745,
      -1,   215,    -1,   752,    -1,    77,   745,    -1,   321,   745,
      -1,   216,    -1,   187,    -1,   330,    -1,    84,    -1,   125,
      -1,   756,    -1,   754,    -1,   766,   391,   380,    -1,   766,
     391,   766,   391,   380,    -1,   541,    -1,   766,    -1,   757,
      -1,   766,   391,   766,    -1,   391,   766,   391,   766,    -1,
     766,   391,   766,   391,   766,    -1,   766,    -1,   766,   391,
     766,   391,   766,    -1,   766,   391,   766,    -1,   391,   766,
      -1,   766,    -1,   760,   391,   766,    -1,   391,   766,    -1,
     766,    -1,   766,    -1,   145,    -1,   148,    -1,   316,    -1,
     316,    -1,   316,    -1,   762,    -1,   770,    -1,   762,    -1,
     763,    -1,   762,    -1,   763,    -1,   321,    -1,   291,    -1,
     147,    -1,   771,    -1,    21,    -1,    43,    -1,    45,    -1,
      51,    -1,    53,    -1,    61,    -1,    83,    -1,    98,    -1,
     107,    -1,   126,    -1,   214,    -1,   224,    -1,   262,    -1,
     268,    -1,   271,    -1,   277,    -1,   283,    -1,   296,    -1,
     300,    -1,   328,    -1,     4,    -1,     5,    -1,     7,    -1,
       8,    -1,    13,    -1,    17,    -1,    18,    -1,    19,    -1,
      26,    -1,    29,    -1,    28,    -1,    31,    -1,    35,    -1,
      39,    -1,    46,    -1,    48,    -1,    49,    -1,    52,    -1,
      54,    -1,    55,    -1,    56,    -1,    58,    -1,    59,    -1,
      66,    -1,    73,    -1,    72,    -1,    74,    -1,    77,    -1,
      82,    -1,    93,    -1,    94,    -1,   100,    -1,   101,    -1,
     102,    -1,   108,    -1,   111,    -1,   110,    -1,   113,    -1,
     115,    -1,   116,    -1,   119,    -1,   130,    -1,   105,    -1,
     133,    -1,   122,    -1,   123,    -1,   124,    -1,   131,    -1,
     135,    -1,   138,    -1,   144,    -1,   146,    -1,   151,    -1,
     152,    -1,   165,    -1,   167,    -1,   170,    -1,   173,    -1,
     177,    -1,   183,    -1,   184,    -1,   186,    -1,   191,    -1,
     192,    -1,   193,    -1,   194,    -1,   197,    -1,   201,    -1,
     199,    -1,   203,    -1,   205,    -1,   204,    -1,   206,    -1,
     210,    -1,   209,    -1,   211,    -1,   218,    -1,   219,    -1,
     221,    -1,   222,    -1,   223,    -1,   233,    -1,   236,    -1,
     238,    -1,   239,    -1,   240,    -1,   241,    -1,   247,    -1,
     252,    -1,   258,    -1,   263,    -1,   264,    -1,   265,    -1,
     266,    -1,   267,    -1,   270,    -1,   276,    -1,   275,    -1,
     278,    -1,   284,    -1,   281,    -1,   285,    -1,   297,    -1,
     303,    -1,   304,    -1,   305,    -1,   308,    -1,   310,    -1,
     311,    -1,   314,    -1,   317,    -1,   325,    -1,   322,    -1,
     319,    -1,   320,    -1,   329,    -1,   331,    -1,   332,    -1,
     336,    -1,   348,    -1,   341,    -1,   353,    -1,   350,    -1,
     358,    -1,   359,    -1,   364,    -1,   368,    -1,    -1,   279,
     774,   773,   775,    -1,    -1,   226,    -1,   776,    -1,   775,
     390,   776,    -1,    -1,   777,   782,    -1,   779,    -1,   135,
      -1,   183,    -1,   278,    -1,    -1,   221,    -1,    -1,   135,
      -1,   183,    -1,   278,    -1,    -1,   135,   391,    -1,   183,
     391,    -1,   278,   391,    -1,   783,    -1,   779,   784,    -1,
     778,   787,   683,   789,    -1,   778,   325,   165,   177,   788,
      -1,   392,   785,   683,   541,    -1,   392,   392,   781,   787,
     683,   789,    -1,   786,    -1,   763,    -1,   178,    -1,   769,
      -1,   762,    -1,   786,    -1,   244,   331,    -1,   244,    52,
      -1,   252,   244,    -1,   275,    -1,   541,    -1,    87,    -1,
     220,    -1,     9,    -1,    24,    -1,   313,    -1,   310,    -1,
      -1,   337,   792,   790,    -1,    -1,    21,   794,   795,    -1,
      -1,   364,    -1,    -1,    12,   214,    39,    -1,    12,    39,
      -1,    -1,   250,    -1,   214,   250,    -1,    -1,   268,    -1,
      53,   795,   796,   797,    -1,   262,   795,   796,   797,    -1,
     262,   795,   323,   798,   803,    -1,   268,   803,    -1,   250,
     268,   803,    -1,   762,    -1,    -1,   805,    -1,    -1,   334,
     811,   806,   519,    -1,    -1,   805,    -1,   808,    -1,    -1,
     809,   810,    -1,   635,   639,    -1,   641,    -1,    -1,    95,
      -1,     9,    -1,   272,   591,    -1,   386,   521,   387,    -1,
     812,    -1,    -1,   813,   334,   811,   814,   812,    -1,   816,
     813,   817,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   809,   809,   821,   825,   826,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   862,   867,   866,   881,   880,   894,   893,   904,
     907,   906,   911,   913,   915,   920,   922,   921,   927,   926,
     934,   944,   954,   975,   953,   989,   990,   991,   992,   993,
     997,   998,   999,  1003,  1008,  1012,  1016,  1020,  1024,  1028,
    1035,  1036,  1040,  1041,  1044,  1046,  1050,  1051,  1055,  1056,
    1057,  1060,  1063,  1067,  1071,  1075,  1079,  1083,  1087,  1091,
    1095,  1099,  1103,  1107,  1108,  1112,  1113,  1117,  1118,  1122,
    1127,  1137,  1144,  1145,  1146,  1147,  1148,  1149,  1153,  1160,
    1161,  1165,  1166,  1170,  1171,  1175,  1176,  1183,  1187,  1192,
    1196,  1200,  1206,  1208,  1212,  1216,  1217,  1221,  1226,  1225,
    1251,  1255,  1259,  1266,  1270,  1274,  1278,  1287,  1286,  1297,
    1301,  1306,  1313,  1320,  1324,  1328,  1332,  1336,  1340,  1344,
    1348,  1355,  1357,  1359,  1364,  1368,  1375,  1379,  1383,  1391,
    1392,  1394,  1399,  1407,  1408,  1412,  1413,  1414,  1418,  1419,
    1423,  1424,  1429,  1430,  1432,  1437,  1441,  1453,  1457,  1461,
    1468,  1469,  1471,  1478,  1483,  1484,  1486,  1493,  1498,  1499,
    1503,  1504,  1508,  1510,  1517,  1530,  1535,  1536,  1540,  1541,
    1545,  1547,  1551,  1555,  1562,  1567,  1568,  1572,  1573,  1577,
    1579,  1586,  1593,  1597,  1602,  1603,  1614,  1625,  1626,  1630,
    1631,  1634,  1636,  1640,  1648,  1649,  1653,  1655,  1664,  1665,
    1667,  1669,  1675,  1679,  1684,  1689,  1695,  1704,  1705,  1706,
    1707,  1708,  1712,  1716,  1717,  1721,  1722,  1726,  1727,  1731,
    1732,  1733,  1737,  1738,  1742,  1754,  1755,  1759,  1760,  1764,
    1765,  1769,  1773,  1774,  1776,  1781,  1782,  1786,  1787,  1791,
    1792,  1804,  1805,  1809,  1810,  1814,  1815,  1823,  1822,  1839,
    1838,  1855,  1857,  1863,  1869,  1874,  1877,  1881,  1888,  1889,
    1893,  1903,  1904,  1910,  1918,  1917,  1925,  1938,  1924,  1952,
    1962,  1966,  1970,  1974,  1984,  1993,  2000,  2007,  2033,  2043,
    2049,  2055,  2064,  2065,  2069,  2070,  2074,  2075,  2079,  2086,
    2087,  2088,  2092,  2099,  2100,  2108,  2107,  2117,  2116,  2126,
    2125,  2134,  2135,  2139,  2156,  2164,  2165,  2169,  2174,  2179,
    2184,  2189,  2188,  2207,  2214,  2207,  2221,  2222,  2223,  2224,
    2225,  2229,  2238,  2240,  2245,  2246,  2250,  2260,  2273,  2283,
    2297,  2298,  2304,  2306,  2308,  2316,  2318,  2322,  2330,  2331,
    2332,  2340,  2344,  2363,  2370,  2377,  2378,  2379,  2380,  2381,
    2385,  2386,  2391,  2440,  2445,  2486,  2488,  2492,  2496,  2500,
    2504,  2508,  2512,  2516,  2520,  2524,  2528,  2532,  2536,  2540,
    2544,  2549,  2553,  2559,  2563,  2571,  2575,  2581,  2585,  2589,
    2599,  2610,  2614,  2618,  2622,  2626,  2630,  2634,  2638,  2642,
    2646,  2650,  2654,  2658,  2662,  2666,  2670,  2674,  2675,  2676,
    2677,  2678,  2679,  2683,  2684,  2688,  2689,  2690,  2691,  2692,
    2693,  2698,  2699,  2700,  2704,  2708,  2709,  2713,  2717,  2721,
    2722,  2727,  2732,  2736,  2737,  2742,  2749,  2751,  2758,  2763,
    2768,  2780,  2782,  2790,  2792,  2794,  2796,  2798,  2806,  2813,
    2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,
    2835,  2837,  2839,  2841,  2849,  2865,  2870,  2872,  2877,  2882,
    2884,  2886,  2888,  2893,  2898,  2900,  2905,  2907,  2918,  2928,
    2939,  2949,  2954,  2959,  2961,  2963,  2968,  2973,  2986,  2988,
    2990,  2998,  3006,  3021,  3025,  3040,  3042,  3044,  3046,  3048,
    3050,  3052,  3061,  3069,  3077,  3099,  3098,  3141,  3142,  3146,
    3151,  3159,  3179,  3181,  3183,  3185,  3188,  3190,  3187,  3193,
    3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,  3216,  3219,
    3218,  3234,  3233,  3242,  3247,  3252,  3266,  3267,  3272,  3275,
    3280,  3283,  3293,  3292,  3308,  3310,  3312,  3314,  3316,  3318,
    3320,  3322,  3324,  3326,  3328,  3330,  3335,  3340,  3348,  3349,
    3353,  3354,  3358,  3364,  3375,  3376,  3384,  3395,  3396,  3402,
    3403,  3423,  3428,  3434,  3432,  3449,  3447,  3464,  3462,  3469,
    3478,  3476,  3493,  3492,  3502,  3513,  3511,  3528,  3527,  3537,
    3547,  3548,  3549,  3565,  3565,  3576,  3614,  3655,  3659,  3664,
    3656,  3676,  3695,  3702,  3695,  3711,  3710,  3731,  3745,  3731,
    3752,  3756,  3774,  3775,  3780,  3783,  3784,  3785,  3789,  3790,
    3795,  3794,  3800,  3799,  3807,  3808,  3811,  3813,  3813,  3817,
    3817,  3822,  3823,  3827,  3829,  3834,  3835,  3839,  3844,  3852,
    3853,  3854,  3855,  3856,  3857,  3858,  3859,  3860,  3861,  3862,
    3863,  3867,  3868,  3886,  3887,  3888,  3889,  3890,  3891,  3892,
    3893,  3894,  3897,  3899,  3903,  3904,  3910,  3912,  3916,  3918,
    3917,  3931,  3934,  3933,  3948,  3954,  3964,  3966,  3970,  3972,
    3977,  3978,  4002,  4006,  4007,  4011,  4022,  4024,  4029,  4028,
    4037,  4041,  4048,  4049,  4050,  4055,  4060,  4064,  4065,  4069,
    4073,  4080,  4087,  4097,  4098,  4099,  4104,  4107,  4116,  4117,
    4118,  4119,  4120,  4121,  4125,  4126,  4127,  4128,  4129,  4133,
    4133,  4142,  4143,  4147,  4166,  4165,  4172,  4171,  4178,  4187,
    4196,  4200,  4207,  4207,  4223,  4233,  4234,  4238,  4246,  4247,
    4251,  4252,  4260,  4267,  4271,  4277,  4278,  4282,  4283,  4287,
    4288,  4297,  4305,  4296,  4315,  4321,  4314,  4330,  4331,  4335,
    4343,  4344,  4345,  4347,  4346,  4355,  4356,  4360,  4361,  4363,
    4362,  4368,  4367,  4375,  4376,  4380,  4381,  4385,  4393,  4394,
    4398,  4399,  4404,  4403,  4414,  4415,  4419,  4423,  4430,  4431,
    4434,  4436,  4436,  4444,  4443,  4470,  4471,  4475,  4483,  4484,
    4488,  4499,  4498,  4511,  4512,  4516,  4524,  4526,  4533,  4532,
    4544,  4550,  4556,  4562,  4568,  4574,  4579,  4583,  4587,  4591,
    4595,  4600,  4605,  4610,  4615,  4620,  4627,  4628,  4632,  4633,
    4636,  4638,  4642,  4653,  4652,  4661,  4660,  4669,  4670,  4674,
    4675,  4679,  4680,  4681,  4692,  4691,  4700,  4701,  4706,  4705,
    4711,  4716,  4721,  4726,  4734,  4735,  4741,  4748,  4749,  4750,
    4756,  4767,  4775,  4782,  4787,  4766,  4802,  4805,  4806,  4813,
    4814,  4815,  4819,  4820,  4821,  4822,  4823,  4824,  4827,  4829,
    4833,  4834,  4838,  4843,  4849,  4854,  4861,  4863,  4867,  4868,
    4872,  4877,  4884,  4886,  4894,  4895,  4899,  4900,  4901,  4905,
    4907,  4912,  4913,  4918,  4919,  4925,  4929,  4936,  4940,  4949,
    4961,  4962,  4963,  4971,  4972,  4973,  4978,  4979,  4980,  4981,
    4982,  4983,  4987,  4988,  4989,  4990,  4991,  4996,  4997,  5005,
    5010,  5014,  5021,  5022,  5027,  5028,  5029,  5033,  5038,  5043,
    5045,  5053,  5068,  5069,  5073,  5077,  5084,  5088,  5092,  5096,
    5100,  5104,  5111,  5115,  5122,  5129,  5136,  5140,  5144,  5151,
    5155,  5159,  5163,  5178,  5185,  5192,  5199,  5200,  5207,  5208,
    5212,  5213,  5217,  5218,  5219,  5224,  5225,  5226,  5227,  5228,
    5229,  5230,  5231,  5232,  5233,  5234,  5235,  5236,  5237,  5238,
    5239,  5240,  5241,  5242,  5243,  5244,  5254,  5255,  5256,  5257,
    5258,  5259,  5260,  5261,  5262,  5263,  5264,  5265,  5266,  5267,
    5268,  5269,  5270,  5271,  5272,  5273,  5274,  5275,  5276,  5277,
    5278,  5279,  5280,  5281,  5282,  5283,  5284,  5285,  5286,  5287,
    5288,  5289,  5290,  5291,  5292,  5293,  5294,  5295,  5296,  5297,
    5298,  5299,  5300,  5301,  5302,  5303,  5304,  5305,  5306,  5307,
    5308,  5309,  5310,  5311,  5312,  5313,  5314,  5315,  5316,  5317,
    5318,  5319,  5320,  5321,  5322,  5323,  5324,  5325,  5326,  5327,
    5328,  5329,  5330,  5331,  5332,  5333,  5334,  5335,  5336,  5337,
    5338,  5339,  5340,  5341,  5342,  5343,  5344,  5345,  5346,  5347,
    5348,  5349,  5350,  5351,  5352,  5353,  5354,  5355,  5356,  5357,
    5358,  5359,  5360,  5361,  5362,  5363,  5364,  5365,  5366,  5367,
    5368,  5369,  5370,  5371,  5372,  5373,  5374,  5375,  5376,  5377,
    5378,  5379,  5380,  5387,  5386,  5395,  5396,  5400,  5401,  5405,
    5405,  5411,  5412,  5413,  5414,  5418,  5419,  5423,  5424,  5425,
    5426,  5430,  5431,  5432,  5433,  5437,  5438,  5442,  5453,  5461,
    5465,  5472,  5473,  5474,  5478,  5482,  5486,  5501,  5502,  5503,
    5504,  5508,  5509,  5510,  5511,  5512,  5516,  5517,  5522,  5521,
    5531,  5530,  5538,  5539,  5544,  5545,  5546,  5551,  5552,  5553,
    5557,  5558,  5562,  5569,  5573,  5580,  5587,  5594,  5603,  5604,
    5609,  5608,  5624,  5625,  5626,  5630,  5630,  5651,  5652,  5656,
    5657,  5658,  5662,  5666,  5673,  5676,  5674,  5689,  5696,  5715
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABORT_SYM", "ACTION", "ADDDATE_SYM",
  "ADD_SYM", "AFTER_SYM", "AGGREGATE_SYM", "ALL", "ALTER_SYM",
  "ANALYZE_SYM", "AND_SYM", "ANY_SYM", "AS", "ASC", "ASENSITIVE_SYM",
  "AT_SYM", "AUTO_INC", "AVG_SYM", "BEFORE_SYM", "BEGIN_SYM",
  "BETWEEN_SYM", "BIGINT_SYM", "BINARY", "BIN_NUM", "BIT_SYM", "BLOB_SYM",
  "BOOLEAN_SYM", "BOOL_SYM", "BOTH", "BTREE_SYM", "BY", "CALL_SYM",
  "CASCADE", "CASCADED", "CASE_SYM", "CAST_SYM", "CATALOG_SYM",
  "CHAIN_SYM", "CHANGE_SYM", "CHARSET", "CHAR_SYM", "CHECKSUM_SYM",
  "CHECK_SYM", "CLOSE_SYM", "COALESCE", "COLLATE_SYM", "COLLATION_SYM",
  "COLUMNS", "COLUMN_SYM", "COMMENT_SYM", "COMMITTED_SYM", "COMMIT_SYM",
  "COMPACT_SYM", "COMPRESSED_SYM", "CONCURRENT", "CONDITION_SYM",
  "CONNECTION_SYM", "CONSISTENT_SYM", "CONSTRAINT", "CONTAINS_SYM",
  "CONVERT_SYM", "COUNT_SYM", "CREATE", "CROSS", "CUBE_SYM", "CURDATE",
  "CURTIME", "CURRENT_USER", "CURSOR_SYM", "DATABASE", "DATABASES",
  "DATA_SYM", "DATETIME_SYM", "DATE_ADD_INTERVAL", "DATE_SUB_INTERVAL",
  "DATE_SYM", "DAY_HOUR_SYM", "DAY_MICROSECOND_SYM", "DAY_MINUTE_SYM",
  "DAY_SECOND_SYM", "DAY_SYM", "DEALLOCATE_SYM", "DECIMAL_NUM",
  "DECIMAL_SYM", "DECLARE_SYM", "DEFAULT", "DEFINER", "DELETE_SYM", "DESC",
  "DESCRIBE", "DETERMINISTIC_SYM", "DISABLE_SYM", "DISCARD", "DISTINCT",
  "DIV_SYM", "DOUBLE_SYM", "DO_SYM", "DROP", "DUMPFILE", "DUPLICATE_SYM",
  "DYNAMIC_SYM", "EACH_SYM", "ELSE", "ENABLE_SYM", "ENCLOSED", "END",
  "ENDS_SYM", "END_OF_INPUT", "ENGINE_SYM", "ENUM_SYM", "EQUAL_SYM",
  "ERRORS", "ESCAPED", "ESCAPE_SYM", "EXCLUSIVE_SYM", "EXECUTE_SYM",
  "EXISTS", "EXTENDED_SYM", "EXTRACT_SYM", "FALSE_SYM", "FILE_SYM",
  "FIRST_SYM", "FIXED_SYM", "FLOAT_NUM", "FLUSH_SYM", "FORCE_SYM",
  "FOREIGN", "FOR_SYM", "FOUND_SYM", "FRAC_SECOND_SYM", "FROM", "FULL",
  "GE", "GLOBAL_SYM", "GROUP_CONCAT_SYM", "GROUP_SYM", "HASH_SYM",
  "HAVING", "HEX_NUM", "HOUR_MICROSECOND_SYM", "HOUR_MINUTE_SYM",
  "HOUR_SECOND_SYM", "HOUR_SYM", "IDENT", "IDENTIFIED_SYM", "IDENTITY_SYM",
  "IDENT_QUOTED", "IF", "IGNORE_SYM", "IMPORT", "INDEXES", "INDEX_SYM",
  "INFILE", "INNER_SYM", "INOUT_SYM", "INSENSITIVE_SYM", "INSERT",
  "INTERVAL_SYM", "INTO", "INT_SYM", "INVOKER", "IN_SYM", "IS",
  "ISOLATION", "ITERATE_SYM", "IPV6_SYM", "JOIN_SYM", "KEYS",
  "KEY_BLOCK_SIZE", "KEY_SYM", "KILL_SYM", "LAST_SYM", "LE", "LEADING",
  "LEFT", "LEVEL_SYM", "LEX_HOSTNAME", "LIKE", "LIMIT", "LINES", "LOAD",
  "LOCAL_SYM", "LOCKS_SYM", "LOCK_SYM", "LOGS_SYM", "LONG_NUM", "LONG_SYM",
  "MATCH", "MAX_SYM", "MAX_VALUE_SYM", "MEDIUM_SYM", "MERGE_SYM",
  "MICROSECOND_SYM", "MINUTE_MICROSECOND_SYM", "MINUTE_SECOND_SYM",
  "MINUTE_SYM", "MIN_SYM", "MODE_SYM", "MODIFIES_SYM", "MODIFY_SYM",
  "MOD_SYM", "MONTH_SYM", "NAMES_SYM", "NAME_SYM", "NATIONAL_SYM",
  "NATURAL", "NE", "NEW_SYM", "NEXT_SYM", "NONE_SYM", "NOT_SYM", "NOW_SYM",
  "NO_SYM", "NULL_SYM", "NUM", "NUMERIC_SYM", "OFFLINE_SYM", "OFFSET_SYM",
  "ON", "ONE_SHOT_SYM", "ONE_SYM", "ONLINE_SYM", "OPEN_SYM", "OPTIMIZE",
  "OPTION", "OPTIONALLY", "ORDER_SYM", "OR_SYM", "OUTER", "OUTFILE",
  "OUT_SYM", "PARTIAL", "POSITION_SYM", "PRECISION", "PREV_SYM",
  "PRIMARY_SYM", "PROCESS", "PROCESSLIST_SYM", "QUARTER_SYM", "QUERY_SYM",
  "RANGE_SYM", "READS_SYM", "READ_SYM", "READ_WRITE_SYM", "REAL",
  "REDUNDANT_SYM", "REFERENCES", "REGEXP_SYM", "RELEASE_SYM", "RENAME",
  "REPEATABLE_SYM", "REPEAT_SYM", "REPLACE", "REPLICATE", "REPLICATION",
  "RESTRICT", "RETURNS_SYM", "RETURN_SYM", "REVOKE", "RIGHT",
  "ROLLBACK_SYM", "ROLLUP_SYM", "ROUTINE_SYM", "ROWS_SYM",
  "ROW_FORMAT_SYM", "ROW_SYM", "SAVEPOINT_SYM", "SECOND_MICROSECOND_SYM",
  "SECOND_SYM", "SECURITY_SYM", "SELECT_SYM", "SENSITIVE_SYM",
  "SEPARATOR_SYM", "SERIALIZABLE_SYM", "SERIAL_SYM", "SERVER_SYM",
  "SESSION_SYM", "SET_SYM", "SET_VAR", "SHARE_SYM", "SHOW", "SIGNED_SYM",
  "SIMPLE_SYM", "SNAPSHOT_SYM", "SPECIFIC_SYM", "SQLEXCEPTION_SYM",
  "SQLSTATE_SYM", "SQLWARNING_SYM", "SQL_BIG_RESULT", "SQL_BUFFER_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SQL_SYM", "STARTING",
  "START_SYM", "STATUS_SYM", "STDDEV_SAMP_SYM", "STD_SYM", "STOP_SYM",
  "STORED_SYM", "STRAIGHT_JOIN", "STRING_SYM", "SUBDATE_SYM",
  "SUBJECT_SYM", "SUBSTRING", "SUM_SYM", "SUSPEND_SYM", "SYSDATE",
  "TABLES", "TABLESPACE", "TABLE_REF_PRIORITY", "TABLE_SYM",
  "TEMPORARY_SYM", "TERMINATED", "TEXT_STRING", "TEXT_SYM", "THEN_SYM",
  "TIMESTAMP_ADD", "TIMESTAMP_DIFF", "TIMESTAMP_SYM", "TIME_SYM", "TO_SYM",
  "TRAILING", "TRANSACTION_SYM", "TRIM", "TRUE_SYM", "TRUNCATE_SYM",
  "TYPE_SYM", "ULONGLONG_NUM", "UNCOMMITTED_SYM", "UNDOFILE_SYM",
  "UNDO_SYM", "UNION_SYM", "UNIQUE_SYM", "UNKNOWN_SYM", "UNLOCK_SYM",
  "UNSIGNED_SYM", "UPDATE_SYM", "USAGE", "USER", "USE_SYM", "USING",
  "UTC_DATE_SYM", "UTC_TIME_SYM", "UTC_TIMESTAMP_SYM", "UTF8_SYM",
  "UUID_SYM", "VALUES", "VALUE_SYM", "VARBINARY", "VARCHAR_SYM",
  "VARIABLES", "VARIANCE_SYM", "VARYING", "VAR_SAMP_SYM", "WAIT_SYM",
  "WARNINGS", "WEEK_SYM", "WHEN_SYM", "WHERE", "WITH", "WITH_ROLLUP_SYM",
  "WORK_SYM", "WRITE_SYM", "XOR", "YEAR_MONTH_SYM", "YEAR_SYM",
  "ZEROFILL_SYM", "'='", "LESS_THAN", "GREATER_THAN", "CONCAT", "'|'",
  "'&'", "SHIFT_RIGHT", "SHIFT_LEFT", "'-'", "'+'", "'*'", "'/'", "'%'",
  "'^'", "'~'", "UMINUS", "'('", "')'", "'{'", "'}'", "','", "'.'", "'@'",
  "$accept", "query", "verb_clause", "statement", "create", "$@1", "$@2",
  "$@3", "create_table_definition", "$@4", "create_select_as", "$@5",
  "$@6", "create_like", "create_select", "stored_select", "$@7", "$@8",
  "opt_create_database_options", "opt_database_custom_options",
  "custom_database_option", "opt_table_options", "opt_if_not_exists",
  "opt_create_table_options", "create_table_options_space_separated",
  "create_table_options", "create_table_option", "custom_engine_option",
  "charset", "charset_name_or_default", "default_charset",
  "default_collation", "default_collation_schema", "row_format",
  "row_format_or_text", "opt_select_from", "field_list", "field_list_item",
  "column_def", "key_def", "opt_check_constraint", "check_constraint",
  "opt_constraint", "constraint", "field_spec", "$@9", "field_def", "$@10",
  "varchar", "int_type", "real_type", "float_options", "precision",
  "opt_len", "opt_field_number_signed", "ignored_field_number_length",
  "opt_zerofill", "opt_precision", "opt_attribute_not_null",
  "opt_attribute_index", "opt_attribute", "opt_attribute_boolean",
  "opt_attribute_string", "opt_attribute_list_string", "attribute_string",
  "opt_attribute_number", "opt_attribute_list_integer",
  "attribute_integer", "opt_attribute_timestamp",
  "opt_attribute_list_timestamp", "attribute_timestamp",
  "opt_attribute_comment", "collation_name", "collation_name_or_default",
  "opt_default", "opt_primary", "references", "opt_ref_list", "ref_list",
  "opt_match_clause", "opt_on_update_delete", "delete_option", "key_type",
  "constraint_key_type", "key_or_index", "opt_key_or_index",
  "keys_or_index", "opt_unique", "init_key_options", "key_alg",
  "key_options", "key_opts", "key_using_alg", "key_opt", "btree_or_rtree",
  "key_list", "key_part", "opt_ident", "opt_component", "string_list",
  "alter", "$@11", "$@12", "alter_commands", "build_method", "alter_list",
  "add_column", "alter_list_item", "$@13", "$@14", "$@15", "opt_column",
  "opt_ignore", "opt_place", "opt_to", "start", "start_transaction_opts",
  "analyze", "$@16", "check", "$@17", "rename", "$@18",
  "table_to_table_list", "table_to_table", "select", "select_init",
  "select_paren", "select_paren_derived", "select_init2", "$@19",
  "select_part2", "$@20", "$@21", "select_into", "select_from",
  "select_options", "select_option_list", "select_option_distinct_or_all",
  "select_option_small_or_big", "select_option", "select_lock_type",
  "select_item_list", "select_item", "remember_name", "remember_end",
  "select_alias", "optional_braces", "expr", "bool_pri", "predicate",
  "bit_expr", "comp_op", "all_or_any", "simple_expr",
  "function_call_keyword", "function_call_nonkeyword",
  "function_call_conflict", "function_call_generic", "@22",
  "opt_udf_expr_list", "udf_expr_list", "udf_expr", "sum_expr", "$@23",
  "$@24", "$@25", "variable", "$@26", "variable_aux", "opt_distinct",
  "opt_gconcat_separator", "opt_gorder_clause", "in_sum_expr", "$@27",
  "cast_type", "expr_list", "opt_expr", "opt_else", "when_list",
  "table_ref", "join_table_list", "esc_table_ref", "derived_table_list",
  "join_table", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "normal_join", "table_factor", "$@35", "select_derived_union", "$@36",
  "$@37", "select_init2_derived", "select_part2_derived", "$@38", "$@39",
  "select_derived", "$@40", "select_derived2", "$@41", "$@42",
  "get_select_lex", "select_derived_init", "opt_outer",
  "index_hint_clause", "index_hint_type", "index_hint_definition", "$@43",
  "$@44", "index_hints_list", "opt_index_hints_list", "$@45",
  "opt_key_definition", "$@46", "opt_key_usage_list", "key_usage_element",
  "key_usage_list", "using_list", "interval", "interval_time_stamp",
  "interval_time_st", "table_alias", "opt_table_alias", "opt_all",
  "where_clause", "$@47", "having_clause", "$@48", "opt_escape",
  "group_clause", "group_list", "olap_opt", "alter_order_clause",
  "alter_order_list", "alter_order_item", "opt_order_clause",
  "order_clause", "$@49", "order_list", "order_dir",
  "opt_limit_clause_init", "opt_limit_clause", "limit_clause",
  "limit_options", "limit_option", "delete_limit_clause", "ulong_num",
  "ulonglong_num", "select_var_list_init", "$@50", "select_var_list",
  "select_var_ident", "into", "$@51", "into_destination", "$@52", "drop",
  "$@53", "table_list", "table_name", "if_exists", "opt_temporary",
  "execute", "execute_var_or_string", "opt_status", "opt_concurrent",
  "opt_wait", "insert", "$@54", "$@55", "replace", "$@56", "$@57",
  "insert2", "insert_table", "insert_field_spec", "$@58", "fields",
  "insert_values", "$@59", "$@60", "values_list", "ident_eq_list",
  "ident_eq_value", "equal", "opt_equal", "no_braces", "$@61",
  "opt_values", "values", "expr_or_default", "opt_insert_update", "$@62",
  "update", "$@63", "update_list", "update_elem", "insert_update_list",
  "insert_update_elem", "delete", "$@64", "opt_delete_option", "truncate",
  "opt_table_sym", "show", "$@65", "show_param", "opt_db", "from_or_in",
  "show_wild", "describe", "$@66", "$@67", "describe_command",
  "opt_extended_describe", "opt_describe_column", "flush", "$@68",
  "flush_options", "flush_option", "$@69", "opt_table_list", "kill",
  "kill_option", "use", "load", "$@70", "$@71", "$@72", "$@73",
  "data_file", "load_data_lock", "opt_duplicate", "opt_duplicate_as",
  "opt_field_term", "field_term_list", "field_term", "opt_line_term",
  "line_term_list", "line_term", "opt_ignore_lines", "lines_or_rows",
  "opt_field_or_var_spec", "fields_or_vars", "field_or_var",
  "opt_load_data_set_spec", "text_literal", "text_string",
  "signed_literal", "literal", "integer_literal", "boolean_literal",
  "date_literal", "NUM_literal", "insert_ident", "table_wild",
  "order_ident", "simple_ident", "simple_ident_q", "field_ident",
  "table_ident", "schema_name", "catalog_name", "IDENT_sys",
  "TEXT_STRING_sys", "TEXT_STRING_literal", "TEXT_STRING_filesystem",
  "ident", "ident_or_text", "engine_option_value",
  "keyword_exception_for_variable", "keyword", "keyword_sp", "set", "$@74",
  "opt_option", "option_value_list", "option_type_value", "$@75",
  "option_type", "option_type2", "opt_var_type", "opt_var_ident_type",
  "ext_option_value", "sys_option_value", "option_value",
  "user_variable_ident", "internal_variable_ident",
  "internal_variable_name", "isolation_types", "set_expr_or_default",
  "table_or_tables", "unlock", "$@76", "begin", "$@77", "opt_work",
  "opt_chain", "opt_release", "opt_savepoint", "commit", "rollback",
  "savepoint", "release", "savepoint_ident", "union_clause", "union_list",
  "$@78", "union_opt", "union_order_or_limit", "$@79", "order_or_limit",
  "union_option", "query_specification", "query_expression_body", "$@80",
  "subselect", "subselect_start", "subselect_end", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
      61,   625,   626,   627,   124,    38,   628,   629,    45,    43,
      42,    47,    37,    94,   126,   630,    40,    41,   123,   125,
      44,    46,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   393,   394,   394,   395,   395,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   397,   398,   397,   399,   397,   400,   397,   401,
     402,   401,   401,   401,   401,   403,   404,   403,   405,   403,
     406,   407,   409,   410,   408,   411,   411,   411,   411,   411,
     412,   412,   412,   413,   413,   413,   413,   413,   413,   413,
     414,   414,   415,   415,   416,   416,   417,   417,   418,   418,
     418,   419,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   421,   421,   422,   422,   423,
     424,   425,   426,   426,   426,   426,   426,   426,   427,   428,
     428,   429,   429,   430,   430,   431,   431,   432,   432,   432,
     432,   432,   433,   433,   434,   435,   435,   436,   438,   437,
     439,   439,   439,   439,   439,   439,   439,   440,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   441,   441,   441,   442,   442,   443,   443,   443,   444,
     444,   444,   445,   446,   446,   447,   447,   447,   448,   448,
     449,   449,   450,   450,   450,   451,   451,   452,   452,   452,
     453,   453,   453,   453,   454,   454,   454,   454,   455,   455,
     456,   456,   457,   457,   457,   457,   458,   458,   459,   459,
     460,   460,   460,   460,   460,   461,   461,   462,   462,   463,
     463,   463,   463,   463,   464,   464,   465,   466,   466,   467,
     467,   468,   468,   469,   470,   470,   471,   471,   472,   472,
     472,   472,   473,   473,   473,   473,   473,   474,   474,   474,
     474,   474,   475,   476,   476,   477,   477,   478,   478,   479,
     479,   479,   480,   480,   481,   482,   482,   483,   483,   484,
     484,   485,   486,   486,   486,   487,   487,   488,   488,   489,
     489,   490,   490,   491,   491,   492,   492,   494,   493,   495,
     493,   496,   496,   496,   496,   497,   497,   497,   498,   498,
     499,   500,   500,   500,   501,   500,   502,   503,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   504,   504,   505,   505,   506,   506,   506,   507,
     507,   507,   508,   509,   509,   511,   510,   513,   512,   515,
     514,   516,   516,   517,   518,   519,   519,   520,   520,   521,
     521,   523,   522,   525,   526,   524,   527,   527,   527,   527,
     527,   528,   529,   529,   530,   530,   531,   531,   532,   532,
     533,   533,   533,   533,   533,   534,   534,   534,   535,   535,
     535,   536,   536,   537,   538,   539,   539,   539,   539,   539,
     540,   540,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   542,   542,   542,   542,   542,   542,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   545,   545,   545,
     545,   545,   545,   546,   546,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   552,   551,   553,   553,   554,
     554,   555,   556,   556,   556,   556,   557,   558,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   559,
     556,   561,   560,   562,   562,   562,   563,   563,   564,   564,
     565,   565,   567,   566,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   569,   569,   570,   570,
     571,   571,   572,   572,   573,   573,   574,   575,   575,   576,
     576,   577,   577,   578,   577,   579,   577,   580,   577,   577,
     581,   577,   582,   577,   577,   583,   577,   584,   577,   577,
     585,   585,   585,   587,   586,   586,   586,   588,   589,   590,
     588,   591,   593,   594,   592,   596,   595,   598,   599,   597,
     600,   601,   602,   602,   603,   603,   603,   603,   604,   604,
     606,   605,   607,   605,   608,   608,   609,   610,   609,   612,
     611,   613,   613,   614,   614,   615,   615,   616,   616,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   618,   618,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   620,   620,   621,   621,   622,   622,   623,   624,
     623,   625,   626,   625,   627,   627,   628,   628,   629,   629,
     630,   630,   631,   632,   632,   633,   634,   634,   636,   635,
     637,   637,   638,   638,   638,   639,   639,   640,   640,   641,
     642,   642,   642,   643,   643,   643,   644,   644,   645,   645,
     645,   645,   645,   645,   646,   646,   646,   646,   646,   648,
     647,   649,   649,   650,   652,   651,   654,   653,   653,   653,
     655,   655,   656,   655,   655,   657,   657,   658,   659,   659,
     660,   660,   661,   662,   662,   663,   663,   664,   664,   665,
     665,   667,   668,   666,   670,   671,   669,   672,   672,   673,
     674,   674,   674,   675,   674,   676,   676,   677,   677,   678,
     677,   679,   677,   680,   680,   681,   681,   682,   683,   683,
     684,   684,   686,   685,   687,   687,   688,   688,   689,   689,
     690,   691,   690,   693,   692,   694,   694,   695,   696,   696,
     697,   699,   698,   700,   700,   701,   702,   702,   704,   703,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   706,   706,   707,   707,
     708,   708,   708,   710,   709,   711,   709,   712,   712,   713,
     713,   714,   714,   714,   716,   715,   717,   717,   719,   718,
     718,   718,   718,   718,   720,   720,   721,   722,   722,   722,
     723,   725,   726,   727,   728,   724,   729,   730,   730,   731,
     731,   731,   732,   732,   732,   732,   732,   732,   733,   733,
     734,   734,   735,   735,   735,   735,   736,   736,   737,   737,
     738,   738,   739,   739,   740,   740,   741,   741,   741,   742,
     742,   743,   743,   744,   744,   745,   745,   746,   746,   746,
     747,   747,   747,   748,   748,   748,   748,   748,   748,   748,
     748,   748,   749,   749,   749,   749,   749,   749,   749,   750,
     750,   750,   751,   751,   751,   751,   751,   752,   752,   752,
     752,   752,   753,   753,   754,   754,   755,   756,   756,   757,
     757,   757,   758,   758,   758,   758,   759,   759,   759,   760,
     761,   762,   762,   763,   764,   765,   766,   766,   767,   767,
     768,   768,   769,   769,   769,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   773,   772,   774,   774,   775,   775,   777,
     776,   778,   778,   778,   778,   779,   779,   780,   780,   780,
     780,   781,   781,   781,   781,   782,   782,   783,   783,   784,
     784,   785,   785,   785,   786,   786,   787,   788,   788,   788,
     788,   789,   789,   789,   789,   789,   790,   790,   792,   791,
     794,   793,   795,   795,   796,   796,   796,   797,   797,   797,
     798,   798,   799,   800,   800,   801,   802,   803,   804,   804,
     806,   805,   807,   807,   807,   809,   808,   810,   810,   811,
     811,   811,   812,   812,   813,   814,   813,   815,   816,   817
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     7,     0,    13,     0,     6,     5,
       0,     5,     4,     2,     2,     0,     0,     4,     0,     6,
       2,     1,     0,     0,     6,     0,     1,     2,     3,     1,
       1,     2,     3,     1,     3,     3,     2,     3,     3,     3,
       0,     1,     0,     3,     0,     1,     1,     2,     1,     2,
       3,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     1,     1,     2,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     1,     2,     2,     7,     8,     8,
       2,     2,     0,     1,     2,     0,     1,     2,     0,     4,
       2,     5,     2,     2,     2,     5,     2,     0,     6,     5,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       1,     2,     1,     1,     4,     4,     2,     2,     3,     0,
       3,     1,     5,     0,     3,     0,     1,     1,     0,     3,
       0,     1,     0,     3,     1,     1,     2,     2,     1,     2,
       0,     2,     3,     2,     0,     2,     3,     2,     0,     1,
       2,     1,     1,     2,     2,     1,     0,     1,     2,     1,
       1,     1,     3,     2,     1,     0,     1,     2,     1,     1,
       3,     2,     4,     1,     0,     2,     1,     1,     1,     0,
       1,     0,     1,     5,     0,     3,     3,     1,     0,     2,
       2,     2,     0,     3,     3,     6,     6,     1,     1,     2,
       2,     2,     1,     2,     2,     1,     1,     0,     1,     1,
       1,     1,     0,     1,     0,     1,     2,     0,     1,     1,
       2,     2,     1,     3,     2,     1,     1,     4,     2,     1,
       4,     0,     1,     0,     2,     1,     3,     0,     7,     0,
       5,     0,     2,     2,     1,     0,     1,     1,     1,     3,
       2,     3,     2,     4,     0,     6,     0,     0,     8,     3,
       4,     3,     3,     2,     2,     6,     5,     3,     3,     1,
       1,     1,     0,     1,     0,     1,     0,     2,     1,     0,
       1,     1,     3,     0,     3,     0,     4,     0,     4,     0,
       4,     1,     3,     3,     1,     2,     4,     2,     3,     2,
       3,     0,     3,     0,     0,     6,     2,     1,     1,     2,
       2,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     4,     3,     1,
       1,     3,     4,     0,     0,     0,     2,     2,     1,     1,
       0,     2,     3,     3,     3,     2,     3,     4,     3,     4,
       3,     4,     1,     3,     4,     3,     3,     6,     1,     5,
       6,     5,     7,     6,     8,     5,     6,     4,     5,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     5,     5,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     2,     2,     2,     3,     3,
       5,     6,     4,     4,     2,     6,     5,     6,     4,     4,
       5,     4,     2,     4,     4,     4,    10,     6,     8,     6,
       4,     4,     6,     4,     4,     4,     7,     7,     7,     6,
       6,     6,     6,     3,     4,     6,     8,     2,     2,     8,
       8,     6,     2,     4,     6,     6,     8,     8,     6,     8,
       6,     2,     4,     8,     8,     2,     2,     2,     4,     4,
       3,     3,     5,     8,     5,     4,     6,     4,     6,     8,
       6,     4,     3,     3,     6,     0,     5,     0,     1,     1,
       3,     4,     4,     5,     5,     4,     0,     0,     7,     4,
       5,     4,     5,     4,     4,     4,     4,     4,     5,     0,
       8,     0,     3,     3,     1,     4,     0,     1,     0,     2,
       0,     1,     0,     3,     2,     1,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     2,     1,     3,     0,     1,
       0,     2,     4,     5,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     0,     6,     0,     6,     0,     8,     4,
       0,     8,     0,    10,     6,     0,     8,     0,    10,     6,
       1,     2,     2,     0,     4,     3,     5,     3,     0,     0,
       8,     1,     0,     0,     6,     0,     3,     0,     0,     5,
       0,     1,     0,     1,     0,     2,     3,     3,     1,     1,
       0,     7,     0,     7,     1,     2,     0,     0,     2,     0,
       2,     0,     1,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     2,     0,     1,     0,     0,
       3,     0,     0,     3,     2,     0,     0,     4,     4,     2,
       0,     1,     3,     3,     1,     2,     0,     1,     0,     4,
       4,     2,     0,     1,     1,     0,     1,     0,     1,     2,
       1,     3,     3,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     3,     1,     2,     0,     3,     0,     5,     2,     1,
       3,     5,     0,     7,     4,     1,     3,     1,     0,     2,
       0,     1,     5,     1,     2,     0,     3,     0,     1,     0,
       1,     0,     0,     7,     0,     0,     5,     2,     1,     1,
       1,     3,     4,     0,     3,     3,     1,     2,     2,     0,
       3,     0,     5,     3,     1,     3,     1,     3,     1,     1,
       0,     1,     0,     4,     0,     1,     3,     1,     1,     1,
       0,     0,     6,     0,     9,     3,     1,     3,     3,     1,
       3,     0,     8,     0,     1,     3,     0,     1,     0,     3,
       2,     3,     3,     4,     5,     5,     5,     5,     2,     2,
       3,     2,     3,     1,     3,     4,     0,     2,     1,     1,
       0,     2,     2,     0,     4,     0,     4,     1,     1,     0,
       1,     0,     1,     1,     0,     3,     3,     1,     0,     3,
       4,     1,     1,     2,     0,     1,     3,     0,     1,     1,
       2,     0,     0,     0,     0,    18,     1,     0,     1,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     2,
       2,     1,     3,     4,     3,     3,     0,     2,     2,     1,
       3,     3,     0,     3,     1,     1,     0,     3,     2,     3,
       1,     1,     2,     0,     2,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     1,     1,     3,
       4,     5,     1,     5,     3,     2,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     1,     1,     3,     0,
       2,     1,     1,     1,     1,     0,     1,     0,     1,     1,
       1,     0,     2,     2,     2,     1,     2,     4,     5,     4,
       6,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     3,     0,     1,     0,     3,     2,     0,     1,     2,
       0,     1,     4,     4,     5,     2,     3,     1,     0,     1,
       0,     4,     0,     1,     1,     0,     2,     2,     1,     0,
       1,     1,     2,     3,     1,     0,     5,     3,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   285,     0,  1190,     0,  1192,   285,   823,   857,   858,
     760,     2,     0,   864,   771,   877,     0,     0,     0,   774,
    1192,     0,   343,  1145,   828,     0,   826,  1188,   314,     0,
       0,     0,     0,     4,    10,     6,    27,     7,     8,    20,
      24,   334,    13,    14,    16,    21,    30,    11,    28,    26,
      12,   859,    15,    17,    31,    18,    25,    29,     5,     9,
      22,    23,    19,     0,   287,   286,   314,  1187,  1186,   325,
    1192,   327,  1193,  1194,     0,    72,    71,     0,    35,   824,
       0,     0,   758,   761,     0,     0,   981,   994,   982,  1173,
     993,   983,   992,     0,   765,  1175,  1172,  1174,   763,  1171,
       0,   314,   878,   879,     0,   886,   881,     0,   329,     0,
    1194,  1207,  1205,   335,   341,   352,  1146,  1143,  1157,   323,
     827,     0,     0,   315,     0,  1016,  1017,  1018,  1019,  1020,
    1021,  1022,  1023,   996,  1024,  1026,  1025,  1027,  1028,  1029,
     997,   998,  1030,  1031,  1032,   999,  1033,  1000,  1034,  1035,
    1036,  1037,  1038,  1001,  1039,  1041,  1040,  1042,  1043,  1044,
    1002,  1045,  1046,  1003,  1047,  1048,  1049,  1058,  1004,  1050,
    1052,  1051,  1053,  1054,  1055,  1056,  1060,  1061,  1062,  1005,
    1057,  1063,  1059,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1081,  1082,  1084,  1083,  1085,  1087,  1086,  1088,  1090,  1089,
    1091,  1006,  1092,  1093,  1094,  1095,  1096,  1007,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1008,  1106,  1107,
    1108,  1109,  1110,  1009,  1111,  1010,  1113,  1112,  1011,  1114,
    1116,  1012,  1115,  1117,  1013,  1118,  1014,  1119,  1120,  1121,
    1122,  1123,  1124,  1125,  1126,  1129,  1130,  1128,  1127,  1015,
    1131,  1132,  1133,  1134,  1136,  1135,  1138,  1137,  1139,  1140,
    1141,  1142,   880,   986,   979,   987,   995,   343,     0,     0,
       1,     3,  1056,     0,   855,   853,     0,   976,   279,     0,
       0,  1191,     0,     0,  1197,    32,   980,     0,     0,    72,
     252,     0,   750,     0,     0,     0,   758,   764,     0,   767,
       0,   871,   872,  1187,   865,   867,   868,     0,  1017,  1023,
       0,   939,   578,     0,     0,     0,  1030,  1031,     0,     0,
     380,   380,   380,     0,     0,     0,  1043,  1044,   960,     0,
       0,     0,     0,   936,   961,     0,   938,  1066,     0,     0,
       0,  1071,   877,     0,   958,     0,  1081,  1082,     0,     0,
    1085,     0,   380,   935,   957,     0,  1101,     0,     0,     0,
    1110,  1111,     0,     0,  1120,     0,     0,   380,   984,  1129,
    1130,     0,     0,   937,  1015,   959,  1136,   380,   380,   380,
    1135,     0,     0,     0,     0,  1142,     0,     0,     0,  1228,
       0,     0,   551,   876,   392,   398,   411,   426,   436,   437,
     439,   438,   443,   442,   933,   441,   934,   435,   968,   986,
     925,   967,   887,  1206,     0,     0,   779,   775,   778,   757,
    1200,  1197,  1208,   357,   356,   359,   361,   364,   358,   360,
     373,   353,   363,   362,   355,  1149,     0,     0,     0,   850,
     715,  1158,   251,   250,   249,  1159,   843,  1160,   846,     0,
       0,   715,     0,   829,   990,   991,     0,     0,     0,   322,
     825,  1189,     0,   337,     0,  1212,   978,     0,   861,     0,
     219,     0,   326,   755,   328,  1196,     0,     0,  1198,  1202,
       0,    37,     0,   253,     0,   821,   759,   754,     0,     0,
       0,   768,   769,   873,     0,     0,   874,   772,     0,   686,
     454,   579,     0,     0,     0,     0,     0,     0,     0,   686,
       0,   488,   487,   462,     0,     0,     0,     0,   940,     0,
       0,     0,  1228,     0,   556,     0,     0,     0,  1228,     0,
       0,     0,     0,   686,     0,     0,   686,     0,     0,   385,
       0,   492,     0,     0,     0,     0,     0,     0,     0,   686,
     686,     0,     0,   686,     0,   501,     0,     0,     0,   941,
       0,     0,     0,   506,   505,   507,     0,     0,   686,   686,
       0,     0,   446,   445,   447,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   428,     0,   430,   432,   427,
     431,   429,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   926,   525,     0,   888,     0,   330,   331,     0,
     777,     0,  1201,     0,  1203,  1219,   342,  1209,   370,   344,
     369,     0,   354,  1144,  1147,  1155,   848,   849,     0,     0,
      72,     0,     0,     0,   830,     0,   839,   716,   850,     0,
     846,   850,   838,     0,   841,   850,   850,     0,     0,   338,
    1213,   336,  1214,     0,   856,   929,   928,   854,   862,   927,
     863,   977,   220,   280,     0,   277,     0,  1195,  1199,    73,
      55,    33,     0,   688,     0,   751,   766,   770,   762,     0,
     866,   875,   869,     0,     0,   687,   686,     0,   562,     0,
     580,     0,   511,   576,     0,     0,     0,     0,   536,     0,
     562,   381,   510,     0,     0,     0,     0,     0,     0,     0,
     660,   661,   662,   663,   673,   664,   665,   666,   675,   680,
     667,   668,   676,   677,   678,   669,   679,   674,   670,   681,
       0,   659,   557,   549,     0,     0,     0,     0,     0,   523,
       0,     0,   686,     0,     0,     0,   686,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   686,     0,     0,   672,     0,   671,     0,     0,
       0,     0,     0,     0,     0,   483,   522,     0,     0,     0,
       0,     0,   449,     0,   448,   622,     0,  1224,  1229,     0,
       0,  1161,   552,   554,   384,   382,   383,   395,   388,     0,
     393,   386,   390,   433,  1020,   396,     0,     0,   423,  1228,
     695,   424,     0,     0,     0,     0,   409,   412,   413,   414,
     415,     0,   417,     0,   416,   420,   421,   422,   425,   988,
     989,   440,   444,   373,   969,     0,     0,     0,    52,   783,
       0,     0,     0,   789,   776,   780,  1204,  1221,  1220,  1210,
     373,   706,   374,   374,   967,  1149,  1152,  1153,  1156,  1154,
       0,  1151,  1150,  1165,   846,     0,     0,   842,   851,   852,
     724,   725,   723,   719,   720,   831,   847,   850,   832,   846,
     840,   844,   324,   813,   816,     0,     0,   715,  1218,  1216,
     800,   219,   756,     0,     0,    38,    59,    60,    56,    63,
      74,   254,   689,   706,   752,   870,   810,     0,     0,   532,
       0,     0,     0,     0,     0,     0,   461,     0,   508,   509,
       0,     0,   535,     0,     0,     0,   463,   464,   458,   769,
     452,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,   541,   515,   470,     0,   539,     0,   471,   493,     0,
     517,     0,     0,     0,     0,   473,   545,   543,     0,     0,
       0,     0,   547,   502,     0,     0,   474,     0,     0,     0,
       0,     0,     0,     0,   475,     0,   459,   544,   546,   521,
       0,   484,     0,  1222,   621,   352,   622,     0,     0,  1219,
    1227,   453,   970,     0,     0,     0,     0,     0,   389,   394,
     387,   391,  1228,     0,     0,     0,     0,   407,     0,  1228,
     695,   410,     0,     0,     0,     0,   528,   529,     0,   985,
     882,   332,   333,   352,     0,   802,   787,   794,   788,     0,
       0,     0,   786,   963,   962,  1208,     0,   368,   613,   744,
     365,   348,   717,   707,   347,   375,   371,     0,  1148,     0,
    1176,     0,     0,  1166,   850,     0,   845,     0,     0,   833,
     688,     0,   688,   799,   798,     0,   708,  1217,   801,     0,
     312,   312,   800,   312,   800,     0,     0,     0,     0,   312,
       0,     0,     0,   310,     0,   312,     0,   319,     0,     0,
     309,   219,    81,    93,    94,     0,   278,   284,     0,   288,
     311,     0,   380,    66,     0,     0,    61,     0,    57,     0,
       0,   125,    34,   219,   892,    75,    78,   255,     0,     0,
     726,   753,     0,   773,     0,     0,   533,   563,     0,   581,
       0,   456,   163,   565,   163,   574,   572,   159,   568,   566,
     573,   569,     0,   577,     0,   537,   534,     0,     0,   512,
       0,   560,     0,     0,     0,   460,   514,     0,   542,   540,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   373,   339,     0,  1223,  1225,  1162,  1163,
    1164,   273,   553,     0,   405,   401,     0,   399,   694,     0,
       0,     0,   408,   419,   418,   374,   526,   373,   971,   889,
     373,   784,   796,     0,   804,     0,     0,   781,   791,     0,
       0,   790,  1211,   631,   630,     0,   587,   688,   589,   586,
     585,   584,     0,   630,   739,     0,     0,   345,   350,   346,
     718,   349,     0,   372,   379,   378,   964,   969,     0,     0,
    1161,     0,   834,   837,   836,   722,   721,   835,   815,   706,
     809,   808,   817,     0,   218,   217,   101,   216,   313,   271,
     246,   245,   292,     0,   122,   271,   242,   290,     0,     0,
       0,     0,     0,   380,    87,   303,   282,     0,     0,     0,
       0,   304,     0,     0,   283,     0,     0,   321,   320,     0,
       0,     0,    77,    96,     0,   800,   800,   219,   125,     0,
     316,   122,   128,   972,     0,    67,    65,    64,    62,    58,
     737,   738,   736,   734,   735,    69,    68,    50,     0,     0,
      51,     0,   111,   113,   114,    43,   893,   895,   894,    44,
       0,   219,    79,     0,   256,     0,   690,     0,   822,   811,
       0,   485,   582,     0,     0,   564,   571,     0,   575,   161,
     567,   570,   455,   457,     0,     0,     0,   491,   558,   561,
       0,     0,   467,     0,   469,   516,   494,   518,     0,   472,
     451,     0,   495,     0,   500,   498,     0,     0,     0,   481,
       0,   479,     0,   480,     0,   482,   520,   524,   623,   340,
       0,     0,   555,   397,     0,   406,   403,     0,   400,   375,
     530,   891,   890,     0,    53,     0,     0,     0,   805,   807,
     793,  1212,   782,   785,   630,   613,     0,     0,   610,   632,
       0,   632,   613,   613,   696,   613,   682,   627,     0,     0,
     749,     0,   745,   366,     0,   377,   376,     0,     0,  1184,
    1185,  1182,  1183,  1181,  1167,     0,     0,   726,   966,   709,
     712,   127,   272,     0,     0,     0,   247,   121,   271,   120,
     123,   254,     0,    84,   294,    83,   308,    88,   271,   301,
     302,   299,    82,    90,   296,   702,   704,   712,   307,    86,
      85,   102,   103,   104,   105,   106,   107,   108,    89,    95,
       0,     0,   289,     0,   975,     0,   318,   291,     0,   115,
     116,     0,     0,    92,    91,   219,    40,    74,   125,   897,
     896,     0,    46,    80,   265,   266,   261,     0,   727,     0,
       0,   583,     0,     0,   538,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   478,   476,
     477,   717,  1226,   274,   402,     0,   531,   883,   717,   795,
     797,   803,     0,   792,     0,   706,   625,     0,   612,   611,
     633,     0,   613,   632,   632,     0,   592,   591,     0,   691,
     590,   683,     0,   649,   615,   352,   748,   746,     0,   740,
     742,     0,   965,     0,     0,  1180,  1168,     0,  1169,   814,
       0,   713,   714,   711,   124,   271,   243,   248,   244,   254,
       0,     0,     0,     0,   300,     0,     0,   705,   100,    98,
      97,    99,   293,   317,   224,   168,   180,   184,   188,   205,
     180,   159,   172,   137,   159,   168,   180,   159,   172,   150,
     188,   205,   180,   180,     0,   153,   214,     0,   196,   196,
     974,    42,  1215,   892,   112,     0,  1208,     0,     0,   486,
     164,   160,     0,   489,   490,   559,   550,   513,     0,   468,
     519,   496,   499,   497,   503,   504,   365,   365,   109,   404,
       0,    54,   806,  1219,   682,   717,   613,   588,   613,   599,
       0,     0,   613,   595,   593,   597,     0,   692,   706,   685,
     614,   646,   373,   898,   743,     0,   367,  1178,  1177,  1179,
       0,   712,     0,     0,     0,   306,     0,   316,   214,   703,
       0,   228,     0,   165,   143,   149,     0,     0,     0,   175,
     222,   178,   151,   192,   195,   134,   189,   191,     0,     0,
       0,   209,   213,   132,   206,   208,   141,   196,   172,     0,
     174,   157,     0,   196,   165,   148,   196,   156,   136,     0,
     130,   142,   147,     0,     0,   129,     0,   201,     0,     0,
     200,   204,   133,   197,   199,   140,     0,    41,    39,    48,
      47,     0,   712,   269,     0,     0,     0,   624,   110,     0,
     618,   616,   617,   626,     0,   584,   613,   613,     0,   584,
       0,     0,     0,   700,   712,     0,   717,   650,     0,   628,
       0,   906,   741,  1170,   710,     0,     0,     0,     0,     0,
       0,     0,   305,   930,   295,   297,     0,   227,     0,   232,
       0,   166,   167,   170,     0,   181,   183,     0,   185,   187,
     194,   193,   176,   179,   190,   177,     0,   380,   953,     0,
     952,   211,   954,     0,   207,   144,   158,     0,     0,   146,
     170,   145,     0,     0,   215,     0,   944,   943,   946,     0,
       0,   942,   203,   945,     0,   198,   973,  1215,   257,     0,
     268,     0,   812,   819,     0,   162,   466,   884,     0,   600,
       0,   604,   609,   605,     0,   596,   594,     0,   701,     0,
     697,   699,   693,   351,   638,   639,     0,     0,   644,   648,
     717,     0,     0,     0,     0,   899,   901,     0,   747,     0,
       0,   257,   932,   931,   316,   225,     0,   229,   230,   231,
       0,   223,   169,   171,   155,   182,   950,   949,   951,   186,
     955,   210,   956,   380,   173,     0,   275,   154,   205,   180,
     188,   948,   947,   202,    49,     0,   800,    36,   258,   262,
     259,   712,     0,     0,     0,   898,   619,     0,     0,     0,
       0,     0,   657,   712,   634,   634,   645,   629,     0,     0,
       0,     0,   900,     0,     0,   907,   909,     0,   257,   117,
     298,   226,     0,     0,   212,   188,     0,   131,   139,   135,
     264,     0,   260,   267,   270,   818,   820,   906,   706,   601,
       0,   606,     0,   598,     0,   698,     0,   642,   640,   904,
     905,     0,   902,     0,     0,   908,   119,   118,   238,     0,
     237,     0,   234,   233,   138,   276,   732,   733,   729,   730,
     728,   731,   263,   912,   717,     0,     0,   658,     0,   635,
       0,     0,     0,   903,   911,   910,   240,   241,   239,     0,
       0,     0,   916,   620,   603,   608,   637,   636,   651,     0,
       0,     0,     0,     0,   923,   654,     0,   655,   652,   653,
       0,   236,   235,   914,   915,   913,   918,     0,     0,   920,
     921,     0,   885,   643,     0,   641,   922,   917,     0,   924,
     656,   919
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,    34,   920,   300,   690,  1132,  1672,
    1359,  1676,  1897,  1133,  1349,   863,  1043,  1578,   915,   916,
     917,    77,   298,  1134,  1110,  1135,  1136,  1112,  1326,  1641,
    1113,  1114,   683,  1517,  1518,  1696,  1351,  1352,  1353,  1354,
    1489,  1490,  1293,  1294,  1331,  1531,  1666,  1772,  1667,  1668,
    1669,  1378,  1379,  1375,  1853,  1743,  1954,  1771,  1790,  1791,
    1744,  1745,  1755,  1756,  1757,  1792,  1793,  1794,  1763,  1764,
    1765,  1785,  1285,  1286,  1115,  1758,  1530,  1741,  1846,  1849,
    1951,  2052,  1295,  1488,  1296,  1628,   462,   494,  1137,  1138,
    1977,  1978,  1979,  1980,  1546,  1801,  1802,  1481,  1422,  1965,
      35,   911,   480,  1116,    66,  1117,  1118,  1119,  1633,  1635,
    1944,  1297,   124,  1527,  1319,    36,   469,    37,   290,    38,
     292,    39,   424,   627,   628,    40,    41,   279,  1008,   113,
     432,   114,   115,   871,  1060,  1697,   440,   441,   442,   443,
     444,  1257,   639,   640,   641,  1065,  1263,   521,   713,   404,
     405,   406,   602,   826,   407,   408,   409,   410,   411,   853,
    1035,  1036,  1037,   412,   941,  1384,   952,   413,   590,   812,
     753,  1558,  1388,   707,   930,  1162,  1002,   512,   934,   710,
    1246,  1247,  1248,  1249,  1250,  1821,  1820,  1822,  1987,  1910,
    1989,  1914,  1453,  1251,  1252,  1584,  1908,  2028,  1003,  1004,
    1005,  1571,  1585,  1706,  1604,  1605,  1930,  1444,  1253,  1591,
    2037,  1927,  1928,  2072,  2071,  1929,  1827,  1828,  1720,  1721,
    2096,  2097,  2098,  1991,   750,   786,   751,  1602,  1603,   708,
     923,  1139,  1718,  1825,  1027,  1599,  1823,  1920,  1120,  1505,
    1506,  1062,  1063,  1283,  1479,  1623,   656,  1698,  1260,   893,
     894,  1368,  2062,  1345,  1460,  1461,  1609,  1610,  1064,  1254,
    1462,  1723,    42,  1141,   482,   483,   304,    85,    43,    94,
     309,   502,   698,    44,   101,   703,    45,   109,   631,   427,
     428,   864,  1044,  1051,   865,  1055,  1441,  1046,  1231,  1232,
    1085,  1089,  1047,  1234,  1437,  1438,  1282,  1143,  1549,    46,
    1082,   903,   904,  1902,  1903,    47,   693,    80,    48,   121,
      49,   118,   463,   658,   659,   654,    50,   478,   477,    51,
     284,   677,    52,   100,   314,   315,   506,   702,    53,   104,
      54,    55,   422,  1229,  1700,  1985,   106,   626,  1433,  1360,
    1831,  1935,  1936,  1938,  2005,  2006,  2082,  2105,  2094,  2108,
    2109,  2112,   414,   678,  1842,   415,  1892,  1959,  1871,   416,
    1052,  1053,  1480,   417,   418,  1332,   429,   286,   295,   419,
     850,   420,  1040,   421,  1121,   466,    97,   275,   276,    56,
     445,   117,   643,   644,   645,   880,   881,   467,  1016,   882,
     883,  1073,    98,    99,  1071,  1616,  1474,   316,    57,   122,
      58,    70,    73,   294,   489,   633,    59,    60,    61,    62,
     112,   636,   670,  1056,   671,   672,   673,   909,   869,   807,
     808,  1420,   586,   587,  1010
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1713
static const yytype_int16 yypact[] =
{
    1079,   570,   371, -1713,   371,  -152,   869,    81, -1713, -1713,
     865, -1713,   980, -1713, -1713,    71,   163,   -18,   371, -1713,
    -152,   735, -1713,   185, -1713,   256,   402, -1713,   508, 14739,
    -105,   754,   627, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, 11159, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, 14739, -1713, -1713,   508, -1713, -1713, -1713,
    -152, -1713, -1713,   747, 14739,   628, -1713,   451, -1713, -1713,
     705, 14739,   710, -1713,   764,   371, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  1818,   504, -1713, -1713, -1713, -1713, -1713,
    1157,   508, -1713, -1713,  5493, -1713, -1713,   735, -1713, 10435,
      41, -1713, -1713, -1713, -1713,   854, -1713, -1713,  2338,   565,
   -1713, 11517,   371, -1713, 11517, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,  -105,   551,
   -1713, -1713,   -92, 14739, -1713, -1713,   557,   594, -1713,   630,
   11517, -1713, 11517,    93,   -13, -1713, -1713,   775, 14739,   628,
     659, 11517, -1713,   880, 14739, 14739,   710, -1713,   789,   960,
     745, -1713, -1713,   700,   676, -1713, -1713, 10435,   698,   716,
    7827, -1713,  5493,   725,   730,   734,   743,   786,   788,   808,
     818,   818,   818,   820,   828,   833,  -119,   839, -1713,   848,
     860,   871,   873, -1713, -1713,   877, -1713,   884,   887,   892,
    5882,   903,    71,   909, -1713,   916,   919,   920,   924,   926,
     928,  5493,   940, -1713, -1713,   950,   956,   970,   977,   981,
     982,  1003,  1005,  1020,  1024,  1028,  1029,  1034, -1713,  1039,
    1040,  -112,  1044, -1713,  1049, -1713,  1050,   818,   818,   818,
    1055,  1064,  1065,  1075,  1080,  1082,  7827,  7827,  7827,  5493,
   14739, 14739, -1713,   617,  1111, -1713,  1018,     3, -1713, -1713,
   -1713, -1713, -1713, -1713,   755, -1713, -1713, -1713, -1713,  1083,
   -1713,   731,  1094, -1713, 11517, 11517, -1713, -1713, -1713, -1713,
     893,   -13,   930, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
     832,   854, -1713, -1713, -1713, -1713,   756,  1089,    67,   -42,
    1198, -1713, -1713, -1713, -1713, -1713, -1713, -1713,   756,  1148,
    1074,  1198,   756, -1713, -1713, -1713,  1183,  -121,  1425, -1713,
   -1713, -1713,  1209, -1713,  1118,   -35, -1713,   353, 13307, 14739,
    1420, 11517,  1122, -1713,  1122, -1713,  1476,  1269, -1713, -1713,
    1406, -1713, 11517, -1713,  1393, -1713, -1713, -1713,  1330, 11517,
    1300, -1713,  1204, -1713,  1320,  1157, 11517, -1713,  5493,   159,
   -1713,   617,  1206,  5493,  1180,  5493,  5493,  5493,  5493,   165,
    1185, -1713, -1713, -1713,  1189,  5493,  5493,  5493,   755,  5493,
   11875,  5493, -1713,  2007,  1482,  5493,  5493,  5493,  5493,  1863,
    1195,  1192,  5493,   181,  5493,  5493,   182,  5493,  5493, -1713,
    3937, -1713,  7827,  5493,  5493,  5493,  5493,  5493,  5493,  1575,
    1575,  5493,  5493,   732,  3937, -1713,  1571,  1571,  5493,   755,
    3159,  5493,  1199, -1713, -1713, -1713,  1200, 11875,  1575,  1575,
    5493,  5493, -1713, -1713, -1713,    34,  1207,   394,  5493,  1194,
    1226,  5493,  5493,  5493,  7827, -1713,   624, -1713, -1713, -1713,
   -1713, -1713,  6271,  7827,  7827,  1211,  7827,  7827,   579,  7827,
    7827,  7827,  7827,  7827,  8216,  8605,  7827,  7827,  7827,  7827,
     117,  7827, -1713, -1713, 14739, -1713,  1444,  1212, -1713,  1280,
   -1713,   607, -1713,   735, -1713,   852, -1713, -1713, -1713,  1214,
   -1713,  5493, -1713,  1217, -1713,   650, -1713, -1713, 11517,  1229,
     628, 11517,  1295,  5493, -1713,   615, -1713, -1713,   -42, 14739,
     756,   -42, -1713, 11517, -1713,   -42,   -42,  1329, 11875, -1713,
   -1713, -1713, -1713,    28, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713,  1569, -1713, 11517, -1713, -1713, -1713,
     992, -1713, 14739,  1254, 11517,  1122, -1713, -1713, -1713,  1432,
   -1713,  1122, -1713,   607,    87, -1713,  1575,  1236, -1713,  5493,
     -36,   329, -1713,   617,   572,   644,   127,    99, -1713,  1238,
    1246, -1713, -1713,   109,   113,   144,   150,  1240,   223,  1243,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
    1499, -1713, -1713, -1713,   247,   118,   122,    40,  1253, -1713,
    5493,   154,  1575,  1247,   272,   278,  1575,  1252,   161,   321,
     332,  1812,   333,   166,   176,   180,   194,   345,  1256,  1258,
     197,    53,  1575,  1260,   348, -1713,  1261, -1713,  1264,   351,
    4326,  4715,  5104,    91,   202, -1713, -1713,  1263,  1272,  1277,
      74,   357, -1713,  5493, -1713, -1713,   418, -1713,  1333,   102,
   14739,   599, -1713,  1388, -1713,    76,  1657, -1713, -1713,   722,
   -1713, -1713, -1713, -1713,  1287, -1713,  1292,  1121,  1296,  5493,
       8,  1296,  7827,  1294,  7827,  7827,  2015,  2165,  2203,  1654,
    1654,  5882,   693,  5882,   693,  1296,  1296,  1296,  1299, -1713,
   -1713, -1713,  1636,  1304,  1303,  1380, 11517, 11517, -1713, -1713,
    1313,  1313, 10068, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713,   750,   617, -1713,  1309, -1713, -1713, -1713, -1713, -1713,
    1690,  1316, -1713, -1713,   756,  1318, 14739, -1713, -1713,   617,
   -1713, -1713, -1713, -1713,   -84, -1713, -1713,   -42, -1713,   756,
   -1713, -1713, -1713,  1319, -1713,   453,  1679,  1198, -1713, -1713,
    1342,  2337, -1713,     6,  1343, -1713, -1713,    82,   495,  1344,
    1630, -1713, -1713,  1488, -1713, -1713,  1500,  6660,  1332, -1713,
    5493,    92,  5493,  5493,  1614,  1618, -1713,  5493, -1713, -1713,
    1618,  5493, -1713,  1340,  1572,  1578, -1713, -1713, -1713,  1204,
   -1713,  5493,  5493, -1713,  5493,  5493,  5493,  5493,   362,  5493,
    1351, -1713, -1713, -1713,  1355, -1713,  5493, -1713, -1713,  5493,
   -1713,  5493,  5493,  5493,  5493, -1713, -1713, -1713,  7049,  5493,
    5493,  1356, -1713, -1713,  5493,  5493, -1713,  5493,   107,  5493,
     605,  5493,   685,  5493, -1713,  5493, -1713, -1713, -1713, -1713,
    5493, -1713,   648, -1713, -1713,   854, -1713,   418,  1358,   852,
   -1713, -1713, -1713,  1350,  1357,  1360,  1818,  5493, -1713, -1713,
   -1713, -1713, -1713,  7827,    84,  1369,  7827, -1713,  1153,  5493,
       8,  2015,  1863,  1863,  5493,  1371,  1370, -1713, 14739, -1713,
   -1713, -1713, -1713,   854, 11875, -1713,  1376, -1713,  1376,   858,
    1383,   762, -1713, -1713, -1713,   930,   353, -1713,  -113, -1713,
     614,  1587,  1198, -1713,  1639, 13665, -1713, 12591, -1713,  1608,
   -1713,   453,  1284, -1713,   -42,   -28, -1713,   615,   615, -1713,
    1254, 11875,  1254, -1713, -1713,  7438, -1713, -1713, -1713,    54,
    1047,  1726,  1342,  1726,  1342,  1458,    51,  1617,  1477,  1103,
    1620,  1417,  1421, -1713,  1483,  1726,  1761,    59,  1426,  1428,
   -1713,   937, -1713, -1713, -1713,   959, -1713,  1412, 10793, -1713,
   -1713,  1433,   818, -1713,   342,   736, -1713,   736, -1713,  1837,
   11517,  9352, -1713,  1881,   101, -1713,  1054,  1463,  1590,  5493,
    1627, -1713,  1711, -1713,  5882,   365, -1713,   617,  5493,   617,
     623, -1713,  1427, -1713,  1427, -1713, -1713,  1429, -1713,  1658,
   -1713,  1659,  1431,   617,  1438,  1436, -1713,  5493,  5493, -1713,
     380,   -86,   203,   206,   119, -1713, -1713,   389, -1713, -1713,
     391,   403,   408,   207,   425,   767,  5882,   435,    96,   149,
   -1713,   209,   210,   439,  5493,   442,  5493,   552,  5493,   555,
     567,   578, -1713,   832, -1713,  1441, -1713, -1713, -1713, -1713,
   -1713,  1439,   617,  1445, -1713, -1713,  5493, -1713,     3,  7827,
     167,  1446, -1713, -1713, -1713,   617, -1713, -1713, -1713,    31,
     832,  1449, -1713,   453,  7438,  1313,  1559, -1713, -1713,   858,
   11875, -1713, -1713, -1713, -1713, 14739,  1176,  1254, -1713,  1450,
   -1713, -1713, 11517, -1713,    48,  1497,  1680, -1713, -1713, -1713,
   -1713, -1713, 14023, -1713, -1713, -1713, -1713,  1451,  1668,  3548,
     599,   453, -1713, -1713, -1713, -1713, -1713, -1713, -1713,  1488,
     848,   617, -1713,  5493, -1713, -1713, -1713, -1713, -1713, 12233,
   -1713, -1713, -1713,    58,   632, 12233, -1713, -1713, 12233,   825,
   12233,  1295,    54,   818, -1713, -1713, -1713,  1676,  1677, 12233,
   12233, -1713,   117,  1295, -1713, 12233, 11875, -1713, -1713, 11517,
     424,  1156, -1713, -1713,  1573,  1342,  1342,  2409,  9710, 14739,
     143,   138, -1713,  1459,  1837, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,  1464,  1468,
   -1713,   773, -1713, -1713, -1713, -1713, -1713,  1852,  1854, -1713,
     428,  1864, -1713,   665, -1713, 11517,   617,   615, -1713, -1713,
    1863, -1713,   617,  5493,  1653, -1713, -1713,  1660, -1713, -1713,
   -1713, -1713, -1713, -1713,  1490,  1863,  1863, -1713,  1605, -1713,
    5493,  5493, -1713,  5493, -1713, -1713, -1713, -1713,  5493, -1713,
   -1713,  1863, -1713,  5493, -1713, -1713,  5493,  5493,  5493, -1713,
     592, -1713,   603, -1713,   633, -1713, -1713, -1713,  1214, -1713,
     394, 14739, -1713, -1713,   797, -1713, -1713,  5493, -1713, 13665,
   -1713, -1713, -1713,  1728,  1214, 11875,  7438,  1508,  1512, -1713,
   -1713,   -35, -1713, -1713, -1713,   455,  1741,  1742, -1713,  1682,
     843,  1682,   455,   455,  1776,  -113,   533, -1713,  1380,  1380,
   -1713,  1522, -1713, -1713,  1637, -1713, -1713, 12949,   915, -1713,
    7827,   848, -1713,   617, -1713,  1345,  5493,  1627,   617,  1529,
     613, -1713, -1713,  5493,  1751,  1752,    63, -1713, 12233, -1713,
   -1713, -1713,   112, -1713, -1713, -1713, -1713, -1713, 12233, -1713,
   -1713, -1713, -1713, -1713, -1713,  1535, -1713,   613, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
      54,     2, -1713,   826, -1713, 14739, -1713, -1713, 11517, -1713,
   -1713,  2087, 14739, -1713, -1713,  1881, -1713,  1712,  9710, -1713,
   -1713,  1559, -1713, -1713, -1713, -1713, -1713,  1540, -1713,  1760,
     477,   617,  1548,   849, -1713,  1550,  1551,    55,  1560,   636,
     216,   878,   641,   537,   643,   649,   661,   663, -1713, -1713,
   -1713,   545, -1713, -1713, -1713,   882, -1713, -1713,   545, -1713,
   -1713, -1713,  7438, -1713,  -138,  1488, -1713,    -4, -1713, -1713,
   -1713,  1785,   455,  1682,  1682,  1786,  1735,   -55,  1926,  1822,
   -1713, -1713, 14739, -1713, -1713,   854, -1713, -1713,  1818,  1574,
   -1713,  1771, -1713,    22,  1732, -1713, -1713,   453,   617, -1713,
    5493, -1713, -1713, -1713,   617, 12233, -1713, -1713, -1713, -1713,
    1586,  1892,  1893, 12233, -1713,  2087, 11875, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713,  1597,  1598, -1713, -1713,   866,  1486,
   -1713,  1429,   -78, -1713,  1429,  1598, -1713,  1429,  1601, -1713,
    1175,  1473, -1713, -1713,  1606, -1713,  1942,  1611,   897,   897,
    1603, -1713,    -8,   101, -1713,  1612,   930, 14739,  1661, -1713,
   -1713, -1713,  1792, -1713, -1713, -1713, -1713, -1713,  5493, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713,   614,   614, -1713, -1713,
    1689, -1713, -1713,   852,   837,  1198,  -113, -1713,   455, -1713,
    1842,  1845,   455, -1713, -1713, -1713,  5493, -1713,  1488, -1713,
   -1713,    -3,   832,  1970, -1713,  1522, -1713, -1713, -1713, -1713,
    3548,   613,  1635,  1641, 14739, -1713,  1241,   143,  1942, -1713,
   14739,  1836,  1823,   -83,  1492,  1568,   117,  1241,  1825, -1713,
   -1713,  1872, -1713, -1713, -1713, -1713,  1175, -1713,  1873,  1474,
    1707, -1713, -1713, -1713,  1486, -1713,  1492,   897,  1601,  1831,
   -1713, -1713,  1662,   897,   -83,  1492,   897, -1713, -1713,  1833,
   -1713,  1492,  1492,  1834,  1295, -1713,  1835, -1713,  1354,  1965,
   -1713, -1713, -1713,   897, -1713, -1713, 14739, -1713, -1713, -1713,
   -1713,   934,   613,  1669, 11875,  1667,   667, -1713, -1713, 11517,
   -1713, -1713, -1713,  1450,  1609,  1713,   455,   455,  1781,  1718,
    5493,  5493,  1678,  -137,   613,  5493,  1198, -1713,   562,  1214,
     741,  1882, -1713, -1713, -1713, 14739, 14739,   947,   755,   755,
     961,   961, -1713, -1713, -1713, -1713,   948, -1713,     7,  1847,
    1681, -1713, -1713,  1700,  1241, -1713, -1713,   571, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713, -1713,   755,   818, -1713,   755,
     755, -1713, -1713,  1858, -1713, -1713, -1713,   967,    55, -1713,
    1700, -1713,  1685,  1686, -1713,  1687, -1713, -1713, -1713,   961,
     961,   755, -1713, -1713,  1725, -1713, -1713,    -8,    19, 14739,
   -1713,  1868,  1701, -1713,   453, -1713, -1713, -1713,   394, -1713,
    1737, -1713, -1713, -1713,  1747,   617,   617, 14739, -1713,  5493,
   -1713, -1713,   617, -1713, -1713, -1713,    63,    63, -1713,   562,
     545,  2061,  2062,  1994,  2069,   741, -1713,   -71, -1713,   990,
     998,    19, -1713, -1713,   143, -1713, 14739, -1713, -1713, -1713,
       1, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
     755, -1713,   755,   818, -1713,  1015, -1713, -1713,  1486, -1713,
    1175, -1713, -1713, -1713, -1713,  1295,  1342, -1713,    19, -1713,
   -1713,   613,  1717, 11875,  7438,  1970, -1713,  5493,  1721,  5493,
    1722,  1021, -1713,   613,  1983,  1983, -1713, -1713,    55,    55,
    2081,    55, -1713,  2084,  2085,   -71, -1713,  1870,    19, -1713,
   -1713, -1713,    44,    44, -1713,  1175,    55, -1713,  1492, -1713,
   -1713,   713, -1713, -1713, -1713, -1713, -1713,  1882,  1488,   617,
   14739,   617, 14739, -1713, 14739, -1713,   793, -1713, -1713, -1713,
   -1713,    55, -1713,    55,    55, -1713, -1713, -1713, -1713,  2116,
   -1713,    68,  1901,  1902, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  1973,  1198,  1059,  1087, -1713,  2092, -1713,
    2093,  1745,  1749, -1713, -1713, -1713, -1713, -1713, -1713,  1798,
    2049,  1924,  1755, -1713, -1713, -1713, -1713, -1713, 14381, 14381,
      44,    44,   482,  2778,  1865, -1713,  1756, -1713,  1762, -1713,
    1119, -1713, -1713, -1713, -1713, -1713, -1713,  1818,  1124, -1713,
   -1713, 11875, -1713, -1713, 14381, -1713, -1713, -1713,  8994,  1701,
   -1713, -1713
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
     469, -1713, -1713,  1014, -1147,  -834, -1713, -1713, -1713,  -155,
   -1713, -1713,  -251, -1089,  1035, -1003,  -868, -1713, -1713, -1713,
   -1713, -1713,  1465, -1713, -1713, -1512,   829,   621,  1042,  1072,
     835,   870, -1713, -1713,   535, -1713,   534, -1713, -1713, -1713,
   -1713,  -590, -1498,  1016,   399,   516,   294, -1063,  -201,   -20,
   -1479, -1713, -1611, -1713,   419,  -538, -1713,   383, -1584, -1713,
     414,   443,   436, -1202,  -363, -1713,   178, -1713, -1713, -1713,
   -1713,  -905, -1713, -1713, -1078, -1713, -1713, -1713, -1713, -1342,
   -1712, -1713,  1046,   218, -1713,  -904,   300,  -673, -1713, -1713,
   -1713, -1713, -1713, -1713,   883, -1713, -1713,   879, -1713, -1713,
   -1713,   188,   151, -1630, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713,  1349,  1723,  1151,  1930,  1202, -1713,
   -1713,  1937, -1713, -1713, -1713,  -735,  -972, -1713, -1713, -1713,
    1774, -1455, -1167,  1346,  -793,  -755,   790,  -330,  1336, -1713,
    -567,  2011, -1713, -1713,  -304, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713,   991, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  1519, -1713,  1281,  -492, -1713, -1713, -1713,
   -1340, -1713,   765,   517, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  -821, -1713, -1713, -1713, -1713, -1713,  1218,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1110, -1713,  -908,
     231, -1713,   298, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
   -1713,   114,   145, -1055,  -528,  1665,   397, -1713,   529,  1716,
    -936, -1713, -1713, -1713,  1210, -1713, -1713, -1713, -1713, -1713,
     600,  -918,  -642, -1713, -1713, -1470,  -421, -1056,  -405, -1713,
    -950,   760, -1713,  -578, -1713, -1713, -1713,   514,  1181, -1713,
   -1713, -1713, -1713, -1713,   267,   -79,  1935, -1713, -1713, -1713,
   -1713, -1713,  1297, -1713, -1713, -1713, -1713, -1713, -1713,  1927,
    1820,  1546, -1713, -1713,  -939, -1713, -1713,  1382, -1713,   815,
   -1064, -1079,  1017, -1713, -1713, -1713, -1216, -1713, -1713, -1713,
   -1713, -1713,  1170,   142,   273, -1713, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  -534,   264,  -582, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713, -1713, -1713,  1750, -1713, -1713, -1713,  1905,
   -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713, -1713,
     274, -1713,   323,   233, -1713,   257, -1713, -1713, -1713, -1713,
     146, -1713,  -317, -1503, -1041, -1045, -1713, -1713, -1713,  -301,
    1025,  1626, -1522,  -510, -1713,    50,   -37,   556,  2189,   -12,
      -2,  -406,  -323,   124,  -608,   938, -1713, -1713, -1713, -1713,
   -1713, -1713, -1713,  1396, -1713, -1713, -1713, -1713,  1004, -1713,
   -1713, -1713,   -90,  -851,   800, -1713,   548,  1191, -1713, -1713,
   -1713, -1713,   709,  2169,  1849, -1713, -1713, -1713, -1713, -1713,
     -81, -1030,  -428, -1713, -1400, -1713, -1713, -1713,  -987, -1386,
   -1713, -1713,  -494, -1713, -1713
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1216
static const yytype_int16 yytable[] =
{
      95,   522,   523,   307,   637,  1140,  1259,  1269,   622,   111,
      96,   758,   851,  1299,   285,  1301,   510,   273,  1439,   528,
     727,  1309,  1207,   714,   715,  1241,   423,   817,  1050,  1070,
     426,   907,   551,  1203,  1572,   825,  1418,  1637,   729,   273,
     662,  1583,   470,  1111,  1355,   657,   591,   565,   492,  1778,
     620,   273,   591,   293,  1685,   620,   657,   573,   574,   575,
    1034,  1446,   273,  1434,   569,   591,  1701,   797,   932,   273,
    1975,  1230,   679,  1317,  1727,  1122,   895,  1780,  2048,   898,
     675,    95,   919,   900,   901,  1273,   591,   472,   591,  1639,
    2012,    96,   582,   583,   584,   111,   591,   273,  1731,   591,
    1496, -1212,  1483,   591,   591,  1587,   464,  1844,   591,   273,
    1237,   591,   273,  1597,   591,  1356,   465,   684,  1066,   591,
    1303,   591,   622,  1026,  -647,   591,   897,  1275,  1276,   102,
     591,   591,   485,  1362,   591,  1077,  1061,   652,   650,   591,
    1947,  1284,   906,  1457,  1277, -1215,  1279,  -647,  1458,  1630,
    1525,  1447,  1450,   274,  1770,  2077,   591,  1768,   905,  1243,
    1770,   591,   591,   622,  1448,  1714,   591,   277,   705,  1436,
     913,  1766,  1449,   591,   705,   287,   665,  1775,   591,   591,
    -860,  1431,  1483,  1781,  1782,   979,  1484,   274,   591,  1976,
     705,   705,   591, -1215,  1824,   676,  1703,   378,   296,    86,
    1851,   487,    88,  1450,   378,   296,   591,  1476,   655,   591,
     -45,  1631,    72,  1542,   591,   591,  1290,   289,   591,   591,
    1580,   591,   591,   993,  2003,  1403,  1918,    86,   591,  2009,
      88,    79,   666,   287,  1291,   591,   105,   488,   426,  1194,
    1948,  1807,  1808,  1111,  2004,   287,  1520,  1521,   287,  1704,
     107,  1357,   317,  1919,   706,  1852,   906,  1451,  2049,   591,
     718,  1834,    86,   592,   495,    88,  1526,   527,   908,   592,
    1770,   273,  1797,  1244,   568,  1245,   762,   766,   273,  1459,
     273,   278,   592,  2078,   591,  1432,   273,  1733,  1715,   273,
     591,  1949,   273,   273,  -860,  1485,  2047,  1350,  1452,   635,
    1442,  2050,   830,   592,   937,   273,  1078,   486,  1769,   919,
     919,  1454,   103,   592,  2010,  1079,   592,   852,  1638,   653,
     592,   592,    91,  2051,   933,   592,   635,   684,   592,  1261,
    1274,   592,  1900,   591,  1586,  1025,   592,   914,   592,  -647,
    2013,   591,   592,   935,   591,   591,   426,   592,   592,  1640,
    1074,   592,  1054,  1728,  1921,  1358,   592,   591,  1543,  2019,
     591,  1477,  1363,   591,   430,  1080,  1702,    91,  1814,   591,
      91,   378,  1818,   592,   591,  1966,   621,   591,   592,   592,
     651,   621,  1318,   592,  2017,  1707,  1528,   629,   273,   273,
     592,  1632,   591,  1486,  1675,   592,   592,  1993,    91,   886,
     593,   591,  1050,   591,  2054,   592,   593,   476,  1627,   592,
    1148,   116,   273,   273,   287,   591,   287,  1548,  1997,   593,
     591,   802,   274,   592,   803,   287,   592,   802,   274,   498,
     956,   592,   592,    91,  1034,   592,   592,   591,   592,   592,
     593,   287,   593,   980,   685,   592,  1671,   591,  1673,  1165,
     593,   591,   592,   593,   591,   691,  1214,   593,   593,  1111,
    1171,   999,   593,  1336,  1000,   593,   273,   273,   593,   273,
    1429,  1215,  1125,   593,  1216,   593,   592,   927,   994,   593,
     273,  1287,  1185,  1404,   593,   593,  1087,   273,   593,   940,
    2018,  1011,  1272,   593,   273,  2039,  2040,  1974,  2042,   944,
     813,   592,   657,   945,  1223,  1224,  1392,   592,   954,  1393,
     593,  2023,   955,  2055,   939,   593,   593,   919,   273,   919,
     593,  1346,  1986,  2035,   588,   589,  1350,   593,  1213,  1389,
    1030,   946,   593,   593,  1233,  1221,  1405,   947,  2073,  1406,
    2074,  2075,   593,  1595,   959,  1509,   593,  1601,   287,   287,
     592,   966,   866,  1730,  1426,  1829,   971,  1427,   592,   484,
     593,   592,   592,   593,   591,   273,   972,   591,   593,   593,
     973,   905,   593,   593,   592,   593,   593,   592,    95,   591,
     592,   119,   593,   913,   974,   272,   592,   978,    96,   593,
     591,   592,   995,  1390,   592,  1777,  1391,  1398,  -684,  1407,
    1408,   832,   680,   681,   591,   287,  1688,   912,   849,   592,
     949,   884,   273,   593,   887,   591,   287,   591,   592,   288,
     592,   111,  1491,   287,  1070,    22,   899,   637,  1621,   591,
     287,  1596,   592,  1722,   953,   591,   273,   592,   593,   273,
      86,    63,  -684,    88,   593,   591,  1800,   273,   591,  1812,
     888,   273,  1425,   591,   592,   591,   273,   924,   123,   962,
    -684,   591,  -684,  2103,   592,   963,   805,  1705,   592,  1337,
    -684,   592,  -684,   591,   273,   591,  1483,  1058,   849,   591,
     273,    67,   273,  -684,    68,  1710,  1711,   593,  -684,  1924,
    1006,  1843,  1956,  -684,  1287,   593,  1544,   591,   593,   593,
     858,  -684,  1843,  1622,  1502,  1876,  1861,  1350,   967,  -684,
     648,   593,  1925,  -684,   593,   120,  1810,   593,  -684,   968,
     970,  1493,  1218,   593,  1424,   655,   663,  1243,   593,   110,
    1054,   593,   975,  1083,  1013,   983,   281,  1196,   986,    30,
    -684,   705,   833,  1255,  1001,   818,   593,  2104,   854,  1176,
     914,  1510,  1371,  -684,   280,   593,  1533,   593,   834,   293,
    -126,  -684,  1126,  1128,   299,   874,   695,  1387,  2026,   593,
    1923,  1709,   287,   701,   593,   287,  1394,   297,  1395,   291,
     806,   592,  1014,   896,   592,   876,  1957,   287,    64,   604,
    1396,   593,  1335,    65,  -684,  1397,   592,  2056,   273,  1256,
    1826,   593,   890,  1545,  1007,   593,  1507,   592,   593,  1843,
     287,    91,  1399,  1955,  1541,  1629,   921,  1198,   287,   629,
    1042,   592,  1402,  1084,   913,  1634,  1409,   782,   835,  1411,
    1837,   891,   592,   877,   592,  -684,   819,   301,  2057,   820,
    1984,  1244,  1550,  1018,   273,   273,   592,  1931,  1994,  1995,
     273,  1601,   592,  2058,   491,  1932,   957,  1555,  1556,   303,
     497,   867,   592,   433,  1679,   592,   308,  -684,    95,  -126,
     592,   878,   592,  1563,   273,  -684,  -684,  1015,   592,   858,
      86,    86,  1058,    88,    88,  1127,   859,  1815,   646,    78,
     592,  1819,   592,    84,  -684,   607,   592,  2021,  1958,   849,
    2059,  1561,  -684,    81,  1926,   849,   849,    74,   849,  1340,
    1059,  1123,  1287,  1746,   592,  1787,   957,   305,   593,   647,
    -684,   593,  -684,  -684,  1691,  1233,  1211,   468,   879,  2060,
    2068,  1939,  1940,   593,  1012,  1575,    82,  1019,   475,  1413,
      75,  1373,  1415,   481,   593,   892,  -684,   868,   479,   434,
    1341,   821,  1732,  1747,  1416,  1092,   860,   861,   593,   936,
     822,  2069,   937,   787,   787,  1417,  -684,  -126,  1933,   593,
    1338,   593,  1339,  1497,  -684,  2065,  -684,  2066,   906,  1568,
     287,   287,  1271,   593,  1788,  -979,   874,   490,  1094,   593,
    1569,   914,  -684,   862,   493,  1911,  1912,  -684,   496,   593,
    1323,  1324,   593,   500,    95,  -684,  1325,   593,  2083,   593,
    1076,  1592,  1342,  -684,    96,   593,   501,  -684,  -285,  1593,
    1570,  2070,  -684,  1687,   682,  1096,   273,   593,  1690,   593,
    1692,   938,   273,   593,   937,  1202,  1693,  -221,   937,  -219,
     603,  1343,   503,  2061,  -684,   338,   -76,  1101,  1694,  1020,
    1695,   593,    91,   273,  1906,   273,  1934,  -684,  1021,  1102,
      95,  1767,   504,  1264,  1773,  -684,   505,  1776,  -221,   273,
      96,   378,  1092,   616,   617,   618,   619,   849,  1748,   682,
     913,  1749,    86,    64,   508,    88,   344,    64,    65,     1,
       2,  -125,    65,  1347,  1304,  -219,  -219,  1288,  -684,   849,
       3,  -219,   509,  1750,  1594,  1094,   273,  1289,  2053,  1748,
    2064,   513,  1749,   849,   604,   849,   514,   849,   273,   273,
     515,   849,   624,     4,   849,    86,  1507,    87,    88,   516,
     858,  1795,     5,  1023,  1750,  1606,  1607,    86,  1287,  -684,
      88,   682,  1096,     6,   435,   436,   437,   438,   354,  1239,
     625,   679,  1240,  1288,  1400,  1344,   439,   937,    89,  1613,
    1537,   632,  1228,  1538,  1101,  1219,   510,  1614,     7,     8,
       9,  -684,   517,  1789,   518,  -125,  1102,   364,    10,    83,
    -684,   605,   -70,    76,  1574,  2101,  2102,   937,    11,  1265,
    1615,  1267,  1108,    69,   519,    71,    12,   606,  -684,    86,
    1290,  1751,    88,  1109,   520,    13,   524,   860,   861,   108,
    1511,  1512,   638,  1642,   525,  1456,  1538,   604,  1291,   526,
     607,  1752,  1746,   594,  -684,   529,  -684,  -684,   273,  1875,
     608,  1307,  1751,   273,   530,  1879,  1681,    14,  1881,  1682,
     273,  1446,  1333,  1513,  1236,   595,   531,   914,   637,   604,
     273,    15,  -152,    91,   287,  1333,  1290,   532,  1514,   533,
    1465,    16,  1747,   534,   635,  1689,   321,   609,   937,  1699,
     535,    90,   937,   536,  1291,   596,   306,   273,   537,  1298,
    1515,  1300,  1508,   273,  -125,   597,   273,  1310,   273,   540,
     849,   385,   310,  1315,  1904,   542,    91,   273,   273,  1495,
     849,    92,   543,   273,   273,   544,   545,   273,    91,  1108,
     546,  1503,   547,   471,   548,   849,   273,   273,  1838,   598,
    1109,  1898,   464,   607,  1899,   338,   550,   -76,  1547,    17,
      18,  1447,   465,    19,  1941,  1945,   552,  1899,  1946,  1482,
    1308,    20,   553,   311,  1448,  1482,  -221,    21,  1492,   849,
    1494,    22,  1449,   273,  1964,   607,   554,  1682,    23,  1500,
    1501,    24,   343,   555,   874,  1504,   344,   556,   557,  1445,
      91,    86,    93,    87,    88,    25,   287,  2007,   655,  1886,
    1899,   346,  -125,  1450,   661,  2008,  1466,  1748,  1899,   558,
    1749,   559,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,  2015,  1516,    89,  2016,   560,    26,  2033,   273,
     561,  2034,  1750,  1333,   562,   563,    27,   273,    28,  1333,
     564,    29,  1333,   273,  1333,   566,   567,  1264,   354,    86,
     570,    87,    88,  1333,  1333,   571,   572,  1451,   338,  1333,
     403,   576,  1870,   287,  1361,   660,  2084,  1753,  1761,  2034,
     577,   578,  1333,  1524,   312,   273,   363,   364,  1872,  1753,
    1761,   579,    89,    95,   622,    30,   580,   313,   581,   623,
      68,  1891,   679,  1904,  2085,   649,   273,  2034,  1452,   344,
     664,   599,   600,   601,   667,   622,   273,  1893,   668,   287,
      86,  1644,    87,    88,  1887,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   669,  2115,   682,   849,  2114,
    1751,  2117,   686,   273,  2118,   687,   273,    90,  1724,   688,
     273,   528,   569,   849,   689,   849,   273,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,  1961,  1482,  1942,
    1943,   354,    91,  1855,  1858,  1573,   692,    92,  1482,  1960,
     694,  1866,  1962,  1265,   622,  1753,   622,   378,   338,   696,
    1759,   697,  1839,  1761,   699,  1855,   709,   712,   383,  1888,
     364,   385,   721,  1759,  1855,    90,   722,   752,   760,  1854,
    1855,  1855,   759,  2110,   705,   810,   795,   796,  1971,  1972,
     273,  1228,   679,   679,   804,   679,    95,   829,   855,   344,
      91,  1904,   856,   857,   870,    92,    96,   875,  2110,   885,
     679,    91,  1333,   273,   902,   922,   910,   925,   811,  1840,
    1841,   273,  1333,   929,   273,   942,   943,   948,  1754,  1762,
     950,   951,   957,  2014,   961,   679,    90,   679,   679,   965,
    1754,  1762,  1152,   976,  -221,   977,  1153,   982,  1092,  1643,
     996,   984,   287,   734,   985,  1857,  1670,  -221,   511,   997,
    1154,   354,  1333,  -221,   998,   273,    92,  1009,  1017,   591,
     378,  -219,  -219,  -434,  1446,  1482,  1270,  -219,  1022,   619,
    1029,  1094, -1216,   620,   385,  1748,   539,  1867,  1749,  1868,
     364,  -527,  1155,  1760,  1038,  1156,  1039,   549,  1748,  1045,
    1067,  1749,   785,  1157,  1748,  1075,  1760,  1749,  1072,  1081,
    1750,  1086,  1088,  1124,  1129,   738,   906,   682,  1096,  1146,
    1142,  1151,   273,  1750,  1856,  1859,  1719,  1166,   273,  1750,
    1092,  1167,  1889,  1890,   849,   585,  1754,  1168,  1178,  -221,
    1101,  1208,  1179,  1190,  1762,  1206,  1856,  1059,  1209,  1333,
     604,  1210,  1102,  -219,  -219,  1856,  1217,  1333,  1226,  -219,
    1227,  1856,  1856,  1094,  1447,   739,  1235,  1761,   742,  1753,
    1238,  1058,  1907,  1268,   743,    86,  1288,  1448,    88,  1158,
    1748,  1302,  1884,  1749,   273,  1449,  1305,  1312,  1306,  1311,
     378,  1313,   273,  1316,  1314,  1869,  1320,   273,  1321,   682,
    1096,  1803,  1327,  1334,   385,  1750,  1363,  1367,  1751,  1130,
    1365,   744,  1369,  1374,  1753,  1377,  1450,  1855,  1382,  1380,
    1381,  1751,  1101,   273,   273,  1383,   937,  1751,  1419,  1909,
    1421,   858,  1423,  1428,  1102,    86,  1463,    87,    88,  1435,
    1455,   746,  1467,  1464,   704,  1468,  1446,  1498,  1499,   711,
    1532,  1535,  1519,   716,   717,  1536,   607,    86,  1803,  1779,
      88,   723,   724,   725,  1847,   726,  1539,   728,  1540,  1552,
    1451,   754,   755,   756,   757,   591,  1553,  1554,   761,  1557,
     764,   765,  1092,   768,   769,  1108,   770,   273,  1577,   772,
     773,   774,   775,   776,   777,  1581,  1109,   780,   781,  1092,
     784,  1159,  1582,  1751,   789,   273,   793,   794,   604,  1588,
    1589,  1452,  1590,  1598,  1608,  1094,   800,   801,  1611,  1620,
    1896,  1340,  1625,  1626,   809,  1636,  1677,   814,   815,   816,
     747,  1678,  1094,   287,   273,  1680,  1447,  1683,  1684,   749,
    1160,   730,   731,   732,   733,   734,    91,  1686,  1762,  1448,
    1754,   682,  1096,  1708,  1712,  1713,  1161,  1449,  1716,  1803,
    1803,  1717,  1341,    86,  1725,    87,    88,  1108,   682,  1096,
    1726,   273,  1734,  2020,  1101,   969,  1729,   872,  1109,  1735,
    1736,    90,    86,  1740,  1742,    88,  1102,  1769,  1450,   889,
     -74,  1101,  1783,  1784,  1796,  1754,    89,  1786,  1856,  1799,
    1804,  1913,  1809,  1102,   735,   736,   737,   738,  1805,    86,
    1816,    92,    88,  1817,   607,  1069,  1131,  2116,   273,  1830,
     273,  1835,   273,  1803,  1342,  1848,    86,  1836,    91,    88,
   -1216, -1216,   614,   615,   616,   617,   618,   619,   719,  1850,
    1862,  1992,  1451,  1863,  1865,   931,  1873,  1877,  1878,  1882,
    1883,  1885,  1894,  1343,  1905,  1901,  -602,   739,   740,   741,
     742,  -607,   763,  1937,  1917,   767,   743,  1950,  1952,  1953,
    2011,  1963,  1968,  1969,  1970,  1973,   273,   273,   778,   779,
    1988,   273,   783,  1452,  1982,   730,   731,   732,   733,   734,
    1990,  1983,   592,  1998,  1999,    95,   958,   798,   799,   273,
    2000,  2001,   273,   744,  2024,    96,   273,  2030,  2032,    90,
    1645,   604,  2036,  2041,  1646,  1647,  2043,  2044,  1528,  1108,
    2076,  2079,  2080,  2081,  2086,  2087,   988,   990,   992,  1648,
    1109,  2088,   745,   746,    91,  2089,  1108,  2090,  2091,    92,
    2092,  2093,  1798,  2113,  2111,  1348,  1322,  1109,   735,   736,
     737,   738,  2114,    91,  1992,   918,  1992,  1523,  2067,  1674,
    1330,  1649,  1292,  1487,  1650,  1024,  1529,  1344,  1737,  1738,
    1376,  1774,  1651,  1880,  1967,  1864,  1895,  1032,  1874,  1033,
      91,  1845,  1860,  1364,  1652,  2046,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,  2022,    91,  1653,  1981,
     674,   739,   740,   741,   742,  1041,  1522,  1242,   474,  1205,
     743,  1654,  2099,  2099,   473,   642,  1057,   607,  1430,  1576,
    1600,  1164,   747,  1813,  1204,   928,  2038,  1996,  2120,   593,
     748,   749,   788,  1811,  2100,   720,  1739,  1619,  2099,  1832,
    1222,   499,  1258,  1048,   507,   630,  1169,   744,  1655,   926,
    1579,  1278,  1440,  2119,  1656,   700,  2025,   541,  2002,  2027,
    2063,   604,  2045,  1145,  2121,  1443,  1147,   873,  1149,  1150,
     302,  1068,  1534,  1163,  1475,  1617,   745,   746,  1833,   431,
     634,   960,     0,     0,     0,   964,     0,  1170,     0,     0,
    1172,  1173,  1174,  1175,     0,  1177,     0,     0,     0,   604,
       0,   981,  1180,     0,  1657,  1181,     0,  1182,  1183,  1184,
       0,     0,     0,     0,  1187,  1188,  1189,     0,     0,     0,
    1191,  1192,     0,  1193,     0,  1195,     0,  1197,     0,  1199,
       0,  1200,     0,  1658,     0,     0,  1201,     0,     0,     0,
       0,     0,     0,  1090,     0,     0,     0,  1091,     0,     0,
       0,     0,     0,  1212,     0,  1092,     0,     0,     0,     0,
       0,     0,     0,  1659,     0,  1220,   747,   607,     0,     0,
    1225,     0,     0,     0,   748,   749,     0,  1093,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,  1094,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,  1095,
       0,   447,   448,     0,  1660,   607,     0,     0,  1661,  1662,
     449,     0,     0,     0,     0,  1090,     0,     0,     0,  1091,
       0,  1281,     0,     0,   682,  1096,     0,  1092,     0,     0,
    1097,  1098,     0,     0,     0,  1663,  1099,     0,  1664,  1665,
       0,     0,  1100,     0,     0,     0,  -281,  1101,     0,  1093,
       0,   450,     0,     0,     0,     0,     0,     0,     0,  1102,
    1094,     0,     0,     0,  1103,     0,     0,     0,     0,     0,
       0,  1095,     0,   451,     0,  1366,     0,     0,     0,     0,
    1370,     0,    86,    86,  1372,    88,    88,     0,  1104,     0,
     452,   453,     0,     0,     0,     0,   682,  1096,     0,     0,
       0,     0,  1097,  1385,  1386,     0,     0,   454,  1099,     0,
       0,     0,     0,     0,  1100,     0,     0,     0,     0,  1101,
       0,   455,  1401,     0,     0,     0,     0,     0,     0,     0,
    1410,  1102,  1412,     0,  1414,     0,  1103,     0,  1105, -1216,
     611,   612,   613,   614,   615,   616,   617,   618,   619,     0,
       0,     0,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,   771,     0,  1106,     0,     0,     0,     0,
    1281,     0,     0,     0,     0,     0,     0,   456, -1216,   612,
     613,   614,   615,   616,   617,   618,   619,     0,  1107,     0,
       0,     0,  1108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1109,     0,  1473,     0,     0,     0,     0,
    1105,     0,     0,     0,   827,   828,   457,     0,   831,  1478,
     836,   837,   838,   839,   840,   842,   844,   845,   846,   847,
     848,     0,     0,     0,     0,     0,     0,  1106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   458,     0,
       0,   459,   460,    91,    91,     0,     0,     0,     0,     0,
    1107,     0,     0,     0,  1108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1551,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,  1559,  1560,     0,     0,
       0,     0,     0,     0,  1562,     0,     0,     0,     0,  1564,
       0,     0,  1565,  1566,  1567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,   127,   128,     0,     0,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,     0,  1618,   138,     0,     0,     0,   139,     0,  1624,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,  1028,   154,     0,  1031,     0,     0,     0,
     155,   156,   157,     0,     0,   158,     0,     0,     0,     0,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,     0,     0,   175,     0,     0,
     176,   177,   178,     0,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,     0,     0,   184,     0,  1281,     0,
       0,     0,   185,    86,   186,     0,    88,     0,     0,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,     0,   190,     0,     0,   191,     0,
       0,   192,     0,     0,     0,   193,  1478,     0,     0,     0,
       0,   194,   195,     0,   196,     0,     0,     0,     0,   197,
     198,   199,   200,     0,     0,   201,     0,   202,     0,   203,
       0,   204,   205,   206,   207,     0,     0,   208,   209,   210,
       0,     0,   211,     0,     0,     0,   212,   213,     0,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   219,     0,   220,   221,   222,   223,
       0,     0,     0,     0,  1806,   224,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,   226,     0,     0,     0,
     227,   228,   229,   230,   231,   232,   233,     0,   234,   235,
       0,     0,  1478,   236,   237,   238,   239,     0,     0,   240,
       0,   241,   242,   243,     0,     0,  1473,     0,     0,     0,
       0,     0,     0,     0,   244,   245,     0,     0,   246,     0,
       0,   247,   248,   249,     0,     0,   250,     0,   251,   252,
       0,     0,   253,     0,     0,   254,     0,   255,   256,     0,
     257,     0,     0,   258,     0,     0,   259,   260,     0,   261,
     262,     0,     0,     0,   263,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,     0,   265,     0,   266,     0,
       0,   267,     0,     0,     0,     0,   268,   269,     0,     0,
       0,     0,   270,     0,     0,     0,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1915,  1916,     0,     0,
       0,  1922,     0,   125,   318,  2106,   127,   128,     0,   401,
    2107,     0,   129,     0,     0,     0,   130,   131,   319,     0,
     133,     0,     0,   320,   321,   134,     0,   135,   136,   790,
     137,     0,     0,     0,   138,   322,   323,   324,   139,     0,
       0,   325,   140,     0,   141,   326,     0,   327,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,   328,   329,     0,     0,   154,   330,   331,   332,     0,
     333,   155,   156,   157,   334,   335,   336,     0,     0,     0,
       0,   337,   160,   338,     0,     0,   339,     0,     0,     0,
       0,     0,   161,   162,     0,  1478,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,   340,   341,   175,   342,
     343,   176,   177,   178,   344,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,   345,     0,   184,     0,   346,
       0,     0,     0,   347,    86,   186,     0,    88,   348,     0,
     187,   188,     0,     0,     0,     0,     0,   349,   350,     0,
    1281,     0,     0,  2029,   189,  2031,   351,     0,     0,   191,
       0,   352,   192,     0,   791,   353,   193,     0,     0,     0,
       0,     0,   194,   195,     0,   196,   354,     0,     0,   355,
     197,   198,   199,   356,     0,     0,   357,   358,   202,     0,
     203,   359,   360,   205,   206,   207,     0,     0,   208,   209,
     210,   361,   362,   211,   363,   364,     0,   212,   213,     0,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   365,     0,   219,     0,   220,   221,   366,
     223,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,   225,   367,   368,     0,     0,     0,   226,     0,     0,
     369,   227,   228,   229,   230,   231,   370,   233,     0,   371,
     235,     0,     0,     0,   236,   237,   238,   239,     0,     0,
     240,     0,   241,   242,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,   372,   373,   246,
       0,     0,   247,   374,   249,   375,   376,   250,   377,   251,
     252,     0,     0,   253,     0,   378,   254,     0,   379,   380,
     381,   257,     0,   792,   258,   382,   383,   384,   260,   385,
     261,   262,     0,     0,     0,   263,     0,     0,     0,     0,
     386,     0,     0,   387,   388,   389,     0,   390,   391,   266,
       0,     0,   267,   392,     0,   393,   394,   268,   269,     0,
       0,     0,     0,   270,     0,     0,     0,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,   398,     0,   399,     0,   400,     0,     0,
     401,   402,   125,   318,     0,   127,   128,  1469,     0,     0,
       0,   129,     0,     0,     0,   130,   131,   319,     0,   133,
       0,     0,  1470,   321,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,   322,   323,   324,   139,     0,     0,
     325,   140,     0,   141,   326,     0,   327,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
     328,   329,     0,     0,   154,   330,   331,   332,     0,   333,
     155,   156,   157,   334,   335,   336,     0,     0,     0,     0,
     337,   160,   338,     0,     0,  1471,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,   340,   341,   175,   342,   343,
     176,   177,   178,   344,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,   345,     0,   184,     0,   346,     0,
       0,     0,   347,    86,   186,     0,    88,   348,     0,   187,
     188,     0,     0,     0,     0,     0,   349,   350,     0,     0,
       0,     0,     0,   189,     0,   351,     0,     0,   191,     0,
     352,   192,     0,     0,   353,   193,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   354,     0,     0,   355,   197,
     198,   199,   356,     0,     0,   357,   358,   202,     0,   203,
     359,   360,   205,   206,   207,     0,     0,   208,   209,   210,
     361,   362,   211,   363,   364,     0,   212,   213,  1472,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   365,     0,   219,     0,   220,   221,   366,   223,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
     225,   367,   368,     0,     0,     0,   226,     0,     0,   369,
     227,   228,   229,   230,   231,   370,   233,     0,   371,   235,
       0,     0,     0,   236,   237,   238,   239,     0,     0,   240,
       0,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,   372,   373,   246,     0,
       0,   247,   374,   249,   375,   376,   250,   377,   251,   252,
       0,     0,   253,     0,   378,   254,     0,   379,   380,   381,
     257,     0,     0,   258,   382,   383,   384,   260,   385,   261,
     262,     0,     0,     0,   263,     0,     0,     0,     0,   386,
       0,     0,   387,   388,   389,     0,   390,   391,   266,     0,
       0,   267,   392,     0,   393,   394,   268,   269,     0,     0,
       0,     0,   270,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,   398,     0,   399,     0,   400,     0,     0,   401,
     402,   125,   318,     0,   127,   128,     0,     0,     0,     0,
     129,     0,     0,     0,   130,   131,   319,     0,   133,     0,
       0,   320,   321,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,   322,   323,   324,   139,     0,     0,   325,
     140,     0,   141,   326,     0,   327,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,   328,
     329,     0,     0,   154,   330,   331,   332,     0,   333,   155,
     156,   157,   334,   335,   336,     0,     0,     0,     0,   337,
     160,   338,     0,     0,   339,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,   340,   341,   175,   342,   343,   176,
     177,   178,   344,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,   345,     0,   184,     0,   346,     0,     0,
       0,   347,    86,   186,     0,    88,   348,     0,   187,   188,
       0,     0,     0,     0,     0,   349,   350,     0,     0,     0,
       0,     0,   189,     0,   351,     0,     0,   191,     0,   352,
     192,     0,     0,   353,   193,     0,     0,     0,     0,     0,
     194,   195,     0,   196,   354,     0,     0,   355,   197,   198,
     199,   356,     0,     0,   357,   358,   202,     0,   203,   359,
     360,   205,   206,   207,     0,     0,   208,   209,   210,   361,
     362,   211,   363,   364,     0,   212,   213,     0,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   365,     0,   219,     0,   220,   221,   366,   223,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,   225,
     367,   368,     0,     0,     0,   226,     0,     0,   369,   227,
     228,   229,   230,   231,   370,   233,     0,   371,   235,     0,
       0,     0,   236,   237,   238,   239,     0,     0,   240,     0,
     241,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   372,   373,   246,     0,     0,
     247,   374,   249,   375,   376,   250,   377,   251,   252,     0,
       0,   253,     0,   378,   254,     0,   379,   380,   381,   257,
       0,     0,   258,   382,   383,   384,   260,   385,   261,   262,
       0,     0,     0,   263,     0,     0,     0,     0,   386,     0,
       0,   387,   388,   389,     0,   390,   391,   266,     0,     0,
     267,   392,     0,   393,   394,   268,   269,     0,     0,     0,
       0,   270,     0,     0,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,   398,     0,   399,   721,   400,     0,     0,   401,   402,
     125,   318,     0,   127,   128,     0,     0,     0,     0,   129,
       0,     0,     0,   130,   131,   319,     0,   133,     0,     0,
     320,   321,   134,     0,   135,   136,     0,   137,     0,     0,
       0,   138,   322,   323,   324,   139,     0,     0,   325,   140,
       0,   141,   326,     0,   327,   144,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,   153,   328,   329,
       0,     0,   154,   330,   331,   332,     0,   333,   155,   156,
     157,   334,   335,   336,     0,     0,     0,     0,   337,   160,
     338,     0,     0,   339,     0,     0,     0,     0,     0,   161,
     162,     0,     0,     0,   163,     0,   164,   165,   166,     0,
       0,   167,     0,   168,   169,     0,   170,   171,     0,   172,
       0,   173,   174,   340,   341,   175,   342,   343,   176,   177,
     178,   344,   179,     0,     0,     0,   180,   181,   987,   182,
       0,   183,   345,     0,   184,     0,   346,     0,     0,     0,
     347,    86,   186,     0,    88,   348,     0,   187,   188,     0,
       0,     0,     0,     0,   349,   350,     0,     0,     0,     0,
       0,   189,     0,   351,     0,     0,   191,     0,   352,   192,
       0,     0,   353,   193,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   354,     0,     0,   355,   197,   198,   199,
     356,     0,     0,   357,   358,   202,     0,   203,   359,   360,
     205,   206,   207,     0,     0,   208,   209,   210,   361,   362,
     211,   363,   364,     0,   212,   213,     0,   214,   215,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     365,     0,   219,     0,   220,   221,   366,   223,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,   225,   367,
     368,     0,     0,     0,   226,     0,     0,   369,   227,   228,
     229,   230,   231,   370,   233,     0,   371,   235,     0,     0,
       0,   236,   237,   238,   239,     0,     0,   240,     0,   241,
     242,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   372,   373,   246,     0,     0,   247,
     374,   249,   375,   376,   250,   377,   251,   252,     0,     0,
     253,     0,   378,   254,     0,   379,   380,   381,   257,     0,
       0,   258,   382,   383,   384,   260,   385,   261,   262,     0,
       0,     0,   263,     0,     0,     0,     0,   386,     0,     0,
     387,   388,   389,     0,   390,   391,   266,     0,     0,   267,
     392,     0,   393,   394,   268,   269,     0,     0,     0,     0,
     270,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
     398,     0,   399,     0,   400,     0,     0,   401,   402,   125,
     318,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   319,     0,   133,     0,     0,   320,
     321,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,   322,   323,   324,   139,     0,     0,   325,   140,     0,
     141,   326,     0,   327,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,   328,   329,     0,
       0,   154,   330,   331,   332,     0,   333,   155,   156,   157,
     334,   335,   336,     0,     0,     0,     0,   337,   160,   338,
       0,     0,   339,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,   340,   341,   175,   342,   343,   176,   177,   178,
     344,   179,     0,     0,     0,   180,   181,   989,   182,     0,
     183,   345,     0,   184,     0,   346,     0,     0,     0,   347,
      86,   186,     0,    88,   348,     0,   187,   188,     0,     0,
       0,     0,     0,   349,   350,     0,     0,     0,     0,     0,
     189,     0,   351,     0,     0,   191,     0,   352,   192,     0,
       0,   353,   193,     0,     0,     0,     0,     0,   194,   195,
       0,   196,   354,     0,     0,   355,   197,   198,   199,   356,
       0,     0,   357,   358,   202,     0,   203,   359,   360,   205,
     206,   207,     0,     0,   208,   209,   210,   361,   362,   211,
     363,   364,     0,   212,   213,     0,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   365,
       0,   219,     0,   220,   221,   366,   223,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   225,   367,   368,
       0,     0,     0,   226,     0,     0,   369,   227,   228,   229,
     230,   231,   370,   233,     0,   371,   235,     0,     0,     0,
     236,   237,   238,   239,     0,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   372,   373,   246,     0,     0,   247,   374,
     249,   375,   376,   250,   377,   251,   252,     0,     0,   253,
       0,   378,   254,     0,   379,   380,   381,   257,     0,     0,
     258,   382,   383,   384,   260,   385,   261,   262,     0,     0,
       0,   263,     0,     0,     0,     0,   386,     0,     0,   387,
     388,   389,     0,   390,   391,   266,     0,     0,   267,   392,
       0,   393,   394,   268,   269,     0,     0,     0,     0,   270,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,   398,
       0,   399,     0,   400,     0,     0,   401,   402,   125,   318,
       0,   127,   128,     0,     0,     0,     0,   129,     0,     0,
       0,   130,   131,   319,     0,   133,     0,     0,   320,   321,
     134,     0,   135,   136,     0,   137,     0,     0,     0,   138,
     322,   323,   324,   139,     0,     0,   325,   140,     0,   141,
     326,     0,   327,   144,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,     0,   153,   328,   329,     0,     0,
     154,   330,   331,   332,     0,   333,   155,   156,   157,   334,
     335,   336,     0,     0,     0,     0,   337,   160,   338,     0,
       0,   339,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,   340,   341,   175,   342,   343,   176,   177,   178,   344,
     179,     0,     0,     0,   180,   181,   991,   182,     0,   183,
     345,     0,   184,     0,   346,     0,     0,     0,   347,    86,
     186,     0,    88,   348,     0,   187,   188,     0,     0,     0,
       0,     0,   349,   350,     0,     0,     0,     0,     0,   189,
       0,   351,     0,     0,   191,     0,   352,   192,     0,     0,
     353,   193,     0,     0,     0,     0,     0,   194,   195,     0,
     196,   354,     0,     0,   355,   197,   198,   199,   356,     0,
       0,   357,   358,   202,     0,   203,   359,   360,   205,   206,
     207,     0,     0,   208,   209,   210,   361,   362,   211,   363,
     364,     0,   212,   213,     0,   214,   215,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   365,     0,
     219,     0,   220,   221,   366,   223,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,   225,   367,   368,     0,
       0,     0,   226,     0,     0,   369,   227,   228,   229,   230,
     231,   370,   233,     0,   371,   235,     0,     0,     0,   236,
     237,   238,   239,     0,     0,   240,     0,   241,   242,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   372,   373,   246,     0,     0,   247,   374,   249,
     375,   376,   250,   377,   251,   252,     0,     0,   253,     0,
     378,   254,     0,   379,   380,   381,   257,     0,     0,   258,
     382,   383,   384,   260,   385,   261,   262,     0,     0,     0,
     263,     0,     0,     0,     0,   386,     0,     0,   387,   388,
     389,     0,   390,   391,   266,     0,     0,   267,   392,     0,
     393,   394,   268,   269,     0,     0,     0,     0,   270,     0,
       0,     0,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,     0,     0,   398,     0,
     399,     0,   400,     0,     0,   401,   402,   125,   318,     0,
     127,   128,     0,     0,     0,     0,   129,     0,     0,     0,
     130,   131,   319,     0,   133,     0,     0,   320,   321,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,   322,
     323,   324,   139,     0,     0,   325,   140,     0,   141,   326,
       0,   327,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,   328,   329,     0,     0,   154,
     330,   331,   332,     0,   333,   155,   156,   157,   334,   335,
     336,     0,     0,     0,     0,   337,   160,   338,     0,     0,
     339,     0,     0,     0,     0,     0,   161,   162,     0,     0,
       0,   163,     0,   164,   165,   166,     0,     0,   167,     0,
     168,   169,     0,   170,   171,     0,   172,     0,   173,   174,
     340,   341,   175,   342,   343,   176,   177,   178,   344,   179,
       0,     0,     0,   180,   181,     0,   182,     0,   183,   345,
       0,   184,     0,   346,     0,     0,     0,   347,    86,   186,
       0,    88,   348,     0,   187,   188,     0,     0,     0,     0,
       0,   349,   350,     0,     0,     0,     0,     0,   189,     0,
     351,     0,     0,   191,     0,   352,   192,     0,     0,   353,
     193,     0,     0,     0,     0,     0,   194,   195,     0,   196,
     354,     0,     0,   355,   197,   198,   199,   356,     0,     0,
     357,   358,   202,     0,   203,   359,   360,   205,   206,   207,
       0,     0,   208,   209,   210,   361,   362,   211,   363,   364,
       0,   212,   213,     0,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   365,     0,   219,
       0,   220,   221,   366,   223,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,   225,   367,   368,     0,     0,
       0,   226,     0,     0,   369,   227,   228,   229,   230,   231,
     370,   233,     0,   371,   235,     0,     0,     0,   236,   237,
     238,   239,     0,     0,   240,     0,   241,   242,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,   372,   373,   246,     0,     0,   247,   374,   249,   375,
     376,   250,   377,   251,   252,     0,     0,   253,     0,   378,
     254,     0,   379,   380,   381,   257,     0,     0,   258,   382,
     383,   384,   260,   385,   261,   262,     0,     0,     0,   263,
       0,     0,     0,     0,   386,     0,     0,   387,   388,   389,
       0,   390,   391,   266,     0,     0,   267,   392,     0,   393,
     394,   268,   269,     0,     0,     0,     0,   270,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,   398,     0,   399,
       0,   400,     0,     0,   401,   402,   125,   318,     0,   127,
     128,     0,     0,     0,     0,   129,     0,     0,     0,   130,
     131,   319,     0,   133,     0,     0,   320,   321,   134,     0,
     135,   136,     0,   137,     0,     0,     0,   138,   322,   323,
     324,   139,     0,     0,   325,   140,     0,   141,   326,     0,
     327,   144,     0,   145,   146,   147,   148,   149,   150,     0,
     151,   152,     0,   153,   328,   329,     0,     0,   154,   330,
     331,   332,     0,   333,   155,   156,   157,   334,   335,   336,
       0,     0,     0,     0,   337,   160,   338,     0,     0,   339,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,   340,
     341,   175,   342,   343,   176,   177,   178,   344,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,   345,     0,
     184,     0,   346,     0,     0,     0,   347,    86,   186,     0,
      88,   348,     0,   187,   188,     0,     0,     0,     0,     0,
     349,   350,     0,     0,     0,     0,     0,   189,     0,   351,
       0,     0,   191,     0,   352,   192,     0,     0,   353,   193,
       0,     0,     0,     0,     0,   194,   195,     0,   196,   354,
       0,     0,   355,   197,   198,   199,   356,     0,     0,   357,
     358,   202,     0,   203,   359,   360,   205,   206,   207,     0,
       0,   208,   209,   210,   361,   362,   211,   363,   364,     0,
     212,   213,     0,   214,   215,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   365,     0,   219,     0,
     220,   221,   366,   223,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,   225,   367,   368,     0,     0,     0,
     226,     0,     0,   369,   227,   228,   229,   230,   231,   370,
     233,     0,   371,   235,     0,     0,     0,   236,   237,   238,
     239,     0,     0,   240,     0,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,   245,
     372,   373,   246,     0,     0,   247,   374,   249,   375,   376,
     250,   377,   251,   252,     0,     0,   253,     0,   378,   254,
       0,   379,   380,   381,   257,     0,     0,   258,   382,   383,
     384,   260,   385,   261,   262,     0,     0,     0,   263,     0,
       0,     0,     0,   386,     0,     0,   387,   388,   389,     0,
     390,   391,   266,     0,     0,   267,   392,     0,   393,   394,
     268,   269,     0,     0,     0,     0,   270,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,     0,     0,   398,     0,   538,     0,
     400,     0,     0,   401,   402,   125,   318,     0,   127,   128,
     823,     0,     0,     0,   824,     0,     0,     0,   130,   131,
     319,     0,   133,     0,     0,   320,   321,   134,     0,   135,
     136,     0,   137,     0,     0,     0,   138,   322,   323,   324,
     139,     0,     0,   325,   140,     0,   141,   326,     0,   327,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,   328,   329,     0,     0,   154,   330,   331,
     332,     0,   333,   155,   156,   157,   334,   335,   336,     0,
       0,     0,     0,   337,   160,   338,     0,     0,   339,     0,
       0,     0,     0,     0,   161,   162,     0,     0,     0,   163,
       0,   164,   165,   166,     0,     0,   167,     0,   168,   169,
       0,   170,   171,     0,   172,     0,   173,   174,   340,   341,
     175,   342,   343,   176,   177,   178,   344,   179,     0,     0,
       0,   180,   181,     0,   182,     0,   183,   345,     0,   184,
       0,   346,     0,     0,     0,   347,    86,   186,     0,    88,
     348,     0,   187,   188,     0,     0,     0,     0,     0,   349,
     350,     0,     0,     0,     0,     0,   189,     0,   351,     0,
       0,   191,     0,   352,   192,     0,     0,   353,   193,     0,
       0,     0,     0,     0,   194,   195,     0,   196,   354,     0,
       0,   355,   197,   198,   199,   356,     0,     0,   357,   358,
     202,     0,   203,   359,   360,   205,   206,   207,     0,     0,
     208,   209,   210,     0,   362,   211,   363,   364,     0,   212,
     213,     0,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   365,     0,   219,     0,   220,
     221,   366,   223,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,   225,   367,   368,     0,     0,     0,   226,
       0,     0,   369,   227,   228,   229,   230,   231,   370,   233,
       0,   371,   235,     0,     0,     0,   236,   237,   238,   239,
       0,     0,   240,     0,   241,   242,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,   372,
     373,   246,     0,     0,   247,   374,   249,   375,   376,   250,
     377,   251,   252,     0,     0,   253,     0,   378,   254,     0,
     379,   380,   381,   257,     0,     0,   258,   382,   383,   384,
     260,   385,   261,   262,     0,     0,     0,   263,     0,     0,
       0,     0,   386,     0,     0,   387,   388,   389,     0,   390,
     391,   266,     0,     0,   267,   392,     0,   393,   394,   268,
     269,     0,     0,     0,     0,   270,     0,     0,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,     0,     0,     0,     0,   398,     0,   399,     0,   400,
       0,     0,   401,   402,   125,   318,     0,   127,   128,     0,
       0,     0,     0,   129,     0,     0,     0,   130,   131,   319,
       0,   133,     0,     0,   320,   321,   134,     0,   135,   136,
       0,   137,     0,     0,     0,   138,   322,   323,   324,   139,
       0,     0,   325,   140,     0,   141,   326,     0,   327,   144,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
       0,   153,   328,   329,     0,     0,   154,   330,   331,   332,
       0,   333,   155,   156,   157,   334,   335,   336,     0,     0,
       0,     0,   337,   160,   338,     0,     0,   339,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,   340,   341,   175,
     342,   343,   176,   177,   178,   344,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,   345,     0,   184,     0,
     346,     0,     0,     0,   347,    86,   186,     0,    88,   348,
       0,   187,   188,     0,     0,     0,     0,     0,   349,  1144,
       0,     0,     0,     0,     0,   189,     0,   351,     0,     0,
     191,     0,   352,   192,     0,     0,   353,   193,     0,     0,
       0,     0,     0,   194,   195,     0,   196,   354,     0,     0,
     355,   197,   198,   199,   356,     0,     0,   357,   358,   202,
       0,   203,   359,   360,   205,   206,   207,     0,     0,   208,
     209,   210,   361,   362,   211,   363,   364,     0,   212,   213,
       0,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   365,     0,   219,     0,   220,   221,
     366,   223,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,   225,   367,   368,     0,     0,     0,   226,     0,
       0,   369,   227,   228,   229,   230,   231,   370,   233,     0,
     371,   235,     0,     0,     0,   236,   237,   238,   239,     0,
       0,   240,     0,   241,   242,   243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   245,   372,   373,
     246,     0,     0,   247,   374,   249,   375,   376,   250,   377,
     251,   252,     0,     0,   253,     0,   378,   254,     0,   379,
     380,   381,   257,     0,     0,   258,   382,   383,   384,   260,
     385,   261,   262,     0,     0,     0,   263,     0,     0,     0,
       0,   386,     0,     0,   387,   388,   389,     0,   390,   391,
     266,     0,     0,   267,   392,     0,   393,   394,   268,   269,
       0,     0,     0,     0,   270,     0,     0,     0,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,   398,     0,   399,     0,   400,     0,
       0,   401,   402,   125,   318,     0,   127,   128,     0,     0,
       0,     0,   129,     0,     0,     0,   130,   131,   319,     0,
     133,     0,     0,   320,   321,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,   322,   323,   324,   139,     0,
       0,   325,   140,     0,   141,   326,     0,   327,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,   328,   329,     0,     0,   154,   330,   331,   332,     0,
     333,   155,   156,   157,   334,   335,   336,     0,     0,     0,
       0,   337,   160,   338,     0,     0,   339,     0,     0,     0,
       0,     0,   161,   162,     0,     0,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,   340,   341,   175,   342,
     343,   176,   177,   178,   344,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,   345,     0,   184,     0,   346,
       0,     0,     0,   347,    86,   186,     0,    88,   348,     0,
     187,   188,     0,     0,     0,     0,     0,   349,  1186,     0,
       0,     0,     0,     0,   189,     0,   351,     0,     0,   191,
       0,   352,   192,     0,     0,   353,   193,     0,     0,     0,
       0,     0,   194,   195,     0,   196,   354,     0,     0,   355,
     197,   198,   199,   356,     0,     0,   357,   358,   202,     0,
     203,   359,   360,   205,   206,   207,     0,     0,   208,   209,
     210,   361,   362,   211,   363,   364,     0,   212,   213,     0,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   365,     0,   219,     0,   220,   221,   366,
     223,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,   225,   367,   368,     0,     0,     0,   226,     0,     0,
     369,   227,   228,   229,   230,   231,   370,   233,     0,   371,
     235,     0,     0,     0,   236,   237,   238,   239,     0,     0,
     240,     0,   241,   242,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,   372,   373,   246,
       0,     0,   247,   374,   249,   375,   376,   250,   377,   251,
     252,     0,     0,   253,     0,   378,   254,     0,   379,   380,
     381,   257,     0,     0,   258,   382,   383,   384,   260,   385,
     261,   262,     0,     0,     0,   263,     0,     0,     0,     0,
     386,     0,     0,   387,   388,   389,     0,   390,   391,   266,
       0,     0,   267,   392,     0,   393,   394,   268,   269,     0,
       0,     0,     0,   270,     0,     0,     0,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,   398,     0,   399,     0,   400,     0,     0,
     401,   402,   125,   318,     0,   127,   128,     0,     0,     0,
       0,   129,     0,     0,     0,   130,   131,   319,     0,   133,
       0,     0,   320,   321,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,   322,   323,   324,   139,     0,     0,
     325,   140,     0,   141,   326,     0,   327,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
     328,   329,     0,     0,   154,   330,   331,   332,     0,   333,
     155,   156,   157,   334,   335,   336,     0,     0,     0,     0,
     337,   160,   338,     0,     0,  1280,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,   340,   341,   175,   342,   343,
     176,   177,   178,   344,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,   345,     0,   184,     0,   346,     0,
       0,     0,   347,    86,   186,     0,    88,   348,     0,   187,
     188,     0,     0,     0,     0,     0,   349,   350,     0,     0,
       0,     0,     0,   189,     0,   351,     0,     0,   191,     0,
     352,   192,     0,     0,   353,   193,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   354,     0,     0,   355,   197,
     198,   199,   356,     0,     0,   357,   358,   202,     0,   203,
     359,   360,   205,   206,   207,     0,     0,   208,   209,   210,
     361,   362,   211,   363,   364,     0,   212,   213,     0,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   365,     0,   219,     0,   220,   221,   366,   223,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
     225,   367,   368,     0,     0,     0,   226,     0,     0,   369,
     227,   228,   229,   230,   231,   370,   233,     0,   371,   235,
       0,     0,     0,   236,   237,   238,   239,     0,     0,   240,
       0,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,   372,   373,   246,     0,
       0,   247,   374,   249,   375,   376,   250,   377,   251,   252,
       0,     0,   253,     0,   378,   254,     0,   379,   380,   381,
     257,     0,     0,   258,   382,   383,   384,   260,   385,   261,
     262,     0,     0,     0,   263,     0,     0,     0,     0,   386,
       0,     0,   387,   388,   389,     0,   390,   391,   266,     0,
       0,   267,   392,     0,   393,   394,   268,   269,     0,     0,
       0,     0,   270,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,   398,     0,   399,     0,   400,     0,     0,   401,
     402,   125,   318,     0,   127,   128,     0,     0,     0,     0,
     129,     0,     0,     0,   130,   131,   319,     0,   133,     0,
       0,   320,   321,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,   322,   323,   324,   139,     0,     0,   325,
     140,     0,   141,   326,     0,   327,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,   328,
     329,     0,     0,   154,   330,   331,   332,     0,   333,   155,
     156,   157,   334,   335,   336,     0,     0,     0,     0,   337,
     160,   338,     0,     0,   339,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,   340,   341,   175,   342,   343,   176,
     177,   178,   344,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,   345,     0,   184,     0,   346,     0,     0,
       0,   347,    86,   186,     0,    88,   348,     0,   187,   188,
       0,     0,     0,     0,     0,   349,   350,     0,     0,     0,
       0,     0,   189,     0,   351,     0,     0,   191,     0,   352,
     192,     0,     0,   353,   193,     0,     0,     0,     0,     0,
     194,   195,     0,   196,   354,     0,     0,   355,   197,   198,
     199,   356,     0,     0,   357,   358,   202,     0,   203,   359,
     360,   205,   206,   207,     0,     0,   208,   209,   210,     0,
     362,   211,   363,   364,     0,   212,   213,     0,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   365,     0,   219,     0,   220,   221,   366,   223,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,   225,
     367,   368,     0,     0,     0,   226,     0,     0,   369,   227,
     228,   229,   230,   231,   370,   233,     0,   371,   235,     0,
       0,     0,   236,   237,   238,   239,     0,     0,   240,     0,
     241,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   372,   373,   246,     0,     0,
     247,   374,   249,   375,   376,   250,   377,   251,   252,     0,
       0,   253,     0,   378,   254,     0,   379,   380,   381,   257,
       0,     0,   258,   382,   383,   384,   260,   385,   261,   262,
       0,     0,     0,   263,     0,     0,     0,     0,   386,     0,
       0,   387,   388,   389,     0,   390,   391,   266,     0,     0,
     267,   392,     0,   393,   394,   268,   269,     0,     0,     0,
       0,   270,     0,     0,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,   398,     0,   399,     0,   400,     0,     0,   401,   402,
     125,   318,     0,   127,   128,     0,     0,     0,     0,   129,
       0,     0,     0,   130,   131,   319,     0,   133,     0,     0,
     320,   321,   134,     0,   135,   136,     0,   137,     0,     0,
       0,   138,   322,   323,   324,   139,     0,     0,   325,   140,
       0,   141,   326,     0,   327,   144,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,   153,   328,   329,
       0,     0,   154,   330,   331,   332,     0,   333,   155,   156,
     157,   334,   335,   336,     0,     0,     0,     0,   337,   160,
     338,     0,     0,   339,     0,     0,     0,     0,     0,   161,
     162,     0,     0,     0,   163,     0,   164,   165,   166,     0,
       0,   167,     0,   168,   169,     0,   170,   171,     0,   172,
       0,   173,   174,   340,   341,   175,   342,   343,   176,   177,
     178,   344,   179,     0,     0,     0,   180,   181,     0,   182,
       0,   183,   345,     0,   184,     0,   346,     0,     0,     0,
     347,    86,   186,     0,    88,   348,     0,   187,   188,     0,
       0,     0,     0,     0,   349,   841,     0,     0,     0,     0,
       0,   189,     0,   351,     0,     0,   191,     0,   352,   192,
       0,     0,   353,   193,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   354,     0,     0,   355,   197,   198,   199,
     356,     0,     0,   357,   358,   202,     0,   203,   359,   360,
     205,   206,   207,     0,     0,   208,   209,   210,     0,   362,
     211,   363,   364,     0,   212,   213,     0,   214,   215,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     365,     0,   219,     0,   220,   221,   366,   223,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,   225,   367,
     368,     0,     0,     0,   226,     0,     0,   369,   227,   228,
     229,   230,   231,   370,   233,     0,   371,   235,     0,     0,
       0,   236,   237,   238,   239,     0,     0,   240,     0,   241,
     242,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   372,   373,   246,     0,     0,   247,
     374,   249,   375,   376,   250,   377,   251,   252,     0,     0,
     253,     0,   378,   254,     0,   379,   380,   381,   257,     0,
       0,   258,   382,   383,   384,   260,   385,   261,   262,     0,
       0,     0,   263,     0,     0,     0,     0,   386,     0,     0,
     387,   388,   389,     0,   390,   391,   266,     0,     0,   267,
     392,     0,   393,   394,   268,   269,     0,     0,     0,     0,
     270,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
     398,     0,   399,     0,   400,     0,     0,   401,   402,   125,
     318,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   319,     0,   133,     0,     0,   320,
     321,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,   322,   323,   324,   139,     0,     0,   325,   140,     0,
     141,   326,     0,   327,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,   328,   329,     0,
       0,   154,   330,   331,   332,     0,   333,   155,   156,   157,
     334,   335,   336,     0,     0,     0,     0,   337,   160,   338,
       0,     0,   339,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,   340,   341,   175,   342,   343,   176,   177,   178,
     344,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,   345,     0,   184,     0,   346,     0,     0,     0,   347,
      86,   186,     0,    88,   348,     0,   187,   188,     0,     0,
       0,     0,     0,   349,   843,     0,     0,     0,     0,     0,
     189,     0,   351,     0,     0,   191,     0,   352,   192,     0,
       0,   353,   193,     0,     0,     0,     0,     0,   194,   195,
       0,   196,   354,     0,     0,   355,   197,   198,   199,   356,
       0,     0,   357,   358,   202,     0,   203,   359,   360,   205,
     206,   207,     0,     0,   208,   209,   210,     0,   362,   211,
     363,   364,     0,   212,   213,     0,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   365,
       0,   219,     0,   220,   221,   366,   223,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   225,   367,   368,
       0,     0,     0,   226,     0,     0,   369,   227,   228,   229,
     230,   231,   370,   233,     0,   371,   235,     0,     0,     0,
     236,   237,   238,   239,     0,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   372,   373,   246,     0,     0,   247,   374,
     249,   375,   376,   250,   377,   251,   252,     0,     0,   253,
       0,   378,   254,     0,   379,   380,   381,   257,     0,     0,
     258,   382,   383,   384,   260,   385,   261,   262,     0,     0,
       0,   263,     0,     0,     0,     0,   386,     0,     0,   387,
     388,   389,     0,   390,   391,   266,     0,     0,   267,   392,
       0,   393,   394,   268,   269,     0,     0,     0,     0,   270,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,   398,
       0,   399,     0,   400,     0,     0,   401,   402,   125,   126,
       0,   127,   128,     0,     0,     0,     0,   129,     0,     0,
       0,   130,   131,   132,     0,   133,     0,     0,     0,     0,
     134,     0,   135,   136,     0,   137,     0,     0,     0,   138,
       0,     0,     0,   139,     0,     0,     0,   140,     0,   141,
     142,     0,   143,   144,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,     0,   153,     0,     0,     0,     0,
     154,     0,     0,     0,     0,     0,   155,   156,   157,     0,
       0,   158,     0,     0,     0,     0,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,     0,     0,   175,     0,     0,   176,   177,   178,     0,
     179,     0,     0,     0,   180,   181,     0,   182,     0,   183,
       0,     0,   184,     0,     0,     0,     0,     0,   185,    86,
     186,     0,    88,     0,     0,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
       0,   190,     0,     0,   191,     0,     0,   192,     0,     0,
       0,   193,     0,     0,     0,     0,     0,   194,   195,     0,
     196,     0,     0,     0,     0,   197,   198,   199,   200,     0,
       0,   201,     0,   202,     0,   203,     0,   204,   205,   206,
     207,     0,     0,   208,   209,   210,     0,     0,   211,     0,
       0,     0,   212,   213,     0,   214,   215,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,   226,     0,     0,     0,   227,   228,   229,   230,
     231,   232,   233,     0,   234,   235,     0,     0,     0,   236,
     237,   238,   239,     0,     0,   240,     0,   241,   242,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,     0,     0,   246,     0,     0,   247,   248,   249,
       0,     0,   250,     0,   251,   252,     0,     0,   253,     0,
       0,   254,     0,   255,   256,     0,   257,     0,     0,   258,
       0,     0,   259,   260,     0,   261,   262,     0,     0,     0,
     263,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,   265,     0,   266,     0,     0,   267,     0,     0,
       0,     0,   268,   269,     0,     0,   125,   126,   270,   127,
     128,     0,   271,     0,     0,   129,     0,     0,     0,   130,
     131,   132,     0,   133,     0,     0,     0,     0,   134,     0,
     135,   136,     0,   137,     0,   401,  2107,   138,     0,     0,
       0,   139,     0,     0,     0,   140,     0,   141,   142,     0,
     143,   144,     0,   145,   146,   147,   148,   149,   150,     0,
     151,   152,  1289,   153,     0,     0,     0,     0,   154,     0,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,  1290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,   190,
       0,     0,   191,  1291,     0,   192,     0,     0,     0,   193,
       0,  1130,     0,     0,     0,   194,   195,     0,   196,     0,
       0,     0,     0,   197,   198,   199,   200,     0,     0,   201,
       0,   202,     0,   203,     0,   204,   205,   206,   207,     0,
       0,   208,   209,   210,     0,     0,   211,     0,     0,     0,
     212,   213,     0,   214,   215,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,   219,     0,
     220,   221,   222,   223,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
     226,     0,     0,     0,   227,   228,   229,   230,   231,   232,
     233,     0,   234,   235,   858,     0,     0,   236,   237,   238,
     239,     0,     0,   240,     0,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,   245,
       0,     0,   246,     0,     0,   247,   248,   249,     0,     0,
     250,     0,   251,   252,     0,     0,   253,     0,     0,   254,
       0,   255,   256,     0,   257,     0,     0,   258,     0,     0,
     259,   260,     0,   261,   262,     0,     0,     0,   263,     0,
       0,     0,     0,   264,     0,     0,     0,     0,     0,     0,
     265,     0,   266,     0,     0,   267,     0,     0,     0,     0,
     268,   269,     0,     0,   125,   126,   270,   127,   128,     0,
     271,     0,     0,   129,     0,     0,     0,   130,   131,   132,
       0,   133,     0,     0,     0,     0,   134,     0,   135,   136,
       0,   137,     0,  1329,     0,   138,     0,     0,     0,   139,
       0,     0,     0,   140,     0,   141,   142,     0,   143,   144,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
    1289,   153,     0,     0,     0,     0,   154,     0,     0,     0,
       0,     0,   155,   156,   157,     0,     0,   158,     0,     0,
       0,     0,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,     0,     0,   175,
       0,     0,   176,   177,   178,     0,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,     0,     0,   184,     0,
       0,     0,     0,     0,   185,    86,   186,     0,    88,     0,
       0,   187,   188,  1290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   190,     0,     0,
     191,  1291,     0,   192,     0,     0,     0,   193,     0,     0,
       0,     0,     0,   194,   195,     0,   196,     0,     0,     0,
       0,   197,   198,   199,   200,     0,     0,   201,     0,   202,
       0,   203,     0,   204,   205,   206,   207,     0,     0,   208,
     209,   210,     0,     0,   211,     0,     0,     0,   212,   213,
       0,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,     0,   219,     0,   220,   221,
     222,   223,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,   225,     0,     0,     0,     0,     0,   226,     0,
       0,     0,   227,   228,   229,   230,   231,   232,   233,     0,
     234,   235,     0,     0,     0,   236,   237,   238,   239,     0,
       0,   240,     0,   241,   242,   243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   245,     0,     0,
     246,     0,     0,   247,   248,   249,     0,     0,   250,     0,
     251,   252,     0,     0,   253,     0,     0,   254,     0,   255,
     256,     0,   257,     0,     0,   258,     0,     0,   259,   260,
       0,   261,   262,     0,     0,     0,   263,     0,     0,     0,
       0,   264,     0,     0,     0,     0,     0,     0,   265,     0,
     266,     0,     0,   267,     0,     0,     0,     0,   268,   269,
       0,     0,   125,   126,   270,   127,   128,     0,   271,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,  1329,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,     0,
     155,   156,   157,     0,     0,   158,     0,     0,     0,     0,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,     0,     0,   175,     0,     0,
     176,   177,   178,     0,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,     0,     0,   184,     0,     0,     0,
       0,     0,   185,    86,   186,     0,    88,     0,     0,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,     0,   190,     0,     0,   191,     0,
       0,   192,     0,     0,     0,   193,     0,     0,     0,     0,
       0,   194,   195,     0,   196,     0,     0,     0,     0,   197,
     198,   199,   200,     0,     0,   201,     0,   202,     0,   203,
       0,   204,   205,   206,   207,     0,     0,   208,   209,   210,
       0,     0,   211,     0,     0,     0,   212,   213,     0,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   219,     0,   220,   221,   222,   223,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,   226,     0,     0,     0,
     227,   228,   229,   230,   231,   232,   233,     0,   234,   235,
     858,     0,     0,   236,   237,   238,   239,     0,     0,   240,
       0,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,     0,     0,   246,     0,
       0,   247,   248,   249,     0,     0,   250,     0,   251,   252,
       0,     0,   253,     0,     0,   254,     0,   255,   256,     0,
     257,     0,     0,   258,     0,     0,   259,   260,     0,   261,
     262,     0,     0,     0,   263,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,     0,   265,     0,   266,     0,
       0,   267,     0,     0,     0,     0,   268,   269,     0,     0,
       0,     0,   270,     0,     0,     0,   271,     0,     0,   125,
     126,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   132,  1049,   133,     0,     0,   401,
       0,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,   143,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,   155,   156,   157,
       0,     0,   158,     0,     0,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,     0,     0,   175,     0,     0,   176,   177,   178,
       0,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,     0,     0,   184,     0,     0,     0,     0,     0,   185,
      86,   186,     0,    88,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,     0,   425,     0,     0,     0,     0,
     189,     0,   190,     0,     0,   191,     0,     0,   192,     0,
       0,     0,   193,     0,     0,     0,     0,     0,   194,   195,
       0,   196,     0,     0,     0,     0,   197,   198,   199,   200,
       0,     0,   201,     0,   202,     0,   203,     0,   204,   205,
     206,   207,     0,     0,   208,   209,   210,     0,     0,   211,
       0,     0,     0,   212,   213,     0,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   219,     0,   220,   221,   222,   223,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,   226,     0,     0,     0,   227,   228,   229,
     230,   231,   232,   233,     0,   234,   235,     0,     0,     0,
     236,   237,   238,   239,     0,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,     0,     0,   246,     0,     0,   247,   248,
     249,     0,     0,   250,     0,   251,   252,     0,     0,   253,
       0,     0,   254,     0,   255,   256,     0,   257,     0,     0,
     258,     0,     0,   259,   260,     0,   261,   262,     0,     0,
       0,   263,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,   265,     0,   266,     0,     0,   267,     0,
       0,     0,     0,   268,   269,     0,     0,   125,   126,   270,
     127,   128,     0,   271,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,   283,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,   155,   156,   157,     0,     0,
     158,     0,     0,     0,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,     0,     0,
       0,   163,     0,   164,   165,   166,     0,     0,   167,     0,
     168,   169,     0,   170,   171,     0,   172,     0,   173,   174,
       0,     0,   175,     0,     0,   176,   177,   178,     0,   179,
       0,     0,     0,   180,   181,     0,   182,     0,   183,     0,
       0,   184,     0,     0,     0,     0,     0,   185,    86,   186,
       0,    88,     0,     0,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,     0,
     190,     0,     0,   191,     0,     0,   192,     0,     0,     0,
     193,     0,     0,     0,     0,     0,   194,   195,     0,   196,
       0,     0,     0,     0,   197,   198,   199,   200,     0,     0,
     201,     0,   202,     0,   203,     0,   204,   205,   206,   207,
       0,     0,   208,   209,   210,     0,     0,   211,     0,     0,
       0,   212,   213,     0,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   219,
       0,   220,   221,   222,   223,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,   226,     0,     0,     0,   227,   228,   229,   230,   231,
     232,   233,     0,   234,   235,     0,     0,     0,   236,   237,
     238,   239,     0,     0,   240,     0,   241,   242,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,     0,     0,   246,     0,     0,   247,   248,   249,     0,
       0,   250,     0,   251,   252,     0,     0,   253,     0,     0,
     254,     0,   255,   256,     0,   257,     0,     0,   258,     0,
       0,   259,   260,     0,   261,   262,     0,     0,     0,   263,
       0,     0,     0,     0,   264,     0,     0,     0,     0,     0,
       0,   265,     0,   266,     0,     0,   267,     0,     0,     0,
       0,   268,   269,     0,     0,     0,     0,   270,     0,     0,
       0,   271,     0,   125,   126,     0,   127,   128,     0,     0,
       0,     0,   129,     0,     0,     0,   130,   131,   132,  1328,
     133,     0,     0,     0,  1329,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,     0,     0,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,   143,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,     0,     0,     0,     0,   154,     0,     0,     0,     0,
       0,   155,   156,   157,     0,     0,   158,     0,     0,     0,
       0,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,     0,     0,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,     0,     0,   282,     0,
       0,   176,   177,   178,     0,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,     0,     0,   184,     0,     0,
       0,     0,     0,   185,    86,   186,     0,    88,     0,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   190,     0,     0,   191,
       0,     0,   192,     0,     0,     0,   193,     0,     0,     0,
       0,     0,   194,   195,     0,   196,     0,     0,     0,     0,
     197,   198,   199,   200,     0,     0,   201,     0,   202,     0,
     203,     0,   204,   205,   206,   207,     0,     0,   208,   209,
     210,     0,     0,   211,     0,     0,     0,   212,   213,     0,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,   226,     0,     0,
       0,   227,   228,   229,   230,   231,   232,   233,     0,   234,
     235,     0,     0,     0,   236,   237,   238,   239,     0,     0,
     240,     0,   241,   242,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,     0,     0,   246,
       0,     0,   247,   248,   249,     0,     0,   250,     0,   251,
     252,     0,     0,   253,     0,     0,   254,     0,   255,   256,
       0,   257,     0,     0,   258,     0,     0,   259,   260,     0,
     261,   262,     0,     0,     0,   263,     0,     0,     0,     0,
     264,     0,     0,     0,     0,     0,     0,   265,     0,   266,
       0,     0,   267,     0,     0,     0,     0,   268,   269,     0,
       0,   125,   126,   270,   127,   128,     0,   271,     0,     0,
     129,     0,     0,     0,   130,   131,   132,     0,   133,     0,
       0,     0,     0,   134,     0,   135,   136,     0,   137,     0,
     283,     0,   138,     0,     0,     0,   139,     0,     0,     0,
     140,     0,   141,   142,     0,   143,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,   190,     0,     0,   191,     0,     0,
     192,     0,     0,     0,   193,     0,     0,     0,     0,     0,
     194,   195,     0,   196,     0,     0,     0,     0,   197,   198,
     199,   200,     0,     0,   201,     0,   202,     0,   203,     0,
     204,   205,   206,   207,     0,     0,   208,   209,   210,     0,
       0,   211,     0,     0,     0,   212,   213,     0,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   219,     0,   220,   221,   222,   223,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,   225,
       0,     0,     0,     0,     0,   226,     0,     0,     0,   227,
     228,   229,   230,   231,   232,   233,     0,   234,   235,     0,
       0,     0,   236,   237,   238,   239,     0,     0,   240,     0,
     241,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,     0,     0,   246,     0,     0,
     247,   248,   249,     0,     0,   250,     0,   251,   252,     0,
       0,   253,     0,     0,   254,     0,   255,   256,     0,   257,
       0,     0,   258,     0,     0,   259,   260,     0,   261,   262,
       0,     0,     0,   263,     0,     0,     0,     0,   264,     0,
       0,     0,     0,     0,     0,   265,     0,   266,     0,     0,
     267,     0,     0,     0,     0,   268,   269,     0,     0,   125,
     126,   270,   127,   128,     0,   271,     0,     0,   129,     0,
       0,     0,   130,   131,   132,     0,   133,     0,     0,     0,
       0,   134,     0,   135,   136,     0,   137,     0,   283,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,   143,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,   155,   156,   157,
       0,     0,   158,     0,     0,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,     0,     0,   175,     0,     0,   176,   177,   178,
       0,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,     0,     0,   184,     0,     0,     0,     0,     0,   185,
      86,   186,     0,    88,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,   190,     0,     0,   191,     0,     0,   192,     0,
       0,     0,   193,     0,     0,     0,     0,     0,   194,   195,
       0,   196,     0,     0,     0,     0,   197,   198,   199,   200,
       0,     0,   201,     0,   202,     0,   203,     0,   204,   205,
     206,   207,     0,     0,   208,   209,   210,     0,     0,   211,
       0,     0,     0,   212,   213,     0,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   219,     0,   220,   221,   222,   223,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,   226,     0,     0,     0,   227,   228,   229,
     230,   231,   232,   233,     0,   234,   235,     0,     0,     0,
     236,   237,   238,   239,     0,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,     0,     0,   246,     0,     0,   247,   248,
     249,     0,     0,   250,     0,   251,   252,     0,     0,   253,
       0,     0,   254,     0,   255,   256,     0,   257,     0,     0,
     258,     0,     0,   259,   260,     0,   261,   262,     0,     0,
       0,   263,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,   265,     0,   266,     0,     0,   267,     0,
       0,     0,     0,   268,   269,     0,     0,   125,   126,   270,
     127,   128,     0,   271,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,   401,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,   155,   156,   157,     0,     0,
     158,     0,     0,     0,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,     0,     0,
       0,   163,     0,   164,   165,   166,     0,     0,   167,     0,
     168,   169,     0,   170,   171,     0,   172,     0,   173,   174,
       0,     0,   175,     0,     0,   176,   177,   178,     0,   179,
       0,     0,     0,   180,   181,     0,   182,     0,   183,     0,
       0,   184,     0,     0,     0,     0,     0,   185,    86,   186,
       0,    88,     0,     0,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,     0,
     190,     0,     0,   191,     0,     0,   192,     0,     0,     0,
     193,     0,     0,     0,     0,     0,   194,   195,     0,   196,
       0,     0,     0,     0,   197,   198,   199,   200,     0,     0,
     201,     0,   202,     0,   203,     0,   204,   205,   206,   207,
       0,     0,   208,   209,   210,     0,     0,   211,     0,     0,
       0,   212,   213,     0,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   219,
       0,   220,   221,   222,   223,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,   226,     0,     0,     0,   227,   228,   229,   230,   231,
     232,   233,     0,   234,   235,     0,     0,     0,   236,   237,
     238,   239,     0,     0,   240,     0,   241,   242,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,     0,     0,   246,     0,     0,   247,   248,   249,     0,
       0,   250,     0,   251,   252,     0,     0,   253,     0,     0,
     254,     0,   255,   256,     0,   257,     0,     0,   258,     0,
       0,   259,   260,     0,   261,   262,     0,     0,     0,   263,
       0,     0,     0,     0,   264,     0,     0,     0,     0,     0,
       0,   265,     0,   266,     0,     0,   267,     0,     0,     0,
       0,   268,   269,     0,     0,   125,   126,   270,   127,   128,
       0,   271,     0,     0,   129,     0,     0,     0,   130,   131,
     132,     0,   133,     0,     0,     0,     0,   134,     0,   135,
     136,     0,   137,     0,  1329,     0,   138,     0,     0,     0,
     139,     0,     0,     0,   140,     0,   141,   142,     0,   143,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,     0,     0,     0,     0,   154,     0,     0,
       0,     0,     0,   155,   156,   157,     0,     0,   158,     0,
       0,     0,     0,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,     0,     0,     0,   163,
       0,   164,   165,   166,     0,     0,   167,     0,   168,   169,
       0,   170,   171,     0,   172,     0,   173,   174,     0,     0,
     175,     0,     0,   176,   177,   178,     0,   179,     0,     0,
       0,   180,   181,     0,   182,     0,   183,     0,     0,   184,
       0,     0,     0,     0,     0,   185,    86,   186,     0,    88,
       0,     0,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,     0,   190,     0,
       0,   191,     0,     0,   192,     0,     0,     0,   193,     0,
       0,     0,     0,     0,   194,   195,     0,   196,     0,     0,
       0,     0,   197,   198,   199,   200,     0,     0,   201,     0,
     202,     0,   203,     0,   204,   205,   206,   207,     0,     0,
     208,   209,   210,     0,     0,   211,     0,     0,     0,   212,
     213,     0,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,   226,
       0,     0,     0,   227,   228,   229,   230,   231,   232,   233,
       0,   234,   235,     0,     0,     0,   236,   237,   238,   239,
       0,     0,   240,     0,   241,   242,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,     0,
       0,   246,     0,     0,   247,   248,   249,     0,     0,   250,
       0,   251,   252,     0,     0,   253,     0,     0,   254,     0,
     255,   256,     0,   257,     0,     0,   258,     0,     0,   259,
     260,     0,   261,   262,     0,     0,     0,   263,     0,     0,
       0,     0,   264,     0,     0,     0,     0,     0,     0,   265,
       0,   266,     0,     0,   267,     0,     0,     0,     0,   268,
     269,     0,     0,   125,   126,   270,   127,   128,     0,   271,
       0,     0,   129,     0,     0,     0,   130,   131,   132,     0,
     133,  1266,     0,     0,     0,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,     0,     0,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,   143,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,     0,     0,     0,     0,   154,     0,     0,     0,     0,
       0,   155,   156,   157,     0,     0,   158,     0,     0,     0,
       0,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,     0,     0,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,     0,     0,   175,     0,
       0,   176,   177,   178,     0,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,     0,     0,   184,     0,     0,
       0,     0,     0,   185,    86,   186,     0,    88,     0,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   190,     0,     0,   191,
       0,     0,   192,     0,     0,     0,   193,     0,     0,     0,
       0,     0,   194,   195,     0,   196,     0,     0,     0,     0,
     197,   198,   199,   200,     0,     0,   201,     0,   202,     0,
     203,     0,   204,   205,   206,   207,     0,     0,   208,   209,
     210,     0,     0,   211,     0,     0,     0,   212,   213,     0,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,   226,     0,     0,
       0,   227,   228,   229,   230,   231,   232,   233,     0,   234,
     235,     0,     0,     0,   236,   237,   238,   239,     0,     0,
     240,     0,   241,   242,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,     0,     0,   246,
       0,     0,   247,   248,   249,     0,     0,   250,     0,   251,
     252,     0,     0,   253,     0,     0,   254,     0,   255,   256,
       0,   257,     0,     0,   258,     0,     0,   259,   260,     0,
     261,   262,     0,     0,     0,   263,     0,     0,     0,     0,
     264,     0,     0,     0,     0,     0,     0,   265,     0,   266,
       0,     0,   267,     0,     0,     0,     0,   268,   269,     0,
       0,   125,   126,   270,   127,   128,     0,   271,     0,     0,
     129,     0,     0,     0,   130,   131,   132,     0,   133,  1612,
       0,     0,   675,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,     0,     0,     0,   139,     0,     0,     0,
     140,     0,   141,   142,     0,   143,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,   676,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,   190,     0,     0,   191,     0,     0,
     192,     0,     0,     0,   193,     0,     0,     0,     0,     0,
     194,   195,     0,   196,     0,     0,     0,     0,   197,   198,
     199,   200,     0,     0,   201,     0,   202,     0,   203,     0,
     204,   205,   206,   207,     0,     0,   208,   209,   210,     0,
       0,   211,     0,     0,     0,   212,   213,     0,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   219,     0,   220,   221,   222,   223,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,   225,
       0,     0,     0,     0,     0,   226,     0,     0,     0,   227,
     228,   229,   230,   231,   232,   233,     0,   234,   235,     0,
       0,     0,   236,   237,   238,   239,     0,     0,   240,     0,
     241,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,     0,     0,   246,     0,     0,
     247,   248,   249,     0,     0,   250,     0,   251,   252,     0,
       0,   253,     0,   378,   254,     0,   255,   256,     0,   257,
       0,     0,   258,     0,     0,   259,   260,     0,   261,   262,
       0,     0,     0,   263,     0,     0,     0,     0,   264,     0,
       0,     0,     0,     0,     0,   265,     0,   266,     0,     0,
     267,     0,     0,     0,     0,   268,   269,     0,     0,   125,
     126,   270,   127,   128,     0,   271,     0,     0,   129,  1262,
       0,     0,   130,   131,   132,     0,   133,     0,     0,     0,
       0,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,   143,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,   155,   156,   157,
       0,     0,   158,     0,     0,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,     0,     0,   175,     0,     0,   176,   177,   178,
       0,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,     0,     0,   184,     0,     0,     0,     0,     0,   185,
      86,   186,     0,    88,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,   190,     0,     0,   191,     0,     0,   192,     0,
       0,     0,   193,     0,     0,     0,     0,     0,   194,   195,
       0,   196,     0,     0,     0,     0,   197,   198,   199,   200,
       0,     0,   201,     0,   202,     0,   203,     0,   204,   205,
     206,   207,     0,     0,   208,   209,   210,     0,     0,   211,
       0,     0,     0,   212,   213,     0,   214,   215,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   219,     0,   220,   221,   222,   223,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,   226,     0,     0,     0,   227,   228,   229,
     230,   231,   232,   233,     0,   234,   235,     0,     0,     0,
     236,   237,   238,   239,     0,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,     0,     0,   246,     0,     0,   247,   248,
     249,     0,     0,   250,     0,   251,   252,     0,     0,   253,
       0,    91,   254,     0,   255,   256,     0,   257,     0,     0,
     258,     0,     0,   259,   260,     0,   261,   262,     0,     0,
       0,   263,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,   265,     0,   266,     0,     0,   267,     0,
       0,     0,     0,   268,   269,     0,     0,   125,   126,   270,
     127,   128,     0,   271,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,   155,   156,   157,     0,     0,
     158,     0,     0,     0,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,     0,     0,
       0,   163,     0,   164,   165,   166,     0,     0,   167,     0,
     168,   169,     0,   170,   171,     0,   172,     0,   173,   174,
       0,     0,   175,     0,     0,   176,   177,   178,     0,   179,
       0,     0,     0,   180,   181,     0,   182,     0,   183,     0,
       0,   184,     0,     0,     0,     0,     0,   185,    86,   186,
       0,    88,     0,     0,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,     0,
     190,     0,     0,   191,     0,     0,   192,     0,     0,     0,
     193,     0,     0,     0,     0,     0,   194,   195,     0,   196,
       0,     0,     0,     0,   197,   198,   199,   200,     0,     0,
     201,     0,   202,     0,   203,     0,   204,   205,   206,   207,
       0,     0,   208,   209,   210,     0,     0,   211,     0,     0,
       0,   212,   213,     0,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   219,
       0,   220,   221,   222,   223,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,   226,     0,     0,     0,   227,   228,   229,   230,   231,
     232,   233,     0,   234,   235,     0,     0,     0,   236,   237,
     238,   239,     0,     0,   240,     0,   241,   242,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,     0,     0,   246,     0,     0,   247,   248,   249,     0,
       0,   250,     0,   251,   252,     0,     0,   253,     0,    91,
     254,     0,   255,   256,     0,   257,     0,     0,   258,     0,
       0,   259,   260,     0,   261,   262,     0,     0,     0,   263,
       0,     0,     0,     0,   264,     0,     0,     0,     0,     0,
       0,   265,     0,   266,     0,     0,   267,     0,     0,     0,
       0,   268,   269,     0,     0,   125,   126,   270,   127,   128,
       0,   271,     0,     0,   129,     0,     0,     0,   130,   131,
     132,     0,   133,     0,     0,     0,     0,   134,     0,   135,
     136,     0,   137,     0,     0,     0,   138,     0,     0,     0,
     139,     0,     0,     0,   140,     0,   141,   142,     0,   143,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,     0,     0,     0,     0,   154,     0,     0,
       0,     0,     0,   155,   156,   157,     0,     0,   158,     0,
       0,     0,     0,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,     0,     0,     0,   163,
       0,   164,   165,   166,     0,     0,   167,     0,   168,   169,
       0,   170,   171,     0,   172,     0,   173,   174,     0,     0,
     175,     0,     0,   176,   177,   178,     0,   179,     0,     0,
       0,   180,   181,     0,   182,     0,   183,     0,     0,   184,
       0,     0,     0,     0,     0,   185,    86,   186,     0,    88,
       0,     0,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,     0,   190,     0,
       0,   191,     0,     0,   192,     0,     0,     0,   193,     0,
       0,     0,     0,     0,   194,   195,     0,   196,     0,     0,
       0,     0,   197,   198,   199,   200,     0,     0,   201,     0,
     202,     0,   203,     0,   204,   205,   206,   207,     0,     0,
     208,   209,   210,     0,     0,   211,     0,     0,     0,   212,
     213,     0,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,  2095,   220,
     221,   222,   223,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,   226,
       0,     0,     0,   227,   228,   229,   230,   231,   232,   233,
       0,   234,   235,     0,     0,     0,   236,   237,   238,   239,
       0,     0,   240,     0,   241,   242,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,     0,
       0,   246,     0,     0,   247,   248,   249,     0,     0,   250,
       0,   251,   252,     0,     0,   253,     0,     0,   254,     0,
     255,   256,     0,   257,     0,     0,   258,     0,     0,   259,
     260,     0,   261,   262,     0,     0,     0,   263,     0,     0,
       0,     0,   264,     0,     0,     0,     0,     0,     0,   265,
       0,   266,     0,     0,   267,     0,     0,     0,     0,   268,
     269,     0,     0,   125,   126,   270,   127,   128,     0,   271,
       0,     0,   129,     0,     0,     0,   130,   131,   132,     0,
     133,     0,     0,     0,     0,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,     0,     0,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,   143,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,     0,     0,     0,     0,   154,     0,     0,     0,     0,
       0,   155,   156,   157,     0,     0,   158,     0,     0,     0,
       0,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,     0,     0,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,     0,     0,   175,     0,
       0,   176,   177,   178,     0,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,     0,     0,   184,     0,     0,
       0,     0,     0,   185,    86,   186,     0,    88,     0,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   190,     0,     0,   191,
       0,     0,   192,     0,     0,     0,   193,     0,     0,     0,
       0,     0,   194,   195,     0,   196,     0,     0,     0,     0,
     197,   198,   199,   200,     0,     0,   201,     0,   202,     0,
     203,     0,   204,   205,   206,   207,     0,     0,   208,   209,
     210,     0,     0,   211,     0,     0,     0,   212,   213,     0,
     214,   215,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,   226,     0,     0,
       0,   227,   228,   229,   230,   231,   232,   233,     0,   234,
     235,     0,     0,     0,   236,   237,   238,   239,     0,     0,
     240,     0,   241,   242,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,     0,     0,   246,
       0,     0,   247,   248,   249,     0,     0,   250,     0,   251,
     252,     0,     0,   253,     0,     0,   254,     0,   255,   256,
       0,   257,     0,     0,   258,     0,     0,   259,   260,     0,
     261,   262,     0,     0,     0,   263,     0,     0,     0,     0,
     264,     0,     0,     0,     0,     0,     0,   265,     0,   266,
       0,     0,   267,     0,     0,     0,     0,   268,   269,     0,
       0,     0,     0,   270,     0,     0,     0,   271
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-1713))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-1216))

static const yytype_int16 yycheck[] =
{
      12,   331,   332,    93,   432,   923,  1062,  1071,   414,    21,
      12,   539,   620,  1092,    51,  1094,   320,    29,  1234,   336,
     530,  1099,  1009,   515,   516,  1055,   107,   594,   862,   880,
     109,   673,   362,  1005,  1420,   602,  1203,  1507,   532,    51,
     461,  1441,   121,   911,  1133,   450,    12,   377,   299,  1660,
      47,    63,    12,    12,  1557,    47,   461,   387,   388,   389,
     853,    65,    74,  1230,   381,    12,  1578,   577,   104,    81,
      51,  1043,   478,    14,    52,    69,   658,  1661,    34,   661,
      25,    93,   690,   665,   666,   113,    12,   124,    12,    87,
      89,    93,   396,   397,   398,   107,    12,   109,  1620,    12,
    1302,   109,    44,    12,    12,  1445,   118,  1737,    12,   121,
    1049,    12,   124,  1453,    12,    14,   118,   480,   873,    12,
      69,    12,   528,   115,   127,    12,   660,  1077,  1078,    58,
      12,    12,    39,  1136,    12,   219,   871,   179,    71,    12,
     133,    87,   228,  1253,  1080,   180,  1082,   150,   100,  1491,
       7,   155,   207,    29,  1652,    87,    12,   235,   668,   272,
    1658,    12,    12,   569,   168,   220,    12,   272,     9,  1233,
      88,  1650,   176,    12,     9,    51,   297,  1656,    12,    12,
     272,   150,    44,  1662,  1663,   132,   128,    63,    12,   170,
       9,     9,    12,   228,  1716,   140,   334,   316,    74,   145,
     283,   214,   148,   207,   316,    81,    12,  1271,   180,    12,
     109,    99,   364,  1360,    12,    12,   153,    66,    12,    12,
    1436,    12,    12,   132,   295,   129,   363,   145,    12,  1941,
     148,   150,   353,   109,   171,    12,    73,   250,   317,   132,
     233,  1696,  1697,  1111,   315,   121,  1325,  1326,   124,   387,
     268,   150,   101,   390,    95,   338,   228,   261,   214,    12,
      95,  1731,   145,   229,   301,   148,   123,   386,   673,   229,
    1768,   283,  1672,   386,   386,   388,    95,    95,   290,   231,
     292,   386,   229,   215,    12,   254,   298,  1629,   343,   301,
      12,   284,   304,   305,   386,   237,  2008,  1131,   302,   334,
    1239,   257,   606,   229,   390,   317,   390,   214,   386,   917,
     918,  1247,   241,   229,  1944,   897,   229,   621,  1520,   361,
     229,   229,   316,   279,   360,   229,   334,   690,   229,  1064,
     358,   229,  1802,    12,  1444,   829,   229,   255,   229,   342,
     339,    12,   229,    14,    12,    12,   425,   229,   229,   347,
     884,   229,   862,   331,  1824,   254,   229,    12,  1361,  1970,
      12,  1279,   343,    12,   323,   899,  1582,   316,  1708,    12,
     316,   316,  1712,   229,    12,  1878,   373,    12,   229,   229,
     313,   373,   323,   229,  1968,   389,   248,   424,   400,   401,
     229,   279,    12,   335,  1541,   229,   229,  1919,   316,   650,
     366,    12,  1236,    12,  2015,   229,   366,   283,  1486,   229,
     318,   226,   424,   425,   290,    12,   292,  1367,  1930,   366,
      12,   387,   298,   229,   390,   301,   229,   387,   304,   305,
     390,   229,   229,   316,  1227,   229,   229,    12,   229,   229,
     366,   317,   366,   390,   481,   229,  1535,    12,  1537,   941,
     366,    12,   229,   366,    12,   492,  1023,   366,   366,  1327,
     952,   387,   366,   121,   390,   366,   478,   479,   366,   481,
    1225,   387,   390,   366,   390,   366,   229,   390,   387,   366,
     492,  1089,   974,   387,   366,   366,   907,   499,   366,   390,
    1969,   389,  1074,   366,   506,  1998,  1999,  1897,  2001,   390,
     590,   229,   907,   390,  1032,  1033,   387,   229,   390,   390,
     366,  1981,   390,  2016,   387,   366,   366,  1125,   530,  1127,
     366,  1129,  1908,  1993,   400,   401,  1360,   366,  1022,  1171,
     834,   387,   366,   366,  1044,  1029,   387,   387,  2041,   390,
    2043,  2044,   366,  1451,   390,   121,   366,    14,   424,   425,
     229,   390,   633,  1617,   387,  1722,   390,   390,   229,   292,
     366,   229,   229,   366,    12,   577,   390,    12,   366,   366,
     390,  1081,   366,   366,   229,   366,   366,   229,   590,    12,
     229,   325,   366,    88,   390,    29,   229,   390,   590,   366,
      12,   229,   390,   390,   229,  1658,   390,   390,    65,   390,
     390,    22,   478,   479,    12,   481,   390,   686,   620,   229,
     387,   648,   624,   366,   651,    12,   492,    12,   229,    63,
     229,   633,  1295,   499,  1475,   272,   663,  1055,    15,    12,
     506,  1452,   229,  1605,   387,    12,   648,   229,   366,   651,
     145,    71,   109,   148,   366,    12,  1676,   659,    12,  1705,
     652,   663,  1219,    12,   229,    12,   668,   694,   150,   387,
     127,    12,   129,   181,   229,   387,   272,  1585,   229,   327,
     137,   229,   139,    12,   686,    12,    44,   132,   690,    12,
     692,   310,   694,   150,   313,  1593,  1594,   366,   155,   127,
     272,  1736,   121,   160,  1302,   366,    31,    12,   366,   366,
     272,   168,  1747,    90,  1312,  1768,  1747,  1541,   387,   176,
     446,   366,   150,   180,   366,   313,  1703,   366,   185,   387,
     387,  1299,  1026,   366,  1216,   180,   462,   272,   366,    20,
    1240,   366,   387,   280,   135,   387,   109,   132,   387,   386,
     207,     9,   163,   129,   387,   121,   366,   265,   624,   387,
     255,   327,   387,   220,     0,   366,  1334,   366,   179,    12,
     128,   228,   917,   918,   313,   641,   499,   387,  1984,   366,
    1826,  1592,   648,   506,   366,   651,   387,   149,   387,    70,
     386,   229,   183,   659,   229,   135,   215,   663,   218,    96,
     387,   366,  1122,   223,   261,   387,   229,    84,   810,   185,
    1718,   366,   187,   138,   386,   366,  1316,   229,   366,  1854,
     686,   316,   387,  1854,   386,  1488,   692,   132,   694,   856,
     857,   229,   387,   370,    88,  1498,   387,    95,   249,   387,
    1734,   216,   229,   183,   229,   302,   212,   132,   125,   215,
    1904,   386,  1370,   121,   856,   857,   229,   106,  1926,  1927,
     862,    14,   229,   140,   298,   114,   379,  1385,  1386,   149,
     304,     9,   229,     9,   387,   229,   362,   334,   880,   237,
     229,   221,   229,  1401,   886,   342,   343,   278,   229,   272,
     145,   145,   132,   148,   148,   390,   279,  1708,   132,     6,
     229,  1712,   229,    10,   361,   202,   229,  1976,   327,   911,
     187,  1393,    65,    38,   342,   917,   918,    38,   920,    84,
     160,   913,  1520,    47,   229,    18,   379,   153,   366,   163,
     387,   366,   389,   390,   387,  1435,  1016,   362,   278,   216,
     137,  1835,  1836,   366,   810,  1427,    71,   215,   387,   387,
      71,   318,   387,   313,   366,   330,   109,    95,   391,    95,
     125,   327,  1625,    87,   387,    18,   349,   350,   366,   387,
     336,   168,   390,   566,   567,   387,   129,   335,   227,   366,
    1125,   366,  1127,  1303,   137,  2030,   139,  2032,   228,   387,
     856,   857,  1072,   366,    87,   391,   862,   212,    51,   366,
     387,   255,   155,   386,   335,  1816,  1817,   160,   118,   366,
      41,    42,   366,   214,  1016,   168,    47,   366,  2064,   366,
     886,   168,   187,   176,  1016,   366,    56,   180,   153,   176,
     387,   228,   185,   387,    87,    88,  1038,   366,   387,   366,
     387,   387,  1044,   366,   390,   387,   387,   171,   390,    47,
      22,   216,   297,   330,   207,    84,   109,   110,   387,   327,
     387,   366,   316,  1065,   387,  1067,   315,   220,   336,   122,
    1072,  1651,   362,  1065,  1654,   228,   390,  1657,   171,  1081,
    1072,   316,    18,   380,   381,   382,   383,  1089,   212,    87,
      88,   215,   145,   218,   386,   148,   125,   218,   223,    10,
      11,    44,   223,  1130,  1096,    41,    42,    50,   261,  1111,
      21,    47,   386,   237,   261,    51,  1118,    60,  2013,   212,
    2028,   386,   215,  1125,    96,  1127,   386,  1129,  1130,  1131,
     386,  1133,   391,    44,  1136,   145,  1636,   147,   148,   386,
     272,  1669,    53,    12,   237,  1458,  1459,   145,  1746,   302,
     148,    87,    88,    64,   290,   291,   292,   293,   187,   387,
      56,  1557,   390,    50,   387,   330,   302,   390,   178,   244,
     387,   268,  1038,   390,   110,    12,  1470,   252,    89,    90,
      91,   334,   386,   276,   386,   128,   122,   216,    99,   314,
     343,   163,   313,   314,   387,  2090,  2091,   390,   109,  1065,
     275,  1067,   255,     2,   386,     4,   117,   179,   361,   145,
     153,   335,   148,   266,   386,   126,   386,   349,   350,    18,
      54,    55,   380,   387,   386,  1252,   390,    96,   171,   386,
     202,   355,    47,   112,   387,   386,   389,   390,  1240,  1767,
     212,   128,   335,  1245,   386,  1773,   387,   158,  1776,   390,
    1252,    65,  1118,    87,   386,   134,   386,   255,  1676,    96,
    1262,   172,   386,   316,  1130,  1131,   153,   386,   102,   386,
    1262,   182,    87,   386,   334,   387,    25,   249,   390,   387,
     386,   291,   390,   386,   171,   164,    85,  1289,   386,  1091,
     124,  1093,  1319,  1295,   237,   174,  1298,  1099,  1300,   386,
    1302,   330,   135,  1105,  1804,   386,   316,  1309,  1310,  1301,
    1312,   321,   386,  1315,  1316,   386,   386,  1319,   316,   255,
     386,  1313,   386,   122,   386,  1327,  1328,  1329,    77,   208,
     266,   387,  1334,   202,   390,    84,   386,   390,  1365,   250,
     251,   155,  1334,   254,   387,   387,   386,   390,   390,  1289,
     237,   262,   386,   186,   168,  1295,   171,   268,  1298,  1361,
    1300,   272,   176,  1365,   387,   202,   386,   390,   279,  1309,
    1310,   282,   121,   386,  1240,  1315,   125,   386,   386,  1245,
     316,   145,   392,   147,   148,   296,  1252,   387,   180,    25,
     390,   140,   335,   207,   310,   387,  1262,   212,   390,   386,
     215,   386,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   387,   247,   178,   390,   386,   328,   387,  1421,
     386,   390,   237,  1289,   386,   386,   337,  1429,   339,  1295,
     386,   342,  1298,  1435,  1300,   386,   386,  1429,   187,   145,
     386,   147,   148,  1309,  1310,   386,   386,   261,    84,  1315,
     104,   386,  1759,  1319,   390,   297,   387,  1648,  1649,   390,
     386,   386,  1328,  1329,   297,  1467,   215,   216,  1759,  1660,
    1661,   386,   178,  1475,  1870,   386,   386,   310,   386,   386,
     313,  1788,  1878,  1983,   387,   386,  1488,   390,   302,   125,
     297,   370,   371,   372,    59,  1891,  1498,  1788,   279,  1365,
     145,  1528,   147,   148,   140,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   387,   387,    87,  1520,   390,
     335,   387,   390,  1525,   390,    39,  1528,   291,  1608,   250,
    1532,  1838,  1839,  1535,   118,  1537,  1538,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,  1867,  1488,  1840,
    1841,   187,   316,  1744,  1745,  1421,   153,   321,  1498,  1866,
     220,    77,  1869,  1429,  1960,  1756,  1962,   316,    84,   259,
      87,   357,   321,  1764,   244,  1766,   360,   387,   327,   215,
     216,   330,   387,    87,  1775,   291,   387,    95,   386,    87,
    1781,  1782,   387,  2093,     9,   391,   387,   387,  1889,  1890,
    1602,  1467,  1998,  1999,   387,  2001,  1608,   386,   154,   125,
     316,  2111,   390,   323,   390,   321,  1608,   390,  2118,   380,
    2016,   316,  1488,  1625,   285,   361,    47,   185,   392,   378,
     379,  1633,  1498,   387,  1636,   387,   380,   387,  1648,  1649,
     387,   132,   379,  1963,   387,  2041,   291,  2043,  2044,   387,
    1660,  1661,    24,   387,   171,   387,    28,   387,    18,  1525,
     387,   390,  1528,    82,   390,    87,  1532,   171,   322,   387,
      42,   187,  1538,   171,   387,  1677,   321,   334,   280,    12,
     316,    41,    42,   386,    65,  1625,   392,    47,   386,   383,
     386,    51,   383,    47,   330,   212,   350,   213,   215,   215,
     216,   387,    74,   220,   391,    77,   316,   361,   212,   386,
     391,   215,   131,    85,   212,   387,   220,   215,   392,   390,
     237,    32,   370,   370,   370,   144,   228,    87,    88,   387,
     220,   107,  1734,   237,  1744,  1745,  1602,   387,  1740,   237,
      18,   159,   378,   379,  1746,   399,  1756,   159,   387,   171,
     110,   391,   387,   387,  1764,   387,  1766,   160,   391,  1625,
      96,   391,   122,    41,    42,  1775,   387,  1633,   387,    47,
     390,  1781,  1782,    51,   155,   194,   390,  1968,   197,  1970,
     387,   132,  1809,   165,   203,   145,    50,   168,   148,   161,
     212,   323,  1784,   215,  1796,   176,   169,   370,   311,   169,
     316,   370,  1804,    32,   311,   321,   370,  1809,   370,    87,
      88,  1677,   390,   370,   330,   237,   343,   180,   335,   179,
     220,   240,   101,   386,  2015,   386,   207,  2018,   387,   161,
     161,   335,   110,  1835,  1836,   387,   390,   335,   387,   220,
     391,   272,   387,   387,   122,   145,   339,   147,   148,   390,
     390,   270,   391,   163,   508,   177,    65,   171,   171,   513,
     391,   387,   279,   517,   518,   387,   202,   145,  1734,   386,
     148,   525,   526,   527,  1740,   529,    14,   531,    14,   216,
     261,   535,   536,   537,   538,    12,   216,   387,   542,   274,
     544,   545,    18,   547,   548,   255,   550,  1899,   160,   553,
     554,   555,   556,   557,   558,   387,   266,   561,   562,    18,
     564,   283,   390,   335,   568,  1917,   570,   571,    96,   168,
     168,   302,   230,   137,   392,    51,   580,   581,   281,   390,
    1796,    84,   171,   171,   588,   390,   386,   591,   592,   593,
     359,   171,    51,  1809,  1946,   387,   155,   387,   387,   368,
     322,    78,    79,    80,    81,    82,   316,   387,  1968,   168,
    1970,    87,    88,   168,   168,   220,   338,   176,    32,  1835,
    1836,   139,   125,   145,   390,   147,   148,   255,    87,    88,
     199,  1983,   386,  1975,   110,   163,   244,   641,   266,    87,
      87,   291,   145,   386,   386,   148,   122,   386,   207,   653,
     109,   110,   386,    51,   391,  2015,   178,   386,  2018,   387,
     339,   220,   313,   122,   141,   142,   143,   144,   216,   145,
     168,   321,   148,   168,   202,   325,   386,  2107,  2030,    49,
    2032,   386,  2034,  1899,   187,   189,   145,   386,   316,   148,
     376,   377,   378,   379,   380,   381,   382,   383,   519,   216,
     215,  1917,   261,   171,   171,   709,   339,   216,   386,   216,
     216,   216,    87,   216,   387,   386,   343,   194,   195,   196,
     197,   343,   543,   181,   386,   546,   203,   220,   387,   369,
    1946,   213,   387,   387,   387,   350,  2088,  2089,   559,   560,
     343,  2093,   563,   302,   216,    78,    79,    80,    81,    82,
     343,   390,   229,    32,    32,  2107,   760,   578,   579,  2111,
     106,    32,  2114,   240,   387,  2107,  2118,   386,   386,   291,
      23,    96,   129,    32,    27,    28,    32,    32,   248,   255,
       4,   220,   220,   150,    32,    32,   790,   791,   792,    42,
     266,   386,   269,   270,   316,   386,   255,   339,    89,   321,
     216,   386,  1673,   387,   279,  1131,  1111,   266,   141,   142,
     143,   144,   390,   316,  2030,   690,  2032,  1328,  2034,  1538,
    1118,    74,  1090,  1293,    77,   829,  1331,   330,  1633,  1635,
    1154,  1655,    85,  1774,  1880,  1756,  1793,   841,  1764,   843,
     316,  1738,  1746,  1137,    97,  2007,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,  1978,   316,   111,  1899,
     477,   194,   195,   196,   197,   856,  1327,  1056,   278,  1007,
     203,   124,  2088,  2089,   277,   441,   870,   202,  1227,  1429,
    1455,   940,   359,  1706,  1006,   706,  1995,  1929,  2114,   366,
     367,   368,   567,  1704,  2089,   519,  1636,  1477,  2114,  1725,
    1030,   306,  1061,   861,   317,   425,   949,   240,   161,   703,
    1435,  1081,  1235,  2111,   167,   505,  1983,   352,  1935,  1985,
    2027,    96,  2005,   927,  2118,  1240,   930,   641,   932,   933,
      81,   875,  1334,   937,  1270,  1475,   269,   270,  1730,   110,
     431,   762,    -1,    -1,    -1,   766,    -1,   951,    -1,    -1,
     954,   955,   956,   957,    -1,   959,    -1,    -1,    -1,    96,
      -1,   782,   966,    -1,   217,   969,    -1,   971,   972,   973,
      -1,    -1,    -1,    -1,   978,   979,   980,    -1,    -1,    -1,
     984,   985,    -1,   987,    -1,   989,    -1,   991,    -1,   993,
      -1,   995,    -1,   246,    -1,    -1,  1000,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,  1017,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   276,    -1,  1029,   359,   202,    -1,    -1,
    1034,    -1,    -1,    -1,   367,   368,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    51,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    62,
      -1,    63,    64,    -1,   317,   202,    -1,    -1,   321,   322,
      72,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,
      -1,  1085,    -1,    -1,    87,    88,    -1,    18,    -1,    -1,
      93,    94,    -1,    -1,    -1,   348,    99,    -1,   351,   352,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,    -1,    40,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      51,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,   135,    -1,  1139,    -1,    -1,    -1,    -1,
    1144,    -1,   145,   145,  1148,   148,   148,    -1,   151,    -1,
     152,   153,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    93,  1167,  1168,    -1,    -1,   169,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,   183,  1186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1194,   122,  1196,    -1,  1198,    -1,   127,    -1,   201,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,   552,    -1,   228,    -1,    -1,    -1,    -1,
    1234,    -1,    -1,    -1,    -1,    -1,    -1,   239,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,  1269,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   603,   604,   278,    -1,   607,  1283,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,
      -1,   313,   314,   316,   316,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1373,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,  1390,  1391,    -1,    -1,
      -1,    -1,    -1,    -1,  1398,    -1,    -1,    -1,    -1,  1403,
      -1,    -1,  1406,  1407,  1408,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,  1476,    35,    -1,    -1,    -1,    39,    -1,  1483,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,   832,    66,    -1,   835,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,
     102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,
      -1,   113,    -1,   115,   116,    -1,    -1,   119,    -1,    -1,
     122,   123,   124,    -1,   126,    -1,    -1,    -1,   130,   131,
      -1,   133,    -1,   135,    -1,    -1,   138,    -1,  1582,    -1,
      -1,    -1,   144,   145,   146,    -1,   148,    -1,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,    -1,    -1,   177,  1620,    -1,    -1,    -1,
      -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,   197,    -1,   199,    -1,   201,
      -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
      -1,    -1,   214,    -1,    -1,    -1,   218,   219,    -1,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,   236,    -1,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,  1688,   247,    -1,    -1,    -1,    -1,
     252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
      -1,    -1,  1716,   275,   276,   277,   278,    -1,    -1,   281,
      -1,   283,   284,   285,    -1,    -1,  1730,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,    -1,
      -1,   303,   304,   305,    -1,    -1,   308,    -1,   310,   311,
      -1,    -1,   314,    -1,    -1,   317,    -1,   319,   320,    -1,
     322,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,   331,
     332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,    -1,
      -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,    -1,
      -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1820,  1821,    -1,    -1,
      -1,  1825,    -1,     4,     5,   387,     7,     8,    -1,   391,
     392,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,  1919,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,
     111,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,    -1,   130,
     131,    -1,   133,    -1,   135,   136,    -1,   138,    -1,   140,
      -1,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,
    1984,    -1,    -1,  1987,   165,  1989,   167,    -1,    -1,   170,
      -1,   172,   173,    -1,   175,   176,   177,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,   186,   187,    -1,    -1,   190,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,    -1,    -1,   209,   210,
     211,   212,   213,   214,   215,   216,    -1,   218,   219,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   234,    -1,   236,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,
     281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,
      -1,    -1,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    -1,    -1,   314,    -1,   316,   317,    -1,   319,   320,
     321,   322,    -1,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,
     341,    -1,    -1,   344,   345,   346,    -1,   348,   349,   350,
      -1,    -1,   353,   354,    -1,   356,   357,   358,   359,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,   379,    -1,
      -1,    -1,    -1,   384,    -1,   386,    -1,   388,    -1,    -1,
     391,   392,     4,     5,    -1,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,
     102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,   130,   131,
      -1,   133,    -1,   135,   136,    -1,   138,    -1,   140,    -1,
      -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,
     172,   173,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,
      -1,   183,   184,    -1,   186,   187,    -1,    -1,   190,   191,
     192,   193,   194,    -1,    -1,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   234,    -1,   236,    -1,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
      -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,
      -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,
      -1,   303,   304,   305,   306,   307,   308,   309,   310,   311,
      -1,    -1,   314,    -1,   316,   317,    -1,   319,   320,   321,
     322,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,
      -1,    -1,   344,   345,   346,    -1,   348,   349,   350,    -1,
      -1,   353,   354,    -1,   356,   357,   358,   359,    -1,    -1,
      -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   378,   379,    -1,    -1,
      -1,    -1,   384,    -1,   386,    -1,   388,    -1,    -1,   391,
     392,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
      -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,   130,   131,    -1,
     133,    -1,   135,   136,    -1,   138,    -1,   140,    -1,    -1,
      -1,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
      -1,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,   172,
     173,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,   186,   187,    -1,    -1,   190,   191,   192,
     193,   194,    -1,    -1,   197,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
     213,   214,   215,   216,    -1,   218,   219,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,   236,    -1,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,    -1,
      -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,    -1,
     303,   304,   305,   306,   307,   308,   309,   310,   311,    -1,
      -1,   314,    -1,   316,   317,    -1,   319,   320,   321,   322,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,
      -1,   344,   345,   346,    -1,   348,   349,   350,    -1,    -1,
     353,   354,    -1,   356,   357,   358,   359,    -1,    -1,    -1,
      -1,   364,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,   379,    -1,    -1,    -1,
      -1,   384,    -1,   386,   387,   388,    -1,    -1,   391,   392,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      -1,    45,    46,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,
      -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,   130,   131,   132,   133,
      -1,   135,   136,    -1,   138,    -1,   140,    -1,    -1,    -1,
     144,   145,   146,    -1,   148,   149,    -1,   151,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,
      -1,   165,    -1,   167,    -1,    -1,   170,    -1,   172,   173,
      -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,   183,
     184,    -1,   186,   187,    -1,    -1,   190,   191,   192,   193,
     194,    -1,    -1,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
     214,   215,   216,    -1,   218,   219,    -1,   221,   222,   223,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,    -1,    -1,
      -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,   298,   299,   300,    -1,    -1,   303,
     304,   305,   306,   307,   308,   309,   310,   311,    -1,    -1,
     314,    -1,   316,   317,    -1,   319,   320,   321,   322,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,
     344,   345,   346,    -1,   348,   349,   350,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,    -1,    -1,    -1,    -1,
     364,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,   379,    -1,    -1,    -1,    -1,
     384,    -1,   386,    -1,   388,    -1,    -1,   391,   392,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
     105,    -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,   130,   131,   132,   133,    -1,
     135,   136,    -1,   138,    -1,   140,    -1,    -1,    -1,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,    -1,    -1,   170,    -1,   172,   173,    -1,
      -1,   176,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
      -1,    -1,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,    -1,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,    -1,   218,   219,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,
      -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   261,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,    -1,    -1,   281,    -1,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,   298,   299,   300,    -1,    -1,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,    -1,   314,
      -1,   316,   317,    -1,   319,   320,   321,   322,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,   344,
     345,   346,    -1,   348,   349,   350,    -1,    -1,   353,   354,
      -1,   356,   357,   358,   359,    -1,    -1,    -1,    -1,   364,
      -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   378,   379,    -1,    -1,    -1,    -1,   384,
      -1,   386,    -1,   388,    -1,    -1,   391,   392,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    -1,    45,
      46,    -1,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,
      -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,
      -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,   130,   131,   132,   133,    -1,   135,
     136,    -1,   138,    -1,   140,    -1,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,   151,   152,    -1,    -1,    -1,
      -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,   165,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,    -1,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
     186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
      -1,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,   218,   219,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,    -1,
     236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,
     276,   277,   278,    -1,    -1,   281,    -1,   283,   284,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,   297,   298,   299,   300,    -1,    -1,   303,   304,   305,
     306,   307,   308,   309,   310,   311,    -1,    -1,   314,    -1,
     316,   317,    -1,   319,   320,   321,   322,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,    -1,    -1,    -1,
     336,    -1,    -1,    -1,    -1,   341,    -1,    -1,   344,   345,
     346,    -1,   348,   349,   350,    -1,    -1,   353,   354,    -1,
     356,   357,   358,   359,    -1,    -1,    -1,    -1,   364,    -1,
      -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   378,   379,    -1,    -1,    -1,    -1,   384,    -1,
     386,    -1,   388,    -1,    -1,   391,   392,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,
     107,   108,    -1,   110,   111,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,   130,   131,    -1,   133,    -1,   135,   136,
      -1,   138,    -1,   140,    -1,    -1,    -1,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,    -1,    -1,    -1,    -1,
      -1,   158,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,   170,    -1,   172,   173,    -1,    -1,   176,
     177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,   186,
     187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
     197,   198,   199,    -1,   201,   202,   203,   204,   205,   206,
      -1,    -1,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,   218,   219,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,   234,    -1,   236,
      -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,   298,   299,   300,    -1,    -1,   303,   304,   305,   306,
     307,   308,   309,   310,   311,    -1,    -1,   314,    -1,   316,
     317,    -1,   319,   320,   321,   322,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,   341,    -1,    -1,   344,   345,   346,
      -1,   348,   349,   350,    -1,    -1,   353,   354,    -1,   356,
     357,   358,   359,    -1,    -1,    -1,    -1,   364,    -1,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   378,   379,    -1,    -1,    -1,    -1,   384,    -1,   386,
      -1,   388,    -1,    -1,   391,   392,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    -1,    31,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    -1,    45,    46,    -1,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    62,    63,    -1,    -1,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,
      98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,   107,
     108,    -1,   110,   111,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,    -1,   130,   131,    -1,   133,    -1,   135,   136,    -1,
     138,    -1,   140,    -1,    -1,    -1,   144,   145,   146,    -1,
     148,   149,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,
      -1,    -1,   170,    -1,   172,   173,    -1,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,   183,   184,    -1,   186,   187,
      -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,   197,
     198,   199,    -1,   201,   202,   203,   204,   205,   206,    -1,
      -1,   209,   210,   211,   212,   213,   214,   215,   216,    -1,
     218,   219,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,    -1,   236,    -1,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,    -1,    -1,    -1,   275,   276,   277,
     278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,
     298,   299,   300,    -1,    -1,   303,   304,   305,   306,   307,
     308,   309,   310,   311,    -1,    -1,   314,    -1,   316,   317,
      -1,   319,   320,   321,   322,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,   341,    -1,    -1,   344,   345,   346,    -1,
     348,   349,   350,    -1,    -1,   353,   354,    -1,   356,   357,
     358,   359,    -1,    -1,    -1,    -1,   364,    -1,    -1,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     378,   379,    -1,    -1,    -1,    -1,   384,    -1,   386,    -1,
     388,    -1,    -1,   391,   392,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,    -1,    -1,   105,    -1,   107,   108,
      -1,   110,   111,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,    -1,   138,
      -1,   140,    -1,    -1,    -1,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,   158,
     159,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,    -1,
      -1,   170,    -1,   172,   173,    -1,    -1,   176,   177,    -1,
      -1,    -1,    -1,    -1,   183,   184,    -1,   186,   187,    -1,
      -1,   190,   191,   192,   193,   194,    -1,    -1,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,    -1,    -1,
     209,   210,   211,    -1,   213,   214,   215,   216,    -1,   218,
     219,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   233,   234,    -1,   236,    -1,   238,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,   261,   262,   263,   264,   265,   266,   267,   268,
      -1,   270,   271,    -1,    -1,    -1,   275,   276,   277,   278,
      -1,    -1,   281,    -1,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,   298,
     299,   300,    -1,    -1,   303,   304,   305,   306,   307,   308,
     309,   310,   311,    -1,    -1,   314,    -1,   316,   317,    -1,
     319,   320,   321,   322,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,    -1,   336,    -1,    -1,
      -1,    -1,   341,    -1,    -1,   344,   345,   346,    -1,   348,
     349,   350,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,    -1,    -1,    -1,    -1,   364,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,
     379,    -1,    -1,    -1,    -1,   384,    -1,   386,    -1,   388,
      -1,    -1,   391,   392,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      -1,    -1,    42,    43,    -1,    45,    46,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    63,    -1,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,
     100,   101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,
     110,   111,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,    -1,   138,    -1,
     140,    -1,    -1,    -1,   144,   145,   146,    -1,   148,   149,
      -1,   151,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,
     170,    -1,   172,   173,    -1,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,   183,   184,    -1,   186,   187,    -1,    -1,
     190,   191,   192,   193,   194,    -1,    -1,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,    -1,    -1,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,   218,   219,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   234,    -1,   236,    -1,   238,   239,
     240,   241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,   261,   262,   263,   264,   265,   266,   267,   268,    -1,
     270,   271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,
      -1,   281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,
     300,    -1,    -1,   303,   304,   305,   306,   307,   308,   309,
     310,   311,    -1,    -1,   314,    -1,   316,   317,    -1,   319,
     320,   321,   322,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,
      -1,   341,    -1,    -1,   344,   345,   346,    -1,   348,   349,
     350,    -1,    -1,   353,   354,    -1,   356,   357,   358,   359,
      -1,    -1,    -1,    -1,   364,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,   379,
      -1,    -1,    -1,    -1,   384,    -1,   386,    -1,   388,    -1,
      -1,   391,   392,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,
     111,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,    -1,   130,
     131,    -1,   133,    -1,   135,   136,    -1,   138,    -1,   140,
      -1,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,
      -1,   172,   173,    -1,    -1,   176,   177,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,   186,   187,    -1,    -1,   190,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,    -1,    -1,   209,   210,
     211,   212,   213,   214,   215,   216,    -1,   218,   219,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   234,    -1,   236,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,
     281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,
      -1,    -1,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    -1,    -1,   314,    -1,   316,   317,    -1,   319,   320,
     321,   322,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,
     341,    -1,    -1,   344,   345,   346,    -1,   348,   349,   350,
      -1,    -1,   353,   354,    -1,   356,   357,   358,   359,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,   379,    -1,
      -1,    -1,    -1,   384,    -1,   386,    -1,   388,    -1,    -1,
     391,   392,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,
     102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,   130,   131,
      -1,   133,    -1,   135,   136,    -1,   138,    -1,   140,    -1,
      -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,
     172,   173,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,
      -1,   183,   184,    -1,   186,   187,    -1,    -1,   190,   191,
     192,   193,   194,    -1,    -1,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,   218,   219,    -1,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   234,    -1,   236,    -1,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
      -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,
      -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,
      -1,   303,   304,   305,   306,   307,   308,   309,   310,   311,
      -1,    -1,   314,    -1,   316,   317,    -1,   319,   320,   321,
     322,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,
      -1,    -1,   344,   345,   346,    -1,   348,   349,   350,    -1,
      -1,   353,   354,    -1,   356,   357,   358,   359,    -1,    -1,
      -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   378,   379,    -1,    -1,
      -1,    -1,   384,    -1,   386,    -1,   388,    -1,    -1,   391,
     392,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
      -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,   130,   131,    -1,
     133,    -1,   135,   136,    -1,   138,    -1,   140,    -1,    -1,
      -1,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
      -1,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,   172,
     173,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,   186,   187,    -1,    -1,   190,   191,   192,
     193,   194,    -1,    -1,   197,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,    -1,    -1,   209,   210,   211,    -1,
     213,   214,   215,   216,    -1,   218,   219,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,   236,    -1,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,    -1,
      -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,    -1,
     303,   304,   305,   306,   307,   308,   309,   310,   311,    -1,
      -1,   314,    -1,   316,   317,    -1,   319,   320,   321,   322,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,
      -1,   344,   345,   346,    -1,   348,   349,   350,    -1,    -1,
     353,   354,    -1,   356,   357,   358,   359,    -1,    -1,    -1,
      -1,   364,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,   379,    -1,    -1,    -1,
      -1,   384,    -1,   386,    -1,   388,    -1,    -1,   391,   392,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      -1,    45,    46,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,
      -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,    -1,   138,    -1,   140,    -1,    -1,    -1,
     144,   145,   146,    -1,   148,   149,    -1,   151,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,
      -1,   165,    -1,   167,    -1,    -1,   170,    -1,   172,   173,
      -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,   183,
     184,    -1,   186,   187,    -1,    -1,   190,   191,   192,   193,
     194,    -1,    -1,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,    -1,    -1,   209,   210,   211,    -1,   213,
     214,   215,   216,    -1,   218,   219,    -1,   221,   222,   223,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,    -1,    -1,
      -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,   298,   299,   300,    -1,    -1,   303,
     304,   305,   306,   307,   308,   309,   310,   311,    -1,    -1,
     314,    -1,   316,   317,    -1,   319,   320,   321,   322,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,
     344,   345,   346,    -1,   348,   349,   350,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,    -1,    -1,    -1,    -1,
     364,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,   379,    -1,    -1,    -1,    -1,
     384,    -1,   386,    -1,   388,    -1,    -1,   391,   392,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
     105,    -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,    -1,   138,    -1,   140,    -1,    -1,    -1,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,    -1,    -1,   170,    -1,   172,   173,    -1,
      -1,   176,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
      -1,    -1,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,    -1,    -1,   209,   210,   211,    -1,   213,   214,
     215,   216,    -1,   218,   219,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,
      -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   261,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,    -1,    -1,   281,    -1,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,   298,   299,   300,    -1,    -1,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,    -1,   314,
      -1,   316,   317,    -1,   319,   320,   321,   322,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,   344,
     345,   346,    -1,   348,   349,   350,    -1,    -1,   353,   354,
      -1,   356,   357,   358,   359,    -1,    -1,    -1,    -1,   364,
      -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   378,   379,    -1,    -1,    -1,    -1,   384,
      -1,   386,    -1,   388,    -1,    -1,   391,   392,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,
      46,    -1,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,
      -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,
      -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,   115,
     116,    -1,    -1,   119,    -1,    -1,   122,   123,   124,    -1,
     126,    -1,    -1,    -1,   130,   131,    -1,   133,    -1,   135,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,   148,    -1,    -1,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
     186,    -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,
      -1,   197,    -1,   199,    -1,   201,    -1,   203,   204,   205,
     206,    -1,    -1,   209,   210,   211,    -1,    -1,   214,    -1,
      -1,    -1,   218,   219,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,   258,    -1,    -1,    -1,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,
     276,   277,   278,    -1,    -1,   281,    -1,   283,   284,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,   297,    -1,    -1,   300,    -1,    -1,   303,   304,   305,
      -1,    -1,   308,    -1,   310,   311,    -1,    -1,   314,    -1,
      -1,   317,    -1,   319,   320,    -1,   322,    -1,    -1,   325,
      -1,    -1,   328,   329,    -1,   331,   332,    -1,    -1,    -1,
     336,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,   350,    -1,    -1,   353,    -1,    -1,
      -1,    -1,   358,   359,    -1,    -1,     4,     5,   364,     7,
       8,    -1,   368,    -1,    -1,    13,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    31,    -1,   391,   392,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,
      98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,   107,
     108,    -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,
      -1,   119,    -1,    -1,   122,   123,   124,    -1,   126,    -1,
      -1,    -1,   130,   131,    -1,   133,    -1,   135,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
     148,    -1,    -1,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,
      -1,    -1,   170,   171,    -1,   173,    -1,    -1,    -1,   177,
      -1,   179,    -1,    -1,    -1,   183,   184,    -1,   186,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,   197,
      -1,   199,    -1,   201,    -1,   203,   204,   205,   206,    -1,
      -1,   209,   210,   211,    -1,    -1,   214,    -1,    -1,    -1,
     218,   219,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,    -1,    -1,   275,   276,   277,
     278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,
      -1,    -1,   300,    -1,    -1,   303,   304,   305,    -1,    -1,
     308,    -1,   310,   311,    -1,    -1,   314,    -1,    -1,   317,
      -1,   319,   320,    -1,   322,    -1,    -1,   325,    -1,    -1,
     328,   329,    -1,   331,   332,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,   350,    -1,    -1,   353,    -1,    -1,    -1,    -1,
     358,   359,    -1,    -1,     4,     5,   364,     7,     8,    -1,
     368,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    31,    -1,   391,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,
     100,   101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,
     110,   111,    -1,   113,    -1,   115,   116,    -1,    -1,   119,
      -1,    -1,   122,   123,   124,    -1,   126,    -1,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,    -1,    -1,   138,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,   148,    -1,
      -1,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,
     170,   171,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,   183,   184,    -1,   186,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,    -1,    -1,   197,    -1,   199,
      -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,
     210,   211,    -1,    -1,   214,    -1,    -1,    -1,   218,   219,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,   236,    -1,   238,   239,
     240,   241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,
      -1,    -1,   262,   263,   264,   265,   266,   267,   268,    -1,
     270,   271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,
      -1,   281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,
     300,    -1,    -1,   303,   304,   305,    -1,    -1,   308,    -1,
     310,   311,    -1,    -1,   314,    -1,    -1,   317,    -1,   319,
     320,    -1,   322,    -1,    -1,   325,    -1,    -1,   328,   329,
      -1,   331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,
      -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,
     350,    -1,    -1,   353,    -1,    -1,    -1,    -1,   358,   359,
      -1,    -1,     4,     5,   364,     7,     8,    -1,   368,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,   391,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,
     102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,
      -1,   113,    -1,   115,   116,    -1,    -1,   119,    -1,    -1,
     122,   123,   124,    -1,   126,    -1,    -1,    -1,   130,   131,
      -1,   133,    -1,   135,    -1,    -1,   138,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,   148,    -1,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,   197,    -1,   199,    -1,   201,
      -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
      -1,    -1,   214,    -1,    -1,    -1,   218,   219,    -1,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,   236,    -1,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,    -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,
      -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,    -1,
      -1,   303,   304,   305,    -1,    -1,   308,    -1,   310,   311,
      -1,    -1,   314,    -1,    -1,   317,    -1,   319,   320,    -1,
     322,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,   331,
     332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,    -1,
      -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,    -1,
      -1,    -1,   364,    -1,    -1,    -1,   368,    -1,    -1,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,   387,    21,    -1,    -1,   391,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
     105,    -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,    -1,   119,    -1,    -1,   122,   123,   124,
      -1,   126,    -1,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,   148,    -1,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
     165,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   186,    -1,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,   197,    -1,   199,    -1,   201,    -1,   203,   204,
     205,   206,    -1,    -1,   209,   210,   211,    -1,    -1,   214,
      -1,    -1,    -1,   218,   219,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,    -1,    -1,   281,    -1,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,    -1,   300,    -1,    -1,   303,   304,
     305,    -1,    -1,   308,    -1,   310,   311,    -1,    -1,   314,
      -1,    -1,   317,    -1,   319,   320,    -1,   322,    -1,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,   332,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,   350,    -1,    -1,   353,    -1,
      -1,    -1,    -1,   358,   359,    -1,    -1,     4,     5,   364,
       7,     8,    -1,   368,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,   391,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,
     107,   108,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,    -1,   119,    -1,    -1,   122,   123,   124,    -1,   126,
      -1,    -1,    -1,   130,   131,    -1,   133,    -1,   135,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   148,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     197,    -1,   199,    -1,   201,    -1,   203,   204,   205,   206,
      -1,    -1,   209,   210,   211,    -1,    -1,   214,    -1,    -1,
      -1,   218,   219,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
      -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,    -1,    -1,   300,    -1,    -1,   303,   304,   305,    -1,
      -1,   308,    -1,   310,   311,    -1,    -1,   314,    -1,    -1,
     317,    -1,   319,   320,    -1,   322,    -1,    -1,   325,    -1,
      -1,   328,   329,    -1,   331,   332,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,   350,    -1,    -1,   353,    -1,    -1,    -1,
      -1,   358,   359,    -1,    -1,    -1,    -1,   364,    -1,    -1,
      -1,   368,    -1,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,   386,
      21,    -1,    -1,    -1,   391,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,    -1,   119,    -1,
      -1,   122,   123,   124,    -1,   126,    -1,    -1,    -1,   130,
     131,    -1,   133,    -1,   135,    -1,    -1,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   148,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,    -1,   199,    -1,
     201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
     211,    -1,    -1,   214,    -1,    -1,    -1,   218,   219,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,
     281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,
      -1,    -1,   303,   304,   305,    -1,    -1,   308,    -1,   310,
     311,    -1,    -1,   314,    -1,    -1,   317,    -1,   319,   320,
      -1,   322,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,
     331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,
      -1,    -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,
      -1,     4,     5,   364,     7,     8,    -1,   368,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,    -1,
     391,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
      -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,
     113,    -1,   115,   116,    -1,    -1,   119,    -1,    -1,   122,
     123,   124,    -1,   126,    -1,    -1,    -1,   130,   131,    -1,
     133,    -1,   135,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,   148,    -1,    -1,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,   186,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,    -1,    -1,   197,    -1,   199,    -1,   201,    -1,
     203,   204,   205,   206,    -1,    -1,   209,   210,   211,    -1,
      -1,   214,    -1,    -1,    -1,   218,   219,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,    -1,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,    -1,
      -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,    -1,    -1,   300,    -1,    -1,
     303,   304,   305,    -1,    -1,   308,    -1,   310,   311,    -1,
      -1,   314,    -1,    -1,   317,    -1,   319,   320,    -1,   322,
      -1,    -1,   325,    -1,    -1,   328,   329,    -1,   331,   332,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,   350,    -1,    -1,
     353,    -1,    -1,    -1,    -1,   358,   359,    -1,    -1,     4,
       5,   364,     7,     8,    -1,   368,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,   391,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
     105,    -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,    -1,   119,    -1,    -1,   122,   123,   124,
      -1,   126,    -1,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,   148,    -1,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   186,    -1,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,   197,    -1,   199,    -1,   201,    -1,   203,   204,
     205,   206,    -1,    -1,   209,   210,   211,    -1,    -1,   214,
      -1,    -1,    -1,   218,   219,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,    -1,    -1,   281,    -1,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,    -1,   300,    -1,    -1,   303,   304,
     305,    -1,    -1,   308,    -1,   310,   311,    -1,    -1,   314,
      -1,    -1,   317,    -1,   319,   320,    -1,   322,    -1,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,   332,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,   350,    -1,    -1,   353,    -1,
      -1,    -1,    -1,   358,   359,    -1,    -1,     4,     5,   364,
       7,     8,    -1,   368,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,   391,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,
     107,   108,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,    -1,   119,    -1,    -1,   122,   123,   124,    -1,   126,
      -1,    -1,    -1,   130,   131,    -1,   133,    -1,   135,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   148,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     197,    -1,   199,    -1,   201,    -1,   203,   204,   205,   206,
      -1,    -1,   209,   210,   211,    -1,    -1,   214,    -1,    -1,
      -1,   218,   219,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
      -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,    -1,    -1,   300,    -1,    -1,   303,   304,   305,    -1,
      -1,   308,    -1,   310,   311,    -1,    -1,   314,    -1,    -1,
     317,    -1,   319,   320,    -1,   322,    -1,    -1,   325,    -1,
      -1,   328,   329,    -1,   331,   332,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,   350,    -1,    -1,   353,    -1,    -1,    -1,
      -1,   358,   359,    -1,    -1,     4,     5,   364,     7,     8,
      -1,   368,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    -1,   391,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,    -1,    -1,   105,    -1,   107,   108,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,    -1,
     119,    -1,    -1,   122,   123,   124,    -1,   126,    -1,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,   148,
      -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,    -1,
      -1,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,   183,   184,    -1,   186,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,    -1,    -1,   197,    -1,
     199,    -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,
     209,   210,   211,    -1,    -1,   214,    -1,    -1,    -1,   218,
     219,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,   238,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,   263,   264,   265,   266,   267,   268,
      -1,   270,   271,    -1,    -1,    -1,   275,   276,   277,   278,
      -1,    -1,   281,    -1,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,
      -1,   300,    -1,    -1,   303,   304,   305,    -1,    -1,   308,
      -1,   310,   311,    -1,    -1,   314,    -1,    -1,   317,    -1,
     319,   320,    -1,   322,    -1,    -1,   325,    -1,    -1,   328,
     329,    -1,   331,   332,    -1,    -1,    -1,   336,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,   350,    -1,    -1,   353,    -1,    -1,    -1,    -1,   358,
     359,    -1,    -1,     4,     5,   364,     7,     8,    -1,   368,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,   380,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,    -1,   119,    -1,
      -1,   122,   123,   124,    -1,   126,    -1,    -1,    -1,   130,
     131,    -1,   133,    -1,   135,    -1,    -1,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   148,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,    -1,   199,    -1,
     201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
     211,    -1,    -1,   214,    -1,    -1,    -1,   218,   219,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,
     281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,
      -1,    -1,   303,   304,   305,    -1,    -1,   308,    -1,   310,
     311,    -1,    -1,   314,    -1,    -1,   317,    -1,   319,   320,
      -1,   322,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,
     331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,
      -1,    -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,
      -1,     4,     5,   364,     7,     8,    -1,   368,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,   380,
      -1,    -1,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
      -1,    -1,   105,    -1,   107,   108,    -1,   110,   111,    -1,
     113,    -1,   115,   116,    -1,    -1,   119,    -1,    -1,   122,
     123,   124,    -1,   126,    -1,    -1,    -1,   130,   131,    -1,
     133,    -1,   135,    -1,    -1,   138,    -1,   140,    -1,    -1,
      -1,   144,   145,   146,    -1,   148,    -1,    -1,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,   186,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,    -1,    -1,   197,    -1,   199,    -1,   201,    -1,
     203,   204,   205,   206,    -1,    -1,   209,   210,   211,    -1,
      -1,   214,    -1,    -1,    -1,   218,   219,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,    -1,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,    -1,
      -1,    -1,   275,   276,   277,   278,    -1,    -1,   281,    -1,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,    -1,    -1,   300,    -1,    -1,
     303,   304,   305,    -1,    -1,   308,    -1,   310,   311,    -1,
      -1,   314,    -1,   316,   317,    -1,   319,   320,    -1,   322,
      -1,    -1,   325,    -1,    -1,   328,   329,    -1,   331,   332,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,   350,    -1,    -1,
     353,    -1,    -1,    -1,    -1,   358,   359,    -1,    -1,     4,
       5,   364,     7,     8,    -1,   368,    -1,    -1,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
     105,    -1,   107,   108,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,    -1,   119,    -1,    -1,   122,   123,   124,
      -1,   126,    -1,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,   148,    -1,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,   186,    -1,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,   197,    -1,   199,    -1,   201,    -1,   203,   204,
     205,   206,    -1,    -1,   209,   210,   211,    -1,    -1,   214,
      -1,    -1,    -1,   218,   219,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,    -1,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,    -1,    -1,   281,    -1,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,    -1,   300,    -1,    -1,   303,   304,
     305,    -1,    -1,   308,    -1,   310,   311,    -1,    -1,   314,
      -1,   316,   317,    -1,   319,   320,    -1,   322,    -1,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,   332,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,   350,    -1,    -1,   353,    -1,
      -1,    -1,    -1,   358,   359,    -1,    -1,     4,     5,   364,
       7,     8,    -1,   368,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,    -1,    -1,   105,    -1,
     107,   108,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,    -1,   119,    -1,    -1,   122,   123,   124,    -1,   126,
      -1,    -1,    -1,   130,   131,    -1,   133,    -1,   135,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   148,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     197,    -1,   199,    -1,   201,    -1,   203,   204,   205,   206,
      -1,    -1,   209,   210,   211,    -1,    -1,   214,    -1,    -1,
      -1,   218,   219,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
      -1,   238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,    -1,    -1,   281,    -1,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,    -1,    -1,   300,    -1,    -1,   303,   304,   305,    -1,
      -1,   308,    -1,   310,   311,    -1,    -1,   314,    -1,   316,
     317,    -1,   319,   320,    -1,   322,    -1,    -1,   325,    -1,
      -1,   328,   329,    -1,   331,   332,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,   350,    -1,    -1,   353,    -1,    -1,    -1,
      -1,   358,   359,    -1,    -1,     4,     5,   364,     7,     8,
      -1,   368,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,    -1,    -1,   105,    -1,   107,   108,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,    -1,
     119,    -1,    -1,   122,   123,   124,    -1,   126,    -1,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,   148,
      -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,    -1,
      -1,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,   183,   184,    -1,   186,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,    -1,    -1,   197,    -1,
     199,    -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,
     209,   210,   211,    -1,    -1,   214,    -1,    -1,    -1,   218,
     219,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,   263,   264,   265,   266,   267,   268,
      -1,   270,   271,    -1,    -1,    -1,   275,   276,   277,   278,
      -1,    -1,   281,    -1,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,
      -1,   300,    -1,    -1,   303,   304,   305,    -1,    -1,   308,
      -1,   310,   311,    -1,    -1,   314,    -1,    -1,   317,    -1,
     319,   320,    -1,   322,    -1,    -1,   325,    -1,    -1,   328,
     329,    -1,   331,   332,    -1,    -1,    -1,   336,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,   350,    -1,    -1,   353,    -1,    -1,    -1,    -1,   358,
     359,    -1,    -1,     4,     5,   364,     7,     8,    -1,   368,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   108,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,    -1,   119,    -1,
      -1,   122,   123,   124,    -1,   126,    -1,    -1,    -1,   130,
     131,    -1,   133,    -1,   135,    -1,    -1,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   148,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,    -1,   199,    -1,
     201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
     211,    -1,    -1,   214,    -1,    -1,    -1,   218,   219,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,    -1,    -1,
     281,    -1,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,
      -1,    -1,   303,   304,   305,    -1,    -1,   308,    -1,   310,
     311,    -1,    -1,   314,    -1,    -1,   317,    -1,   319,   320,
      -1,   322,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,
     331,   332,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,
      -1,    -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,   368
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    10,    11,    21,    44,    53,    64,    89,    90,    91,
      99,   109,   117,   126,   158,   172,   182,   250,   251,   254,
     262,   268,   272,   279,   282,   296,   328,   337,   339,   342,
     386,   394,   395,   396,   397,   493,   508,   510,   512,   514,
     518,   519,   655,   661,   666,   669,   692,   698,   701,   703,
     709,   712,   715,   721,   723,   724,   772,   791,   793,   799,
     800,   801,   802,    71,   218,   223,   497,   310,   313,   790,
     794,   790,   364,   795,    38,    71,   314,   414,   497,   150,
     700,    38,    71,   314,   497,   660,   145,   147,   148,   178,
     291,   316,   321,   392,   662,   762,   763,   769,   785,   786,
     716,   667,    58,   241,   722,    73,   729,   268,   790,   670,
     795,   762,   803,   522,   524,   525,   226,   774,   704,   325,
     313,   702,   792,   150,   505,     4,     5,     7,     8,    13,
      17,    18,    19,    21,    26,    28,    29,    31,    35,    39,
      43,    45,    46,    48,    49,    51,    52,    53,    54,    55,
      56,    58,    59,    61,    66,    72,    73,    74,    77,    82,
      83,    93,    94,    98,   100,   101,   102,   105,   107,   108,
     110,   111,   113,   115,   116,   119,   122,   123,   124,   126,
     130,   131,   133,   135,   138,   144,   146,   151,   152,   165,
     167,   170,   173,   177,   183,   184,   186,   191,   192,   193,
     194,   197,   199,   201,   203,   204,   205,   206,   209,   210,
     211,   214,   218,   219,   221,   222,   223,   224,   233,   236,
     238,   239,   240,   241,   247,   252,   258,   262,   263,   264,
     265,   266,   267,   268,   270,   271,   275,   276,   277,   278,
     281,   283,   284,   285,   296,   297,   300,   303,   304,   305,
     308,   310,   311,   314,   317,   319,   320,   322,   325,   328,
     329,   331,   332,   336,   341,   348,   350,   353,   358,   359,
     364,   368,   760,   762,   766,   770,   771,   272,   386,   520,
       0,   109,   119,   391,   713,   759,   760,   766,   760,   505,
     511,   795,   513,    12,   796,   761,   766,   149,   415,   313,
     399,   132,   761,   149,   659,   153,   790,   785,   362,   663,
     135,   186,   297,   310,   717,   718,   790,   505,     5,    19,
      24,    25,    36,    37,    38,    42,    46,    48,    62,    63,
      67,    68,    69,    71,    75,    76,    77,    82,    84,    87,
     117,   118,   120,   121,   125,   136,   140,   144,   149,   158,
     159,   167,   172,   176,   187,   190,   194,   197,   198,   202,
     203,   212,   213,   215,   216,   234,   240,   253,   254,   261,
     267,   270,   298,   299,   304,   306,   307,   309,   316,   319,
     320,   321,   326,   327,   328,   330,   341,   344,   345,   346,
     348,   349,   354,   356,   357,   368,   378,   379,   384,   386,
     388,   391,   392,   541,   542,   543,   544,   547,   548,   549,
     550,   551,   556,   560,   745,   748,   752,   756,   757,   762,
     764,   766,   725,   803,   515,   160,   658,   672,   673,   759,
     323,   796,   523,     9,    95,   290,   291,   292,   293,   302,
     529,   530,   531,   532,   533,   773,    49,    63,    64,    72,
     113,   135,   152,   153,   169,   183,   239,   278,   310,   313,
     314,   358,   479,   705,   762,   763,   768,   780,   362,   509,
     658,   790,   759,   524,   520,   387,   766,   711,   710,   391,
     495,   313,   657,   658,   657,    39,   214,   214,   250,   797,
     212,   760,   415,   335,   480,   759,   118,   760,   766,   659,
     214,    56,   664,   297,   362,   390,   719,   672,   386,   386,
     547,   541,   570,   386,   386,   386,   386,   386,   386,   386,
     386,   540,   540,   540,   386,   386,   386,   386,   745,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   541,
     386,   722,   386,   386,   386,   386,   386,   386,   386,   541,
     386,   540,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   540,   386,   386,   386,   745,
     386,   386,   386,   540,   540,   540,   386,   386,   386,   386,
     386,   386,   547,   547,   547,   541,   815,   816,   766,   766,
     561,    12,   229,   366,   112,   134,   164,   174,   208,   370,
     371,   372,   545,    22,    96,   163,   179,   202,   212,   249,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      47,   373,   764,   386,   391,    56,   730,   516,   517,   759,
     673,   671,   268,   798,   797,   334,   804,   805,   380,   535,
     536,   537,   533,   775,   776,   777,   132,   163,   707,   386,
      71,   313,   179,   361,   708,   180,   639,   641,   706,   707,
     297,   310,   639,   707,   297,   297,   353,    59,   279,   387,
     805,   807,   808,   809,   518,    25,   140,   714,   746,   764,
     766,   766,    87,   425,   467,   759,   390,    39,   250,   118,
     400,   759,   153,   699,   220,   657,   259,   357,   665,   244,
     718,   657,   720,   668,   541,     9,    95,   566,   622,   360,
     572,   541,   387,   541,   569,   569,   541,   541,    95,   566,
     622,   387,   387,   541,   541,   541,   541,   756,   541,   815,
      78,    79,    80,    81,    82,   141,   142,   143,   144,   194,
     195,   196,   197,   203,   240,   269,   270,   359,   367,   368,
     617,   619,    95,   563,   541,   541,   541,   541,   617,   387,
     386,   541,    95,   566,   541,   541,    95,   566,   541,   541,
     541,   544,   541,   541,   541,   541,   541,   541,   566,   566,
     541,   541,    95,   566,   541,   131,   618,   619,   618,   541,
      30,   175,   324,   541,   541,   387,   387,   756,   566,   566,
     541,   541,   387,   390,   387,   272,   386,   812,   813,   541,
     391,   392,   562,   785,   541,   541,   541,   543,   121,   212,
     215,   327,   336,     9,    13,   543,   546,   544,   544,   386,
     547,   544,    22,   163,   179,   249,   544,   544,   544,   544,
     544,   159,   544,   159,   544,   544,   544,   544,   544,   762,
     763,   767,   547,   552,   766,   154,   390,   323,   272,   279,
     349,   350,   386,   408,   674,   677,   803,     9,    95,   811,
     390,   526,   541,   754,   766,   390,   135,   183,   221,   278,
     778,   779,   782,   783,   759,   380,   415,   759,   763,   541,
     187,   216,   330,   642,   643,   708,   766,   706,   708,   759,
     708,   708,   285,   694,   695,   756,   228,   635,   641,   810,
      47,   494,   658,    88,   255,   411,   412,   413,   425,   767,
     398,   766,   361,   623,   759,   185,   674,   390,   566,   387,
     567,   541,   104,   360,   571,    14,   387,   390,   387,   387,
     390,   557,   387,   380,   390,   390,   387,   387,   387,   387,
     387,   132,   559,   387,   390,   390,   390,   379,   541,   390,
     566,   387,   387,   387,   566,   387,   390,   387,   387,   163,
     387,   390,   390,   390,   390,   387,   387,   387,   390,   132,
     390,   566,   387,   387,   390,   390,   387,   132,   541,   132,
     541,   132,   541,   132,   387,   390,   387,   387,   387,   387,
     390,   387,   569,   591,   592,   593,   272,   386,   521,   334,
     817,   389,   766,   135,   183,   278,   781,   280,   121,   215,
     327,   336,   386,    12,   541,   815,   115,   627,   544,   386,
     547,   544,   541,   541,   537,   553,   554,   555,   391,   316,
     765,   517,   759,   409,   675,   386,   680,   685,   680,   387,
     408,   676,   753,   754,   756,   678,   806,   536,   132,   160,
     527,   528,   634,   635,   651,   538,   538,   391,   776,   325,
     786,   787,   392,   784,   706,   387,   766,   219,   390,   708,
     706,   390,   693,   280,   370,   683,    32,   639,   370,   684,
       6,    10,    18,    40,    51,    62,    88,    93,    94,    99,
     105,   110,   122,   127,   151,   201,   228,   251,   255,   266,
     417,   419,   420,   423,   424,   467,   496,   498,   499,   500,
     631,   767,    69,   763,   370,   390,   412,   390,   412,   370,
     179,   386,   401,   406,   416,   418,   419,   481,   482,   624,
     634,   656,   220,   690,   159,   541,   387,   541,   318,   541,
     541,   107,    24,    28,    42,    74,    77,    85,   161,   283,
     322,   338,   568,   541,   568,   569,   387,   159,   159,   665,
     541,   569,   541,   541,   541,   541,   387,   541,   387,   387,
     541,   541,   541,   541,   541,   569,   159,   541,   541,   541,
     387,   541,   541,   541,   132,   541,   132,   541,   132,   541,
     541,   541,   387,   529,   592,   521,   387,   811,   391,   391,
     391,   785,   541,   815,   543,   387,   390,   387,   547,    12,
     541,   815,   627,   617,   617,   541,   387,   390,   766,   726,
     529,   681,   682,   756,   686,   390,   386,   677,   387,   387,
     390,   804,   519,   272,   386,   388,   573,   574,   575,   576,
     577,   586,   587,   601,   652,   129,   185,   534,   651,   640,
     641,   528,    14,   539,   763,   766,   380,   766,   165,   683,
     392,   785,   708,   113,   358,   643,   643,   623,   695,   623,
      87,   541,   689,   636,    87,   465,   466,   767,    50,    60,
     153,   171,   432,   435,   436,   475,   477,   504,   504,   684,
     504,   684,   323,    69,   763,   169,   311,   128,   237,   477,
     504,   169,   370,   370,   311,   504,    32,    14,   323,   507,
     370,   370,   417,    41,    42,    47,   421,   390,   386,   391,
     431,   437,   758,   766,   370,   540,   121,   327,   412,   412,
      84,   125,   187,   216,   330,   646,   767,   759,   406,   407,
     408,   429,   430,   431,   432,   416,    14,   150,   254,   403,
     732,   390,   418,   343,   485,   220,   541,   180,   644,   101,
     541,   387,   541,   318,   386,   446,   446,   386,   444,   445,
     161,   161,   387,   387,   558,   541,   541,   387,   565,   635,
     390,   390,   387,   390,   387,   387,   387,   387,   390,   387,
     387,   541,   387,   129,   387,   387,   390,   390,   390,   387,
     541,   387,   541,   387,   541,   387,   387,   387,   535,   387,
     814,   391,   491,   387,   569,   543,   387,   390,   387,   538,
     555,   150,   254,   731,   535,   390,   683,   687,   688,   689,
     685,   679,   677,   753,   600,   766,    65,   155,   168,   176,
     207,   261,   302,   585,   623,   390,   759,   600,   100,   231,
     647,   648,   653,   339,   163,   763,   766,   391,   177,     9,
      24,    87,   220,   541,   789,   781,   683,   634,   541,   637,
     755,   490,   758,    44,   128,   237,   335,   434,   476,   433,
     434,   490,   758,   646,   758,   763,   466,   540,   171,   171,
     758,   758,   767,   763,   758,   632,   633,   756,   759,   121,
     327,    54,    55,    87,   102,   124,   247,   426,   427,   279,
     684,   684,   500,   429,   766,     7,   123,   506,   248,   433,
     469,   438,   391,   646,   768,   387,   387,   387,   390,    14,
      14,   386,   407,   418,    31,   138,   487,   759,   643,   691,
     617,   541,   216,   216,   387,   617,   617,   274,   564,   541,
     541,   569,   541,   617,   541,   541,   541,   541,   387,   387,
     387,   594,   812,   766,   387,   569,   539,   160,   410,   682,
     689,   387,   390,   807,   588,   595,   600,   573,   168,   168,
     230,   602,   168,   176,   261,   602,   586,   573,   137,   628,
     575,    14,   620,   621,   597,   598,   765,   765,   392,   649,
     650,   281,   380,   244,   252,   275,   788,   787,   541,   644,
     390,    15,    90,   638,   541,   171,   171,   477,   478,   490,
     482,    99,   279,   501,   490,   502,   390,   638,   466,    87,
     347,   422,   387,   766,   759,    23,    27,    28,    42,    74,
      77,    85,    97,   111,   124,   161,   167,   217,   246,   276,
     317,   321,   322,   348,   351,   352,   439,   441,   442,   443,
     766,   416,   402,   416,   430,   407,   404,   386,   171,   387,
     387,   387,   390,   387,   387,   746,   387,   387,   390,   387,
     387,   387,   387,   387,   387,   387,   428,   528,   640,   387,
     727,   428,   689,   334,   387,   634,   596,   389,   168,   586,
     602,   602,   168,   220,   220,   343,    32,   139,   625,   766,
     611,   612,   529,   654,   785,   390,   199,    52,   331,   244,
     683,   755,   490,   482,   386,    87,    87,   437,   439,   633,
     386,   470,   386,   448,   453,   454,    47,    87,   212,   215,
     237,   335,   355,   451,   452,   455,   456,   457,   468,    87,
     220,   451,   452,   461,   462,   463,   453,   444,   235,   386,
     445,   450,   440,   444,   448,   453,   444,   450,   455,   386,
     461,   453,   453,   386,    51,   464,   386,    18,    87,   276,
     451,   452,   458,   459,   460,   458,   391,   807,   403,   387,
     804,   488,   489,   766,   339,   216,   541,   534,   534,   313,
     811,   621,   640,   576,   573,   586,   168,   168,   573,   586,
     579,   578,   580,   629,   755,   626,   634,   609,   610,   535,
      49,   733,   650,   789,   638,   386,   386,   488,    77,   321,
     378,   379,   747,   748,   506,   464,   471,   766,   189,   472,
     216,   283,   338,   447,    87,   451,   452,    87,   451,   452,
     465,   747,   215,   171,   457,   171,    77,   213,   215,   321,
     745,   751,   752,   339,   463,   458,   450,   216,   386,   458,
     447,   458,   216,   216,   763,   216,    25,   140,   215,   378,
     379,   745,   749,   752,    87,   460,   766,   405,   387,   390,
     638,   386,   696,   697,   756,   387,   387,   759,   589,   220,
     582,   586,   586,   220,   584,   541,   541,   386,   363,   390,
     630,   638,   541,   640,   127,   150,   342,   604,   605,   608,
     599,   106,   114,   227,   315,   734,   735,   181,   736,   488,
     488,   387,   752,   752,   503,   387,   390,   133,   233,   284,
     220,   473,   387,   369,   449,   747,   121,   215,   327,   750,
     745,   540,   745,   213,   387,   492,   746,   449,   387,   387,
     387,   752,   752,   350,   807,    51,   170,   483,   484,   485,
     486,   489,   216,   390,   683,   728,   812,   581,   343,   583,
     343,   616,   766,   755,   477,   477,   605,   428,    32,    32,
     106,    32,   735,   295,   315,   737,   738,   387,   387,   483,
     506,   766,    89,   339,   540,   387,   390,   461,   453,   455,
     763,   684,   486,   638,   387,   697,   689,   733,   590,   541,
     386,   541,   386,   387,   390,   638,   129,   603,   603,   746,
     746,    32,   746,    32,    32,   738,   469,   483,    34,   214,
     257,   279,   474,   474,   455,   746,    84,   125,   140,   187,
     216,   330,   645,   736,   634,   616,   616,   766,   137,   168,
     228,   607,   606,   746,   746,   746,     4,    87,   215,   220,
     220,   150,   739,   640,   387,   387,    32,    32,   386,   386,
     339,    89,   216,   386,   741,   237,   613,   614,   615,   766,
     615,   474,   474,   181,   265,   740,   387,   392,   742,   743,
     756,   279,   744,   387,   390,   387,   785,   387,   390,   696,
     614,   743
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (session, YY_("syntax error: cannot back up")); \
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, session)
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
		  Type, Value, session); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, drizzled::Session *session)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, session)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    drizzled::Session *session;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (session);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, drizzled::Session *session)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, session)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    drizzled::Session *session;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, session);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, drizzled::Session *session)
#else
static void
yy_reduce_print (yyvsp, yyrule, session)
    YYSTYPE *yyvsp;
    int yyrule;
    drizzled::Session *session;
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
		       		       , session);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, session); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, drizzled::Session *session)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, session)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    drizzled::Session *session;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (session);

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
int yyparse (drizzled::Session *session);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


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
yyparse (drizzled::Session *session)
#else
int
yyparse (session)
    drizzled::Session *session;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 810 "drizzled/sql_yacc.yy"
    {
            if (!(YYSession->lex().select_lex.options & OPTION_FOUND_COMMENT))
            {
              my_message(ER_EMPTY_QUERY, ER(ER_EMPTY_QUERY), MYF(0));
              DRIZZLE_YYABORT;
            }
            else
            {
              YYSession->lex().statement= new statement::EmptyQuery(YYSession);
            }
          }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 821 "drizzled/sql_yacc.yy"
    {}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 863 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::catalog::Create(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 867 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateTable(YYSession, (yyvsp[(5) - (5)].table), (yyvsp[(2) - (5)].num));

            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(5) - (5)].table), NULL,
                                                     TL_OPTION_UPDATING,
                                                     TL_WRITE))
              DRIZZLE_YYABORT;
            Lex.col_list.clear();
          }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 877 "drizzled/sql_yacc.yy"
    {
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 881 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateIndex(YYSession);
          }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 885 "drizzled/sql_yacc.yy"
    {
            if (not Lex.current_select->add_table_to_list(Lex.session, (yyvsp[(9) - (13)].table),
                                                            NULL,
                                                            TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;

            parser::buildKey(&Lex, (yyvsp[(4) - (13)].key_type), (yyvsp[(6) - (13)].lex_str));
          }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 894 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateSchema(YYSession);
          }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 898 "drizzled/sql_yacc.yy"
    {
            Lex.name= (yyvsp[(4) - (6)].lex_str);
          }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 905 "drizzled/sql_yacc.yy"
    { }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 907 "drizzled/sql_yacc.yy"
    {
             Lex.current_select->set_braces(1);
           }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 910 "drizzled/sql_yacc.yy"
    {}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 912 "drizzled/sql_yacc.yy"
    { }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 914 "drizzled/sql_yacc.yy"
    { }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 916 "drizzled/sql_yacc.yy"
    { }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 920 "drizzled/sql_yacc.yy"
    {}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 922 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(0);
          }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 925 "drizzled/sql_yacc.yy"
    {}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 927 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(1);
          }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 930 "drizzled/sql_yacc.yy"
    {}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 935 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)(YYSession->lex().statement))->is_create_table_like= true;

            if (not YYSession->lex().select_lex.add_table_to_list(YYSession, (yyvsp[(2) - (2)].table), NULL, 0, TL_READ))
              DRIZZLE_YYABORT;
          }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 945 "drizzled/sql_yacc.yy"
    {
          }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 954 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= TL_READ;
            if (Lex.sql_command == SQLCOM_INSERT)
            {
              delete Lex.statement;
              Lex.statement= new statement::InsertSelect(YYSession);
            }
            else if (Lex.sql_command == SQLCOM_REPLACE)
            {
              delete Lex.statement;
              Lex.statement= new statement::ReplaceSelect(YYSession);
            }
            /*
              The following work only with the local list, the global list
              is created correctly in this case
            */
            Lex.current_select->table_list.save_and_clear(&Lex.save_list);
            init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 975 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 979 "drizzled/sql_yacc.yy"
    {
            /*
              The following work only with the local list, the global list
              is created correctly in this case
            */
            Lex.current_select->table_list.push_front(&Lex.save_list);
          }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 989 "drizzled/sql_yacc.yy"
    {}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 1004 "drizzled/sql_yacc.yy"
    {
            statement::CreateSchema *statement= (statement::CreateSchema *)Lex.statement;
            statement->schema_message.mutable_engine()->add_options()->set_name((yyvsp[(1) - (1)].lex_str).data());
          }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 1009 "drizzled/sql_yacc.yy"
    {
            parser::buildReplicationOption(&Lex, true);
          }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 1013 "drizzled/sql_yacc.yy"
    {
            parser::buildReplicationOption(&Lex, false);
          }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 1017 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaDefiner(&Lex, identifier::User((yyvsp[(2) - (2)].lex_str)));
          }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 1021 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaDefiner(&Lex, *session->user());
          }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 1025 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaOption(&Lex, (yyvsp[(1) - (3)].lex_str).data(), (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 1029 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaOption(&Lex, (yyvsp[(1) - (3)].lex_str).data(), (yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 1035 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 1036 "drizzled/sql_yacc.yy"
    { (yyval.num)= true; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1040 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1041 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; YYSession->lex().setExists(); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1064 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_engine()->set_name((yyvsp[(3) - (3)].lex_str).data());
          }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1068 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_options()->set_comment((yyvsp[(3) - (3)].lex_str).data());
          }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 1072 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_options()->set_auto_increment_value((yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 1076 "drizzled/sql_yacc.yy"
    {
	    message::set_is_replicated(*Lex.table(), true);
          }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1080 "drizzled/sql_yacc.yy"
    {
	    message::set_is_replicated(*Lex.table(), false);
          }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 1084 "drizzled/sql_yacc.yy"
    {
            message::set_definer(*Lex.table(), identifier::User((yyvsp[(2) - (2)].lex_str)));
          }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 1088 "drizzled/sql_yacc.yy"
    {
            message::set_definer(*Lex.table(), *session->user());
          }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1092 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, "ROW_FORMAT", (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1096 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, "FILE", (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 1100 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, (yyvsp[(1) - (3)].lex_str).data(), (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 1104 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, (yyvsp[(1) - (3)].lex_str).data(), (yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1112 "drizzled/sql_yacc.yy"
    {}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1113 "drizzled/sql_yacc.yy"
    {}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1117 "drizzled/sql_yacc.yy"
    { }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1118 "drizzled/sql_yacc.yy"
    { }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 1123 "drizzled/sql_yacc.yy"
    {
        }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 1128 "drizzled/sql_yacc.yy"
    {
            if (not parser::buildCollation(&Lex, (yyvsp[(4) - (4)].charset)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 1138 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateSchema *)Lex.statement)->schema_message.set_collation((yyvsp[(4) - (4)].charset)->name);
          }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 1144 "drizzled/sql_yacc.yy"
    {}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 1145 "drizzled/sql_yacc.yy"
    {}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 1146 "drizzled/sql_yacc.yy"
    {}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 1147 "drizzled/sql_yacc.yy"
    {}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 1148 "drizzled/sql_yacc.yy"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 1149 "drizzled/sql_yacc.yy"
    {}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 1154 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).assign(YYSession->mem.strdup((yyvsp[(1) - (1)].symbol).data(), (yyvsp[(1) - (1)].symbol).length), (yyvsp[(1) - (1)].symbol).length);
          }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 1160 "drizzled/sql_yacc.yy"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1177 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 1184 "drizzled/sql_yacc.yy"
    {
            parser::buildKey(&Lex, (yyvsp[(1) - (7)].key_type), (yyvsp[(2) - (7)].lex_str));
          }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1189 "drizzled/sql_yacc.yy"
    {
            parser::buildKey(&Lex, (yyvsp[(2) - (8)].key_type), (yyvsp[(3) - (8)].lex_str).data() ? (yyvsp[(3) - (8)].lex_str) : (yyvsp[(1) - (8)].lex_str));
          }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1193 "drizzled/sql_yacc.yy"
    {
            parser::buildForeignKey(&Lex, (yyvsp[(1) - (8)].lex_str).data() ? (yyvsp[(1) - (8)].lex_str) : (yyvsp[(4) - (8)].lex_str), (yyvsp[(8) - (8)].table));
          }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1197 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1201 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1216 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_string(); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1217 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1221 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1226 "drizzled/sql_yacc.yy"
    {
            parser::buildCreateFieldIdent(&Lex);
          }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1230 "drizzled/sql_yacc.yy"
    {
            statement::CreateTable *statement= (statement::CreateTable*)Lex.statement;

            if (Lex.field())
            {
              Lex.field()->set_name((yyvsp[(1) - (4)].lex_str).data());
            }

            if (add_field_to_list(Lex.session, (yyvsp[(1) - (4)].lex_str), (enum_field_types) (yyvsp[(3) - (4)].field_val),
                                  Lex.length, Lex.dec, Lex.type,
                                  statement->column_format,
                                  statement->default_value, statement->on_update_value,
                                  statement->comment,
                                  statement->change, &Lex.interval_list, Lex.charset))
              DRIZZLE_YYABORT;

            Lex.setField(NULL);
          }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1252 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=parser::buildTimestampColumn(&Lex, NULL);
          }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1256 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=parser::buildTimestampColumn(&Lex, (yyvsp[(3) - (5)].lex_str).data());
          }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1260 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_DATETIME;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::DATETIME);
          }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1267 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= (yyvsp[(1) - (2)].field_val);
          }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1271 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarcharColumn(&Lex, "1");
          }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1275 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarcharColumn(&Lex, (yyvsp[(3) - (5)].lex_str).data());
          }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1279 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_BLOB;
            Lex.length= NULL; /* use default length */

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::BLOB);
          }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1287 "drizzled/sql_yacc.yy"
    {
            Lex.interval_list.clear();
          }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1291 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_ENUM;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::ENUM);
          }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1298 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarbinaryColumn(&Lex, (yyvsp[(3) - (5)].lex_str).data());
          }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1302 "drizzled/sql_yacc.yy"
    {
            assert ((yyvsp[(1) - (2)].field_val) == DRIZZLE_TYPE_DOUBLE);
            (yyval.field_val)= parser::buildDoubleColumn(&Lex);
          }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1307 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_DATE;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::DATE);
          }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1314 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_TIME;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::TIME);
          }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1321 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildBlobColumn(&Lex);
          }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1325 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1329 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1333 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1337 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildUuidColumn(&Lex);
          }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1341 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildIPv6Column(&Lex);
          }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1345 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildBooleanColumn(&Lex);
          }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1349 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildSerialColumn(&Lex);
          }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1356 "drizzled/sql_yacc.yy"
    { }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1358 "drizzled/sql_yacc.yy"
    { }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1360 "drizzled/sql_yacc.yy"
    { }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 1365 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildIntegerColumn(&Lex, DRIZZLE_TYPE_LONG, ((yyvsp[(3) - (4)].boolean) or (yyvsp[(4) - (4)].boolean)));
          }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1369 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildIntegerColumn(&Lex, DRIZZLE_TYPE_LONGLONG, ((yyvsp[(3) - (4)].boolean) or (yyvsp[(4) - (4)].boolean)));
          }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 1376 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 1380 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 1384 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 1391 "drizzled/sql_yacc.yy"
    { Lex.dec=Lex.length= NULL; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 1393 "drizzled/sql_yacc.yy"
    { Lex.length=(yyvsp[(2) - (3)].lex_str).data(); Lex.dec= NULL; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 1395 "drizzled/sql_yacc.yy"
    {}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 1400 "drizzled/sql_yacc.yy"
    {
            Lex.length= (yyvsp[(2) - (5)].lex_str).data();
            Lex.dec= (yyvsp[(4) - (5)].lex_str).data();
          }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 1407 "drizzled/sql_yacc.yy"
    { Lex.length= NULL; /* use default length */ }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 1408 "drizzled/sql_yacc.yy"
    { Lex.length= (yyvsp[(2) - (3)].lex_str).data(); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 1412 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 1413 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 1414 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; Lex.type|= UNSIGNED_FLAG; }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 1418 "drizzled/sql_yacc.yy"
    { }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 1419 "drizzled/sql_yacc.yy"
    { }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 1423 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 1424 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; Lex.type|= UNSIGNED_FLAG; }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 1429 "drizzled/sql_yacc.yy"
    { Lex.dec=Lex.length= NULL; }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 1431 "drizzled/sql_yacc.yy"
    { Lex.length=Lex.dec= NULL; }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 1433 "drizzled/sql_yacc.yy"
    {}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 1438 "drizzled/sql_yacc.yy"
    {
            Lex.type&= ~ NOT_NULL_FLAG;
          }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 1442 "drizzled/sql_yacc.yy"
    {
            Lex.type|= NOT_NULL_FLAG;

            if (Lex.field())
            {
              Lex.field()->mutable_constraints()->set_is_notnull(true);
            }
          }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 1454 "drizzled/sql_yacc.yy"
    {
            parser::buildPrimaryOnColumn(&Lex);
          }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 1458 "drizzled/sql_yacc.yy"
    {
            parser::buildKeyOnColumn(&Lex);
          }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 1462 "drizzled/sql_yacc.yy"
    {
            parser::buildKeyOnColumn(&Lex);
          }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 1468 "drizzled/sql_yacc.yy"
    {}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 1470 "drizzled/sql_yacc.yy"
    { }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 1472 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value= (yyvsp[(3) - (3)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1479 "drizzled/sql_yacc.yy"
    { }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1483 "drizzled/sql_yacc.yy"
    { }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1485 "drizzled/sql_yacc.yy"
    { }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1487 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value= (yyvsp[(3) - (3)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 1494 "drizzled/sql_yacc.yy"
    { }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 1498 "drizzled/sql_yacc.yy"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 1499 "drizzled/sql_yacc.yy"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 1503 "drizzled/sql_yacc.yy"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 1509 "drizzled/sql_yacc.yy"
    { }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 1511 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 1518 "drizzled/sql_yacc.yy"
    {
            if (Lex.charset && !my_charset_same(Lex.charset,(yyvsp[(2) - (2)].charset)))
            {
              my_error(ER_COLLATION_CHARSET_MISMATCH, MYF(0),
                       (yyvsp[(2) - (2)].charset)->name,Lex.charset->csname);
              DRIZZLE_YYABORT;
            }
            else
            {
              Lex.charset=(yyvsp[(2) - (2)].charset);
            }
          }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 1531 "drizzled/sql_yacc.yy"
    { }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 1535 "drizzled/sql_yacc.yy"
    {}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 1536 "drizzled/sql_yacc.yy"
    {}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 1540 "drizzled/sql_yacc.yy"
    {}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 1546 "drizzled/sql_yacc.yy"
    { }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 1548 "drizzled/sql_yacc.yy"
    {
            parser::buildAutoOnColumn(&Lex);
          }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 1552 "drizzled/sql_yacc.yy"
    {
            (void)parser::buildSerialColumn(&Lex);
          }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 1556 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 1563 "drizzled/sql_yacc.yy"
    { }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 1567 "drizzled/sql_yacc.yy"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 1568 "drizzled/sql_yacc.yy"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1572 "drizzled/sql_yacc.yy"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1578 "drizzled/sql_yacc.yy"
    { }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 1580 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value= new Item_func_now_local();
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 1587 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1594 "drizzled/sql_yacc.yy"
    {
            ((statement::AlterTable*)Lex.statement)->on_update_value= new Item_func_now_local();
          }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 1598 "drizzled/sql_yacc.yy"
    { }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1602 "drizzled/sql_yacc.yy"
    { }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1604 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable*)Lex.statement;
            statement->comment= (yyvsp[(2) - (2)].lex_str);

            if (Lex.field())
              Lex.field()->set_comment((yyvsp[(2) - (2)].lex_str).data());
          }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1615 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.charset)=get_charset_by_name((yyvsp[(1) - (1)].lex_str).data())))
            {
              my_error(ER_UNKNOWN_COLLATION, MYF(0), (yyvsp[(1) - (1)].lex_str).data());
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1625 "drizzled/sql_yacc.yy"
    { (yyval.charset)=(yyvsp[(1) - (1)].charset); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1626 "drizzled/sql_yacc.yy"
    { (yyval.charset)=NULL; }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1630 "drizzled/sql_yacc.yy"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1631 "drizzled/sql_yacc.yy"
    {}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1641 "drizzled/sql_yacc.yy"
    {
            (yyval.table)=(yyvsp[(2) - (5)].table);
          }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1648 "drizzled/sql_yacc.yy"
    { Lex.ref_list.clear(); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1654 "drizzled/sql_yacc.yy"
    { Lex.ref_list.push_back(new Key_part_spec((yyvsp[(3) - (3)].lex_str), 0)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1656 "drizzled/sql_yacc.yy"
    {
            Lex.ref_list.clear();
            Lex.ref_list.push_back(new Key_part_spec((yyvsp[(1) - (1)].lex_str), 0));
          }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1664 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable*)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_UNDEFINED; }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1666 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable*)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_FULL; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1668 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable*)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_PARTIAL; }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1670 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable*)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_SIMPLE; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1675 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable*)Lex.statement)->fk_update_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
            ((statement::CreateTable*)Lex.statement)->fk_delete_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
          }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1680 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable*)Lex.statement)->fk_update_opt= (yyvsp[(3) - (3)].m_fk_option);
            ((statement::CreateTable*)Lex.statement)->fk_delete_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
          }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1685 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable*)Lex.statement)->fk_update_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
            ((statement::CreateTable*)Lex.statement)->fk_delete_opt= (yyvsp[(3) - (3)].m_fk_option);
          }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1691 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= (yyvsp[(3) - (6)].m_fk_option);
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= (yyvsp[(6) - (6)].m_fk_option);
          }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1697 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= (yyvsp[(6) - (6)].m_fk_option);
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= (yyvsp[(3) - (6)].m_fk_option);
          }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1704 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_RESTRICT; }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1705 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_CASCADE; }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1706 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_SET_NULL; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1707 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_NO_ACTION; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1708 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_SET_DEFAULT;  }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1712 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::MULTIPLE; }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1716 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::PRIMARY; }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1717 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::UNIQUE; }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1721 "drizzled/sql_yacc.yy"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1722 "drizzled/sql_yacc.yy"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1726 "drizzled/sql_yacc.yy"
    {}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1731 "drizzled/sql_yacc.yy"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1732 "drizzled/sql_yacc.yy"
    {}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1733 "drizzled/sql_yacc.yy"
    {}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1737 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::MULTIPLE; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1738 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::UNIQUE; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1742 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->key_create_info= default_key_create_info;
          }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1759 "drizzled/sql_yacc.yy"
    {}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1769 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.algorithm= (yyvsp[(2) - (2)].key_alg); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1775 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.block_size= (yyvsp[(3) - (3)].ulong_num); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1777 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.comment= (yyvsp[(2) - (2)].lex_str); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1781 "drizzled/sql_yacc.yy"
    { (yyval.key_alg)= HA_KEY_ALG_BTREE; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1782 "drizzled/sql_yacc.yy"
    { (yyval.key_alg)= HA_KEY_ALG_HASH; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1786 "drizzled/sql_yacc.yy"
    { Lex.col_list.push_back((yyvsp[(3) - (4)].key_part)); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1787 "drizzled/sql_yacc.yy"
    { Lex.col_list.push_back((yyvsp[(1) - (2)].key_part)); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1791 "drizzled/sql_yacc.yy"
    { (yyval.key_part)=new Key_part_spec((yyvsp[(1) - (1)].lex_str), 0); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1793 "drizzled/sql_yacc.yy"
    {
            int key_part_len= atoi((yyvsp[(3) - (4)].lex_str).data());
            if (!key_part_len)
            {
              my_error(ER_KEY_PART_0, MYF(0), (yyvsp[(1) - (4)].lex_str).data());
            }
            (yyval.key_part)=new Key_part_spec((yyvsp[(1) - (4)].lex_str), (uint) key_part_len);
          }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1804 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_string(); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1805 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1809 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_string(); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1810 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(2) - (2)].lex_str); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1814 "drizzled/sql_yacc.yy"
    { Lex.interval_list.push_back((yyvsp[(1) - (1)].string)); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1815 "drizzled/sql_yacc.yy"
    { Lex.interval_list.push_back((yyvsp[(3) - (3)].string)); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1823 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= new statement::AlterTable(YYSession, (yyvsp[(5) - (5)].table));
            Lex.statement= statement;
            Lex.duplicates= DUP_ERROR;
            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(5) - (5)].table), NULL, TL_OPTION_UPDATING))
            {
              DRIZZLE_YYABORT;
            }

            Lex.col_list.clear();
            Lex.select_lex.init_order();
            Lex.select_lex.db= ((TableList*) Lex.select_lex.table_list.first)->getSchemaName();
          }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1837 "drizzled/sql_yacc.yy"
    {}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1839 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::AlterSchema(YYSession);
          }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1843 "drizzled/sql_yacc.yy"
    {
            Lex.name= (yyvsp[(3) - (5)].lex_str);
            if (not Lex.name.data())
            {
              str_ref db = Lex.session->copy_db_to();
              if (db.empty())
                DRIZZLE_YYABORT;
              Lex.name.assign(db.data(), db.size());
            }
          }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1858 "drizzled/sql_yacc.yy"
    {
            message::AlterTable::AlterTableOperation *alter_operation;
            alter_operation= Lex.alter_table()->add_operations();
            alter_operation->set_operation(message::AlterTable::AlterTableOperation::DISCARD_TABLESPACE);
          }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1864 "drizzled/sql_yacc.yy"
    {
            message::AlterTable::AlterTableOperation *alter_operation;
            alter_operation= Lex.alter_table()->add_operations();
            alter_operation->set_operation(message::AlterTable::AlterTableOperation::IMPORT_TABLESPACE);
          }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1874 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_DEFAULT);
          }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1878 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_ONLINE);
          }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1882 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_OFFLINE);
          }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1894 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->change=0;
            statement->alter_info.flags.set(ALTER_ADD_COLUMN);
          }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1903 "drizzled/sql_yacc.yy"
    { }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1905 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ADD_INDEX);
          }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1911 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ADD_COLUMN);
            statement->alter_info.flags.set(ALTER_ADD_INDEX);
          }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1918 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            statement->change= (yyvsp[(3) - (3)].lex_str).data();
            statement->alter_info.flags.set(ALTER_CHANGE_COLUMN);
          }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1925 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            Lex.length= Lex.dec=0;
            Lex.type= 0;
            statement->default_value= statement->on_update_value= 0;
            statement->comment= null_lex_string();
            Lex.charset= NULL;
            statement->alter_info.flags.set(ALTER_CHANGE_COLUMN);
            statement->column_format= COLUMN_FORMAT_TYPE_DEFAULT;

            Lex.setField(NULL);
          }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1938 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            if (add_field_to_list(Lex.session, (yyvsp[(3) - (6)].lex_str),
                                  (enum enum_field_types) (yyvsp[(5) - (6)].field_val),
                                  Lex.length, Lex.dec, Lex.type,
                                  statement->column_format,
                                  statement->default_value,
                                  statement->on_update_value,
                                  statement->comment,
                                  (yyvsp[(3) - (6)].lex_str).data(), &Lex.interval_list, Lex.charset))
              DRIZZLE_YYABORT;
          }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1953 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_DROP_COLUMN);
            message::AlterTable::AlterTableOperation *operation;
            operation= Lex.alter_table()->add_operations();
            operation->set_operation(message::AlterTable::AlterTableOperation::DROP_COLUMN);
            operation->set_drop_name((yyvsp[(3) - (3)].lex_str).data());
          }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1963 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, (yyvsp[(4) - (4)].lex_str).data(), true);
          }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1967 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, "PRIMARY");
          }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1971 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, (yyvsp[(3) - (3)].lex_str).data());
          }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1975 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_KEYS_ONOFF);

            message::AlterTable::AlterKeysOnOff *alter_keys_operation;
            alter_keys_operation= Lex.alter_table()->mutable_alter_keys_onoff();
            alter_keys_operation->set_enable(false);
          }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1985 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_KEYS_ONOFF);
            message::AlterTable::AlterKeysOnOff *alter_keys_operation;
            alter_keys_operation= Lex.alter_table()->mutable_alter_keys_onoff();
            alter_keys_operation->set_enable(true);
          }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1994 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.alter_list.push_back(AlterColumn((yyvsp[(3) - (6)].lex_str).data(),(yyvsp[(6) - (6)].item)));
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 2001 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.alter_list.push_back(AlterColumn((yyvsp[(3) - (5)].lex_str).data(), NULL));
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 2008 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            Lex.select_lex.db= (yyvsp[(3) - (3)].table)->db.data();
            if (not Lex.select_lex.db)
            {
              str_ref db = Lex.session->copy_db_to();
              if (db.empty())
                DRIZZLE_YYABORT;
              Lex.select_lex.db = db.data();
            }

            if (check_table_name((yyvsp[(3) - (3)].table)->table))
            {
              my_error(ER_WRONG_TABLE_NAME, MYF(0), (yyvsp[(3) - (3)].table)->table.data());
              DRIZZLE_YYABORT;
            }

            Lex.name= (yyvsp[(3) - (3)].table)->table;
            statement->alter_info.flags.set(ALTER_RENAME);

            message::AlterTable::RenameTable *rename_operation;
            rename_operation= Lex.alter_table()->mutable_rename();
            rename_operation->set_to_schema(Lex.select_lex.db);
            rename_operation->set_to_name(Lex.name.data());
          }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 2034 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->create_info().table_charset=
            statement->create_info().default_table_charset= (yyvsp[(3) - (3)].charset);
            statement->create_info().used_fields|= (HA_CREATE_USED_CHARSET |
              HA_CREATE_USED_DEFAULT_CHARSET);
            statement->alter_info.flags.set(ALTER_CONVERT);
          }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 2044 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_OPTIONS);
          }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 2050 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_FORCE);
          }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 2056 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ORDER);
          }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 2064 "drizzled/sql_yacc.yy"
    {}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 2065 "drizzled/sql_yacc.yy"
    {}
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 2069 "drizzled/sql_yacc.yy"
    { Lex.ignore= 0;}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 2070 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1;}
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 2074 "drizzled/sql_yacc.yy"
    {}
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 2076 "drizzled/sql_yacc.yy"
    {
            parser::storeAlterColumnPosition(&Lex, (yyvsp[(2) - (2)].lex_str).data());
          }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 2080 "drizzled/sql_yacc.yy"
    {
            parser::storeAlterColumnPosition(&Lex, first_keyword);
          }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 2086 "drizzled/sql_yacc.yy"
    {}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 2087 "drizzled/sql_yacc.yy"
    {}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 2088 "drizzled/sql_yacc.yy"
    {}
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 2093 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::StartTransaction(YYSession, (start_transaction_option_t)(yyvsp[(3) - (3)].num));
          }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 2099 "drizzled/sql_yacc.yy"
    { (yyval.num) = START_TRANS_NO_OPTIONS; }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 2101 "drizzled/sql_yacc.yy"
    {
            (yyval.num)= START_TRANS_OPT_WITH_CONS_SNAPSHOT;
          }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 2108 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Analyze(YYSession);
          }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 2112 "drizzled/sql_yacc.yy"
    {}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 2117 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Check(YYSession);
          }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 2121 "drizzled/sql_yacc.yy"
    {}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 2126 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::RenameTable(YYSession);
          }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 2130 "drizzled/sql_yacc.yy"
    {}
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 2140 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sl= Lex.current_select;
            if (!sl->add_table_to_list(Lex.session, (yyvsp[(1) - (3)].table),NULL,TL_OPTION_UPDATING,
                                       TL_IGNORE) ||
                !sl->add_table_to_list(Lex.session, (yyvsp[(3) - (3)].table),NULL,TL_OPTION_UPDATING,
                                       TL_IGNORE))
              DRIZZLE_YYABORT;
          }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 2157 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Select(YYSession);
          }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 2170 "drizzled/sql_yacc.yy"
    {
            if (parser::setup_select_in_parentheses(YYSession, &Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 2180 "drizzled/sql_yacc.yy"
    {
            if (parser::setup_select_in_parentheses(YYSession, &Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 2189 "drizzled/sql_yacc.yy"
    {
            Select_Lex * sel= Lex.current_select;
            if (Lex.current_select->set_braces(0))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (sel->linkage == UNION_TYPE &&
                sel->master_unit()->first_select()->braces)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 2207 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if (sel->linkage != UNION_TYPE)
              init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 2214 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 2221 "drizzled/sql_yacc.yy"
    {}
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 2231 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->context.table_list=
              Lex.current_select->context.first_name_resolution_table=
                reinterpret_cast<TableList *>(Lex.current_select->table_list.first);
          }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 2241 "drizzled/sql_yacc.yy"
    { }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 2251 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_DISTINCT;

            if (Lex.current_select->options & SELECT_DISTINCT && Lex.current_select->options & SELECT_ALL)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "ALL", "DISTINCT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 2261 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_ALL;

            if (Lex.current_select->options & SELECT_DISTINCT && Lex.current_select->options & SELECT_ALL)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "ALL", "DISTINCT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 2274 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_SMALL_RESULT;

            if (Lex.current_select->options & SELECT_SMALL_RESULT && Lex.current_select->options & SELECT_BIG_RESULT)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "SELECT_SMALL_RESULT", "SELECT_SMALL_RESULT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 2284 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_BIG_RESULT;

            if (Lex.current_select->options & SELECT_SMALL_RESULT && Lex.current_select->options & SELECT_BIG_RESULT)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "SELECT_SMALL_RESULT", "SELECT_SMALL_RESULT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 2297 "drizzled/sql_yacc.yy"
    { Lex.current_select->options|= SELECT_STRAIGHT_JOIN; }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 2299 "drizzled/sql_yacc.yy"
    {
            if (check_simple_select(YYSession))
              DRIZZLE_YYABORT;
            Lex.current_select->options|= OPTION_BUFFER_RESULT;
          }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 2305 "drizzled/sql_yacc.yy"
    { }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 2307 "drizzled/sql_yacc.yy"
    { }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 2309 "drizzled/sql_yacc.yy"
    {
            if (check_simple_select(YYSession))
              DRIZZLE_YYABORT;
            Lex.current_select->options|= OPTION_FOUND_ROWS;
          }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 2319 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE);
          }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 2323 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->
              set_lock_for_tables(TL_READ_WITH_SHARED_LOCKS);
          }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 2333 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list( new Item_field(&YYSession->lex().current_select->context, NULL, NULL, "*"));
            YYSession->lex().current_select->with_wild++;
          }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 2341 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list((yyvsp[(2) - (3)].item));
          }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 2345 "drizzled/sql_yacc.yy"
    {
            assert((yyvsp[(1) - (4)].simple_string) < (yyvsp[(3) - (4)].simple_string));

            YYSession->add_item_to_list((yyvsp[(2) - (4)].item));

            if ((yyvsp[(4) - (4)].lex_str).data())
            {
              (yyvsp[(2) - (4)].item)->is_autogenerated_name= false;
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(4) - (4)].lex_str).data(), (yyvsp[(4) - (4)].lex_str).size(), system_charset_info);
            }
            else if (!(yyvsp[(2) - (4)].item)->name)
            {
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(1) - (4)].simple_string), (uint) ((yyvsp[(3) - (4)].simple_string) - (yyvsp[(1) - (4)].simple_string)), YYSession->charset());
            }
          }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 2363 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            (yyval.simple_string)= lip->get_cpp_tok_start();
          }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 2370 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            (yyval.simple_string)= lip->get_cpp_tok_end();
          }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 2377 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_string();}
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 2378 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 2379 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 2380 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 2381 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 2385 "drizzled/sql_yacc.yy"
    {}
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 2386 "drizzled/sql_yacc.yy"
    {}
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 2392 "drizzled/sql_yacc.yy"
    {
            /*
              Design notes:
              Do not use a manually maintained stack like session->Lex.xxx_list,
              but use the internal bison stack ($$, $1 and $3) instead.
              Using the bison stack is:
              - more robust to changes in the grammar,
              - guaranteed to be in sync with the parser state,
              - better for performances (no memory allocation).
            */
            Item_cond_or *item1;
            Item_cond_or *item3;
            if (is_cond_or((yyvsp[(1) - (3)].item)))
            {
              item1= (Item_cond_or*) (yyvsp[(1) - (3)].item);
              if (is_cond_or((yyvsp[(3) - (3)].item)))
              {
                item3= (Item_cond_or*) (yyvsp[(3) - (3)].item);
                /*
                  (X1 OR X2) OR (Y1 OR Y2) ==> OR (X1, X2, Y1, Y2)
                */
                item3->add_at_head(item1->argument_list());
                (yyval.item) = (yyvsp[(3) - (3)].item);
              }
              else
              {
                /*
                  (X1 OR X2) OR Y ==> OR (X1, X2, Y)
                */
                item1->add((yyvsp[(3) - (3)].item));
                (yyval.item) = (yyvsp[(1) - (3)].item);
              }
            }
            else if (is_cond_or((yyvsp[(3) - (3)].item)))
            {
              item3= (Item_cond_or*) (yyvsp[(3) - (3)].item);
              /*
                X OR (Y1 OR Y2) ==> OR (X, Y1, Y2)
              */
              item3->add_at_head((yyvsp[(1) - (3)].item));
              (yyval.item) = (yyvsp[(3) - (3)].item);
            }
            else
            {
              /* X OR Y */
              (yyval.item) = new (YYSession->mem_root) Item_cond_or((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
            }
          }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 2441 "drizzled/sql_yacc.yy"
    {
            /* XOR is a proprietary extension */
            (yyval.item) = new (YYSession->mem_root) Item_cond_xor((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 2446 "drizzled/sql_yacc.yy"
    {
            /* See comments in rule expr: expr or expr */
            Item_cond_and *item1;
            Item_cond_and *item3;
            if (is_cond_and((yyvsp[(1) - (3)].item)))
            {
              item1= (Item_cond_and*) (yyvsp[(1) - (3)].item);
              if (is_cond_and((yyvsp[(3) - (3)].item)))
              {
                item3= (Item_cond_and*) (yyvsp[(3) - (3)].item);
                /*
                  (X1 AND X2) AND (Y1 AND Y2) ==> AND (X1, X2, Y1, Y2)
                */
                item3->add_at_head(item1->argument_list());
                (yyval.item) = (yyvsp[(3) - (3)].item);
              }
              else
              {
                /*
                  (X1 AND X2) AND Y ==> AND (X1, X2, Y)
                */
                item1->add((yyvsp[(3) - (3)].item));
                (yyval.item) = (yyvsp[(1) - (3)].item);
              }
            }
            else if (is_cond_and((yyvsp[(3) - (3)].item)))
            {
              item3= (Item_cond_and*) (yyvsp[(3) - (3)].item);
              /*
                X AND (Y1 AND Y2) ==> AND (X, Y1, Y2)
              */
              item3->add_at_head((yyvsp[(1) - (3)].item));
              (yyval.item) = (yyvsp[(3) - (3)].item);
            }
            else
            {
              /* X AND Y */
              (yyval.item) = new (YYSession->mem_root) Item_cond_and((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
            }
          }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 2487 "drizzled/sql_yacc.yy"
    { (yyval.item)= negate_expression(YYSession, (yyvsp[(2) - (2)].item)); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 2489 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_istrue((yyvsp[(1) - (3)].item));
          }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 2493 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isnottrue((yyvsp[(1) - (4)].item));
          }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 2497 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isfalse((yyvsp[(1) - (3)].item));
          }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 2501 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isnotfalse((yyvsp[(1) - (4)].item));
          }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 2505 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnull((yyvsp[(1) - (3)].item));
          }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 2509 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnotnull((yyvsp[(1) - (4)].item));
          }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 2517 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnull((yyvsp[(1) - (3)].item));
          }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 2521 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnotnull((yyvsp[(1) - (4)].item));
          }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 2525 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_equal((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 2529 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= (*(yyvsp[(2) - (3)].boolfunc2creator))(0)->create((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 2533 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= all_any_subquery_creator((yyvsp[(1) - (6)].item), (yyvsp[(2) - (6)].boolfunc2creator), (yyvsp[(3) - (6)].num), (yyvsp[(5) - (6)].select_lex));
          }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 2541 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_in_subselect((yyvsp[(1) - (5)].item), (yyvsp[(4) - (5)].select_lex));
          }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 2545 "drizzled/sql_yacc.yy"
    {
            Item *item= new (YYSession->mem_root) Item_in_subselect((yyvsp[(1) - (6)].item), (yyvsp[(5) - (6)].select_lex));
            (yyval.item)= negate_expression(YYSession, item);
          }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 2550 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::handle_sql2003_note184_exception(YYSession, (yyvsp[(1) - (5)].item), true, (yyvsp[(4) - (5)].item));
          }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 2554 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(6) - (7)].item_list)->push_front((yyvsp[(4) - (7)].item));
            (yyvsp[(6) - (7)].item_list)->push_front((yyvsp[(1) - (7)].item));
            (yyval.item)= new (YYSession->mem_root) Item_func_in(*(yyvsp[(6) - (7)].item_list));
          }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 2560 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::handle_sql2003_note184_exception(YYSession, (yyvsp[(1) - (6)].item), false, (yyvsp[(5) - (6)].item));
          }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 2564 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(5) - (8)].item));
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(1) - (8)].item));
            Item_func_in *item = new (YYSession->mem_root) Item_func_in(*(yyvsp[(7) - (8)].item_list));
            item->negate();
            (yyval.item)= item;
          }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 2572 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_between((yyvsp[(1) - (5)].item),(yyvsp[(3) - (5)].item),(yyvsp[(5) - (5)].item));
          }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 2576 "drizzled/sql_yacc.yy"
    {
            Item_func_between *item= new Item_func_between((yyvsp[(1) - (6)].item),(yyvsp[(4) - (6)].item),(yyvsp[(6) - (6)].item));
            item->negate();
            (yyval.item)= item;
          }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 2582 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_like((yyvsp[(1) - (4)].item),(yyvsp[(3) - (4)].item),(yyvsp[(4) - (4)].item),Lex.escape_used);
          }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 2586 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_not(new Item_func_like((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].item), Lex.escape_used));
          }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 2590 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(1) - (3)].item));
            args->push_back((yyvsp[(3) - (3)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "regex", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 2600 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(1) - (4)].item));
            args->push_back((yyvsp[(4) - (4)].item));
            args->push_back(new (YYSession->mem_root) Item_int(1));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "regex", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 2615 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::Or((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 2619 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::And((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 2623 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::ShiftRight((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 2627 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::ShiftLeft((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 2631 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_plus((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 2635 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_minus((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 2639 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_date_add_interval((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].interval),0);
          }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 2643 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_date_add_interval((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].interval),1);
          }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 2647 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mul((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 2651 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_div(YYSession,(yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 2655 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mod((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 2659 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_int_div((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 2663 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mod((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 2667 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) function::bit::Xor((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 2674 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_eq_creator; }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 2675 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_ge_creator; }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 2676 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_gt_creator; }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 2677 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_le_creator; }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 2678 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_lt_creator; }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 2679 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_ne_creator; }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 2683 "drizzled/sql_yacc.yy"
    { (yyval.num) = 1; }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 2684 "drizzled/sql_yacc.yy"
    { (yyval.num) = 0; }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 2694 "drizzled/sql_yacc.yy"
    {
            Item *i1= new (YYSession->mem_root) Item_string((yyvsp[(3) - (3)].lex_str), YYSession->charset());
            (yyval.item)= new (YYSession->mem_root) Item_func_set_collation((yyvsp[(1) - (3)].item), i1);
          }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 2701 "drizzled/sql_yacc.yy"
    {
            Lex.setSumExprUsed();
          }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 2705 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_concat(*YYSession, (yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 2708 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (2)].item); }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 2710 "drizzled/sql_yacc.yy"
    {
	    (yyval.item)= new (YYSession->mem_root) Item_func_neg((yyvsp[(2) - (2)].item));
	  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 2714 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) function::bit::Neg((yyvsp[(2) - (2)].item));
          }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 2718 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_singlerow_subselect((yyvsp[(2) - (3)].select_lex));
          }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 2721 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (3)].item); }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 2723 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(4) - (5)].item_list)->push_front((yyvsp[(2) - (5)].item));
            (yyval.item)= new (YYSession->mem_root) Item_row(*(yyvsp[(4) - (5)].item_list));
          }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 2728 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(5) - (6)].item_list)->push_front((yyvsp[(3) - (6)].item));
            (yyval.item)= new (YYSession->mem_root) Item_row(*(yyvsp[(5) - (6)].item_list));
          }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 2733 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_exists_subselect((yyvsp[(3) - (4)].select_lex));
          }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 2736 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(3) - (4)].item); }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 2738 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(2) - (2)].item), ITEM_CAST_CHAR, NULL, NULL,
                                 &my_charset_bin);
          }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 2743 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].cast_type), Lex.length, Lex.dec,
                                 Lex.charset);
            if (!(yyval.item))
              DRIZZLE_YYABORT;
          }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 2750 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_case(* (yyvsp[(3) - (5)].item_list), (yyvsp[(2) - (5)].item), (yyvsp[(4) - (5)].item) ); }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 2752 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].cast_type), Lex.length, Lex.dec,
                                 Lex.charset);
            if (!(yyval.item))
              DRIZZLE_YYABORT;
          }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 2759 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_default_value(Lex.current_context(),
                                                         (yyvsp[(3) - (4)].item));
          }
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 2764 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_insert_value(Lex.current_context(),
                                                        (yyvsp[(3) - (4)].item));
          }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 2770 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(5) - (5)].item),(yyvsp[(2) - (5)].item),(yyvsp[(3) - (5)].interval),0); }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 2781 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_char(*(yyvsp[(3) - (4)].item_list)); }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 2783 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "user", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 2791 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_typecast((yyvsp[(3) - (4)].item)); }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 2793 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_dayofmonth((yyvsp[(3) - (4)].item)); }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 2795 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_hour((yyvsp[(3) - (4)].item)); }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 2797 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_insert(*YYSession, (yyvsp[(3) - (10)].item), (yyvsp[(5) - (10)].item), (yyvsp[(7) - (10)].item), (yyvsp[(9) - (10)].item)); }
    break;

  case 467:

/* Line 1806 of yacc.c  */
#line 2799 "drizzled/sql_yacc.yy"
    {
            List<Item> *list= new (YYSession->mem_root) List<Item>;
            list->push_front((yyvsp[(5) - (6)].item));
            list->push_front((yyvsp[(3) - (6)].item));
            Item_row *item= new (YYSession->mem_root) Item_row(*list);
            (yyval.item)= new (YYSession->mem_root) Item_func_interval(item);
          }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 2807 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(5) - (8)].item));
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(3) - (8)].item));
            Item_row *item= new (YYSession->mem_root) Item_row(*(yyvsp[(7) - (8)].item_list));
            (yyval.item)= new (YYSession->mem_root) Item_func_interval(item);
          }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 2814 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_left((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item)); }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 2816 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_minute((yyvsp[(3) - (4)].item)); }
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 2818 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_month((yyvsp[(3) - (4)].item)); }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 2820 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_right((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item)); }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 2822 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_second((yyvsp[(3) - (4)].item)); }
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 2824 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_datetime_typecast((yyvsp[(3) - (4)].item)); }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 2826 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(3) - (4)].item)); }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 2828 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_ltrim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 2830 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_rtrim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 478:

/* Line 1806 of yacc.c  */
#line 2832 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 2834 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_ltrim((yyvsp[(5) - (6)].item)); }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 2836 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_rtrim((yyvsp[(5) - (6)].item)); }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 2838 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(5) - (6)].item)); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 2840 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(5) - (6)].item),(yyvsp[(3) - (6)].item)); }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 2842 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "user", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 2850 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_year((yyvsp[(3) - (4)].item)); }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 2866 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item),
                                                             INTERVAL_DAY, 0);
          }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 2871 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item), (yyvsp[(6) - (8)].item), (yyvsp[(7) - (8)].interval), 0); }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 2873 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curtime_local();
            Lex.setCacheable(false);
          }
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 2878 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curdate_local();
            Lex.setCacheable(false);
          }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 2883 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item),(yyvsp[(6) - (8)].item),(yyvsp[(7) - (8)].interval),0); }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 2885 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item),(yyvsp[(6) - (8)].item),(yyvsp[(7) - (8)].interval),1); }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 2887 "drizzled/sql_yacc.yy"
    { (yyval.item)=new (YYSession->mem_root) Item_extract( (yyvsp[(3) - (6)].interval), (yyvsp[(5) - (6)].item)); }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 2889 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_local();
            Lex.setCacheable(false);
          }
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 2894 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_local((yyvsp[(3) - (4)].item));
            Lex.setCacheable(false);
          }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 2899 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_locate((yyvsp[(5) - (6)].item),(yyvsp[(3) - (6)].item)); }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 2901 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item),
                                                             INTERVAL_DAY, 1);
          }
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 2906 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item), (yyvsp[(6) - (8)].item), (yyvsp[(7) - (8)].interval), 1); }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 2908 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (8)].item));
            args->push_back((yyvsp[(5) - (8)].item));
            args->push_back((yyvsp[(7) - (8)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 2919 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 2929 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (8)].item));
            args->push_back((yyvsp[(5) - (8)].item));
            args->push_back((yyvsp[(7) - (8)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 2940 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 2950 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_sysdate_local();
            Lex.setCacheable(false);
          }
    break;

  case 502:

/* Line 1806 of yacc.c  */
#line 2955 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_sysdate_local((yyvsp[(3) - (4)].item));
            Lex.setCacheable(false);
          }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 2960 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(7) - (8)].item),(yyvsp[(5) - (8)].item),(yyvsp[(3) - (8)].interval_time_st),0); }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 2962 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_timestamp_diff((yyvsp[(5) - (8)].item),(yyvsp[(7) - (8)].item),(yyvsp[(3) - (8)].interval_time_st)); }
    break;

  case 505:

/* Line 1806 of yacc.c  */
#line 2964 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curtime_utc();
            Lex.setCacheable(false);
          }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 2969 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curdate_utc();
            Lex.setCacheable(false);
          }
    break;

  case 507:

/* Line 1806 of yacc.c  */
#line 2974 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_utc();
            Lex.setCacheable(false);
          }
    break;

  case 508:

/* Line 1806 of yacc.c  */
#line 2987 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_coalesce(* (yyvsp[(3) - (4)].item_list)); }
    break;

  case 509:

/* Line 1806 of yacc.c  */
#line 2989 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_collation((yyvsp[(3) - (4)].item)); }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 2991 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "database", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 511:

/* Line 1806 of yacc.c  */
#line 2999 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "catalog", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 512:

/* Line 1806 of yacc.c  */
#line 3007 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (5)].item));

            if ((yyvsp[(5) - (5)].boolean))
            {
              args->push_back(new (YYSession->mem_root) Item_int(1));
            }

            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "execute", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 513:

/* Line 1806 of yacc.c  */
#line 3022 "drizzled/sql_yacc.yy"
    { 
            (yyval.item)= new (YYSession->mem_root) Item_func_if((yyvsp[(3) - (8)].item),(yyvsp[(5) - (8)].item),(yyvsp[(7) - (8)].item));
          }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 3026 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(4) - (5)].item));

            if ((yyvsp[(2) - (5)].num))
            {
              args->push_back(new (YYSession->mem_root) Item_uint(1));
            }

            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "kill", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 3041 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_microsecond((yyvsp[(3) - (4)].item)); }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 3043 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_mod( (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item)); }
    break;

  case 517:

/* Line 1806 of yacc.c  */
#line 3045 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_quarter((yyvsp[(3) - (4)].item)); }
    break;

  case 518:

/* Line 1806 of yacc.c  */
#line 3047 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_repeat(*YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item)); }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 3049 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_replace(*YYSession, (yyvsp[(3) - (8)].item), (yyvsp[(5) - (8)].item), (yyvsp[(7) - (8)].item)); }
    break;

  case 520:

/* Line 1806 of yacc.c  */
#line 3051 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_round((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item),1); }
    break;

  case 521:

/* Line 1806 of yacc.c  */
#line 3053 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (4)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "wait", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 522:

/* Line 1806 of yacc.c  */
#line 3062 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "uuid", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 3070 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "ipv6", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 3078 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "wait", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 3099 "drizzled/sql_yacc.yy"
    {
            const plugin::Function *udf= plugin::Function::get(to_string((yyvsp[(1) - (2)].lex_str)));

            /* Temporary placing the result of getFunction in $3 */
            (yyval.udf)= udf;
          }
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 3106 "drizzled/sql_yacc.yy"
    {
            Item *item= NULL;

            /*
              Implementation note:
              names are resolved with the following order:
              - MySQL native functions,
              - User Defined Functions,
              - Stored Functions (assuming the current <use> database)

              This will be revised with WL#2128 (SQL PATH)
            */
            if (Create_func* builder= find_native_function_builder((yyvsp[(1) - (5)].lex_str)))
            {
              item= builder->create(YYSession, (yyvsp[(1) - (5)].lex_str), (yyvsp[(4) - (5)].item_list));
            }
            else if (const plugin::Function* udf= (yyvsp[(3) - (5)].udf)) /* Retrieving the result of service::Function::get */
            {
	          item= Create_udf_func::s_singleton.create(YYSession, udf, (yyvsp[(4) - (5)].item_list));
            } 
			else 
			{
              /* fix for bug 250065, from Andrew Garner <muzazzi@gmail.com> */
              my_error(ER_SP_DOES_NOT_EXIST, MYF(0), "FUNCTION", (yyvsp[(1) - (5)].lex_str).data());
            }

            if (not ((yyval.item)= item))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 527:

/* Line 1806 of yacc.c  */
#line 3141 "drizzled/sql_yacc.yy"
    { (yyval.item_list)= NULL; }
    break;

  case 528:

/* Line 1806 of yacc.c  */
#line 3142 "drizzled/sql_yacc.yy"
    { (yyval.item_list)= (yyvsp[(1) - (1)].item_list); }
    break;

  case 529:

/* Line 1806 of yacc.c  */
#line 3147 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new (YYSession->mem_root) List<Item>;
            (yyval.item_list)->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 530:

/* Line 1806 of yacc.c  */
#line 3152 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].item_list)->push_back((yyvsp[(3) - (3)].item));
            (yyval.item_list)= (yyvsp[(1) - (3)].item_list);
          }
    break;

  case 531:

/* Line 1806 of yacc.c  */
#line 3160 "drizzled/sql_yacc.yy"
    {
            /*
             Use Item::name as a storage for the attribute value of user
             defined function argument. It is safe to use Item::name
             because the syntax will not allow having an explicit name here.
             See WL#1017 re. udf attributes.
            */
            if ((yyvsp[(4) - (4)].lex_str).data())
            {
              (yyvsp[(2) - (4)].item)->is_autogenerated_name= false;
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(4) - (4)].lex_str).data(), (yyvsp[(4) - (4)].lex_str).size(), system_charset_info);
            }
            else
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(1) - (4)].simple_string), (uint) ((yyvsp[(3) - (4)].simple_string) - (yyvsp[(1) - (4)].simple_string)), YYSession->charset());
            (yyval.item)= (yyvsp[(2) - (4)].item);
          }
    break;

  case 532:

/* Line 1806 of yacc.c  */
#line 3180 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_avg((yyvsp[(3) - (4)].item)); }
    break;

  case 533:

/* Line 1806 of yacc.c  */
#line 3182 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_avg_distinct((yyvsp[(4) - (5)].item)); }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 3184 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count(new Item_int(0, 1)); }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 3186 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count((yyvsp[(3) - (4)].item)); }
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 3188 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr++; }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 3190 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr--; }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 3192 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count_distinct(* (yyvsp[(5) - (7)].item_list)); }
    break;

  case 539:

/* Line 1806 of yacc.c  */
#line 3194 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_min((yyvsp[(3) - (4)].item)); }
    break;

  case 540:

/* Line 1806 of yacc.c  */
#line 3201 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_min((yyvsp[(4) - (5)].item)); }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 3203 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_max((yyvsp[(3) - (4)].item)); }
    break;

  case 542:

/* Line 1806 of yacc.c  */
#line 3205 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_max((yyvsp[(4) - (5)].item)); }
    break;

  case 543:

/* Line 1806 of yacc.c  */
#line 3207 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_std((yyvsp[(3) - (4)].item), 0); }
    break;

  case 544:

/* Line 1806 of yacc.c  */
#line 3209 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_variance((yyvsp[(3) - (4)].item), 0); }
    break;

  case 545:

/* Line 1806 of yacc.c  */
#line 3211 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_std((yyvsp[(3) - (4)].item), 1); }
    break;

  case 546:

/* Line 1806 of yacc.c  */
#line 3213 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_variance((yyvsp[(3) - (4)].item), 1); }
    break;

  case 547:

/* Line 1806 of yacc.c  */
#line 3215 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_sum((yyvsp[(3) - (4)].item)); }
    break;

  case 548:

/* Line 1806 of yacc.c  */
#line 3217 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_sum_distinct((yyvsp[(4) - (5)].item)); }
    break;

  case 549:

/* Line 1806 of yacc.c  */
#line 3219 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr++; }
    break;

  case 550:

/* Line 1806 of yacc.c  */
#line 3223 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->in_sum_expr--;
            (yyval.item)=new Item_func_group_concat(Lex.current_context(), (yyvsp[(3) - (8)].num), (yyvsp[(5) - (8)].item_list),
                                          sel->gorder_list, (yyvsp[(7) - (8)].string));
            (yyvsp[(5) - (8)].item_list)->clear();
          }
    break;

  case 551:

/* Line 1806 of yacc.c  */
#line 3234 "drizzled/sql_yacc.yy"
    { }
    break;

  case 552:

/* Line 1806 of yacc.c  */
#line 3236 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= (yyvsp[(3) - (3)].item);
          }
    break;

  case 553:

/* Line 1806 of yacc.c  */
#line 3243 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_set_user_var((yyvsp[(1) - (3)].lex_str), (yyvsp[(3) - (3)].item));
            Lex.setCacheable(false);
          }
    break;

  case 554:

/* Line 1806 of yacc.c  */
#line 3248 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_get_user_var(*YYSession, (yyvsp[(1) - (1)].lex_str));
            Lex.setCacheable(false);
          }
    break;

  case 555:

/* Line 1806 of yacc.c  */
#line 3253 "drizzled/sql_yacc.yy"
    {
            /* disallow "SELECT @@global.global.variable" */
            if ((yyvsp[(3) - (4)].lex_str).data() && (yyvsp[(4) - (4)].lex_str).data() && parser::check_reserved_words((yyvsp[(3) - (4)].lex_str)))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (!((yyval.item)= get_system_var(YYSession, (yyvsp[(2) - (4)].var_type), (yyvsp[(3) - (4)].lex_str), (yyvsp[(4) - (4)].lex_str))))
              DRIZZLE_YYABORT;
          }
    break;

  case 556:

/* Line 1806 of yacc.c  */
#line 3266 "drizzled/sql_yacc.yy"
    { (yyval.num) = false; }
    break;

  case 557:

/* Line 1806 of yacc.c  */
#line 3267 "drizzled/sql_yacc.yy"
    { (yyval.num) = true; }
    break;

  case 558:

/* Line 1806 of yacc.c  */
#line 3272 "drizzled/sql_yacc.yy"
    {
              (yyval.string)= new (YYSession->mem_root) String(",", 1, &my_charset_utf8_general_ci);
            }
    break;

  case 559:

/* Line 1806 of yacc.c  */
#line 3275 "drizzled/sql_yacc.yy"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 560:

/* Line 1806 of yacc.c  */
#line 3280 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->gorder_list = NULL;
          }
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 3284 "drizzled/sql_yacc.yy"
    {
            Select_Lex *select= Lex.current_select;
            select->gorder_list= (SQL_LIST*) memory::sql_memdup(&select->order_list, sizeof(SQL_LIST));
            select->order_list.clear();
          }
    break;

  case 562:

/* Line 1806 of yacc.c  */
#line 3293 "drizzled/sql_yacc.yy"
    {
            if (Lex.current_select->inc_in_sum_expr())
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 563:

/* Line 1806 of yacc.c  */
#line 3301 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->in_sum_expr--;
            (yyval.item)= (yyvsp[(3) - (3)].item);
          }
    break;

  case 564:

/* Line 1806 of yacc.c  */
#line 3309 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_CHAR; Lex.charset= &my_charset_bin; Lex.dec= 0; }
    break;

  case 565:

/* Line 1806 of yacc.c  */
#line 3311 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_BOOLEAN; Lex.charset= &my_charset_bin; Lex.dec= 0; }
    break;

  case 566:

/* Line 1806 of yacc.c  */
#line 3313 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 567:

/* Line 1806 of yacc.c  */
#line 3315 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 568:

/* Line 1806 of yacc.c  */
#line 3317 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 569:

/* Line 1806 of yacc.c  */
#line 3319 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_UNSIGNED; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 570:

/* Line 1806 of yacc.c  */
#line 3321 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_UNSIGNED; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 571:

/* Line 1806 of yacc.c  */
#line 3323 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_CHAR; Lex.dec= 0; }
    break;

  case 572:

/* Line 1806 of yacc.c  */
#line 3325 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DATE; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 573:

/* Line 1806 of yacc.c  */
#line 3327 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_TIME; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 574:

/* Line 1806 of yacc.c  */
#line 3329 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DATETIME; Lex.charset= NULL; Lex.dec=Lex.length= NULL; }
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 3331 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DECIMAL; Lex.charset= NULL; }
    break;

  case 576:

/* Line 1806 of yacc.c  */
#line 3336 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new (YYSession->mem_root) List<Item>;
            (yyval.item_list)->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 577:

/* Line 1806 of yacc.c  */
#line 3341 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].item_list)->push_back((yyvsp[(3) - (3)].item));
            (yyval.item_list)= (yyvsp[(1) - (3)].item_list);
          }
    break;

  case 578:

/* Line 1806 of yacc.c  */
#line 3348 "drizzled/sql_yacc.yy"
    { (yyval.item)= NULL; }
    break;

  case 579:

/* Line 1806 of yacc.c  */
#line 3349 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item); }
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 3353 "drizzled/sql_yacc.yy"
    { (yyval.item)= NULL; }
    break;

  case 581:

/* Line 1806 of yacc.c  */
#line 3354 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (2)].item); }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 3359 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new List<Item>;
            (yyval.item_list)->push_back((yyvsp[(2) - (4)].item));
            (yyval.item_list)->push_back((yyvsp[(4) - (4)].item));
          }
    break;

  case 583:

/* Line 1806 of yacc.c  */
#line 3365 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (5)].item_list)->push_back((yyvsp[(3) - (5)].item));
            (yyvsp[(1) - (5)].item_list)->push_back((yyvsp[(5) - (5)].item));
            (yyval.item_list)= (yyvsp[(1) - (5)].item_list);
          }
    break;

  case 584:

/* Line 1806 of yacc.c  */
#line 3375 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 3377 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->nest_last_join(Lex.session)))
              DRIZZLE_YYABORT;
          }
    break;

  case 586:

/* Line 1806 of yacc.c  */
#line 3384 "drizzled/sql_yacc.yy"
    { DRIZZLE_YYABORT_UNLESS((yyval.table_list)=(yyvsp[(1) - (1)].table_list)); }
    break;

  case 587:

/* Line 1806 of yacc.c  */
#line 3395 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 588:

/* Line 1806 of yacc.c  */
#line 3396 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(3) - (4)].table_list); }
    break;

  case 589:

/* Line 1806 of yacc.c  */
#line 3402 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 590:

/* Line 1806 of yacc.c  */
#line 3404 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list)));
          }
    break;

  case 591:

/* Line 1806 of yacc.c  */
#line 3424 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list)));
            Lex.is_cross= false;
          }
    break;

  case 592:

/* Line 1806 of yacc.c  */
#line 3429 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list))); (yyvsp[(3) - (3)].table_list)->straight=1;
          }
    break;

  case 593:

/* Line 1806 of yacc.c  */
#line 3434 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
            DRIZZLE_YYABORT_UNLESS( not Lex.is_cross );
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (4)].table_list), *(yyvsp[(3) - (4)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 594:

/* Line 1806 of yacc.c  */
#line 3442 "drizzled/sql_yacc.yy"
    {
            add_join_on((yyvsp[(3) - (6)].table_list),(yyvsp[(6) - (6)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 595:

/* Line 1806 of yacc.c  */
#line 3449 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (4)].table_list), *(yyvsp[(3) - (4)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 596:

/* Line 1806 of yacc.c  */
#line 3456 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(3) - (6)].table_list)->straight=1;
            add_join_on((yyvsp[(3) - (6)].table_list),(yyvsp[(6) - (6)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 597:

/* Line 1806 of yacc.c  */
#line 3464 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
          }
    break;

  case 598:

/* Line 1806 of yacc.c  */
#line 3468 "drizzled/sql_yacc.yy"
    { add_join_natural((yyvsp[(1) - (8)].table_list),(yyvsp[(3) - (8)].table_list),(yyvsp[(7) - (8)].string_list),Lex.current_select); (yyval.table_list)=(yyvsp[(3) - (8)].table_list); }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 3470 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && ((yyval.table_list)=(yyvsp[(4) - (4)].table_list)));
            add_join_natural((yyvsp[(1) - (4)].table_list),(yyvsp[(4) - (4)].table_list),NULL,Lex.current_select);
          }
    break;

  case 600:

/* Line 1806 of yacc.c  */
#line 3478 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(5) - (6)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (6)].table_list), *(yyvsp[(5) - (6)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 601:

/* Line 1806 of yacc.c  */
#line 3485 "drizzled/sql_yacc.yy"
    {
            add_join_on((yyvsp[(5) - (8)].table_list),(yyvsp[(8) - (8)].item));
            Lex.pop_context();
            (yyvsp[(5) - (8)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(5) - (8)].table_list);
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 3493 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (5)].table_list) && (yyvsp[(5) - (5)].table_list));
          }
    break;

  case 603:

/* Line 1806 of yacc.c  */
#line 3497 "drizzled/sql_yacc.yy"
    {
            add_join_natural((yyvsp[(1) - (10)].table_list),(yyvsp[(5) - (10)].table_list),(yyvsp[(9) - (10)].string_list),Lex.current_select);
            (yyvsp[(5) - (10)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(5) - (10)].table_list);
          }
    break;

  case 604:

/* Line 1806 of yacc.c  */
#line 3503 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(6) - (6)].table_list));
            add_join_natural((yyvsp[(1) - (6)].table_list),(yyvsp[(6) - (6)].table_list),NULL,Lex.current_select);
            (yyvsp[(6) - (6)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(6) - (6)].table_list);
          }
    break;

  case 605:

/* Line 1806 of yacc.c  */
#line 3513 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(5) - (6)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (6)].table_list), *(yyvsp[(5) - (6)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 606:

/* Line 1806 of yacc.c  */
#line 3520 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
            add_join_on((yyval.table_list), (yyvsp[(8) - (8)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 607:

/* Line 1806 of yacc.c  */
#line 3528 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (5)].table_list) && (yyvsp[(5) - (5)].table_list));
          }
    break;

  case 608:

/* Line 1806 of yacc.c  */
#line 3532 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
            add_join_natural((yyval.table_list),(yyvsp[(5) - (10)].table_list),(yyvsp[(9) - (10)].string_list),Lex.current_select);
          }
    break;

  case 609:

/* Line 1806 of yacc.c  */
#line 3538 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(6) - (6)].table_list));
            add_join_natural((yyvsp[(6) - (6)].table_list),(yyvsp[(1) - (6)].table_list),NULL,Lex.current_select);
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
          }
    break;

  case 610:

/* Line 1806 of yacc.c  */
#line 3547 "drizzled/sql_yacc.yy"
    {}
    break;

  case 611:

/* Line 1806 of yacc.c  */
#line 3548 "drizzled/sql_yacc.yy"
    {}
    break;

  case 612:

/* Line 1806 of yacc.c  */
#line 3550 "drizzled/sql_yacc.yy"
    {
            Lex.is_cross= true;
            Lex.current_select->is_cross= true;
          }
    break;

  case 613:

/* Line 1806 of yacc.c  */
#line 3565 "drizzled/sql_yacc.yy"
    {
          }
    break;

  case 614:

/* Line 1806 of yacc.c  */
#line 3568 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->add_table_to_list(YYSession, (yyvsp[(2) - (4)].table), (yyvsp[(3) - (4)].lex_str_ptr),
                             0,
                             Lex.lock_option,
                             Lex.current_select->pop_index_hints())))
              DRIZZLE_YYABORT;
            Lex.current_select->add_joined_table((yyval.table_list));
          }
    break;

  case 615:

/* Line 1806 of yacc.c  */
#line 3577 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if ((yyvsp[(1) - (3)].num))
            {
              if (sel->set_braces(1))
              {
                parser::my_parse_error(YYSession->m_lip);
                DRIZZLE_YYABORT;
              }
              /* select in braces, can't contain global parameters */
              if (sel->master_unit()->fake_select_lex)
                sel->master_unit()->global_parameters=
                   sel->master_unit()->fake_select_lex;
            }
            (yyvsp[(2) - (3)].select_lex)->init_nested_join(*Lex.session);
            (yyval.table_list)= 0;
            /* incomplete derived tables return NULL, we must be
               nested in select_derived rule to be here. */
          }
    break;

  case 616:

/* Line 1806 of yacc.c  */
#line 3615 "drizzled/sql_yacc.yy"
    {
            /* Use $2 instead of Lex.current_select as derived table will
               alter value of Lex.current_select. */
            if (!((yyvsp[(3) - (5)].table_list) || (yyvsp[(5) - (5)].lex_str_ptr)) && (yyvsp[(2) - (5)].select_lex)->embedding &&
                !(yyvsp[(2) - (5)].select_lex)->embedding->getNestedJoin()->join_list.size())
            {
              /* we have a derived table ($3 == NULL) but no alias,
                 Since we are nested in further parentheses so we
                 can pass NULL to the outer level parentheses
                 Permits parsing of "((((select ...))) as xyz)" */
              (yyval.table_list)= 0;
            }
            else if (!(yyvsp[(3) - (5)].table_list))
            {
              /* Handle case of derived table, alias may be NULL if there
                 are no outer parentheses, add_table_to_list() will throw
                 error in this case */
              Select_Lex *sel= Lex.current_select;
              Select_Lex_Unit *unit= sel->master_unit();
              Lex.current_select= sel= unit->outer_select();
              if (!((yyval.table_list)= sel->add_table_to_list(Lex.session,
                                               new Table_ident(unit), (yyvsp[(5) - (5)].lex_str_ptr), 0,
                                               TL_READ)))

                DRIZZLE_YYABORT;
              sel->add_joined_table((yyval.table_list));
              Lex.pop_context();
            }
            else if (((yyvsp[(3) - (5)].table_list)->select_lex && (yyvsp[(3) - (5)].table_list)->select_lex->master_unit()->is_union()) || (yyvsp[(5) - (5)].lex_str_ptr))
            {
              /* simple nested joins cannot have aliases or unions */
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            else
              (yyval.table_list)= (yyvsp[(3) - (5)].table_list);
          }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 3659 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(3) - (3)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 619:

/* Line 1806 of yacc.c  */
#line 3664 "drizzled/sql_yacc.yy"
    {
            /*
              Remove from the name resolution context stack the context of the
              last select in the union.
             */
            Lex.pop_context();
          }
    break;

  case 621:

/* Line 1806 of yacc.c  */
#line 3677 "drizzled/sql_yacc.yy"
    {
            Select_Lex * sel= Lex.current_select;
            if (Lex.current_select->set_braces(0))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (sel->linkage == UNION_TYPE &&
                sel->master_unit()->first_select()->braces)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 3695 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if (sel->linkage != UNION_TYPE)
              init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 623:

/* Line 1806 of yacc.c  */
#line 3702 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 625:

/* Line 1806 of yacc.c  */
#line 3711 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (1)].select_lex)->init_nested_join(*Lex.session);
          }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 3715 "drizzled/sql_yacc.yy"
    {
            /* for normal joins, $3 != NULL and end_nested_join() != NULL,
               for derived tables, both must equal NULL */

            if (!((yyval.table_list)= (yyvsp[(1) - (3)].select_lex)->end_nested_join()) && (yyvsp[(3) - (3)].table_list))
              DRIZZLE_YYABORT;

            if (!(yyvsp[(3) - (3)].table_list) && (yyval.table_list))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 3731 "drizzled/sql_yacc.yy"
    {
            Lex.derived_tables|= DERIVED_SUBQUERY;
            if (not Lex.expr_allows_subselect)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (Lex.current_select->linkage == GLOBAL_OPTIONS_TYPE || new_select(&Lex, 1))
              DRIZZLE_YYABORT;
            init_select(&Lex);
            Lex.current_select->linkage= DERIVED_TABLE_TYPE;
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 628:

/* Line 1806 of yacc.c  */
#line 3745 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 3752 "drizzled/sql_yacc.yy"
    { (yyval.select_lex)= Lex.current_select; }
    break;

  case 631:

/* Line 1806 of yacc.c  */
#line 3757 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            TableList *embedding;
            if (!sel->embedding || sel->end_nested_join())
            {
              /* we are not in parentheses */
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            embedding= Lex.current_select->embedding;
            (yyval.num)= embedding &&
                !embedding->getNestedJoin()->join_list.size();
            /* return true if we are deeply nested */
          }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 3774 "drizzled/sql_yacc.yy"
    {}
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 3775 "drizzled/sql_yacc.yy"
    {}
    break;

  case 634:

/* Line 1806 of yacc.c  */
#line 3780 "drizzled/sql_yacc.yy"
    {
            (yyval.num)= INDEX_HINT_MASK_ALL;
          }
    break;

  case 635:

/* Line 1806 of yacc.c  */
#line 3783 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_JOIN;  }
    break;

  case 636:

/* Line 1806 of yacc.c  */
#line 3784 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_ORDER; }
    break;

  case 637:

/* Line 1806 of yacc.c  */
#line 3785 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_GROUP; }
    break;

  case 638:

/* Line 1806 of yacc.c  */
#line 3789 "drizzled/sql_yacc.yy"
    { (yyval.index_hint)= INDEX_HINT_FORCE; }
    break;

  case 639:

/* Line 1806 of yacc.c  */
#line 3790 "drizzled/sql_yacc.yy"
    { (yyval.index_hint)= INDEX_HINT_IGNORE; }
    break;

  case 640:

/* Line 1806 of yacc.c  */
#line 3795 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_index_hint_type((yyvsp[(1) - (3)].index_hint), (yyvsp[(3) - (3)].num));
          }
    break;

  case 642:

/* Line 1806 of yacc.c  */
#line 3800 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_index_hint_type(INDEX_HINT_USE, (yyvsp[(3) - (3)].num));
          }
    break;

  case 647:

/* Line 1806 of yacc.c  */
#line 3813 "drizzled/sql_yacc.yy"
    { Lex.current_select->alloc_index_hints(YYSession); }
    break;

  case 649:

/* Line 1806 of yacc.c  */
#line 3817 "drizzled/sql_yacc.yy"
    {  Lex.current_select->clear_index_hints(); }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 3822 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, NULL); }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 3823 "drizzled/sql_yacc.yy"
    {}
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 3828 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, (yyvsp[(1) - (1)].lex_str).data()); }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 3830 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, "PRIMARY"); }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 3840 "drizzled/sql_yacc.yy"
    {
            (yyval.string_list)= new List<String>;
            (yyval.string_list)->push_back(new (YYSession->mem_root) String((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size(), system_charset_info));
          }
    break;

  case 658:

/* Line 1806 of yacc.c  */
#line 3845 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].string_list)->push_back(new (YYSession->mem_root) String((yyvsp[(3) - (3)].lex_str).data(), (yyvsp[(3) - (3)].lex_str).size(), system_charset_info));
            (yyval.string_list)= (yyvsp[(1) - (3)].string_list);
          }
    break;

  case 659:

/* Line 1806 of yacc.c  */
#line 3852 "drizzled/sql_yacc.yy"
    {}
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 3853 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_HOUR; }
    break;

  case 661:

/* Line 1806 of yacc.c  */
#line 3854 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_MICROSECOND; }
    break;

  case 662:

/* Line 1806 of yacc.c  */
#line 3855 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_MINUTE; }
    break;

  case 663:

/* Line 1806 of yacc.c  */
#line 3856 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_SECOND; }
    break;

  case 664:

/* Line 1806 of yacc.c  */
#line 3857 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_MICROSECOND; }
    break;

  case 665:

/* Line 1806 of yacc.c  */
#line 3858 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_MINUTE; }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 3859 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_SECOND; }
    break;

  case 667:

/* Line 1806 of yacc.c  */
#line 3860 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_MINUTE_MICROSECOND; }
    break;

  case 668:

/* Line 1806 of yacc.c  */
#line 3861 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_MINUTE_SECOND; }
    break;

  case 669:

/* Line 1806 of yacc.c  */
#line 3862 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_SECOND_MICROSECOND; }
    break;

  case 670:

/* Line 1806 of yacc.c  */
#line 3863 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_YEAR_MONTH; }
    break;

  case 671:

/* Line 1806 of yacc.c  */
#line 3867 "drizzled/sql_yacc.yy"
    {}
    break;

  case 672:

/* Line 1806 of yacc.c  */
#line 3868 "drizzled/sql_yacc.yy"
    {
                                  (yyval.interval_time_st)=INTERVAL_MICROSECOND;
                                  /*
                                    FRAC_SECOND was mistakenly implemented with
                                    a wrong resolution. According to the ODBC
                                    standard it should be nanoseconds, not
                                    microseconds. Changing it to nanoseconds
                                    in MySQL would mean making TIMESTAMPDIFF
                                    and TIMESTAMPADD to return DECIMAL, since
                                    the return value would be too big for BIGINT
                                    Hence we just deprecate the incorrect
                                    implementation without changing its
                                    resolution.
                                  */
                                }
    break;

  case 673:

/* Line 1806 of yacc.c  */
#line 3886 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_DAY; }
    break;

  case 674:

/* Line 1806 of yacc.c  */
#line 3887 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_WEEK; }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 3888 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_HOUR; }
    break;

  case 676:

/* Line 1806 of yacc.c  */
#line 3889 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MINUTE; }
    break;

  case 677:

/* Line 1806 of yacc.c  */
#line 3890 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MONTH; }
    break;

  case 678:

/* Line 1806 of yacc.c  */
#line 3891 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_QUARTER; }
    break;

  case 679:

/* Line 1806 of yacc.c  */
#line 3892 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_SECOND; }
    break;

  case 680:

/* Line 1806 of yacc.c  */
#line 3893 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MICROSECOND; }
    break;

  case 681:

/* Line 1806 of yacc.c  */
#line 3894 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_YEAR; }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 3903 "drizzled/sql_yacc.yy"
    { (yyval.lex_str_ptr)=0; }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 3905 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str_ptr)= (drizzled::lex_string_t*) memory::sql_memdup(&(yyvsp[(2) - (2)].lex_str),sizeof(drizzled::lex_string_t));
          }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 3916 "drizzled/sql_yacc.yy"
    { Lex.current_select->where= 0; }
    break;

  case 689:

/* Line 1806 of yacc.c  */
#line 3918 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= IN_WHERE;
          }
    break;

  case 690:

/* Line 1806 of yacc.c  */
#line 3922 "drizzled/sql_yacc.yy"
    {
            Select_Lex *select= Lex.current_select;
            select->where= (yyvsp[(3) - (3)].item);
            select->parsing_place= NO_MATTER;
            if ((yyvsp[(3) - (3)].item))
              (yyvsp[(3) - (3)].item)->top_level_item();
          }
    break;

  case 692:

/* Line 1806 of yacc.c  */
#line 3934 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= IN_HAVING;
          }
    break;

  case 693:

/* Line 1806 of yacc.c  */
#line 3938 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->having= (yyvsp[(3) - (3)].item);
            sel->parsing_place= NO_MATTER;
            if ((yyvsp[(3) - (3)].item))
              (yyvsp[(3) - (3)].item)->top_level_item();
          }
    break;

  case 694:

/* Line 1806 of yacc.c  */
#line 3949 "drizzled/sql_yacc.yy"
    {
            Lex.escape_used= true;
            (yyval.item)= (yyvsp[(2) - (2)].item);
          }
    break;

  case 695:

/* Line 1806 of yacc.c  */
#line 3954 "drizzled/sql_yacc.yy"
    {
            Lex.escape_used= false;
            (yyval.item)= new Item_string(str_ref("\\"), &my_charset_utf8_general_ci);
          }
    break;

  case 698:

/* Line 1806 of yacc.c  */
#line 3971 "drizzled/sql_yacc.yy"
    { YYSession->add_group_to_list((yyvsp[(3) - (4)].item),(bool) (yyvsp[(4) - (4)].num)); }
    break;

  case 699:

/* Line 1806 of yacc.c  */
#line 3973 "drizzled/sql_yacc.yy"
    { YYSession->add_group_to_list((yyvsp[(1) - (2)].item),(bool) (yyvsp[(2) - (2)].num)); }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 3977 "drizzled/sql_yacc.yy"
    {}
    break;

  case 701:

/* Line 1806 of yacc.c  */
#line 3979 "drizzled/sql_yacc.yy"
    {
            /*
              'WITH ROLLUP' is needed for backward compatibility,
              and cause LALR(2) conflicts.
              This syntax is not standard.
              MySQL syntax: GROUP BY col1, col2, col3 WITH ROLLUP
              SQL-2003: GROUP BY ... ROLLUP(col1, col2, col3)
            */
            if (Lex.current_select->linkage == GLOBAL_OPTIONS_TYPE)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "WITH ROLLUP",
                       "global union parameters");
              DRIZZLE_YYABORT;
            }
            Lex.current_select->olap= ROLLUP_TYPE;
          }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 4012 "drizzled/sql_yacc.yy"
    {
            bool ascending= (yyvsp[(2) - (2)].num) == 1;
            YYSession->add_order_to_list((yyvsp[(1) - (2)].item), ascending);
          }
    break;

  case 708:

/* Line 1806 of yacc.c  */
#line 4029 "drizzled/sql_yacc.yy"
    {
            if (not parser::buildOrderBy(&Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 710:

/* Line 1806 of yacc.c  */
#line 4038 "drizzled/sql_yacc.yy"
    {
            YYSession->add_order_to_list((yyvsp[(3) - (4)].item),(bool) (yyvsp[(4) - (4)].num));
          }
    break;

  case 711:

/* Line 1806 of yacc.c  */
#line 4042 "drizzled/sql_yacc.yy"
    {
            YYSession->add_order_to_list((yyvsp[(1) - (2)].item),(bool) (yyvsp[(2) - (2)].num));
          }
    break;

  case 712:

/* Line 1806 of yacc.c  */
#line 4048 "drizzled/sql_yacc.yy"
    { (yyval.num) =  1; }
    break;

  case 713:

/* Line 1806 of yacc.c  */
#line 4049 "drizzled/sql_yacc.yy"
    { (yyval.num) =1; }
    break;

  case 714:

/* Line 1806 of yacc.c  */
#line 4050 "drizzled/sql_yacc.yy"
    { (yyval.num) =0; }
    break;

  case 715:

/* Line 1806 of yacc.c  */
#line 4055 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->offset_limit= 0;
            sel->select_limit= 0;
          }
    break;

  case 716:

/* Line 1806 of yacc.c  */
#line 4060 "drizzled/sql_yacc.yy"
    {}
    break;

  case 717:

/* Line 1806 of yacc.c  */
#line 4064 "drizzled/sql_yacc.yy"
    {}
    break;

  case 718:

/* Line 1806 of yacc.c  */
#line 4065 "drizzled/sql_yacc.yy"
    {}
    break;

  case 719:

/* Line 1806 of yacc.c  */
#line 4069 "drizzled/sql_yacc.yy"
    {}
    break;

  case 720:

/* Line 1806 of yacc.c  */
#line 4074 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(1) - (1)].item);
            sel->offset_limit= 0;
            sel->explicit_limit= 1;
          }
    break;

  case 721:

/* Line 1806 of yacc.c  */
#line 4081 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(3) - (3)].item);
            sel->offset_limit= (yyvsp[(1) - (3)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 722:

/* Line 1806 of yacc.c  */
#line 4088 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(1) - (3)].item);
            sel->offset_limit= (yyvsp[(3) - (3)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 723:

/* Line 1806 of yacc.c  */
#line 4097 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size()); }
    break;

  case 724:

/* Line 1806 of yacc.c  */
#line 4098 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size()); }
    break;

  case 725:

/* Line 1806 of yacc.c  */
#line 4099 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size()); }
    break;

  case 726:

/* Line 1806 of yacc.c  */
#line 4104 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->select_limit= 0;
          }
    break;

  case 727:

/* Line 1806 of yacc.c  */
#line 4108 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(2) - (2)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 728:

/* Line 1806 of yacc.c  */
#line 4116 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 729:

/* Line 1806 of yacc.c  */
#line 4117 "drizzled/sql_yacc.yy"
    { (yyval.ulong_num)= (unsigned long) strtol((yyvsp[(1) - (1)].lex_str).data(), NULL, 16); }
    break;

  case 730:

/* Line 1806 of yacc.c  */
#line 4118 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 731:

/* Line 1806 of yacc.c  */
#line 4119 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 732:

/* Line 1806 of yacc.c  */
#line 4120 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 733:

/* Line 1806 of yacc.c  */
#line 4121 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 734:

/* Line 1806 of yacc.c  */
#line 4125 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 735:

/* Line 1806 of yacc.c  */
#line 4126 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 736:

/* Line 1806 of yacc.c  */
#line 4127 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 737:

/* Line 1806 of yacc.c  */
#line 4128 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 738:

/* Line 1806 of yacc.c  */
#line 4129 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error); }
    break;

  case 739:

/* Line 1806 of yacc.c  */
#line 4133 "drizzled/sql_yacc.yy"
    {
            if (not Lex.describe)
			  Lex.result= new select_dumpvar;
          }
    break;

  case 740:

/* Line 1806 of yacc.c  */
#line 4138 "drizzled/sql_yacc.yy"
    {}
    break;

  case 742:

/* Line 1806 of yacc.c  */
#line 4143 "drizzled/sql_yacc.yy"
    {}
    break;

  case 743:

/* Line 1806 of yacc.c  */
#line 4148 "drizzled/sql_yacc.yy"
    {
            if (Lex.result)
            {
              ((select_dumpvar *)Lex.result)->var_list.push_back( new var((yyvsp[(2) - (2)].lex_str),0,0,(enum_field_types)0));
            }
            else
            {
              /*
                The parser won't create select_result instance only
                if it's an EXPLAIN.
              */
              assert(Lex.describe);
            }
          }
    break;

  case 744:

/* Line 1806 of yacc.c  */
#line 4166 "drizzled/sql_yacc.yy"
    { }
    break;

  case 746:

/* Line 1806 of yacc.c  */
#line 4172 "drizzled/sql_yacc.yy"
    {
            Lex.setCacheable(false);
            Lex.exchange= new file_exchange((yyvsp[(2) - (2)].lex_str).data(), 0);
            Lex.result= new select_export(Lex.exchange);
          }
    break;

  case 748:

/* Line 1806 of yacc.c  */
#line 4179 "drizzled/sql_yacc.yy"
    {
            if (not Lex.describe)
            {
              Lex.setCacheable(false);
              Lex.exchange= new file_exchange((yyvsp[(2) - (2)].lex_str).data(),1);
              Lex.result= new select_dump(Lex.exchange);
            }
          }
    break;

  case 749:

/* Line 1806 of yacc.c  */
#line 4188 "drizzled/sql_yacc.yy"
    {Lex.setCacheable(false);}
    break;

  case 750:

/* Line 1806 of yacc.c  */
#line 4197 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::catalog::Drop(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 751:

/* Line 1806 of yacc.c  */
#line 4201 "drizzled/sql_yacc.yy"
    {
            statement::DropTable *statement= new statement::DropTable(YYSession);
            Lex.statement= statement;
            statement->drop_temporary= (yyvsp[(2) - (5)].boolean);
            statement->drop_if_exists= (yyvsp[(4) - (5)].boolean);
          }
    break;

  case 752:

/* Line 1806 of yacc.c  */
#line 4207 "drizzled/sql_yacc.yy"
    {}
    break;

  case 753:

/* Line 1806 of yacc.c  */
#line 4208 "drizzled/sql_yacc.yy"
    {
            statement::DropIndex *statement= new statement::DropIndex(YYSession);
            Lex.statement= statement;
            statement->alter_info.flags.set(ALTER_DROP_INDEX);

            if (not Lex.current_select->add_table_to_list(Lex.session, (yyvsp[(6) - (7)].table), NULL,
                                                          TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;

            message::AlterTable::AlterTableOperation *operation;
            operation= Lex.alter_table()->add_operations();
            operation->set_operation(message::AlterTable::AlterTableOperation::DROP_KEY);
            operation->set_drop_name((yyvsp[(4) - (7)].lex_str).data());

          }
    break;

  case 754:

/* Line 1806 of yacc.c  */
#line 4224 "drizzled/sql_yacc.yy"
    {
            statement::DropSchema *statement= new statement::DropSchema(YYSession);
            Lex.statement= statement;
            statement->drop_if_exists=(yyvsp[(3) - (4)].boolean);
            Lex.name= (yyvsp[(4) - (4)].lex_str);
          }
    break;

  case 757:

/* Line 1806 of yacc.c  */
#line 4239 "drizzled/sql_yacc.yy"
    {
            if (!Lex.current_select->add_table_to_list(YYSession, (yyvsp[(1) - (1)].table), NULL, TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;
          }
    break;

  case 758:

/* Line 1806 of yacc.c  */
#line 4246 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 759:

/* Line 1806 of yacc.c  */
#line 4247 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 760:

/* Line 1806 of yacc.c  */
#line 4251 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 761:

/* Line 1806 of yacc.c  */
#line 4252 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 762:

/* Line 1806 of yacc.c  */
#line 4261 "drizzled/sql_yacc.yy"
    {
          Lex.statement= new statement::Execute(YYSession, (yyvsp[(2) - (5)].execute_string), (yyvsp[(3) - (5)].boolean), (yyvsp[(4) - (5)].boolean), (yyvsp[(5) - (5)].boolean));
        }
    break;

  case 763:

/* Line 1806 of yacc.c  */
#line 4268 "drizzled/sql_yacc.yy"
    {
            (yyval.execute_string).set((yyvsp[(1) - (1)].lex_str));
         }
    break;

  case 764:

/* Line 1806 of yacc.c  */
#line 4272 "drizzled/sql_yacc.yy"
    {
            (yyval.execute_string).set((yyvsp[(2) - (2)].lex_str), true);
        }
    break;

  case 765:

/* Line 1806 of yacc.c  */
#line 4277 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 766:

/* Line 1806 of yacc.c  */
#line 4278 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 767:

/* Line 1806 of yacc.c  */
#line 4282 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 768:

/* Line 1806 of yacc.c  */
#line 4283 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 769:

/* Line 1806 of yacc.c  */
#line 4287 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 770:

/* Line 1806 of yacc.c  */
#line 4288 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 771:

/* Line 1806 of yacc.c  */
#line 4297 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Insert(YYSession);
            Lex.duplicates= DUP_ERROR;
            init_select(&Lex);
            /* for subselects */
            Lex.lock_option= TL_READ;
          }
    break;

  case 772:

/* Line 1806 of yacc.c  */
#line 4305 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE_CONCURRENT_INSERT);
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 773:

/* Line 1806 of yacc.c  */
#line 4310 "drizzled/sql_yacc.yy"
    {}
    break;

  case 774:

/* Line 1806 of yacc.c  */
#line 4315 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Replace(YYSession);
            Lex.duplicates= DUP_REPLACE;
            init_select(&Lex);
          }
    break;

  case 775:

/* Line 1806 of yacc.c  */
#line 4321 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE_DEFAULT);
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 776:

/* Line 1806 of yacc.c  */
#line 4326 "drizzled/sql_yacc.yy"
    {}
    break;

  case 777:

/* Line 1806 of yacc.c  */
#line 4330 "drizzled/sql_yacc.yy"
    {}
    break;

  case 778:

/* Line 1806 of yacc.c  */
#line 4331 "drizzled/sql_yacc.yy"
    {}
    break;

  case 779:

/* Line 1806 of yacc.c  */
#line 4336 "drizzled/sql_yacc.yy"
    {
            Lex.field_list.clear();
            Lex.many_values.clear();
            Lex.insert_list=0;
          }
    break;

  case 780:

/* Line 1806 of yacc.c  */
#line 4343 "drizzled/sql_yacc.yy"
    {}
    break;

  case 781:

/* Line 1806 of yacc.c  */
#line 4344 "drizzled/sql_yacc.yy"
    {}
    break;

  case 782:

/* Line 1806 of yacc.c  */
#line 4345 "drizzled/sql_yacc.yy"
    {}
    break;

  case 783:

/* Line 1806 of yacc.c  */
#line 4347 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list = new List_item;
            Lex.many_values.push_back(Lex.insert_list);
          }
    break;

  case 785:

/* Line 1806 of yacc.c  */
#line 4355 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(3) - (3)].item)); }
    break;

  case 786:

/* Line 1806 of yacc.c  */
#line 4356 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(1) - (1)].item)); }
    break;

  case 787:

/* Line 1806 of yacc.c  */
#line 4360 "drizzled/sql_yacc.yy"
    {}
    break;

  case 788:

/* Line 1806 of yacc.c  */
#line 4361 "drizzled/sql_yacc.yy"
    {}
    break;

  case 789:

/* Line 1806 of yacc.c  */
#line 4363 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(0);
          }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 4366 "drizzled/sql_yacc.yy"
    {}
    break;

  case 791:

/* Line 1806 of yacc.c  */
#line 4368 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(1);
          }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 4371 "drizzled/sql_yacc.yy"
    {}
    break;

  case 797:

/* Line 1806 of yacc.c  */
#line 4386 "drizzled/sql_yacc.yy"
    {
            Lex.field_list.push_back((yyvsp[(1) - (3)].item));
            Lex.insert_list->push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 798:

/* Line 1806 of yacc.c  */
#line 4393 "drizzled/sql_yacc.yy"
    {}
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 4394 "drizzled/sql_yacc.yy"
    {}
    break;

  case 800:

/* Line 1806 of yacc.c  */
#line 4398 "drizzled/sql_yacc.yy"
    {}
    break;

  case 801:

/* Line 1806 of yacc.c  */
#line 4399 "drizzled/sql_yacc.yy"
    {}
    break;

  case 802:

/* Line 1806 of yacc.c  */
#line 4404 "drizzled/sql_yacc.yy"
    {
              Lex.insert_list = new List_item;
          }
    break;

  case 803:

/* Line 1806 of yacc.c  */
#line 4408 "drizzled/sql_yacc.yy"
    {
            Lex.many_values.push_back(Lex.insert_list);
          }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 4414 "drizzled/sql_yacc.yy"
    {}
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 4420 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list->push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 4424 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 4430 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item);}
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 4431 "drizzled/sql_yacc.yy"
    {(yyval.item)= new Item_default_value(Lex.current_context()); }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 4436 "drizzled/sql_yacc.yy"
    { Lex.duplicates= DUP_UPDATE; }
    break;

  case 813:

/* Line 1806 of yacc.c  */
#line 4444 "drizzled/sql_yacc.yy"
    {
            init_select(&Lex);
            Lex.statement= new statement::Update(YYSession);
            Lex.lock_option= TL_UNLOCK; /* Will be set later */
            Lex.duplicates= DUP_ERROR;
            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(3) - (5)].table), NULL,0))
              DRIZZLE_YYABORT;

            if (Lex.select_lex.get_table_list()->derived)
            {
              /* it is single table update and it is update of derived table */
              my_error(ER_NON_UPDATABLE_TABLE, MYF(0),
                       Lex.select_lex.get_table_list()->alias, "UPDATE");
              DRIZZLE_YYABORT;
            }
            /*
              In case of multi-update setting write lock for all tables may
              be too pessimistic. We will decrease lock level if possible in
              multi_update().
            */
            Lex.current_select->set_lock_for_tables(TL_WRITE_DEFAULT);
          }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 4466 "drizzled/sql_yacc.yy"
    {}
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 4476 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list((yyvsp[(1) - (3)].item));
			YYSession->add_value_to_list((yyvsp[(3) - (3)].item));
          }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 4489 "drizzled/sql_yacc.yy"
    {
			Lex.update_list.push_back((yyvsp[(1) - (3)].item));
            Lex.value_list.push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 4499 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Delete(YYSession);
            init_select(&Lex);
            Lex.lock_option= TL_WRITE_DEFAULT;
            Lex.select_lex.init_order();
            Lex.current_select->add_table_to_list(YYSession, (yyvsp[(4) - (4)].table), NULL, TL_OPTION_UPDATING, Lex.lock_option);
          }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 4507 "drizzled/sql_yacc.yy"
    {}
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 4511 "drizzled/sql_yacc.yy"
    { Lex.ignore= 0; }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 4512 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1; }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 4517 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Truncate(YYSession);
            Lex.select_lex.options= 0;
            Lex.select_lex.init_order();
          }
    break;

  case 828:

/* Line 1806 of yacc.c  */
#line 4533 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= TL_READ;
            init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 829:

/* Line 1806 of yacc.c  */
#line 4539 "drizzled/sql_yacc.yy"
    {}
    break;

  case 830:

/* Line 1806 of yacc.c  */
#line 4545 "drizzled/sql_yacc.yy"
    {
             if (not show::buildSchemas(YYSession))
				DRIZZLE_YYABORT;
           }
    break;

  case 831:

/* Line 1806 of yacc.c  */
#line 4551 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTables(YYSession, (yyvsp[(2) - (3)].simple_string)))
               DRIZZLE_YYABORT;
           }
    break;

  case 832:

/* Line 1806 of yacc.c  */
#line 4557 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTemporaryTables(YYSession))
               DRIZZLE_YYABORT;
           }
    break;

  case 833:

/* Line 1806 of yacc.c  */
#line 4563 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTableStatus(YYSession, (yyvsp[(3) - (4)].simple_string)))
               DRIZZLE_YYABORT;
           }
    break;

  case 834:

/* Line 1806 of yacc.c  */
#line 4569 "drizzled/sql_yacc.yy"
    {
             if (not show::buildColumns(YYSession, (yyvsp[(4) - (5)].simple_string), (yyvsp[(3) - (5)].table)))
               DRIZZLE_YYABORT;
           }
    break;

  case 835:

/* Line 1806 of yacc.c  */
#line 4575 "drizzled/sql_yacc.yy"
    {
             if (not show::buildIndex(YYSession, (yyvsp[(4) - (5)].simple_string), (yyvsp[(3) - (5)].table)))
               DRIZZLE_YYABORT;
           }
    break;

  case 836:

/* Line 1806 of yacc.c  */
#line 4580 "drizzled/sql_yacc.yy"
    {
            show::buildSelectWarning(YYSession);
          }
    break;

  case 837:

/* Line 1806 of yacc.c  */
#line 4584 "drizzled/sql_yacc.yy"
    {
            show::buildSelectError(YYSession);
          }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 4588 "drizzled/sql_yacc.yy"
    {
            show::buildWarnings(YYSession);
          }
    break;

  case 839:

/* Line 1806 of yacc.c  */
#line 4592 "drizzled/sql_yacc.yy"
    {
            show::buildErrors(YYSession);
          }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 4596 "drizzled/sql_yacc.yy"
    {
            if (not show::buildStatus(YYSession, (yyvsp[(1) - (3)].var_type)))
              DRIZZLE_YYABORT;
          }
    break;

  case 841:

/* Line 1806 of yacc.c  */
#line 4601 "drizzled/sql_yacc.yy"
    {
            if (not show::buildEngineStatus(YYSession, (yyvsp[(1) - (2)].lex_str)))
              DRIZZLE_YYABORT;
          }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 4606 "drizzled/sql_yacc.yy"
    {
            if (not show::buildCreateTable(YYSession, (yyvsp[(3) - (3)].table)))
              DRIZZLE_YYABORT;
          }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 4611 "drizzled/sql_yacc.yy"
    {
            if (not show::buildProcesslist(YYSession))
              DRIZZLE_YYABORT;
          }
    break;

  case 844:

/* Line 1806 of yacc.c  */
#line 4616 "drizzled/sql_yacc.yy"
    {
            if (not show::buildVariables(YYSession, (yyvsp[(1) - (3)].var_type)))
              DRIZZLE_YYABORT;
          }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 4621 "drizzled/sql_yacc.yy"
    {
            if (not show::buildCreateSchema(YYSession, (yyvsp[(4) - (4)].lex_str)))
              DRIZZLE_YYABORT;
          }
    break;

  case 846:

/* Line 1806 of yacc.c  */
#line 4627 "drizzled/sql_yacc.yy"
    { (yyval.simple_string)= 0; }
    break;

  case 847:

/* Line 1806 of yacc.c  */
#line 4628 "drizzled/sql_yacc.yy"
    { (yyval.simple_string)= (yyvsp[(2) - (2)].lex_str).data(); }
    break;

  case 851:

/* Line 1806 of yacc.c  */
#line 4639 "drizzled/sql_yacc.yy"
    {
            Lex.wild= new (YYSession->mem_root) String((yyvsp[(2) - (2)].lex_str).data(), (yyvsp[(2) - (2)].lex_str).size(), system_charset_info);
          }
    break;

  case 852:

/* Line 1806 of yacc.c  */
#line 4643 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->where= (yyvsp[(2) - (2)].item);
            if ((yyvsp[(2) - (2)].item))
              (yyvsp[(2) - (2)].item)->top_level_item();
          }
    break;

  case 853:

/* Line 1806 of yacc.c  */
#line 4653 "drizzled/sql_yacc.yy"
    {
            if (not show::buildDescribe(YYSession, (yyvsp[(2) - (2)].table)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 854:

/* Line 1806 of yacc.c  */
#line 4659 "drizzled/sql_yacc.yy"
    {}
    break;

  case 855:

/* Line 1806 of yacc.c  */
#line 4661 "drizzled/sql_yacc.yy"
    { Lex.describe|= DESCRIBE_NORMAL; }
    break;

  case 856:

/* Line 1806 of yacc.c  */
#line 4663 "drizzled/sql_yacc.yy"
    {
            Lex.select_lex.options|= SELECT_DESCRIBE;
          }
    break;

  case 859:

/* Line 1806 of yacc.c  */
#line 4674 "drizzled/sql_yacc.yy"
    {}
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 4675 "drizzled/sql_yacc.yy"
    { Lex.describe|= DESCRIBE_EXTENDED; }
    break;

  case 861:

/* Line 1806 of yacc.c  */
#line 4679 "drizzled/sql_yacc.yy"
    {}
    break;

  case 862:

/* Line 1806 of yacc.c  */
#line 4680 "drizzled/sql_yacc.yy"
    { Lex.wild= (yyvsp[(1) - (1)].string); }
    break;

  case 863:

/* Line 1806 of yacc.c  */
#line 4682 "drizzled/sql_yacc.yy"
    {
            Lex.wild= new (YYSession->mem_root) String((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size(), system_charset_info);
          }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 4692 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Flush(YYSession);
          }
    break;

  case 865:

/* Line 1806 of yacc.c  */
#line 4696 "drizzled/sql_yacc.yy"
    {}
    break;

  case 868:

/* Line 1806 of yacc.c  */
#line 4706 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushTables(true);
          }
    break;

  case 869:

/* Line 1806 of yacc.c  */
#line 4710 "drizzled/sql_yacc.yy"
    {}
    break;

  case 870:

/* Line 1806 of yacc.c  */
#line 4712 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushTablesWithReadLock(true);
          }
    break;

  case 871:

/* Line 1806 of yacc.c  */
#line 4717 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushLog(true);
          }
    break;

  case 872:

/* Line 1806 of yacc.c  */
#line 4722 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushStatus(true);
          }
    break;

  case 873:

/* Line 1806 of yacc.c  */
#line 4727 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushGlobalStatus(true);
          }
    break;

  case 874:

/* Line 1806 of yacc.c  */
#line 4734 "drizzled/sql_yacc.yy"
    {}
    break;

  case 875:

/* Line 1806 of yacc.c  */
#line 4735 "drizzled/sql_yacc.yy"
    {}
    break;

  case 876:

/* Line 1806 of yacc.c  */
#line 4742 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Kill(YYSession, (yyvsp[(3) - (3)].item), (yyvsp[(2) - (3)].num));
          }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 4748 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 878:

/* Line 1806 of yacc.c  */
#line 4749 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 879:

/* Line 1806 of yacc.c  */
#line 4750 "drizzled/sql_yacc.yy"
    { (yyval.num)= true; }
    break;

  case 880:

/* Line 1806 of yacc.c  */
#line 4757 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::ChangeSchema(YYSession);
            Lex.select_lex.db= (yyvsp[(2) - (2)].lex_str).data();
          }
    break;

  case 881:

/* Line 1806 of yacc.c  */
#line 4767 "drizzled/sql_yacc.yy"
    {
            statement::Load *statement= new statement::Load(YYSession);
            Lex.statement= statement;

            Lex_input_stream *lip= YYSession->m_lip;
            statement->fname_start= lip->get_ptr();
          }
    break;

  case 882:

/* Line 1806 of yacc.c  */
#line 4775 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= (yyvsp[(4) - (6)].lock_type);
            Lex.duplicates= DUP_ERROR;
            Lex.ignore= 0;
            Lex.exchange= new file_exchange((yyvsp[(6) - (6)].lex_str).data(), 0, (yyvsp[(2) - (6)].filetype));
          }
    break;

  case 883:

/* Line 1806 of yacc.c  */
#line 4782 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            ((statement::Load *)Lex.statement)->fname_end= lip->get_ptr();
          }
    break;

  case 884:

/* Line 1806 of yacc.c  */
#line 4787 "drizzled/sql_yacc.yy"
    {
            if (!Lex.current_select->add_table_to_list(YYSession,
                    (yyvsp[(12) - (12)].table), NULL, TL_OPTION_UPDATING,
                    Lex.lock_option))
              DRIZZLE_YYABORT;
            Lex.field_list.clear();
            Lex.update_list.clear();
            Lex.value_list.clear();
          }
    break;

  case 885:

/* Line 1806 of yacc.c  */
#line 4798 "drizzled/sql_yacc.yy"
    {}
    break;

  case 886:

/* Line 1806 of yacc.c  */
#line 4802 "drizzled/sql_yacc.yy"
    { (yyval.filetype)= FILETYPE_CSV; }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 4805 "drizzled/sql_yacc.yy"
    { (yyval.lock_type)= TL_WRITE_DEFAULT; }
    break;

  case 888:

/* Line 1806 of yacc.c  */
#line 4807 "drizzled/sql_yacc.yy"
    {
              (yyval.lock_type)= TL_WRITE_CONCURRENT_INSERT;
          }
    break;

  case 889:

/* Line 1806 of yacc.c  */
#line 4813 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 890:

/* Line 1806 of yacc.c  */
#line 4814 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 891:

/* Line 1806 of yacc.c  */
#line 4815 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1; }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 4819 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 893:

/* Line 1806 of yacc.c  */
#line 4820 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 894:

/* Line 1806 of yacc.c  */
#line 4821 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 895:

/* Line 1806 of yacc.c  */
#line 4822 "drizzled/sql_yacc.yy"
    { Lex.ignore= true; }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 4823 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 4824 "drizzled/sql_yacc.yy"
    { Lex.ignore= true; }
    break;

  case 902:

/* Line 1806 of yacc.c  */
#line 4839 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->field_term= (yyvsp[(3) - (3)].string);
          }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 4844 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->enclosed= (yyvsp[(4) - (4)].string);
            Lex.exchange->opt_enclosed= 1;
          }
    break;

  case 904:

/* Line 1806 of yacc.c  */
#line 4850 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->enclosed= (yyvsp[(3) - (3)].string);
          }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 4855 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->escaped= (yyvsp[(3) - (3)].string);
          }
    break;

  case 910:

/* Line 1806 of yacc.c  */
#line 4873 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->line_term= (yyvsp[(3) - (3)].string);
          }
    break;

  case 911:

/* Line 1806 of yacc.c  */
#line 4878 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->line_start= (yyvsp[(3) - (3)].string);
          }
    break;

  case 913:

/* Line 1806 of yacc.c  */
#line 4887 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->skip_lines= atol((yyvsp[(2) - (3)].lex_str).data());
          }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 4894 "drizzled/sql_yacc.yy"
    { }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 4895 "drizzled/sql_yacc.yy"
    { }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 4899 "drizzled/sql_yacc.yy"
    {}
    break;

  case 917:

/* Line 1806 of yacc.c  */
#line 4900 "drizzled/sql_yacc.yy"
    {}
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 4901 "drizzled/sql_yacc.yy"
    {}
    break;

  case 919:

/* Line 1806 of yacc.c  */
#line 4906 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(3) - (3)].item)); }
    break;

  case 920:

/* Line 1806 of yacc.c  */
#line 4908 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(1) - (1)].item)); }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 4912 "drizzled/sql_yacc.yy"
    {(yyval.item)= (yyvsp[(1) - (1)].item);}
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 4914 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_user_var_as_out_param((yyvsp[(2) - (2)].lex_str)); }
    break;

  case 923:

/* Line 1806 of yacc.c  */
#line 4918 "drizzled/sql_yacc.yy"
    {}
    break;

  case 924:

/* Line 1806 of yacc.c  */
#line 4919 "drizzled/sql_yacc.yy"
    {}
    break;

  case 925:

/* Line 1806 of yacc.c  */
#line 4926 "drizzled/sql_yacc.yy"
    {
          (yyval.item) = new Item_string((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size(), YYSession->variables.getCollation());
        }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 4930 "drizzled/sql_yacc.yy"
    {
            ((Item_string*) (yyvsp[(1) - (2)].item))->append((yyvsp[(2) - (2)].lex_str));
          }
    break;

  case 927:

/* Line 1806 of yacc.c  */
#line 4937 "drizzled/sql_yacc.yy"
    {
            (yyval.string)= new (YYSession->mem_root) String((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size(), YYSession->variables.getCollation());
          }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 4941 "drizzled/sql_yacc.yy"
    {
            Item *tmp= new Item_hex_string((yyvsp[(1) - (1)].lex_str));
            /*
              it is OK only emulate fix_fields, because we need only
              value of constant
            */
            (yyval.string)= tmp ? tmp->quick_fix_field(), tmp->val_str(NULL) : NULL;
          }
    break;

  case 929:

/* Line 1806 of yacc.c  */
#line 4950 "drizzled/sql_yacc.yy"
    {
            Item *tmp= new Item_bin_string((yyvsp[(1) - (1)].lex_str));
            /*
              it is OK only emulate fix_fields, because we need only
              value of constant
            */
            (yyval.string)= tmp ? tmp->quick_fix_field(), tmp->val_str(NULL) : NULL;
          }
    break;

  case 930:

/* Line 1806 of yacc.c  */
#line 4961 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 4962 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item_num); }
    break;

  case 932:

/* Line 1806 of yacc.c  */
#line 4964 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(2) - (2)].item_num)->max_length++;
            (yyval.item)= (yyvsp[(2) - (2)].item_num)->neg();
          }
    break;

  case 933:

/* Line 1806 of yacc.c  */
#line 4971 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 934:

/* Line 1806 of yacc.c  */
#line 4972 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 935:

/* Line 1806 of yacc.c  */
#line 4974 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 936:

/* Line 1806 of yacc.c  */
#line 4978 "drizzled/sql_yacc.yy"
    { (yyval.item)= new drizzled::item::False(); }
    break;

  case 937:

/* Line 1806 of yacc.c  */
#line 4979 "drizzled/sql_yacc.yy"
    { (yyval.item)= new drizzled::item::True(); }
    break;

  case 938:

/* Line 1806 of yacc.c  */
#line 4980 "drizzled/sql_yacc.yy"
    { (yyval.item) = new Item_hex_string((yyvsp[(1) - (1)].lex_str));}
    break;

  case 939:

/* Line 1806 of yacc.c  */
#line 4981 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_bin_string((yyvsp[(1) - (1)].lex_str)); }
    break;

  case 940:

/* Line 1806 of yacc.c  */
#line 4982 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 941:

/* Line 1806 of yacc.c  */
#line 4983 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 942:

/* Line 1806 of yacc.c  */
#line 4987 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 943:

/* Line 1806 of yacc.c  */
#line 4988 "drizzled/sql_yacc.yy"
    { (yyval.item) = new Item_hex_string((yyvsp[(1) - (1)].lex_str));}
    break;

  case 944:

/* Line 1806 of yacc.c  */
#line 4989 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_bin_string((yyvsp[(1) - (1)].lex_str)); }
    break;

  case 945:

/* Line 1806 of yacc.c  */
#line 4990 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 4992 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 4996 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item_num); }
    break;

  case 948:

/* Line 1806 of yacc.c  */
#line 4998 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(2) - (2)].item_num)->max_length++;
            (yyval.item)= (yyvsp[(2) - (2)].item_num)->neg();
          }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 5006 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 5011 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new drizzled::item::False();
          }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 5015 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new drizzled::item::True();
          }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 5021 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 5023 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 954:

/* Line 1806 of yacc.c  */
#line 5027 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 5028 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 956:

/* Line 1806 of yacc.c  */
#line 5029 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 5034 "drizzled/sql_yacc.yy"
    {
            int error;
            (yyval.item_num) = new Item_int((yyvsp[(1) - (1)].lex_str).data(), internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error), (yyvsp[(1) - (1)].lex_str).size());
          }
    break;

  case 958:

/* Line 1806 of yacc.c  */
#line 5039 "drizzled/sql_yacc.yy"
    {
            int error;
            (yyval.item_num) = new Item_int((yyvsp[(1) - (1)].lex_str).data(), internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).data(), NULL, &error), (yyvsp[(1) - (1)].lex_str).size());
          }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 5044 "drizzled/sql_yacc.yy"
    { (yyval.item_num) = new Item_uint((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size()); }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 5046 "drizzled/sql_yacc.yy"
    {
            (yyval.item_num)= new Item_decimal((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size(), YYSession->charset());
            if (YYSession->is_error())
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 5054 "drizzled/sql_yacc.yy"
    {
            (yyval.item_num) = new Item_float((yyvsp[(1) - (1)].lex_str).data(), (yyvsp[(1) - (1)].lex_str).size());
            if (YYSession->is_error())
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 5068 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 963:

/* Line 1806 of yacc.c  */
#line 5069 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 5074 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildTableWild(&Lex, null_lex_string(), (yyvsp[(1) - (3)].lex_str));
          }
    break;

  case 965:

/* Line 1806 of yacc.c  */
#line 5078 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildTableWild(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str));
          }
    break;

  case 966:

/* Line 1806 of yacc.c  */
#line 5084 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 967:

/* Line 1806 of yacc.c  */
#line 5089 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, null_lex_string(), null_lex_string(), (yyvsp[(1) - (1)].lex_str));
          }
    break;

  case 968:

/* Line 1806 of yacc.c  */
#line 5092 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item); }
    break;

  case 969:

/* Line 1806 of yacc.c  */
#line 5097 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, null_lex_string(), (yyvsp[(1) - (3)].lex_str), (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 5101 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, null_lex_string(), (yyvsp[(2) - (4)].lex_str), (yyvsp[(4) - (4)].lex_str));
          }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 5105 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str), (yyvsp[(5) - (5)].lex_str));
          }
    break;

  case 972:

/* Line 1806 of yacc.c  */
#line 5112 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 973:

/* Line 1806 of yacc.c  */
#line 5116 "drizzled/sql_yacc.yy"
    {
            if (not parser::checkFieldIdent(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str)))
              DRIZZLE_YYABORT;

            (yyval.lex_str)=(yyvsp[(5) - (5)].lex_str);
          }
    break;

  case 974:

/* Line 1806 of yacc.c  */
#line 5123 "drizzled/sql_yacc.yy"
    {
            if (not parser::checkFieldIdent(&Lex, null_lex_string(), (yyvsp[(1) - (3)].lex_str)))
              DRIZZLE_YYABORT;

            (yyval.lex_str)=(yyvsp[(3) - (3)].lex_str);
          }
    break;

  case 975:

/* Line 1806 of yacc.c  */
#line 5130 "drizzled/sql_yacc.yy"
    { /* For Delphi */
            (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str);
          }
    break;

  case 976:

/* Line 1806 of yacc.c  */
#line 5137 "drizzled/sql_yacc.yy"
    {
            (yyval.table)= new Table_ident((yyvsp[(1) - (1)].lex_str));
          }
    break;

  case 977:

/* Line 1806 of yacc.c  */
#line 5141 "drizzled/sql_yacc.yy"
    {
            (yyval.table)=new Table_ident((yyvsp[(1) - (3)].lex_str),(yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 978:

/* Line 1806 of yacc.c  */
#line 5145 "drizzled/sql_yacc.yy"
    { /* For Delphi */
          (yyval.table)= new Table_ident((yyvsp[(2) - (2)].lex_str));
        }
    break;

  case 981:

/* Line 1806 of yacc.c  */
#line 5160 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 982:

/* Line 1806 of yacc.c  */
#line 5164 "drizzled/sql_yacc.yy"
    {
            const charset_info_st * const cs= system_charset_info;
            int dummy_error;
            uint32_t wlen= cs->cset->well_formed_len(*cs, (yyvsp[(1) - (1)].lex_str), (yyvsp[(1) - (1)].lex_str).size(), &dummy_error);
            if (wlen < (yyvsp[(1) - (1)].lex_str).size())
            {
              my_error(ER_INVALID_CHARACTER_STRING, MYF(0), cs->csname, (yyvsp[(1) - (1)].lex_str).data() + wlen);
              DRIZZLE_YYABORT;
            }
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 983:

/* Line 1806 of yacc.c  */
#line 5179 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 984:

/* Line 1806 of yacc.c  */
#line 5186 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 985:

/* Line 1806 of yacc.c  */
#line 5193 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 5199 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 5201 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).assign(YYSession->mem.strdup((yyvsp[(1) - (1)].symbol).data(), (yyvsp[(1) - (1)].symbol).length), (yyvsp[(1) - (1)].symbol).length);
          }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 5207 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 5208 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 5212 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 5213 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 5217 "drizzled/sql_yacc.yy"
    {}
    break;

  case 993:

/* Line 1806 of yacc.c  */
#line 5218 "drizzled/sql_yacc.yy"
    {}
    break;

  case 994:

/* Line 1806 of yacc.c  */
#line 5219 "drizzled/sql_yacc.yy"
    {}
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 5224 "drizzled/sql_yacc.yy"
    {}
    break;

  case 996:

/* Line 1806 of yacc.c  */
#line 5225 "drizzled/sql_yacc.yy"
    {}
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 5226 "drizzled/sql_yacc.yy"
    {}
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 5227 "drizzled/sql_yacc.yy"
    {}
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 5228 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 5229 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 5230 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1002:

/* Line 1806 of yacc.c  */
#line 5231 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1003:

/* Line 1806 of yacc.c  */
#line 5232 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1004:

/* Line 1806 of yacc.c  */
#line 5233 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1005:

/* Line 1806 of yacc.c  */
#line 5234 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1006:

/* Line 1806 of yacc.c  */
#line 5235 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1007:

/* Line 1806 of yacc.c  */
#line 5236 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1008:

/* Line 1806 of yacc.c  */
#line 5237 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1009:

/* Line 1806 of yacc.c  */
#line 5238 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1010:

/* Line 1806 of yacc.c  */
#line 5239 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1011:

/* Line 1806 of yacc.c  */
#line 5240 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1012:

/* Line 1806 of yacc.c  */
#line 5241 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1013:

/* Line 1806 of yacc.c  */
#line 5242 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 5243 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1015:

/* Line 1806 of yacc.c  */
#line 5244 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1016:

/* Line 1806 of yacc.c  */
#line 5254 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 5255 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1018:

/* Line 1806 of yacc.c  */
#line 5256 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1019:

/* Line 1806 of yacc.c  */
#line 5257 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 5258 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1021:

/* Line 1806 of yacc.c  */
#line 5259 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1022:

/* Line 1806 of yacc.c  */
#line 5260 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1023:

/* Line 1806 of yacc.c  */
#line 5261 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1024:

/* Line 1806 of yacc.c  */
#line 5262 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 5263 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1026:

/* Line 1806 of yacc.c  */
#line 5264 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1027:

/* Line 1806 of yacc.c  */
#line 5265 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 5266 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 5267 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 5268 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1031:

/* Line 1806 of yacc.c  */
#line 5269 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 5270 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1033:

/* Line 1806 of yacc.c  */
#line 5271 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1034:

/* Line 1806 of yacc.c  */
#line 5272 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1035:

/* Line 1806 of yacc.c  */
#line 5273 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1036:

/* Line 1806 of yacc.c  */
#line 5274 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1037:

/* Line 1806 of yacc.c  */
#line 5275 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1038:

/* Line 1806 of yacc.c  */
#line 5276 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1039:

/* Line 1806 of yacc.c  */
#line 5277 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1040:

/* Line 1806 of yacc.c  */
#line 5278 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 5279 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 5280 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1043:

/* Line 1806 of yacc.c  */
#line 5281 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 5282 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 5283 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1046:

/* Line 1806 of yacc.c  */
#line 5284 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 5285 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 5286 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1049:

/* Line 1806 of yacc.c  */
#line 5287 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 5288 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 5289 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 5290 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1053:

/* Line 1806 of yacc.c  */
#line 5291 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 5292 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1055:

/* Line 1806 of yacc.c  */
#line 5293 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1056:

/* Line 1806 of yacc.c  */
#line 5294 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1057:

/* Line 1806 of yacc.c  */
#line 5295 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1058:

/* Line 1806 of yacc.c  */
#line 5296 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 5297 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1060:

/* Line 1806 of yacc.c  */
#line 5298 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1061:

/* Line 1806 of yacc.c  */
#line 5299 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1062:

/* Line 1806 of yacc.c  */
#line 5300 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1063:

/* Line 1806 of yacc.c  */
#line 5301 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1064:

/* Line 1806 of yacc.c  */
#line 5302 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1065:

/* Line 1806 of yacc.c  */
#line 5303 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1066:

/* Line 1806 of yacc.c  */
#line 5304 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1067:

/* Line 1806 of yacc.c  */
#line 5305 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1068:

/* Line 1806 of yacc.c  */
#line 5306 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 5307 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 5308 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 5309 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 5310 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 5311 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 5312 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 5313 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 5314 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 5315 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 5316 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 5317 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 5318 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 5319 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 5320 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 5321 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1084:

/* Line 1806 of yacc.c  */
#line 5322 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 5323 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 5324 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 5325 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1088:

/* Line 1806 of yacc.c  */
#line 5326 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1089:

/* Line 1806 of yacc.c  */
#line 5327 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 5328 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1091:

/* Line 1806 of yacc.c  */
#line 5329 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 5330 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1093:

/* Line 1806 of yacc.c  */
#line 5331 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1094:

/* Line 1806 of yacc.c  */
#line 5332 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1095:

/* Line 1806 of yacc.c  */
#line 5333 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1096:

/* Line 1806 of yacc.c  */
#line 5334 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 5335 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1098:

/* Line 1806 of yacc.c  */
#line 5336 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1099:

/* Line 1806 of yacc.c  */
#line 5337 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 5338 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 5339 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1102:

/* Line 1806 of yacc.c  */
#line 5340 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 5341 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 5342 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1105:

/* Line 1806 of yacc.c  */
#line 5343 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 5344 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1107:

/* Line 1806 of yacc.c  */
#line 5345 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1108:

/* Line 1806 of yacc.c  */
#line 5346 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 5347 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1110:

/* Line 1806 of yacc.c  */
#line 5348 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1111:

/* Line 1806 of yacc.c  */
#line 5349 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 5350 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 5351 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 5352 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 5353 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 5354 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 5355 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 5356 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1119:

/* Line 1806 of yacc.c  */
#line 5357 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 5358 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 5359 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1122:

/* Line 1806 of yacc.c  */
#line 5360 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 5361 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1124:

/* Line 1806 of yacc.c  */
#line 5362 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1125:

/* Line 1806 of yacc.c  */
#line 5363 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1126:

/* Line 1806 of yacc.c  */
#line 5364 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 5365 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1128:

/* Line 1806 of yacc.c  */
#line 5366 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 5367 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1130:

/* Line 1806 of yacc.c  */
#line 5368 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1131:

/* Line 1806 of yacc.c  */
#line 5369 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 5370 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1133:

/* Line 1806 of yacc.c  */
#line 5371 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1134:

/* Line 1806 of yacc.c  */
#line 5372 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 5373 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1136:

/* Line 1806 of yacc.c  */
#line 5374 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1137:

/* Line 1806 of yacc.c  */
#line 5375 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1138:

/* Line 1806 of yacc.c  */
#line 5376 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1139:

/* Line 1806 of yacc.c  */
#line 5377 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 5378 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 5379 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 5380 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1143:

/* Line 1806 of yacc.c  */
#line 5387 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::SetOption(YYSession);
          }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 5391 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1145:

/* Line 1806 of yacc.c  */
#line 5395 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1146:

/* Line 1806 of yacc.c  */
#line 5396 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 5405 "drizzled/sql_yacc.yy"
    { }
    break;

  case 1150:

/* Line 1806 of yacc.c  */
#line 5407 "drizzled/sql_yacc.yy"
    { }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 5411 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 5412 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 5413 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 5414 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 5418 "drizzled/sql_yacc.yy"
    { (yyval.num)= OPT_DEFAULT; }
    break;

  case 1156:

/* Line 1806 of yacc.c  */
#line 5419 "drizzled/sql_yacc.yy"
    { ((statement::SetOption *)Lex.statement)->one_shot_set= true; (yyval.num)= OPT_SESSION; }
    break;

  case 1157:

/* Line 1806 of yacc.c  */
#line 5423 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 5424 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1159:

/* Line 1806 of yacc.c  */
#line 5425 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1160:

/* Line 1806 of yacc.c  */
#line 5426 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 5430 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_DEFAULT; }
    break;

  case 1162:

/* Line 1806 of yacc.c  */
#line 5431 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 5432 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 5433 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 5443 "drizzled/sql_yacc.yy"
    {
            if ((yyvsp[(2) - (4)].variable).var)
            { /* System variable */
              if ((yyvsp[(1) - (4)].var_type))
              {
                Lex.option_type= (yyvsp[(1) - (4)].var_type);
              }
              Lex.var_list.push_back(SetVarPtr(new set_var(Lex.option_type, (yyvsp[(2) - (4)].variable).var, (yyvsp[(2) - (4)].variable).base_name, (yyvsp[(4) - (4)].item))));
            }
          }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 5454 "drizzled/sql_yacc.yy"
    {
            Lex.option_type= (yyvsp[(1) - (5)].var_type);
            Lex.var_list.push_back(SetVarPtr(new set_var(Lex.option_type, find_sys_var("tx_isolation"), str_ref(), new Item_int((int32_t) (yyvsp[(5) - (5)].tx_isolation)))));
          }
    break;

  case 1169:

/* Line 1806 of yacc.c  */
#line 5462 "drizzled/sql_yacc.yy"
    {
            Lex.var_list.push_back(SetVarPtr(new set_var_user(new Item_func_set_user_var((yyvsp[(2) - (4)].lex_str),(yyvsp[(4) - (4)].item)))));
          }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 5466 "drizzled/sql_yacc.yy"
    {
            Lex.var_list.push_back(SetVarPtr(new set_var((yyvsp[(3) - (6)].var_type), (yyvsp[(4) - (6)].variable).var, (yyvsp[(4) - (6)].variable).base_name, (yyvsp[(6) - (6)].item))));
          }
    break;

  case 1171:

/* Line 1806 of yacc.c  */
#line 5472 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 5473 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1173:

/* Line 1806 of yacc.c  */
#line 5474 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1174:

/* Line 1806 of yacc.c  */
#line 5479 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).assign(YYSession->mem.strdup((yyvsp[(1) - (1)].symbol).data(), (yyvsp[(1) - (1)].symbol).length), (yyvsp[(1) - (1)].symbol).length);
          }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 5482 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 1176:

/* Line 1806 of yacc.c  */
#line 5487 "drizzled/sql_yacc.yy"
    {
            /* We have to lookup here since local vars can shadow sysvars */
            {
              /* Not an SP local variable */
              sys_var *tmp= find_sys_var(to_string((yyvsp[(1) - (1)].lex_str)));
              if (not tmp)
                DRIZZLE_YYABORT;
              (yyval.variable).var= tmp;
              (yyval.variable).base_name= null_lex_string();
            }
          }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 5501 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_READ_UNCOMMITTED; }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 5502 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_READ_COMMITTED; }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 5503 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_REPEATABLE_READ; }
    break;

  case 1180:

/* Line 1806 of yacc.c  */
#line 5504 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_SERIALIZABLE; }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 5508 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 5509 "drizzled/sql_yacc.yy"
    { (yyval.item)=0; }
    break;

  case 1183:

/* Line 1806 of yacc.c  */
#line 5510 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string(str_ref("ON"), system_charset_info); }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 5511 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string(str_ref("ALL"), system_charset_info); }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 5512 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string(str_ref("binary"), system_charset_info); }
    break;

  case 1188:

/* Line 1806 of yacc.c  */
#line 5522 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::UnlockTables(YYSession);
          }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 5526 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 5531 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::StartTransaction(YYSession);
          }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 5534 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 5538 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1193:

/* Line 1806 of yacc.c  */
#line 5539 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1194:

/* Line 1806 of yacc.c  */
#line 5544 "drizzled/sql_yacc.yy"
    { (yyval.num)= (YYSession->variables.completion_type == 1); }
    break;

  case 1195:

/* Line 1806 of yacc.c  */
#line 5545 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1196:

/* Line 1806 of yacc.c  */
#line 5546 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1197:

/* Line 1806 of yacc.c  */
#line 5551 "drizzled/sql_yacc.yy"
    { (yyval.num)= (YYSession->variables.completion_type == 2); }
    break;

  case 1198:

/* Line 1806 of yacc.c  */
#line 5552 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1199:

/* Line 1806 of yacc.c  */
#line 5553 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1200:

/* Line 1806 of yacc.c  */
#line 5557 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1201:

/* Line 1806 of yacc.c  */
#line 5558 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1202:

/* Line 1806 of yacc.c  */
#line 5563 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Commit(YYSession, (yyvsp[(3) - (4)].num), (yyvsp[(4) - (4)].num));
          }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 5570 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Rollback(YYSession, (yyvsp[(3) - (4)].num), (yyvsp[(4) - (4)].num));
          }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 5574 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::RollbackToSavepoint(YYSession, (yyvsp[(5) - (5)].lex_str));
          }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 5581 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Savepoint(YYSession, (yyvsp[(2) - (2)].lex_str));
          }
    break;

  case 1206:

/* Line 1806 of yacc.c  */
#line 5588 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::ReleaseSavepoint(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 5603 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1210:

/* Line 1806 of yacc.c  */
#line 5609 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(2) - (2)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 1211:

/* Line 1806 of yacc.c  */
#line 5614 "drizzled/sql_yacc.yy"
    {
            /*
              Remove from the name resolution context stack the context of the
              last select in the union.
            */
            Lex.pop_context();
          }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 5624 "drizzled/sql_yacc.yy"
    { (yyval.num)= 0; }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 5625 "drizzled/sql_yacc.yy"
    { (yyval.num)= 1; }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 5626 "drizzled/sql_yacc.yy"
    { (yyval.num)= 1; }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 5630 "drizzled/sql_yacc.yy"
    {
            assert(Lex.current_select->linkage != GLOBAL_OPTIONS_TYPE);
            Select_Lex *sel= Lex.current_select;
            Select_Lex_Unit *unit= sel->master_unit();
            Select_Lex *fake= unit->fake_select_lex;
            if (fake)
            {
              unit->global_parameters= fake;
              fake->no_table_names_allowed= 1;
              Lex.current_select= fake;
            }
            YYSession->setWhere("global ORDER clause");
          }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 5644 "drizzled/sql_yacc.yy"
    {
            YYSession->lex().current_select->no_table_names_allowed= 0;
            YYSession->setWhere("");
          }
    break;

  case 1219:

/* Line 1806 of yacc.c  */
#line 5656 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1220:

/* Line 1806 of yacc.c  */
#line 5657 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 5658 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1222:

/* Line 1806 of yacc.c  */
#line 5663 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= Lex.current_select->master_unit()->first_select();
          }
    break;

  case 1223:

/* Line 1806 of yacc.c  */
#line 5667 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= Lex.current_select->master_unit()->first_select();
          }
    break;

  case 1225:

/* Line 1806 of yacc.c  */
#line 5676 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(3) - (3)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 1226:

/* Line 1806 of yacc.c  */
#line 5681 "drizzled/sql_yacc.yy"
    {
            Lex.pop_context();
            (yyval.select_lex)= (yyvsp[(1) - (5)].select_lex);
          }
    break;

  case 1227:

/* Line 1806 of yacc.c  */
#line 5690 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= (yyvsp[(2) - (3)].select_lex);
          }
    break;

  case 1228:

/* Line 1806 of yacc.c  */
#line 5696 "drizzled/sql_yacc.yy"
    {
            if (not Lex.expr_allows_subselect)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            /*
              we are making a "derived table" for the parenthesis
              as we need to have a lex level to fit the union
              after the parenthesis, e.g.
              (SELECT .. ) UNION ...  becomes
              SELECT * FROM ((SELECT ...) UNION ...)
            */
            if (new_select(&Lex, 1))
              DRIZZLE_YYABORT;
          }
    break;

  case 1229:

/* Line 1806 of yacc.c  */
#line 5715 "drizzled/sql_yacc.yy"
    {
            Lex.pop_context();
            Select_Lex *child= Lex.current_select;
            Lex.current_select= Lex.current_select->return_after_parsing();
            Lex.nest_level--;
            Lex.current_select->n_child_sum_items += child->n_sum_items;
            /*
              A subselect can add fields to an outer select. Reserve space for
              them.
            */
            Lex.current_select->select_n_where_fields+=
            child->select_n_where_fields;
          }
    break;



/* Line 1806 of yacc.c  */
#line 16362 "drizzled/sql_yacc.cc"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (session, YY_("syntax error"));
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
        yyerror (session, yymsgp);
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
		      yytoken, &yylval, session);
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
		  yystos[yystate], yyvsp, session);
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
  yyerror (session, YY_("memory exhausted"));
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
                  yytoken, &yylval, session);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, session);
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



