# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/tokyo/matsyaos/QT6/done/core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/matsyaos/QT6/done/core/build

# Utility rule file for chotkeys_autogen.

# Include any custom commands dependencies for this target.
include chotkeys/CMakeFiles/chotkeys_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include chotkeys/CMakeFiles/chotkeys_autogen.dir/progress.make

chotkeys/CMakeFiles/chotkeys_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/matsyaos/QT6/done/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target chotkeys"
	cd /home/tokyo/matsyaos/QT6/done/core/build/chotkeys && /usr/bin/cmake -E cmake_autogen /home/tokyo/matsyaos/QT6/done/core/build/chotkeys/CMakeFiles/chotkeys_autogen.dir/AutogenInfo.json ""

chotkeys_autogen: chotkeys/CMakeFiles/chotkeys_autogen
chotkeys_autogen: chotkeys/CMakeFiles/chotkeys_autogen.dir/build.make
.PHONY : chotkeys_autogen

# Rule to build all files generated by this target.
chotkeys/CMakeFiles/chotkeys_autogen.dir/build: chotkeys_autogen
.PHONY : chotkeys/CMakeFiles/chotkeys_autogen.dir/build

chotkeys/CMakeFiles/chotkeys_autogen.dir/clean:
	cd /home/tokyo/matsyaos/QT6/done/core/build/chotkeys && $(CMAKE_COMMAND) -P CMakeFiles/chotkeys_autogen.dir/cmake_clean.cmake
.PHONY : chotkeys/CMakeFiles/chotkeys_autogen.dir/clean

chotkeys/CMakeFiles/chotkeys_autogen.dir/depend:
	cd /home/tokyo/matsyaos/QT6/done/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/matsyaos/QT6/done/core /home/tokyo/matsyaos/QT6/done/core/chotkeys /home/tokyo/matsyaos/QT6/done/core/build /home/tokyo/matsyaos/QT6/done/core/build/chotkeys /home/tokyo/matsyaos/QT6/done/core/build/chotkeys/CMakeFiles/chotkeys_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chotkeys/CMakeFiles/chotkeys_autogen.dir/depend
