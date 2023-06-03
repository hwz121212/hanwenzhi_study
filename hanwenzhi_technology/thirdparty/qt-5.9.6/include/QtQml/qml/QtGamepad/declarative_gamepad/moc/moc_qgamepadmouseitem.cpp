/****************************************************************************
** Meta object code from reading C++ file 'qgamepadmouseitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgamepadmouseitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgamepadmouseitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGamepadMouseItem_t {
    QByteArrayData data[33];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGamepadMouseItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGamepadMouseItem_t qt_meta_stringdata_QGamepadMouseItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGamepadMouseItem"
QT_MOC_LITERAL(1, 18, 13), // "activeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "isActive"
QT_MOC_LITERAL(4, 42, 14), // "gamepadChanged"
QT_MOC_LITERAL(5, 57, 9), // "QGamepad*"
QT_MOC_LITERAL(6, 67, 7), // "gamepad"
QT_MOC_LITERAL(7, 75, 15), // "joystickChanged"
QT_MOC_LITERAL(8, 91, 15), // "GamepadJoystick"
QT_MOC_LITERAL(9, 107, 8), // "joystick"
QT_MOC_LITERAL(10, 116, 19), // "deadZoneSizeChanged"
QT_MOC_LITERAL(11, 136, 4), // "size"
QT_MOC_LITERAL(12, 141, 20), // "mousePositionChanged"
QT_MOC_LITERAL(13, 162, 8), // "position"
QT_MOC_LITERAL(14, 171, 9), // "setActive"
QT_MOC_LITERAL(15, 181, 3), // "arg"
QT_MOC_LITERAL(16, 185, 10), // "setGamepad"
QT_MOC_LITERAL(17, 196, 11), // "setJoystick"
QT_MOC_LITERAL(18, 208, 15), // "setDeadZoneSize"
QT_MOC_LITERAL(19, 224, 18), // "mouseButtonPressed"
QT_MOC_LITERAL(20, 243, 6), // "button"
QT_MOC_LITERAL(21, 250, 19), // "mouseButtonReleased"
QT_MOC_LITERAL(22, 270, 18), // "updateMousePostion"
QT_MOC_LITERAL(23, 289, 21), // "processMouseMoveEvent"
QT_MOC_LITERAL(24, 311, 23), // "processMouseButtonEvent"
QT_MOC_LITERAL(25, 335, 9), // "isPressed"
QT_MOC_LITERAL(26, 345, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(27, 361, 6), // "active"
QT_MOC_LITERAL(28, 368, 12), // "deadZoneSize"
QT_MOC_LITERAL(29, 381, 13), // "mousePosition"
QT_MOC_LITERAL(30, 395, 9), // "LeftStick"
QT_MOC_LITERAL(31, 405, 10), // "RightStick"
QT_MOC_LITERAL(32, 416, 4) // "Both"

    },
    "QGamepadMouseItem\0activeChanged\0\0"
    "isActive\0gamepadChanged\0QGamepad*\0"
    "gamepad\0joystickChanged\0GamepadJoystick\0"
    "joystick\0deadZoneSizeChanged\0size\0"
    "mousePositionChanged\0position\0setActive\0"
    "arg\0setGamepad\0setJoystick\0setDeadZoneSize\0"
    "mouseButtonPressed\0button\0mouseButtonReleased\0"
    "updateMousePostion\0processMouseMoveEvent\0"
    "processMouseButtonEvent\0isPressed\0"
    "Qt::MouseButton\0active\0deadZoneSize\0"
    "mousePosition\0LeftStick\0RightStick\0"
    "Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGamepadMouseItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,  134, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
      10,    1,   98,    2, 0x06 /* Public */,
      12,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  104,    2, 0x0a /* Public */,
      16,    1,  107,    2, 0x0a /* Public */,
      17,    1,  110,    2, 0x0a /* Public */,
      18,    1,  113,    2, 0x0a /* Public */,
      19,    1,  116,    2, 0x0a /* Public */,
      21,    1,  119,    2, 0x0a /* Public */,
      22,    0,  122,    2, 0x08 /* Private */,
      23,    1,  123,    2, 0x08 /* Private */,
      24,    2,  126,    2, 0x08 /* Private */,
      24,    1,  131,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QPointF,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   13,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 26,   25,   20,
    QMetaType::Void, QMetaType::Bool,   25,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      28, QMetaType::Double, 0x00495103,
      29, QMetaType::QPointF, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
       8, 0x0,    3,  158,

 // enum data: key, value
      30, uint(QGamepadMouseItem::LeftStick),
      31, uint(QGamepadMouseItem::RightStick),
      32, uint(QGamepadMouseItem::Both),

       0        // eod
};

void QGamepadMouseItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGamepadMouseItem *_t = static_cast<QGamepadMouseItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->gamepadChanged((*reinterpret_cast< QGamepad*(*)>(_a[1]))); break;
        case 2: _t->joystickChanged((*reinterpret_cast< GamepadJoystick(*)>(_a[1]))); break;
        case 3: _t->deadZoneSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mousePositionChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setGamepad((*reinterpret_cast< QGamepad*(*)>(_a[1]))); break;
        case 7: _t->setJoystick((*reinterpret_cast< GamepadJoystick(*)>(_a[1]))); break;
        case 8: _t->setDeadZoneSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mouseButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mouseButtonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateMousePostion(); break;
        case 12: _t->processMouseMoveEvent((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 13: _t->processMouseButtonEvent((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 14: _t->processMouseButtonEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGamepadMouseItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadMouseItem::activeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGamepadMouseItem::*_t)(QGamepad * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadMouseItem::gamepadChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGamepadMouseItem::*_t)(GamepadJoystick );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadMouseItem::joystickChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGamepadMouseItem::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadMouseItem::deadZoneSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGamepadMouseItem::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadMouseItem::mousePositionChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGamepadMouseItem *_t = static_cast<QGamepadMouseItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast< QGamepad**>(_v) = _t->gamepad(); break;
        case 2: *reinterpret_cast< GamepadJoystick*>(_v) = _t->joystick(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->deadZoneSize(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->mousePosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGamepadMouseItem *_t = static_cast<QGamepadMouseItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGamepad(*reinterpret_cast< QGamepad**>(_v)); break;
        case 2: _t->setJoystick(*reinterpret_cast< GamepadJoystick*>(_v)); break;
        case 3: _t->setDeadZoneSize(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGamepadMouseItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QGamepadMouseItem.data,
      qt_meta_data_QGamepadMouseItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGamepadMouseItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGamepadMouseItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGamepadMouseItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QGamepadMouseItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGamepadMouseItem::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGamepadMouseItem::gamepadChanged(QGamepad * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGamepadMouseItem::joystickChanged(GamepadJoystick _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGamepadMouseItem::deadZoneSizeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGamepadMouseItem::mousePositionChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
