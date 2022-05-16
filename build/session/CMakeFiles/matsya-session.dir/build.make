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
CMAKE_SOURCE_DIR = /home/tokyo/Documents/GitHub/core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/Documents/GitHub/core/build

# Include any dependencies generated for this target.
include session/CMakeFiles/matsya-session.dir/depend.make

# Include the progress variables for this target.
include session/CMakeFiles/matsya-session.dir/progress.make

# Include the compile flags for this target's objects.
include session/CMakeFiles/matsya-session.dir/flags.make

session/sessionadaptor.moc: session/sessionadaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating sessionadaptor.moc"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/lib/qt5/bin/moc @/home/tokyo/Documents/GitHub/core/build/session/sessionadaptor.moc_parameters

session/sessionadaptor.cpp: ../session/com.matsya.Session.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating sessionadaptor.cpp, sessionadaptor.h"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/lib/qt5/bin/qdbusxml2cpp -m -a sessionadaptor -c SessionAdaptor -i application.h -l Application /home/tokyo/Documents/GitHub/core/session/com.matsya.Session.xml

session/sessionadaptor.h: session/sessionadaptor.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate session/sessionadaptor.h

session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o: session/matsya-session_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o -c /home/tokyo/Documents/GitHub/core/build/session/matsya-session_autogen/mocs_compilation.cpp

session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/build/session/matsya-session_autogen/mocs_compilation.cpp > CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.i

session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/build/session/matsya-session_autogen/mocs_compilation.cpp -o CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.s

session/CMakeFiles/matsya-session.dir/application.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/application.cpp.o: ../session/application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object session/CMakeFiles/matsya-session.dir/application.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/application.cpp.o -c /home/tokyo/Documents/GitHub/core/session/application.cpp

session/CMakeFiles/matsya-session.dir/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/application.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/application.cpp > CMakeFiles/matsya-session.dir/application.cpp.i

session/CMakeFiles/matsya-session.dir/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/application.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/application.cpp -o CMakeFiles/matsya-session.dir/application.cpp.s

session/CMakeFiles/matsya-session.dir/main.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/main.cpp.o: ../session/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object session/CMakeFiles/matsya-session.dir/main.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/main.cpp.o -c /home/tokyo/Documents/GitHub/core/session/main.cpp

session/CMakeFiles/matsya-session.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/main.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/main.cpp > CMakeFiles/matsya-session.dir/main.cpp.i

session/CMakeFiles/matsya-session.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/main.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/main.cpp -o CMakeFiles/matsya-session.dir/main.cpp.s

session/CMakeFiles/matsya-session.dir/process.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/process.cpp.o: ../session/process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object session/CMakeFiles/matsya-session.dir/process.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/process.cpp.o -c /home/tokyo/Documents/GitHub/core/session/process.cpp

session/CMakeFiles/matsya-session.dir/process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/process.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/process.cpp > CMakeFiles/matsya-session.dir/process.cpp.i

session/CMakeFiles/matsya-session.dir/process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/process.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/process.cpp -o CMakeFiles/matsya-session.dir/process.cpp.s

session/CMakeFiles/matsya-session.dir/processmanager.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/processmanager.cpp.o: ../session/processmanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object session/CMakeFiles/matsya-session.dir/processmanager.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/processmanager.cpp.o -c /home/tokyo/Documents/GitHub/core/session/processmanager.cpp

session/CMakeFiles/matsya-session.dir/processmanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/processmanager.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/processmanager.cpp > CMakeFiles/matsya-session.dir/processmanager.cpp.i

session/CMakeFiles/matsya-session.dir/processmanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/processmanager.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/processmanager.cpp -o CMakeFiles/matsya-session.dir/processmanager.cpp.s

session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o: ../session/networkproxymanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o -c /home/tokyo/Documents/GitHub/core/session/networkproxymanager.cpp

session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/networkproxymanager.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/networkproxymanager.cpp > CMakeFiles/matsya-session.dir/networkproxymanager.cpp.i

session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/networkproxymanager.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/networkproxymanager.cpp -o CMakeFiles/matsya-session.dir/networkproxymanager.cpp.s

session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.o: ../session/powermanager/power.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/powermanager/power.cpp.o -c /home/tokyo/Documents/GitHub/core/session/powermanager/power.cpp

session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/powermanager/power.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/powermanager/power.cpp > CMakeFiles/matsya-session.dir/powermanager/power.cpp.i

session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/powermanager/power.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/powermanager/power.cpp -o CMakeFiles/matsya-session.dir/powermanager/power.cpp.s

session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o: ../session/powermanager/powerproviders.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o -c /home/tokyo/Documents/GitHub/core/session/powermanager/powerproviders.cpp

session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/session/powermanager/powerproviders.cpp > CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.i

session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/session/powermanager/powerproviders.cpp -o CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.s

session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o: session/CMakeFiles/matsya-session.dir/flags.make
session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o: session/sessionadaptor.cpp
session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o: session/sessionadaptor.moc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o -c /home/tokyo/Documents/GitHub/core/build/session/sessionadaptor.cpp

session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsya-session.dir/sessionadaptor.cpp.i"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/core/build/session/sessionadaptor.cpp > CMakeFiles/matsya-session.dir/sessionadaptor.cpp.i

session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsya-session.dir/sessionadaptor.cpp.s"
	cd /home/tokyo/Documents/GitHub/core/build/session && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/core/build/session/sessionadaptor.cpp -o CMakeFiles/matsya-session.dir/sessionadaptor.cpp.s

# Object files for target matsya-session
matsya__session_OBJECTS = \
"CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/matsya-session.dir/application.cpp.o" \
"CMakeFiles/matsya-session.dir/main.cpp.o" \
"CMakeFiles/matsya-session.dir/process.cpp.o" \
"CMakeFiles/matsya-session.dir/processmanager.cpp.o" \
"CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o" \
"CMakeFiles/matsya-session.dir/powermanager/power.cpp.o" \
"CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o" \
"CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o"

# External object files for target matsya-session
matsya__session_EXTERNAL_OBJECTS =

session/matsya-session: session/CMakeFiles/matsya-session.dir/matsya-session_autogen/mocs_compilation.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/application.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/main.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/process.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/processmanager.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/networkproxymanager.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/powermanager/power.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/powermanager/powerproviders.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/sessionadaptor.cpp.o
session/matsya-session: session/CMakeFiles/matsya-session.dir/build.make
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libKF5WindowSystem.so.5.78.0
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5QmlModels.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5X11Extras.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
session/matsya-session: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
session/matsya-session: session/CMakeFiles/matsya-session.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/Documents/GitHub/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable matsya-session"
	cd /home/tokyo/Documents/GitHub/core/build/session && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matsya-session.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
session/CMakeFiles/matsya-session.dir/build: session/matsya-session

.PHONY : session/CMakeFiles/matsya-session.dir/build

session/CMakeFiles/matsya-session.dir/clean:
	cd /home/tokyo/Documents/GitHub/core/build/session && $(CMAKE_COMMAND) -P CMakeFiles/matsya-session.dir/cmake_clean.cmake
.PHONY : session/CMakeFiles/matsya-session.dir/clean

session/CMakeFiles/matsya-session.dir/depend: session/sessionadaptor.moc
session/CMakeFiles/matsya-session.dir/depend: session/sessionadaptor.cpp
session/CMakeFiles/matsya-session.dir/depend: session/sessionadaptor.h
	cd /home/tokyo/Documents/GitHub/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/Documents/GitHub/core /home/tokyo/Documents/GitHub/core/session /home/tokyo/Documents/GitHub/core/build /home/tokyo/Documents/GitHub/core/build/session /home/tokyo/Documents/GitHub/core/build/session/CMakeFiles/matsya-session.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : session/CMakeFiles/matsya-session.dir/depend
