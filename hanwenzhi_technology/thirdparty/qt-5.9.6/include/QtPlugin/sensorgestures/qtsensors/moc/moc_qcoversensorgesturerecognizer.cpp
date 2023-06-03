/****************************************************************************
** Meta object code from reading C++ file 'qcoversensorgesturerecognizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcoversensorgesturerecognizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcoversensorgesturerecognizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCoverSensorGestureRecognizer_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCoverSensorGestureRecognizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCoverSensorGestureRecognizer_t qt_meta_stringdata_QCoverSensorGestureRecognizer = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QCoverSensorGestureRecognizer"
QT_MOC_LITERAL(1, 30, 5), // "cover"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "proximityChanged"
QT_MOC_LITERAL(4, 54, 18), // "QProximityReading*"
QT_MOC_LITERAL(5, 73, 7), // "reading"
QT_MOC_LITERAL(6, 81, 25), // "orientationReadingChanged"
QT_MOC_LITERAL(7, 107, 20), // "QOrientationReading*"
QT_MOC_LITERAL(8, 128, 7) // "timeout"

    },
    "QCoverSensorGestureRecognizer\0cover\0"
    "\0proximityChanged\0QProximityReading*\0"
    "reading\0orientationReadingChanged\0"
    "QOrientationReading*\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCoverSensorGestureRecognizer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,

       0        // eod
};

void QCoverSensorGestureRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCoverSensorGestureRecognizer *_t = static_cast<QCoverSensorGestureRecognizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cover(); break;
        case 1: _t->proximityChanged((*reinterpret_cast< QProximityReading*(*)>(_a[1]))); break;
        case 2: _t->orientationReadingChanged((*reinterpret_cast< QOrientationReading*(*)>(_a[1]))); break;
        case 3: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProximityReading* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOrientationReading* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCoverSensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCoverSensorGestureRecognizer::cover)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QCoverSensorGestureRecognizer::staticMetaObject = {
    { &QSensorGestureRecognizer::staticMetaObject, qt_meta_stringdata_QCoverSensorGestureRecognizer.data,
      qt_meta_data_QCoverSensorGestureRecognizer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCoverSensorGestureRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCoverSensorGestureRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCoverSensorGestureRecognizer.stringdata0))
        return static_cast<void*>(this);
    return QSensorGestureRecognizer::qt_metacast(_clname);
}

int QCoverSensorGestureRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorGestureRecognizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCoverSensorGestureRecognizer::cover()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
