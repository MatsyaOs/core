/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gmenuproxy/menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[18];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Menu"
QT_MOC_LITERAL(1, 5, 12), // "menuAppeared"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "menuDisappeared"
QT_MOC_LITERAL(4, 35, 10), // "subscribed"
QT_MOC_LITERAL(5, 46, 2), // "id"
QT_MOC_LITERAL(6, 49, 17), // "failedToSubscribe"
QT_MOC_LITERAL(7, 67, 12), // "itemsChanged"
QT_MOC_LITERAL(8, 80, 13), // "QVector<uint>"
QT_MOC_LITERAL(9, 94, 7), // "itemIds"
QT_MOC_LITERAL(10, 102, 12), // "menusChanged"
QT_MOC_LITERAL(11, 115, 7), // "menuIds"
QT_MOC_LITERAL(12, 123, 14), // "actionsChanged"
QT_MOC_LITERAL(13, 138, 12), // "dirtyActions"
QT_MOC_LITERAL(14, 151, 6), // "prefix"
QT_MOC_LITERAL(15, 158, 13), // "onMenuChanged"
QT_MOC_LITERAL(16, 172, 15), // "GMenuChangeList"
QT_MOC_LITERAL(17, 188, 7) // "changes"

    },
    "Menu\0menuAppeared\0\0menuDisappeared\0"
    "subscribed\0id\0failedToSubscribe\0"
    "itemsChanged\0QVector<uint>\0itemIds\0"
    "menusChanged\0menuIds\0actionsChanged\0"
    "dirtyActions\0prefix\0onMenuChanged\0"
    "GMenuChangeList\0changes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   68,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->menuAppeared(); break;
        case 1: _t->menuDisappeared(); break;
        case 2: _t->subscribed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->failedToSubscribe((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->itemsChanged((*reinterpret_cast< const QVector<uint>(*)>(_a[1]))); break;
        case 5: _t->menusChanged((*reinterpret_cast< const QVector<uint>(*)>(_a[1]))); break;
        case 6: _t->actionsChanged((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->onMenuChanged((*reinterpret_cast< const GMenuChangeList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<uint> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<uint> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GMenuChangeList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::menuAppeared)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::menuDisappeared)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Menu::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::subscribed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Menu::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::failedToSubscribe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Menu::*)(const QVector<uint> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::itemsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Menu::*)(const QVector<uint> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::menusChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Menu.data,
    qt_meta_data_Menu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Menu::menuAppeared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Menu::menuDisappeared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Menu::subscribed(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Menu::failedToSubscribe(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Menu::itemsChanged(const QVector<uint> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Menu::menusChanged(const QVector<uint> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
