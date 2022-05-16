/****************************************************************************
** Meta object code from reading C++ file 'actions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gmenuproxy/actions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Actions_t {
    QByteArrayData data[13];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Actions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Actions_t qt_meta_stringdata_Actions = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Actions"
QT_MOC_LITERAL(1, 8, 6), // "loaded"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "failedToLoad"
QT_MOC_LITERAL(4, 29, 14), // "actionsChanged"
QT_MOC_LITERAL(5, 44, 12), // "dirtyActions"
QT_MOC_LITERAL(6, 57, 16), // "onActionsChanged"
QT_MOC_LITERAL(7, 74, 7), // "removed"
QT_MOC_LITERAL(8, 82, 13), // "StringBoolMap"
QT_MOC_LITERAL(9, 96, 14), // "enabledChanges"
QT_MOC_LITERAL(10, 111, 12), // "stateChanges"
QT_MOC_LITERAL(11, 124, 14), // "GMenuActionMap"
QT_MOC_LITERAL(12, 139, 5) // "added"

    },
    "Actions\0loaded\0\0failedToLoad\0"
    "actionsChanged\0dirtyActions\0"
    "onActionsChanged\0removed\0StringBoolMap\0"
    "enabledChanges\0stateChanges\0GMenuActionMap\0"
    "added"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Actions[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 8, QMetaType::QVariantMap, 0x80000000 | 11,    7,    9,   10,   12,

       0        // eod
};

void Actions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Actions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded(); break;
        case 1: _t->failedToLoad(); break;
        case 2: _t->actionsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->onActionsChanged((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const StringBoolMap(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const GMenuActionMap(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GMenuActionMap >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StringBoolMap >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Actions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Actions::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Actions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Actions::failedToLoad)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Actions::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Actions::actionsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Actions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Actions.data,
    qt_meta_data_Actions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Actions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Actions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Actions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Actions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Actions::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Actions::failedToLoad()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Actions::actionsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
