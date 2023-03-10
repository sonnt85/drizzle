/*
 * Drizzle Client & Protocol Library
 *
 * Copyright (C) 2012 Brian Aker (brian@tangent.org)
 * Copyright (C) 2008 Eric Day (eday@oddments.org)
 * All rights reserved.
 *
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
 */

/**
 * @file
 * @brief Tests for drizzle_st Structures
 */

#include <libdrizzle-1.0/t/common.h>

#include <assert.h>
#include <unistd.h>

#define DRIZZLE_TEST_PORT 12399

static void _log(const char *line, drizzle_verbose_t verbose,
                 void *context);
static drizzle_return_t _event_watch(drizzle_con_st *con, short events,
                                     void *context);

static int _event_watch_read_bits= 0;
static int _event_watch_write_bits= 0;

int main(void)
{
  close(STDOUT_FILENO);

  drizzle_verbose_t verbose;
  drizzle_st *drizzle;
  drizzle_st drizzle_buffer;
  drizzle_st *clone;
  drizzle_st clone_buffer;
  drizzle_con_st *con;
  drizzle_con_st *listen_con;
  drizzle_return_t ret;

  printf("sizeof(drizzle_st) = %zu\n", sizeof(drizzle_st));
  printf("sizeof(drizzle_return_t) = %zu\n", sizeof(drizzle_return_t));
  printf("sizeof(drizzle_verbose_t) = %zu\n", sizeof(drizzle_verbose_t));
  printf("sizeof(drizzle_options_t) = %zu\n", sizeof(drizzle_options_t));

  drizzle_test("drizzle_version");
  printf("  %s\n", drizzle_version());

  drizzle_test("drizzle_bugreport");
  printf("  %s\n", drizzle_bugreport());

  drizzle_test("drizzle_verbose_name");
  for (verbose= DRIZZLE_VERBOSE_NEVER; verbose <= DRIZZLE_VERBOSE_MAX;
       verbose++)
  {
    printf("  %s\n", drizzle_verbose_name(verbose));
  }

  drizzle_test("drizzle_create buffer");
  if ((drizzle= drizzle_create(&drizzle_buffer)) == NULL)
  {
    drizzle_test_error("returned NULL");
  }

  drizzle_test("drizzle_free buffer");
  drizzle_free(drizzle);

  drizzle_test("drizzle_create");
  if ((drizzle= drizzle_create(NULL)) == NULL)
  {
    drizzle_test_error("returned NULL");
  }

  drizzle_test("drizzle_clone");
  if ((clone= drizzle_clone(NULL, drizzle)) == NULL)
  {
    drizzle_test_error("drizzle_clone");
  }

  drizzle_test("drizzle_free");
  drizzle_free(clone);

  drizzle_test("drizzle_clone buffer");
  if ((clone= drizzle_clone(&clone_buffer, drizzle)) == NULL)
  {
    drizzle_test_error("returned NULL");
  }

  drizzle_test("drizzle_free buffer");
  drizzle_free(clone);

  drizzle_test("drizzle_error");
  if (strcmp(drizzle_error(drizzle), ""))
  {
    drizzle_test_error("error not empty");
  }

  drizzle_test("drizzle_errno");
  if (drizzle_errno(drizzle) != 0)
  {
    drizzle_test_error("errno not 0");
  }

  drizzle_test("drizzle_error_code");
  if (drizzle_error_code(drizzle) != 0)
  {
    drizzle_test_error("error_code not 0");
  }

  drizzle_test("drizzle_sqlstate");
  if (strcmp(drizzle_sqlstate(drizzle), ""))
  {
    drizzle_test_error("sqlstate not empty");
  }

  /* @todo remove this option with new API. */
  drizzle_remove_options(drizzle, DRIZZLE_FREE_OBJECTS);

  drizzle_test("drizzle_options");
  if (drizzle_options(drizzle) != DRIZZLE_ALLOCATED)
  {
    drizzle_test_error("expected options not set");
  }

  drizzle_test("drizzle_add_options");
  drizzle_add_options(drizzle, DRIZZLE_NON_BLOCKING);

  drizzle_test("drizzle_options");
  if (drizzle_options(drizzle) != (DRIZZLE_ALLOCATED | DRIZZLE_NON_BLOCKING))
  {
    drizzle_test_error("expected options not set");
  }

  drizzle_test("drizzle_remove_options");
  drizzle_remove_options(drizzle, DRIZZLE_NON_BLOCKING);

  drizzle_test("drizzle_options");
  if (drizzle_options(drizzle) != DRIZZLE_ALLOCATED)
  {
    drizzle_test_error("expected options not set");
  }

  drizzle_test("drizzle_set_options");
  drizzle_set_options(drizzle, DRIZZLE_ALLOCATED | DRIZZLE_NON_BLOCKING);

  drizzle_test("drizzle_options");
  if (drizzle_options(drizzle) != (DRIZZLE_ALLOCATED | DRIZZLE_NON_BLOCKING))
  {
    drizzle_test_error("expected options not set");
  }

  drizzle_test("drizzle_set_options");
  drizzle_set_options(drizzle, DRIZZLE_ALLOCATED);

  drizzle_test("drizzle_options");
  if (drizzle_options(drizzle) != DRIZZLE_ALLOCATED)
  {
    drizzle_test_error("expected options not set");
  }

  drizzle_test("drizzle_set_timeout");
  drizzle_set_timeout(drizzle, 1234);

  drizzle_test("drizzle_timeout");
  if (drizzle_timeout(drizzle) != 1234)
  {
    drizzle_test_error("expected timeout not set");
  }

  drizzle_test("drizzle_set_verbose");
  drizzle_set_verbose(drizzle, DRIZZLE_VERBOSE_CRAZY);

  drizzle_test("drizzle_verbose");
  if (drizzle_verbose(drizzle) != DRIZZLE_VERBOSE_CRAZY)
  {
    drizzle_test_error("expected verbose not set");
  }

  drizzle_test("drizzle_set_log_fn");
  drizzle_set_log_fn(drizzle, _log, NULL);

  drizzle_test("drizzle_set_event_watch_fn");
  drizzle_set_event_watch_fn(drizzle, _event_watch, NULL);

  /* Create a listening connection to verify that event_watch_fn gets called. */
  listen_con= drizzle_con_create(drizzle, NULL);
  assert(listen_con != NULL);
  drizzle_con_set_tcp(listen_con, "localhost", DRIZZLE_TEST_PORT);
  ret= drizzle_con_listen(listen_con);
  assert(ret == DRIZZLE_RETURN_OK);  
  if (_event_watch_read_bits == 0)
  {
    drizzle_test_error("event_watch_fn not called to wait for connections");
  }
  _event_watch_read_bits= 0;

  /* Attempt a non-blocking connection. */
  drizzle_add_options(drizzle, DRIZZLE_NON_BLOCKING);
  con= drizzle_con_add_tcp(drizzle, NULL, "localhost", DRIZZLE_TEST_PORT, "user", "pw", "db",
                           DRIZZLE_CON_NONE);
  assert(con != NULL);
  ret= drizzle_con_connect(con);
  assert(ret == DRIZZLE_RETURN_IO_WAIT || ret == DRIZZLE_RETURN_COULD_NOT_CONNECT);
  if (ret == DRIZZLE_RETURN_IO_WAIT && _event_watch_read_bits == 0 && _event_watch_write_bits == 0)
  {
    drizzle_test_error("event_watch_fn not called to wait for I/O");
  }
  drizzle_con_free(con);
  _event_watch_read_bits= 0;
  _event_watch_write_bits= 0;

  drizzle_con_free(listen_con);

  drizzle_test("drizzle_free");
  drizzle_free(drizzle);

  return 0;
}

static void _log(const char *line, drizzle_verbose_t verbose,
                 void *context)
{
  (void) line;
  (void) verbose;
  (void) context;
}

static drizzle_return_t _event_watch(drizzle_con_st *con, short events,
                                     void *context)
{
  (void) con;
  (void) events;
  (void) context;

  /* fake register the file descriptor */
  int fd= drizzle_con_fd(con);
  assert(0 <= fd && fd < (int) sizeof(_event_watch_read_bits) * 8);
  if (events & POLLIN) {
    _event_watch_read_bits|= 1 << fd;
  } else {
    _event_watch_read_bits&= ~(1 << fd);
  }
  if (events & POLLOUT) {
    _event_watch_write_bits|= 1 << fd;
  } else {
    _event_watch_write_bits&= ~(1 << fd);
  }

  return DRIZZLE_RETURN_OK;
}
