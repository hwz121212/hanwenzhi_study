/****************************************************************************
** Meta object code from reading C++ file 'qgamepadbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtGamepad/private/qgamepadbackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgamepadbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGamepadBackend_t {
    QByteArrayData data[18];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGamepadBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGamepadBackend_t qt_meta_stringdata_QGamepadBackend = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGamepadBackend"
QT_MOC_LITERAL(1, 16, 16), // "buttonConfigured"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "deviceId"
QT_MOC_LITERAL(4, 43, 30), // "QGamepadManager::GamepadButton"
QT_MOC_LITERAL(5, 74, 6), // "button"
QT_MOC_LITERAL(6, 81, 14), // "axisConfigured"
QT_MOC_LITERAL(7, 96, 28), // "QGamepadManager::GamepadAxis"
QT_MOC_LITERAL(8, 125, 4), // "axis"
QT_MOC_LITERAL(9, 130, 21), // "configurationCanceled"
QT_MOC_LITERAL(10, 152, 12), // "gamepadAdded"
QT_MOC_LITERAL(11, 165, 14), // "gamepadRemoved"
QT_MOC_LITERAL(12, 180, 16), // "gamepadAxisMoved"
QT_MOC_LITERAL(13, 197, 5), // "value"
QT_MOC_LITERAL(14, 203, 20), // "gamepadButtonPressed"
QT_MOC_LITERAL(15, 224, 21), // "gamepadButtonReleased"
QT_MOC_LITERAL(16, 246, 5), // "start"
QT_MOC_LITERAL(17, 252, 4) // "stop"

    },
    "QGamepadBackend\0buttonConfigured\0\0"
    "deviceId\0QGamepadManager::GamepadButton\0"
    "button\0axisConfigured\0"
    "QGamepadManager::GamepadAxis\0axis\0"
    "configurationCanceled\0gamepadAdded\0"
    "gamepadRemoved\0gamepadAxisMoved\0value\0"
    "gamepadButtonPressed\0gamepadButtonReleased\0"
    "start\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGamepadBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    2,   69,    2, 0x06 /* Public */,
       9,    1,   74,    2, 0x06 /* Public */,
      10,    1,   77,    2, 0x06 /* Public */,
      11,    1,   80,    2, 0x06 /* Public */,
      12,    3,   83,    2, 0x06 /* Public */,
      14,    3,   90,    2, 0x06 /* Public */,
      15,    2,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  102,    2, 0x0a /* Public */,
      17,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    3,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Double,    3,    8,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Double,    3,    5,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void QGamepadBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGamepadBackend *_t = static_cast<QGamepadBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonConfigured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        case 1: _t->axisConfigured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2]))); break;
        case 2: _t->configurationCanceled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->gamepadAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->gamepadRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gamepadAxisMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadAxis(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->gamepadButtonPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->gamepadButtonReleased((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGamepadManager::GamepadButton(*)>(_a[2]))); break;
        case 8: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadAxis >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGamepadManager::GamepadButton >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGamepadBackend::*_t)(int , QGamepadManager::GamepadButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::buttonConfigured)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int , QGamepadManager::GamepadAxis );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::axisConfigured)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::configurationCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::gamepadAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::gamepadRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int , QGamepadManager::GamepadAxis , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::gamepadAxisMoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int , QGamepadManager::GamepadButton , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::gamepadButtonPressed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGamepadBackend::*_t)(int , QGamepadManager::GamepadButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGamepadBackend::gamepadButtonReleased)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QGamepadBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGamepadBackend.data,
      qt_meta_data_QGamepadBackend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGamepadBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGamepadBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGamepadBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGamepadBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QGamepadBackend::buttonConfigured(int _t1, QGamepadManager::GamepadButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGamepadBackend::axisConfigured(int _t1, QGamepadManager::GamepadAxis _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGamepadBackend::configurationCanceled(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGamepadBackend::gamepadAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGamepadBackend::gamepadRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGamepadBackend::gamepadAxisMoved(int _t1, QGamepadManager::GamepadAxis _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGamepadBackend::gamepadButtonPressed(int _t1, QGamepadManager::GamepadButton _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGamepadBackend::gamepadButtonReleased(int _t1, QGamepadManager::GamepadButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
