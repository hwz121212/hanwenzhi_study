/****************************************************************************
** Meta object code from reading C++ file 'qgeosatelliteinfosource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeosatelliteinfosource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeosatelliteinfosource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoSatelliteInfoSource_t {
    QByteArrayData data[20];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoSatelliteInfoSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoSatelliteInfoSource_t qt_meta_stringdata_QGeoSatelliteInfoSource = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGeoSatelliteInfoSource"
QT_MOC_LITERAL(1, 24, 23), // "satellitesInViewUpdated"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24), // "QList<QGeoSatelliteInfo>"
QT_MOC_LITERAL(4, 74, 10), // "satellites"
QT_MOC_LITERAL(5, 85, 22), // "satellitesInUseUpdated"
QT_MOC_LITERAL(6, 108, 14), // "requestTimeout"
QT_MOC_LITERAL(7, 123, 5), // "error"
QT_MOC_LITERAL(8, 129, 30), // "QGeoSatelliteInfoSource::Error"
QT_MOC_LITERAL(9, 160, 12), // "startUpdates"
QT_MOC_LITERAL(10, 173, 11), // "stopUpdates"
QT_MOC_LITERAL(11, 185, 13), // "requestUpdate"
QT_MOC_LITERAL(12, 199, 7), // "timeout"
QT_MOC_LITERAL(13, 207, 14), // "updateInterval"
QT_MOC_LITERAL(14, 222, 21), // "minimumUpdateInterval"
QT_MOC_LITERAL(15, 244, 5), // "Error"
QT_MOC_LITERAL(16, 250, 11), // "AccessError"
QT_MOC_LITERAL(17, 262, 11), // "ClosedError"
QT_MOC_LITERAL(18, 274, 7), // "NoError"
QT_MOC_LITERAL(19, 282, 18) // "UnknownSourceError"

    },
    "QGeoSatelliteInfoSource\0satellitesInViewUpdated\0"
    "\0QList<QGeoSatelliteInfo>\0satellites\0"
    "satellitesInUseUpdated\0requestTimeout\0"
    "error\0QGeoSatelliteInfoSource::Error\0"
    "startUpdates\0stopUpdates\0requestUpdate\0"
    "timeout\0updateInterval\0minimumUpdateInterval\0"
    "Error\0AccessError\0ClosedError\0NoError\0"
    "UnknownSourceError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoSatelliteInfoSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   70, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095001,

 // enums: name, flags, count, data
      15, 0x0,    4,   80,

 // enum data: key, value
      16, uint(QGeoSatelliteInfoSource::AccessError),
      17, uint(QGeoSatelliteInfoSource::ClosedError),
      18, uint(QGeoSatelliteInfoSource::NoError),
      19, uint(QGeoSatelliteInfoSource::UnknownSourceError),

       0        // eod
};

void QGeoSatelliteInfoSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoSatelliteInfoSource *_t = static_cast<QGeoSatelliteInfoSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->satellitesInViewUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 1: _t->satellitesInUseUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 2: _t->requestTimeout(); break;
        case 3: _t->error((*reinterpret_cast< QGeoSatelliteInfoSource::Error(*)>(_a[1]))); break;
        case 4: _t->startUpdates(); break;
        case 5: _t->stopUpdates(); break;
        case 6: _t->requestUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->requestUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoSatelliteInfoSource::*_t)(const QList<QGeoSatelliteInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoSatelliteInfoSource::satellitesInViewUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoSatelliteInfoSource::*_t)(const QList<QGeoSatelliteInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoSatelliteInfoSource::satellitesInUseUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGeoSatelliteInfoSource::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoSatelliteInfoSource::requestTimeout)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGeoSatelliteInfoSource::*_t)(QGeoSatelliteInfoSource::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoSatelliteInfoSource::error)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoSatelliteInfoSource *_t = static_cast<QGeoSatelliteInfoSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->updateInterval(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minimumUpdateInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoSatelliteInfoSource *_t = static_cast<QGeoSatelliteInfoSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUpdateInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoSatelliteInfoSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoSatelliteInfoSource.data,
      qt_meta_data_QGeoSatelliteInfoSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoSatelliteInfoSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoSatelliteInfoSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoSatelliteInfoSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoSatelliteInfoSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QGeoSatelliteInfoSource::satellitesInViewUpdated(const QList<QGeoSatelliteInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoSatelliteInfoSource::satellitesInUseUpdated(const QList<QGeoSatelliteInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoSatelliteInfoSource::requestTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGeoSatelliteInfoSource::error(QGeoSatelliteInfoSource::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
