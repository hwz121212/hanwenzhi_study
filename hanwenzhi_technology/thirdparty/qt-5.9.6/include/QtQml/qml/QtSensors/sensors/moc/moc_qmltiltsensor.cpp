/****************************************************************************
** Meta object code from reading C++ file 'qmltiltsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmltiltsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmltiltsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlTiltSensor_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlTiltSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlTiltSensor_t qt_meta_stringdata_QmlTiltSensor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QmlTiltSensor"
QT_MOC_LITERAL(1, 14, 9), // "calibrate"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "QmlTiltSensor\0calibrate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlTiltSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QmlTiltSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlTiltSensor *_t = static_cast<QmlTiltSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibrate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmlTiltSensor::staticMetaObject = {
    { &QmlSensor::staticMetaObject, qt_meta_stringdata_QmlTiltSensor.data,
      qt_meta_data_QmlTiltSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlTiltSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlTiltSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlTiltSensor.stringdata0))
        return static_cast<void*>(this);
    return QmlSensor::qt_metacast(_clname);
}

int QmlTiltSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
struct qt_meta_stringdata_QmlTiltSensorReading_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlTiltSensorReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlTiltSensorReading_t qt_meta_stringdata_QmlTiltSensorReading = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QmlTiltSensorReading"
QT_MOC_LITERAL(1, 21, 16), // "yRotationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "xRotationChanged"
QT_MOC_LITERAL(4, 56, 9), // "yRotation"
QT_MOC_LITERAL(5, 66, 9) // "xRotation"

    },
    "QmlTiltSensorReading\0yRotationChanged\0"
    "\0xRotationChanged\0yRotation\0xRotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlTiltSensorReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00495001,
       5, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QmlTiltSensorReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlTiltSensorReading *_t = static_cast<QmlTiltSensorReading *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->yRotationChanged(); break;
        case 1: _t->xRotationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlTiltSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlTiltSensorReading::yRotationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlTiltSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlTiltSensorReading::xRotationChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlTiltSensorReading *_t = static_cast<QmlTiltSensorReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->yRotation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlTiltSensorReading::staticMetaObject = {
    { &QmlSensorReading::staticMetaObject, qt_meta_stringdata_QmlTiltSensorReading.data,
      qt_meta_data_QmlTiltSensorReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlTiltSensorReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlTiltSensorReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlTiltSensorReading.stringdata0))
        return static_cast<void*>(this);
    return QmlSensorReading::qt_metacast(_clname);
}

int QmlTiltSensorReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlSensorReading::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlTiltSensorReading::yRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlTiltSensorReading::xRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
