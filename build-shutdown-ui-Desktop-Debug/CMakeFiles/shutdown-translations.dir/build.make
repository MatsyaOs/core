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
CMAKE_SOURCE_DIR = /home/tokyo/matsyaos/QT6/done/core/shutdown-ui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/matsyaos/QT6/done/core/build-shutdown-ui-Desktop-Debug

# Utility rule file for shutdown-translations.

# Include any custom commands dependencies for this target.
include CMakeFiles/shutdown-translations.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/shutdown-translations.dir/progress.make

shutdown-translations: CMakeFiles/shutdown-translations.dir/build.make
.PHONY : shutdown-translations

# Rule to build all files generated by this target.
CMakeFiles/shutdown-translations.dir/build: shutdown-translations
.PHONY : CMakeFiles/shutdown-translations.dir/build

CMakeFiles/shutdown-translations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shutdown-translations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shutdown-translations.dir/clean

CMakeFiles/shutdown-translations.dir/depend:
	cd /home/tokyo/matsyaos/QT6/done/core/build-shutdown-ui-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/matsyaos/QT6/done/core/shutdown-ui /home/tokyo/matsyaos/QT6/done/core/shutdown-ui /home/tokyo/matsyaos/QT6/done/core/build-shutdown-ui-Desktop-Debug /home/tokyo/matsyaos/QT6/done/core/build-shutdown-ui-Desktop-Debug /home/tokyo/matsyaos/QT6/done/core/build-shutdown-ui-Desktop-Debug/CMakeFiles/shutdown-translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shutdown-translations.dir/depend

