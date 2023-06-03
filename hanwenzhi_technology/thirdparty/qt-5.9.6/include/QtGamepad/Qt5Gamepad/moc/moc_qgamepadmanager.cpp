/****************************************************************************
** Meta object code from reading C++ file 'qgamepadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgamepadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgamepadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGamepadManager_t {
    QByteArrayData data[59];
    char stringdata0[887];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGamepadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGamepadManager_t qt_meta_stringdata_QGamepadManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGamepadManager"
QT_MOC_LITERAL(1, 16, 24), // "connectedGamepadsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "gamepadConnected"
QT_MOC_LITERAL(4, 59, 8), // "deviceId"
QT_MOC_LITERAL(5, 68, 19), // "gamepadDisconnected"
QT_MOC_LITERAL(6, 88, 16), // "gamepadAxisEvent"
QT_MOC_LITERAL(7, 105, 28), // "QGamepadManager::GamepadAxis"
QT_MOC_LITERAL(8, 134, 4), // "axis"
QT_MOC_LITERAL(9, 139, 5), // "value"
QT_MOC_LITERAL(10, 145, 23), // "gamepadButtonPressEvent"
QT_MOC_LITERAL(11, 169, 30), // "QGamepadManager::GamepadButton"
QT_MOC_LITERAL(12, 200, 6), // "button"
QT_MOC_LITERAL(13, 207, 25), // "gamepadButtonReleaseEvent"
QT_MOC_LITERAL(14, 233, 16), // "buttonConfigured"
QT_MOC_LITERAL(15, 250, 14), // "axisConfigured"
QT_MOC_LITERAL(16, 265, 21), // "configurationCanceled"
QT_MOC_LITERAL(17, 287, 21), // "isConfigurationNeeded"
QT_MOC_LITERAL(18, 309, 15), // "configureButton"
QT_MOC_LITERAL(19, 325, 13), // "GamepadButton"
QT_MOC_LITERAL(20, 339, 13), // "configureAxis"
QT_MOC_LITERAL(21, 353, 11), // "GamepadAxis"
QT_MOC_LITERAL(22, 365, 24), // "setCancelConfigureButton"
QT_MOC_LITERAL(23, 390, 18), // "resetConfiguration"
QT_MOC_LITERAL(24, 409, 15), // "setSettingsFile"
QT_MOC_LITERAL(25, 425, 4), // "file"
QT_MOC_LITERAL(26, 430, 26), // "_q_forwardGamepadConnected"
QT_MOC_LITERAL(27, 457, 29), // "_q_forwardGamepadDisconnected"
QT_MOC_LITERAL(28, 487, 26), // "_q_forwardGamepadAxisEvent"
QT_MOC_LITERAL(29, 514, 33), // "_q_forwardGamepadButtonPressE..."
QT_MOC_LITERAL(30, 548, 35), // "_q_forwardGamepadButtonReleas..."
QT_MOC_LITERAL(31, 584, 17), // "connectedGamepads"
QT_MOC_LITERAL(32, 602, 10), // "QList<int>"
QT_MOC_LITERAL(33, 613, 13), // "ButtonInvalid"
QT_MOC_LITERAL(34, 627, 7), // "ButtonA"
QT_MOC_LITERAL(35, 635, 7), // "ButtonB"
QT_MOC_LITERAL(36, 643, 7), // "ButtonX"
QT_MOC_LITERAL(37, 651, 7), // "ButtonY"
QT_MOC_LITERAL(38, 659, 8), // "ButtonL1"
QT_MOC_LITERAL(39, 668, 8), // "ButtonR1"
QT_MOC_LITERAL(40, 677, 8), // "ButtonL2"
QT_MOC_LITERAL(41, 686, 8), // "ButtonR2"
QT_MOC_LITERAL(42, 695, 12), // "ButtonSelect"
QT_MOC_LITERAL(43, 708, 11), // "ButtonStart"
QT_MOC_LITERAL(44, 720, 8), // "ButtonL3"
QT_MOC_LITERAL(45, 729, 8), // "ButtonR3"
QT_MOC_LITERAL(46, 738, 8), // "ButtonUp"
QT_MOC_LITERAL(47, 747, 10), // "ButtonDown"
QT_MOC_LITERAL(48, 758, 11), // "ButtonRight"
QT_MOC_LITERAL(49, 770, 10), // "ButtonLeft"
QT_MOC_LITERAL(50, 781, 12), // "ButtonCenter"
QT_MOC_LITERAL(51, 794, 11), // "ButtonGuide"
QT_MOC_LITERAL(52, 806, 14), // "GamepadButtons"
QT_MOC_LITERAL(53, 821, 11), // "AxisInvalid"
QT_MOC_LITERAL(54, 833, 9), // "AxisLeftX"
QT_MOC_LITERAL(55, 843, 9), // "AxisLeftY"
QT_MOC_LITERAL(56, 853, 10), // "AxisRightX"
QT_MOC_LITERAL(57, 864, 10), // "AxisRightY"
QT_MOC_LITERAL(58, 875, 11) // "GamepadAxes"

    },
    "QGamepadManager\0connectedGamepadsChanged\0"
    "\0gamepadConnected\0deviceId\0"
    "gamepadDisconnected\0gamepadAxisEvent\0"
    "QGamepadManager::GamepadAxis\0axis\0"
    "value\0gamepadButtonPressEvent\0"
    "QGamepadManager::GamepadButton\0button\0"
    "gamepadButtonReleaseEvent\0buttonConfigured\0"
    "axisConfigured\0configurationCanceled\0"
    "isConfigurationNeeded\0configureButton\0"
    "GamepadButton\0configureAxis\0GamepadAxis\0"
    "setCancelConfigureButton\0resetConfiguration\0"
    "setSettingsFile\0file\0_q_forwardGamepadConnected\0"
    "_q_forwardGamepadDisconnected\0"
    "_q_forwardGamepadAxisEvent\0"
    "_q_forwardGamepadButtonPressEvent\0"
    "_q_forwardGamepadButtonReleaseEvent\0"
    "connectedGamepads\0QList<int>\0ButtonInvalid\0"
    "ButtonA\0ButtonB\0ButtonX\0ButtonY\0"
    "ButtonL1\0ButtonR1\0ButtonL2\0ButtonR2\0"
    "ButtonSelect\0ButtonStart\0ButtonL3\0"
    "ButtonR3\0ButtonUp\0ButtonDown\0ButtonRight\0"
    "ButtonLeft\0ButtonCenter\0ButtonGuide\0"
    "GamepadButtons\0AxisInvalid\0AxisLeftX\0"
    "AxisLeftY\0AxisRightX\0AxisRightY\0"
    "GamepadAxes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGamepadManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       1,  202, // properties
       4,  206, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    1,  115,    2, 0x06 /* Public */,
       5,    1,  118,    2, 0x06 /* Public */,
       6,    3,  121,    2, 0x06 /* Public */,
      10,    3,  128,    2, 0x06 /* Public */,
      13,    2,  135,    2, 0x06 /* Public */,
      14,    2,  140,    2, 0x06 /* Public */,
      15,    2,  145,    2, 0x06 /* Public */,
      16,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  153,    2, 0x0a /* Public */,
      18,    2,  156,    2, 0x0a /* Public */,
      20,    2,  161,    2, 0x0a /* Public */,
      22,    2,  166,    2, 0x0a /* Public */,
      23,    1,  171,    2, 0x0a /* Public */,
      24,    1,  174,    2, 0x0a /* Public */,
      26,    1,  177,    2, 0x08 /* Private */,
      27,    1,  180,    2, 0x08 /* Private */,
      28,    3,  183,    2, 0x08 /* Private */,
      29,    3,  190,    2, 0x08 /* Private */,
      30,    2,  197,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Double,    4,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, QMetaType::Double,    4,   12,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    4,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    4,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    4,    8,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 19,    4,   12,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 21,    4,    8,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 19,    4,   12,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    2,    2,

 // properties: name, type, flags
      31, 0x80000000 | 32, 0x00495009,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
      19, 0x1,   19,  222,
      52, 0x1,   19,  260,
      21, 0x1,    5,  298,
      58, 0x1,    5,  308,

 // enum data: key, value
      33, uint(QGamepadManager::ButtonInvalid),
      34, uint(QGamepadManager::ButtonA),
      35, uint(QGamepadManager::ButtonB),
      36, uint(QGamepadManager::ButtonX),
      37, uint(QGamepadManager::ButtonY),
      38, uint(QGamepadManager::ButtonL1),
      39, uint(QGamepadManager::ButtonR1),
      40, uint(QGamepadManager::ButtonL2),
      41, uint(QGamepadManager::ButtonR2),
      42, uint(QGamepadManager::ButtonSelect),
      43, uint(QGamepadManager::ButtonStart),
      44, uint(QGamepadManager::ButtonL3),
      45, uint(QGamepadManager::ButtonR3),
      46, uint(QGamepadManager::ButtonUp),
      47, uint(QGamepadManager::ButtonDown),
      48, uint(QGamepadManager::ButtonRight),
      49, uint(QGamepadManager::ButtonLeft),
      50, uint(QGamepadManager::ButtonCenter),
      51, uint(QGamepadManager::ButtonGuide),
      33, uint(QGamepadManager::ButtonInvalid),
      34, uint(QGamepadManager::ButtonA),
      35, uint(QGamepadManager::ButtonB),
      36, uint(QGamepadManager::ButtonX),
      37, uint(QGamepadManager::ButtonY),
      38, uint(QGamepadManager::ButtonL1),
      39, uint(QGamepadManager::ButtonR1),
      40, uint(QGamepadManager::ButtonL2),
      41, uint(QGamepadManager::ButtonR2),
      42, uint(QGamepadManager::ButtonSelect),
      43, uint(QGamepadManager::ButtonStart),
      44, uint(QGamepadManager::ButtonL3),
      45, uint(QGamepadManager::ButtonR3),
      46, uint(QGamepadManager::ButtonUp),
      47, uint(QGamepadManager::ButtonDown),
      48, uint(QGamepadManager::ButtonRight),
      49, uint(QGamepadManager::ButtonLeft),
      50, uint(QGamepadManager::ButtonCenter),
      51, uint(QGamepadManager::ButtonGuide),
      53, uint(QGamepadManager::AxisInvalid),
      54, uint(QGamepadManager::AxisLeftX),
      55, uint(QGamepadManager::AxisLeftY),
      56, uint(QGamepadManager::AxisRightX),
      57, uint(QGamepadManager::AxisRightY),
      53, uint(QGamepadManager::AxisInvalid),
      54, uint(QGamepadManager::AxisLeftX),
      55, uint(QGamepadManager::AxisLeftY),
      56, uint(QGamepadManager::AxisRightX),
      57, uint(QGamepadManager::AxisRightY),

       0        // eod
};

void QGamepadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGamepadManager *_t = static_cast<QGamepadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedGamepadsChanged(); break;
        case 1: _t->gamepadConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->gamepadDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->gamepadAxisEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->gamepadButtonPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->gamepadButtonReleaseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        case 6: _t->buttonConfigured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        case 7: _t->axisConfigured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2]))); break;
        case 8: _t->configurationCanceled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { bool _r = _t->isConfigurationNeeded((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->configureButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< GamepadButton(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->configureAxis((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< GamepadAxis(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setCancelConfigureButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< GamepadButton(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->resetConfiguration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setSettingsFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->d_func()->_q_forwardGamepadConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->d_func()->_q_forwardGamepadDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_forwardGamepadAxisEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 18: _t->d_func()->_q_forwardGamepadButtonPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 19: _t->d_func()->_q_forwardGamepadButtonReleaseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 19:
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
            typedef void (QGamepadManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::connectedGamepadsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::gamepadConnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::gamepadDisconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int , QGamepadManager::GamepadAxis , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::gamepadAxisEvent)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int , QGamepadManager::GamepadButton , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::gamepadButtonPressEvent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int , QGamepadManager::GamepadButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::gamepadButtonReleaseEvent)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int , QGamepadManager::GamepadButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::buttonConfigured)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int , QGamepadManager::GamepadAxis );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::axisConfigured)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGamepadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadManager::configurationCanceled)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGamepadManager *_t = static_cast<QGamepadManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<int>*>(_v) = _t->connectedGamepads(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGamepadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGamepadManager.data,
      qt_meta_data_QGamepadManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGamepadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGamepadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGamepadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGamepadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGamepadManager::connectedGamepadsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGamepadManager::gamepadConnected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGamepadManager::gamepadDisconnected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGamepadManager::gamepadAxisEvent(int _t1, QGamepadManager::GamepadAxis _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGamepadManager::gamepadButtonPressEvent(int _t1, QGamepadManager::GamepadButton _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGamepadManager::gamepadButtonReleaseEvent(int _t1, QGamepadManager::GamepadButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGamepadManager::buttonConfigured(int _t1, QGamepadManager::GamepadButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGamepadManager::axisConfigured(int _t1, QGamepadManager::GamepadAxis _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGamepadManager::configurationCanceled(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
