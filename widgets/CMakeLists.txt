project(matsya-widgets)

add_executable(matsya-widgets
    main.cpp
    actions.cpp
    qml.qrc
)

target_link_libraries(matsya-widgets
        Qt5::Core
        Qt5::Widgets
        Qt5::Quick
        Qt5::QuickControls2
        Qt5::DBus
)

file(GLOB TS_FILES translations/*.ts)
qt5_create_translation(QM_FILES ${TS_FILES})
add_custom_target(widgets-translations DEPENDS ${QM_FILES} SOURCES ${TS_FILES})
add_dependencies(matsya-widgets widgets-translations)
install(FILES ${QM_FILES} DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/matsya-widgets/translations)

install(TARGETS matsya-widgets RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
