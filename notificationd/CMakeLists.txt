set(SRCS main.cpp
         application.cpp
         datehelper.cpp
         screenhelper.cpp
         notificationsmodel.cpp
         notificationserver.cpp
         notification.cpp
         notificationpopup.cpp
         notificationwindow.cpp
         historymodel.cpp
         settings.cpp
         utils.cpp
         dbus/notificationsadaptor.cpp
         resources.qrc
)

# for Ubuntu
# qt_add_dbus_adaptor(SRCS org.freedesktop.Notifications.xml notificationserver.h NotificationServer)

qt5_add_dbus_adaptor(DBUS_SOURCES com.matsya.Notification.xml application.h Application)
set_source_files_properties(${DBUS_SOURCES} PROPERTIES SKIP_AUTOGEN ON)

find_package(KF5WindowSystem)

add_executable(matsya-notificationd ${SRCS} ${DBUS_SOURCES})

target_link_libraries(matsya-notificationd
    Qt5::Core
    Qt5::DBus
    Qt5::Quick
    Qt5::Widgets
    KF5::WindowSystem
)

install(TARGETS matsya-notificationd
    DESTINATION /usr/bin
    COMPONENT Runtime
)

file(GLOB TS_FILES translations/*.ts)
qt5_create_translation(QM_FILES ${TS_FILES})
add_custom_target(notificationd_translations DEPENDS ${QM_FILES} SOURCES ${TS_FILES})
add_dependencies(matsya-notificationd notificationd_translations)

install(FILES ${QM_FILES} DESTINATION /usr/share/matsya-notificationd/translations)
