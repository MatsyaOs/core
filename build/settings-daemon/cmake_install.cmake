# Install script for directory: /home/tokyo/clone/RebootOS/core/settings-daemon

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/clone/RebootOS/core/build/settings-daemon/cutefish-settings-daemon")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings-daemon")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cutefish-settings-daemon/translations" TYPE FILE FILES
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ar_AA.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/be_BY.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/be_Latn.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/bg_BG.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/bs_BA.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/cs_CZ.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/da_DK.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/de_DE.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/en_US.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/eo_XX.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/es_ES.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/es_MX.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/fa_IR.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/fi_FI.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/fr_FR.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/he_IL.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/hi_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/hu_HU.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/id_ID.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ie.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/it_IT.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ja_JP.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/lt_LT.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/lv_LV.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/mg.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ml_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/nb_NO.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ne_NP.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/pl_PL.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/pt_BR.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/pt_PT.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ro_RO.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ru_RU.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/si_LK.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/sk_SK.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/so.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/sr_RS.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/sv_SE.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/sw.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/ta_IN.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/tr_TR.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/uk_UA.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/uz_UZ.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/vi_VN.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/zh_CN.qm"
    "/home/tokyo/clone/RebootOS/core/build/settings-daemon/zh_TW.qm"
    )
endif()

