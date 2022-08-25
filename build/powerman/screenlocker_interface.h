/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p screenlocker_interface /home/tokyo/matsyaos/QT6/done/core/powerman/org.freedesktop.ScreenSaver.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SCREENLOCKER_INTERFACE_H
#define SCREENLOCKER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.ScreenSaver
 */
class OrgFreedesktopScreenSaverInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ScreenSaver"; }

public:
    OrgFreedesktopScreenSaverInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopScreenSaverInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> GetActive()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetActive"), argumentList);
    }

    inline QDBusPendingReply<uint> GetActiveTime()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetActiveTime"), argumentList);
    }

    inline QDBusPendingReply<uint> GetSessionIdleTime()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetSessionIdleTime"), argumentList);
    }

    inline QDBusPendingReply<uint> Inhibit(const QString &application_name, const QString &reason_for_inhibit)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application_name) << QVariant::fromValue(reason_for_inhibit);
        return asyncCallWithArgumentList(QStringLiteral("Inhibit"), argumentList);
    }

    inline QDBusPendingReply<> Lock()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Lock"), argumentList);
    }

    inline QDBusPendingReply<bool> SetActive(bool e)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(e);
        return asyncCallWithArgumentList(QStringLiteral("SetActive"), argumentList);
    }

    inline QDBusPendingReply<> SimulateUserActivity()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("SimulateUserActivity"), argumentList);
    }

    inline QDBusPendingReply<uint> Throttle(const QString &application_name, const QString &reason_for_inhibit)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application_name) << QVariant::fromValue(reason_for_inhibit);
        return asyncCallWithArgumentList(QStringLiteral("Throttle"), argumentList);
    }

    inline QDBusPendingReply<> UnInhibit(uint cookie)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(cookie);
        return asyncCallWithArgumentList(QStringLiteral("UnInhibit"), argumentList);
    }

    inline QDBusPendingReply<> UnThrottle(uint cookie)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(cookie);
        return asyncCallWithArgumentList(QStringLiteral("UnThrottle"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ActiveChanged(bool in0);
};

namespace org {
  namespace freedesktop {
    typedef ::OrgFreedesktopScreenSaverInterface ScreenSaver;
  }
}
#endif