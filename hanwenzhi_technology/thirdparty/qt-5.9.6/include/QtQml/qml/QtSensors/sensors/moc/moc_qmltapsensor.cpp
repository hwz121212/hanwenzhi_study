/****************************************************************************
** Meta object code from reading C++ file 'qmltapsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmltapsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmltapsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlTapSensor_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlTapSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlTapSensor_t qt_meta_stringdata_QmlTapSensor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QmlTapSensor"
QT_MOC_LITERAL(1, 13, 28), // "returnDoubleTapEventsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21) // "returnDoubleTapEvents"

    },
    "QmlTapSensor\0returnDoubleTapEventsChanged\0"
    "\0returnDoubleTapEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlTapSensor[] = {

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

void QmlTapSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlTapSensor *_t = static_cast<QmlTapSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnDoubleTapEventsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlTapSensor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlTapSensor::returnDoubleTapEventsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlTapSensor *_t = static_cast<QmlTapSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->returnDoubleTapEvents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QmlTapSensor *_t = static_cast<QmlTapSensor *>(_o);
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

const QMetaObject QmlTapSensor::staticMetaObject = {
    { &QmlSensor::staticMetaObject, qt_meta_stringdata_QmlTapSensor.data,
      qt_meta_data_QmlTapSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlTapSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlTapSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlTapSensor.stringdata0))
        return static_cast<void*>(this);
    return QmlSensor::qt_metacast(_clname);
}

int QmlTapSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmlTapSensor::returnDoubleTapEventsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QmlTapSensorReading_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlTapSensorReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlTapSensorReading_t qt_meta_stringdata_QmlTapSensorReading = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QmlTapSensorReading"
QT_MOC_LITERAL(1, 20, 19), // "tapDirectionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "isDoubleTapChanged"
QT_MOC_LITERAL(4, 60, 12), // "tapDirection"
QT_MOC_LITERAL(5, 73, 25), // "QTapReading::TapDirection"
QT_MOC_LITERAL(6, 99, 9) // "doubleTap"

    },
    "QmlTapSensorReading\0tapDirectionChanged\0"
    "\0isDoubleTapChanged\0tapDirection\0"
    "QTapReading::TapDirection\0doubleTap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlTapSensorReading[] = {

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
       4, 0x80000000 | 5, 0x00495009,
       6, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QmlTapSensorReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlTapSensorReading *_t = static_cast<QmlTapSensorReading *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tapDirectionChanged(); break;
        case 1: _t->isDoubleTapChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlTapSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlTapSensorReading::tapDirectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlTapSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlTapSensorReading::isDoubleTapChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlTapSensorReading *_t = static_cast<QmlTapSensorReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QTapReading::TapDirection*>(_v) = _t->tapDirection(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDoubleTap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QmlTapSensorReading[] = {
        &QTapReading::staticMetaObject,
    nullptr
};

const QMetaObject QmlTapSensorReading::staticMetaObject = {
    { &QmlSensorReading::staticMetaObject, qt_meta_stringdata_QmlTapSensorReading.data,
      qt_meta_data_QmlTapSensorReading,  qt_static_metacall, qt_meta_extradata_QmlTapSensorReading, nullptr}
};


const QMetaObject *QmlTapSensorReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlTapSensorReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlTapSensorReading.stringdata0))
        return static_cast<void*>(this);
    return QmlSensorReading::qt_metacast(_clname);
}

int QmlTapSensorReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmlTapSensorReading::tapDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlTapSensorReading::isDoubleTapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
