# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ideapad/Desktop/AED

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ideapad/Desktop/AED/build

# Include any dependencies generated for this target.
include CMakeFiles/aed.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/aed.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/aed.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aed.dir/flags.make

CMakeFiles/aed.dir/main.cpp.o: CMakeFiles/aed.dir/flags.make
CMakeFiles/aed.dir/main.cpp.o: ../main.cpp
CMakeFiles/aed.dir/main.cpp.o: CMakeFiles/aed.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ideapad/Desktop/AED/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/aed.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aed.dir/main.cpp.o -MF CMakeFiles/aed.dir/main.cpp.o.d -o CMakeFiles/aed.dir/main.cpp.o -c /home/ideapad/Desktop/AED/main.cpp

CMakeFiles/aed.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aed.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ideapad/Desktop/AED/main.cpp > CMakeFiles/aed.dir/main.cpp.i

CMakeFiles/aed.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aed.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ideapad/Desktop/AED/main.cpp -o CMakeFiles/aed.dir/main.cpp.s

# Object files for target aed
aed_OBJECTS = \
"CMakeFiles/aed.dir/main.cpp.o"

# External object files for target aed
aed_EXTERNAL_OBJECTS =

aed: CMakeFiles/aed.dir/main.cpp.o
aed: CMakeFiles/aed.dir/build.make
aed: _deps/cpr-build/cpr/libcpr.so.1.11.0
aed: _deps/libxml2-build/libxml2.so.2.14.0
aed: _deps/curl-build/lib/libcurl.so.4.8.0
aed: CMakeFiles/aed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ideapad/Desktop/AED/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aed"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aed.dir/build: aed
.PHONY : CMakeFiles/aed.dir/build

CMakeFiles/aed.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aed.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aed.dir/clean

CMakeFiles/aed.dir/depend:
	cd /home/ideapad/Desktop/AED/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ideapad/Desktop/AED /home/ideapad/Desktop/AED /home/ideapad/Desktop/AED/build /home/ideapad/Desktop/AED/build /home/ideapad/Desktop/AED/build/CMakeFiles/aed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aed.dir/depend
