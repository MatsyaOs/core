/****************************************************************************
** Meta object code from reading C++ file 'xlibnotifications.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/touchpad/x11/xlibnotifications.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xlibnotifications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XlibNotifications_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XlibNotifications_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XlibNotifications_t qt_meta_stringdata_XlibNotifications = {
    {
QT_MOC_LITERAL(0, 0, 17), // "XlibNotifications"
QT_MOC_LITERAL(1, 18, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "xcb_atom_t"
QT_MOC_LITERAL(4, 46, 13), // "devicePlugged"
QT_MOC_LITERAL(5, 60, 16), // "touchpadDetached"
QT_MOC_LITERAL(6, 77, 13) // "processEvents"

    },
    "XlibNotifications\0propertyChanged\0\0"
    "xcb_atom_t\0devicePlugged\0touchpadDetached\0"
    "processEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XlibNotifications[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void XlibNotifications::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XlibNotifications *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< xcb_atom_t(*)>(_a[1]))); break;
        case 1: _t->devicePlugged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->touchpadDetached(); break;
        case 3: _t->processEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XlibNotifications::*)(xcb_atom_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibNotifications::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XlibNotifications::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibNotifications::devicePlugged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XlibNotifications::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XlibNotifications::touchpadDetached)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XlibNotifications::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XlibNotifications.data,
    qt_meta_data_XlibNotifications,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XlibNotifications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XlibNotifications::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XlibNotifications.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XlibNotifications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void XlibNotifications::propertyChanged(xcb_atom_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XlibNotifications::devicePlugged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XlibNotifications::touchpadDetached()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
