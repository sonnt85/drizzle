/*
 * Drizzle Client & Protocol Library
 *
 * Copyright (C) 2008 Eric Day (eday@oddments.org)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *
 *     * The names of its contributors may not be used to endorse or
 * promote products derived from this software without specific prior
 * written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <config.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <libdrizzle-2.0/drizzle_server.h>

#define DRIZZLE_FIELD_MAX 32
#define DRIZZLE_RESULT_ROWS 20

#define DRIZZLE_RETURN_CHECK(__ret, __function, __drizzle) \
{ \
  if ((__ret) != DRIZZLE_RETURN_OK) \
    DRIZZLE_RETURN_ERROR(__function, __drizzle) \
}

#define DRIZZLE_RETURN_ERROR(__function, __drizzle) \
{ \
  printf(__function ":%s\n", drizzle_error(__drizzle)); \
  return; \
}

static void server(drizzle_st *drizzle, drizzle_con_st *con, drizzle_column_st *column);

int main(int argc, char *argv[])
{
  int c;
  uint32_t count= 0;
  const char *host= NULL;
  bool mysql= false;
  in_port_t port= 0;
  drizzle_verbose_t verbose= DRIZZLE_VERBOSE_NEVER;
  drizzle_return_t ret;
  drizzle_st *drizzle;
  drizzle_column_st column;

  while((c = getopt(argc, argv, "c:h:mp:v")) != -1)
  {
    switch(c)
    {
    case 'c':
      count= (uint32_t)atoi(optarg);
      break;

    case 'h':
      host= optarg;
      break;

    case 'm':
      mysql= true;
      break;

    case 'p':
      port= (in_port_t)atoi(optarg);
      break;

    case 'v':
      switch(verbose)
      {
      case DRIZZLE_VERBOSE_NEVER:
        verbose= DRIZZLE_VERBOSE_FATAL;
        break;
      case DRIZZLE_VERBOSE_FATAL:
        verbose= DRIZZLE_VERBOSE_ERROR;
        break;
      case DRIZZLE_VERBOSE_ERROR:
        verbose= DRIZZLE_VERBOSE_INFO;
        break;
      case DRIZZLE_VERBOSE_INFO:
        verbose= DRIZZLE_VERBOSE_DEBUG;
        break;
      case DRIZZLE_VERBOSE_DEBUG:
        verbose= DRIZZLE_VERBOSE_CRAZY;
        break;
      case DRIZZLE_VERBOSE_CRAZY:
      case DRIZZLE_VERBOSE_MAX:
        break;
      }
      break;

    default:
      printf("\nusage: %s [-c <count>] [-h <host>] [-m] [-p <port>] [-v]\n",
             argv[0]);
      printf("\t-c <count> - Number of connections to accept before exiting\n");
      printf("\t-h <host>  - Host to listen on\n");
      printf("\t-m         - Use the MySQL protocol\n");
      printf("\t-p <port>  - Port to listen on\n");
      printf("\t-v         - Increase verbosity level\n");
      return 1;
    }
  }

  if ((drizzle= drizzle_create()) == NULL)
  {
    fprintf(stderr, "drizzle_create:NULL\n");
    return 1;
  }

  drizzle_set_option(drizzle, DRIZZLE_FREE_OBJECTS, true);
  drizzle_set_verbose(drizzle, verbose);

  drizzle_con_st* con_listen;
  if ((con_listen= drizzle_con_create(drizzle)) == NULL)
  {
    fprintf(stderr, "drizzle_con_create:NULL\n");
    return 1;
  }

  drizzle_con_add_options(con_listen, DRIZZLE_CON_LISTEN);
  drizzle_con_set_tcp(con_listen, host, port);

  if (mysql)
  {
    drizzle_con_add_options(con_listen, DRIZZLE_CON_MYSQL);
  }

  if (drizzle_con_listen(con_listen) != DRIZZLE_RETURN_OK)
  {
    fprintf(stderr, "drizzle_con_listen:%s\n", drizzle_error(drizzle));
    return 1;
  }

  while (1)
  {
    drizzle_con_st *con= drizzle_con_accept(drizzle, &ret);
    if (ret != DRIZZLE_RETURN_OK)
    {
      fprintf(stderr, "drizzle_con_accept:%s\n", drizzle_error(drizzle));
      return 1;
    }

    server(drizzle, con, &column);

    drizzle_con_free(con);

    if (count > 0)
    {
      count--;

      if (count == 0)
        break;
    }
  }

  drizzle_con_free(con_listen);
  drizzle_free(drizzle);

  return 0;
}

static void server(drizzle_st *drizzle, drizzle_con_st *con,
                   drizzle_column_st *column)
{
  drizzle_return_t ret;
  drizzle_command_t command;
  uint8_t *data= NULL;
  size_t total;
  char *field[2];
  char field1[DRIZZLE_FIELD_MAX];
  char field2[DRIZZLE_FIELD_MAX];
  size_t size[2];
  uint64_t x;

  field[0]= field1;
  field[1]= field2;

  /* Handshake packets. */
  drizzle_con_set_protocol_version(con, 10);
  drizzle_con_set_server_version(con, "libdrizzle example 1.2.3");
  drizzle_con_set_thread_id(con, 1);
  drizzle_con_set_scramble(con, (const uint8_t *)"ABCDEFGHIJKLMNOPQRST");
  drizzle_con_set_capabilities(con, DRIZZLE_CAPABILITIES_NONE);
  drizzle_con_set_charset(con, 8);
  drizzle_con_set_status(con, DRIZZLE_CON_STATUS_NONE);
  drizzle_con_set_max_packet_size(con, DRIZZLE_MAX_PACKET_SIZE);

  ret= drizzle_handshake_server_write(con);
  DRIZZLE_RETURN_CHECK(ret, "drizzle_handshake_server_write", drizzle)

  ret= drizzle_handshake_client_read(con);
  DRIZZLE_RETURN_CHECK(ret, "drizzle_handshake_client_read", drizzle);

  drizzle_result_st *result;
  if ((result= drizzle_result_create(con)) == NULL)
  {
    DRIZZLE_RETURN_ERROR("drizzle_result_create", drizzle)
  }

  ret= drizzle_result_write(con, result, true);
  DRIZZLE_RETURN_CHECK(ret, "drizzle_result_write", drizzle)

  /* Command loop. */
  while (1)
  {
    drizzle_result_free(result);
    free(data);

    data= (uint8_t *)drizzle_con_command_buffer(con, &command, &total, &ret);
    if (ret == DRIZZLE_RETURN_LOST_CONNECTION ||
        (ret == DRIZZLE_RETURN_OK && command == DRIZZLE_COMMAND_QUIT))
    {
      free(data);
      return;
    }
    DRIZZLE_RETURN_CHECK(ret, "drizzle_con_command_buffer", drizzle)

    if ((result= drizzle_result_create(con)) == NULL)
    {
      DRIZZLE_RETURN_ERROR("drizzle_result_create", drizzle)
    }

    if (command != DRIZZLE_COMMAND_QUERY)
    {
      ret= drizzle_result_write(con, result, true);
      DRIZZLE_RETURN_CHECK(ret, "drizzle_result_write", drizzle)
      continue;
    }

    drizzle_result_set_column_count(result, 2);

    ret= drizzle_result_write(con, result, false);
    DRIZZLE_RETURN_CHECK(ret, "drizzle_result_write", drizzle)

    /* Columns. */
    if (drizzle_column_create(result, column) == NULL)
    {
      DRIZZLE_RETURN_ERROR("drizzle_column_create", drizzle)
    }

    drizzle_column_set_catalog(column, "default");
    drizzle_column_set_db(column, "drizzle_test_db");
    drizzle_column_set_table(column, "drizzle_test_table");
    drizzle_column_set_orig_table(column, "drizzle_test_table");
    drizzle_column_set_name(column, "test_column_1");
    drizzle_column_set_orig_name(column, "test_column_1");
    drizzle_column_set_charset(column, 8);
    drizzle_column_set_size(column, DRIZZLE_FIELD_MAX);
    drizzle_column_set_type(column, DRIZZLE_COLUMN_TYPE_VARCHAR);

    ret= drizzle_column_write(result, column);
    DRIZZLE_RETURN_CHECK(ret, "drizzle_column_write", drizzle)

    drizzle_column_set_name(column, "test_column_2");
    drizzle_column_set_orig_name(column, "test_column_2");

    ret= drizzle_column_write(result, column);
    DRIZZLE_RETURN_CHECK(ret, "drizzle_column_write", drizzle)

    drizzle_column_free(column);

    drizzle_result_set_eof(result, true);

    ret= drizzle_result_write(con, result, false);
    DRIZZLE_RETURN_CHECK(ret, "drizzle_result_write", drizzle)

    /* Rows. */
    for (x= 0; x < DRIZZLE_RESULT_ROWS; x++)
    {
      size[0]= (size_t)snprintf(field[0], DRIZZLE_FIELD_MAX,
                                "field %" PRIu64 "-1", x);
      if (size[0] >= DRIZZLE_FIELD_MAX)
        size[0]= DRIZZLE_FIELD_MAX - 1;

      size[1]= (size_t)snprintf(field[1], DRIZZLE_FIELD_MAX,
                                "field %" PRIu64 "-2", x);
      if (size[1] >= DRIZZLE_FIELD_MAX)
        size[1]= DRIZZLE_FIELD_MAX - 1;

      /* This is needed for MySQL and old Drizzle protocol. */
      drizzle_result_calc_row_size(result, (drizzle_field_t *)field, size);

      ret= drizzle_row_write(result);
      DRIZZLE_RETURN_CHECK(ret, "drizzle_row_write", drizzle)

      /* Fields. */
      ret= drizzle_field_write(result, (drizzle_field_t)field[0], size[0],
                               size[0]);
      DRIZZLE_RETURN_CHECK(ret, "drizzle_field_write", drizzle)

      ret= drizzle_field_write(result, (drizzle_field_t)field[1], size[1],
                               size[1]);
      DRIZZLE_RETURN_CHECK(ret, "drizzle_field_write", drizzle)
    }

    ret= drizzle_result_write(con, result, true);
    DRIZZLE_RETURN_CHECK(ret, "drizzle_result_write", drizzle)
  }
}
