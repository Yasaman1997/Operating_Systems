# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /opt/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/meraj/Desktop/OsLab/Section4/ExampleCodes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pthreads_cond.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pthreads_cond.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pthreads_cond.dir/flags.make

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o: CMakeFiles/pthreads_cond.dir/flags.make
CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o: ../pthreads/pthreads_condition.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o   -c /home/meraj/Desktop/OsLab/Section4/ExampleCodes/pthreads/pthreads_condition.c

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/meraj/Desktop/OsLab/Section4/ExampleCodes/pthreads/pthreads_condition.c > CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.i

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/meraj/Desktop/OsLab/Section4/ExampleCodes/pthreads/pthreads_condition.c -o CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.s

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.requires:

.PHONY : CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.requires

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.provides: CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.requires
	$(MAKE) -f CMakeFiles/pthreads_cond.dir/build.make CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.provides.build
.PHONY : CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.provides

CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.provides.build: CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o


# Object files for target pthreads_cond
pthreads_cond_OBJECTS = \
"CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o"

# External object files for target pthreads_cond
pthreads_cond_EXTERNAL_OBJECTS =

pthreads_cond: CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o
pthreads_cond: CMakeFiles/pthreads_cond.dir/build.make
pthreads_cond: CMakeFiles/pthreads_cond.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pthreads_cond"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pthreads_cond.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pthreads_cond.dir/build: pthreads_cond

.PHONY : CMakeFiles/pthreads_cond.dir/build

CMakeFiles/pthreads_cond.dir/requires: CMakeFiles/pthreads_cond.dir/pthreads/pthreads_condition.c.o.requires

.PHONY : CMakeFiles/pthreads_cond.dir/requires

CMakeFiles/pthreads_cond.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pthreads_cond.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pthreads_cond.dir/clean

CMakeFiles/pthreads_cond.dir/depend:
	cd /home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/meraj/Desktop/OsLab/Section4/ExampleCodes /home/meraj/Desktop/OsLab/Section4/ExampleCodes /home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug /home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug /home/meraj/Desktop/OsLab/Section4/ExampleCodes/cmake-build-debug/CMakeFiles/pthreads_cond.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pthreads_cond.dir/depend

