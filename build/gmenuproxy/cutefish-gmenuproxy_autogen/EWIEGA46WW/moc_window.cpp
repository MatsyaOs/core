/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gmenuproxy/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[17];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 28), // "requestWriteWindowProperties"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 29), // "requestRemoveWindowProperties"
QT_MOC_LITERAL(4, 67, 23), // "ItemActivationRequested"
QT_MOC_LITERAL(5, 91, 2), // "id"
QT_MOC_LITERAL(6, 94, 9), // "timestamp"
QT_MOC_LITERAL(7, 104, 22), // "ItemsPropertiesUpdated"
QT_MOC_LITERAL(8, 127, 16), // "DBusMenuItemList"
QT_MOC_LITERAL(9, 144, 12), // "updatedProps"
QT_MOC_LITERAL(10, 157, 20), // "DBusMenuItemKeysList"
QT_MOC_LITERAL(11, 178, 12), // "removedProps"
QT_MOC_LITERAL(12, 191, 13), // "LayoutUpdated"
QT_MOC_LITERAL(13, 205, 8), // "revision"
QT_MOC_LITERAL(14, 214, 6), // "parent"
QT_MOC_LITERAL(15, 221, 6), // "Status"
QT_MOC_LITERAL(16, 228, 7) // "Version"

    },
    "Window\0requestWriteWindowProperties\0"
    "\0requestRemoveWindowProperties\0"
    "ItemActivationRequested\0id\0timestamp\0"
    "ItemsPropertiesUpdated\0DBusMenuItemList\0"
    "updatedProps\0DBusMenuItemKeysList\0"
    "removedProps\0LayoutUpdated\0revision\0"
    "parent\0Status\0Version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    2,   41,    2, 0x06 /* Public */,
       7,    2,   46,    2, 0x06 /* Public */,
      12,    2,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   13,   14,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095001,
      16, QMetaType::UInt, 0x00095001,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestWriteWindowProperties(); break;
        case 1: _t->requestRemoveWindowProperties(); break;
        case 2: _t->ItemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->ItemsPropertiesUpdated((*reinterpret_cast< const DBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< const DBusMenuItemKeysList(*)>(_a[2]))); break;
        case 4: _t->LayoutUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemKeysList >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::requestWriteWindowProperties)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::requestRemoveWindowProperties)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Window::*)(int , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::ItemActivationRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Window::*)(const DBusMenuItemList & , const DBusMenuItemKeysList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::ItemsPropertiesUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Window::*)(uint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::LayoutUpdated)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
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

QT_INIT_METAOBJECT const QMetaObject Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Window.data,
    qt_meta_data_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void Window::requestWriteWindowProperties()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Window::requestRemoveWindowProperties()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Window::ItemActivationRequested(int _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Window::ItemsPropertiesUpdated(const DBusMenuItemList & _t1, const DBusMenuItemKeysList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Window::LayoutUpdated(uint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
