/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a statusnotifieritemadaptor -i sniproxy.h -l SNIProxy /run/media/tokyo/DATA/Documents/final/core/xembed-sni-proxy/org.kde.StatusNotifierItem.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef STATUSNOTIFIERITEMADAPTOR_H
#define STATUSNOTIFIERITEMADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "sniproxy.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.kde.StatusNotifierItem
 */
class StatusNotifierItemAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.StatusNotifierItem")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.StatusNotifierItem\">\n"
"    <property access=\"read\" type=\"s\" name=\"Category\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Id\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Title\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Status\"/>\n"
"    <property access=\"read\" type=\"i\" name=\"WindowId\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"ItemIsMenu\"/>\n"
"    <property access=\"read\" type=\"(iiay)\" name=\"IconPixmap\">\n"
"      <annotation value=\"KDbusImageVector\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <method name=\"ContextMenu\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"Activate\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"SecondaryActivate\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"Scroll\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"delta\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"orientation\"/>\n"
"    </method>\n"
"    <signal name=\"NewTitle\"/>\n"
"    <signal name=\"NewIcon\"/>\n"
"    <signal name=\"NewAttentionIcon\"/>\n"
"    <signal name=\"NewOverlayIcon\"/>\n"
"    <signal name=\"NewToolTip\"/>\n"
"    <signal name=\"NewStatus\">\n"
"      <arg type=\"s\" name=\"status\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    StatusNotifierItemAdaptor(SNIProxy *parent);
    virtual ~StatusNotifierItemAdaptor();

    inline SNIProxy *parent() const
    { return static_cast<SNIProxy *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(QString Category READ category)
    QString category() const;

    Q_PROPERTY(KDbusImageVector IconPixmap READ iconPixmap)
    KDbusImageVector iconPixmap() const;

    Q_PROPERTY(QString Id READ id)
    QString id() const;

    Q_PROPERTY(bool ItemIsMenu READ itemIsMenu)
    bool itemIsMenu() const;

    Q_PROPERTY(QString Status READ status)
    QString status() const;

    Q_PROPERTY(QString Title READ title)
    QString title() const;

    Q_PROPERTY(int WindowId READ windowId)
    int windowId() const;

public Q_SLOTS: // METHODS
    void Activate(int x, int y);
    void ContextMenu(int x, int y);
    void Scroll(int delta, const QString &orientation);
    void SecondaryActivate(int x, int y);
Q_SIGNALS: // SIGNALS
    void NewAttentionIcon();
    void NewIcon();
    void NewOverlayIcon();
    void NewStatus(const QString &status);
    void NewTitle();
    void NewToolTip();
};

#endif
