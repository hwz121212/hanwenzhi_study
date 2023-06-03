/****************************************************************************
** Meta object code from reading C++ file 'qgeoshape.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeoshape.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoshape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoShape_t {
    QByteArrayData data[18];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoShape_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoShape_t qt_meta_stringdata_QGeoShape = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QGeoShape"
QT_MOC_LITERAL(1, 10, 8), // "contains"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 35, 10), // "coordinate"
QT_MOC_LITERAL(5, 46, 20), // "boundingGeoRectangle"
QT_MOC_LITERAL(6, 67, 13), // "QGeoRectangle"
QT_MOC_LITERAL(7, 81, 6), // "center"
QT_MOC_LITERAL(8, 88, 11), // "extendShape"
QT_MOC_LITERAL(9, 100, 8), // "toString"
QT_MOC_LITERAL(10, 109, 4), // "type"
QT_MOC_LITERAL(11, 114, 9), // "ShapeType"
QT_MOC_LITERAL(12, 124, 7), // "isValid"
QT_MOC_LITERAL(13, 132, 7), // "isEmpty"
QT_MOC_LITERAL(14, 140, 11), // "UnknownType"
QT_MOC_LITERAL(15, 152, 13), // "RectangleType"
QT_MOC_LITERAL(16, 166, 10), // "CircleType"
QT_MOC_LITERAL(17, 177, 8) // "PathType"

    },
    "QGeoShape\0contains\0\0QGeoCoordinate\0"
    "coordinate\0boundingGeoRectangle\0"
    "QGeoRectangle\0center\0extendShape\0"
    "toString\0type\0ShapeType\0isValid\0isEmpty\0"
    "UnknownType\0RectangleType\0CircleType\0"
    "PathType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoShape[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       1,   57, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x02 /* Public */,
       5,    0,   42,    2, 0x02 /* Public */,
       7,    0,   43,    2, 0x02 /* Public */,
       8,    1,   44,    2, 0x02 /* Public */,
       9,    0,   47,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 6,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QString,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00095009,
      12, QMetaType::Bool, 0x00095001,
      13, QMetaType::Bool, 0x00095001,

 // enums: name, flags, count, data
      11, 0x0,    4,   61,

 // enum data: key, value
      14, uint(QGeoShape::UnknownType),
      15, uint(QGeoShape::RectangleType),
      16, uint(QGeoShape::CircleType),
      17, uint(QGeoShape::PathType),

       0        // eod
};

void QGeoShape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoShape *_t = reinterpret_cast<QGeoShape *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->contains((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QGeoRectangle _r = _t->boundingGeoRectangle();
            if (_a[0]) *reinterpret_cast< QGeoRectangle*>(_a[0]) = std::move(_r); }  break;
        case 2: { QGeoCoordinate _r = _t->center();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->extendShape((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 4: { QString _r = _t->toString();
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
        case 3:
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
        QGeoShape *_t = reinterpret_cast<QGeoShape *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ShapeType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoShape::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QGeoShape.data,
      qt_meta_data_QGeoShape,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
