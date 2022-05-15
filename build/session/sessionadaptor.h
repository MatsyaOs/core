/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a sessionadaptor -c SessionAdaptor -i application.h -l Application /home/tokyo/clone/RebootOS/core/session/com.cutefish.Session.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef SESSIONADAPTOR_H
#define SESSIONADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "application.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.cutefish.Session
 */
class SessionAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.cutefish.Session")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.cutefish.Session\">\n"
"    <method name=\"logout\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"reboot\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"powerOff\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"suspend\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"startDesktopProcess\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"updateNetworkProxy\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"    </method>\n"
"    <method name=\"launch\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"exec\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"args\"/>\n"
"    </method>\n"
"    <method name=\"launch\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"exec\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"workingDirectory\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"args\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    SessionAdaptor(Application *parent);
    virtual ~SessionAdaptor();

    inline Application *parent() const
    { return static_cast<Application *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void launch(const QString &exec, const QString &workingDirectory, const QStringList &args);
    void launch(const QString &exec, const QStringList &args);
    Q_NOREPLY void logout();
    Q_NOREPLY void powerOff();
    Q_NOREPLY void reboot();
    Q_NOREPLY void startDesktopProcess();
    Q_NOREPLY void suspend();
    Q_NOREPLY void updateNetworkProxy();
Q_SIGNALS: // SIGNALS
};

#endif
