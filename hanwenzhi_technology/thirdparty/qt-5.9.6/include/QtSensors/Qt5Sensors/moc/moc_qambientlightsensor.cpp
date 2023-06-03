/****************************************************************************
** Meta object code from reading C++ file 'qambientlightsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qambientlightsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qambientlightsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAmbientLightReading_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAmbientLightReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAmbientLightReading_t qt_meta_stringdata_QAmbientLightReading = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QAmbientLightReading"
QT_MOC_LITERAL(1, 21, 10), // "lightLevel"
QT_MOC_LITERAL(2, 32, 10), // "LightLevel"
QT_MOC_LITERAL(3, 43, 9), // "Undefined"
QT_MOC_LITERAL(4, 53, 4), // "Dark"
QT_MOC_LITERAL(5, 58, 8), // "Twilight"
QT_MOC_LITERAL(6, 67, 5), // "Light"
QT_MOC_LITERAL(7, 73, 6), // "Bright"
QT_MOC_LITERAL(8, 80, 5) // "Sunny"

    },
    "QAmbientLightReading\0lightLevel\0"
    "LightLevel\0Undefined\0Dark\0Twilight\0"
    "Light\0Bright\0Sunny"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAmbientLightReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,

 // enums: name, flags, count, data
       2, 0x0,    6,   21,

 // enum data: key, value
       3, uint(QAmbientLightReading::Undefined),
       4, uint(QAmbientLightReading::Dark),
       5, uint(QAmbientLightReading::Twilight),
       6, uint(QAmbientLightReading::Light),
       7, uint(QAmbientLightReading::Bright),
       8, uint(QAmbientLightReading::Sunny),

       0        // eod
};

void QAmbientLightReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QAmbientLightReading *_t = static_cast<QAmbientLightReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LightLevel*>(_v) = _t->lightLevel(); break;
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

const QMetaObject QAmbientLightReading::staticMetaObject = {
    { &QSensorReading::staticMetaObject, qt_meta_stringdata_QAmbientLightReading.data,
      qt_meta_data_QAmbientLightReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAmbientLightReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmbientLightReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmbientLightReading.stringdata0))
        return static_cast<void*>(this);
    return QSensorReading::qt_metacast(_clname);
}

int QAmbientLightReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QAmbientLightSensor_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAmbientLightSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAmbientLightSensor_t qt_meta_stringdata_QAmbientLightSensor = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QAmbientLightSensor"

    },
    "QAmbientLightSensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAmbientLightSensor[] = {

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

void QAmbientLightSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAmbientLightSensor::staticMetaObject = {
    { &QSensor::staticMetaObject, qt_meta_stringdata_QAmbientLightSensor.data,
      qt_meta_data_QAmbientLightSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAmbientLightSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmbientLightSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmbientLightSensor.stringdata0))
        return static_cast<void*>(this);
    return QSensor::qt_metacast(_clname);
}

int QAmbientLightSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensor::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
