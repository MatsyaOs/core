/****************************************************************************
** Meta object code from reading C++ file 'powerproviders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../session/powermanager/powerproviders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'powerproviders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerProvider_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerProvider_t qt_meta_stringdata_PowerProvider = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PowerProvider"
QT_MOC_LITERAL(1, 14, 8), // "doAction"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "Power::Action"
QT_MOC_LITERAL(4, 38, 6) // "action"

    },
    "PowerProvider\0doAction\0\0Power::Action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void PowerProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->doAction((*reinterpret_cast< Power::Action(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PowerProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PowerProvider.data,
    qt_meta_data_PowerProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PowerProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PowerProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_UPowerProvider_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UPowerProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UPowerProvider_t qt_meta_stringdata_UPowerProvider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UPowerProvider"
QT_MOC_LITERAL(1, 15, 8), // "doAction"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "Power::Action"
QT_MOC_LITERAL(4, 39, 6) // "action"

    },
    "UPowerProvider\0doAction\0\0Power::Action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UPowerProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void UPowerProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UPowerProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->doAction((*reinterpret_cast< Power::Action(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UPowerProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<PowerProvider::staticMetaObject>(),
    qt_meta_stringdata_UPowerProvider.data,
    qt_meta_data_UPowerProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UPowerProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UPowerProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UPowerProvider.stringdata0))
        return static_cast<void*>(this);
    return PowerProvider::qt_metacast(_clname);
}

int UPowerProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PowerProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ConsoleKitProvider_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleKitProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleKitProvider_t qt_meta_stringdata_ConsoleKitProvider = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ConsoleKitProvider"
QT_MOC_LITERAL(1, 19, 8), // "doAction"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "Power::Action"
QT_MOC_LITERAL(4, 43, 6) // "action"

    },
    "ConsoleKitProvider\0doAction\0\0Power::Action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleKitProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void ConsoleKitProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleKitProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->doAction((*reinterpret_cast< Power::Action(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConsoleKitProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<PowerProvider::staticMetaObject>(),
    qt_meta_stringdata_ConsoleKitProvider.data,
    qt_meta_data_ConsoleKitProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsoleKitProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleKitProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleKitProvider.stringdata0))
        return static_cast<void*>(this);
    return PowerProvider::qt_metacast(_clname);
}

int ConsoleKitProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PowerProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SystemdProvider_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemdProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemdProvider_t qt_meta_stringdata_SystemdProvider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SystemdProvider"
QT_MOC_LITERAL(1, 16, 8), // "doAction"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "Power::Action"
QT_MOC_LITERAL(4, 40, 6) // "action"

    },
    "SystemdProvider\0doAction\0\0Power::Action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemdProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void SystemdProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemdProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->doAction((*reinterpret_cast< Power::Action(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SystemdProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<PowerProvider::staticMetaObject>(),
    qt_meta_stringdata_SystemdProvider.data,
    qt_meta_data_SystemdProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemdProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemdProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemdProvider.stringdata0))
        return static_cast<void*>(this);
    return PowerProvider::qt_metacast(_clname);
}

int SystemdProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PowerProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_HalProvider_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HalProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HalProvider_t qt_meta_stringdata_HalProvider = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HalProvider"
QT_MOC_LITERAL(1, 12, 8), // "doAction"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "Power::Action"
QT_MOC_LITERAL(4, 36, 6) // "action"

    },
    "HalProvider\0doAction\0\0Power::Action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HalProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void HalProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HalProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->doAction((*reinterpret_cast< Power::Action(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HalProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<PowerProvider::staticMetaObject>(),
    qt_meta_stringdata_HalProvider.data,
    qt_meta_data_HalProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HalProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HalProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HalProvider.stringdata0))
        return static_cast<void*>(this);
    return PowerProvider::qt_metacast(_clname);
}

int HalProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PowerProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
