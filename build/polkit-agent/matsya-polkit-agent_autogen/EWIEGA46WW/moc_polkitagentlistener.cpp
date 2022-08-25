/****************************************************************************
** Meta object code from reading C++ file 'polkitagentlistener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../polkit-agent/polkitagentlistener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polkitagentlistener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolKitAgentListener_t {
    QByteArrayData data[21];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolKitAgentListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolKitAgentListener_t qt_meta_stringdata_PolKitAgentListener = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PolKitAgentListener"
QT_MOC_LITERAL(1, 20, 22), // "initiateAuthentication"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "actionId"
QT_MOC_LITERAL(4, 53, 7), // "message"
QT_MOC_LITERAL(5, 61, 8), // "iconName"
QT_MOC_LITERAL(6, 70, 18), // "PolkitQt1::Details"
QT_MOC_LITERAL(7, 89, 7), // "details"
QT_MOC_LITERAL(8, 97, 6), // "cookie"
QT_MOC_LITERAL(9, 104, 25), // "PolkitQt1::Identity::List"
QT_MOC_LITERAL(10, 130, 10), // "identities"
QT_MOC_LITERAL(11, 141, 30), // "PolkitQt1::Agent::AsyncResult*"
QT_MOC_LITERAL(12, 172, 6), // "result"
QT_MOC_LITERAL(13, 179, 28), // "initiateAuthenticationFinish"
QT_MOC_LITERAL(14, 208, 20), // "cancelAuthentication"
QT_MOC_LITERAL(15, 229, 7), // "request"
QT_MOC_LITERAL(16, 237, 4), // "echo"
QT_MOC_LITERAL(17, 242, 9), // "completed"
QT_MOC_LITERAL(18, 252, 19), // "gainedAuthorization"
QT_MOC_LITERAL(19, 272, 16), // "onDialogAccepted"
QT_MOC_LITERAL(20, 289, 16) // "onDialogCanceled"

    },
    "PolKitAgentListener\0initiateAuthentication\0"
    "\0actionId\0message\0iconName\0"
    "PolkitQt1::Details\0details\0cookie\0"
    "PolkitQt1::Identity::List\0identities\0"
    "PolkitQt1::Agent::AsyncResult*\0result\0"
    "initiateAuthenticationFinish\0"
    "cancelAuthentication\0request\0echo\0"
    "completed\0gainedAuthorization\0"
    "onDialogAccepted\0onDialogCanceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolKitAgentListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   49,    2, 0x0a /* Public */,
      13,    0,   64,    2, 0x0a /* Public */,
      14,    0,   65,    2, 0x0a /* Public */,
      15,    2,   66,    2, 0x0a /* Public */,
      17,    1,   71,    2, 0x0a /* Public */,
      19,    0,   74,    2, 0x08 /* Private */,
      20,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 11,    3,    4,    5,    7,    8,   10,   12,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PolKitAgentListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolKitAgentListener *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initiateAuthentication((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const PolkitQt1::Details(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const PolkitQt1::Identity::List(*)>(_a[6])),(*reinterpret_cast< PolkitQt1::Agent::AsyncResult*(*)>(_a[7]))); break;
        case 1: { bool _r = _t->initiateAuthenticationFinish();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->cancelAuthentication(); break;
        case 3: _t->request((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->completed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onDialogAccepted(); break;
        case 6: _t->onDialogCanceled(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolKitAgentListener::staticMetaObject = { {
    QMetaObject::SuperData::link<PolkitQt1::Agent::Listener::staticMetaObject>(),
    qt_meta_stringdata_PolKitAgentListener.data,
    qt_meta_data_PolKitAgentListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolKitAgentListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolKitAgentListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolKitAgentListener.stringdata0))
        return static_cast<void*>(this);
    return PolkitQt1::Agent::Listener::qt_metacast(_clname);
}

int PolKitAgentListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolkitQt1::Agent::Listener::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
