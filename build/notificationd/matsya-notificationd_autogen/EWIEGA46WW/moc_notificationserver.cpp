/****************************************************************************
** Meta object code from reading C++ file 'notificationserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../notificationd/notificationserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationServer_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationServer_t qt_meta_stringdata_NotificationServer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "NotificationServer"
QT_MOC_LITERAL(1, 19, 18), // "NotificationClosed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 6), // "reason"
QT_MOC_LITERAL(5, 49, 13), // "ActionInvoked"
QT_MOC_LITERAL(6, 63, 9), // "actionKey"
QT_MOC_LITERAL(7, 73, 17), // "notificationAdded"
QT_MOC_LITERAL(8, 91, 12), // "Notification"
QT_MOC_LITERAL(9, 104, 12), // "notification"
QT_MOC_LITERAL(10, 117, 20), // "notificationReplaced"
QT_MOC_LITERAL(11, 138, 10), // "replacedId"
QT_MOC_LITERAL(12, 149, 19), // "notificationRemoved"
QT_MOC_LITERAL(13, 169, 11), // "CloseReason"
QT_MOC_LITERAL(14, 181, 7), // "Expired"
QT_MOC_LITERAL(15, 189, 15), // "DismissedByUser"
QT_MOC_LITERAL(16, 205, 7) // "Revoked"

    },
    "NotificationServer\0NotificationClosed\0"
    "\0id\0reason\0ActionInvoked\0actionKey\0"
    "notificationAdded\0Notification\0"
    "notification\0notificationReplaced\0"
    "replacedId\0notificationRemoved\0"
    "CloseReason\0Expired\0DismissedByUser\0"
    "Revoked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,
      10,    2,   52,    2, 0x06 /* Public */,
      12,    2,   57,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    3,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 8,   11,    9,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 13,    3,    4,

 // enums: name, alias, flags, count, data
      13,   13, 0x2,    3,   67,

 // enum data: key, value
      14, uint(NotificationServer::CloseReason::Expired),
      15, uint(NotificationServer::CloseReason::DismissedByUser),
      16, uint(NotificationServer::CloseReason::Revoked),

       0        // eod
};

void NotificationServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NotificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->ActionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->notificationAdded((*reinterpret_cast< const Notification(*)>(_a[1]))); break;
        case 3: _t->notificationReplaced((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Notification(*)>(_a[2]))); break;
        case 4: _t->notificationRemoved((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< CloseReason(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Notification >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Notification >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationServer::*)(uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationServer::NotificationClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationServer::*)(uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationServer::ActionInvoked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotificationServer::*)(const Notification & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationServer::notificationAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NotificationServer::*)(uint , const Notification & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationServer::notificationReplaced)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NotificationServer::*)(uint , CloseReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationServer::notificationRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NotificationServer.data,
    qt_meta_data_NotificationServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int NotificationServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void NotificationServer::NotificationClosed(uint _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NotificationServer::ActionInvoked(uint _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NotificationServer::notificationAdded(const Notification & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NotificationServer::notificationReplaced(uint _t1, const Notification & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NotificationServer::notificationRemoved(uint _t1, CloseReason _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
