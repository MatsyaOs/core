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
include notificationd/CMakeFiles/cutefish-notificationd.dir/depend.make

# Include the progress variables for this target.
include notificationd/CMakeFiles/cutefish-notificationd.dir/progress.make

# Include the compile flags for this target's objects.
include notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make

notificationd/notificationadaptor.moc: notificationd/notificationadaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating notificationadaptor.moc"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/lib/qt5/bin/moc @/home/tokyo/clone/RebootOS/core/build/notificationd/notificationadaptor.moc_parameters

notificationd/notificationadaptor.cpp: ../notificationd/com.cutefish.Notification.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating notificationadaptor.cpp, notificationadaptor.h"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/lib/qt5/bin/qdbusxml2cpp -m -a notificationadaptor -i application.h -l Application /home/tokyo/clone/RebootOS/core/notificationd/com.cutefish.Notification.xml

notificationd/notificationadaptor.h: notificationd/notificationadaptor.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate notificationd/notificationadaptor.h

notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/resources.qrc
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: notificationd/CMakeFiles/cutefish-notificationd_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/qml/QmlNotificationPopup.qml
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/qml/NotificationWindow.qml
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/qml/IconButton.qml
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/qml/main.qml
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/images/light/close.svg
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/images/light/clear.svg
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/images/dark/close.svg
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: ../notificationd/images/dark/clear.svg
notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp: /usr/lib/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Automatic RCC for resources.qrc"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/cmake -E cmake_autorcc /home/tokyo/clone/RebootOS/core/build/notificationd/CMakeFiles/cutefish-notificationd_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json 

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o: notificationd/cutefish-notificationd_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o -c /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/mocs_compilation.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/mocs_compilation.cpp > CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/mocs_compilation.cpp -o CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.o: ../notificationd/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/main.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/main.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/main.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/main.cpp > CMakeFiles/cutefish-notificationd.dir/main.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/main.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/main.cpp -o CMakeFiles/cutefish-notificationd.dir/main.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.o: ../notificationd/application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/application.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/application.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/application.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/application.cpp > CMakeFiles/cutefish-notificationd.dir/application.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/application.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/application.cpp -o CMakeFiles/cutefish-notificationd.dir/application.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o: ../notificationd/datehelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/datehelper.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/datehelper.cpp > CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/datehelper.cpp -o CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o: ../notificationd/screenhelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/screenhelper.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/screenhelper.cpp > CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/screenhelper.cpp -o CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o: ../notificationd/notificationsmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/notificationsmodel.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/notificationsmodel.cpp > CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/notificationsmodel.cpp -o CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o: ../notificationd/notificationserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/notificationserver.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/notificationserver.cpp > CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/notificationserver.cpp -o CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.o: ../notificationd/notification.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notification.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/notification.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notification.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/notification.cpp > CMakeFiles/cutefish-notificationd.dir/notification.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notification.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/notification.cpp -o CMakeFiles/cutefish-notificationd.dir/notification.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o: ../notificationd/notificationpopup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/notificationpopup.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/notificationpopup.cpp > CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/notificationpopup.cpp -o CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o: ../notificationd/notificationwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/notificationwindow.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/notificationwindow.cpp > CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/notificationwindow.cpp -o CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o: ../notificationd/historymodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/historymodel.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/historymodel.cpp > CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/historymodel.cpp -o CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.o: ../notificationd/settings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/settings.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/settings.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/settings.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/settings.cpp > CMakeFiles/cutefish-notificationd.dir/settings.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/settings.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/settings.cpp -o CMakeFiles/cutefish-notificationd.dir/settings.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.o: ../notificationd/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/utils.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/utils.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/utils.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/utils.cpp > CMakeFiles/cutefish-notificationd.dir/utils.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/utils.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/utils.cpp -o CMakeFiles/cutefish-notificationd.dir/utils.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o: ../notificationd/dbus/notificationsadaptor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o -c /home/tokyo/clone/RebootOS/core/notificationd/dbus/notificationsadaptor.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/notificationd/dbus/notificationsadaptor.cpp > CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/notificationd/dbus/notificationsadaptor.cpp -o CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o: notificationd/notificationadaptor.cpp
notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o: notificationd/notificationadaptor.moc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o -c /home/tokyo/clone/RebootOS/core/build/notificationd/notificationadaptor.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/notificationd/notificationadaptor.cpp > CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/notificationd/notificationadaptor.cpp -o CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.s

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o: notificationd/CMakeFiles/cutefish-notificationd.dir/flags.make
notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o: notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o -c /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.i"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp > CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.i

notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.s"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/RebootOS/core/build/notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp -o CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.s

# Object files for target cutefish-notificationd
cutefish__notificationd_OBJECTS = \
"CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/main.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/application.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notification.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/settings.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/utils.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o" \
"CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o"

# External object files for target cutefish-notificationd
cutefish__notificationd_EXTERNAL_OBJECTS =

notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/mocs_compilation.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/main.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/application.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/datehelper.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/screenhelper.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notificationsmodel.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notificationserver.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notification.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notificationpopup.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notificationwindow.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/historymodel.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/settings.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/utils.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/dbus/notificationsadaptor.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/notificationadaptor.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp.o
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/build.make
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libKF5WindowSystem.so.5.78.0
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5QmlModels.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
notificationd/cutefish-notificationd: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
notificationd/cutefish-notificationd: notificationd/CMakeFiles/cutefish-notificationd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/clone/RebootOS/core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable cutefish-notificationd"
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cutefish-notificationd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
notificationd/CMakeFiles/cutefish-notificationd.dir/build: notificationd/cutefish-notificationd

.PHONY : notificationd/CMakeFiles/cutefish-notificationd.dir/build

notificationd/CMakeFiles/cutefish-notificationd.dir/clean:
	cd /home/tokyo/clone/RebootOS/core/build/notificationd && $(CMAKE_COMMAND) -P CMakeFiles/cutefish-notificationd.dir/cmake_clean.cmake
.PHONY : notificationd/CMakeFiles/cutefish-notificationd.dir/clean

notificationd/CMakeFiles/cutefish-notificationd.dir/depend: notificationd/notificationadaptor.moc
notificationd/CMakeFiles/cutefish-notificationd.dir/depend: notificationd/notificationadaptor.cpp
notificationd/CMakeFiles/cutefish-notificationd.dir/depend: notificationd/notificationadaptor.h
notificationd/CMakeFiles/cutefish-notificationd.dir/depend: notificationd/cutefish-notificationd_autogen/EWIEGA46WW/qrc_resources.cpp
	cd /home/tokyo/clone/RebootOS/core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/RebootOS/core /home/tokyo/clone/RebootOS/core/notificationd /home/tokyo/clone/RebootOS/core/build /home/tokyo/clone/RebootOS/core/build/notificationd /home/tokyo/clone/RebootOS/core/build/notificationd/CMakeFiles/cutefish-notificationd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : notificationd/CMakeFiles/cutefish-notificationd.dir/depend

