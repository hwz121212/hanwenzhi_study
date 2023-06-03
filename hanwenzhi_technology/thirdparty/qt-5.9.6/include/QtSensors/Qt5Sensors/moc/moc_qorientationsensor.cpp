/****************************************************************************
** Meta object code from reading C++ file 'qorientationsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qorientationsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qorientationsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QOrientationReading_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOrientationReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOrientationReading_t qt_meta_stringdata_QOrientationReading = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QOrientationReading"
QT_MOC_LITERAL(1, 20, 11), // "orientation"
QT_MOC_LITERAL(2, 32, 11), // "Orientation"
QT_MOC_LITERAL(3, 44, 9), // "Undefined"
QT_MOC_LITERAL(4, 54, 5), // "TopUp"
QT_MOC_LITERAL(5, 60, 7), // "TopDown"
QT_MOC_LITERAL(6, 68, 6), // "LeftUp"
QT_MOC_LITERAL(7, 75, 7), // "RightUp"
QT_MOC_LITERAL(8, 83, 6), // "FaceUp"
QT_MOC_LITERAL(9, 90, 8) // "FaceDown"

    },
    "QOrientationReading\0orientation\0"
    "Orientation\0Undefined\0TopUp\0TopDown\0"
    "LeftUp\0RightUp\0FaceUp\0FaceDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOrientationReading[] = {

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
       2, 0x0,    7,   21,

 // enum data: key, value
       3, uint(QOrientationReading::Undefined),
       4, uint(QOrientationReading::TopUp),
       5, uint(QOrientationReading::TopDown),
       6, uint(QOrientationReading::LeftUp),
       7, uint(QOrientationReading::RightUp),
       8, uint(QOrientationReading::FaceUp),
       9, uint(QOrientationReading::FaceDown),

       0        // eod
};

void QOrientationReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QOrientationReading *_t = static_cast<QOrientationReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Orientation*>(_v) = _t->orientation(); break;
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

const QMetaObject QOrientationReading::staticMetaObject = {
    { &QSensorReading::staticMetaObject, qt_meta_stringdata_QOrientationReading.data,
      qt_meta_data_QOrientationReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QOrientationReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOrientationReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QOrientationReading.stringdata0))
        return static_cast<void*>(this);
    return QSensorReading::qt_metacast(_clname);
}

int QOrientationReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QOrientationSensor_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOrientationSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOrientationSensor_t qt_meta_stringdata_QOrientationSensor = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QOrientationSensor"

    },
    "QOrientationSensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOrientationSensor[] = {

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

void QOrientationSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QOrientationSensor::staticMetaObject = {
    { &QSensor::staticMetaObject, qt_meta_stringdata_QOrientationSensor.data,
      qt_meta_data_QOrientationSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QOrientationSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOrientationSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QOrientationSensor.stringdata0))
        return static_cast<void*>(this);
    return QSensor::qt_metacast(_clname);
}

int QOrientationSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensor::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
