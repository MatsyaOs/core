/****************************************************************************
** Meta object code from reading C++ file 'xlibbackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/touchpad/x11/xlibbackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xlibbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XlibBackend_t {
    QByteArrayData data[16];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XlibBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XlibBackend_t qt_meta_stringdata_XlibBackend = {
    {
QT_MOC_LITERAL(0, 0, 11), // "XlibBackend"
QT_MOC_LITERAL(1, 12, 20), // "touchpadStateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "mousesChanged"
QT_MOC_LITERAL(4, 48, 13), // "touchpadReset"
QT_MOC_LITERAL(5, 62, 23), // "keyboardActivityStarted"
QT_MOC_LITERAL(6, 86, 24), // "keyboardActivityFinished"
QT_MOC_LITERAL(7, 111, 13), // "touchpadAdded"
QT_MOC_LITERAL(8, 125, 7), // "success"
QT_MOC_LITERAL(9, 133, 15), // "touchpadRemoved"
QT_MOC_LITERAL(10, 149, 5), // "index"
QT_MOC_LITERAL(11, 155, 15), // "propertyChanged"
QT_MOC_LITERAL(12, 171, 10), // "xcb_atom_t"
QT_MOC_LITERAL(13, 182, 16), // "touchpadDetached"
QT_MOC_LITERAL(14, 199, 13), // "devicePlugged"
QT_MOC_LITERAL(15, 213, 13) // "touchpadCount"

    },
    "XlibBackend\0touchpadStateChanged\0\0"
    "mousesChanged\0touchpadReset\0"
    "keyboardActivityStarted\0"
    "keyboardActivityFinished\0touchpadAdded\0"
    "success\0touchpadRemoved\0index\0"
    "propertyChanged\0xcb_atom_t\0touchpadDetached\0"
    "devicePlugged\0touchpadCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XlibBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,
       9,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   75,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00095401,

       0        // eod
};

void XlibBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XlibBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->touchpadStateChanged(); break;
        case 1: _t->mousesChanged(); break;
        case 2: _t->touchpadReset(); break;
        case 3: _t->keyboardActivityStarted(); break;
        case 4: _t->keyboardActivityFinished(); break;
        case 5: _t->touchpadAdded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->touchpadRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->propertyChanged((*reinterpret_cast< xcb_atom_t(*)>(_a[1]))); break;
        case 8: _t->touchpadDetached(); break;
        case 9: _t->devicePlugged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XlibBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::touchpadStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::mousesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::touchpadReset)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::keyboardActivityStarted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::keyboardActivityFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::touchpadAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (XlibBackend::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibBackend::touchpadRemoved)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<XlibBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->touchpadCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject XlibBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XlibBackend.data,
    qt_meta_data_XlibBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XlibBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XlibBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XlibBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XlibBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void XlibBackend::touchpadStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XlibBackend::mousesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void XlibBackend::touchpadReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void XlibBackend::keyboardActivityStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void XlibBackend::keyboardActivityFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void XlibBackend::touchpadAdded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XlibBackend::touchpadRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
