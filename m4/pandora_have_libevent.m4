dnl  Copyright (C) 2009 Sun Microsystems, Inc.
dnl This file is free software; Sun Microsystems, Inc.
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

#--------------------------------------------------------------------
# Check for libevent
#--------------------------------------------------------------------


AC_DEFUN([_PANDORA_SEARCH_LIBEVENT],[
  AC_REQUIRE([AC_LIB_PREFIX])

  AC_LIB_HAVE_LINKFLAGS(event,,
  [
    #include <sys/types.h>
    #include <sys/time.h>
    #include <stdlib.h>
    #include <event.h>
  ],[
    struct bufferevent bev;
    bufferevent_settimeout(&bev, 1, 1);
    event_init();
    event_loop(EVLOOP_ONCE);
  ]) 

  AM_CONDITIONAL(HAVE_LIBEVENT, [test "x${ac_cv_libevent}" = "xyes"])

  AS_IF([test "x${ac_cv_libevent}" = "xyes"],[
    save_LIBS="${LIBS}"
    LIBS="${LIBS} ${LTLIBEVENT}"
    AC_CHECK_FUNCS(event_base_new)
    AC_CHECK_FUNCS(event_base_free)
    AC_CHECK_FUNCS(event_base_get_method)
    LIBS="$save_LIBS"
  ])
])

AC_DEFUN([_PANDORA_HAVE_LIBEVENT],[

  AC_ARG_ENABLE([libevent],
    [AS_HELP_STRING([--disable-libevent],
      [Build with libevent support @<:@default=on@:>@])],
    [ac_enable_libevent="$enableval"],
    [ac_enable_libevent="yes"])

  _PANDORA_SEARCH_LIBEVENT
])


AC_DEFUN([PANDORA_HAVE_LIBEVENT],[
  AC_REQUIRE([_PANDORA_HAVE_LIBEVENT])
])

AC_DEFUN([_PANDORA_REQUIRE_LIBEVENT],[
  ac_enable_libevent="yes"
  _PANDORA_SEARCH_LIBEVENT

  AS_IF([test x$ac_cv_libevent = xno],[
    PANDORA_MSG_ERROR([libevent is required for ${PACKAGE}. On Debian this can be found in libevent-dev. On RedHat this can be found in libevent-devel.])
  ])
])

AC_DEFUN([PANDORA_REQUIRE_LIBEVENT],[
  AC_REQUIRE([_PANDORA_REQUIRE_LIBEVENT])
])

AC_DEFUN([PANDORA_LIBEVENT_RECENT],[
  dnl FIXME I really wanted to check for existence of EVHTTP_REQ_DELETE, 
  dnl but autoconf gods were not favorable to me, so the below is all I got
  AC_CACHE_CHECK([if libevent is recent enough],
    [pandora_cv_libevent_recent],
    [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
#include <event2/event.h>
#include <event2/http.h>
    ]])],
    [pandora_cv_libevent_recent=yes],
    [pandora_cv_libevent_recent=no])])
])
