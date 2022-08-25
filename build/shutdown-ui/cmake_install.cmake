# Install script for directory: /home/tokyo/matsyaos/QT6/done/core/shutdown-ui

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/matsya-shutdown/translations" TYPE FILE FILES
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ar_AA.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/be_BY.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/be_Latn.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/bg_BG.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/bs_BA.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/cs_CZ.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/da_DK.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/de_DE.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/en_US.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/eo_XX.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/es_ES.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/es_MX.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/fa_IR.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/fi_FI.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/fr_FR.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/he_IL.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/hi_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/hu_HU.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/id_ID.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ie.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/it_IT.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ja_JP.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/lt_LT.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/lv_LV.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/mg.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ml_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/nb_NO.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ne_NP.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/pl_PL.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/pt_BR.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/pt_PT.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ro_RO.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ru_RU.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/si_LK.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/sk_SK.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/so.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/sr_RS.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/sv_SE.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/sw.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/ta_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/tr_TR.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/uk_UA.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/uz_UZ.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/vi_VN.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/zh_CN.qm"
    "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/zh_TW.qm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/matsyaos/QT6/done/core/build/shutdown-ui/matsya-shutdown")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-shutdown")
    endif()
  endif()
endif()

