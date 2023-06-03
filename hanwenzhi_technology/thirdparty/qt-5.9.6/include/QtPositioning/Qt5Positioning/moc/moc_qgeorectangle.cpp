/****************************************************************************
** Meta object code from reading C++ file 'qgeorectangle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeorectangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeorectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoRectangle_t {
    QByteArrayData data[20];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoRectangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoRectangle_t qt_meta_stringdata_QGeoRectangle = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGeoRectangle"
QT_MOC_LITERAL(1, 14, 10), // "intersects"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "rectangle"
QT_MOC_LITERAL(4, 36, 9), // "translate"
QT_MOC_LITERAL(5, 46, 15), // "degreesLatitude"
QT_MOC_LITERAL(6, 62, 16), // "degreesLongitude"
QT_MOC_LITERAL(7, 79, 10), // "translated"
QT_MOC_LITERAL(8, 90, 15), // "extendRectangle"
QT_MOC_LITERAL(9, 106, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(10, 121, 10), // "coordinate"
QT_MOC_LITERAL(11, 132, 6), // "united"
QT_MOC_LITERAL(12, 139, 8), // "toString"
QT_MOC_LITERAL(13, 148, 10), // "bottomLeft"
QT_MOC_LITERAL(14, 159, 11), // "bottomRight"
QT_MOC_LITERAL(15, 171, 7), // "topLeft"
QT_MOC_LITERAL(16, 179, 8), // "topRight"
QT_MOC_LITERAL(17, 188, 6), // "center"
QT_MOC_LITERAL(18, 195, 6), // "height"
QT_MOC_LITERAL(19, 202, 5) // "width"

    },
    "QGeoRectangle\0intersects\0\0rectangle\0"
    "translate\0degreesLatitude\0degreesLongitude\0"
    "translated\0extendRectangle\0QGeoCoordinate\0"
    "coordinate\0united\0toString\0bottomLeft\0"
    "bottomRight\0topLeft\0topRight\0center\0"
    "height\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoRectangle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    2,   47,    2, 0x02 /* Public */,
       7,    2,   52,    2, 0x02 /* Public */,
       8,    1,   57,    2, 0x02 /* Public */,
      11,    1,   60,    2, 0x02 /* Public */,
      12,    0,   63,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 0,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,
    0x80000000 | 0, QMetaType::Double, QMetaType::Double,    5,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 0, 0x80000000 | 0,    3,
    QMetaType::QString,

 // properties: name, type, flags
      13, 0x80000000 | 9, 0x0009510b,
      14, 0x80000000 | 9, 0x0009510b,
      15, 0x80000000 | 9, 0x0009510b,
      16, 0x80000000 | 9, 0x0009510b,
      17, 0x80000000 | 9, 0x0009510b,
      18, QMetaType::Double, 0x00095103,
      19, QMetaType::Double, 0x00095103,

       0        // eod
};

void QGeoRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoRectangle *_t = reinterpret_cast<QGeoRectangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->intersects((*reinterpret_cast< const QGeoRectangle(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->translate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: { QGeoRectangle _r = _t->translated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGeoRectangle*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->extendRectangle((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 4: { QGeoRectangle _r = _t->united((*reinterpret_cast< const QGeoRectangle(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoRectangle*>(_a[0]) = std::move(_r); }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRectangle >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRectangle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoRectangle *_t = reinterpret_cast<QGeoRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->bottomLeft(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->bottomRight(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->topLeft(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->topRight(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->height(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->width(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoRectangle *_t = reinterpret_cast<QGeoRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBottomLeft(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setBottomRight(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 2: _t->setTopLeft(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 3: _t->setTopRight(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 4: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 5: _t->setHeight(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoRectangle::staticMetaObject = {
    { &QGeoShape::staticMetaObject, qt_meta_stringdata_QGeoRectangle.data,
      qt_meta_data_QGeoRectangle,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
