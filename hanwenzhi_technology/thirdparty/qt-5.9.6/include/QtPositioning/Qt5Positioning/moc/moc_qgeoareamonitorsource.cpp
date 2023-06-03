/****************************************************************************
** Meta object code from reading C++ file 'qgeoareamonitorsource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeoareamonitorsource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoareamonitorsource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoAreaMonitorSource_t {
    QByteArrayData data[16];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoAreaMonitorSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoAreaMonitorSource_t qt_meta_stringdata_QGeoAreaMonitorSource = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QGeoAreaMonitorSource"
QT_MOC_LITERAL(1, 22, 11), // "areaEntered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "QGeoAreaMonitorInfo"
QT_MOC_LITERAL(4, 55, 7), // "monitor"
QT_MOC_LITERAL(5, 63, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(6, 80, 6), // "update"
QT_MOC_LITERAL(7, 87, 10), // "areaExited"
QT_MOC_LITERAL(8, 98, 14), // "monitorExpired"
QT_MOC_LITERAL(9, 113, 5), // "error"
QT_MOC_LITERAL(10, 119, 28), // "QGeoAreaMonitorSource::Error"
QT_MOC_LITERAL(11, 148, 5), // "Error"
QT_MOC_LITERAL(12, 154, 11), // "AccessError"
QT_MOC_LITERAL(13, 166, 24), // "InsufficientPositionInfo"
QT_MOC_LITERAL(14, 191, 18), // "UnknownSourceError"
QT_MOC_LITERAL(15, 210, 7) // "NoError"

    },
    "QGeoAreaMonitorSource\0areaEntered\0\0"
    "QGeoAreaMonitorInfo\0monitor\0"
    "QGeoPositionInfo\0update\0areaExited\0"
    "monitorExpired\0error\0QGeoAreaMonitorSource::Error\0"
    "Error\0AccessError\0InsufficientPositionInfo\0"
    "UnknownSourceError\0NoError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoAreaMonitorSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       7,    2,   39,    2, 0x06 /* Public */,
       8,    1,   44,    2, 0x06 /* Public */,
       9,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,    9,

 // enums: name, flags, count, data
      11, 0x0,    4,   54,

 // enum data: key, value
      12, uint(QGeoAreaMonitorSource::AccessError),
      13, uint(QGeoAreaMonitorSource::InsufficientPositionInfo),
      14, uint(QGeoAreaMonitorSource::UnknownSourceError),
      15, uint(QGeoAreaMonitorSource::NoError),

       0        // eod
};

void QGeoAreaMonitorSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoAreaMonitorSource *_t = static_cast<QGeoAreaMonitorSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->areaEntered((*reinterpret_cast< const QGeoAreaMonitorInfo(*)>(_a[1])),(*reinterpret_cast< const QGeoPositionInfo(*)>(_a[2]))); break;
        case 1: _t->areaExited((*reinterpret_cast< const QGeoAreaMonitorInfo(*)>(_a[1])),(*reinterpret_cast< const QGeoPositionInfo(*)>(_a[2]))); break;
        case 2: _t->monitorExpired((*reinterpret_cast< const QGeoAreaMonitorInfo(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< QGeoAreaMonitorSource::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoAreaMonitorSource::*_t)(const QGeoAreaMonitorInfo & , const QGeoPositionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoAreaMonitorSource::areaEntered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoAreaMonitorSource::*_t)(const QGeoAreaMonitorInfo & , const QGeoPositionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoAreaMonitorSource::areaExited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGeoAreaMonitorSource::*_t)(const QGeoAreaMonitorInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoAreaMonitorSource::monitorExpired)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGeoAreaMonitorSource::*_t)(QGeoAreaMonitorSource::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoAreaMonitorSource::error)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QGeoAreaMonitorSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoAreaMonitorSource.data,
      qt_meta_data_QGeoAreaMonitorSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoAreaMonitorSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoAreaMonitorSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoAreaMonitorSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoAreaMonitorSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGeoAreaMonitorSource::areaEntered(const QGeoAreaMonitorInfo & _t1, const QGeoPositionInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoAreaMonitorSource::areaExited(const QGeoAreaMonitorInfo & _t1, const QGeoPositionInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoAreaMonitorSource::monitorExpired(const QGeoAreaMonitorInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGeoAreaMonitorSource::error(QGeoAreaMonitorSource::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
