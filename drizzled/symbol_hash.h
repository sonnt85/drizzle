/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -D --initializer-suffix=,0 --struct-type --enum --omit-struct-type --readonly-tables --language=C++ --class-name=symbol_hash drizzled/symbol_hash.gperf  */
/* Computed positions: -k'1-3,5,9,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "drizzled/symbol_hash.gperf"

/* -*- mode: c++; c-basic-offset: 2; indent-tabs-mode: nil; -*-
 *  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 *
 *  Copyright (C) 2008 Sun Microsystems, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */


/* This file includes all reserved words */

#include <drizzled/sql_yacc.hh>
#include <drizzled/lex_symbol.h>

using namespace drizzled;

/*
  Symbols are broken into separated arrays to allow field names with
  same name as functions.
  These are kept sorted for human lookup (the symbols are hashed).

  NOTE! The symbol tables should be the same regardless of what features
  are compiled into the server. Don't add ifdef'ed symbols to the
  lists
*/
/* maximum key range = 1865, duplicates = 0 */

class symbol_hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct SYMBOL *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
symbol_hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866,   15, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866,    5, 1866,    5, 1866,    0, 1866, 1866, 1866,
         0,   10,    5, 1866, 1866,   50,  415,  135,   70,   10,
       295,  373,  500,   40,    0,  200,  240,  220,    0,  110,
       315,  330,   15,   25,    5,  325,  395,  385,  607,  455,
         0, 1866, 1866, 1866, 1866,  135, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866,   10, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866, 1866,
      1866, 1866, 1866, 1866, 1866, 1866
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct SYMBOL *
symbol_hash::in_word_set (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 368,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 19,
      MIN_HASH_VALUE = 1,
      MAX_HASH_VALUE = 1865
    };

  static const struct SYMBOL wordlist[] =
    {
#line 51 "drizzled/symbol_hash.gperf"
      {"<", LESS_THAN},
#line 53 "drizzled/symbol_hash.gperf"
      {"<<", SHIFT_LEFT},
#line 52 "drizzled/symbol_hash.gperf"
      {">", GREATER_THAN},
#line 47 "drizzled/symbol_hash.gperf"
      {"<>", NE},
#line 54 "drizzled/symbol_hash.gperf"
      {">>", SHIFT_RIGHT},
#line 46 "drizzled/symbol_hash.gperf"
      {"<=", LE},
#line 50 "drizzled/symbol_hash.gperf"
      {"<=>", EQUAL_SYM},
#line 49 "drizzled/symbol_hash.gperf"
      {">=", GE},
#line 45 "drizzled/symbol_hash.gperf"
      {"||", CONCAT},
#line 48 "drizzled/symbol_hash.gperf"
      {"!=", NE},
#line 195 "drizzled/symbol_hash.gperf"
      {"IN", IN_SYM},
#line 324 "drizzled/symbol_hash.gperf"
      {"SET", SET_SYM},
#line 205 "drizzled/symbol_hash.gperf"
      {"INT8", BIGINT_SYM},
#line 300 "drizzled/symbol_hash.gperf"
      {"RETURN", RETURN_SYM},
#line 203 "drizzled/symbol_hash.gperf"
      {"INT", INT_SYM},
#line 204 "drizzled/symbol_hash.gperf"
      {"INT4", INT_SYM},
#line 68 "drizzled/symbol_hash.gperf"
      {"AT", AT_SYM},
#line 370 "drizzled/symbol_hash.gperf"
      {"TINYTEXT", TEXT_SYM},
#line 199 "drizzled/symbol_hash.gperf"
      {"INNER", INNER_SYM},
#line 301 "drizzled/symbol_hash.gperf"
      {"RETURNS", RETURNS_SYM},
#line 299 "drizzled/symbol_hash.gperf"
      {"RESTRICT", RESTRICT},
#line 322 "drizzled/symbol_hash.gperf"
      {"SERVER", SERVER_SYM},
#line 160 "drizzled/symbol_hash.gperf"
      {"ERRORS", ERRORS},
#line 284 "drizzled/symbol_hash.gperf"
      {"RANGE", RANGE_SYM},
#line 202 "drizzled/symbol_hash.gperf"
      {"INSERT", INSERT},
#line 210 "drizzled/symbol_hash.gperf"
      {"IS", IS},
#line 349 "drizzled/symbol_hash.gperf"
      {"START", START_SYM},
#line 65 "drizzled/symbol_hash.gperf"
      {"AS", AS},
#line 318 "drizzled/symbol_hash.gperf"
      {"SENSITIVE", SENSITIVE_SYM},
#line 323 "drizzled/symbol_hash.gperf"
      {"SESSION", SESSION_SYM},
#line 157 "drizzled/symbol_hash.gperf"
      {"ENDS", ENDS_SYM},
#line 264 "drizzled/symbol_hash.gperf"
      {"ON", ON},
#line 329 "drizzled/symbol_hash.gperf"
      {"SNAPSHOT", SNAPSHOT_SYM},
#line 289 "drizzled/symbol_hash.gperf"
      {"REDUNDANT", REDUNDANT_SYM},
#line 212 "drizzled/symbol_hash.gperf"
      {"ITERATE", ITERATE_SYM},
#line 259 "drizzled/symbol_hash.gperf"
      {"NOT", NOT_SYM},
#line 258 "drizzled/symbol_hash.gperf"
      {"NONE", NONE_SYM},
#line 201 "drizzled/symbol_hash.gperf"
      {"INSENSITIVE", INSENSITIVE_SYM},
#line 286 "drizzled/symbol_hash.gperf"
      {"READS", READS_SYM},
#line 265 "drizzled/symbol_hash.gperf"
      {"ONE", ONE_SYM},
#line 139 "drizzled/symbol_hash.gperf"
      {"DESCRIBE", DESCRIBE},
#line 124 "drizzled/symbol_hash.gperf"
      {"DATE", DATE_SYM},
#line 271 "drizzled/symbol_hash.gperf"
      {"OR", OR_SYM},
#line 373 "drizzled/symbol_hash.gperf"
      {"TRANSACTION", TRANSACTION_SYM},
#line 125 "drizzled/symbol_hash.gperf"
      {"DATETIME", DATETIME_SYM},
#line 285 "drizzled/symbol_hash.gperf"
      {"READ", READ_SYM},
#line 156 "drizzled/symbol_hash.gperf"
      {"END", END},
#line 214 "drizzled/symbol_hash.gperf"
      {"JOIN", JOIN_SYM},
#line 208 "drizzled/symbol_hash.gperf"
      {"INTO", INTO},
#line 362 "drizzled/symbol_hash.gperf"
      {"TERMINATED", TERMINATED},
#line 200 "drizzled/symbol_hash.gperf"
      {"INOUT", INOUT_SYM},
#line 321 "drizzled/symbol_hash.gperf"
      {"SERIALIZABLE", SERIALIZABLE_SYM},
#line 121 "drizzled/symbol_hash.gperf"
      {"DATA", DATA_SYM},
#line 113 "drizzled/symbol_hash.gperf"
      {"CREATE", CREATE},
#line 143 "drizzled/symbol_hash.gperf"
      {"DISTINCT", DISTINCT},
#line 63 "drizzled/symbol_hash.gperf"
      {"AND", AND_SYM},
#line 190 "drizzled/symbol_hash.gperf"
      {"IDENTIFIED", IDENTIFIED_SYM},
#line 257 "drizzled/symbol_hash.gperf"
      {"NO", NO_SYM},
#line 86 "drizzled/symbol_hash.gperf"
      {"CASE", CASE_SYM},
#line 353 "drizzled/symbol_hash.gperf"
      {"STORED", STORED_SYM},
#line 371 "drizzled/symbol_hash.gperf"
      {"TO", TO_SYM},
#line 272 "drizzled/symbol_hash.gperf"
      {"ORDER", ORDER_SYM},
#line 354 "drizzled/symbol_hash.gperf"
      {"STRAIGHT_JOIN", STRAIGHT_JOIN},
#line 211 "drizzled/symbol_hash.gperf"
      {"ISOLATION", ISOLATION},
#line 287 "drizzled/symbol_hash.gperf"
      {"READ_WRITE", READ_WRITE_SYM},
#line 138 "drizzled/symbol_hash.gperf"
      {"DESC", DESC},
#line 314 "drizzled/symbol_hash.gperf"
      {"SECOND", SECOND_SYM},
#line 293 "drizzled/symbol_hash.gperf"
      {"RENAME", RENAME},
#line 142 "drizzled/symbol_hash.gperf"
      {"DISCARD", DISCARD},
#line 57 "drizzled/symbol_hash.gperf"
      {"ADD", ADD_SYM},
#line 110 "drizzled/symbol_hash.gperf"
      {"CONSTRAINT", CONSTRAINT},
#line 112 "drizzled/symbol_hash.gperf"
      {"CONVERT", CONVERT_SYM},
#line 241 "drizzled/symbol_hash.gperf"
      {"MERGE", MERGE_SYM},
#line 84 "drizzled/symbol_hash.gperf"
      {"CASCADE", CASCADE},
#line 365 "drizzled/symbol_hash.gperf"
      {"TIME", TIME_SYM},
#line 243 "drizzled/symbol_hash.gperf"
      {"MINUTE", MINUTE_SYM},
#line 134 "drizzled/symbol_hash.gperf"
      {"DECLARE", DECLARE_SYM},
#line 251 "drizzled/symbol_hash.gperf"
      {"NAME", NAME_SYM},
#line 140 "drizzled/symbol_hash.gperf"
      {"DETERMINISTIC", DETERMINISTIC_SYM},
#line 153 "drizzled/symbol_hash.gperf"
      {"ELSE", ELSE},
#line 146 "drizzled/symbol_hash.gperf"
      {"DO", DO_SYM},
#line 107 "drizzled/symbol_hash.gperf"
      {"CONDITION", CONDITION_SYM},
#line 315 "drizzled/symbol_hash.gperf"
      {"SECOND_MICROSECOND", SECOND_MICROSECOND_SYM},
#line 109 "drizzled/symbol_hash.gperf"
      {"CONSISTENT", CONSISTENT_SYM},
#line 56 "drizzled/symbol_hash.gperf"
      {"ACTION", ACTION},
#line 207 "drizzled/symbol_hash.gperf"
      {"INTERVAL", INTERVAL_SYM},
#line 114 "drizzled/symbol_hash.gperf"
      {"CROSS", CROSS},
#line 154 "drizzled/symbol_hash.gperf"
      {"ENABLE", ENABLE_SYM},
#line 254 "drizzled/symbol_hash.gperf"
      {"NATURAL", NATURAL},
#line 288 "drizzled/symbol_hash.gperf"
      {"REAL", REAL},
#line 304 "drizzled/symbol_hash.gperf"
      {"RLIKE", REGEXP_SYM},
#line 96 "drizzled/symbol_hash.gperf"
      {"COALESCE", COALESCE},
#line 219 "drizzled/symbol_hash.gperf"
      {"LAST", LAST_SYM},
#line 252 "drizzled/symbol_hash.gperf"
      {"NAMES", NAMES_SYM},
#line 111 "drizzled/symbol_hash.gperf"
      {"CONTAINS", CONTAINS_SYM},
#line 61 "drizzled/symbol_hash.gperf"
      {"ALTER", ALTER_SYM},
#line 292 "drizzled/symbol_hash.gperf"
      {"RELEASE", RELEASE_SYM},
#line 155 "drizzled/symbol_hash.gperf"
      {"ENCLOSED", ENCLOSED},
#line 225 "drizzled/symbol_hash.gperf"
      {"LINES", LINES},
#line 85 "drizzled/symbol_hash.gperf"
      {"CASCADED", CASCADED},
#line 137 "drizzled/symbol_hash.gperf"
      {"DELETE", DELETE_SYM},
#line 320 "drizzled/symbol_hash.gperf"
      {"SERIAL", SERIAL_SYM},
#line 66 "drizzled/symbol_hash.gperf"
      {"ASC", ASC},
#line 132 "drizzled/symbol_hash.gperf"
      {"DEC", DECIMAL_SYM},
#line 245 "drizzled/symbol_hash.gperf"
      {"MINUTE_SECOND", MINUTE_SECOND_SYM},
#line 374 "drizzled/symbol_hash.gperf"
      {"TRUE", TRUE_SYM},
#line 171 "drizzled/symbol_hash.gperf"
      {"FIRST", FIRST_SYM},
#line 266 "drizzled/symbol_hash.gperf"
      {"ONLINE", ONLINE_SYM},
#line 235 "drizzled/symbol_hash.gperf"
      {"LONGTEXT", TEXT_SYM},
#line 330 "drizzled/symbol_hash.gperf"
      {"SOME", ANY_SYM},
#line 380 "drizzled/symbol_hash.gperf"
      {"UNION", UNION_SYM},
#line 387 "drizzled/symbol_hash.gperf"
      {"USE", USE_SYM},
#line 108 "drizzled/symbol_hash.gperf"
      {"CONNECTION", CONNECTION_SYM},
#line 388 "drizzled/symbol_hash.gperf"
      {"USER", USER},
#line 290 "drizzled/symbol_hash.gperf"
      {"REFERENCES", REFERENCES},
#line 58 "drizzled/symbol_hash.gperf"
      {"AFTER", AFTER_SYM},
#line 277 "drizzled/symbol_hash.gperf"
      {"PRECISION", PRECISION},
#line 244 "drizzled/symbol_hash.gperf"
      {"MINUTE_MICROSECOND", MINUTE_MICROSECOND_SYM},
#line 131 "drizzled/symbol_hash.gperf"
      {"DEALLOCATE", DEALLOCATE_SYM},
#line 136 "drizzled/symbol_hash.gperf"
      {"DEFINER", DEFINER},
#line 158 "drizzled/symbol_hash.gperf"
      {"ENGINE", ENGINE_SYM},
#line 294 "drizzled/symbol_hash.gperf"
      {"REPEAT", REPEAT_SYM},
#line 319 "drizzled/symbol_hash.gperf"
      {"SEPARATOR", SEPARATOR_SYM},
#line 296 "drizzled/symbol_hash.gperf"
      {"REPLACE", REPLACE},
#line 297 "drizzled/symbol_hash.gperf"
      {"REPLICATE",REPLICATE},
#line 253 "drizzled/symbol_hash.gperf"
      {"NATIONAL", NATIONAL_SYM},
#line 247 "drizzled/symbol_hash.gperf"
      {"MODE", MODE_SYM},
#line 317 "drizzled/symbol_hash.gperf"
      {"SELECT", SELECT_SYM},
#line 355 "drizzled/symbol_hash.gperf"
      {"STRING", STRING_SYM},
#line 386 "drizzled/symbol_hash.gperf"
      {"USAGE", USAGE},
#line 298 "drizzled/symbol_hash.gperf"
      {"REPLICATION",REPLICATION},
#line 351 "drizzled/symbol_hash.gperf"
      {"STATUS", STATUS_SYM},
#line 175 "drizzled/symbol_hash.gperf"
      {"FOR", FOR_SYM},
#line 267 "drizzled/symbol_hash.gperf"
      {"OPEN", OPEN_SYM},
#line 206 "drizzled/symbol_hash.gperf"
      {"INTEGER", INT_SYM},
#line 303 "drizzled/symbol_hash.gperf"
      {"RIGHT", RIGHT},
#line 193 "drizzled/symbol_hash.gperf"
      {"IGNORE", IGNORE_SYM},
#line 176 "drizzled/symbol_hash.gperf"
      {"FORCE", FORCE_SYM},
#line 169 "drizzled/symbol_hash.gperf"
      {"FIELDS", COLUMNS},
#line 73 "drizzled/symbol_hash.gperf"
      {"BETWEEN", BETWEEN_SYM},
#line 273 "drizzled/symbol_hash.gperf"
      {"OUT", OUT_SYM},
#line 352 "drizzled/symbol_hash.gperf"
      {"STOP", STOP_SYM},
#line 81 "drizzled/symbol_hash.gperf"
      {"BTREE", BTREE_SYM},
#line 357 "drizzled/symbol_hash.gperf"
      {"SUSPEND", SUSPEND_SYM},
#line 409 "drizzled/symbol_hash.gperf"
      {"WRITE", WRITE_SYM},
#line 350 "drizzled/symbol_hash.gperf"
      {"STARTING", STARTING},
#line 177 "drizzled/symbol_hash.gperf"
      {"FOREIGN", FOREIGN},
#line 76 "drizzled/symbol_hash.gperf"
      {"BIT", BIT_SYM},
#line 246 "drizzled/symbol_hash.gperf"
      {"MOD", MOD_SYM},
#line 226 "drizzled/symbol_hash.gperf"
      {"LOAD", LOAD},
#line 274 "drizzled/symbol_hash.gperf"
      {"OUTER", OUTER},
#line 280 "drizzled/symbol_hash.gperf"
      {"PROCESS", PROCESS},
#line 402 "drizzled/symbol_hash.gperf"
      {"WAIT", WAIT_SYM},
#line 101 "drizzled/symbol_hash.gperf"
      {"COMMENT", COMMENT_SYM},
#line 391 "drizzled/symbol_hash.gperf"
      {"UTC_TIME", UTC_TIME_SYM},
#line 223 "drizzled/symbol_hash.gperf"
      {"LIKE", LIKE},
#line 358 "drizzled/symbol_hash.gperf"
      {"TABLE", TABLE_SYM},
#line 275 "drizzled/symbol_hash.gperf"
      {"OUTFILE", OUTFILE},
#line 375 "drizzled/symbol_hash.gperf"
      {"TRUNCATE", TRUNCATE_SYM},
#line 161 "drizzled/symbol_hash.gperf"
      {"ESCAPE", ESCAPE_SYM},
#line 281 "drizzled/symbol_hash.gperf"
      {"PROCESSLIST", PROCESSLIST_SYM},
#line 307 "drizzled/symbol_hash.gperf"
      {"ROUTINE", ROUTINE_SYM},
#line 378 "drizzled/symbol_hash.gperf"
      {"UNDO", UNDO_SYM},
#line 95 "drizzled/symbol_hash.gperf"
      {"CLOSE", CLOSE_SYM},
#line 359 "drizzled/symbol_hash.gperf"
      {"TABLES", TABLES},
#line 117 "drizzled/symbol_hash.gperf"
      {"CURRENT_TIME", CURTIME},
#line 148 "drizzled/symbol_hash.gperf"
      {"DROP", DROP},
#line 224 "drizzled/symbol_hash.gperf"
      {"LIMIT", LIMIT},
#line 102 "drizzled/symbol_hash.gperf"
      {"COMMIT", COMMIT_SYM},
#line 364 "drizzled/symbol_hash.gperf"
      {"THEN", THEN_SYM},
#line 403 "drizzled/symbol_hash.gperf"
      {"WARNINGS", WARNINGS},
#line 327 "drizzled/symbol_hash.gperf"
      {"SIGNED", SIGNED_SYM},
#line 67 "drizzled/symbol_hash.gperf"
      {"ASENSITIVE", ASENSITIVE_SYM},
#line 104 "drizzled/symbol_hash.gperf"
      {"COMPACT", COMPACT_SYM},
#line 331 "drizzled/symbol_hash.gperf"
      {"SPECIFIC", SPECIFIC_SYM},
#line 411 "drizzled/symbol_hash.gperf"
      {"YEAR", YEAR_SYM},
#line 309 "drizzled/symbol_hash.gperf"
      {"ROWS", ROWS_SYM},
#line 231 "drizzled/symbol_hash.gperf"
      {"LOCKS", LOCKS_SYM},
#line 328 "drizzled/symbol_hash.gperf"
      {"SIMPLE", SIMPLE_SYM},
#line 98 "drizzled/symbol_hash.gperf"
      {"COLLATION", COLLATION_SYM},
#line 269 "drizzled/symbol_hash.gperf"
      {"OPTION", OPTION},
#line 69 "drizzled/symbol_hash.gperf"
      {"AUTO_INCREMENT", AUTO_INC},
#line 97 "drizzled/symbol_hash.gperf"
      {"COLLATE", COLLATE_SYM},
#line 390 "drizzled/symbol_hash.gperf"
      {"UTC_DATE", UTC_DATE_SYM},
#line 221 "drizzled/symbol_hash.gperf"
      {"LEFT", LEFT},
#line 122 "drizzled/symbol_hash.gperf"
      {"DATABASE", DATABASE},
#line 159 "drizzled/symbol_hash.gperf"
      {"ENUM", ENUM_SYM},
#line 162 "drizzled/symbol_hash.gperf"
      {"ESCAPED", ESCAPED},
#line 141 "drizzled/symbol_hash.gperf"
      {"DISABLE", DISABLE_SYM},
#line 413 "drizzled/symbol_hash.gperf"
      {"ZEROFILL", ZEROFILL_SYM},
#line 400 "drizzled/symbol_hash.gperf"
      {"VARIABLES", VARIABLES},
#line 105 "drizzled/symbol_hash.gperf"
      {"COMPRESSED", COMPRESSED_SYM},
#line 62 "drizzled/symbol_hash.gperf"
      {"ANALYZE", ANALYZE_SYM},
#line 116 "drizzled/symbol_hash.gperf"
      {"CURRENT_DATE", CURDATE},
#line 106 "drizzled/symbol_hash.gperf"
      {"CONCURRENT", CONCURRENT},
#line 144 "drizzled/symbol_hash.gperf"
      {"DISTINCTROW", DISTINCT},
#line 191 "drizzled/symbol_hash.gperf"
      {"IDENTITY", IDENTITY_SYM},
#line 170 "drizzled/symbol_hash.gperf"
      {"FILE", FILE_SYM},
#line 198 "drizzled/symbol_hash.gperf"
      {"INFILE", INFILE},
#line 123 "drizzled/symbol_hash.gperf"
      {"DATABASES", DATABASES},
#line 325 "drizzled/symbol_hash.gperf"
      {"SHARE", SHARE_SYM},
#line 194 "drizzled/symbol_hash.gperf"
      {"IMPORT", IMPORT},
#line 120 "drizzled/symbol_hash.gperf"
      {"CURSOR", CURSOR_SYM},
#line 404 "drizzled/symbol_hash.gperf"
      {"WEEK", WEEK_SYM},
#line 168 "drizzled/symbol_hash.gperf"
      {"FALSE", FALSE_SYM},
#line 334 "drizzled/symbol_hash.gperf"
      {"SQLSTATE", SQLSTATE_SYM},
#line 256 "drizzled/symbol_hash.gperf"
      {"NEXT", NEXT_SYM},
#line 393 "drizzled/symbol_hash.gperf"
      {"UTF8", UTF8_SYM},
#line 363 "drizzled/symbol_hash.gperf"
      {"TEXT", TEXT_SYM},
#line 192 "drizzled/symbol_hash.gperf"
      {"IF", IF},
#line 360 "drizzled/symbol_hash.gperf"
      {"TABLESPACE", TABLESPACE},
#line 302 "drizzled/symbol_hash.gperf"
      {"REVOKE", REVOKE},
#line 382 "drizzled/symbol_hash.gperf"
      {"UNKNOWN", UNKNOWN_SYM},
#line 180 "drizzled/symbol_hash.gperf"
      {"FROM", FROM},
#line 316 "drizzled/symbol_hash.gperf"
      {"SECURITY", SECURITY_SYM},
#line 295 "drizzled/symbol_hash.gperf"
      {"REPEATABLE", REPEATABLE_SYM},
#line 79 "drizzled/symbol_hash.gperf"
      {"BOOLEAN", BOOLEAN_SYM},
#line 103 "drizzled/symbol_hash.gperf"
      {"COMMITTED", COMMITTED_SYM},
#line 209 "drizzled/symbol_hash.gperf"
      {"INVOKER", INVOKER},
#line 173 "drizzled/symbol_hash.gperf"
      {"FLOAT", DOUBLE_SYM},
#line 276 "drizzled/symbol_hash.gperf"
      {"PARTIAL", PARTIAL},
#line 268 "drizzled/symbol_hash.gperf"
      {"OPTIMIZE", OPTIMIZE},
#line 83 "drizzled/symbol_hash.gperf"
      {"CALL", CALL_SYM},
#line 130 "drizzled/symbol_hash.gperf"
      {"DAY_SECOND", DAY_SECOND_SYM},
#line 133 "drizzled/symbol_hash.gperf"
      {"DECIMAL", DECIMAL_SYM},
#line 179 "drizzled/symbol_hash.gperf"
      {"FRAC_SECOND", FRAC_SECOND_SYM},
#line 367 "drizzled/symbol_hash.gperf"
      {"TIMESTAMPADD", TIMESTAMP_ADD},
#line 230 "drizzled/symbol_hash.gperf"
      {"LOCK", LOCK_SYM},
#line 88 "drizzled/symbol_hash.gperf"
      {"CHAIN", CHAIN_SYM},
#line 372 "drizzled/symbol_hash.gperf"
      {"TRAILING", TRAILING},
#line 165 "drizzled/symbol_hash.gperf"
      {"EXISTS", EXISTS},
#line 216 "drizzled/symbol_hash.gperf"
      {"KEYS", KEYS},
#line 242 "drizzled/symbol_hash.gperf"
      {"MICROSECOND", MICROSECOND_SYM},
#line 152 "drizzled/symbol_hash.gperf"
      {"EACH", EACH_SYM},
#line 167 "drizzled/symbol_hash.gperf"
      {"EXTENDED", EXTENDED_SYM},
#line 261 "drizzled/symbol_hash.gperf"
      {"NUMERIC", NUMERIC_SYM},
#line 90 "drizzled/symbol_hash.gperf"
      {"CHAR", CHAR_SYM},
#line 381 "drizzled/symbol_hash.gperf"
      {"UNIQUE", UNIQUE_SYM},
#line 379 "drizzled/symbol_hash.gperf"
      {"UNDOFILE", UNDOFILE_SYM},
#line 346 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_SECOND", SECOND_SYM},
#line 395 "drizzled/symbol_hash.gperf"
      {"VALUE", VALUE_SYM},
#line 99 "drizzled/symbol_hash.gperf"
      {"COLUMN", COLUMN_SYM},
#line 135 "drizzled/symbol_hash.gperf"
      {"DEFAULT", DEFAULT},
#line 408 "drizzled/symbol_hash.gperf"
      {"WORK", WORK_SYM},
#line 220 "drizzled/symbol_hash.gperf"
      {"LEADING", LEADING},
#line 263 "drizzled/symbol_hash.gperf"
      {"OFFSET", OFFSET_SYM},
#line 92 "drizzled/symbol_hash.gperf"
      {"CHARSET", CHARSET},
#line 218 "drizzled/symbol_hash.gperf"
      {"KILL", KILL_SYM},
#line 396 "drizzled/symbol_hash.gperf"
      {"VALUES", VALUES},
#line 233 "drizzled/symbol_hash.gperf"
      {"LONG", LONG_SYM},
#line 248 "drizzled/symbol_hash.gperf"
      {"MODIFIES", MODIFIES_SYM},
#line 385 "drizzled/symbol_hash.gperf"
      {"UPDATE", UPDATE_SYM},
#line 282 "drizzled/symbol_hash.gperf"
      {"QUARTER", QUARTER_SYM},
#line 100 "drizzled/symbol_hash.gperf"
      {"COLUMNS", COLUMNS},
#line 278 "drizzled/symbol_hash.gperf"
      {"PREV", PREV_SYM},
#line 197 "drizzled/symbol_hash.gperf"
      {"INDEXES", INDEXES},
#line 410 "drizzled/symbol_hash.gperf"
      {"XOR", XOR},
#line 71 "drizzled/symbol_hash.gperf"
      {"BEFORE", BEFORE_SYM},
#line 232 "drizzled/symbol_hash.gperf"
      {"LOGS", LOGS_SYM},
#line 228 "drizzled/symbol_hash.gperf"
      {"LOCALTIME", NOW_SYM},
#line 262 "drizzled/symbol_hash.gperf"
      {"OFFLINE", OFFLINE_SYM},
#line 213 "drizzled/symbol_hash.gperf"
      {"IPV6", IPV6_SYM},
#line 147 "drizzled/symbol_hash.gperf"
      {"DOUBLE", DOUBLE_SYM},
#line 394 "drizzled/symbol_hash.gperf"
      {"UUID", UUID_SYM},
#line 377 "drizzled/symbol_hash.gperf"
      {"UNCOMMITTED", UNCOMMITTED_SYM},
#line 60 "drizzled/symbol_hash.gperf"
      {"ALL", ALL},
#line 91 "drizzled/symbol_hash.gperf"
      {"CHARACTER", CHAR_SYM},
#line 150 "drizzled/symbol_hash.gperf"
      {"DUPLICATE", DUPLICATE_SYM},
#line 255 "drizzled/symbol_hash.gperf"
      {"NEW", NEW_SYM},
#line 356 "drizzled/symbol_hash.gperf"
      {"SUBJECT", SUBJECT_SYM},
#line 376 "drizzled/symbol_hash.gperf"
      {"TYPE", TYPE_SYM},
#line 384 "drizzled/symbol_hash.gperf"
      {"UNSIGNED", UNSIGNED_SYM},
#line 72 "drizzled/symbol_hash.gperf"
      {"BEGIN", BEGIN_SYM},
#line 311 "drizzled/symbol_hash.gperf"
      {"SAVEPOINT", SAVEPOINT_SYM},
#line 260 "drizzled/symbol_hash.gperf"
      {"NULL", NULL_SYM},
#line 87 "drizzled/symbol_hash.gperf"
      {"CATALOG", CATALOG_SYM},
#line 129 "drizzled/symbol_hash.gperf"
      {"DAY_MINUTE", DAY_MINUTE_SYM},
#line 118 "drizzled/symbol_hash.gperf"
      {"CURRENT_TIMESTAMP", NOW_SYM},
#line 392 "drizzled/symbol_hash.gperf"
      {"UTC_TIMESTAMP", UTC_TIMESTAMP_SYM},
#line 59 "drizzled/symbol_hash.gperf"
      {"AGGREGATE", AGGREGATE_SYM},
#line 119 "drizzled/symbol_hash.gperf"
      {"CURRENT_USER", CURRENT_USER},
#line 332 "drizzled/symbol_hash.gperf"
      {"SQL", SQL_SYM},
#line 74 "drizzled/symbol_hash.gperf"
      {"BIGINT", BIGINT_SYM},
#line 343 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_MINUTE", MINUTE_SYM},
#line 238 "drizzled/symbol_hash.gperf"
      {"MEDIUM", MEDIUM_SYM},
#line 310 "drizzled/symbol_hash.gperf"
      {"ROW_FORMAT", ROW_FORMAT_SYM},
#line 178 "drizzled/symbol_hash.gperf"
      {"FOUND", FOUND_SYM},
#line 78 "drizzled/symbol_hash.gperf"
      {"BOOL", BOOL_SYM},
#line 401 "drizzled/symbol_hash.gperf"
      {"VARYING", VARYING},
#line 339 "drizzled/symbol_hash.gperf"
      {"SQL_SMALL_RESULT", SQL_SMALL_RESULT},
#line 279 "drizzled/symbol_hash.gperf"
      {"PRIMARY", PRIMARY_SYM},
#line 369 "drizzled/symbol_hash.gperf"
      {"TINYBLOB", BLOB_SYM},
#line 151 "drizzled/symbol_hash.gperf"
      {"DYNAMIC", DYNAMIC_SYM},
#line 115 "drizzled/symbol_hash.gperf"
      {"CUBE", CUBE_SYM},
#line 308 "drizzled/symbol_hash.gperf"
      {"ROW", ROW_SYM},
#line 405 "drizzled/symbol_hash.gperf"
      {"WHEN", WHEN_SYM},
#line 145 "drizzled/symbol_hash.gperf"
      {"DIV", DIV_SYM},
#line 383 "drizzled/symbol_hash.gperf"
      {"UNLOCK", UNLOCK_SYM},
#line 338 "drizzled/symbol_hash.gperf"
      {"SQL_CALC_FOUND_ROWS", SQL_CALC_FOUND_ROWS},
#line 313 "drizzled/symbol_hash.gperf"
      {"SCHEMAS", DATABASES},
#line 368 "drizzled/symbol_hash.gperf"
      {"TIMESTAMPDIFF", TIMESTAMP_DIFF},
#line 406 "drizzled/symbol_hash.gperf"
      {"WHERE", WHERE},
#line 149 "drizzled/symbol_hash.gperf"
      {"DUMPFILE", DUMPFILE},
#line 366 "drizzled/symbol_hash.gperf"
      {"TIMESTAMP", TIMESTAMP_SYM},
#line 75 "drizzled/symbol_hash.gperf"
      {"BINARY", BINARY},
#line 407 "drizzled/symbol_hash.gperf"
      {"WITH", WITH},
#line 312 "drizzled/symbol_hash.gperf"
      {"SCHEMA", DATABASE},
#line 237 "drizzled/symbol_hash.gperf"
      {"MAXVALUE", MAX_VALUE_SYM},
#line 186 "drizzled/symbol_hash.gperf"
      {"HOUR", HOUR_SYM},
#line 345 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_QUARTER", QUARTER_SYM},
#line 64 "drizzled/symbol_hash.gperf"
      {"ANY", ANY_SYM},
#line 164 "drizzled/symbol_hash.gperf"
      {"EXECUTE", EXECUTE_SYM},
#line 227 "drizzled/symbol_hash.gperf"
      {"LOCAL", LOCAL_SYM},
#line 398 "drizzled/symbol_hash.gperf"
      {"VARCHAR", VARCHAR_SYM},
#line 341 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_FRAC_SECOND", FRAC_SECOND_SYM},
#line 305 "drizzled/symbol_hash.gperf"
      {"ROLLBACK", ROLLBACK_SYM},
#line 166 "drizzled/symbol_hash.gperf"
      {"EXPLAIN", DESCRIBE},
#line 128 "drizzled/symbol_hash.gperf"
      {"DAY_MICROSECOND", DAY_MICROSECOND_SYM},
#line 306 "drizzled/symbol_hash.gperf"
      {"ROLLUP", ROLLUP_SYM},
#line 182 "drizzled/symbol_hash.gperf"
      {"GLOBAL", GLOBAL_SYM},
#line 326 "drizzled/symbol_hash.gperf"
      {"SHOW", SHOW},
#line 335 "drizzled/symbol_hash.gperf"
      {"SQLWARNING", SQLWARNING_SYM},
#line 126 "drizzled/symbol_hash.gperf"
      {"DAY", DAY_SYM},
#line 80 "drizzled/symbol_hash.gperf"
      {"BOTH", BOTH},
#line 337 "drizzled/symbol_hash.gperf"
      {"SQL_BUFFER_RESULT", SQL_BUFFER_RESULT},
#line 336 "drizzled/symbol_hash.gperf"
      {"SQL_BIG_RESULT", SQL_BIG_RESULT},
#line 93 "drizzled/symbol_hash.gperf"
      {"CHECK", CHECK_SYM},
#line 229 "drizzled/symbol_hash.gperf"
      {"LOCALTIMESTAMP", NOW_SYM},
#line 94 "drizzled/symbol_hash.gperf"
      {"CHECKSUM", CHECKSUM_SYM},
#line 89 "drizzled/symbol_hash.gperf"
      {"CHANGE", CHANGE_SYM},
#line 184 "drizzled/symbol_hash.gperf"
      {"HASH", HASH_SYM},
#line 348 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_YEAR", YEAR_SYM},
#line 172 "drizzled/symbol_hash.gperf"
      {"FIXED", FIXED_SYM},
#line 127 "drizzled/symbol_hash.gperf"
      {"DAY_HOUR", DAY_HOUR_SYM},
#line 181 "drizzled/symbol_hash.gperf"
      {"FULL", FULL},
#line 163 "drizzled/symbol_hash.gperf"
      {"EXCLUSIVE", EXCLUSIVE_SYM},
#line 399 "drizzled/symbol_hash.gperf"
      {"VARCHARACTER", VARCHAR_SYM},
#line 215 "drizzled/symbol_hash.gperf"
      {"KEY", KEY_SYM},
#line 342 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_HOUR", HOUR_SYM},
#line 222 "drizzled/symbol_hash.gperf"
      {"LEVEL", LEVEL_SYM},
#line 183 "drizzled/symbol_hash.gperf"
      {"GROUP", GROUP_SYM},
#line 340 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_DAY", DAY_SYM},
#line 389 "drizzled/symbol_hash.gperf"
      {"USING", USING},
#line 249 "drizzled/symbol_hash.gperf"
      {"MODIFY", MODIFY_SYM},
#line 239 "drizzled/symbol_hash.gperf"
      {"MEDIUMBLOB", BLOB_SYM},
#line 412 "drizzled/symbol_hash.gperf"
      {"YEAR_MONTH", YEAR_MONTH_SYM},
#line 187 "drizzled/symbol_hash.gperf"
      {"HOUR_MICROSECOND", HOUR_MICROSECOND_SYM},
#line 77 "drizzled/symbol_hash.gperf"
      {"BLOB", BLOB_SYM},
#line 234 "drizzled/symbol_hash.gperf"
      {"LONGBLOB", BLOB_SYM},
#line 70 "drizzled/symbol_hash.gperf"
      {"AVG", AVG_SYM},
#line 347 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_WEEK", WEEK_SYM},
#line 333 "drizzled/symbol_hash.gperf"
      {"SQLEXCEPTION", SQLEXCEPTION_SYM},
#line 270 "drizzled/symbol_hash.gperf"
      {"OPTIONALLY", OPTIONALLY},
#line 240 "drizzled/symbol_hash.gperf"
      {"MEDIUMTEXT", TEXT_SYM},
#line 189 "drizzled/symbol_hash.gperf"
      {"HOUR_SECOND", HOUR_SECOND_SYM},
#line 361 "drizzled/symbol_hash.gperf"
      {"TEMPORARY", TEMPORARY_SYM},
#line 236 "drizzled/symbol_hash.gperf"
      {"MATCH", MATCH},
#line 217 "drizzled/symbol_hash.gperf"
      {"KEY_BLOCK_SIZE", KEY_BLOCK_SIZE},
#line 185 "drizzled/symbol_hash.gperf"
      {"HAVING", HAVING},
#line 291 "drizzled/symbol_hash.gperf"
      {"REGEXP", REGEXP_SYM},
#line 82 "drizzled/symbol_hash.gperf"
      {"BY", BY},
#line 196 "drizzled/symbol_hash.gperf"
      {"INDEX", INDEX_SYM},
#line 344 "drizzled/symbol_hash.gperf"
      {"SQL_TSI_MONTH", MONTH_SYM},
#line 250 "drizzled/symbol_hash.gperf"
      {"MONTH", MONTH_SYM},
#line 188 "drizzled/symbol_hash.gperf"
      {"HOUR_MINUTE", HOUR_MINUTE_SYM},
#line 397 "drizzled/symbol_hash.gperf"
      {"VARBINARY", VARBINARY},
#line 283 "drizzled/symbol_hash.gperf"
      {"QUERY", QUERY_SYM},
#line 174 "drizzled/symbol_hash.gperf"
      {"FLUSH", FLUSH_SYM}
    };

  static const short lookup[] =
    {
       -1,   0,   1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,   2,   3,  -1,  -1,  -1,  -1,   4,  -1,  -1,
       -1,  -1,   5,   6,  -1,  -1,  -1,   7,  -1,  -1,
       -1,  -1,   8,  -1,  -1,  -1,  -1,   9,  -1,  -1,
       -1,  -1,  10,  -1,  -1,  -1,  -1,  -1,  11,  12,
       -1,  13,  -1,  14,  15,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  16,  17,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  18,  -1,  19,  20,  -1,
       -1,  21,  -1,  -1,  -1,  -1,  22,  -1,  -1,  -1,
       23,  24,  25,  -1,  -1,  26,  -1,  -1,  -1,  -1,
       -1,  -1,  27,  -1,  28,  -1,  -1,  29,  -1,  30,
       -1,  -1,  31,  32,  33,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  34,  35,  36,  -1,  37,  -1,  -1,  -1,
       38,  -1,  -1,  39,  -1,  -1,  -1,  -1,  40,  41,
       -1,  -1,  42,  -1,  -1,  -1,  43,  -1,  44,  45,
       -1,  -1,  -1,  46,  47,  -1,  -1,  -1,  -1,  48,
       49,  -1,  -1,  -1,  -1,  50,  -1,  -1,  -1,  -1,
       -1,  -1,  51,  -1,  -1,  -1,  -1,  -1,  -1,  52,
       -1,  53,  -1,  -1,  -1,  -1,  -1,  -1,  54,  -1,
       -1,  -1,  -1,  55,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  56,  -1,  -1,  -1,  -1,
       -1,  -1,  57,  -1,  58,  -1,  59,  60,  -1,  -1,
       61,  -1,  -1,  62,  63,  64,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  65,  -1,  66,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  67,  68,  69,  -1,  70,  -1,  71,  -1,  -1,
       72,  -1,  -1,  -1,  -1,  -1,  -1,  73,  -1,  74,
       -1,  75,  76,  -1,  77,  -1,  -1,  -1,  78,  79,
       -1,  -1,  80,  -1,  81,  -1,  -1,  -1,  82,  -1,
       83,  -1,  -1,  -1,  -1,  -1,  84,  -1,  85,  -1,
       -1,  -1,  -1,  -1,  -1,  86,  87,  88,  -1,  89,
       90,  -1,  -1,  91,  92,  93,  -1,  -1,  94,  -1,
       95,  -1,  96,  97,  -1,  98,  -1,  -1,  99,  -1,
       -1, 100,  -1,  -1,  -1,  -1, 101,  -1, 102,  -1,
       -1,  -1,  -1, 103,  -1,  -1,  -1,  -1, 104, 105,
       -1,  -1,  -1,  -1,  -1, 106, 107,  -1, 108, 109,
      110,  -1,  -1, 111,  -1, 112,  -1,  -1,  -1, 113,
      114,  -1,  -1,  -1,  -1, 115,  -1,  -1,  -1, 116,
       -1,  -1,  -1, 117,  -1, 118,  -1, 119,  -1, 120,
       -1, 121,  -1,  -1, 122,  -1,  -1, 123,  -1, 124,
       -1,  -1,  -1, 125, 126,  -1,  -1,  -1,  -1,  -1,
       -1, 127,  -1,  -1, 128, 129,  -1,  -1,  -1,  -1,
       -1, 130,  -1,  -1,  -1,  -1, 131,  -1, 132, 133,
      134,  -1,  -1, 135, 136, 137, 138, 139, 140,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 141,
      142,  -1, 143,  -1,  -1, 144, 145, 146, 147,  -1,
       -1,  -1,  -1, 148, 149, 150,  -1,  -1,  -1,  -1,
       -1,  -1, 151,  -1, 152,  -1,  -1, 153, 154,  -1,
       -1,  -1,  -1,  -1, 155, 156,  -1, 157, 158,  -1,
       -1, 159,  -1,  -1,  -1,  -1, 160, 161,  -1, 162,
      163, 164, 165,  -1, 166, 167, 168,  -1,  -1, 169,
       -1,  -1,  -1, 170, 171, 172,  -1, 173,  -1,  -1,
       -1,  -1,  -1, 174, 175,  -1,  -1,  -1,  -1, 176,
      177, 178,  -1,  -1, 179,  -1, 180,  -1,  -1, 181,
       -1,  -1, 182, 183, 184,  -1,  -1,  -1, 185, 186,
       -1,  -1, 187,  -1,  -1,  -1,  -1, 188, 189, 190,
      191,  -1, 192,  -1,  -1,  -1,  -1, 193,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 194, 195,  -1, 196, 197,
       -1, 198,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 199,
      200, 201,  -1,  -1,  -1,  -1, 202,  -1,  -1, 203,
      204,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 205,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 206,  -1,  -1, 207,
       -1, 208, 209,  -1,  -1, 210, 211,  -1,  -1,  -1,
       -1,  -1, 212,  -1, 213,  -1,  -1,  -1, 214,  -1,
      215,  -1, 216,  -1, 217,  -1,  -1, 218,  -1,  -1,
      219,  -1,  -1,  -1,  -1,  -1,  -1, 220, 221, 222,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      223,  -1, 224,  -1,  -1,  -1, 225, 226,  -1, 227,
      228, 229,  -1, 230, 231,  -1, 232,  -1,  -1, 233,
      234,  -1, 235,  -1, 236,  -1, 237,  -1, 238, 239,
      240, 241, 242,  -1, 243,  -1,  -1,  -1,  -1,  -1,
      244, 245, 246,  -1, 247,  -1, 248, 249, 250,  -1,
       -1, 251, 252,  -1,  -1,  -1,  -1, 253,  -1, 254,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 255,
      256, 257, 258,  -1, 259,  -1,  -1, 260,  -1, 261,
       -1, 262,  -1,  -1, 263,  -1, 264,  -1,  -1,  -1,
       -1,  -1,  -1, 265, 266,  -1,  -1,  -1,  -1, 267,
       -1,  -1,  -1, 268,  -1,  -1,  -1, 269,  -1, 270,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 271,  -1, 272, 273,  -1,  -1,  -1,  -1, 274,
      275,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      276,  -1, 277, 278,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 279,  -1, 280, 281, 282,
       -1,  -1,  -1,  -1, 283,  -1,  -1,  -1,  -1,  -1,
       -1, 284,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      285,  -1,  -1,  -1,  -1, 286,  -1,  -1,  -1, 287,
      288, 289, 290, 291,  -1,  -1,  -1, 292,  -1, 293,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 294, 295,
       -1,  -1,  -1, 296,  -1,  -1, 297,  -1,  -1, 298,
       -1,  -1, 299, 300,  -1,  -1,  -1,  -1,  -1,  -1,
      301,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 302, 303,
       -1, 304,  -1,  -1, 305,  -1, 306,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 307,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 308,  -1,  -1,  -1,  -1,  -1,
      309,  -1,  -1, 310,  -1,  -1,  -1,  -1,  -1, 311,
      312,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 313,  -1, 314,  -1,  -1,  -1, 315, 316,
      317,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 318,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 319,
       -1,  -1,  -1,  -1, 320,  -1,  -1,  -1, 321,  -1,
       -1,  -1,  -1, 322, 323,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 324,  -1, 325,  -1,  -1,  -1,  -1,  -1,
      326,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 327,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 328, 329,  -1,  -1,  -1,  -1, 330,
       -1,  -1, 331,  -1,  -1,  -1,  -1, 332,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 333,  -1,
       -1,  -1,  -1,  -1, 334,  -1, 335,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 336, 337,  -1,  -1,  -1, 338,  -1,  -1,
      339,  -1,  -1, 340,  -1,  -1, 341,  -1,  -1,  -1,
       -1, 342,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 343,  -1,  -1,  -1,
      344,  -1,  -1,  -1,  -1, 345,  -1,  -1,  -1,  -1,
       -1, 346,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 347,  -1,  -1,  -1, 348,  -1,
       -1,  -1,  -1,  -1, 349,  -1,  -1, 350,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 351,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 352,  -1, 353,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 354,  -1,  -1, 355,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      356,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 357,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 358,  -1, 359, 360,  -1, 361,
       -1,  -1,  -1, 362,  -1, 363,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 364,  -1,  -1, 365,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      366,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 367
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
