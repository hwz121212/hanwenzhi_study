/****************************************************************************
** Meta object code from reading C++ file 'qt3dquickvaluetypes_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuick/private/qt3dquickvaluetypes_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt3dquickvaluetypes_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DColorValueType_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DColorValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DColorValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DColorValueType = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qt3DCore::Quick::Quick3DColor..."
QT_MOC_LITERAL(1, 39, 8), // "toString"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 1), // "r"
QT_MOC_LITERAL(4, 51, 1), // "g"
QT_MOC_LITERAL(5, 53, 1), // "b"
QT_MOC_LITERAL(6, 55, 1) // "a"

    },
    "Qt3DCore::Quick::Quick3DColorValueType\0"
    "toString\0\0r\0g\0b\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DColorValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00095903,
       4, QMetaType::QReal, 0x00095903,
       5, QMetaType::QReal, 0x00095903,
       6, QMetaType::QReal, 0x00095903,

       0        // eod
};

void Qt3DCore::Quick::Quick3DColorValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DColorValueType *_t = reinterpret_cast<Quick3DColorValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DColorValueType *_t = reinterpret_cast<Quick3DColorValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->r(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->g(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->b(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->a(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DColorValueType *_t = reinterpret_cast<Quick3DColorValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setR(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setG(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setB(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setA(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DColorValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DColorValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DColorValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector2DValueType_t {
    QByteArrayData data[17];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector2DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector2DValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector2DValueType = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Qt3DCore::Quick::Quick3DVecto..."
QT_MOC_LITERAL(1, 42, 8), // "toString"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 10), // "dotProduct"
QT_MOC_LITERAL(4, 63, 3), // "vec"
QT_MOC_LITERAL(5, 67, 5), // "times"
QT_MOC_LITERAL(6, 73, 6), // "scalar"
QT_MOC_LITERAL(7, 80, 4), // "plus"
QT_MOC_LITERAL(8, 85, 5), // "minus"
QT_MOC_LITERAL(9, 91, 10), // "normalized"
QT_MOC_LITERAL(10, 102, 6), // "length"
QT_MOC_LITERAL(11, 109, 10), // "toVector3d"
QT_MOC_LITERAL(12, 120, 10), // "toVector4d"
QT_MOC_LITERAL(13, 131, 11), // "fuzzyEquals"
QT_MOC_LITERAL(14, 143, 7), // "epsilon"
QT_MOC_LITERAL(15, 151, 1), // "x"
QT_MOC_LITERAL(16, 153, 1) // "y"

    },
    "Qt3DCore::Quick::Quick3DVector2DValueType\0"
    "toString\0\0dotProduct\0vec\0times\0scalar\0"
    "plus\0minus\0normalized\0length\0toVector3d\0"
    "toVector4d\0fuzzyEquals\0epsilon\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DVector2DValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x02 /* Public */,
       3,    1,   75,    2, 0x02 /* Public */,
       5,    1,   78,    2, 0x02 /* Public */,
       5,    1,   81,    2, 0x02 /* Public */,
       7,    1,   84,    2, 0x02 /* Public */,
       8,    1,   87,    2, 0x02 /* Public */,
       9,    0,   90,    2, 0x02 /* Public */,
      10,    0,   91,    2, 0x02 /* Public */,
      11,    0,   92,    2, 0x02 /* Public */,
      12,    0,   93,    2, 0x02 /* Public */,
      13,    2,   94,    2, 0x02 /* Public */,
      13,    1,   99,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QReal, QMetaType::QVector2D,    4,
    QMetaType::QVector2D, QMetaType::QVector2D,    4,
    QMetaType::QVector2D, QMetaType::QReal,    6,
    QMetaType::QVector2D, QMetaType::QVector2D,    4,
    QMetaType::QVector2D, QMetaType::QVector2D,    4,
    QMetaType::QVector2D,
    QMetaType::QReal,
    QMetaType::QVector3D,
    QMetaType::QVector4D,
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal,    4,   14,
    QMetaType::Bool, QMetaType::QVector2D,    4,

 // properties: name, type, flags
      15, QMetaType::QReal, 0x00095903,
      16, QMetaType::QReal, 0x00095903,

       0        // eod
};

void Qt3DCore::Quick::Quick3DVector2DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DVector2DValueType *_t = reinterpret_cast<Quick3DVector2DValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { qreal _r = _t->dotProduct((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVector2D _r = _t->times((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector2D _r = _t->times((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVector2D _r = _t->plus((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVector2D _r = _t->minus((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVector2D _r = _t->normalized();
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 7: { qreal _r = _t->length();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVector3D _r = _t->toVector3d();
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVector4D _r = _t->toVector4d();
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DVector2DValueType *_t = reinterpret_cast<Quick3DVector2DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DVector2DValueType *_t = reinterpret_cast<Quick3DVector2DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DVector2DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector2DValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DVector2DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector3DValueType_t {
    QByteArrayData data[20];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector3DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector3DValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector3DValueType = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Qt3DCore::Quick::Quick3DVecto..."
QT_MOC_LITERAL(1, 42, 8), // "toString"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "crossProduct"
QT_MOC_LITERAL(4, 65, 3), // "vec"
QT_MOC_LITERAL(5, 69, 10), // "dotProduct"
QT_MOC_LITERAL(6, 80, 5), // "times"
QT_MOC_LITERAL(7, 86, 1), // "m"
QT_MOC_LITERAL(8, 88, 6), // "scalar"
QT_MOC_LITERAL(9, 95, 4), // "plus"
QT_MOC_LITERAL(10, 100, 5), // "minus"
QT_MOC_LITERAL(11, 106, 10), // "normalized"
QT_MOC_LITERAL(12, 117, 6), // "length"
QT_MOC_LITERAL(13, 124, 10), // "toVector2d"
QT_MOC_LITERAL(14, 135, 10), // "toVector4d"
QT_MOC_LITERAL(15, 146, 11), // "fuzzyEquals"
QT_MOC_LITERAL(16, 158, 7), // "epsilon"
QT_MOC_LITERAL(17, 166, 1), // "x"
QT_MOC_LITERAL(18, 168, 1), // "y"
QT_MOC_LITERAL(19, 170, 1) // "z"

    },
    "Qt3DCore::Quick::Quick3DVector3DValueType\0"
    "toString\0\0crossProduct\0vec\0dotProduct\0"
    "times\0m\0scalar\0plus\0minus\0normalized\0"
    "length\0toVector2d\0toVector4d\0fuzzyEquals\0"
    "epsilon\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DVector3DValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x02 /* Public */,
       3,    1,   85,    2, 0x02 /* Public */,
       5,    1,   88,    2, 0x02 /* Public */,
       6,    1,   91,    2, 0x02 /* Public */,
       6,    1,   94,    2, 0x02 /* Public */,
       6,    1,   97,    2, 0x02 /* Public */,
       9,    1,  100,    2, 0x02 /* Public */,
      10,    1,  103,    2, 0x02 /* Public */,
      11,    0,  106,    2, 0x02 /* Public */,
      12,    0,  107,    2, 0x02 /* Public */,
      13,    0,  108,    2, 0x02 /* Public */,
      14,    0,  109,    2, 0x02 /* Public */,
      15,    2,  110,    2, 0x02 /* Public */,
      15,    1,  115,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QVector3D, QMetaType::QVector3D,    4,
    QMetaType::QReal, QMetaType::QVector3D,    4,
    QMetaType::QVector3D, QMetaType::QMatrix4x4,    7,
    QMetaType::QVector3D, QMetaType::QVector3D,    4,
    QMetaType::QVector3D, QMetaType::QReal,    8,
    QMetaType::QVector3D, QMetaType::QVector3D,    4,
    QMetaType::QVector3D, QMetaType::QVector3D,    4,
    QMetaType::QVector3D,
    QMetaType::QReal,
    QMetaType::QVector2D,
    QMetaType::QVector4D,
    QMetaType::Bool, QMetaType::QVector3D, QMetaType::QReal,    4,   16,
    QMetaType::Bool, QMetaType::QVector3D,    4,

 // properties: name, type, flags
      17, QMetaType::QReal, 0x00095903,
      18, QMetaType::QReal, 0x00095903,
      19, QMetaType::QReal, 0x00095903,

       0        // eod
};

void Qt3DCore::Quick::Quick3DVector3DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DVector3DValueType *_t = reinterpret_cast<Quick3DVector3DValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVector3D _r = _t->crossProduct((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 2: { qreal _r = _t->dotProduct((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector3D _r = _t->times((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVector3D _r = _t->times((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVector3D _r = _t->times((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVector3D _r = _t->plus((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector3D _r = _t->minus((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVector3D _r = _t->normalized();
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 9: { qreal _r = _t->length();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVector2D _r = _t->toVector2d();
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVector4D _r = _t->toVector4d();
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DVector3DValueType *_t = reinterpret_cast<Quick3DVector3DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DVector3DValueType *_t = reinterpret_cast<Quick3DVector3DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DVector3DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector3DValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DVector3DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector4DValueType_t {
    QByteArrayData data[20];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector4DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector4DValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector4DValueType = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Qt3DCore::Quick::Quick3DVecto..."
QT_MOC_LITERAL(1, 42, 8), // "toString"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 10), // "dotProduct"
QT_MOC_LITERAL(4, 63, 3), // "vec"
QT_MOC_LITERAL(5, 67, 5), // "times"
QT_MOC_LITERAL(6, 73, 1), // "m"
QT_MOC_LITERAL(7, 75, 6), // "scalar"
QT_MOC_LITERAL(8, 82, 4), // "plus"
QT_MOC_LITERAL(9, 87, 5), // "minus"
QT_MOC_LITERAL(10, 93, 10), // "normalized"
QT_MOC_LITERAL(11, 104, 6), // "length"
QT_MOC_LITERAL(12, 111, 10), // "toVector2d"
QT_MOC_LITERAL(13, 122, 10), // "toVector3d"
QT_MOC_LITERAL(14, 133, 11), // "fuzzyEquals"
QT_MOC_LITERAL(15, 145, 7), // "epsilon"
QT_MOC_LITERAL(16, 153, 1), // "x"
QT_MOC_LITERAL(17, 155, 1), // "y"
QT_MOC_LITERAL(18, 157, 1), // "z"
QT_MOC_LITERAL(19, 159, 1) // "w"

    },
    "Qt3DCore::Quick::Quick3DVector4DValueType\0"
    "toString\0\0dotProduct\0vec\0times\0m\0"
    "scalar\0plus\0minus\0normalized\0length\0"
    "toVector2d\0toVector3d\0fuzzyEquals\0"
    "epsilon\0x\0y\0z\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DVector4DValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x02 /* Public */,
       3,    1,   80,    2, 0x02 /* Public */,
       5,    1,   83,    2, 0x02 /* Public */,
       5,    1,   86,    2, 0x02 /* Public */,
       5,    1,   89,    2, 0x02 /* Public */,
       8,    1,   92,    2, 0x02 /* Public */,
       9,    1,   95,    2, 0x02 /* Public */,
      10,    0,   98,    2, 0x02 /* Public */,
      11,    0,   99,    2, 0x02 /* Public */,
      12,    0,  100,    2, 0x02 /* Public */,
      13,    0,  101,    2, 0x02 /* Public */,
      14,    2,  102,    2, 0x02 /* Public */,
      14,    1,  107,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QReal, QMetaType::QVector4D,    4,
    QMetaType::QVector4D, QMetaType::QVector4D,    4,
    QMetaType::QVector4D, QMetaType::QMatrix4x4,    6,
    QMetaType::QVector4D, QMetaType::QReal,    7,
    QMetaType::QVector4D, QMetaType::QVector4D,    4,
    QMetaType::QVector4D, QMetaType::QVector4D,    4,
    QMetaType::QVector4D,
    QMetaType::QReal,
    QMetaType::QVector2D,
    QMetaType::QVector3D,
    QMetaType::Bool, QMetaType::QVector4D, QMetaType::QReal,    4,   15,
    QMetaType::Bool, QMetaType::QVector4D,    4,

 // properties: name, type, flags
      16, QMetaType::QReal, 0x00095903,
      17, QMetaType::QReal, 0x00095903,
      18, QMetaType::QReal, 0x00095903,
      19, QMetaType::QReal, 0x00095903,

       0        // eod
};

void Qt3DCore::Quick::Quick3DVector4DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DVector4DValueType *_t = reinterpret_cast<Quick3DVector4DValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { qreal _r = _t->dotProduct((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVector4D _r = _t->times((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector4D _r = _t->times((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVector4D _r = _t->times((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVector4D _r = _t->plus((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVector4D _r = _t->minus((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector4D _r = _t->normalized();
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 8: { qreal _r = _t->length();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVector2D _r = _t->toVector2d();
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVector3D _r = _t->toVector3d();
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector4D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DVector4DValueType *_t = reinterpret_cast<Quick3DVector4DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->w(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DVector4DValueType *_t = reinterpret_cast<Quick3DVector4DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setW(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DVector4DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DVector4DValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DVector4DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DQuaternionValueType_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DQuaternionValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DQuaternionValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DQuaternionValueType = {
    {
QT_MOC_LITERAL(0, 0, 43), // "Qt3DCore::Quick::Quick3DQuate..."
QT_MOC_LITERAL(1, 44, 8), // "toString"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 6), // "scalar"
QT_MOC_LITERAL(4, 61, 1), // "x"
QT_MOC_LITERAL(5, 63, 1), // "y"
QT_MOC_LITERAL(6, 65, 1) // "z"

    },
    "Qt3DCore::Quick::Quick3DQuaternionValueType\0"
    "toString\0\0scalar\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DQuaternionValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00095103,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void Qt3DCore::Quick::Quick3DQuaternionValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DQuaternionValueType *_t = reinterpret_cast<Quick3DQuaternionValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DQuaternionValueType *_t = reinterpret_cast<Quick3DQuaternionValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->scalar(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DQuaternionValueType *_t = reinterpret_cast<Quick3DQuaternionValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScalar(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setZ(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DQuaternionValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DQuaternionValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DQuaternionValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DMatrix4x4ValueType_t {
    QByteArrayData data[50];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DMatrix4x4ValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DMatrix4x4ValueType_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DMatrix4x4ValueType = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Qt3DCore::Quick::Quick3DMatri..."
QT_MOC_LITERAL(1, 43, 8), // "toString"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 9), // "translate"
QT_MOC_LITERAL(4, 63, 1), // "x"
QT_MOC_LITERAL(5, 65, 1), // "y"
QT_MOC_LITERAL(6, 67, 1), // "z"
QT_MOC_LITERAL(7, 69, 1), // "t"
QT_MOC_LITERAL(8, 71, 6), // "rotate"
QT_MOC_LITERAL(9, 78, 5), // "angle"
QT_MOC_LITERAL(10, 84, 4), // "axis"
QT_MOC_LITERAL(11, 89, 5), // "scale"
QT_MOC_LITERAL(12, 95, 1), // "s"
QT_MOC_LITERAL(13, 97, 2), // "sx"
QT_MOC_LITERAL(14, 100, 2), // "sy"
QT_MOC_LITERAL(15, 103, 2), // "sz"
QT_MOC_LITERAL(16, 106, 6), // "lookAt"
QT_MOC_LITERAL(17, 113, 3), // "eye"
QT_MOC_LITERAL(18, 117, 6), // "center"
QT_MOC_LITERAL(19, 124, 2), // "up"
QT_MOC_LITERAL(20, 127, 5), // "times"
QT_MOC_LITERAL(21, 133, 1), // "m"
QT_MOC_LITERAL(22, 135, 3), // "vec"
QT_MOC_LITERAL(23, 139, 6), // "factor"
QT_MOC_LITERAL(24, 146, 4), // "plus"
QT_MOC_LITERAL(25, 151, 5), // "minus"
QT_MOC_LITERAL(26, 157, 3), // "row"
QT_MOC_LITERAL(27, 161, 1), // "n"
QT_MOC_LITERAL(28, 163, 6), // "column"
QT_MOC_LITERAL(29, 170, 11), // "determinant"
QT_MOC_LITERAL(30, 182, 8), // "inverted"
QT_MOC_LITERAL(31, 191, 10), // "transposed"
QT_MOC_LITERAL(32, 202, 11), // "fuzzyEquals"
QT_MOC_LITERAL(33, 214, 7), // "epsilon"
QT_MOC_LITERAL(34, 222, 3), // "m11"
QT_MOC_LITERAL(35, 226, 3), // "m12"
QT_MOC_LITERAL(36, 230, 3), // "m13"
QT_MOC_LITERAL(37, 234, 3), // "m14"
QT_MOC_LITERAL(38, 238, 3), // "m21"
QT_MOC_LITERAL(39, 242, 3), // "m22"
QT_MOC_LITERAL(40, 246, 3), // "m23"
QT_MOC_LITERAL(41, 250, 3), // "m24"
QT_MOC_LITERAL(42, 254, 3), // "m31"
QT_MOC_LITERAL(43, 258, 3), // "m32"
QT_MOC_LITERAL(44, 262, 3), // "m33"
QT_MOC_LITERAL(45, 266, 3), // "m34"
QT_MOC_LITERAL(46, 270, 3), // "m41"
QT_MOC_LITERAL(47, 274, 3), // "m42"
QT_MOC_LITERAL(48, 278, 3), // "m43"
QT_MOC_LITERAL(49, 282, 3) // "m44"

    },
    "Qt3DCore::Quick::Quick3DMatrix4x4ValueType\0"
    "toString\0\0translate\0x\0y\0z\0t\0rotate\0"
    "angle\0axis\0scale\0s\0sx\0sy\0sz\0lookAt\0"
    "eye\0center\0up\0times\0m\0vec\0factor\0plus\0"
    "minus\0row\0n\0column\0determinant\0inverted\0"
    "transposed\0fuzzyEquals\0epsilon\0m11\0"
    "m12\0m13\0m14\0m21\0m22\0m23\0m24\0m31\0m32\0"
    "m33\0m34\0m41\0m42\0m43\0m44"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DMatrix4x4ValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      16,  190, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x02 /* Public */,
       3,    3,  120,    2, 0x02 /* Public */,
       3,    1,  127,    2, 0x02 /* Public */,
       8,    2,  130,    2, 0x02 /* Public */,
      11,    1,  135,    2, 0x02 /* Public */,
      11,    3,  138,    2, 0x02 /* Public */,
      11,    1,  145,    2, 0x02 /* Public */,
      16,    3,  148,    2, 0x02 /* Public */,
      20,    1,  155,    2, 0x02 /* Public */,
      20,    1,  158,    2, 0x02 /* Public */,
      20,    1,  161,    2, 0x02 /* Public */,
      20,    1,  164,    2, 0x02 /* Public */,
      24,    1,  167,    2, 0x02 /* Public */,
      25,    1,  170,    2, 0x02 /* Public */,
      26,    1,  173,    2, 0x02 /* Public */,
      28,    1,  176,    2, 0x02 /* Public */,
      29,    0,  179,    2, 0x02 /* Public */,
      30,    0,  180,    2, 0x02 /* Public */,
      31,    0,  181,    2, 0x02 /* Public */,
      32,    2,  182,    2, 0x02 /* Public */,
      32,    1,  187,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    4,    5,    6,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,    9,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   13,   14,   15,
    QMetaType::Void, QMetaType::QVector3D,   12,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QVector3D,   17,   18,   19,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   21,
    QMetaType::QVector4D, QMetaType::QVector4D,   22,
    QMetaType::QVector3D, QMetaType::QVector3D,   22,
    QMetaType::QMatrix4x4, QMetaType::QReal,   23,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   21,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   21,
    QMetaType::QVector4D, QMetaType::Int,   27,
    QMetaType::QVector4D, QMetaType::Int,   21,
    QMetaType::QReal,
    QMetaType::QMatrix4x4,
    QMetaType::QMatrix4x4,
    QMetaType::Bool, QMetaType::QMatrix4x4, QMetaType::QReal,   21,   33,
    QMetaType::Bool, QMetaType::QMatrix4x4,   21,

 // properties: name, type, flags
      34, QMetaType::QReal, 0x00095903,
      35, QMetaType::QReal, 0x00095903,
      36, QMetaType::QReal, 0x00095903,
      37, QMetaType::QReal, 0x00095903,
      38, QMetaType::QReal, 0x00095903,
      39, QMetaType::QReal, 0x00095903,
      40, QMetaType::QReal, 0x00095903,
      41, QMetaType::QReal, 0x00095903,
      42, QMetaType::QReal, 0x00095903,
      43, QMetaType::QReal, 0x00095903,
      44, QMetaType::QReal, 0x00095903,
      45, QMetaType::QReal, 0x00095903,
      46, QMetaType::QReal, 0x00095903,
      47, QMetaType::QReal, 0x00095903,
      48, QMetaType::QReal, 0x00095903,
      49, QMetaType::QReal, 0x00095903,

       0        // eod
};

void Qt3DCore::Quick::Quick3DMatrix4x4ValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DMatrix4x4ValueType *_t = reinterpret_cast<Quick3DMatrix4x4ValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->translate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 3: _t->rotate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 4: _t->scale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->scale((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 6: _t->scale((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 7: _t->lookAt((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 8: { QMatrix4x4 _r = _t->times((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVector4D _r = _t->times((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVector3D _r = _t->times((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 11: { QMatrix4x4 _r = _t->times((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 12: { QMatrix4x4 _r = _t->plus((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 13: { QMatrix4x4 _r = _t->minus((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVector4D _r = _t->row((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVector4D _r = _t->column((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 16: { qreal _r = _t->determinant();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 17: { QMatrix4x4 _r = _t->inverted();
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 18: { QMatrix4x4 _r = _t->transposed();
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DMatrix4x4ValueType *_t = reinterpret_cast<Quick3DMatrix4x4ValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->m11(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->m12(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->m13(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->m14(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->m21(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->m22(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->m23(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->m24(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->m31(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->m32(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->m33(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->m34(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->m41(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->m42(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->m43(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->m44(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DMatrix4x4ValueType *_t = reinterpret_cast<Quick3DMatrix4x4ValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setM11(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setM12(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setM13(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setM14(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setM21(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setM22(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setM23(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setM24(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setM31(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setM32(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setM33(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setM34(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setM41(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setM42(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setM43(*reinterpret_cast< qreal*>(_v)); break;
        case 15: _t->setM44(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DMatrix4x4ValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DCore__Quick__Quick3DMatrix4x4ValueType.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DMatrix4x4ValueType,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
