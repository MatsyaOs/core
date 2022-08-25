/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a notificationadaptor -i application.h -l Application /home/tokyo/matsyaos/QT6/done/core/notificationd/com.matsya.Notification.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "notificationadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class NotificationAdaptor
 */

NotificationAdaptor::NotificationAdaptor(Application *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NotificationAdaptor::~NotificationAdaptor()
{
    // destructor
}

bool NotificationAdaptor::doNotDisturb() const
{
    // get the value of property doNotDisturb
    return qvariant_cast< bool >(parent()->property("doNotDisturb"));
}

void NotificationAdaptor::setDoNotDisturb(bool enabled)
{
    // handle method call com.matsya.Notification.setDoNotDisturb
    parent()->setDoNotDisturb(enabled);
}

void NotificationAdaptor::showWindow()
{
    // handle method call com.matsya.Notification.showWindow
    parent()->showWindow();
}


#include "notificationadaptor.moc"