cmake_minimum_required(VERSION 3.14)

project(matsya-clipboard LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(matsya-clipboard
  main.cpp
  clipboard.cpp
)
target_link_libraries(matsya-clipboard
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

install(TARGETS matsya-clipboard DESTINATION ${CMAKE_INSTALL_BINDIR})
