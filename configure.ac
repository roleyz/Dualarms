# AC_INIT takes two parameters, the package name and a version number. 
AC_INIT([Dualarms],[0.1],[roley.z@richtechsystem.com]) 

# AC_CONFIG_SRCDIR takes one parameter, the path and filename 
# for one of the source code files. 
AC_CONFIG_SRCDIR([src/main.cpp],[test/Test.cpp]) 
AM_INIT_AUTOMAKE([foreign -Wall -Werror]) 
# AC_CONFIG_HEADERS([config.h])
AC_CONFIG_LIBOBJ_DIR([lib])

AC_CHECK_LIB([boost_log], [-lboost_log])
# AC_CHECK_HEADERS([])
AC_PROG_CXX 
AC_PROG_CC 
AC_PROG_RANLIB 
AM_PROG_AR

CFLAGS= 
LDFLAGS= 
LIBS= 
  
# This is a reusable macro for providing --with-libfoo functionality. 
# REQUIRE_LIB(name,lib,testfn,description) 
#    name = The complete name of the library file without the extension. 
#    lib = The name of the library file without the 'lib' prefix and without the extension. 
#    testfn = One function included in the library that can be used for a test compilation. 

# REQUIRE_LIB(libpcap,pcap,pcap_dump_open,[Libpcap packet capture library]) 

AC_DEFUN([REQUIRE_LIB], [ { 
        AC_ARG_WITH([$1], AS_HELP_STRING([--with-$1=<path>],[Location where $4 is 
installed]),[],[with_$1=default]) 
 
        AS_IF( [test "x$with_$1" != xdefault], 
        [ 
              LDFLAGS="$LDFLAGS -L${with_$1}/lib" 
              CFLAGS="$CFLAGS -I${with_$1}/include" 
        ]) 
 
        AC_CHECK_LIB($2,$3,[], 
        [ 
                AC_MSG_ERROR([$4 was not found, try specifying --with-$1]) 
        ]) 
} ] ) 
 
# The list of libraries required by the source code that are external to 
# our code. 
#REQUIRE_LIB(libpcap,pcap,pcap_dump_open,[Libpcap packet capture library]) 
 
 

# Wrapping REQUIRE_LIB in an ‘if’ statement allows 
# you to use it to dynamically enable or disable features. 
# Continuing with the example, if ‘--with-liboci’ is provided during configuration, 
# ‘LIBSQLPLUS’ will be defined from the combination of ‘LIB’ plus the uppercase version of 

# if test "$with_liboci"; then 
#   REQUIRE_LIB(liboci,sqlplus,OCIEnvCreate,[Oracle OCI client libraries provided with 
# Instant Client]) 
# fi 
 


# AC_OUTPUT takes a space delimited list of where the Makefiles are to be created. 
# You need to pass all directories where there is source code (including the base 
# directory containing all of the source code (which won't need a path pre-pended 
# to the 'Makefile' keyword). 
AC_CONFIG_FILES([Makefile src/Makefile lib/Makefile test/Makefile])
AC_OUTPUT 
