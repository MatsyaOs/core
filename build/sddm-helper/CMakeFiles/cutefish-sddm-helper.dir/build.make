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

# Include any dependencies generated for this target.
include sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/depend.make

# Include the progress variables for this target.
include sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/progress.make

# Include the compile flags for this target's objects.
include sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/flags.make

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/flags.make
sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o: sddm-helper/cutefish-sddm-helper_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o -c /home/tokyo/clone/RebootOS/core/build/sddm-helper/cutefish-sddm-helper_autogen/mocs_compilation.cpp

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/sddm-helper/cutefish-sddm-helper_autogen/mocs_compilation.cpp > CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.i

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/sddm-helper/cutefish-sddm-helper_autogen/mocs_compilation.cpp -o CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.s

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/flags.make
sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o: ../sddm-helper/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o -c /home/tokyo/clone/RebootOS/core/sddm-helper/main.cpp

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-sddm-helper.dir/main.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/sddm-helper/main.cpp > CMakeFiles/cutefish-sddm-helper.dir/main.cpp.i

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-sddm-helper.dir/main.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/sddm-helper/main.cpp -o CMakeFiles/cutefish-sddm-helper.dir/main.cpp.s

# Object files for target cutefish-sddm-helper
cutefish__sddm__helper_OBJECTS = \
"CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o"

# External object files for target cutefish-sddm-helper
cutefish__sddm__helper_EXTERNAL_OBJECTS =

sddm-helper/cutefish-sddm-helper: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/cutefish-sddm-helper_autogen/mocs_compilation.cpp.o
sddm-helper/cutefish-sddm-helper: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/main.cpp.o
sddm-helper/cutefish-sddm-helper: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/build.make
sddm-helper/cutefish-sddm-helper: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
sddm-helper/cutefish-sddm-helper: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
sddm-helper/cutefish-sddm-helper: sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cutefish-sddm-helper"
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cutefish-sddm-helper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/build: sddm-helper/cutefish-sddm-helper

.PHONY : sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/build

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/clean:
	cd /home/tokyo/clone/RebootOS/core/build/sddm-helper && $(CMAKE_COMMAND) -P CMakeFiles/cutefish-sddm-helper.dir/cmake_clean.cmake
.PHONY : sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/clean

sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/depend:
	cd /home/tokyo/clone/RebootOS/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/RebootOS/core /home/tokyo/clone/RebootOS/core/sddm-helper /home/tokyo/clone/RebootOS/core/build /home/tokyo/clone/RebootOS/core/build/sddm-helper /home/tokyo/clone/RebootOS/core/build/sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sddm-helper/CMakeFiles/cutefish-sddm-helper.dir/depend

