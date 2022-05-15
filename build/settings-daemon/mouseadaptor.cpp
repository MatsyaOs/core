/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a mouseadaptor -i mouse/mousemanager.h -l Mouse /home/tokyo/clone/RebootOS/core/settings-daemon/mouse/com.cutefish.Mouse.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "mouseadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MouseAdaptor
 */

MouseAdaptor::MouseAdaptor(Mouse *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MouseAdaptor::~MouseAdaptor()
{
    // destructor
}

bool MouseAdaptor::leftHanded() const
{
    // get the value of property leftHanded
    return qvariant_cast< bool >(parent()->property("leftHanded"));
}

bool MouseAdaptor::naturalScroll() const
{
    // get the value of property naturalScroll
    return qvariant_cast< bool >(parent()->property("naturalScroll"));
}

double MouseAdaptor::pointerAcceleration() const
{
    // get the value of property pointerAcceleration
    return qvariant_cast< double >(parent()->property("pointerAcceleration"));
}

void MouseAdaptor::setLeftHanded(bool value)
{
    // handle method call com.cutefish.Mouse.setLeftHanded
    parent()->setLeftHanded(value);
}

void MouseAdaptor::setNaturalScroll(bool value)
{
    // handle method call com.cutefish.Mouse.setNaturalScroll
    parent()->setNaturalScroll(value);
}

void MouseAdaptor::setPointerAcceleration(double value)
{
    // handle method call com.cutefish.Mouse.setPointerAcceleration
    parent()->setPointerAcceleration(value);
}


#include "mouseadaptor.moc"
