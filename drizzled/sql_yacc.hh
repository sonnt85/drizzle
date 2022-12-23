/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2068 of yacc.c  */
#line 127 "drizzled/sql_yacc.yy"
ParserType
{

/* Line 2068 of yacc.c  */
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



/* Line 2068 of yacc.c  */
#line 845 "drizzled/sql_yacc.hh"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




