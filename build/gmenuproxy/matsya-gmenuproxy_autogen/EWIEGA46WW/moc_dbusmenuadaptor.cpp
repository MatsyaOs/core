/****************************************************************************
** Meta object code from reading C++ file 'dbusmenuadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gmenuproxy/dbusmenuadaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmenuadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DbusmenuAdaptor_t {
    QByteArrayData data[36];
    char stringdata0[2873];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DbusmenuAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DbusmenuAdaptor_t qt_meta_stringdata_DbusmenuAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DbusmenuAdaptor"
QT_MOC_LITERAL(1, 16, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 32, 22), // "com.canonical.dbusmenu"
QT_MOC_LITERAL(3, 55, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 75, 2460), // "  <interface name=\"com.canon..."
QT_MOC_LITERAL(5, 2307, 23), // "ItemActivationRequested"
QT_MOC_LITERAL(6, 2331, 0), // ""
QT_MOC_LITERAL(7, 2332, 2), // "id"
QT_MOC_LITERAL(8, 2335, 9), // "timeStamp"
QT_MOC_LITERAL(9, 2345, 22), // "ItemsPropertiesUpdated"
QT_MOC_LITERAL(10, 2368, 16), // "DBusMenuItemList"
QT_MOC_LITERAL(11, 2385, 3), // "in0"
QT_MOC_LITERAL(12, 2389, 20), // "DBusMenuItemKeysList"
QT_MOC_LITERAL(13, 2410, 3), // "in1"
QT_MOC_LITERAL(14, 2414, 13), // "LayoutUpdated"
QT_MOC_LITERAL(15, 2428, 8), // "revision"
QT_MOC_LITERAL(16, 2437, 8), // "parentId"
QT_MOC_LITERAL(17, 2446, 11), // "AboutToShow"
QT_MOC_LITERAL(18, 2458, 5), // "Event"
QT_MOC_LITERAL(19, 2464, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(20, 2474, 7), // "eventId"
QT_MOC_LITERAL(21, 2482, 12), // "QDBusVariant"
QT_MOC_LITERAL(22, 2495, 4), // "data"
QT_MOC_LITERAL(23, 2500, 9), // "timestamp"
QT_MOC_LITERAL(24, 2510, 18), // "GetGroupProperties"
QT_MOC_LITERAL(25, 2529, 10), // "QList<int>"
QT_MOC_LITERAL(26, 2540, 3), // "ids"
QT_MOC_LITERAL(27, 2544, 13), // "propertyNames"
QT_MOC_LITERAL(28, 2558, 9), // "GetLayout"
QT_MOC_LITERAL(29, 2568, 14), // "recursionDepth"
QT_MOC_LITERAL(30, 2583, 19), // "DBusMenuLayoutItem&"
QT_MOC_LITERAL(31, 2603, 4), // "item"
QT_MOC_LITERAL(32, 2608, 11), // "GetProperty"
QT_MOC_LITERAL(33, 2620, 8), // "property"
QT_MOC_LITERAL(34, 2629, 6), // "Status"
QT_MOC_LITERAL(35, 2636, 7) // "Version"

    },
    "DbusmenuAdaptor\0D-Bus Interface\0"
    "com.canonical.dbusmenu\0D-Bus Introspection\0"
    "  <interface name=\"com.canonical.dbusmenu\">\n    <property access=\""
    "read\" type=\"u\" name=\"Version\"/>\n    <property access=\"read\" ty"
    "pe=\"s\" name=\"Status\"/>\n    <signal name=\"ItemsPropertiesUpdated\""
    ">\n      <annotation value=\"DBusMenuItemList\" name=\"org.qtproject.Q"
    "tDBus.QtTypeName.Out0\"/>\n      <annotation value=\"DBusMenuItemKeysL"
    "ist\" name=\"org.qtproject.QtDBus.QtTypeName.Out1\"/>\n      <arg dire"
    "ction=\"out\" type=\"a(ia{sv})\"/>\n      <arg direction=\"out\" type="
    "\"a(ias)\"/>\n    </signal>\n    <signal name=\"LayoutUpdated\">\n    "
    "  <arg direction=\"out\" type=\"u\" name=\"revision\"/>\n      <arg di"
    "rection=\"out\" type=\"i\" name=\"parentId\"/>\n    </signal>\n    <si"
    "gnal name=\"ItemActivationRequested\">\n      <arg direction=\"out\" t"
    "ype=\"i\" name=\"id\"/>\n      <arg direction=\"out\" type=\"u\" name="
    "\"timeStamp\"/>\n    </signal>\n    <method name=\"Event\">\n      <ar"
    "g direction=\"in\" type=\"i\" name=\"id\"/>\n      <arg direction=\"in"
    "\" type=\"s\" name=\"eventId\"/>\n      <arg direction=\"in\" type=\"v"
    "\" name=\"data\"/>\n      <arg direction=\"in\" type=\"u\" name=\"time"
    "stamp\"/>\n      <annotation value=\"true\" name=\"org.freedesktop.DBu"
    "s.Method.NoReply\"/>\n    </method>\n    <method name=\"GetProperty\">"
    "\n      <arg direction=\"out\" type=\"v\"/>\n      <arg direction=\"in"
    "\" type=\"i\" name=\"id\"/>\n      <arg direction=\"in\" type=\"s\" na"
    "me=\"property\"/>\n    </method>\n    <method name=\"GetLayout\">\n   "
    "   <arg direction=\"out\" type=\"u\"/>\n      <arg direction=\"in\" ty"
    "pe=\"i\" name=\"parentId\"/>\n      <arg direction=\"in\" type=\"i\" n"
    "ame=\"recursionDepth\"/>\n      <arg direction=\"in\" type=\"as\" name"
    "=\"propertyNames\"/>\n      <arg direction=\"out\" type=\"(ia{sv}av)\""
    " name=\"item\"/>\n      <annotation value=\"DBusMenuLayoutItem\" name="
    "\"org.qtproject.QtDBus.QtTypeName.Out1\"/>\n    </method>\n    <method"
    " name=\"GetGroupProperties\">\n      <arg direction=\"out\" type=\"a(i"
    "a{sv})\"/>\n      <annotation value=\"DBusMenuItemList\" name=\"org.qt"
    "project.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"in\" type=\""
    "ai\" name=\"ids\"/>\n      <annotation value=\"QList&lt;int&gt;\" name"
    "=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n      <arg direction=\"in\""
    " type=\"as\" name=\"propertyNames\"/>\n    </method>\n    <method name"
    "=\"AboutToShow\">\n      <arg direction=\"out\" type=\"b\"/>\n      <a"
    "rg direction=\"in\" type=\"i\" name=\"id\"/>\n    </method>\n  </inter"
    "face>\n\0"
    "ItemActivationRequested\0\0id\0timeStamp\0"
    "ItemsPropertiesUpdated\0DBusMenuItemList\0"
    "in0\0DBusMenuItemKeysList\0in1\0LayoutUpdated\0"
    "revision\0parentId\0AboutToShow\0Event\0"
    "Q_NOREPLY\0eventId\0QDBusVariant\0data\0"
    "timestamp\0GetGroupProperties\0QList<int>\0"
    "ids\0propertyNames\0GetLayout\0recursionDepth\0"
    "DBusMenuLayoutItem&\0item\0GetProperty\0"
    "property\0Status\0Version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DbusmenuAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       2,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    2,   58,    6, 0x06 /* Public */,
       9,    2,   63,    6, 0x06 /* Public */,
      14,    2,   68,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   73,    6, 0x0a /* Public */,
      18,    4,   76,   19, 0x0a /* Public */,
      24,    2,   85,    6, 0x0a /* Public */,
      28,    4,   90,    6, 0x0a /* Public */,
      32,    2,   99,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   15,   16,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 21, QMetaType::UInt,    7,   20,   22,   23,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::QStringList,   26,   27,
    QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QStringList, 0x80000000 | 30,   16,   29,   27,   31,
    0x80000000 | 21, QMetaType::Int, QMetaType::QString,    7,   33,

 // properties: name, type, flags
      34, QMetaType::QString, 0x00095001,
      35, QMetaType::UInt, 0x00095001,

       0        // eod
};

void DbusmenuAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DbusmenuAdaptor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ItemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->ItemsPropertiesUpdated((*reinterpret_cast< DBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< DBusMenuItemKeysList(*)>(_a[2]))); break;
        case 2: _t->LayoutUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { bool _r = _t->AboutToShow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->Event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 5: { DBusMenuItemList _r = _t->GetGroupProperties((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DBusMenuItemList*>(_a[0]) = std::move(_r); }  break;
        case 6: { uint _r = _t->GetLayout((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< DBusMenuLayoutItem(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusVariant _r = _t->GetProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemKeysList >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemList >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DbusmenuAdaptor::*)(int , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DbusmenuAdaptor::ItemActivationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DbusmenuAdaptor::*)(DBusMenuItemList , DBusMenuItemKeysList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DbusmenuAdaptor::ItemsPropertiesUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DbusmenuAdaptor::*)(uint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DbusmenuAdaptor::LayoutUpdated)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DbusmenuAdaptor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->version(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DbusmenuAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_DbusmenuAdaptor.data,
    qt_meta_data_DbusmenuAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DbusmenuAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DbusmenuAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DbusmenuAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DbusmenuAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DbusmenuAdaptor::ItemActivationRequested(int _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DbusmenuAdaptor::ItemsPropertiesUpdated(DBusMenuItemList _t1, DBusMenuItemKeysList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DbusmenuAdaptor::LayoutUpdated(uint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
