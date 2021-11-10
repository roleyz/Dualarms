#! /bin/sh 
 
# This script is used to automate the process of running some of the autotools 
# against their input files (configure.in, Makefile.am) after _any_ of them have 
# been updated.  The commands and parameters were taken based on a similar script 
# found via google and seeing the same commands issued in GNU autotool tutorials. 

# Although the autogen.sh script is generic and can be included in any project without any 
# changes, an additional line needs to be added if the project builds a shared library.  The listing 
# below includes the additional line.  Remember to executed it after any changes are made to the 

# libtoolize --force 
aclocal 
automake --add-missing --force-missing 
# autoreconf -if
autoconf 
