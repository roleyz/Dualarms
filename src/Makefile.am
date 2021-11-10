
# The Makefile.am contains two entries that you will need to update for each project, while the 
# rest are optional.  The first parameter, bin_PROGRAMS, defines the name of the binary that 
# should be built at the completion of the compilation process.  In the example below, the binary 
# will be named ‘Dualarms’.  The name of the binary will also be pre-pended to other 
#
# Macro file for use with GNU AutoTools for generating config files and Makefiles. 
# bin_PROGRAMS is used to define the binary that's to be built from the 
# source code.  The binary name will also be used in variable names to 
# pass values that will only apply to this binary. 
# bin_PROGRAMS should be set to the name of the binary that will be built. 
bin_PROGRAMS = Dualarms 

# Note: that the following names all start with the binary name defined in 
# bin_PROGRAMS. 
 
# <binary_name>_LDADD is used to pass extra parameters at link time, such as 
# libraries that need to be linked in. 
Dualarms_LDADD = $(top_builddir)/lib/libutil.a

# <binary_name>_LDFLAGS is used to pass extra parameters at compilation time, 
# such as the paths to libraries that are needed that are not in the default 
# paths. 
# If the user supplies a directory where libpcap is installed, the contents 
# of the variable setup in configire.in will be substituted below so the 
# library file will be found. 
Dualarms_LDFLAGS = 
 
# The INCLUDES macro allows us to tell the tools where needed header files are 
# <binary_name>_SOURCES takes a space delimited list of the source code files 
# that need to be compiled/linked to build the binary. 
Dualarms_SOURCES = main.cpp


# <binary_name>_LDADD is used to pass extra parameters at link time, such as 
# libraries that need to be linked in. 
# simple_project3_LDADD = -lfoo 
 
# <binary_name>_LDFLAGS is used to pass extra parameters at compilation time, 
# such as the paths to libraries that are needed that are not in the default 
# paths. 
# If the user supplies a directory where libpcap is installed, the contents 
# of the variable setup in configire.in will be substituted below so the 
# library file will be found. 
# If they are used, remember to update the names of these parameters. 
# simple_project3_LDFLAGS = -L../libfoo 
 
# The INCLUDES macro allows us to tell the tools where needed header files are 
# located if they aren't in the default paths.  In this case it's a subdirectory 
# in the source code directory where all the header files are centrally located. 
# If the user supplies a directory where a library is installed, the contents 
# of the variable setup in configure.in will be substituted below so the 
# The parameter allows you to specify where in your project the include files can be found.  header file will be found. 
AM_CPPFLAGS = -I$(top_builddir)/include 
