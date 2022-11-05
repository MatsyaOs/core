/****************************************************************************
** Meta object code from reading C++ file 'libinputcommon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../settings-daemon/touchpad/libinputcommon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libinputcommon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibinputCommon_t {
    QByteArrayData data[74];
    char stringdata0[1696];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibinputCommon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibinputCommon_t qt_meta_stringdata_LibinputCommon = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LibinputCommon"
QT_MOC_LITERAL(1, 15, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "tapToClickChanged"
QT_MOC_LITERAL(4, 49, 22), // "lmrTapButtonMapChanged"
QT_MOC_LITERAL(5, 72, 17), // "tapAndDragChanged"
QT_MOC_LITERAL(6, 90, 18), // "tapDragLockChanged"
QT_MOC_LITERAL(7, 109, 17), // "leftHandedChanged"
QT_MOC_LITERAL(8, 127, 25), // "disableWhileTypingChanged"
QT_MOC_LITERAL(9, 153, 22), // "middleEmulationChanged"
QT_MOC_LITERAL(10, 176, 26), // "pointerAccelerationChanged"
QT_MOC_LITERAL(11, 203, 33), // "pointerAccelerationProfileCha..."
QT_MOC_LITERAL(12, 237, 20), // "naturalScrollChanged"
QT_MOC_LITERAL(13, 258, 26), // "horizontalScrollingChanged"
QT_MOC_LITERAL(14, 285, 19), // "scrollMethodChanged"
QT_MOC_LITERAL(15, 305, 19), // "scrollButtonChanged"
QT_MOC_LITERAL(16, 325, 18), // "clickMethodChanged"
QT_MOC_LITERAL(17, 344, 4), // "name"
QT_MOC_LITERAL(18, 349, 21), // "supportsDisableEvents"
QT_MOC_LITERAL(19, 371, 7), // "enabled"
QT_MOC_LITERAL(20, 379, 16), // "supportedButtons"
QT_MOC_LITERAL(21, 396, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(22, 413, 18), // "supportsLeftHanded"
QT_MOC_LITERAL(23, 432, 26), // "leftHandedEnabledByDefault"
QT_MOC_LITERAL(24, 459, 10), // "leftHanded"
QT_MOC_LITERAL(25, 470, 36), // "supportsDisableEventsOnExtern..."
QT_MOC_LITERAL(26, 507, 26), // "supportsDisableWhileTyping"
QT_MOC_LITERAL(27, 534, 34), // "disableWhileTypingEnabledByDe..."
QT_MOC_LITERAL(28, 569, 18), // "disableWhileTyping"
QT_MOC_LITERAL(29, 588, 23), // "supportsMiddleEmulation"
QT_MOC_LITERAL(30, 612, 31), // "middleEmulationEnabledByDefault"
QT_MOC_LITERAL(31, 644, 15), // "middleEmulation"
QT_MOC_LITERAL(32, 660, 27), // "supportsPointerAcceleration"
QT_MOC_LITERAL(33, 688, 19), // "pointerAcceleration"
QT_MOC_LITERAL(34, 708, 38), // "supportsPointerAccelerationPr..."
QT_MOC_LITERAL(35, 747, 37), // "defaultPointerAccelerationPro..."
QT_MOC_LITERAL(36, 785, 30), // "pointerAccelerationProfileFlat"
QT_MOC_LITERAL(37, 816, 42), // "supportsPointerAccelerationPr..."
QT_MOC_LITERAL(38, 859, 41), // "defaultPointerAccelerationPro..."
QT_MOC_LITERAL(39, 901, 34), // "pointerAccelerationProfileAda..."
QT_MOC_LITERAL(40, 936, 14), // "tapFingerCount"
QT_MOC_LITERAL(41, 951, 26), // "tapToClickEnabledByDefault"
QT_MOC_LITERAL(42, 978, 10), // "tapToClick"
QT_MOC_LITERAL(43, 989, 23), // "supportsLmrTapButtonMap"
QT_MOC_LITERAL(44, 1013, 31), // "lmrTapButtonMapEnabledByDefault"
QT_MOC_LITERAL(45, 1045, 15), // "lmrTapButtonMap"
QT_MOC_LITERAL(46, 1061, 26), // "tapAndDragEnabledByDefault"
QT_MOC_LITERAL(47, 1088, 10), // "tapAndDrag"
QT_MOC_LITERAL(48, 1099, 27), // "tapDragLockEnabledByDefault"
QT_MOC_LITERAL(49, 1127, 11), // "tapDragLock"
QT_MOC_LITERAL(50, 1139, 21), // "supportsNaturalScroll"
QT_MOC_LITERAL(51, 1161, 29), // "naturalScrollEnabledByDefault"
QT_MOC_LITERAL(52, 1191, 13), // "naturalScroll"
QT_MOC_LITERAL(53, 1205, 27), // "supportsHorizontalScrolling"
QT_MOC_LITERAL(54, 1233, 28), // "horizontalScrollingByDefault"
QT_MOC_LITERAL(55, 1262, 19), // "horizontalScrolling"
QT_MOC_LITERAL(56, 1282, 23), // "supportsScrollTwoFinger"
QT_MOC_LITERAL(57, 1306, 31), // "scrollTwoFingerEnabledByDefault"
QT_MOC_LITERAL(58, 1338, 15), // "scrollTwoFinger"
QT_MOC_LITERAL(59, 1354, 18), // "supportsScrollEdge"
QT_MOC_LITERAL(60, 1373, 26), // "scrollEdgeEnabledByDefault"
QT_MOC_LITERAL(61, 1400, 10), // "scrollEdge"
QT_MOC_LITERAL(62, 1411, 26), // "supportsScrollOnButtonDown"
QT_MOC_LITERAL(63, 1438, 34), // "scrollOnButtonDownEnabledByDe..."
QT_MOC_LITERAL(64, 1473, 18), // "scrollOnButtonDown"
QT_MOC_LITERAL(65, 1492, 19), // "defaultScrollButton"
QT_MOC_LITERAL(66, 1512, 12), // "scrollButton"
QT_MOC_LITERAL(67, 1525, 24), // "supportsClickMethodAreas"
QT_MOC_LITERAL(68, 1550, 23), // "defaultClickMethodAreas"
QT_MOC_LITERAL(69, 1574, 16), // "clickMethodAreas"
QT_MOC_LITERAL(70, 1591, 30), // "supportsClickMethodClickfinger"
QT_MOC_LITERAL(71, 1622, 29), // "defaultClickMethodClickfinger"
QT_MOC_LITERAL(72, 1652, 22), // "clickMethodClickfinger"
QT_MOC_LITERAL(73, 1675, 20) // "supportsScrollFactor"

    },
    "LibinputCommon\0enabledChanged\0\0"
    "tapToClickChanged\0lmrTapButtonMapChanged\0"
    "tapAndDragChanged\0tapDragLockChanged\0"
    "leftHandedChanged\0disableWhileTypingChanged\0"
    "middleEmulationChanged\0"
    "pointerAccelerationChanged\0"
    "pointerAccelerationProfileChanged\0"
    "naturalScrollChanged\0horizontalScrollingChanged\0"
    "scrollMethodChanged\0scrollButtonChanged\0"
    "clickMethodChanged\0name\0supportsDisableEvents\0"
    "enabled\0supportedButtons\0Qt::MouseButtons\0"
    "supportsLeftHanded\0leftHandedEnabledByDefault\0"
    "leftHanded\0supportsDisableEventsOnExternalMouse\0"
    "supportsDisableWhileTyping\0"
    "disableWhileTypingEnabledByDefault\0"
    "disableWhileTyping\0supportsMiddleEmulation\0"
    "middleEmulationEnabledByDefault\0"
    "middleEmulation\0supportsPointerAcceleration\0"
    "pointerAcceleration\0"
    "supportsPointerAccelerationProfileFlat\0"
    "defaultPointerAccelerationProfileFlat\0"
    "pointerAccelerationProfileFlat\0"
    "supportsPointerAccelerationProfileAdaptive\0"
    "defaultPointerAccelerationProfileAdaptive\0"
    "pointerAccelerationProfileAdaptive\0"
    "tapFingerCount\0tapToClickEnabledByDefault\0"
    "tapToClick\0supportsLmrTapButtonMap\0"
    "lmrTapButtonMapEnabledByDefault\0"
    "lmrTapButtonMap\0tapAndDragEnabledByDefault\0"
    "tapAndDrag\0tapDragLockEnabledByDefault\0"
    "tapDragLock\0supportsNaturalScroll\0"
    "naturalScrollEnabledByDefault\0"
    "naturalScroll\0supportsHorizontalScrolling\0"
    "horizontalScrollingByDefault\0"
    "horizontalScrolling\0supportsScrollTwoFinger\0"
    "scrollTwoFingerEnabledByDefault\0"
    "scrollTwoFinger\0supportsScrollEdge\0"
    "scrollEdgeEnabledByDefault\0scrollEdge\0"
    "supportsScrollOnButtonDown\0"
    "scrollOnButtonDownEnabledByDefault\0"
    "scrollOnButtonDown\0defaultScrollButton\0"
    "scrollButton\0supportsClickMethodAreas\0"
    "defaultClickMethodAreas\0clickMethodAreas\0"
    "supportsClickMethodClickfinger\0"
    "defaultClickMethodClickfinger\0"
    "clickMethodClickfinger\0supportsScrollFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibinputCommon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      56,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,
      10,    0,   97,    2, 0x06 /* Public */,
      11,    0,   98,    2, 0x06 /* Public */,
      12,    0,   99,    2, 0x06 /* Public */,
      13,    0,  100,    2, 0x06 /* Public */,
      14,    0,  101,    2, 0x06 /* Public */,
      15,    0,  102,    2, 0x06 /* Public */,
      16,    0,  103,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::Bool, 0x00095401,
      19, QMetaType::Bool, 0x00495103,
      20, 0x80000000 | 21, 0x00095409,
      22, QMetaType::Bool, 0x00095401,
      23, QMetaType::Bool, 0x00095401,
      24, QMetaType::Bool, 0x00495103,
      25, QMetaType::Bool, 0x00095401,
      26, QMetaType::Bool, 0x00095401,
      27, QMetaType::Bool, 0x00095401,
      28, QMetaType::Bool, 0x00495103,
      29, QMetaType::Bool, 0x00095401,
      30, QMetaType::Bool, 0x00095401,
      31, QMetaType::Bool, 0x00495103,
      32, QMetaType::Bool, 0x00095401,
      33, QMetaType::QReal, 0x00495103,
      34, QMetaType::Bool, 0x00095401,
      35, QMetaType::Bool, 0x00095401,
      36, QMetaType::Bool, 0x00495103,
      37, QMetaType::Bool, 0x00095401,
      38, QMetaType::Bool, 0x00095401,
      39, QMetaType::Bool, 0x00495103,
      40, QMetaType::Int, 0x00095401,
      41, QMetaType::Bool, 0x00095401,
      42, QMetaType::Bool, 0x00495103,
      43, QMetaType::Bool, 0x00095401,
      44, QMetaType::Bool, 0x00095401,
      45, QMetaType::Bool, 0x00495103,
      46, QMetaType::Bool, 0x00095401,
      47, QMetaType::Bool, 0x00495103,
      48, QMetaType::Bool, 0x00095401,
      49, QMetaType::Bool, 0x00495103,
      50, QMetaType::Bool, 0x00095401,
      51, QMetaType::Bool, 0x00095401,
      52, QMetaType::Bool, 0x00495103,
      53, QMetaType::Bool, 0x00095401,
      54, QMetaType::Bool, 0x00095401,
      55, QMetaType::Bool, 0x00495103,
      56, QMetaType::Bool, 0x00095401,
      57, QMetaType::Bool, 0x00095401,
      58, QMetaType::Bool, 0x00495103,
      59, QMetaType::Bool, 0x00095401,
      60, QMetaType::Bool, 0x00095401,
      61, QMetaType::Bool, 0x00495103,
      62, QMetaType::Bool, 0x00095401,
      63, QMetaType::Bool, 0x00095401,
      64, QMetaType::Bool, 0x00495103,
      65, QMetaType::UInt, 0x00095401,
      66, QMetaType::UInt, 0x00495103,
      67, QMetaType::Bool, 0x00095401,
      68, QMetaType::Bool, 0x00095401,
      69, QMetaType::Bool, 0x00495103,
      70, QMetaType::Bool, 0x00095401,
      71, QMetaType::Bool, 0x00095401,
      72, QMetaType::Bool, 0x00495103,
      73, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       5,
       0,
       0,
       0,
       6,
       0,
       0,
       7,
       0,
       8,
       0,
       0,
       9,
       0,
       0,
       9,
       0,
       0,
       1,
       0,
       0,
       2,
       0,
       3,
       0,
       4,
       0,
       0,
      10,
       0,
       0,
      11,
       0,
       0,
      12,
       0,
       0,
      12,
       0,
       0,
      12,
       0,
      13,
       0,
       0,
      14,
       0,
       0,
      14,
       0,

       0        // eod
};

void LibinputCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibinputCommon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->tapToClickChanged(); break;
        case 2: _t->lmrTapButtonMapChanged(); break;
        case 3: _t->tapAndDragChanged(); break;
        case 4: _t->tapDragLockChanged(); break;
        case 5: _t->leftHandedChanged(); break;
        case 6: _t->disableWhileTypingChanged(); break;
        case 7: _t->middleEmulationChanged(); break;
        case 8: _t->pointerAccelerationChanged(); break;
        case 9: _t->pointerAccelerationProfileChanged(); break;
        case 10: _t->naturalScrollChanged(); break;
        case 11: _t->horizontalScrollingChanged(); break;
        case 12: _t->scrollMethodChanged(); break;
        case 13: _t->scrollButtonChanged(); break;
        case 14: _t->clickMethodChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::tapToClickChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::lmrTapButtonMapChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::tapAndDragChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::tapDragLockChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::leftHandedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::disableWhileTypingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::middleEmulationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::pointerAccelerationChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::pointerAccelerationProfileChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::naturalScrollChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::horizontalScrollingChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::scrollMethodChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::scrollButtonChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LibinputCommon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibinputCommon::clickMethodChanged)) {
                *result = 14;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LibinputCommon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->supportsDisableEvents(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->supportedButtons(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->supportsLeftHanded(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->leftHandedEnabledByDefault(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isLeftHanded(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->supportsDisableEventsOnExternalMouse(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->supportsDisableWhileTyping(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->disableWhileTypingEnabledByDefault(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isDisableWhileTyping(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->supportsMiddleEmulation(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->middleEmulationEnabledByDefault(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isMiddleEmulation(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAcceleration(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->pointerAcceleration(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAccelerationProfileFlat(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->defaultPointerAccelerationProfileFlat(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->pointerAccelerationProfileFlat(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAccelerationProfileAdaptive(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->defaultPointerAccelerationProfileAdaptive(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->pointerAccelerationProfileAdaptive(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->tapFingerCount(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->tapToClickEnabledByDefault(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->isTapToClick(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->supportsLmrTapButtonMap(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->lmrTapButtonMapEnabledByDefault(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->lmrTapButtonMap(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->tapAndDragEnabledByDefault(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->isTapAndDrag(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->tapDragLockEnabledByDefault(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->isTapDragLock(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->supportsNaturalScroll(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->naturalScrollEnabledByDefault(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->isNaturalScroll(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->supportsHorizontalScrolling(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->horizontalScrollingByDefault(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->horizontalScrolling(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->supportsScrollTwoFinger(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->scrollTwoFingerEnabledByDefault(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->isScrollTwoFinger(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->supportsScrollEdge(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->scrollEdgeEnabledByDefault(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->isScrollEdge(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->supportsScrollOnButtonDown(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->scrollOnButtonDownEnabledByDefault(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isScrollOnButtonDown(); break;
        case 47: *reinterpret_cast< quint32*>(_v) = _t->defaultScrollButton(); break;
        case 48: *reinterpret_cast< quint32*>(_v) = _t->scrollButton(); break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->supportsClickMethodAreas(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->defaultClickMethodAreas(); break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->isClickMethodAreas(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->supportsClickMethodClickfinger(); break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->defaultClickMethodClickfinger(); break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->isClickMethodClickfinger(); break;
        case 55: *reinterpret_cast< bool*>(_v) = _t->supportsScrollFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LibinputCommon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setLeftHanded(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDisableWhileTyping(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setMiddleEmulation(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setPointerAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 18: _t->setPointerAccelerationProfileFlat(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setPointerAccelerationProfileAdaptive(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setTapToClick(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setLmrTapButtonMap(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setTapAndDrag(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setTapDragLock(*reinterpret_cast< bool*>(_v)); break;
        case 34: _t->setNaturalScroll(*reinterpret_cast< bool*>(_v)); break;
        case 37: _t->setHorizontalScrolling(*reinterpret_cast< bool*>(_v)); break;
        case 40: _t->setScrollTwoFinger(*reinterpret_cast< bool*>(_v)); break;
        case 43: _t->setScrollEdge(*reinterpret_cast< bool*>(_v)); break;
        case 46: _t->setScrollOnButtonDown(*reinterpret_cast< bool*>(_v)); break;
        case 48: _t->setScrollButton(*reinterpret_cast< quint32*>(_v)); break;
        case 51: _t->setClickMethodAreas(*reinterpret_cast< bool*>(_v)); break;
        case 54: _t->setClickMethodClickfinger(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LibinputCommon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LibinputCommon.data,
    qt_meta_data_LibinputCommon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibinputCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibinputCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibinputCommon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LibinputCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 56;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 56;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LibinputCommon::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LibinputCommon::tapToClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LibinputCommon::lmrTapButtonMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LibinputCommon::tapAndDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LibinputCommon::tapDragLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LibinputCommon::leftHandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LibinputCommon::disableWhileTypingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LibinputCommon::middleEmulationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LibinputCommon::pointerAccelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LibinputCommon::pointerAccelerationProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void LibinputCommon::naturalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void LibinputCommon::horizontalScrollingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void LibinputCommon::scrollMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void LibinputCommon::scrollButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void LibinputCommon::clickMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
