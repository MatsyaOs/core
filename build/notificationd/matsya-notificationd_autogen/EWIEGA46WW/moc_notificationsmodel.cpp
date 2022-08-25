/****************************************************************************
** Meta object code from reading C++ file 'notificationsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../notificationd/notificationsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationsModel_t {
    QByteArrayData data[24];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationsModel_t qt_meta_stringdata_NotificationsModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "NotificationsModel"
QT_MOC_LITERAL(1, 19, 19), // "onNotificationAdded"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "Notification"
QT_MOC_LITERAL(4, 53, 12), // "notification"
QT_MOC_LITERAL(5, 66, 22), // "onNotificationReplaced"
QT_MOC_LITERAL(6, 89, 10), // "replacedId"
QT_MOC_LITERAL(7, 100, 21), // "onNotificationRemoved"
QT_MOC_LITERAL(8, 122, 14), // "notificationId"
QT_MOC_LITERAL(9, 137, 31), // "NotificationServer::CloseReason"
QT_MOC_LITERAL(10, 169, 6), // "reason"
QT_MOC_LITERAL(11, 176, 7), // "expired"
QT_MOC_LITERAL(12, 184, 2), // "id"
QT_MOC_LITERAL(13, 187, 5), // "close"
QT_MOC_LITERAL(14, 193, 19), // "invokeDefaultAction"
QT_MOC_LITERAL(15, 213, 5), // "Roles"
QT_MOC_LITERAL(16, 219, 6), // "IdRole"
QT_MOC_LITERAL(17, 226, 11), // "SummaryRole"
QT_MOC_LITERAL(18, 238, 9), // "ImageRole"
QT_MOC_LITERAL(19, 248, 11), // "CreatedRole"
QT_MOC_LITERAL(20, 260, 11), // "UpdatedRole"
QT_MOC_LITERAL(21, 272, 8), // "BodyRole"
QT_MOC_LITERAL(22, 281, 12), // "IconNameRole"
QT_MOC_LITERAL(23, 294, 20) // "HasDefaultActionRole"

    },
    "NotificationsModel\0onNotificationAdded\0"
    "\0Notification\0notification\0"
    "onNotificationReplaced\0replacedId\0"
    "onNotificationRemoved\0notificationId\0"
    "NotificationServer::CloseReason\0reason\0"
    "expired\0id\0close\0invokeDefaultAction\0"
    "Roles\0IdRole\0SummaryRole\0ImageRole\0"
    "CreatedRole\0UpdatedRole\0BodyRole\0"
    "IconNameRole\0HasDefaultActionRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       7,    2,   52,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   57,    2, 0x02 /* Public */,
      13,    1,   60,    2, 0x02 /* Public */,
      14,    1,   63,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 9,    8,   10,

 // methods: parameters
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt,   12,

 // enums: name, alias, flags, count, data
      15,   15, 0x0,    8,   71,

 // enum data: key, value
      16, uint(NotificationsModel::IdRole),
      17, uint(NotificationsModel::SummaryRole),
      18, uint(NotificationsModel::ImageRole),
      19, uint(NotificationsModel::CreatedRole),
      20, uint(NotificationsModel::UpdatedRole),
      21, uint(NotificationsModel::BodyRole),
      22, uint(NotificationsModel::IconNameRole),
      23, uint(NotificationsModel::HasDefaultActionRole),

       0        // eod
};

void NotificationsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onNotificationAdded((*reinterpret_cast< const Notification(*)>(_a[1]))); break;
        case 1: _t->onNotificationReplaced((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Notification(*)>(_a[2]))); break;
        case 2: _t->onNotificationRemoved((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< NotificationServer::CloseReason(*)>(_a[2]))); break;
        case 3: _t->expired((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->close((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->invokeDefaultAction((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Notification >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Notification >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_NotificationsModel.data,
    qt_meta_data_NotificationsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int NotificationsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
