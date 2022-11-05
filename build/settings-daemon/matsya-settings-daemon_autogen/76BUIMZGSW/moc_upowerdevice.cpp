/****************************************************************************
** Meta object code from reading C++ file 'upowerdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/battery/upowerdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upowerdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UPowerDevice_t {
    QByteArrayData data[25];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UPowerDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UPowerDevice_t qt_meta_stringdata_UPowerDevice = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UPowerDevice"
QT_MOC_LITERAL(1, 13, 7), // "changed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(4, 42, 9), // "ifaceName"
QT_MOC_LITERAL(5, 52, 12), // "changedProps"
QT_MOC_LITERAL(6, 65, 16), // "invalidatedProps"
QT_MOC_LITERAL(7, 82, 14), // "login1Resuming"
QT_MOC_LITERAL(8, 97, 6), // "active"
QT_MOC_LITERAL(9, 104, 11), // "slotChanged"
QT_MOC_LITERAL(10, 116, 4), // "Type"
QT_MOC_LITERAL(11, 121, 7), // "Unknown"
QT_MOC_LITERAL(12, 129, 16), // "GenericInterface"
QT_MOC_LITERAL(13, 146, 9), // "Processor"
QT_MOC_LITERAL(14, 156, 5), // "Block"
QT_MOC_LITERAL(15, 162, 13), // "StorageAccess"
QT_MOC_LITERAL(16, 176, 12), // "StorageDrive"
QT_MOC_LITERAL(17, 189, 12), // "OpticalDrive"
QT_MOC_LITERAL(18, 202, 13), // "StorageVolume"
QT_MOC_LITERAL(19, 216, 11), // "OpticalDisc"
QT_MOC_LITERAL(20, 228, 6), // "Camera"
QT_MOC_LITERAL(21, 235, 19), // "PortableMediaPlayer"
QT_MOC_LITERAL(22, 255, 7), // "Battery"
QT_MOC_LITERAL(23, 263, 12), // "NetworkShare"
QT_MOC_LITERAL(24, 276, 4) // "Last"

    },
    "UPowerDevice\0changed\0\0onPropertiesChanged\0"
    "ifaceName\0changedProps\0invalidatedProps\0"
    "login1Resuming\0active\0slotChanged\0"
    "Type\0Unknown\0GenericInterface\0Processor\0"
    "Block\0StorageAccess\0StorageDrive\0"
    "OpticalDrive\0StorageVolume\0OpticalDisc\0"
    "Camera\0PortableMediaPlayer\0Battery\0"
    "NetworkShare\0Last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UPowerDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   35,    2, 0x08 /* Private */,
       7,    1,   42,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,   14,   51,

 // enum data: key, value
      11, uint(UPowerDevice::Unknown),
      12, uint(UPowerDevice::GenericInterface),
      13, uint(UPowerDevice::Processor),
      14, uint(UPowerDevice::Block),
      15, uint(UPowerDevice::StorageAccess),
      16, uint(UPowerDevice::StorageDrive),
      17, uint(UPowerDevice::OpticalDrive),
      18, uint(UPowerDevice::StorageVolume),
      19, uint(UPowerDevice::OpticalDisc),
      20, uint(UPowerDevice::Camera),
      21, uint(UPowerDevice::PortableMediaPlayer),
      22, uint(UPowerDevice::Battery),
      23, uint(UPowerDevice::NetworkShare),
      24, uint(UPowerDevice::Last),

       0        // eod
};

void UPowerDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UPowerDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 2: _t->login1Resuming((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UPowerDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UPowerDevice::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UPowerDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UPowerDevice.data,
    qt_meta_data_UPowerDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UPowerDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UPowerDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UPowerDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UPowerDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UPowerDevice::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
