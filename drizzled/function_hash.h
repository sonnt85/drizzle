/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -D --initializer-suffix=,0 --struct-type --enum --omit-struct-type --readonly-tables --language=C++ --class-name=function_hash drizzled/function_hash.gperf  */
/* Computed positions: -k'1,3,6' */

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

#line 1 "drizzled/function_hash.gperf"

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


/* This file includes all functions */

#include <drizzled/foreign_key.h>
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
/* maximum key range = 50, duplicates = 0 */

class function_hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct SYMBOL *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
function_hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 10, 15,  0, 15, 20,
      54, 10, 54,  0, 54, 54, 54,  5, 30,  3,
       3, 54, 10,  0, 10,  0,  0, 20,  5, 54,
      54, 54, 54, 54, 54,  5, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

const struct SYMBOL *
function_hash::in_word_set (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 29,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 12,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 53
    };

  static const struct SYMBOL wordlist[] =
    {
#line 46 "drizzled/function_hash.gperf"
      {"CAST",CAST_SYM},
#line 47 "drizzled/function_hash.gperf"
      {"COUNT",COUNT_SYM},
#line 68 "drizzled/function_hash.gperf"
      {"SUM",SUM_SYM},
#line 59 "drizzled/function_hash.gperf"
      {"POSITION",POSITION_SYM},
#line 54 "drizzled/function_hash.gperf"
      {"MAX",MAX_SYM},
#line 71 "drizzled/function_hash.gperf"
      {"TRIM",TRIM},
#line 60 "drizzled/function_hash.gperf"
      {"SESSION_USER",USER},
#line 70 "drizzled/function_hash.gperf"
      {"SYSTEM_USER",USER},
#line 69 "drizzled/function_hash.gperf"
      {"SYSDATE",SYSDATE},
#line 61 "drizzled/function_hash.gperf"
      {"STD",STD_SYM},
#line 73 "drizzled/function_hash.gperf"
      {"VAR_POP",VARIANCE_SYM},
#line 62 "drizzled/function_hash.gperf"
      {"STDDEV",STD_SYM},
#line 49 "drizzled/function_hash.gperf"
      {"CURTIME",CURTIME},
#line 56 "drizzled/function_hash.gperf"
      {"MID",SUBSTRING},
#line 63 "drizzled/function_hash.gperf"
      {"STDDEV_POP",STD_SYM},
#line 64 "drizzled/function_hash.gperf"
      {"STDDEV_SAMP",STDDEV_SAMP_SYM},
#line 48 "drizzled/function_hash.gperf"
      {"CURDATE",CURDATE},
#line 74 "drizzled/function_hash.gperf"
      {"VAR_SAMP",VAR_SAMP_SYM},
#line 53 "drizzled/function_hash.gperf"
      {"GROUP_CONCAT",GROUP_CONCAT_SYM},
#line 66 "drizzled/function_hash.gperf"
      {"SUBSTR",SUBSTRING},
#line 65 "drizzled/function_hash.gperf"
      {"SUBDATE",SUBDATE_SYM},
#line 51 "drizzled/function_hash.gperf"
      {"DATE_SUB",DATE_SUB_INTERVAL},
#line 67 "drizzled/function_hash.gperf"
      {"SUBSTRING",SUBSTRING},
#line 52 "drizzled/function_hash.gperf"
      {"EXTRACT",EXTRACT_SYM},
#line 57 "drizzled/function_hash.gperf"
      {"MIN",MIN_SYM},
#line 45 "drizzled/function_hash.gperf"
      {"ADDDATE",ADDDATE_SYM},
#line 50 "drizzled/function_hash.gperf"
      {"DATE_ADD",DATE_ADD_INTERVAL},
#line 72 "drizzled/function_hash.gperf"
      {"VARIANCE",VARIANCE_SYM},
#line 58 "drizzled/function_hash.gperf"
      {"NOW",NOW_SYM}
    };

  static const signed char lookup[] =
    {
      -1, -1, -1, -1,  0,  1, -1, -1,  2, -1, -1,  3, -1,  4,
       5,  6,  7,  8,  9, -1, 10, 11, 12, 13, -1, 14, 15, 16,
      17, -1, 18, 19, 20, 21, 22, -1, -1, 23, 24, -1, -1, -1,
      25, 26, -1, -1, -1, -1, 27, -1, -1, -1, -1, 28
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
#line 75 "drizzled/function_hash.gperf"

