# Install script for directory: /home/tokyo/matsyaos/QT6/done/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/etc/matsya")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/etc" TYPE FILE FILES "/home/tokyo/matsyaos/QT6/done/core/matsya")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/tokyo/matsyaos/QT6/done/core/build/polkit-agent/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/screen-brightness/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/session/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/settings-daemon/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/xembed-sni-proxy/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/powerman/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/cpufreq/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/chotkeys/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/cupdatecursor/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/gmenuproxy/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/notificationd/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/sddm-helper/cmake_install.cmake")
  include("/home/tokyo/matsyaos/QT6/done/core/build/clipboard/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tokyo/matsyaos/QT6/done/core/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
