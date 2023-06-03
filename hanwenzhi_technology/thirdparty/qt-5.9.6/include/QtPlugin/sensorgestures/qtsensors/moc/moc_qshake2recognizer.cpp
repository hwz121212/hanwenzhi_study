/****************************************************************************
** Meta object code from reading C++ file 'qshake2recognizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qshake2recognizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qshake2recognizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QShake2SensorGestureRecognizer_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QShake2SensorGestureRecognizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QShake2SensorGestureRecognizer_t qt_meta_stringdata_QShake2SensorGestureRecognizer = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QShake2SensorGestureRecognizer"
QT_MOC_LITERAL(1, 31, 9), // "shakeLeft"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "shakeRight"
QT_MOC_LITERAL(4, 53, 7), // "shakeUp"
QT_MOC_LITERAL(5, 61, 9), // "shakeDown"
QT_MOC_LITERAL(6, 71, 12), // "accelChanged"
QT_MOC_LITERAL(7, 84, 22), // "QAccelerometerReading*"
QT_MOC_LITERAL(8, 107, 7), // "reading"
QT_MOC_LITERAL(9, 115, 7) // "timeout"

    },
    "QShake2SensorGestureRecognizer\0shakeLeft\0"
    "\0shakeRight\0shakeUp\0shakeDown\0"
    "accelChanged\0QAccelerometerReading*\0"
    "reading\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QShake2SensorGestureRecognizer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void QShake2SensorGestureRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QShake2SensorGestureRecognizer *_t = static_cast<QShake2SensorGestureRecognizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shakeLeft(); break;
        case 1: _t->shakeRight(); break;
        case 2: _t->shakeUp(); break;
        case 3: _t->shakeDown(); break;
        case 4: _t->accelChanged((*reinterpret_cast< QAccelerometerReading*(*)>(_a[1]))); break;
        case 5: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAccelerometerReading* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QShake2SensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QShake2SensorGestureRecognizer::shakeLeft)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QShake2SensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QShake2SensorGestureRecognizer::shakeRight)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QShake2SensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QShake2SensorGestureRecognizer::shakeUp)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QShake2SensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QShake2SensorGestureRecognizer::shakeDown)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QShake2SensorGestureRecognizer::staticMetaObject = {
    { &QSensorGestureRecognizer::staticMetaObject, qt_meta_stringdata_QShake2SensorGestureRecognizer.data,
      qt_meta_data_QShake2SensorGestureRecognizer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QShake2SensorGestureRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QShake2SensorGestureRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QShake2SensorGestureRecognizer.stringdata0))
        return static_cast<void*>(this);
    return QSensorGestureRecognizer::qt_metacast(_clname);
}

int QShake2SensorGestureRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorGestureRecognizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QShake2SensorGestureRecognizer::shakeLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QShake2SensorGestureRecognizer::shakeRight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QShake2SensorGestureRecognizer::shakeUp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QShake2SensorGestureRecognizer::shakeDown()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
