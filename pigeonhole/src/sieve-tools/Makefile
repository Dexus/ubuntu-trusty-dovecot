# Makefile.in generated by automake 1.11.6 from Makefile.am.
# src/sieve-tools/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software
# Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





am__make_dryrun = \
  { \
    am__dry=no; \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        echo 'am--echo: ; @echo "AM"  OK' | $(MAKE) -f - 2>/dev/null \
          | grep '^AM OK$$' >/dev/null || am__dry=yes;; \
      *) \
        for am__flg in $$MAKEFLAGS; do \
          case $$am__flg in \
            *=*|--*) ;; \
            *n*) am__dry=yes; break;; \
          esac; \
        done;; \
    esac; \
    test $$am__dry = yes; \
  }
pkgdatadir = $(datadir)/dovecot-2.2-pigeonhole
pkgincludedir = $(includedir)/dovecot-2.2-pigeonhole
pkglibdir = $(libdir)/dovecot-2.2-pigeonhole
pkglibexecdir = $(libexecdir)/dovecot-2.2-pigeonhole
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
bin_PROGRAMS = sievec$(EXEEXT) sieve-dump$(EXEEXT) sieve-test$(EXEEXT) \
	sieve-filter$(EXEEXT)
subdir = src/sieve-tools
DIST_COMMON = $(noinst_HEADERS) $(srcdir)/Makefile.am \
	$(srcdir)/Makefile.in
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/dovecot.m4 \
	$(top_srcdir)/m4/libtool.m4 $(top_srcdir)/m4/ltoptions.m4 \
	$(top_srcdir)/m4/ltsugar.m4 $(top_srcdir)/m4/ltversion.m4 \
	$(top_srcdir)/m4/lt~obsolete.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/dummy-config.h \
	$(top_builddir)/pigeonhole-config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__installdirs = "$(DESTDIR)$(bindir)"
PROGRAMS = $(bin_PROGRAMS)
am_sieve_dump_OBJECTS = sieve-dump.$(OBJEXT)
sieve_dump_OBJECTS = $(am_sieve_dump_OBJECTS)
am__DEPENDENCIES_1 =
am__DEPENDENCIES_2 = $(libs) $(am__DEPENDENCIES_1) \
	$(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1)
sieve_dump_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(sieve_dump_LDFLAGS) $(LDFLAGS) -o $@
am_sieve_filter_OBJECTS = sieve-filter.$(OBJEXT)
sieve_filter_OBJECTS = $(am_sieve_filter_OBJECTS)
sieve_filter_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(sieve_filter_LDFLAGS) $(LDFLAGS) -o $@
am_sieve_test_OBJECTS = sieve-test.$(OBJEXT)
sieve_test_OBJECTS = $(am_sieve_test_OBJECTS)
sieve_test_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(sieve_test_LDFLAGS) $(LDFLAGS) -o $@
am_sievec_OBJECTS = sievec.$(OBJEXT)
sievec_OBJECTS = $(am_sievec_OBJECTS)
sievec_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(sievec_LDFLAGS) \
	$(LDFLAGS) -o $@
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) \
	$(LDFLAGS) -o $@
SOURCES = $(sieve_dump_SOURCES) $(sieve_filter_SOURCES) \
	$(sieve_test_SOURCES) $(sievec_SOURCES)
DIST_SOURCES = $(sieve_dump_SOURCES) $(sieve_filter_SOURCES) \
	$(sieve_test_SOURCES) $(sievec_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
HEADERS = $(noinst_HEADERS)
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/missing --run aclocal-1.11
AMTAR = $${TAR-tar}
AR = ar
AUTOCONF = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/missing --run autoconf
AUTOHEADER = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/missing --run autoheader
AUTOMAKE = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/missing --run automake-1.11
AWK = gawk
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -std=gnu99 -g -O2 -fPIE -fstack-protector --param=ssp-buffer-size=4 -Wformat -Werror=format-security -Wall -W -Wmissing-prototypes -Wmissing-declarations -Wpointer-arith -Wchar-subscripts -Wformat=2 -Wbad-function-cast -fno-builtin-strftime -Wstrict-aliasing=2  -I$(top_srcdir)
CPP = gcc -E
CPPFLAGS = -D_FORTIFY_SOURCE=2
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DISTCHECK_CONFIGURE_FLAGS = --with-dovecot=/build-src/src/dovecot-2.2.19 --without-dovecot-install-dirs
DLLTOOL = false
DOVECOT_CFLAGS = -std=gnu99 -g -O2 -fPIE -fstack-protector --param=ssp-buffer-size=4 -Wformat -Werror=format-security -Wall -W -Wmissing-prototypes -Wmissing-declarations -Wpointer-arith -Wchar-subscripts -Wformat=2 -Wbad-function-cast -fno-builtin-strftime -Wstrict-aliasing=2 
DOVECOT_COMPRESS_LIBS =  -lz -lbz2 -llzma
DOVECOT_LIBS = 
DOVECOT_SQL_LIBS = 
DOVECOT_SSL_LIBS = -lssl -lcrypto 
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
GREP = /bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LD = /usr/bin/ld -m elf_x86_64
LDAP_LIBS = 
LDFLAGS = -Wl,-Bsymbolic-functions -fPIE -pie -Wl,-z,relro -Wl,-z,now
LIBDOVECOT = /build-src/src/dovecot-2.2.19/src/lib-dovecot/libdovecot.la -export-dynamic -ldl
LIBDOVECOT_COMPRESS = /build-src/src/dovecot-2.2.19/src/lib-compression/libcompression.la
LIBDOVECOT_COMPRESS_DEPS = /build-src/src/dovecot-2.2.19/src/lib-compression/libcompression.la
LIBDOVECOT_CONFIG_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/config
LIBDOVECOT_DEPS = /build-src/src/dovecot-2.2.19/src/lib-dovecot/libdovecot.la
LIBDOVECOT_DOVEADM_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/doveadm
LIBDOVECOT_IMAP_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/imap
LIBDOVECOT_INCLUDE = -I/build-src/src/dovecot-2.2.19 -I/build-src/src/dovecot-2.2.19/src/lib -I/build-src/src/dovecot-2.2.19/src/lib-dict -I/build-src/src/dovecot-2.2.19/src/lib-dns -I/build-src/src/dovecot-2.2.19/src/lib-http -I/build-src/src/dovecot-2.2.19/src/lib-mail -I/build-src/src/dovecot-2.2.19/src/lib-imap -I/build-src/src/dovecot-2.2.19/src/lib-fs -I/build-src/src/dovecot-2.2.19/src/lib-charset -I/build-src/src/dovecot-2.2.19/src/lib-auth -I/build-src/src/dovecot-2.2.19/src/lib-master -I/build-src/src/dovecot-2.2.19/src/lib-ssl-iostream -I/build-src/src/dovecot-2.2.19/src/lib-compression -I/build-src/src/dovecot-2.2.19/src/lib-settings -I/build-src/src/dovecot-2.2.19/src/lib-test -I/build-src/src/dovecot-2.2.19/src/lib-sasl -I/build-src/src/dovecot-2.2.19/src/lib-stats -I/build-src/src/dovecot-2.2.19/src/lib-index -I/build-src/src/dovecot-2.2.19/src/lib-storage -I/build-src/src/dovecot-2.2.19/src/lib-storage/list -I/build-src/src/dovecot-2.2.19/src/lib-storage/index -I/build-src/src/dovecot-2.2.19/src/lib-storage/index/raw -I/build-src/src/dovecot-2.2.19/src/lib-imap-storage -I/build-src/src/dovecot-2.2.19/src/plugins/quota
LIBDOVECOT_LDA = /build-src/src/dovecot-2.2.19/src/lib-lda/libdovecot-lda.la
LIBDOVECOT_LDA_DEPS = /build-src/src/dovecot-2.2.19/src/lib-lda/libdovecot-lda.la
LIBDOVECOT_LDA_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/lib-lda -I/build-src/src/dovecot-2.2.19/src/lda
LIBDOVECOT_LOGIN = /build-src/src/dovecot-2.2.19/src/login-common/libdovecot-login.la -lssl -lcrypto 
LIBDOVECOT_LOGIN_DEPS = /build-src/src/dovecot-2.2.19/src/login-common/libdovecot-login.la
LIBDOVECOT_LOGIN_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/login-common
LIBDOVECOT_SERVICE_INCLUDE = 
LIBDOVECOT_SQL = /build-src/src/dovecot-2.2.19/src/lib-sql/libsql.la
LIBDOVECOT_SQL_DEPS = /build-src/src/dovecot-2.2.19/src/lib-sql/libsql.la
LIBDOVECOT_SSL = 
LIBDOVECOT_SSL_DEPS = 
LIBDOVECOT_STORAGE = /build-src/src/dovecot-2.2.19/src/lib-storage/libdovecot-storage.la /build-src/src/dovecot-2.2.19/src/lib-imap-storage/libimap-storage.la
LIBDOVECOT_STORAGE_DEPS = /build-src/src/dovecot-2.2.19/src/lib-storage/libdovecot-storage.la /build-src/src/dovecot-2.2.19/src/lib-imap-storage/libimap-storage.la
LIBDOVECOT_STORAGE_INCLUDE = -I/build-src/src/dovecot-2.2.19/src/lib-index -I/build-src/src/dovecot-2.2.19/src/lib-storage -I/build-src/src/dovecot-2.2.19/src/lib-storage/list -I/build-src/src/dovecot-2.2.19/src/lib-storage/index -I/build-src/src/dovecot-2.2.19/src/lib-storage/index/raw -I/build-src/src/dovecot-2.2.19/src/lib-imap-storage -I/build-src/src/dovecot-2.2.19/src/plugins/quota
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
MAINT = #
MAKEINFO = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/missing --run makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = dovecot-2.2-pigeonhole
PACKAGE_BUGREPORT = dovecot@dovecot.org
PACKAGE_NAME = Pigeonhole
PACKAGE_STRING = Pigeonhole 0.4.9
PACKAGE_TARNAME = dovecot-2.2-pigeonhole
PACKAGE_URL = 
PACKAGE_VERSION = 0.4.9
PATH_SEPARATOR = :
RANLIB = ranlib
SED = /bin/sed
SET_MAKE = 
SHELL = /bin/bash
STRIP = strip
VERSION = 0.4.9
abs_builddir = /build-src/src/dovecot-2.2.19/pigeonhole/src/sieve-tools
abs_srcdir = /build-src/src/dovecot-2.2.19/pigeonhole/src/sieve-tools
abs_top_builddir = /build-src/src/dovecot-2.2.19/pigeonhole
abs_top_srcdir = /build-src/src/dovecot-2.2.19/pigeonhole
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = tar --format=ustar -chf - "$$tardir"
am__untar = tar -xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dovecot_docdir = /usr/share/doc/dovecot
dovecot_moduledir = /usr/lib/dovecot/modules
dovecot_pkgincludedir = /usr/include/dovecot
dovecot_pkglibdir = /usr/lib/dovecot
dovecot_pkglibexecdir = /usr/lib/dovecot
dovecotdir = ../
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${prefix}/share/info
install_sh = ${SHELL} /build-src/src/dovecot-2.2.19/pigeonhole/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${prefix}/lib
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${prefix}/share/man
mkdir_p = /bin/mkdir -p
moduledir = ${exec_prefix}/lib/dovecot
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
sieve_docdir = ${dovecot_docdir}/sieve
srcdir = .
sysconfdir = /etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
AM_CPPFLAGS = \
	-I$(top_srcdir)/src/lib-sieve \
	-I$(top_srcdir)/src/lib-sieve-tool \
	-I$(srcdir)/debug \
	$(LIBDOVECOT_INCLUDE) \
	$(LIBDOVECOT_SERVICE_INCLUDE)

libs = \
	$(top_builddir)/src/lib-sieve/libdovecot-sieve.la \
	$(top_builddir)/src/lib-sieve-tool/libsieve-tool.la

libs_ldadd = $(libs) $(LIBDOVECOT_STORAGE) $(LIBDOVECOT_LDA) $(LIBDOVECOT)
libs_deps = $(libs) $(LIBDOVECOT_STORAGE_DEPS) $(LIBDOVECOT_LDA_DEPS) $(LIBDOVECOT_DEPS)

# Sieve Compile Tool
sievec_LDFLAGS = -export-dynamic
sievec_LDADD = $(libs_ldadd)
sievec_DEPENDENCIES = $(libs_deps)
sievec_SOURCES = \
	sievec.c


# Sieve Dump Tool
sieve_dump_LDFLAGS = -export-dynamic
sieve_dump_LDADD = $(libs_ldadd)
sieve_dump_DEPENDENCIES = $(libs_deps)
sieve_dump_SOURCES = \
	sieve-dump.c


# Sieve Test Tool
sieve_test_LDFLAGS = -export-dynamic
sieve_test_LDADD = $(libs_ldadd)
sieve_test_DEPENDENCIES = $(libs_deps)
sieve_test_SOURCES = \
	sieve-test.c


# Sieve Filter Tool
sieve_filter_LDFLAGS = -export-dynamic
sieve_filter_LDADD = $(libs_ldadd)
sieve_filter_DEPENDENCIES = $(libs_deps)
sieve_filter_SOURCES = \
	sieve-filter.c

noinst_HEADERS = 
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/sieve-tools/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/sieve-tools/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(bindir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(bindir)" || exit 1; \
	fi; \
	for p in $$list; do echo "$$p $$p"; done | \
	sed 's/$(EXEEXT)$$//' | \
	while read p p1; do if test -f $$p || test -f $$p1; \
	  then echo "$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n;h' -e 's|.*|.|' \
	    -e 'p;x;s,.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/' | \
	sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1 } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) files[d] = files[d] " " $$1; \
	    else { print "f", $$3 "/" $$4, $$1; } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	    if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	    test -z "$$files" || { \
	    echo " $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files '$(DESTDIR)$(bindir)$$dir'"; \
	    $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files "$(DESTDIR)$(bindir)$$dir" || exit $$?; \
	    } \
	; done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	files=`for p in $$list; do echo "$$p"; done | \
	  sed -e 'h;s,^.*/,,;s/$(EXEEXT)$$//;$(transform)' \
	      -e 's/$$/$(EXEEXT)/' `; \
	test -n "$$list" || exit 0; \
	echo " ( cd '$(DESTDIR)$(bindir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(bindir)" && rm -f $$files

clean-binPROGRAMS:
	@list='$(bin_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list
sieve-dump$(EXEEXT): $(sieve_dump_OBJECTS) $(sieve_dump_DEPENDENCIES) $(EXTRA_sieve_dump_DEPENDENCIES) 
	@rm -f sieve-dump$(EXEEXT)
	$(sieve_dump_LINK) $(sieve_dump_OBJECTS) $(sieve_dump_LDADD) $(LIBS)
sieve-filter$(EXEEXT): $(sieve_filter_OBJECTS) $(sieve_filter_DEPENDENCIES) $(EXTRA_sieve_filter_DEPENDENCIES) 
	@rm -f sieve-filter$(EXEEXT)
	$(sieve_filter_LINK) $(sieve_filter_OBJECTS) $(sieve_filter_LDADD) $(LIBS)
sieve-test$(EXEEXT): $(sieve_test_OBJECTS) $(sieve_test_DEPENDENCIES) $(EXTRA_sieve_test_DEPENDENCIES) 
	@rm -f sieve-test$(EXEEXT)
	$(sieve_test_LINK) $(sieve_test_OBJECTS) $(sieve_test_LDADD) $(LIBS)
sievec$(EXEEXT): $(sievec_OBJECTS) $(sievec_DEPENDENCIES) $(EXTRA_sievec_DEPENDENCIES) 
	@rm -f sievec$(EXEEXT)
	$(sievec_LINK) $(sievec_OBJECTS) $(sievec_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/sieve-dump.Po
include ./$(DEPDIR)/sieve-filter.Po
include ./$(DEPDIR)/sieve-test.Po
include ./$(DEPDIR)/sievec.Po

.c.o:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c $<

.c.obj:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c `$(CYGPATH_W) '$<'`

.c.lo:
	$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	set x; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: CTAGS
CTAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(bindir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-binPROGRAMS

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-binPROGRAMS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS all all-am check check-am clean clean-binPROGRAMS \
	clean-generic clean-libtool ctags distclean distclean-compile \
	distclean-generic distclean-libtool distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-binPROGRAMS install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic mostlyclean-libtool \
	pdf pdf-am ps ps-am tags uninstall uninstall-am \
	uninstall-binPROGRAMS


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
