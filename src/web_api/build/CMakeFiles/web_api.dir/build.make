# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roley/Project/Dualarms/src/web_api

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roley/Project/Dualarms/src/web_api/build

# Include any dependencies generated for this target.
include CMakeFiles/web_api.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/web_api.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/web_api.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/web_api.dir/flags.make

CMakeFiles/web_api.dir/src/App.cpp.o: CMakeFiles/web_api.dir/flags.make
CMakeFiles/web_api.dir/src/App.cpp.o: ../src/App.cpp
CMakeFiles/web_api.dir/src/App.cpp.o: CMakeFiles/web_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roley/Project/Dualarms/src/web_api/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/web_api.dir/src/App.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/web_api.dir/src/App.cpp.o -MF CMakeFiles/web_api.dir/src/App.cpp.o.d -o CMakeFiles/web_api.dir/src/App.cpp.o -c /home/roley/Project/Dualarms/src/web_api/src/App.cpp

CMakeFiles/web_api.dir/src/App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/web_api.dir/src/App.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roley/Project/Dualarms/src/web_api/src/App.cpp > CMakeFiles/web_api.dir/src/App.cpp.i

CMakeFiles/web_api.dir/src/App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/web_api.dir/src/App.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roley/Project/Dualarms/src/web_api/src/App.cpp -o CMakeFiles/web_api.dir/src/App.cpp.s

# Object files for target web_api
web_api_OBJECTS = \
"CMakeFiles/web_api.dir/src/App.cpp.o"

# External object files for target web_api
web_api_EXTERNAL_OBJECTS =

web_api: CMakeFiles/web_api.dir/src/App.cpp.o
web_api: CMakeFiles/web_api.dir/build.make
web_api: libweb_api-lib.a
web_api: /usr/local/lib/oatpp-1.3.0/liboatpp-swagger.a
web_api: /usr/local/lib/oatpp-1.3.0/liboatpp-sqlite.a
web_api: /usr/lib/oatpp-1.3.0/liboatpp-test.a
web_api: /usr/lib/oatpp-1.3.0/liboatpp.a
web_api: /usr/local/lib/oatpp-1.3.0/libsqlite.a
web_api: CMakeFiles/web_api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roley/Project/Dualarms/src/web_api/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable web_api"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/web_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/web_api.dir/build: web_api
.PHONY : CMakeFiles/web_api.dir/build

CMakeFiles/web_api.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/web_api.dir/cmake_clean.cmake
.PHONY : CMakeFiles/web_api.dir/clean

CMakeFiles/web_api.dir/depend:
	cd /home/roley/Project/Dualarms/src/web_api/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roley/Project/Dualarms/src/web_api /home/roley/Project/Dualarms/src/web_api /home/roley/Project/Dualarms/src/web_api/build /home/roley/Project/Dualarms/src/web_api/build /home/roley/Project/Dualarms/src/web_api/build/CMakeFiles/web_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/web_api.dir/depend

