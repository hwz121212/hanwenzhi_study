/****************************************************************************
** Meta object code from reading C++ file 'qambienttemperaturesensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qambienttemperaturesensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qambienttemperaturesensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAmbientTemperatureReading_t {
    QByteArrayData data[2];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAmbientTemperatureReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAmbientTemperatureReading_t qt_meta_stringdata_QAmbientTemperatureReading = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QAmbientTemperatureReading"
QT_MOC_LITERAL(1, 27, 11) // "temperature"

    },
    "QAmbientTemperatureReading\0temperature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAmbientTemperatureReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,

       0        // eod
};

void QAmbientTemperatureReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QAmbientTemperatureReading *_t = static_cast<QAmbientTemperatureReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->temperature(); break;
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

const QMetaObject QAmbientTemperatureReading::staticMetaObject = {
    { &QSensorReading::staticMetaObject, qt_meta_stringdata_QAmbientTemperatureReading.data,
      qt_meta_data_QAmbientTemperatureReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAmbientTemperatureReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmbientTemperatureReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmbientTemperatureReading.stringdata0))
        return static_cast<void*>(this);
    return QSensorReading::qt_metacast(_clname);
}

int QAmbientTemperatureReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorReading::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QAmbientTemperatureSensor_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAmbientTemperatureSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAmbientTemperatureSensor_t qt_meta_stringdata_QAmbientTemperatureSensor = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QAmbientTemperatureSensor"

    },
    "QAmbientTemperatureSensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAmbientTemperatureSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QAmbientTemperatureSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAmbientTemperatureSensor::staticMetaObject = {
    { &QSensor::staticMetaObject, qt_meta_stringdata_QAmbientTemperatureSensor.data,
      qt_meta_data_QAmbientTemperatureSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAmbientTemperatureSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmbientTemperatureSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmbientTemperatureSensor.stringdata0))
        return static_cast<void*>(this);
    return QSensor::qt_metacast(_clname);
}

int QAmbientTemperatureSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensor::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
