/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeolocation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtPositioning/private/qdeclarativegeolocation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeolocation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoLocation_t {
    QByteArrayData data[13];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoLocation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoLocation_t qt_meta_stringdata_QDeclarativeGeoLocation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDeclarativeGeoLocation"
QT_MOC_LITERAL(1, 24, 14), // "addressChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "coordinateChanged"
QT_MOC_LITERAL(4, 58, 18), // "boundingBoxChanged"
QT_MOC_LITERAL(5, 77, 8), // "location"
QT_MOC_LITERAL(6, 86, 12), // "QGeoLocation"
QT_MOC_LITERAL(7, 99, 7), // "address"
QT_MOC_LITERAL(8, 107, 23), // "QDeclarativeGeoAddress*"
QT_MOC_LITERAL(9, 131, 10), // "coordinate"
QT_MOC_LITERAL(10, 142, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(11, 157, 11), // "boundingBox"
QT_MOC_LITERAL(12, 169, 13) // "QGeoRectangle"

    },
    "QDeclarativeGeoLocation\0addressChanged\0"
    "\0coordinateChanged\0boundingBoxChanged\0"
    "location\0QGeoLocation\0address\0"
    "QDeclarativeGeoAddress*\0coordinate\0"
    "QGeoCoordinate\0boundingBox\0QGeoRectangle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoLocation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x0049510b,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void QDeclarativeGeoLocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoLocation *_t = static_cast<QDeclarativeGeoLocation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressChanged(); break;
        case 1: _t->coordinateChanged(); break;
        case 2: _t->boundingBoxChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoLocation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoLocation::addressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoLocation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoLocation::coordinateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoLocation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoLocation::boundingBoxChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeGeoAddress* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoLocation >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRectangle >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoLocation *_t = static_cast<QDeclarativeGeoLocation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoLocation*>(_v) = _t->location(); break;
        case 1: *reinterpret_cast< QDeclarativeGeoAddress**>(_v) = _t->address(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< QGeoRectangle*>(_v) = _t->boundingBox(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoLocation *_t = static_cast<QDeclarativeGeoLocation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocation(*reinterpret_cast< QGeoLocation*>(_v)); break;
        case 1: _t->setAddress(*reinterpret_cast< QDeclarativeGeoAddress**>(_v)); break;
        case 2: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 3: _t->setBoundingBox(*reinterpret_cast< QGeoRectangle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoLocation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoLocation.data,
      qt_meta_data_QDeclarativeGeoLocation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoLocation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoLocation::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeGeoLocation::coordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeGeoLocation::boundingBoxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
