/****************************************************************************
** Meta object code from reading C++ file 'qgeocoordinate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeocoordinate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeocoordinate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoCoordinate_t {
    QByteArrayData data[16];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoCoordinate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoCoordinate_t qt_meta_stringdata_QGeoCoordinate = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(1, 15, 10), // "distanceTo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "other"
QT_MOC_LITERAL(4, 33, 9), // "azimuthTo"
QT_MOC_LITERAL(5, 43, 20), // "atDistanceAndAzimuth"
QT_MOC_LITERAL(6, 64, 8), // "distance"
QT_MOC_LITERAL(7, 73, 7), // "azimuth"
QT_MOC_LITERAL(8, 81, 10), // "distanceUp"
QT_MOC_LITERAL(9, 92, 8), // "toString"
QT_MOC_LITERAL(10, 101, 16), // "CoordinateFormat"
QT_MOC_LITERAL(11, 118, 6), // "format"
QT_MOC_LITERAL(12, 125, 8), // "latitude"
QT_MOC_LITERAL(13, 134, 9), // "longitude"
QT_MOC_LITERAL(14, 144, 8), // "altitude"
QT_MOC_LITERAL(15, 153, 7) // "isValid"

    },
    "QGeoCoordinate\0distanceTo\0\0other\0"
    "azimuthTo\0atDistanceAndAzimuth\0distance\0"
    "azimuth\0distanceUp\0toString\0"
    "CoordinateFormat\0format\0latitude\0"
    "longitude\0altitude\0isValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoCoordinate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    1,   47,    2, 0x02 /* Public */,
       5,    3,   50,    2, 0x02 /* Public */,
       5,    2,   57,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   62,    2, 0x02 /* Public */,
       9,    0,   65,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::QReal, 0x80000000 | 0,    3,
    QMetaType::QReal, 0x80000000 | 0,    3,
    0x80000000 | 0, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    6,    7,    8,
    0x80000000 | 0, QMetaType::QReal, QMetaType::QReal,    6,    7,
    QMetaType::QString, 0x80000000 | 10,   11,
    QMetaType::QString,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QGeoCoordinate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoCoordinate *_t = reinterpret_cast<QGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { qreal _r = _t->distanceTo((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 1: { qreal _r = _t->azimuthTo((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: { QGeoCoordinate _r = _t->atDistanceAndAzimuth((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 3: { QGeoCoordinate _r = _t->atDistanceAndAzimuth((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->toString((*reinterpret_cast< CoordinateFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoCoordinate *_t = reinterpret_cast<QGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->latitude(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->longitude(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoCoordinate *_t = reinterpret_cast<QGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLatitude(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setLongitude(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setAltitude(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoCoordinate::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QGeoCoordinate.data,
      qt_meta_data_QGeoCoordinate,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
