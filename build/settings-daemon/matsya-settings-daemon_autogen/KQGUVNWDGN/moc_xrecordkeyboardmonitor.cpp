/****************************************************************************
** Meta object code from reading C++ file 'xrecordkeyboardmonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/touchpad/x11/xrecordkeyboardmonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xrecordkeyboardmonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XRecordKeyboardMonitor_t {
    QByteArrayData data[5];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XRecordKeyboardMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XRecordKeyboardMonitor_t qt_meta_stringdata_XRecordKeyboardMonitor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "XRecordKeyboardMonitor"
QT_MOC_LITERAL(1, 23, 23), // "keyboardActivityStarted"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 24), // "keyboardActivityFinished"
QT_MOC_LITERAL(4, 73, 16) // "processNextReply"

    },
    "XRecordKeyboardMonitor\0keyboardActivityStarted\0"
    "\0keyboardActivityFinished\0processNextReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XRecordKeyboardMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void XRecordKeyboardMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XRecordKeyboardMonitor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->keyboardActivityStarted(); break;
        case 1: _t->keyboardActivityFinished(); break;
        case 2: _t->processNextReply(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XRecordKeyboardMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XRecordKeyboardMonitor::keyboardActivityStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XRecordKeyboardMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XRecordKeyboardMonitor::keyboardActivityFinished)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject XRecordKeyboardMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XRecordKeyboardMonitor.data,
    qt_meta_data_XRecordKeyboardMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XRecordKeyboardMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XRecordKeyboardMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XRecordKeyboardMonitor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XRecordKeyboardMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void XRecordKeyboardMonitor::keyboardActivityStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XRecordKeyboardMonitor::keyboardActivityFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
