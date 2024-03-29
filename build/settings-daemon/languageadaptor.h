/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a languageadaptor -i language/language.h -l Language /run/media/tokyo/DATA/Documents/final/core/settings-daemon/language/com.matsya.Language.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef LANGUAGEADAPTOR_H
#define LANGUAGEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "language/language.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.matsya.Language
 */
class LanguageAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.matsya.Language")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.matsya.Language\">\n"
"    <method name=\"setLanguage\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"value\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"s\" name=\"languageCode\"/>\n"
"    <signal name=\"languageChanged\"/>\n"
"  </interface>\n"
        "")
public:
    LanguageAdaptor(Language *parent);
    virtual ~LanguageAdaptor();

    inline Language *parent() const
    { return static_cast<Language *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(QString languageCode READ languageCode)
    QString languageCode() const;

public Q_SLOTS: // METHODS
    void setLanguage(const QString &value);
Q_SIGNALS: // SIGNALS
    void languageChanged();
};

#endif
