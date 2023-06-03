/****************************************************************************
** Meta object code from reading C++ file 'qgeocircle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeocircle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeocircle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoCircle_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoCircle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoCircle_t qt_meta_stringdata_QGeoCircle = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGeoCircle"
QT_MOC_LITERAL(1, 11, 9), // "translate"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "degreesLatitude"
QT_MOC_LITERAL(4, 38, 16), // "degreesLongitude"
QT_MOC_LITERAL(5, 55, 10), // "translated"
QT_MOC_LITERAL(6, 66, 12), // "extendCircle"
QT_MOC_LITERAL(7, 79, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(8, 94, 10), // "coordinate"
QT_MOC_LITERAL(9, 105, 8), // "toString"
QT_MOC_LITERAL(10, 114, 6), // "center"
QT_MOC_LITERAL(11, 121, 6) // "radius"

    },
    "QGeoCircle\0translate\0\0degreesLatitude\0"
    "degreesLongitude\0translated\0extendCircle\0"
    "QGeoCoordinate\0coordinate\0toString\0"
    "center\0radius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoCircle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    2,   39,    2, 0x02 /* Public */,
       6,    1,   44,    2, 0x02 /* Public */,
       9,    0,   47,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    0x80000000 | 0, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::QString,

 // properties: name, type, flags
      10, 0x80000000 | 7, 0x0009510b,
      11, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QGeoCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoCircle *_t = reinterpret_cast<QGeoCircle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->translate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: { QGeoCircle _r = _t->translated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGeoCircle*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->extendCircle((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 3: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoCircle *_t = reinterpret_cast<QGeoCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->radius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoCircle *_t = reinterpret_cast<QGeoCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoCircle::staticMetaObject = {
    { &QGeoShape::staticMetaObject, qt_meta_stringdata_QGeoCircle.data,
      qt_meta_data_QGeoCircle,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
