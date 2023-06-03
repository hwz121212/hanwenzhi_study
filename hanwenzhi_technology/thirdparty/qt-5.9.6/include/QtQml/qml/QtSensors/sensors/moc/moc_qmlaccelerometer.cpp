/****************************************************************************
** Meta object code from reading C++ file 'qmlaccelerometer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlaccelerometer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlaccelerometer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlAccelerometer_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlAccelerometer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlAccelerometer_t qt_meta_stringdata_QmlAccelerometer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmlAccelerometer"
QT_MOC_LITERAL(1, 17, 23), // "accelerationModeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "AccelerationMode"
QT_MOC_LITERAL(4, 59, 16), // "accelerationMode"
QT_MOC_LITERAL(5, 76, 8), // "Combined"
QT_MOC_LITERAL(6, 85, 7), // "Gravity"
QT_MOC_LITERAL(7, 93, 4) // "User"

    },
    "QmlAccelerometer\0accelerationModeChanged\0"
    "\0AccelerationMode\0accelerationMode\0"
    "Combined\0Gravity\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlAccelerometer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   20,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       1,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00c9510b,

 // properties: notify_signal_id
       0,

 // properties: revision
       1,

 // enums: name, flags, count, data
       3, 0x0,    3,   32,

 // enum data: key, value
       5, uint(QmlAccelerometer::Combined),
       6, uint(QmlAccelerometer::Gravity),
       7, uint(QmlAccelerometer::User),

       0        // eod
};

void QmlAccelerometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlAccelerometer *_t = static_cast<QmlAccelerometer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelerationModeChanged((*reinterpret_cast< AccelerationMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlAccelerometer::*_t)(AccelerationMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlAccelerometer::accelerationModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlAccelerometer *_t = static_cast<QmlAccelerometer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccelerationMode*>(_v) = _t->accelerationMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QmlAccelerometer *_t = static_cast<QmlAccelerometer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccelerationMode(*reinterpret_cast< AccelerationMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlAccelerometer::staticMetaObject = {
    { &QmlSensor::staticMetaObject, qt_meta_stringdata_QmlAccelerometer.data,
      qt_meta_data_QmlAccelerometer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlAccelerometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlAccelerometer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlAccelerometer.stringdata0))
        return static_cast<void*>(this);
    return QmlSensor::qt_metacast(_clname);
}

int QmlAccelerometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlSensor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void QmlAccelerometer::accelerationModeChanged(AccelerationMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QmlAccelerometerReading_t {
    QByteArrayData data[8];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlAccelerometerReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlAccelerometerReading_t qt_meta_stringdata_QmlAccelerometerReading = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QmlAccelerometerReading"
QT_MOC_LITERAL(1, 24, 8), // "xChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "yChanged"
QT_MOC_LITERAL(4, 43, 8), // "zChanged"
QT_MOC_LITERAL(5, 52, 1), // "x"
QT_MOC_LITERAL(6, 54, 1), // "y"
QT_MOC_LITERAL(7, 56, 1) // "z"

    },
    "QmlAccelerometerReading\0xChanged\0\0"
    "yChanged\0zChanged\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlAccelerometerReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495001,
       6, QMetaType::QReal, 0x00495001,
       7, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QmlAccelerometerReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlAccelerometerReading *_t = static_cast<QmlAccelerometerReading *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->zChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlAccelerometerReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlAccelerometerReading::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlAccelerometerReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlAccelerometerReading::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QmlAccelerometerReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlAccelerometerReading::zChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlAccelerometerReading *_t = static_cast<QmlAccelerometerReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlAccelerometerReading::staticMetaObject = {
    { &QmlSensorReading::staticMetaObject, qt_meta_stringdata_QmlAccelerometerReading.data,
      qt_meta_data_QmlAccelerometerReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlAccelerometerReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlAccelerometerReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlAccelerometerReading.stringdata0))
        return static_cast<void*>(this);
    return QmlSensorReading::qt_metacast(_clname);
}

int QmlAccelerometerReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlSensorReading::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlAccelerometerReading::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlAccelerometerReading::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlAccelerometerReading::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
