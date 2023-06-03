/****************************************************************************
** Meta object code from reading C++ file 'qgamepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgamepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgamepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGamepad_t {
    QByteArrayData data[62];
    char stringdata0[909];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGamepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGamepad_t qt_meta_stringdata_QGamepad = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QGamepad"
QT_MOC_LITERAL(1, 9, 15), // "deviceIdChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "value"
QT_MOC_LITERAL(4, 32, 16), // "connectedChanged"
QT_MOC_LITERAL(5, 49, 11), // "nameChanged"
QT_MOC_LITERAL(6, 61, 16), // "axisLeftXChanged"
QT_MOC_LITERAL(7, 78, 16), // "axisLeftYChanged"
QT_MOC_LITERAL(8, 95, 17), // "axisRightXChanged"
QT_MOC_LITERAL(9, 113, 17), // "axisRightYChanged"
QT_MOC_LITERAL(10, 131, 14), // "buttonAChanged"
QT_MOC_LITERAL(11, 146, 14), // "buttonBChanged"
QT_MOC_LITERAL(12, 161, 14), // "buttonXChanged"
QT_MOC_LITERAL(13, 176, 14), // "buttonYChanged"
QT_MOC_LITERAL(14, 191, 15), // "buttonL1Changed"
QT_MOC_LITERAL(15, 207, 15), // "buttonR1Changed"
QT_MOC_LITERAL(16, 223, 15), // "buttonL2Changed"
QT_MOC_LITERAL(17, 239, 15), // "buttonR2Changed"
QT_MOC_LITERAL(18, 255, 19), // "buttonSelectChanged"
QT_MOC_LITERAL(19, 275, 18), // "buttonStartChanged"
QT_MOC_LITERAL(20, 294, 15), // "buttonL3Changed"
QT_MOC_LITERAL(21, 310, 15), // "buttonR3Changed"
QT_MOC_LITERAL(22, 326, 15), // "buttonUpChanged"
QT_MOC_LITERAL(23, 342, 17), // "buttonDownChanged"
QT_MOC_LITERAL(24, 360, 17), // "buttonLeftChanged"
QT_MOC_LITERAL(25, 378, 18), // "buttonRightChanged"
QT_MOC_LITERAL(26, 397, 19), // "buttonCenterChanged"
QT_MOC_LITERAL(27, 417, 18), // "buttonGuideChanged"
QT_MOC_LITERAL(28, 436, 11), // "setDeviceId"
QT_MOC_LITERAL(29, 448, 6), // "number"
QT_MOC_LITERAL(30, 455, 25), // "_q_handleGamepadConnected"
QT_MOC_LITERAL(31, 481, 28), // "_q_handleGamepadDisconnected"
QT_MOC_LITERAL(32, 510, 25), // "_q_handleGamepadAxisEvent"
QT_MOC_LITERAL(33, 536, 28), // "QGamepadManager::GamepadAxis"
QT_MOC_LITERAL(34, 565, 32), // "_q_handleGamepadButtonPressEvent"
QT_MOC_LITERAL(35, 598, 30), // "QGamepadManager::GamepadButton"
QT_MOC_LITERAL(36, 629, 34), // "_q_handleGamepadButtonRelease..."
QT_MOC_LITERAL(37, 664, 8), // "deviceId"
QT_MOC_LITERAL(38, 673, 9), // "connected"
QT_MOC_LITERAL(39, 683, 4), // "name"
QT_MOC_LITERAL(40, 688, 9), // "axisLeftX"
QT_MOC_LITERAL(41, 698, 9), // "axisLeftY"
QT_MOC_LITERAL(42, 708, 10), // "axisRightX"
QT_MOC_LITERAL(43, 719, 10), // "axisRightY"
QT_MOC_LITERAL(44, 730, 7), // "buttonA"
QT_MOC_LITERAL(45, 738, 7), // "buttonB"
QT_MOC_LITERAL(46, 746, 7), // "buttonX"
QT_MOC_LITERAL(47, 754, 7), // "buttonY"
QT_MOC_LITERAL(48, 762, 8), // "buttonL1"
QT_MOC_LITERAL(49, 771, 8), // "buttonR1"
QT_MOC_LITERAL(50, 780, 8), // "buttonL2"
QT_MOC_LITERAL(51, 789, 8), // "buttonR2"
QT_MOC_LITERAL(52, 798, 12), // "buttonSelect"
QT_MOC_LITERAL(53, 811, 11), // "buttonStart"
QT_MOC_LITERAL(54, 823, 8), // "buttonL3"
QT_MOC_LITERAL(55, 832, 8), // "buttonR3"
QT_MOC_LITERAL(56, 841, 8), // "buttonUp"
QT_MOC_LITERAL(57, 850, 10), // "buttonDown"
QT_MOC_LITERAL(58, 861, 10), // "buttonLeft"
QT_MOC_LITERAL(59, 872, 11), // "buttonRight"
QT_MOC_LITERAL(60, 884, 12), // "buttonCenter"
QT_MOC_LITERAL(61, 897, 11) // "buttonGuide"

    },
    "QGamepad\0deviceIdChanged\0\0value\0"
    "connectedChanged\0nameChanged\0"
    "axisLeftXChanged\0axisLeftYChanged\0"
    "axisRightXChanged\0axisRightYChanged\0"
    "buttonAChanged\0buttonBChanged\0"
    "buttonXChanged\0buttonYChanged\0"
    "buttonL1Changed\0buttonR1Changed\0"
    "buttonL2Changed\0buttonR2Changed\0"
    "buttonSelectChanged\0buttonStartChanged\0"
    "buttonL3Changed\0buttonR3Changed\0"
    "buttonUpChanged\0buttonDownChanged\0"
    "buttonLeftChanged\0buttonRightChanged\0"
    "buttonCenterChanged\0buttonGuideChanged\0"
    "setDeviceId\0number\0_q_handleGamepadConnected\0"
    "_q_handleGamepadDisconnected\0"
    "_q_handleGamepadAxisEvent\0"
    "QGamepadManager::GamepadAxis\0"
    "_q_handleGamepadButtonPressEvent\0"
    "QGamepadManager::GamepadButton\0"
    "_q_handleGamepadButtonReleaseEvent\0"
    "deviceId\0connected\0name\0axisLeftX\0"
    "axisLeftY\0axisRightX\0axisRightY\0buttonA\0"
    "buttonB\0buttonX\0buttonY\0buttonL1\0"
    "buttonR1\0buttonL2\0buttonR2\0buttonSelect\0"
    "buttonStart\0buttonL3\0buttonR3\0buttonUp\0"
    "buttonDown\0buttonLeft\0buttonRight\0"
    "buttonCenter\0buttonGuide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGamepad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      25,  272, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       4,    1,  172,    2, 0x06 /* Public */,
       5,    1,  175,    2, 0x06 /* Public */,
       6,    1,  178,    2, 0x06 /* Public */,
       7,    1,  181,    2, 0x06 /* Public */,
       8,    1,  184,    2, 0x06 /* Public */,
       9,    1,  187,    2, 0x06 /* Public */,
      10,    1,  190,    2, 0x06 /* Public */,
      11,    1,  193,    2, 0x06 /* Public */,
      12,    1,  196,    2, 0x06 /* Public */,
      13,    1,  199,    2, 0x06 /* Public */,
      14,    1,  202,    2, 0x06 /* Public */,
      15,    1,  205,    2, 0x06 /* Public */,
      16,    1,  208,    2, 0x06 /* Public */,
      17,    1,  211,    2, 0x06 /* Public */,
      18,    1,  214,    2, 0x06 /* Public */,
      19,    1,  217,    2, 0x06 /* Public */,
      20,    1,  220,    2, 0x06 /* Public */,
      21,    1,  223,    2, 0x06 /* Public */,
      22,    1,  226,    2, 0x06 /* Public */,
      23,    1,  229,    2, 0x06 /* Public */,
      24,    1,  232,    2, 0x06 /* Public */,
      25,    1,  235,    2, 0x06 /* Public */,
      26,    1,  238,    2, 0x06 /* Public */,
      27,    1,  241,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  244,    2, 0x0a /* Public */,
      30,    1,  247,    2, 0x08 /* Private */,
      31,    1,  250,    2, 0x08 /* Private */,
      32,    3,  253,    2, 0x08 /* Private */,
      34,    3,  260,    2, 0x08 /* Private */,
      36,    2,  267,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 33, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35,    2,    2,

 // properties: name, type, flags
      37, QMetaType::Int, 0x00495103,
      38, QMetaType::Bool, 0x00495001,
      39, QMetaType::QString, 0x00495001,
      40, QMetaType::Double, 0x00495001,
      41, QMetaType::Double, 0x00495001,
      42, QMetaType::Double, 0x00495001,
      43, QMetaType::Double, 0x00495001,
      44, QMetaType::Bool, 0x00495001,
      45, QMetaType::Bool, 0x00495001,
      46, QMetaType::Bool, 0x00495001,
      47, QMetaType::Bool, 0x00495001,
      48, QMetaType::Bool, 0x00495001,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Double, 0x00495001,
      51, QMetaType::Double, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, QMetaType::Bool, 0x00495001,
      55, QMetaType::Bool, 0x00495001,
      56, QMetaType::Bool, 0x00495001,
      57, QMetaType::Bool, 0x00495001,
      58, QMetaType::Bool, 0x00495001,
      59, QMetaType::Bool, 0x00495001,
      60, QMetaType::Bool, 0x00495001,
      61, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,

       0        // eod
};

void QGamepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGamepad *_t = static_cast<QGamepad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->axisLeftXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->axisLeftYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->axisRightXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->axisRightYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->buttonAChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->buttonBChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->buttonXChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->buttonYChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->buttonL1Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->buttonR1Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->buttonL2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->buttonR2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->buttonSelectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->buttonStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->buttonL3Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->buttonR3Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->buttonUpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->buttonDownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->buttonLeftChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->buttonRightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->buttonCenterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->buttonGuideChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setDeviceId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->d_func()->_q_handleGamepadConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->d_func()->_q_handleGamepadDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->d_func()->_q_handleGamepadAxisEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 29: _t->d_func()->_q_handleGamepadButtonPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 30: _t->d_func()->_q_handleGamepadButtonReleaseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGamepad::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::deviceIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::connectedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::axisLeftXChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::axisLeftYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::axisRightXChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::axisRightYChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonAChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonBChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonXChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonYChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonL1Changed)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonR1Changed)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonL2Changed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonR2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonSelectChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonStartChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonL3Changed)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonR3Changed)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonUpChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonDownChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonLeftChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonRightChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonCenterChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (QGamepad::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepad::buttonGuideChanged)) {
                *result = 24;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGamepad *_t = static_cast<QGamepad *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->deviceId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->axisLeftX(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->axisLeftY(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->axisRightX(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->axisRightY(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->buttonA(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->buttonB(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->buttonX(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->buttonY(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->buttonL1(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->buttonR1(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->buttonL2(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->buttonR2(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->buttonSelect(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->buttonStart(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->buttonL3(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->buttonR3(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->buttonUp(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->buttonDown(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->buttonLeft(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->buttonRight(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->buttonCenter(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->buttonGuide(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGamepad *_t = static_cast<QGamepad *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDeviceId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGamepad::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGamepad.data,
      qt_meta_data_QGamepad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGamepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGamepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGamepad.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGamepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGamepad::deviceIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGamepad::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGamepad::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGamepad::axisLeftXChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGamepad::axisLeftYChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGamepad::axisRightXChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGamepad::axisRightYChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGamepad::buttonAChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGamepad::buttonBChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGamepad::buttonXChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGamepad::buttonYChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGamepad::buttonL1Changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGamepad::buttonR1Changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QGamepad::buttonL2Changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QGamepad::buttonR2Changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QGamepad::buttonSelectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QGamepad::buttonStartChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QGamepad::buttonL3Changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QGamepad::buttonR3Changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QGamepad::buttonUpChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QGamepad::buttonDownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QGamepad::buttonLeftChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QGamepad::buttonRightChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QGamepad::buttonCenterChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QGamepad::buttonGuideChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
