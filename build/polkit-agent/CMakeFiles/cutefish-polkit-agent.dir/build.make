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
include polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/depend.make

# Include the progress variables for this target.
include polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/progress.make

# Include the compile flags for this target's objects.
include polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make

polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp: ../polkit-agent/qml.qrc
polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp: polkit-agent/CMakeFiles/cutefish-polkit-agent_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json
polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp: ../polkit-agent/main.qml
polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp: ../polkit-agent/svg/emblem-warning.svg
polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp: /usr/lib/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for qml.qrc"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/cmake -E cmake_autorcc /home/tokyo/clone/RebootOS/core/build/polkit-agent/CMakeFiles/cutefish-polkit-agent_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json 

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o: polkit-agent/cutefish-polkit-agent_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o -c /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/mocs_compilation.cpp

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/mocs_compilation.cpp > CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.i

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/mocs_compilation.cpp -o CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.s

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o: ../polkit-agent/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o -c /home/tokyo/clone/RebootOS/core/polkit-agent/main.cpp

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-polkit-agent.dir/main.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/polkit-agent/main.cpp > CMakeFiles/cutefish-polkit-agent.dir/main.cpp.i

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-polkit-agent.dir/main.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/polkit-agent/main.cpp -o CMakeFiles/cutefish-polkit-agent.dir/main.cpp.s

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o: ../polkit-agent/polkitagentlistener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o -c /home/tokyo/clone/RebootOS/core/polkit-agent/polkitagentlistener.cpp

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/polkit-agent/polkitagentlistener.cpp > CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.i

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/polkit-agent/polkitagentlistener.cpp -o CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.s

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o: ../polkit-agent/dialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o -c /home/tokyo/clone/RebootOS/core/polkit-agent/dialog.cpp

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/polkit-agent/dialog.cpp > CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.i

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/polkit-agent/dialog.cpp -o CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.s

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/flags.make
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o: polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o -c /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp > CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.i

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp -o CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.s

# Object files for target cutefish-polkit-agent
cutefish__polkit__agent_OBJECTS = \
"CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o" \
"CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o" \
"CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o" \
"CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o"

# External object files for target cutefish-polkit-agent
cutefish__polkit__agent_EXTERNAL_OBJECTS =

polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/mocs_compilation.cpp.o
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/main.cpp.o
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/polkitagentlistener.cpp.o
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/dialog.cpp.o
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp.o
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/build.make
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libpolkit-qt5-core-1.so
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libpolkit-qt5-agent-1.so
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5QmlModels.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
polkit-agent/cutefish-polkit-agent: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
polkit-agent/cutefish-polkit-agent: polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable cutefish-polkit-agent"
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cutefish-polkit-agent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/build: polkit-agent/cutefish-polkit-agent

.PHONY : polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/build

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/clean:
	cd /home/tokyo/clone/RebootOS/core/build/polkit-agent && $(CMAKE_COMMAND) -P CMakeFiles/cutefish-polkit-agent.dir/cmake_clean.cmake
.PHONY : polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/clean

polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/depend: polkit-agent/cutefish-polkit-agent_autogen/EWIEGA46WW/qrc_qml.cpp
	cd /home/tokyo/clone/RebootOS/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/RebootOS/core /home/tokyo/clone/RebootOS/core/polkit-agent /home/tokyo/clone/RebootOS/core/build /home/tokyo/clone/RebootOS/core/build/polkit-agent /home/tokyo/clone/RebootOS/core/build/polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : polkit-agent/CMakeFiles/cutefish-polkit-agent.dir/depend

