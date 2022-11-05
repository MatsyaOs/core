/****************************************************************************
** Meta object code from reading C++ file 'historymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../notificationd/historymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HistoryModel_t {
    QByteArrayData data[18];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryModel_t qt_meta_stringdata_HistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HistoryModel"
QT_MOC_LITERAL(1, 13, 3), // "add"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "Notification"
QT_MOC_LITERAL(4, 31, 12), // "notification"
QT_MOC_LITERAL(5, 44, 6), // "remove"
QT_MOC_LITERAL(6, 51, 5), // "index"
QT_MOC_LITERAL(7, 57, 8), // "clearAll"
QT_MOC_LITERAL(8, 66, 4), // "save"
QT_MOC_LITERAL(9, 71, 5), // "Roles"
QT_MOC_LITERAL(10, 77, 6), // "IdRole"
QT_MOC_LITERAL(11, 84, 11), // "SummaryRole"
QT_MOC_LITERAL(12, 96, 9), // "ImageRole"
QT_MOC_LITERAL(13, 106, 11), // "CreatedRole"
QT_MOC_LITERAL(14, 118, 11), // "UpdatedRole"
QT_MOC_LITERAL(15, 130, 8), // "BodyRole"
QT_MOC_LITERAL(16, 139, 12), // "IconNameRole"
QT_MOC_LITERAL(17, 152, 20) // "HasDefaultActionRole"

    },
    "HistoryModel\0add\0\0Notification\0"
    "notification\0remove\0index\0clearAll\0"
    "save\0Roles\0IdRole\0SummaryRole\0ImageRole\0"
    "CreatedRole\0UpdatedRole\0BodyRole\0"
    "IconNameRole\0HasDefaultActionRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       5,    1,   37,    2, 0x02 /* Public */,
       7,    0,   40,    2, 0x02 /* Public */,
       8,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    8,   47,

 // enum data: key, value
      10, uint(HistoryModel::IdRole),
      11, uint(HistoryModel::SummaryRole),
      12, uint(HistoryModel::ImageRole),
      13, uint(HistoryModel::CreatedRole),
      14, uint(HistoryModel::UpdatedRole),
      15, uint(HistoryModel::BodyRole),
      16, uint(HistoryModel::IconNameRole),
      17, uint(HistoryModel::HasDefaultActionRole),

       0        // eod
};

void HistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HistoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< const Notification(*)>(_a[1]))); break;
        case 1: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clearAll(); break;
        case 3: _t->save(); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HistoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_HistoryModel.data,
    qt_meta_data_HistoryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int HistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
