# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/lion/Projects/JLiberty/Day 9/Task_9_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build"

# Include any dependencies generated for this target.
include CMakeFiles/task_9_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task_9_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_9_1.dir/flags.make

CMakeFiles/task_9_1.dir/main.o: CMakeFiles/task_9_1.dir/flags.make
CMakeFiles/task_9_1.dir/main.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/task_9_1.dir/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/task_9_1.dir/main.o -c "/home/lion/Projects/JLiberty/Day 9/Task_9_1/main.cpp"

CMakeFiles/task_9_1.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_9_1.dir/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/lion/Projects/JLiberty/Day 9/Task_9_1/main.cpp" > CMakeFiles/task_9_1.dir/main.i

CMakeFiles/task_9_1.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_9_1.dir/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/lion/Projects/JLiberty/Day 9/Task_9_1/main.cpp" -o CMakeFiles/task_9_1.dir/main.s

CMakeFiles/task_9_1.dir/main.o.requires:
.PHONY : CMakeFiles/task_9_1.dir/main.o.requires

CMakeFiles/task_9_1.dir/main.o.provides: CMakeFiles/task_9_1.dir/main.o.requires
	$(MAKE) -f CMakeFiles/task_9_1.dir/build.make CMakeFiles/task_9_1.dir/main.o.provides.build
.PHONY : CMakeFiles/task_9_1.dir/main.o.provides

CMakeFiles/task_9_1.dir/main.o.provides.build: CMakeFiles/task_9_1.dir/main.o

# Object files for target task_9_1
task_9_1_OBJECTS = \
"CMakeFiles/task_9_1.dir/main.o"

# External object files for target task_9_1
task_9_1_EXTERNAL_OBJECTS =

task_9_1: CMakeFiles/task_9_1.dir/main.o
task_9_1: CMakeFiles/task_9_1.dir/build.make
task_9_1: CMakeFiles/task_9_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable task_9_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_9_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_9_1.dir/build: task_9_1
.PHONY : CMakeFiles/task_9_1.dir/build

CMakeFiles/task_9_1.dir/requires: CMakeFiles/task_9_1.dir/main.o.requires
.PHONY : CMakeFiles/task_9_1.dir/requires

CMakeFiles/task_9_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_9_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_9_1.dir/clean

CMakeFiles/task_9_1.dir/depend:
	cd "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/lion/Projects/JLiberty/Day 9/Task_9_1" "/home/lion/Projects/JLiberty/Day 9/Task_9_1" "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build" "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build" "/home/lion/Projects/JLiberty/Day 9/Task_9_1/build/CMakeFiles/task_9_1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/task_9_1.dir/depend
