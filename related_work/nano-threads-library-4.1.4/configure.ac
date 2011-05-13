#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT([nano-threads-library], [4.1.4], [mercurium@bsc.es])

AC_CANONICAL_BUILD
AC_CANONICAL_HOST
AC_CANONICAL_TARGET

AM_INIT_AUTOMAKE([dist-bzip2])

AC_CONFIG_SRCDIR([src/nthreads.c])
AC_CONFIG_HEADER([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AM_PROG_AS
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.

# Configuring for host
AC_SUBST([hostcode])
# Somebody to explain me why are we wiping this
# AC_SUBST([CFLAGS],"")

case $host in
   i?86-*-linux*)
     hostcode="i386-linux"
     CFLAGS="${CFLAGS} -march=i686"
     ;;
   x86_64-*-linux*)
     hostcode="i386-linux"
# We do not support AMD64 but 32-bit compilation is possible
     CPPFLAGS="${CPPFLAGS} -m32"
     CFLAGS="${CFLAGS} -m32"
     CCASFLAGS="${CCASFLAGS} -m32"
     LDFLAGS="${LDFLAGS} -m32"
     ;;
   powerpc64-*-linux*)
     hostcode="powerpc64-linux"
# In powerpc64 linux, compilers default to 32 bit, so we request explicitly 64 bit
     CPPFLAGS="${CPPFLAGS} -m64"
     CFLAGS="${CFLAGS} -m64"
     CCASFLAGS="${CCASFLAGS} -m64"
     LDFLAGS="${LDFLAGS} -m64"
     ;;
   powerpc-*-linux*)
     hostcode="powerpc32-linux"
     ;;
   ia64-*-linux*)
     hostcode="ia64-linux"
     ;;
   alpha*-*-osf*)
     hostcode="alpha-osf"
     ;;
   *)
     AC_MSG_ERROR("Unsupported architecture")
     ;;
esac

AC_ARG_ENABLE([performance],
	[
  --enable-performance    enable performance library version compilation
                          (default=yes)],
	[case "${enableval}" in
		yes) performance=true ;;
		no)  performance=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-performance]) ;;
	esac],
	[performance=true])

AC_ARG_ENABLE([debug],
	[  --enable-debug          enable debug library version compilation
                          (default=no)],
	[case "${enableval}" in
		yes) debug=true ;;
		no)  debug=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
	esac],
	[debug=false])

AC_ARG_ENABLE([development],
	[  --enable-development    enable development library version compilation
                          (default=no)],
	[case "${enableval}" in
		yes) development=true ;;
		no)  development=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-development]) ;;
	esac],
	[development=false])

AC_ARG_ENABLE([paraver],
	[  --enable-paraver        enable paraver library version compilation, it
                          uses mintaka library (default=no)],
	[case "${enableval}" in
		yes) paraver=true ;;
		no)  paraver=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-paraver]) ;;
	esac],
	[paraver=false])

AC_ARG_ENABLE([stubs],
	[  --enable-stubs          enable omp stubs library version compilation
                          (default=no)],
	[case "${enableval}" in
		yes) stubs=true ;;
		no)  stubs=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-stubs]) ;;
	esac],
	[stubs=false])

AC_ARG_ENABLE([all],
	[  --enable-all          enable all library versions compilation ],
	[case "${enableval}" in
		yes) performance=true;development=true; debug=true; paraver=true; stubs=true ;;
		no) performance=false;development=false; debug=false; paraver=false; stubs=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-all]) ;;
	esac],
	[])

AM_CONDITIONAL([PERFORMANCE], [test x$performance = xtrue])
AM_CONDITIONAL([DEBUG], [test x$debug = xtrue])
AM_CONDITIONAL([DEVELOPMENT], [test x$development = xtrue])
AM_CONDITIONAL([PARAVER], [test x$paraver = xtrue])
AM_CONDITIONAL([OMP_STUBS], [test x$stubs = xtrue])

AC_ARG_WITH([mintaka],
           AS_HELP_STRING([--with-mintaka=dir], [Directory of Mintaka installation]),
           [
  		CPPFLAGS="$CPPFLAGS -I$withval/include"
                LDFLAGS="$LDFLAGS -L$withval/lib"
           ]
)

if test x$paraver = xtrue
then
AC_CHECK_HEADERS(mintaka.h,
        AC_SEARCH_LIBS([mintaka_app_begin], [mintaka]) ,
        AC_MSG_ERROR([*** mintaka.h not found -- consider using --with-mintaka])
)
fi 


AC_CONFIG_FILES([
	Makefile
	src/Makefile
	src/machine/Makefile
	src/machine/i386-linux/Makefile
	src/machine/powerpc64-linux/Makefile
        src/machine/powerpc32-linux/Makefile
	src/machine/ia64-linux/Makefile
	src/machine/alpha-osf/Makefile
	tests/Makefile
])

AC_OUTPUT
