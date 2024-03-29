/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a touchpadadaptor -i touchpad/touchpadmanager.h -l TouchpadManager /run/media/tokyo/DATA/Documents/final/core/settings-daemon/touchpad/com.matsya.Touchpad.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "touchpadadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class TouchpadAdaptor
 */

TouchpadAdaptor::TouchpadAdaptor(TouchpadManager *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

TouchpadAdaptor::~TouchpadAdaptor()
{
    // destructor
}

bool TouchpadAdaptor::available() const
{
    // get the value of property available
    return qvariant_cast< bool >(parent()->property("available"));
}

bool TouchpadAdaptor::enabled() const
{
    // get the value of property enabled
    return qvariant_cast< bool >(parent()->property("enabled"));
}

bool TouchpadAdaptor::naturalScroll() const
{
    // get the value of property naturalScroll
    return qvariant_cast< bool >(parent()->property("naturalScroll"));
}

double TouchpadAdaptor::pointerAcceleration() const
{
    // get the value of property pointerAcceleration
    return qvariant_cast< double >(parent()->property("pointerAcceleration"));
}

bool TouchpadAdaptor::tapToClick() const
{
    // get the value of property tapToClick
    return qvariant_cast< bool >(parent()->property("tapToClick"));
}

void TouchpadAdaptor::setEnabled(bool enabled)
{
    // handle method call com.matsya.Touchpad.setEnabled
    parent()->setEnabled(enabled);
}

void TouchpadAdaptor::setNaturalScroll(bool enabled)
{
    // handle method call com.matsya.Touchpad.setNaturalScroll
    parent()->setNaturalScroll(enabled);
}

void TouchpadAdaptor::setPointerAcceleration(double value)
{
    // handle method call com.matsya.Touchpad.setPointerAcceleration
    parent()->setPointerAcceleration(value);
}

void TouchpadAdaptor::setTapToClick(bool enabled)
{
    // handle method call com.matsya.Touchpad.setTapToClick
    parent()->setTapToClick(enabled);
}


#include "touchpadadaptor.moc"
