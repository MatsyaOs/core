/****************************************************************************
** Meta object code from reading C++ file 'dock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/dock/dock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dock_t {
    QByteArrayData data[18];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dock_t qt_meta_stringdata_Dock = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Dock"
QT_MOC_LITERAL(1, 5, 15), // "iconSizeChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "directionChanged"
QT_MOC_LITERAL(4, 39, 17), // "visibilityChanged"
QT_MOC_LITERAL(5, 57, 27), // "roundedWindowEnabledChanged"
QT_MOC_LITERAL(6, 85, 9), // "direction"
QT_MOC_LITERAL(7, 95, 9), // "Direction"
QT_MOC_LITERAL(8, 105, 8), // "iconSize"
QT_MOC_LITERAL(9, 114, 11), // "edgeMargins"
QT_MOC_LITERAL(10, 126, 20), // "roundedWindowEnabled"
QT_MOC_LITERAL(11, 147, 4), // "Left"
QT_MOC_LITERAL(12, 152, 6), // "Bottom"
QT_MOC_LITERAL(13, 159, 5), // "Right"
QT_MOC_LITERAL(14, 165, 10), // "Visibility"
QT_MOC_LITERAL(15, 176, 13), // "AlwaysVisible"
QT_MOC_LITERAL(16, 190, 8), // "AutoHide"
QT_MOC_LITERAL(17, 199, 10) // "AlwaysHide"

    },
    "Dock\0iconSizeChanged\0\0directionChanged\0"
    "visibilityChanged\0roundedWindowEnabledChanged\0"
    "direction\0Direction\0iconSize\0edgeMargins\0"
    "roundedWindowEnabled\0Left\0Bottom\0Right\0"
    "Visibility\0AlwaysVisible\0AutoHide\0"
    "AlwaysHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049510b,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       3,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    3,   64,
      14,   14, 0x0,    3,   70,

 // enum data: key, value
      11, uint(Dock::Left),
      12, uint(Dock::Bottom),
      13, uint(Dock::Right),
      15, uint(Dock::AlwaysVisible),
      16, uint(Dock::AutoHide),
      17, uint(Dock::AlwaysHide),

       0        // eod
};

void Dock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iconSizeChanged(); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->visibilityChanged(); break;
        case 3: _t->roundedWindowEnabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dock::iconSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dock::directionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dock::visibilityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Dock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dock::roundedWindowEnabledChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Dock *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->iconSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->edgeMargins(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->roundedWindowEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Dock *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 1: _t->setIconSize(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEdgeMargins(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRoundedWindowEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dock::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Dock.data,
    qt_meta_data_Dock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dock.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dock::iconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dock::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Dock::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Dock::roundedWindowEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
