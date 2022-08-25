project(matsya-cpufreq)
set(TARGET matsya-cpufreq)

set(SOURCES
    main.cpp
)

add_executable(${TARGET} ${SOURCES} ${DBUS_SOURCES})
target_link_libraries(${TARGET}
        Qt5::Core
        Qt5::Quick
        Qt5::DBus
        Qt5::X11Extras
)

configure_file(
    com.matsya.cpufreq.pkexec.policy.in
    com.matsya.cpufreq.pkexec.policy
    @ONLY
)

install(TARGETS ${TARGET} DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/com.matsya.cpufreq.pkexec.policy DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/polkit-1/actions/)
