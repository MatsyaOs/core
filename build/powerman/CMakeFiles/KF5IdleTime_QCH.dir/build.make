# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_SOURCE_DIR = /run/media/tokyo/DATA/Documents/final/core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/tokyo/DATA/Documents/final/core/build

# Utility rule file for KF5IdleTime_QCH.

# Include any custom commands dependencies for this target.
include powerman/CMakeFiles/KF5IdleTime_QCH.dir/compiler_depend.make

# Include the progress variables for this target.
include powerman/CMakeFiles/KF5IdleTime_QCH.dir/progress.make

KF5IdleTime_QCH: powerman/CMakeFiles/KF5IdleTime_QCH.dir/build.make
.PHONY : KF5IdleTime_QCH

# Rule to build all files generated by this target.
powerman/CMakeFiles/KF5IdleTime_QCH.dir/build: KF5IdleTime_QCH
.PHONY : powerman/CMakeFiles/KF5IdleTime_QCH.dir/build

powerman/CMakeFiles/KF5IdleTime_QCH.dir/clean:
	cd /run/media/tokyo/DATA/Documents/final/core/build/powerman && $(CMAKE_COMMAND) -P CMakeFiles/KF5IdleTime_QCH.dir/cmake_clean.cmake
.PHONY : powerman/CMakeFiles/KF5IdleTime_QCH.dir/clean

powerman/CMakeFiles/KF5IdleTime_QCH.dir/depend:
	cd /run/media/tokyo/DATA/Documents/final/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/tokyo/DATA/Documents/final/core /run/media/tokyo/DATA/Documents/final/core/powerman /run/media/tokyo/DATA/Documents/final/core/build /run/media/tokyo/DATA/Documents/final/core/build/powerman /run/media/tokyo/DATA/Documents/final/core/build/powerman/CMakeFiles/KF5IdleTime_QCH.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : powerman/CMakeFiles/KF5IdleTime_QCH.dir/depend

