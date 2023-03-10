# Info about conditional builds:
#
# The logic is opposite.  A parameter listed below as 'bcond_with' will
# not build by default, but will if '--with <param>' is passed to 
# rpmbuild.  The oposite is true for anything listed as 'bcond_without'
# will build by default, but can be disabled by passing '--without <param>'
# to rpmbuild.
#
# See: http://www.rpm.org/wiki/PackagerDocs/ConditionalBuilds
#

# perform tests?
%bcond_without tests

# plugins which are enabled by default
%bcond_without auth_http
%bcond_without auth_file
%bcond_without auth_ldap
%bcond_without auth_pam
%bcond_without debug
%bcond_without logging_query
%bcond_without mysql_protocol
%bcond_without simple_user_policy
%bcond_without slave 
%bcond_without regex_policy
%bcond_without http_functions
%bcond_without js
%bcond_without json_server
%bcond_without auth_schema 
%bcond_without query_log

# plugins disabled by default, either missing deps
# or need to be 'figured out' why they're not building 
# Note: this list is mostly informational of which
# plugins are not yet handled, some of these we are
# not even trying to build with this spec.
%bcond_with gearman_udf
%bcond_with logging_gearman
%bcond_with memcached_functions
%bcond_with memcached_stats
%bcond_with rabbitmq
%bcond_with zeromq


%define tarversion 7.2.4-alpha
%define rpmversion 7.2.4


Name:       drizzle
Summary:    A Lightweight SQL Database for Cloud and Web 
Epoch:      1
Version:    %{rpmversion}
Release:    1%{?dist}

# All sources under drizzled/ are GPLv2.  
# Sources under plugin/ are either GPLv2 or BSD.
License:    GPLv2 and BSD
Group:      Applications/Databases 
URL:        http://launchpad.net/drizzle
BuildRoot:  %(mktemp -ud %{_tmppath}/%{name}-%{version}-%{release}-XXXXXX)

Source0:    http://launchpad.net/drizzle/fremont/2011-11-13/+download/%{name}-%{tarversion}.tar.gz 
Source1:    drizzled.cnf
Source2:    drizzle.cnf
Source3:    drizzled.init

# Generates plugin-configs.patch from config files in conf.d.  NOTE:
# conf.d is not included in the SRPM, this script is here for the packagers
# convenience to generate the plugin-configs.patch.
# Source4:    gen_plugin_configs_patch.sh

# Patches
Patch3:     drizzle7-2011.01.07-tests.patch 
# temporary fix for: https://bugs.launchpad.net/drizzle/+bug/712194
Patch7:     plugin-configs.patch

BuildRequires:  ncurses-devel, pcre-devel, gperf, autoconf
BuildRequires:  protobuf-devel, zlib-devel, readline-devel
BuildRequires:  pam-devel, libevent-devel, gnutls-devel
BuildRequires:  bison-devel, chrpath, doxygen, gettext-devel, perl
BuildRequires:  boost-devel >= 1.39, boost-iostreams
%if %{with js}
BuildRequires:  v8-devel
%endif

# FIX ME: Remove after LP#735850 is resolved
BuildRequires:  chrpath


%if 0%{?el5} 
BuildRequires:  uuid-devel, python-uuid, curl-devel
BuildRequires:  gcc44-c++ >= 4.4
%else
BuildRequires:  gcc-c++ >= 4.4
BuildRequires:  libuuid-devel, libcurl-devel
%endif

Requires(pre):  shadow-utils
Requires:       %{name}-lib = %{version}-%{release}
Requires:       boost-iostreams
%if %{with js}
Requires:       v8
%endif

Provides:       drizzle = %{epoch}:%{version}-%{release}
Obsoletes:      drizzle7

%description
Drizzle is a transactional SQL92 compliant relational database, geared
towards a plugin based architecture.

%package devel
Summary:    Header Files and Development Libraries for %{name}
Group:      Applications/Databases 
Requires:   %{name} = %{epoch}:%{version}-%{release}
Provides:   drizzle-devel = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-devel

%description devel
This package contains the header files and development libraries
for %{name}. If you like to develop programs using %{name}, 
you will need to install %{name}-devel.

%package lib 
Summary:    Common Libraries Shared by %{name} Client and Server
Group:      Applications/Databases 
Requires:   %{name} = %{epoch}:%{version}-%{release}
Provides:   drizzle-lib = %{version}-%{release}
Obsoletes:  drizzle7-lib

%description lib 
Common Libraries Shared by %{name} Client and Server

%package client
Summary:    Client Utilities for %{name}
Group:      Applications/Databases 
Requires:   %{name} = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-client

%description client
Client utilities for %{name}.

%package server
Summary:    Server Daemon and Utilities for %{name}
Group:      Applications/Databases 
Requires:   %{name} = %{epoch}:%{version}-%{release}
Provides:   drizzle-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-server 
Obsoletes:  drizzle7-plugin-sleep

%description server
Server daemon and utilities for %{name}.

# OPTIONAL PLUGINS

%if %{with auth_file}
%package plugin-auth-file
Summary: File Based Authentication Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-auth-file

%description plugin-auth-file
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the File Based Authentication plugin.
%endif

%if %{with auth_http}
%package plugin-auth-http
Summary: HTTP Authentication Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-auth-http

%description plugin-auth-http
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the HTTP Authentication plugin.
%endif

%if %{with auth_ldap}
%package plugin-auth-ldap
Summary: LDAP Authentication Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
BuildRequires: openldap-devel
Requires: openldap
Obsoletes:  drizzle7-plugin-auth-ldap

%description plugin-auth-ldap
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the LDAP Authentication plugin.
%endif

%if %{with auth_pam}
%package plugin-auth-pam
Summary: PAM Authentication Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-auth-pam

%description plugin-auth-pam
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the PAM Authentication plugin.
%endif

%if %{with debug}
%package plugin-debug
Summary: Debug Console Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-debug

%description plugin-debug
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Debug Console plugin.
%endif

%if %{with gearman_udf}
%package plugin-gearman-udf
Summary: Gearman User Defined Functions Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Requires: libgearman
BuildRequires: libgearman-devel
Obsoletes:  drizzle7-plugin-gearman-udf

%description plugin-gearman-udf
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Gearman User Defined Functions plugin.
%endif

%if %{with logging_gearman}
%package plugin-logging-gearman
Summary: Gearman Logging Plugin for %{name}
Group: Applications/Databases
BuildRequires: libgearman-devel
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Requires: libgearman
Obsoletes:  drizzle7-plugin-logging-gearman

%description plugin-logging-gearman
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Gearman Logging plugin.
%endif

%if %{with logging_query}
%package plugin-logging-query
Summary: Query Logging Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-logging-query

%description plugin-logging-query
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Query Logging plugin.
%endif 

%if %{with mysql_protocol}
%package plugin-mysql-protocol
Summary: MySQL Protocol Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes: drizzle7-plugin-mysql-protocol

%description plugin-mysql-protocol
Drizzle is a database optimized for Cloud and Net applications. It is designed 
for massive concurrency on modern multi-cpu/core architecture. The code is 
originally derived from MySQL.

This package provides the MySQL Protocol plugin.
%endif

%if %{with rabbitmq}
%package plugin-rabbitmq
Summary: RabbitMQ Transaction Log Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-rabbitmq

%description plugin-rabbitmq
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the RabbitMQ Transaction Log plugin.
%endif 

%if %{with simple_user_policy}
%package plugin-simple-user-policy
Summary: Simple User Policy Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-simple-user-policy

%description plugin-simple-user-policy
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Simple User Policy plugin.
%endif 

%if %{with slave}
%package plugin-slave
Summary: Slave Replication Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-slave

%description plugin-slave
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Slave Replication plugin.
%endif

%if %{with regex_policy}
%package plugin-regex-policy
Summary: Regex Policy Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-regex-policy

%description plugin-regex-policy
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Regex Policy plugin.
%endif

%if %{with http_functions}
%package plugin-http-functions
Summary: HTTP Functions Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-http-functions

%description plugin-http-functions
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the HTTP Functions plugin.
%endif

%if %{with json_server}
%package plugin-json-server
Summary: JSON Server Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-json-server

%description plugin-json-server
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the JSON Server plugin.
%endif

%if %{with auth_schema}
%package plugin-auth-schema
Summary: Auth Schema Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-auth-schema

%description plugin-auth-schema
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Auth Schema plugin.
%endif

%if %{with query_log}
%package plugin-query-log
Summary: Query Log Plugin for %{name}
Group: Applications/Databases
Requires: %{name}-server = %{epoch}:%{version}-%{release}
Obsoletes:  drizzle7-plugin-query-log

%description plugin-query-log
Drizzle is a database optimized for Cloud and Net applications. It is designed
for massive concurrency on modern multi-cpu/core architecture. The code is
originally derived from MySQL.

This package provides the Query Log plugin.
%endif

%prep
%setup -q -n %{name}-%{tarversion}

# for %%doc
cp -a plugin/auth_ldap/schema/README.auth_ldap .

# Patches
%patch3 -p1 -b .tests
%patch7 -p1 -b .plugin-configs


%build
%if 0%{?el5} || 0%{?amzn1} 
export CFLAGS="%{optflags} -Wp,-U_FORTIFY_SOURCE"
%endif

# FIX ME: Warnings treated as errors in mock, but not straight builds... ???
export CXXFLAGS="${CXXFLAGS} -Wno-error"

# Need to handle optional plugins properly
OPTS="--disable-rpath 
      --disable-static
      --localstatedir=/var/lib/drizzle
      --without-auth-test-plugin 
      --without-hello-world-plugin
      --without-hello-events-plugin
      --without-tableprototester-plugin"

# Use for tmp location
mkdir -p conf.d

# Set configure options based on whether we are building with or without
# each plugin.
function optionally_include() {
    plugin=$1
    enabled=$2
    dash_plugin=$(echo $plugin | sed 's/_/-/g')
    if [ $enabled -eq 1 ]; then
        OPTS="${OPTS} --with-${dash_plugin}-plugin --disable-${dash_plugin}-plugin"
        cp -a plugin/${plugin}/plugin.cnf conf.d/${dash_plugin}.cnf
    else
        OPTS="${OPTS} --without-${dash_plugin}-plugin --disable-${dash_plugin}-plugin"
    fi
}

# Unfortunately we have to list all the optional plugins here as
# we can't do a for loop with % macros
optionally_include auth_http %{with auth_http}
optionally_include auth_file %{with auth_file}
optionally_include auth_ldap %{with auth_ldap}
optionally_include auth_pam %{with auth_pam}
optionally_include debug %{with debug}
optionally_include logging_query %{with logging_query}
optionally_include mysql_protocol %{with mysql_protocol}
optionally_include rabbitmq %{with rabbitmq}
optionally_include simple_user_policy %{with simple_user_policy}
optionally_include gearman_udf %{with gearman_udf}
optionally_include logging_gearman %{with logging_gearman}
optionally_include slave %{with slave}
optionally_include regex_policy %{with regex_policy}
optionally_include http_functions %{with http_functions}
optionally_include json_server %{with json_server}
optionally_include auth_schema %{with auth_schema}
optionally_include query_log %{with query_log}


%configure $OPTS  
%{__make}

%check
%if %{with tests}
%{__make} test
%endif

%install
%{__rm} -rf %{buildroot}
%{__mkdir_p} %{buildroot}%{_sysconfdir}/init.d \
             %{buildroot}%{_sysconfdir}/logrotate.d \
             %{buildroot}%{_sysconfdir}/drizzle \
             %{buildroot}%{_sysconfdir}/drizzle/conf.d \
             %{buildroot}%{_localstatedir}/log/drizzle \
             %{buildroot}%{_localstatedir}/lib/drizzle \
             %{buildroot}%{_localstatedir}/run/drizzle

%{__make} install DESTDIR="%{buildroot}" AM_INSTALL_PROGRAM_FLAGS=""

# Supporting files
%{__install} -m 0644 %SOURCE1 %{buildroot}%{_sysconfdir}/drizzle/drizzled.cnf
%{__install} -m 0644 %SOURCE2 %{buildroot}%{_sysconfdir}/drizzle/drizzle.cnf
%{__install} -m 0755 %SOURCE3 %{buildroot}%{_sysconfdir}/init.d/drizzled

# Plugin configs
pushd conf.d
for i in $(echo *); do
    %{__install} -m 0644 $i %{buildroot}%{_sysconfdir}/drizzle/conf.d/
done
popd

# Find translations in /usr/share/locale/*/LC_MESSAGES/drizzle.mo
# And mark them with %lang(locale) and %doc, save all of that in drizzle.lang
# They are then included in %files below with -f option
%find_lang %{name}

# Cleanup
%{__rm} -f %{buildroot}%{_datadir}/drizzle/drizzle.server
%{__rm} -f %{buildroot}%{_libdir}/drizzle/*.la
%{__rm} -f %{buildroot}%{_libdir}/libdrizzledmessage.la
%{__rm} -f %{buildroot}%{_datadir}/drizzle/README.auth_ldap


# libdrizzle is packaged in lp:libdrizzle. Since we are not
# putting these in a package now, we must delete them to avoid error.
%{__rm} -rf %{buildroot}%{_libdir}/libdrizzle.so*
%{__rm} -rf %{buildroot}%{_libdir}/libdrizzle.la
%{__rm} -rf %{buildroot}%{_includedir}/libdrizzle-1.0/
%{__rm} -rf %{buildroot}%{_libdir}/pkgconfig/libdrizzle-1.0.pc
%{__rm} -rf %{buildroot}%{_libdir}/pkgconfig/libdrizzle.pc
%{__rm} -rf %{buildroot}%{_includedir}/libdrizzle/drizzle.h
%{__rm} -rf %{buildroot}%{_includedir}/libdrizzle/drizzle_client.h





# Remove RPATH:  Should no longer do this after the following is 
# resolved:
# 
# https://bugs.launchpad.net/drizzle/+bug/735850
# 
chrpath --delete %{buildroot}%{_libdir}/%{name}/libslave_plugin.so
chrpath --delete %{buildroot}%{_bindir}/drizzleslap
chrpath --delete %{buildroot}%{_bindir}/drizzledump
chrpath --delete %{buildroot}%{_bindir}/drizzleimport
chrpath --delete %{buildroot}%{_bindir}/drizzle
chrpath --delete %{buildroot}%{_sbindir}/drizzled

%clean
%{__rm} -rf %{buildroot}

%post -p /sbin/ldconfig
%postun -p /sbin/ldconfig
 
%pre server
getent group drizzle >/dev/null || groupadd -r drizzle
getent passwd drizzle >/dev/null || \
useradd -r -g drizzle -d /var/lib/drizzle -s /sbin/nologin \
-c "Drizzle Server User" drizzle
exit 0


%post server
if [ $1 = 1 ]; then
    /sbin/chkconfig --add drizzled
fi
if [ $1 -ge 1 ]; then
    /sbin/service drizzled condrestart || :
fi

%preun server
if [ $1 = 0 ]; then
    /sbin/service drizzled stop || :
    /sbin/chkconfig --del drizzled
fi


%files -f %{name}.lang
%defattr (-,root,root,-) 
%doc AUTHORS COPYING NEWS README
%dir %{_sysconfdir}/drizzle
%dir %{_sysconfdir}/drizzle/conf.d
%{_mandir}/man8/drizzled.8.gz


%files lib
%defattr (-,root,root,-) 
%{_libdir}/libdrizzledmessage.so*


%files client
%defattr (-,root,root,-) 
%config(noreplace) %{_sysconfdir}/drizzle/drizzle.cnf
%{_mandir}/man1/drizzle.1*
%{_mandir}/man1/drizzleimport*
%{_mandir}/man1/drizzleslap.1*
%{_bindir}/drizzle*


%files server 
%defattr (-,root,root,-) 
%attr(0755,drizzle,drizzle) %dir %{_localstatedir}/log/drizzle
%attr(0755,drizzle,drizzle) %dir %{_localstatedir}/lib/drizzle
%attr(0755,drizzle,drizzle) %dir %{_localstatedir}/run/drizzle
%config(noreplace) %{_sysconfdir}/drizzle/drizzled.cnf
%{_mandir}/man8/drizzled.8.gz
%{_sysconfdir}/init.d/drizzled
%{_sbindir}/drizzled

# These are core plugins bundled with -server 
%{_libdir}/drizzle/libascii_plugin.so
%{_libdir}/drizzle/libbenchmark_plugin.so
%{_libdir}/drizzle/libcharlength_plugin.so
%{_libdir}/drizzle/libcompression_plugin.so
%{_libdir}/drizzle/libconnection_id_plugin.so
%{_libdir}/drizzle/libcrc32_plugin.so
%{_libdir}/drizzle/libdefault_replicator_plugin.so
%{_libdir}/drizzle/libhex_functions_plugin.so
%{_libdir}/drizzle/liblength_plugin.so
%{_libdir}/drizzle/liblogging_query_plugin.so
%{_libdir}/drizzle/libmd5_plugin.so
%{_libdir}/drizzle/libmulti_thread_plugin.so
%{_libdir}/drizzle/libperformance_dictionary_plugin.so
%{_libdir}/drizzle/librand_function_plugin.so
%{_libdir}/drizzle/libreverse_function_plugin.so
%{_libdir}/drizzle/libshow_schema_proto_plugin.so
%{_libdir}/drizzle/libsubstr_functions_plugin.so
%{_libdir}/drizzle/libshutdown_function_plugin.so
%{_libdir}/drizzle/libfunction_dictionary_plugin.so
%{_libdir}/drizzle/libutility_dictionary_plugin.so
%{_libdir}/drizzle/libtrigger_dictionary_plugin.so
%{_libdir}/drizzle/libstorage_engine_api_tester_plugin.so
%{_libdir}/drizzle/liblogging_stats_plugin.so
%{_libdir}/drizzle/libversion_plugin.so
%{_libdir}/drizzle/libuuid_function_plugin.so
%{_libdir}/drizzle/libjs_plugin.so

%files devel
%defattr (-,root,root,-) 
%{_includedir}/drizzle
%{_libdir}/pkgconfig/drizzle.pc

# OPTIONAL PLUGINS

%if %{with auth_file}
%files plugin-auth-file
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/auth-file.cnf
%{_libdir}/drizzle/libauth_file_plugin.so
%endif

%if %{with auth_http}
%files plugin-auth-http
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/auth-http.cnf
%{_libdir}/drizzle/libauth_http_plugin.so
%endif

%if %{with auth_ldap}
%files plugin-auth-ldap
%defattr (-,root,root,-)
%doc README.auth_ldap 
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/auth-ldap.cnf
%{_datadir}/%{name}/drizzle_openldap.ldif
%{_datadir}/%{name}/drizzle_openldap.schema
%{_datadir}/%{name}/drizzle_create_ldap_user
%{_libdir}/drizzle/libauth_ldap_plugin.so
%endif

%if %{with auth_pam}
%files plugin-auth-pam
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/auth-pam.cnf
%{_libdir}/drizzle/libauth_pam_plugin.so
%endif

%if %{with debug}
%files plugin-debug
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/debug.cnf
%{_libdir}/drizzle/libdebug_plugin.so
%endif

%if %{with gearman_udf}
%files plugin-gearman-udf
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/gearman-udf.cnf
%{_libdir}/drizzle/libgearman_udf_plugin.so
%endif

%if %{with logging_gearman}
%files plugin-logging-gearman
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/logging-gearman.cnf
%{_libdir}/drizzle/liblogging_gearman_plugin.so
%endif

%if %{with logging_query}
%files plugin-logging-query
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/logging-query.cnf
%{_libdir}/drizzle/liblogging_query_plugin.so
%endif

%if %{with mysql_protocol}
%files plugin-mysql-protocol
%defattr (-,root,root,-)
# mysql_protocol is static
# %%{_libdir}/drizzle/libmysql_protocol_plugin.so
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/mysql-protocol.cnf
%endif

%if %{with rabbitmq}
%files plugin-rabbitmq
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/rabbitmq.cnf
%{_libdir}/drizzle/librabbitmq_plugin.so
%endif

%if %{with simple_user_policy}
%files plugin-simple-user-policy
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/simple-user-policy.cnf
%{_libdir}/drizzle/libsimple_user_policy_plugin.so
%endif

%if %{with slave}
%files plugin-slave
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/slave.cnf
%{_libdir}/drizzle/libslave_plugin.so
%endif

%if %{with regex_policy}
%files plugin-regex-policy
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/regex-policy.cnf
%{_libdir}/drizzle/libregex_policy_plugin.so
%endif

%if %{with http_functions}
%files plugin-http-functions
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/http-functions.cnf
%{_libdir}/drizzle/libhttp_functions_plugin.so
%endif

%if %{with json_server}
%files plugin-json-server
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/json-server.cnf
%{_libdir}/drizzle/libjson_server_plugin.so
%endif

%if %{with auth_schema}
%files plugin-auth-schema
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/auth-schema.cnf
%{_libdir}/drizzle/libauth_schema_plugin.so
%endif

%if %{with query_log}
%files plugin-query-log
%defattr (-,root,root,-)
%config(noreplace) %{_sysconfdir}/drizzle/conf.d/query-log.cnf
%{_libdir}/drizzle/libquery_log_plugin.so
%endif


# Note: Since we are generating RPMs completely automatically, we have
# a generic changelog entry for that. If you actually change the spec
# file or something rpm related, you should add an actual hand written
# entry for that version. You will need to comment out the generic
# entry for that release, and it needs to be uncommented again for 
# the next release.

%changelog
* %(date "+%a %b %d %Y") (Automated Drizzle RPM build) <drizzle-discuss@launchpad.net> - %{version}-%{release}
- New RPMs against newest upstream sources. Please see Drizzle release
  notes for details: https://launchpad.net/drizzle/+milestones

* Sun Mar 11 2012 Henrik Ingo <henrik.ingo@avoinelama.fi> - 7.1.31.2520-1
- Removed Filtered replicator plugin as it is disabled in upstream.
- Transaction Log was also deleted, but those were part of
  main rpm so no change in spec file. This also removes drizzletrx utility.

* Thu Feb 02 2012 Henrik Ingo <henrik.ingo@avoinelama.fi> - 7.1.31-1
- Drizzle name and versioning is changing from drizzle7-2012.01.30 to
  drizzle-7.1.31. Changing package name, versions accordingly, also need
  to add a new epoch since 7 < 2012.

* Fri Jan 06 2012 Henrik Ingo <henrik.ingo@avoinelama.fi> - 2011.11.29.2484-1
- Moved this spec file into drizzle repository so we can build rpms
  directly with make rpm. (was lp:~drizzle-developers/pkg-drizzle/drizzle7-dev.rpm 
  revno 94).

* Sun Jan 01 2012 Henrik Ingo <henrik.ingo@avoinelama.fi> - 2011.11.29.2481-2
- Hrmpf... server doesn't actually start:
-  --user can only be given in cmd line (ie init script), not in 
   drizzled.cnf.
- Turns out --user and --daemon don't work well together, so have to use
  sudo -u drizzle /usr/sbin/drizzled --daemon instead.
  https://bugs.launchpad.net/drizzle/+bug/890910
- Remove 2>&1 so that errors are shown to user. Currently all auth and
  policy plugins will break drizzled due to installing broken stuff into
  /etc/drizzle/conf.d/ so let's at least not silently fail.
  When all rpms are fixed to work by default, then this can be reverted.
- Other:
- Don't package hello_events plugin, it's just an example.
- Don't build with --enable-profiling. (LP#770420)
- Realize I must package js with server, not in a separate rpm.

* Fri Dec 30 2011 Henrik Ingo <henrik.ingo@avoinelama.fi> - 2011.11.29.2481-1
- Upstream: haildb and pbms were removed. 
- Upstream: js added.
- Upstream: libdrizzle-2.0 is no longer there. Package libdrizzle* now
  contains libdrizzle-1.0.
- Added %find_lang macro to include all the translation files.

* Tue Nov 15 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.11.29-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-11-13

* Mon Nov 14 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.10.28-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-10-25
- Removing references to syslog, errmsg_stderr plugins (built static now)

* Thu Aug 11 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.08.23-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-08-01

* Wed Jul 06 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.07.21-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-07-04
- dbqp tests all fail, switching back to old test method

* Tue Jun 28 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.06.20-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-06-20
- Run dbqp tests by default.
- Removed rot13 plugin (per upstream)
- Removed drizzleadmin utility (per upstream)

* Thu Jun 16 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.06.19-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-06-06
- Adding http_functions, json_server sub packages

* Wed Jun 01 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.05.18-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-05-23

* Wed May 04 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.04.15-4
- Change libdrizzle to libdrizzle1, and libdrizzle2 to libdrizzle.

* Tue May 03 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.04.15-3
- Add 'user = drizzle' to drizzled.cnf

* Tue Apr 19 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.04.15-2
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-04-11

* Fri Apr 01 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.03.14-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/fremont/2011-03-28
- Add hacks to resolve LP#735850.  BuildRequires: chrpath, and added
  chrpath --delete for files showing rpaths.

* Tue Mar 22 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.03.13-2
- Add support for building on Amazon AMI (amzn1)
- Add regex-policy plugin

* Tue Mar 15 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.03.13-1
- Latest sources from upstream.  Release notes available at:
- https://launchpad.net/drizzle/+milestone/2011-03-14
- Removed sub packages per upstream removal from source: archive, 
  blitzdb, blackhole.
 
* Wed Mar 02 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.03.11-2
- BuildRequires: python-uuid on el5 (for dbqp tests)

* Tue Mar 01 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.03.11-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2011-02-28
- sleep plugin remove, now builds static under -server
- Added -slave plugin/subpackage
- Use Source4 gen_plugin_configs_patch.sh to generate the 
  plugin-configs.patch file

* Tue Feb 15 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.02.10-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2011-02-14
- Use --daemon rather than sending drizzled to background via &
- Removed Patch6: drizzle7-2011.02.09-disable_console.patch
- Added 'debug' plugin per upstream
- Bundled console plugin under -server (static)

* Fri Feb 11 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.02.09-2
- BuildRequires: autoconf (autoheader is called during ./configure

* Wed Feb 02 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.02.09-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/+milestone/2011-01-31
- All optional plugins separated out into subpackages
- Added Patch6: drizzle7-2011.02.09-disable_console.patch

* Fri Jan 21 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.01.08-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/+milestone/2011-01-17
- No longer package csv, filesystem_engine plugins
- Temporarily disable tests (--reorder bug)

* Tue Jan 04 2011 BJ Dierkes <wdierkes@rackspace.com> - 2011.01.07-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2011-01-03
- No longer package pbxt_plugin (disabled upstream)
- crash_function also removed
- Enable testing
- No longer BuildRequire: libdrizzle-devel
- Disable rpath via configure
- Added Patch3: drizzle7-2011.01.07-tests.patch 

* Tue Dec 28 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.12.06-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2010-12-20

* Wed Dec 08 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.12.05-1
- Latest sources from upstream.  Release notes available at: 
  https://launchpad.net/drizzle/elliott/2010-12-06

* Thu Nov 25 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.11.04-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2010-11-22
- Remove hack in drizzled.init to force reading the defaults file
  meaning let drizzled use its internal default config locations.
- Remove Patch2: boost_iostreams.patch (applied upstream)

* Wed Nov 17 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.11.03-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2010-11-08
- Add /etc/drizzle/conf.d
- Add mysql-protocol subpackage (disabled by default as to not conflict
  with mysqld/mysql-server)
- BuildRequires/Requires boost-iostreams
- Added Patch2: boost_iostreams.patch.  Work around for Fedora BZ#676735
- Added temporary hack to drizzled.init to work around LP#673579 by 
  passing --defaults-file to drizzled directly.
- Added storage_engine_api_tester plugin

* Mon Nov 08 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.10.02-2
- Rebuild

* Thu Oct 28 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.10.02-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2010-10-25
- No longer list the following plugins under -server %%files as they have been 
  removed: pool_of_threads, single_thread
- Removed file listing of the following as they are now static under -server: 
  database_function, transaction_log, user_function

* Mon Oct 18 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.10.01-1
- Latest sources from upstream.  Release notes available at:
  https://launchpad.net/drizzle/elliott/2010-10-11
- Added utility_dictionary_plugin

* Mon Oct 04 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.09.1802-2
- No longer parse 'pid_file' from drizzle config (drizzle no longer
  supports the print-defaults options).
- Set localstatedir=/var/lib/drizzle

* Thu Sep 30 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.09.1802-1
- Latest sources from upstream.
- Name change to drizzle7 per upstream source
- Rename /usr/sbin/drizzled to /usr/sbin/drizzled7
- Remove all 'Provides' for builtin plugins (its excessive)
- BuildRequires: boost-devel >= 1.39

* Thu Sep 02 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.08.1742-1
- Latest sources from upstream.
- Removed find_lang support (none found) 
- Added libdrizzle/libdrizzle-devel sub packages
- Added plugins: crash_function, filesystem_engine, shutdown_function
- Simplify default configs

* Tue Jul 20 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.07.1666-1
- Latest sources from upstream.

* Mon Jul 12 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.07.1644-1
- Latest sources from upstream.
- Removed references to logging_syslog plugin
- Added plugins: auth_test, pbms, pbxt, syslog
- Added -Wno-error to CXXFLAGS: LP604733
   https://bugs.launchpad.net/drizzle/+bug/604733

* Tue Jun 22 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.06.1634-1
- Latest sources from upstream.
- Removed Patch1: drizzle-2010.06.1607-protobuf.patch (Fedora 13 only)

* Wed Jun 09 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.06.1607-1
- Latest sources from upstream.
- Add rand_function plugin
- Added Patch1: drizzle-2010.06.1607-protobuf.patch (Fedora 13 only)

* Mon Jun 07 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.05.1525-1
- Latest sources from upstream.
- BuildRequires: gcc >= 4.4 (gcc44 on RHEL)
- Add hello_events plugin

* Tue May 11 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.05.1525-1
- Latest sources from upstream.
- Removed Patch0: drizzle-2010.04.1513-bug572633.patch (applied upstream)

* Tue May 04 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.04.1513-3
- Add -lib subpackage for shared libraries between client/server
- Server provides -plugin-auth_file_plugin, -plugin-simple_user_policy
- Removed test_authz, auth_test plugin (no longer upstream, or disabled)

* Mon May 03 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.04.1513-2
- Added Patch0: drizzle-2010.04.1513-bug572633.patch

* Fri Apr 30 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.04.1513-1
- Latest sources from upstream

* Mon Apr 26 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1412-3
- Disabled optional plugins temporarily due to LP #553723, move helloworld
  and logging_stats under drizzle-server

* Fri Apr 02 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1412-2
- Add sed fixes in prep to disable subpackage plugins, hack for LP #553723

* Wed Mar 31 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1412-1
- Latest build
- Create helloworld, loggingstats sub packages
- Added plugins auth_test, information_schema_dictionary, logging_status, 
  and user_function
- Fixed typo keeping memcached subpackage from building

* Mon Mar 22 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1347-2
- Added BuildRequires: boost-devel

* Fri Mar 19 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1347-1
- Latest build
- Added table_cache_dictionary, test_authz plugins (provided by -server)
- Changed drizzle.cnf to talk to port 3306 by default following the changes
  of drizzle and libdrizzle.

* Mon Mar 15 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1317-2
- Added optional gearman/memcache plugins
- Added find_lang support
- Added additional CFLAGS for el5
- Added conditional BuildRequires: for el5
- Added dist tag to release

* Wed Mar 03 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.03.1317-1
- Latest build
- Added functional init script

* Mon Mar 01 2010 BJ Dierkes <wdierkes@rackspace.com> - 2010.02.1304-1
- Breaking out into client/server/devel packages
- Group changed to Applications/Databases
- Cleaned up rpmlint errors
- Added _with_tests macro (disabled by default for now)
- Added /var/log/drizzle, /var/lib/drizzle, /var/run/drizzle
- Added pre/post scripts to setup chkconfig and user creation/deletion
- Added client/server configurations in /etc/drizzle (need work)

* Tue Feb 09 2010 Brian Aker <brian@tangent.org> - 0.1
- Added basic RPM file
