# Install script for directory: /home/tokyo/clone/RebootOS/core/polkit-agent

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
  set(CMAKE_INSTALL_SO_NO_EXE "1")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/clone/RebootOS/core/build/polkit-agent/cutefish-polkit-agent")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-polkit-agent")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/etc/xdg/autostart/cutefish-polkit-agent.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/etc/xdg/autostart" TYPE FILE FILES "/home/tokyo/clone/RebootOS/core/polkit-agent/cutefish-polkit-agent.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cutefish-polkit-agent/translations" TYPE FILE FILES
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ar_AA.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/be_BY.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/be_Latn.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/bg_BG.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/bs_BA.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/cs_CZ.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/da_DK.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/de_DE.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/en_US.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/eo_XX.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/es_ES.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/es_MX.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/fa_IR.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/fi_FI.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/fr_FR.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/he_IL.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/hi_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/hu_HU.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/id_ID.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ie.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/it_IT.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ja_JP.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/lt_LT.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/lv_LV.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/mg.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ml_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/nb_NO.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ne_NP.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/pl_PL.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/pt_BR.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/pt_PT.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ro_RO.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ru_RU.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/si_LK.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/sk_SK.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/so.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/sr_RS.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/sv_SE.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/sw.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/ta_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/tr_TR.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/uk_UA.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/uz_UZ.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/vi_VN.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/zh_CN.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/zh_HK.qm"
    "/home/tokyo/clone/RebootOS/core/build/polkit-agent/zh_TW.qm"
    )
endif()

