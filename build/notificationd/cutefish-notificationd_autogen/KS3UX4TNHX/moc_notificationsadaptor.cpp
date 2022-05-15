/****************************************************************************
** Meta object code from reading C++ file 'notificationsadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../notificationd/dbus/notificationsadaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationsadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationsAdaptor_t {
    QByteArrayData data[27];
    char stringdata0[1786];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationsAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationsAdaptor_t qt_meta_stringdata_NotificationsAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 20), // "NotificationsAdaptor"
QT_MOC_LITERAL(1, 21, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 37, 29), // "org.freedesktop.Notifications"
QT_MOC_LITERAL(3, 67, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 87, 1482), // "  <interface name=\"org.freed..."
QT_MOC_LITERAL(5, 1420, 13), // "ActionInvoked"
QT_MOC_LITERAL(6, 1434, 0), // ""
QT_MOC_LITERAL(7, 1435, 3), // "in0"
QT_MOC_LITERAL(8, 1439, 3), // "in1"
QT_MOC_LITERAL(9, 1443, 18), // "NotificationClosed"
QT_MOC_LITERAL(10, 1462, 17), // "CloseNotification"
QT_MOC_LITERAL(11, 1480, 2), // "id"
QT_MOC_LITERAL(12, 1483, 15), // "GetCapabilities"
QT_MOC_LITERAL(13, 1499, 20), // "GetServerInformation"
QT_MOC_LITERAL(14, 1520, 8), // "QString&"
QT_MOC_LITERAL(15, 1529, 6), // "vendor"
QT_MOC_LITERAL(16, 1536, 7), // "version"
QT_MOC_LITERAL(17, 1544, 12), // "spec_version"
QT_MOC_LITERAL(18, 1557, 6), // "Notify"
QT_MOC_LITERAL(19, 1564, 8), // "app_name"
QT_MOC_LITERAL(20, 1573, 11), // "replaces_id"
QT_MOC_LITERAL(21, 1585, 8), // "app_icon"
QT_MOC_LITERAL(22, 1594, 7), // "summary"
QT_MOC_LITERAL(23, 1602, 4), // "body"
QT_MOC_LITERAL(24, 1607, 7), // "actions"
QT_MOC_LITERAL(25, 1615, 5), // "hints"
QT_MOC_LITERAL(26, 1621, 14) // "expire_timeout"

    },
    "NotificationsAdaptor\0D-Bus Interface\0"
    "org.freedesktop.Notifications\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.freedesktop.Notifications\">\n    <method name"
    "=\"GetServerInformation\">\n      <arg direction=\"out\" type=\"s\" na"
    "me=\"name\"/>\n      <arg direction=\"out\" type=\"s\" name=\"vendor\""
    "/>\n      <arg direction=\"out\" type=\"s\" name=\"version\"/>\n      "
    "<arg direction=\"out\" type=\"s\" name=\"spec_version\"/>\n    </metho"
    "d>\n    <method name=\"CloseNotification\">\n      <arg direction=\"in"
    "\" type=\"u\" name=\"id\"/>\n    </method>\n    <method name=\"Notify\""
    ">\n      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus"
    ".QtTypeName.In6\"/>\n      <arg direction=\"in\" type=\"s\" name=\"app"
    "_name\"/>\n      <arg direction=\"in\" type=\"u\" name=\"replaces_id\""
    "/>\n      <arg direction=\"in\" type=\"s\" name=\"app_icon\"/>\n      "
    "<arg direction=\"in\" type=\"s\" name=\"summary\"/>\n      <arg direct"
    "ion=\"in\" type=\"s\" name=\"body\"/>\n      <arg direction=\"in\" typ"
    "e=\"as\" name=\"actions\"/>\n      <arg direction=\"in\" type=\"a{sv}\""
    " name=\"hints\"/>\n      <arg direction=\"in\" type=\"i\" name=\"expir"
    "e_timeout\"/>\n      <arg direction=\"out\" type=\"u\" name=\"id\"/>\n"
    "    </method>\n    <method name=\"GetCapabilities\">\n      <arg direc"
    "tion=\"out\" type=\"as\" name=\"capabilities\"/>\n    </method>\n    <"
    "signal name=\"ActionInvoked\">\n      <arg type=\"u\"/>\n      <arg ty"
    "pe=\"s\"/>\n    </signal>\n    <signal name=\"NotificationClosed\">\n "
    "     <arg type=\"u\"/>\n      <arg type=\"u\"/>\n    </signal>\n  </in"
    "terface>\n\0"
    "ActionInvoked\0\0in0\0in1\0NotificationClosed\0"
    "CloseNotification\0id\0GetCapabilities\0"
    "GetServerInformation\0QString&\0vendor\0"
    "version\0spec_version\0Notify\0app_name\0"
    "replaces_id\0app_icon\0summary\0body\0"
    "actions\0hints\0expire_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationsAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       6,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    2,   48,    6, 0x06 /* Public */,
       9,    2,   53,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   58,    6, 0x0a /* Public */,
      12,    0,   61,    6, 0x0a /* Public */,
      13,    3,   62,    6, 0x0a /* Public */,
      18,    8,   69,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::QStringList,
    QMetaType::QString, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,
    QMetaType::UInt, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Int,   19,   20,   21,   22,   23,   24,   25,   26,

       0        // eod
};

void NotificationsAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationsAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->NotificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->CloseNotification((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: { QStringList _r = _t->GetCapabilities();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->GetServerInformation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { uint _r = _t->Notify((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationsAdaptor::*)(uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsAdaptor::ActionInvoked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationsAdaptor::*)(uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsAdaptor::NotificationClosed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationsAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_NotificationsAdaptor.data,
    qt_meta_data_NotificationsAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationsAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationsAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int NotificationsAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NotificationsAdaptor::ActionInvoked(uint _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NotificationsAdaptor::NotificationClosed(uint _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
