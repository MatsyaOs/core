/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a notificationadaptor -i application.h -l Application /home/tokyo/clone/RebootOS/core/notificationd/com.cutefish.Notification.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef NOTIFICATIONADAPTOR_H
#define NOTIFICATIONADAPTOR_H

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
 * Adaptor class for interface com.cutefish.Notification
 */
class NotificationAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.cutefish.Notification")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.cutefish.Notification\">\n"
"    <method name=\"showWindow\"/>\n"
"    <method name=\"setDoNotDisturb\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"enabled\"/>\n"
"    </method>\n"
"    <signal name=\"doNotDisturbChanged\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"doNotDisturb\"/>\n"
"  </interface>\n"
        "")
public:
    NotificationAdaptor(Application *parent);
    virtual ~NotificationAdaptor();

    inline Application *parent() const
    { return static_cast<Application *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(bool doNotDisturb READ doNotDisturb)
    bool doNotDisturb() const;

public Q_SLOTS: // METHODS
    void setDoNotDisturb(bool enabled);
    void showWindow();
Q_SIGNALS: // SIGNALS
    void doNotDisturbChanged();
};

#endif
