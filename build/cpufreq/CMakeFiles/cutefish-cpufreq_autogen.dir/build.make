# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/tokyo/clone/RebootOS/core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/clone/RebootOS/core/build

# Utility rule file for cutefish-cpufreq_autogen.

# Include the progress variables for this target.
include cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/progress.make

cpufreq/CMakeFiles/cutefish-cpufreq_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target cutefish-cpufreq"
	cd /home/tokyo/clone/RebootOS/core/build/cpufreq && /usr/bin/cmake -E cmake_autogen /home/tokyo/clone/RebootOS/core/build/cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/AutogenInfo.json ""

cutefish-cpufreq_autogen: cpufreq/CMakeFiles/cutefish-cpufreq_autogen
cutefish-cpufreq_autogen: cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/build.make

.PHONY : cutefish-cpufreq_autogen

# Rule to build all files generated by this target.
cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/build: cutefish-cpufreq_autogen

.PHONY : cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/build

cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/clean:
	cd /home/tokyo/clone/RebootOS/core/build/cpufreq && $(CMAKE_COMMAND) -P CMakeFiles/cutefish-cpufreq_autogen.dir/cmake_clean.cmake
.PHONY : cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/clean

cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/depend:
	cd /home/tokyo/clone/RebootOS/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/RebootOS/core /home/tokyo/clone/RebootOS/core/cpufreq /home/tokyo/clone/RebootOS/core/build /home/tokyo/clone/RebootOS/core/build/cpufreq /home/tokyo/clone/RebootOS/core/build/cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cpufreq/CMakeFiles/cutefish-cpufreq_autogen.dir/depend

