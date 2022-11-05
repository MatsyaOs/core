/****************************************************************************
** Meta object code from reading C++ file 'sniproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../xembed-sni-proxy/sniproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sniproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SNIProxy_t {
    QByteArrayData data[24];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SNIProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SNIProxy_t qt_meta_stringdata_SNIProxy = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SNIProxy"
QT_MOC_LITERAL(1, 9, 7), // "NewIcon"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "NewOverlayIcon"
QT_MOC_LITERAL(4, 33, 16), // "NewAttentionIcon"
QT_MOC_LITERAL(5, 50, 10), // "NewToolTip"
QT_MOC_LITERAL(6, 61, 9), // "NewStatus"
QT_MOC_LITERAL(7, 71, 6), // "status"
QT_MOC_LITERAL(8, 78, 11), // "ContextMenu"
QT_MOC_LITERAL(9, 90, 1), // "x"
QT_MOC_LITERAL(10, 92, 1), // "y"
QT_MOC_LITERAL(11, 94, 8), // "Activate"
QT_MOC_LITERAL(12, 103, 17), // "SecondaryActivate"
QT_MOC_LITERAL(13, 121, 6), // "Scroll"
QT_MOC_LITERAL(14, 128, 5), // "delta"
QT_MOC_LITERAL(15, 134, 11), // "orientation"
QT_MOC_LITERAL(16, 146, 8), // "Category"
QT_MOC_LITERAL(17, 155, 2), // "Id"
QT_MOC_LITERAL(18, 158, 5), // "Title"
QT_MOC_LITERAL(19, 164, 6), // "Status"
QT_MOC_LITERAL(20, 171, 8), // "WindowId"
QT_MOC_LITERAL(21, 180, 10), // "ItemIsMenu"
QT_MOC_LITERAL(22, 191, 10), // "IconPixmap"
QT_MOC_LITERAL(23, 202, 16) // "KDbusImageVector"

    },
    "SNIProxy\0NewIcon\0\0NewOverlayIcon\0"
    "NewAttentionIcon\0NewToolTip\0NewStatus\0"
    "status\0ContextMenu\0x\0y\0Activate\0"
    "SecondaryActivate\0Scroll\0delta\0"
    "orientation\0Category\0Id\0Title\0Status\0"
    "WindowId\0ItemIsMenu\0IconPixmap\0"
    "KDbusImageVector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SNIProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   66,    2, 0x0a /* Public */,
      11,    2,   71,    2, 0x0a /* Public */,
      12,    2,   76,    2, 0x0a /* Public */,
      13,    2,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::QString, 0x00095001,
      19, QMetaType::QString, 0x00095001,
      20, QMetaType::Int, 0x00095001,
      21, QMetaType::Bool, 0x00095001,
      22, 0x80000000 | 23, 0x00095009,

       0        // eod
};

void SNIProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SNIProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NewIcon(); break;
        case 1: _t->NewOverlayIcon(); break;
        case 2: _t->NewAttentionIcon(); break;
        case 3: _t->NewToolTip(); break;
        case 4: _t->NewStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Activate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->SecondaryActivate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->Scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SNIProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SNIProxy::NewIcon)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SNIProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SNIProxy::NewOverlayIcon)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SNIProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SNIProxy::NewAttentionIcon)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SNIProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SNIProxy::NewToolTip)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SNIProxy::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SNIProxy::NewStatus)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDbusImageVector >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SNIProxy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->Category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->Id(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->Title(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->Status(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->WindowId(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->ItemIsMenu(); break;
        case 6: *reinterpret_cast< KDbusImageVector*>(_v) = _t->IconPixmap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SNIProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SNIProxy.data,
    qt_meta_data_SNIProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SNIProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SNIProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SNIProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SNIProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SNIProxy::NewIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SNIProxy::NewOverlayIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SNIProxy::NewAttentionIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SNIProxy::NewToolTip()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SNIProxy::NewStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
