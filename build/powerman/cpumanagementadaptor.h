/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a cpumanagementadaptor -i cpu/cpumanagement.h -l CPUManagement /run/media/tokyo/DATA/Documents/final/core/powerman/cpu/com.matsya.CPUManagement.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef CPUMANAGEMENTADAPTOR_H
#define CPUMANAGEMENTADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "cpu/cpumanagement.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.matsya.CPUManagement
 */
class CPUManagementAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.matsya.CPUManagement")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.matsya.CPUManagement\">\n"
"    <property access=\"read\" type=\"i\" name=\"mode\"/>\n"
"    <method name=\"setMode\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"value\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    CPUManagementAdaptor(CPUManagement *parent);
    virtual ~CPUManagementAdaptor();

    inline CPUManagement *parent() const
    { return static_cast<CPUManagement *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(int mode READ mode)
    int mode() const;

public Q_SLOTS: // METHODS
    void setMode(int value);
Q_SIGNALS: // SIGNALS
};

#endif
