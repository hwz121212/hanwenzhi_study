/****************************************************************************
** Meta object code from reading C++ file 'qaccelerometer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaccelerometer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaccelerometer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAccelerometerReading_t {
    QByteArrayData data[4];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAccelerometerReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAccelerometerReading_t qt_meta_stringdata_QAccelerometerReading = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QAccelerometerReading"
QT_MOC_LITERAL(1, 22, 1), // "x"
QT_MOC_LITERAL(2, 24, 1), // "y"
QT_MOC_LITERAL(3, 26, 1) // "z"

    },
    "QAccelerometerReading\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAccelerometerReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::QReal, 0x00095001,

       0        // eod
};

void QAccelerometerReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QAccelerometerReading *_t = static_cast<QAccelerometerReading *>(_o);
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
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAccelerometerReading::staticMetaObject = {
    { &QSensorReading::staticMetaObject, qt_meta_stringdata_QAccelerometerReading.data,
      qt_meta_data_QAccelerometerReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAccelerometerReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAccelerometerReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAccelerometerReading.stringdata0))
        return static_cast<void*>(this);
    return QSensorReading::qt_metacast(_clname);
}

int QAccelerometerReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorReading::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QAccelerometer_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAccelerometer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAccelerometer_t qt_meta_stringdata_QAccelerometer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QAccelerometer"
QT_MOC_LITERAL(1, 15, 23), // "accelerationModeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "AccelerationMode"
QT_MOC_LITERAL(4, 57, 16), // "accelerationMode"
QT_MOC_LITERAL(5, 74, 8), // "Combined"
QT_MOC_LITERAL(6, 83, 7), // "Gravity"
QT_MOC_LITERAL(7, 91, 4) // "User"

    },
    "QAccelerometer\0accelerationModeChanged\0"
    "\0AccelerationMode\0accelerationMode\0"
    "Combined\0Gravity\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAccelerometer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       3, 0x0,    3,   30,

 // enum data: key, value
       5, uint(QAccelerometer::Combined),
       6, uint(QAccelerometer::Gravity),
       7, uint(QAccelerometer::User),

       0        // eod
};

void QAccelerometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAccelerometer *_t = static_cast<QAccelerometer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelerationModeChanged((*reinterpret_cast< AccelerationMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAccelerometer::*_t)(AccelerationMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAccelerometer::accelerationModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAccelerometer *_t = static_cast<QAccelerometer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccelerationMode*>(_v) = _t->accelerationMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAccelerometer *_t = static_cast<QAccelerometer *>(_o);
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

const QMetaObject QAccelerometer::staticMetaObject = {
    { &QSensor::staticMetaObject, qt_meta_stringdata_QAccelerometer.data,
      qt_meta_data_QAccelerometer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAccelerometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAccelerometer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAccelerometer.stringdata0))
        return static_cast<void*>(this);
    return QSensor::qt_metacast(_clname);
}

int QAccelerometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensor::qt_metacall(_c, _id, _a);
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
void QAccelerometer::accelerationModeChanged(AccelerationMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
