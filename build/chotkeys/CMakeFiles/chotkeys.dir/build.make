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
include chotkeys/CMakeFiles/chotkeys.dir/depend.make

# Include the progress variables for this target.
include chotkeys/CMakeFiles/chotkeys.dir/progress.make

# Include the compile flags for this target's objects.
include chotkeys/CMakeFiles/chotkeys.dir/flags.make

chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o: chotkeys/CMakeFiles/chotkeys.dir/flags.make
chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o: chotkeys/chotkeys_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o -c /home/tokyo/clone/RebootOS/core/build/chotkeys/chotkeys_autogen/mocs_compilation.cpp

chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/chotkeys/chotkeys_autogen/mocs_compilation.cpp > CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.i

chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/chotkeys/chotkeys_autogen/mocs_compilation.cpp -o CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.s

chotkeys/CMakeFiles/chotkeys.dir/main.cpp.o: chotkeys/CMakeFiles/chotkeys.dir/flags.make
chotkeys/CMakeFiles/chotkeys.dir/main.cpp.o: ../chotkeys/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object chotkeys/CMakeFiles/chotkeys.dir/main.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chotkeys.dir/main.cpp.o -c /home/tokyo/clone/RebootOS/core/chotkeys/main.cpp

chotkeys/CMakeFiles/chotkeys.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chotkeys.dir/main.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/chotkeys/main.cpp > CMakeFiles/chotkeys.dir/main.cpp.i

chotkeys/CMakeFiles/chotkeys.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chotkeys.dir/main.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/chotkeys/main.cpp -o CMakeFiles/chotkeys.dir/main.cpp.s

chotkeys/CMakeFiles/chotkeys.dir/application.cpp.o: chotkeys/CMakeFiles/chotkeys.dir/flags.make
chotkeys/CMakeFiles/chotkeys.dir/application.cpp.o: ../chotkeys/application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object chotkeys/CMakeFiles/chotkeys.dir/application.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chotkeys.dir/application.cpp.o -c /home/tokyo/clone/RebootOS/core/chotkeys/application.cpp

chotkeys/CMakeFiles/chotkeys.dir/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chotkeys.dir/application.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/chotkeys/application.cpp > CMakeFiles/chotkeys.dir/application.cpp.i

chotkeys/CMakeFiles/chotkeys.dir/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chotkeys.dir/application.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/chotkeys/application.cpp -o CMakeFiles/chotkeys.dir/application.cpp.s

chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.o: chotkeys/CMakeFiles/chotkeys.dir/flags.make
chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.o: ../chotkeys/hotkeys.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chotkeys.dir/hotkeys.cpp.o -c /home/tokyo/clone/RebootOS/core/chotkeys/hotkeys.cpp

chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chotkeys.dir/hotkeys.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/chotkeys/hotkeys.cpp > CMakeFiles/chotkeys.dir/hotkeys.cpp.i

chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chotkeys.dir/hotkeys.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/chotkeys/hotkeys.cpp -o CMakeFiles/chotkeys.dir/hotkeys.cpp.s

# Object files for target chotkeys
chotkeys_OBJECTS = \
"CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/chotkeys.dir/main.cpp.o" \
"CMakeFiles/chotkeys.dir/application.cpp.o" \
"CMakeFiles/chotkeys.dir/hotkeys.cpp.o"

# External object files for target chotkeys
chotkeys_EXTERNAL_OBJECTS =

chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/chotkeys_autogen/mocs_compilation.cpp.o
chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/main.cpp.o
chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/application.cpp.o
chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/hotkeys.cpp.o
chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/build.make
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.2
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libQt5X11Extras.so.5.15.2
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libSM.so
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libICE.so
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libX11.so
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libXext.so
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libxcb-keysyms.so
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
chotkeys/chotkeys: /usr/lib/x86_64-linux-gnu/libxcb.so
chotkeys/chotkeys: chotkeys/CMakeFiles/chotkeys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable chotkeys"
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chotkeys.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chotkeys/CMakeFiles/chotkeys.dir/build: chotkeys/chotkeys

.PHONY : chotkeys/CMakeFiles/chotkeys.dir/build

chotkeys/CMakeFiles/chotkeys.dir/clean:
	cd /home/tokyo/clone/RebootOS/core/build/chotkeys && $(CMAKE_COMMAND) -P CMakeFiles/chotkeys.dir/cmake_clean.cmake
.PHONY : chotkeys/CMakeFiles/chotkeys.dir/clean

chotkeys/CMakeFiles/chotkeys.dir/depend:
	cd /home/tokyo/clone/RebootOS/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/RebootOS/core /home/tokyo/clone/RebootOS/core/chotkeys /home/tokyo/clone/RebootOS/core/build /home/tokyo/clone/RebootOS/core/build/chotkeys /home/tokyo/clone/RebootOS/core/build/chotkeys/CMakeFiles/chotkeys.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chotkeys/CMakeFiles/chotkeys.dir/depend

