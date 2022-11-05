/****************************************************************************
** Meta object code from reading C++ file 'battery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/battery/battery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Battery_t {
    QByteArrayData data[67];
    char stringdata0[948];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Battery_t qt_meta_stringdata_Battery = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Battery"
QT_MOC_LITERAL(1, 8, 19), // "presentStateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "newState"
QT_MOC_LITERAL(4, 38, 20), // "chargePercentChanged"
QT_MOC_LITERAL(5, 59, 5), // "value"
QT_MOC_LITERAL(6, 65, 15), // "capacityChanged"
QT_MOC_LITERAL(7, 81, 23), // "powerSupplyStateChanged"
QT_MOC_LITERAL(8, 105, 18), // "chargeStateChanged"
QT_MOC_LITERAL(9, 124, 18), // "timeToEmptyChanged"
QT_MOC_LITERAL(10, 143, 4), // "time"
QT_MOC_LITERAL(11, 148, 17), // "timeToFullChanged"
QT_MOC_LITERAL(12, 166, 13), // "energyChanged"
QT_MOC_LITERAL(13, 180, 6), // "energy"
QT_MOC_LITERAL(14, 187, 17), // "energyFullChanged"
QT_MOC_LITERAL(15, 205, 10), // "energyFull"
QT_MOC_LITERAL(16, 216, 23), // "energyFullDesignChanged"
QT_MOC_LITERAL(17, 240, 16), // "energyFullDesign"
QT_MOC_LITERAL(18, 257, 17), // "energyRateChanged"
QT_MOC_LITERAL(19, 275, 10), // "energyRate"
QT_MOC_LITERAL(20, 286, 14), // "voltageChanged"
QT_MOC_LITERAL(21, 301, 7), // "voltage"
QT_MOC_LITERAL(22, 309, 18), // "temperatureChanged"
QT_MOC_LITERAL(23, 328, 11), // "temperature"
QT_MOC_LITERAL(24, 340, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(25, 361, 25), // "lastChargedPercentChanged"
QT_MOC_LITERAL(26, 387, 22), // "lastChargedSecsChanged"
QT_MOC_LITERAL(27, 410, 11), // "slotChanged"
QT_MOC_LITERAL(28, 422, 9), // "isPresent"
QT_MOC_LITERAL(29, 432, 4), // "type"
QT_MOC_LITERAL(30, 437, 13), // "chargePercent"
QT_MOC_LITERAL(31, 451, 8), // "capacity"
QT_MOC_LITERAL(32, 460, 14), // "isRechargeable"
QT_MOC_LITERAL(33, 475, 13), // "isPowerSupply"
QT_MOC_LITERAL(34, 489, 11), // "chargeState"
QT_MOC_LITERAL(35, 501, 13), // "remainingTime"
QT_MOC_LITERAL(36, 515, 12), // "statusString"
QT_MOC_LITERAL(37, 528, 18), // "lastChargedPercent"
QT_MOC_LITERAL(38, 547, 15), // "lastChargedSecs"
QT_MOC_LITERAL(39, 563, 15), // "lastChargedTime"
QT_MOC_LITERAL(40, 579, 3), // "udi"
QT_MOC_LITERAL(41, 583, 11), // "BatteryType"
QT_MOC_LITERAL(42, 595, 14), // "UnknownBattery"
QT_MOC_LITERAL(43, 610, 10), // "PdaBattery"
QT_MOC_LITERAL(44, 621, 10), // "UpsBattery"
QT_MOC_LITERAL(45, 632, 14), // "PrimaryBattery"
QT_MOC_LITERAL(46, 647, 12), // "MouseBattery"
QT_MOC_LITERAL(47, 660, 15), // "KeyboardBattery"
QT_MOC_LITERAL(48, 676, 20), // "KeyboardMouseBattery"
QT_MOC_LITERAL(49, 697, 13), // "CameraBattery"
QT_MOC_LITERAL(50, 711, 12), // "PhoneBattery"
QT_MOC_LITERAL(51, 724, 14), // "MonitorBattery"
QT_MOC_LITERAL(52, 739, 18), // "GamingInputBattery"
QT_MOC_LITERAL(53, 758, 16), // "BluetoothBattery"
QT_MOC_LITERAL(54, 775, 11), // "ChargeState"
QT_MOC_LITERAL(55, 787, 8), // "NoCharge"
QT_MOC_LITERAL(56, 796, 8), // "Charging"
QT_MOC_LITERAL(57, 805, 11), // "Discharging"
QT_MOC_LITERAL(58, 817, 12), // "FullyCharged"
QT_MOC_LITERAL(59, 830, 10), // "Technology"
QT_MOC_LITERAL(60, 841, 17), // "UnknownTechnology"
QT_MOC_LITERAL(61, 859, 10), // "LithiumIon"
QT_MOC_LITERAL(62, 870, 14), // "LithiumPolymer"
QT_MOC_LITERAL(63, 885, 20), // "LithiumIronPhosphate"
QT_MOC_LITERAL(64, 906, 8), // "LeadAcid"
QT_MOC_LITERAL(65, 915, 13), // "NickelCadmium"
QT_MOC_LITERAL(66, 929, 18) // "NickelMetalHydride"

    },
    "Battery\0presentStateChanged\0\0newState\0"
    "chargePercentChanged\0value\0capacityChanged\0"
    "powerSupplyStateChanged\0chargeStateChanged\0"
    "timeToEmptyChanged\0time\0timeToFullChanged\0"
    "energyChanged\0energy\0energyFullChanged\0"
    "energyFull\0energyFullDesignChanged\0"
    "energyFullDesign\0energyRateChanged\0"
    "energyRate\0voltageChanged\0voltage\0"
    "temperatureChanged\0temperature\0"
    "remainingTimeChanged\0lastChargedPercentChanged\0"
    "lastChargedSecsChanged\0slotChanged\0"
    "isPresent\0type\0chargePercent\0capacity\0"
    "isRechargeable\0isPowerSupply\0chargeState\0"
    "remainingTime\0statusString\0"
    "lastChargedPercent\0lastChargedSecs\0"
    "lastChargedTime\0udi\0BatteryType\0"
    "UnknownBattery\0PdaBattery\0UpsBattery\0"
    "PrimaryBattery\0MouseBattery\0KeyboardBattery\0"
    "KeyboardMouseBattery\0CameraBattery\0"
    "PhoneBattery\0MonitorBattery\0"
    "GamingInputBattery\0BluetoothBattery\0"
    "ChargeState\0NoCharge\0Charging\0Discharging\0"
    "FullyCharged\0Technology\0UnknownTechnology\0"
    "LithiumIon\0LithiumPolymer\0"
    "LithiumIronPhosphate\0LeadAcid\0"
    "NickelCadmium\0NickelMetalHydride"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Battery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      14,  144, // properties
       3,  200, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       7,    1,  108,    2, 0x06 /* Public */,
       8,    1,  111,    2, 0x06 /* Public */,
       9,    1,  114,    2, 0x06 /* Public */,
      11,    1,  117,    2, 0x06 /* Public */,
      12,    1,  120,    2, 0x06 /* Public */,
      14,    1,  123,    2, 0x06 /* Public */,
      16,    1,  126,    2, 0x06 /* Public */,
      18,    1,  129,    2, 0x06 /* Public */,
      20,    1,  132,    2, 0x06 /* Public */,
      22,    1,  135,    2, 0x06 /* Public */,
      24,    1,  138,    2, 0x06 /* Public */,
      25,    0,  141,    2, 0x06 /* Public */,
      26,    0,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      28, QMetaType::Int, 0x00095001,
      29, QMetaType::Int, 0x00095001,
      30, QMetaType::Int, 0x00495001,
      31, QMetaType::Int, 0x00495001,
      21, QMetaType::Int, 0x00495001,
      32, QMetaType::Int, 0x00095001,
      33, QMetaType::Int, 0x00095001,
      34, QMetaType::Int, 0x00495001,
      35, QMetaType::LongLong, 0x00495001,
      36, QMetaType::QString, 0x00495001,
      37, QMetaType::Int, 0x00495001,
      38, QMetaType::ULongLong, 0x00495001,
      39, QMetaType::QString, 0x00495001,
      40, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
      11,
       0,
       0,
       4,
      13,
      13,
      14,
      15,
      15,
       0,

 // enums: name, alias, flags, count, data
      41,   41, 0x0,   12,  215,
      54,   54, 0x0,    4,  239,
      59,   59, 0x0,    7,  247,

 // enum data: key, value
      42, uint(Battery::UnknownBattery),
      43, uint(Battery::PdaBattery),
      44, uint(Battery::UpsBattery),
      45, uint(Battery::PrimaryBattery),
      46, uint(Battery::MouseBattery),
      47, uint(Battery::KeyboardBattery),
      48, uint(Battery::KeyboardMouseBattery),
      49, uint(Battery::CameraBattery),
      50, uint(Battery::PhoneBattery),
      51, uint(Battery::MonitorBattery),
      52, uint(Battery::GamingInputBattery),
      53, uint(Battery::BluetoothBattery),
      55, uint(Battery::NoCharge),
      56, uint(Battery::Charging),
      57, uint(Battery::Discharging),
      58, uint(Battery::FullyCharged),
      60, uint(Battery::UnknownTechnology),
      61, uint(Battery::LithiumIon),
      62, uint(Battery::LithiumPolymer),
      63, uint(Battery::LithiumIronPhosphate),
      64, uint(Battery::LeadAcid),
      65, uint(Battery::NickelCadmium),
      66, uint(Battery::NickelMetalHydride),

       0        // eod
};

void Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->presentStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->capacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->powerSupplyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timeToEmptyChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 6: _t->timeToFullChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 7: _t->energyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->energyFullChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->energyFullDesignChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->energyRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->voltageChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->temperatureChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->remainingTimeChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 14: _t->lastChargedPercentChanged(); break;
        case 15: _t->lastChargedSecsChanged(); break;
        case 16: _t->slotChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Battery::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::presentStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargePercentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::capacityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Battery::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::powerSupplyStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargeStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToEmptyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToFullChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullDesignChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyRateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::voltageChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::temperatureChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::remainingTimeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::lastChargedPercentChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::lastChargedSecsChanged)) {
                *result = 15;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Battery *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->isPresent(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->chargePercent(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->capacity(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->voltage(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->isRechargeable(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->isPowerSupply(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->chargeState(); break;
        case 8: *reinterpret_cast< qlonglong*>(_v) = _t->remainingTime(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->statusString(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->lastChargedPercent(); break;
        case 11: *reinterpret_cast< quint64*>(_v) = _t->lastChargedSecs(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->lastChargedTime(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->udi(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Battery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Battery.data,
    qt_meta_data_Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Battery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Battery::presentStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Battery::chargePercentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Battery::capacityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Battery::powerSupplyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Battery::chargeStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Battery::timeToEmptyChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Battery::timeToFullChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Battery::energyChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Battery::energyFullChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Battery::energyFullDesignChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Battery::energyRateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Battery::voltageChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Battery::temperatureChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Battery::remainingTimeChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Battery::lastChargedPercentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Battery::lastChargedSecsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
