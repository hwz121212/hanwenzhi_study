/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeomaneuver_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeomaneuver_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeomaneuver_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoManeuver_t {
    QByteArrayData data[23];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoManeuver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoManeuver_t qt_meta_stringdata_QDeclarativeGeoManeuver = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDeclarativeGeoManeuver"
QT_MOC_LITERAL(1, 24, 5), // "valid"
QT_MOC_LITERAL(2, 30, 8), // "position"
QT_MOC_LITERAL(3, 39, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 54, 15), // "instructionText"
QT_MOC_LITERAL(5, 70, 9), // "direction"
QT_MOC_LITERAL(6, 80, 9), // "Direction"
QT_MOC_LITERAL(7, 90, 21), // "timeToNextInstruction"
QT_MOC_LITERAL(8, 112, 25), // "distanceToNextInstruction"
QT_MOC_LITERAL(9, 138, 8), // "waypoint"
QT_MOC_LITERAL(10, 147, 13), // "waypointValid"
QT_MOC_LITERAL(11, 161, 11), // "NoDirection"
QT_MOC_LITERAL(12, 173, 16), // "DirectionForward"
QT_MOC_LITERAL(13, 190, 18), // "DirectionBearRight"
QT_MOC_LITERAL(14, 209, 19), // "DirectionLightRight"
QT_MOC_LITERAL(15, 229, 14), // "DirectionRight"
QT_MOC_LITERAL(16, 244, 18), // "DirectionHardRight"
QT_MOC_LITERAL(17, 263, 19), // "DirectionUTurnRight"
QT_MOC_LITERAL(18, 283, 18), // "DirectionUTurnLeft"
QT_MOC_LITERAL(19, 302, 17), // "DirectionHardLeft"
QT_MOC_LITERAL(20, 320, 13), // "DirectionLeft"
QT_MOC_LITERAL(21, 334, 18), // "DirectionLightLeft"
QT_MOC_LITERAL(22, 353, 17) // "DirectionBearLeft"

    },
    "QDeclarativeGeoManeuver\0valid\0position\0"
    "QGeoCoordinate\0instructionText\0direction\0"
    "Direction\0timeToNextInstruction\0"
    "distanceToNextInstruction\0waypoint\0"
    "waypointValid\0NoDirection\0DirectionForward\0"
    "DirectionBearRight\0DirectionLightRight\0"
    "DirectionRight\0DirectionHardRight\0"
    "DirectionUTurnRight\0DirectionUTurnLeft\0"
    "DirectionHardLeft\0DirectionLeft\0"
    "DirectionLightLeft\0DirectionBearLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoManeuver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,
       4, QMetaType::QString, 0x00095401,
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QReal, 0x00095401,
       9, 0x80000000 | 3, 0x00095409,
      10, QMetaType::Bool, 0x00095401,

 // enums: name, flags, count, data
       6, 0x0,   12,   42,

 // enum data: key, value
      11, uint(QDeclarativeGeoManeuver::NoDirection),
      12, uint(QDeclarativeGeoManeuver::DirectionForward),
      13, uint(QDeclarativeGeoManeuver::DirectionBearRight),
      14, uint(QDeclarativeGeoManeuver::DirectionLightRight),
      15, uint(QDeclarativeGeoManeuver::DirectionRight),
      16, uint(QDeclarativeGeoManeuver::DirectionHardRight),
      17, uint(QDeclarativeGeoManeuver::DirectionUTurnRight),
      18, uint(QDeclarativeGeoManeuver::DirectionUTurnLeft),
      19, uint(QDeclarativeGeoManeuver::DirectionHardLeft),
      20, uint(QDeclarativeGeoManeuver::DirectionLeft),
      21, uint(QDeclarativeGeoManeuver::DirectionLightLeft),
      22, uint(QDeclarativeGeoManeuver::DirectionBearLeft),

       0        // eod
};

void QDeclarativeGeoManeuver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoManeuver *_t = static_cast<QDeclarativeGeoManeuver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->instructionText(); break;
        case 3: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->timeToNextInstruction(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->distanceToNextInstruction(); break;
        case 6: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->waypoint(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->waypointValid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QDeclarativeGeoManeuver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoManeuver.data,
      qt_meta_data_QDeclarativeGeoManeuver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoManeuver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoManeuver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoManeuver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoManeuver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
