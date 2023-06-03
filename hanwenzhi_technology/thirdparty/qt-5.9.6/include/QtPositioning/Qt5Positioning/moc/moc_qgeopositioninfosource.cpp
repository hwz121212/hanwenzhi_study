/****************************************************************************
** Meta object code from reading C++ file 'qgeopositioninfosource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeopositioninfosource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeopositioninfosource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoPositionInfoSource_t {
    QByteArrayData data[20];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoPositionInfoSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoPositionInfoSource_t qt_meta_stringdata_QGeoPositionInfoSource = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QGeoPositionInfoSource"
QT_MOC_LITERAL(1, 23, 15), // "positionUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(4, 57, 6), // "update"
QT_MOC_LITERAL(5, 64, 13), // "updateTimeout"
QT_MOC_LITERAL(6, 78, 5), // "error"
QT_MOC_LITERAL(7, 84, 29), // "QGeoPositionInfoSource::Error"
QT_MOC_LITERAL(8, 114, 12), // "startUpdates"
QT_MOC_LITERAL(9, 127, 11), // "stopUpdates"
QT_MOC_LITERAL(10, 139, 13), // "requestUpdate"
QT_MOC_LITERAL(11, 153, 7), // "timeout"
QT_MOC_LITERAL(12, 161, 14), // "updateInterval"
QT_MOC_LITERAL(13, 176, 21), // "minimumUpdateInterval"
QT_MOC_LITERAL(14, 198, 10), // "sourceName"
QT_MOC_LITERAL(15, 209, 5), // "Error"
QT_MOC_LITERAL(16, 215, 11), // "AccessError"
QT_MOC_LITERAL(17, 227, 11), // "ClosedError"
QT_MOC_LITERAL(18, 239, 18), // "UnknownSourceError"
QT_MOC_LITERAL(19, 258, 7) // "NoError"

    },
    "QGeoPositionInfoSource\0positionUpdated\0"
    "\0QGeoPositionInfo\0update\0updateTimeout\0"
    "error\0QGeoPositionInfoSource::Error\0"
    "startUpdates\0stopUpdates\0requestUpdate\0"
    "timeout\0updateInterval\0minimumUpdateInterval\0"
    "sourceName\0Error\0AccessError\0ClosedError\0"
    "UnknownSourceError\0NoError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoPositionInfoSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       1,   71, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    1,   58,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Int, 0x00095001,
      14, QMetaType::QString, 0x00095001,

 // enums: name, flags, count, data
      15, 0x0,    4,   75,

 // enum data: key, value
      16, uint(QGeoPositionInfoSource::AccessError),
      17, uint(QGeoPositionInfoSource::ClosedError),
      18, uint(QGeoPositionInfoSource::UnknownSourceError),
      19, uint(QGeoPositionInfoSource::NoError),

       0        // eod
};

void QGeoPositionInfoSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoPositionInfoSource *_t = static_cast<QGeoPositionInfoSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 1: _t->updateTimeout(); break;
        case 2: _t->error((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        case 3: _t->startUpdates(); break;
        case 4: _t->stopUpdates(); break;
        case 5: _t->requestUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->requestUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoPositionInfoSource::*_t)(const QGeoPositionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoPositionInfoSource::positionUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoPositionInfoSource::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoPositionInfoSource::updateTimeout)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGeoPositionInfoSource::*_t)(QGeoPositionInfoSource::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoPositionInfoSource::error)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoPositionInfoSource *_t = static_cast<QGeoPositionInfoSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->updateInterval(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minimumUpdateInterval(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sourceName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoPositionInfoSource *_t = static_cast<QGeoPositionInfoSource *>(_o);
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

const QMetaObject QGeoPositionInfoSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoPositionInfoSource.data,
      qt_meta_data_QGeoPositionInfoSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoPositionInfoSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoPositionInfoSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoPositionInfoSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoPositionInfoSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoPositionInfoSource::positionUpdated(const QGeoPositionInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoPositionInfoSource::updateTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGeoPositionInfoSource::error(QGeoPositionInfoSource::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
