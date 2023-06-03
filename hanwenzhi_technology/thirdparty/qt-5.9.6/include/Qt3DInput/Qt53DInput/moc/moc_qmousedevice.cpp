/****************************************************************************
** Meta object code from reading C++ file 'qmousedevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmousedevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmousedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QMouseDevice_t {
    QByteArrayData data[11];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QMouseDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QMouseDevice_t qt_meta_stringdata_Qt3DInput__QMouseDevice = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qt3DInput::QMouseDevice"
QT_MOC_LITERAL(1, 24, 18), // "sensitivityChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 14), // "setSensitivity"
QT_MOC_LITERAL(5, 65, 11), // "sensitivity"
QT_MOC_LITERAL(6, 77, 4), // "Axis"
QT_MOC_LITERAL(7, 82, 1), // "X"
QT_MOC_LITERAL(8, 84, 1), // "Y"
QT_MOC_LITERAL(9, 86, 6), // "WheelX"
QT_MOC_LITERAL(10, 93, 6) // "WheelY"

    },
    "Qt3DInput::QMouseDevice\0sensitivityChanged\0"
    "\0value\0setSensitivity\0sensitivity\0"
    "Axis\0X\0Y\0WheelX\0WheelY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QMouseDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // properties: name, type, flags
       5, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       6, 0x0,    4,   38,

 // enum data: key, value
       7, uint(Qt3DInput::QMouseDevice::X),
       8, uint(Qt3DInput::QMouseDevice::Y),
       9, uint(Qt3DInput::QMouseDevice::WheelX),
      10, uint(Qt3DInput::QMouseDevice::WheelY),

       0        // eod
};

void Qt3DInput::QMouseDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMouseDevice *_t = static_cast<QMouseDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sensitivityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setSensitivity((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMouseDevice::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseDevice::sensitivityChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMouseDevice *_t = static_cast<QMouseDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->sensitivity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMouseDevice *_t = static_cast<QMouseDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSensitivity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QMouseDevice::staticMetaObject = {
    { &Qt3DInput::QAbstractPhysicalDevice::staticMetaObject, qt_meta_stringdata_Qt3DInput__QMouseDevice.data,
      qt_meta_data_Qt3DInput__QMouseDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QMouseDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QMouseDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QMouseDevice.stringdata0))
        return static_cast<void*>(this);
    return Qt3DInput::QAbstractPhysicalDevice::qt_metacast(_clname);
}

int Qt3DInput::QMouseDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DInput::QAbstractPhysicalDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void Qt3DInput::QMouseDevice::sensitivityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
