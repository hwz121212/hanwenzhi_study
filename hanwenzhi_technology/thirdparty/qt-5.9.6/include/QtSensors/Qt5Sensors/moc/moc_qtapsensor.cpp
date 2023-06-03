/****************************************************************************
** Meta object code from reading C++ file 'qtapsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtapsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtapsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTapReading_t {
    QByteArrayData data[17];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapReading_t qt_meta_stringdata_QTapReading = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QTapReading"
QT_MOC_LITERAL(1, 12, 12), // "tapDirection"
QT_MOC_LITERAL(2, 25, 12), // "TapDirection"
QT_MOC_LITERAL(3, 38, 9), // "doubleTap"
QT_MOC_LITERAL(4, 48, 9), // "Undefined"
QT_MOC_LITERAL(5, 58, 1), // "X"
QT_MOC_LITERAL(6, 60, 1), // "Y"
QT_MOC_LITERAL(7, 62, 1), // "Z"
QT_MOC_LITERAL(8, 64, 5), // "X_Pos"
QT_MOC_LITERAL(9, 70, 5), // "Y_Pos"
QT_MOC_LITERAL(10, 76, 5), // "Z_Pos"
QT_MOC_LITERAL(11, 82, 5), // "X_Neg"
QT_MOC_LITERAL(12, 88, 5), // "Y_Neg"
QT_MOC_LITERAL(13, 94, 5), // "Z_Neg"
QT_MOC_LITERAL(14, 100, 6), // "X_Both"
QT_MOC_LITERAL(15, 107, 6), // "Y_Both"
QT_MOC_LITERAL(16, 114, 6) // "Z_Both"

    },
    "QTapReading\0tapDirection\0TapDirection\0"
    "doubleTap\0Undefined\0X\0Y\0Z\0X_Pos\0Y_Pos\0"
    "Z_Pos\0X_Neg\0Y_Neg\0Z_Neg\0X_Both\0Y_Both\0"
    "Z_Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, QMetaType::Bool, 0x00095001,

 // enums: name, flags, count, data
       2, 0x0,   13,   24,

 // enum data: key, value
       4, uint(QTapReading::Undefined),
       5, uint(QTapReading::X),
       6, uint(QTapReading::Y),
       7, uint(QTapReading::Z),
       8, uint(QTapReading::X_Pos),
       9, uint(QTapReading::Y_Pos),
      10, uint(QTapReading::Z_Pos),
      11, uint(QTapReading::X_Neg),
      12, uint(QTapReading::Y_Neg),
      13, uint(QTapReading::Z_Neg),
      14, uint(QTapReading::X_Both),
      15, uint(QTapReading::Y_Both),
      16, uint(QTapReading::Z_Both),

       0        // eod
};

void QTapReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QTapReading *_t = static_cast<QTapReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TapDirection*>(_v) = _t->tapDirection(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDoubleTap(); break;
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

const QMetaObject QTapReading::staticMetaObject = {
    { &QSensorReading::staticMetaObject, qt_meta_stringdata_QTapReading.data,
      qt_meta_data_QTapReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTapReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTapReading.stringdata0))
        return static_cast<void*>(this);
    return QSensorReading::qt_metacast(_clname);
}

int QTapReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorReading::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QTapSensor_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapSensor_t qt_meta_stringdata_QTapSensor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QTapSensor"
QT_MOC_LITERAL(1, 11, 28), // "returnDoubleTapEventsChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21) // "returnDoubleTapEvents"

    },
    "QTapSensor\0returnDoubleTapEventsChanged\0"
    "\0returnDoubleTapEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QTapSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTapSensor *_t = static_cast<QTapSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnDoubleTapEventsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTapSensor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTapSensor::returnDoubleTapEventsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTapSensor *_t = static_cast<QTapSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->returnDoubleTapEvents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTapSensor *_t = static_cast<QTapSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReturnDoubleTapEvents(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QTapSensor::staticMetaObject = {
    { &QSensor::staticMetaObject, qt_meta_stringdata_QTapSensor.data,
      qt_meta_data_QTapSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTapSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTapSensor.stringdata0))
        return static_cast<void*>(this);
    return QSensor::qt_metacast(_clname);
}

int QTapSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QTapSensor::returnDoubleTapEventsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
