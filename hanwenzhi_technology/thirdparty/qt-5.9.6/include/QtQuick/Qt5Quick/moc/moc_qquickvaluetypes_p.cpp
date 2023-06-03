/****************************************************************************
** Meta object code from reading C++ file 'qquickvaluetypes_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickvaluetypes_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickvaluetypes_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickColorValueType_t {
    QByteArrayData data[13];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickColorValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickColorValueType_t qt_meta_stringdata_QQuickColorValueType = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickColorValueType"
QT_MOC_LITERAL(1, 21, 8), // "toString"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "r"
QT_MOC_LITERAL(4, 33, 1), // "g"
QT_MOC_LITERAL(5, 35, 1), // "b"
QT_MOC_LITERAL(6, 37, 1), // "a"
QT_MOC_LITERAL(7, 39, 6), // "hsvHue"
QT_MOC_LITERAL(8, 46, 13), // "hsvSaturation"
QT_MOC_LITERAL(9, 60, 8), // "hsvValue"
QT_MOC_LITERAL(10, 69, 6), // "hslHue"
QT_MOC_LITERAL(11, 76, 13), // "hslSaturation"
QT_MOC_LITERAL(12, 90, 12) // "hslLightness"

    },
    "QQuickColorValueType\0toString\0\0r\0g\0b\0"
    "a\0hsvHue\0hsvSaturation\0hsvValue\0hslHue\0"
    "hslSaturation\0hslLightness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickColorValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   20, // properties
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
       7, QMetaType::QReal, 0x00095903,
       8, QMetaType::QReal, 0x00095903,
       9, QMetaType::QReal, 0x00095903,
      10, QMetaType::QReal, 0x00095903,
      11, QMetaType::QReal, 0x00095903,
      12, QMetaType::QReal, 0x00095903,

       0        // eod
};

void QQuickColorValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickColorValueType *_t = reinterpret_cast<QQuickColorValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickColorValueType *_t = reinterpret_cast<QQuickColorValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->r(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->g(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->b(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->a(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->hsvHue(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->hsvSaturation(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->hsvValue(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->hslHue(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->hslSaturation(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->hslLightness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickColorValueType *_t = reinterpret_cast<QQuickColorValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setR(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setG(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setB(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setA(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setHsvHue(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setHsvSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setHsvValue(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setHslHue(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setHslSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setHslLightness(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickColorValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickColorValueType.data,
      qt_meta_data_QQuickColorValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickVector2DValueType_t {
    QByteArrayData data[17];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickVector2DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickVector2DValueType_t qt_meta_stringdata_QQuickVector2DValueType = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickVector2DValueType"
QT_MOC_LITERAL(1, 24, 8), // "toString"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "dotProduct"
QT_MOC_LITERAL(4, 45, 3), // "vec"
QT_MOC_LITERAL(5, 49, 5), // "times"
QT_MOC_LITERAL(6, 55, 6), // "scalar"
QT_MOC_LITERAL(7, 62, 4), // "plus"
QT_MOC_LITERAL(8, 67, 5), // "minus"
QT_MOC_LITERAL(9, 73, 10), // "normalized"
QT_MOC_LITERAL(10, 84, 6), // "length"
QT_MOC_LITERAL(11, 91, 10), // "toVector3d"
QT_MOC_LITERAL(12, 102, 10), // "toVector4d"
QT_MOC_LITERAL(13, 113, 11), // "fuzzyEquals"
QT_MOC_LITERAL(14, 125, 7), // "epsilon"
QT_MOC_LITERAL(15, 133, 1), // "x"
QT_MOC_LITERAL(16, 135, 1) // "y"

    },
    "QQuickVector2DValueType\0toString\0\0"
    "dotProduct\0vec\0times\0scalar\0plus\0minus\0"
    "normalized\0length\0toVector3d\0toVector4d\0"
    "fuzzyEquals\0epsilon\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickVector2DValueType[] = {

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

void QQuickVector2DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickVector2DValueType *_t = reinterpret_cast<QQuickVector2DValueType *>(_o);
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
        QQuickVector2DValueType *_t = reinterpret_cast<QQuickVector2DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickVector2DValueType *_t = reinterpret_cast<QQuickVector2DValueType *>(_o);
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

const QMetaObject QQuickVector2DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickVector2DValueType.data,
      qt_meta_data_QQuickVector2DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickVector3DValueType_t {
    QByteArrayData data[20];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickVector3DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickVector3DValueType_t qt_meta_stringdata_QQuickVector3DValueType = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickVector3DValueType"
QT_MOC_LITERAL(1, 24, 8), // "toString"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "crossProduct"
QT_MOC_LITERAL(4, 47, 3), // "vec"
QT_MOC_LITERAL(5, 51, 10), // "dotProduct"
QT_MOC_LITERAL(6, 62, 5), // "times"
QT_MOC_LITERAL(7, 68, 1), // "m"
QT_MOC_LITERAL(8, 70, 6), // "scalar"
QT_MOC_LITERAL(9, 77, 4), // "plus"
QT_MOC_LITERAL(10, 82, 5), // "minus"
QT_MOC_LITERAL(11, 88, 10), // "normalized"
QT_MOC_LITERAL(12, 99, 6), // "length"
QT_MOC_LITERAL(13, 106, 10), // "toVector2d"
QT_MOC_LITERAL(14, 117, 10), // "toVector4d"
QT_MOC_LITERAL(15, 128, 11), // "fuzzyEquals"
QT_MOC_LITERAL(16, 140, 7), // "epsilon"
QT_MOC_LITERAL(17, 148, 1), // "x"
QT_MOC_LITERAL(18, 150, 1), // "y"
QT_MOC_LITERAL(19, 152, 1) // "z"

    },
    "QQuickVector3DValueType\0toString\0\0"
    "crossProduct\0vec\0dotProduct\0times\0m\0"
    "scalar\0plus\0minus\0normalized\0length\0"
    "toVector2d\0toVector4d\0fuzzyEquals\0"
    "epsilon\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickVector3DValueType[] = {

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

void QQuickVector3DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickVector3DValueType *_t = reinterpret_cast<QQuickVector3DValueType *>(_o);
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
        QQuickVector3DValueType *_t = reinterpret_cast<QQuickVector3DValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickVector3DValueType *_t = reinterpret_cast<QQuickVector3DValueType *>(_o);
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

const QMetaObject QQuickVector3DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickVector3DValueType.data,
      qt_meta_data_QQuickVector3DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickVector4DValueType_t {
    QByteArrayData data[20];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickVector4DValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickVector4DValueType_t qt_meta_stringdata_QQuickVector4DValueType = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickVector4DValueType"
QT_MOC_LITERAL(1, 24, 8), // "toString"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "dotProduct"
QT_MOC_LITERAL(4, 45, 3), // "vec"
QT_MOC_LITERAL(5, 49, 5), // "times"
QT_MOC_LITERAL(6, 55, 1), // "m"
QT_MOC_LITERAL(7, 57, 6), // "scalar"
QT_MOC_LITERAL(8, 64, 4), // "plus"
QT_MOC_LITERAL(9, 69, 5), // "minus"
QT_MOC_LITERAL(10, 75, 10), // "normalized"
QT_MOC_LITERAL(11, 86, 6), // "length"
QT_MOC_LITERAL(12, 93, 10), // "toVector2d"
QT_MOC_LITERAL(13, 104, 10), // "toVector3d"
QT_MOC_LITERAL(14, 115, 11), // "fuzzyEquals"
QT_MOC_LITERAL(15, 127, 7), // "epsilon"
QT_MOC_LITERAL(16, 135, 1), // "x"
QT_MOC_LITERAL(17, 137, 1), // "y"
QT_MOC_LITERAL(18, 139, 1), // "z"
QT_MOC_LITERAL(19, 141, 1) // "w"

    },
    "QQuickVector4DValueType\0toString\0\0"
    "dotProduct\0vec\0times\0m\0scalar\0plus\0"
    "minus\0normalized\0length\0toVector2d\0"
    "toVector3d\0fuzzyEquals\0epsilon\0x\0y\0z\0"
    "w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickVector4DValueType[] = {

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

void QQuickVector4DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickVector4DValueType *_t = reinterpret_cast<QQuickVector4DValueType *>(_o);
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
        QQuickVector4DValueType *_t = reinterpret_cast<QQuickVector4DValueType *>(_o);
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
        QQuickVector4DValueType *_t = reinterpret_cast<QQuickVector4DValueType *>(_o);
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

const QMetaObject QQuickVector4DValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickVector4DValueType.data,
      qt_meta_data_QQuickVector4DValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickQuaternionValueType_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickQuaternionValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickQuaternionValueType_t qt_meta_stringdata_QQuickQuaternionValueType = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickQuaternionValueType"
QT_MOC_LITERAL(1, 26, 8), // "toString"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "scalar"
QT_MOC_LITERAL(4, 43, 1), // "x"
QT_MOC_LITERAL(5, 45, 1), // "y"
QT_MOC_LITERAL(6, 47, 1) // "z"

    },
    "QQuickQuaternionValueType\0toString\0\0"
    "scalar\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickQuaternionValueType[] = {

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

void QQuickQuaternionValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickQuaternionValueType *_t = reinterpret_cast<QQuickQuaternionValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickQuaternionValueType *_t = reinterpret_cast<QQuickQuaternionValueType *>(_o);
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
        QQuickQuaternionValueType *_t = reinterpret_cast<QQuickQuaternionValueType *>(_o);
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

const QMetaObject QQuickQuaternionValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickQuaternionValueType.data,
      qt_meta_data_QQuickQuaternionValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickMatrix4x4ValueType_t {
    QByteArrayData data[46];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMatrix4x4ValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMatrix4x4ValueType_t qt_meta_stringdata_QQuickMatrix4x4ValueType = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickMatrix4x4ValueType"
QT_MOC_LITERAL(1, 25, 9), // "translate"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "t"
QT_MOC_LITERAL(4, 38, 6), // "rotate"
QT_MOC_LITERAL(5, 45, 5), // "angle"
QT_MOC_LITERAL(6, 51, 4), // "axis"
QT_MOC_LITERAL(7, 56, 5), // "scale"
QT_MOC_LITERAL(8, 62, 1), // "s"
QT_MOC_LITERAL(9, 64, 2), // "sx"
QT_MOC_LITERAL(10, 67, 2), // "sy"
QT_MOC_LITERAL(11, 70, 2), // "sz"
QT_MOC_LITERAL(12, 73, 6), // "lookAt"
QT_MOC_LITERAL(13, 80, 3), // "eye"
QT_MOC_LITERAL(14, 84, 6), // "center"
QT_MOC_LITERAL(15, 91, 2), // "up"
QT_MOC_LITERAL(16, 94, 5), // "times"
QT_MOC_LITERAL(17, 100, 1), // "m"
QT_MOC_LITERAL(18, 102, 3), // "vec"
QT_MOC_LITERAL(19, 106, 6), // "factor"
QT_MOC_LITERAL(20, 113, 4), // "plus"
QT_MOC_LITERAL(21, 118, 5), // "minus"
QT_MOC_LITERAL(22, 124, 3), // "row"
QT_MOC_LITERAL(23, 128, 1), // "n"
QT_MOC_LITERAL(24, 130, 6), // "column"
QT_MOC_LITERAL(25, 137, 11), // "determinant"
QT_MOC_LITERAL(26, 149, 8), // "inverted"
QT_MOC_LITERAL(27, 158, 10), // "transposed"
QT_MOC_LITERAL(28, 169, 11), // "fuzzyEquals"
QT_MOC_LITERAL(29, 181, 7), // "epsilon"
QT_MOC_LITERAL(30, 189, 3), // "m11"
QT_MOC_LITERAL(31, 193, 3), // "m12"
QT_MOC_LITERAL(32, 197, 3), // "m13"
QT_MOC_LITERAL(33, 201, 3), // "m14"
QT_MOC_LITERAL(34, 205, 3), // "m21"
QT_MOC_LITERAL(35, 209, 3), // "m22"
QT_MOC_LITERAL(36, 213, 3), // "m23"
QT_MOC_LITERAL(37, 217, 3), // "m24"
QT_MOC_LITERAL(38, 221, 3), // "m31"
QT_MOC_LITERAL(39, 225, 3), // "m32"
QT_MOC_LITERAL(40, 229, 3), // "m33"
QT_MOC_LITERAL(41, 233, 3), // "m34"
QT_MOC_LITERAL(42, 237, 3), // "m41"
QT_MOC_LITERAL(43, 241, 3), // "m42"
QT_MOC_LITERAL(44, 245, 3), // "m43"
QT_MOC_LITERAL(45, 249, 3) // "m44"

    },
    "QQuickMatrix4x4ValueType\0translate\0\0"
    "t\0rotate\0angle\0axis\0scale\0s\0sx\0sy\0sz\0"
    "lookAt\0eye\0center\0up\0times\0m\0vec\0"
    "factor\0plus\0minus\0row\0n\0column\0"
    "determinant\0inverted\0transposed\0"
    "fuzzyEquals\0epsilon\0m11\0m12\0m13\0m14\0"
    "m21\0m22\0m23\0m24\0m31\0m32\0m33\0m34\0m41\0"
    "m42\0m43\0m44"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMatrix4x4ValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      16,  172, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x02 /* Public */,
       4,    2,  112,    2, 0x02 /* Public */,
       7,    1,  117,    2, 0x02 /* Public */,
       7,    3,  120,    2, 0x02 /* Public */,
       7,    1,  127,    2, 0x02 /* Public */,
      12,    3,  130,    2, 0x02 /* Public */,
      16,    1,  137,    2, 0x02 /* Public */,
      16,    1,  140,    2, 0x02 /* Public */,
      16,    1,  143,    2, 0x02 /* Public */,
      16,    1,  146,    2, 0x02 /* Public */,
      20,    1,  149,    2, 0x02 /* Public */,
      21,    1,  152,    2, 0x02 /* Public */,
      22,    1,  155,    2, 0x02 /* Public */,
      24,    1,  158,    2, 0x02 /* Public */,
      25,    0,  161,    2, 0x02 /* Public */,
      26,    0,  162,    2, 0x02 /* Public */,
      27,    0,  163,    2, 0x02 /* Public */,
      28,    2,  164,    2, 0x02 /* Public */,
      28,    1,  169,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QVector3D,    3,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,    5,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   10,   11,
    QMetaType::Void, QMetaType::QVector3D,    8,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QVector3D,   13,   14,   15,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   17,
    QMetaType::QVector4D, QMetaType::QVector4D,   18,
    QMetaType::QVector3D, QMetaType::QVector3D,   18,
    QMetaType::QMatrix4x4, QMetaType::QReal,   19,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   17,
    QMetaType::QMatrix4x4, QMetaType::QMatrix4x4,   17,
    QMetaType::QVector4D, QMetaType::Int,   23,
    QMetaType::QVector4D, QMetaType::Int,   17,
    QMetaType::QReal,
    QMetaType::QMatrix4x4,
    QMetaType::QMatrix4x4,
    QMetaType::Bool, QMetaType::QMatrix4x4, QMetaType::QReal,   17,   29,
    QMetaType::Bool, QMetaType::QMatrix4x4,   17,

 // properties: name, type, flags
      30, QMetaType::QReal, 0x00095903,
      31, QMetaType::QReal, 0x00095903,
      32, QMetaType::QReal, 0x00095903,
      33, QMetaType::QReal, 0x00095903,
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

       0        // eod
};

void QQuickMatrix4x4ValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMatrix4x4ValueType *_t = reinterpret_cast<QQuickMatrix4x4ValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 1: _t->rotate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 2: _t->scale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->scale((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->scale((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 5: _t->lookAt((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 6: { QMatrix4x4 _r = _t->times((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector4D _r = _t->times((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVector3D _r = _t->times((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 9: { QMatrix4x4 _r = _t->times((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 10: { QMatrix4x4 _r = _t->plus((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 11: { QMatrix4x4 _r = _t->minus((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVector4D _r = _t->row((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 13: { QVector4D _r = _t->column((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = std::move(_r); }  break;
        case 14: { qreal _r = _t->determinant();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 15: { QMatrix4x4 _r = _t->inverted();
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 16: { QMatrix4x4 _r = _t->transposed();
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->fuzzyEquals((*reinterpret_cast< const QMatrix4x4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMatrix4x4ValueType *_t = reinterpret_cast<QQuickMatrix4x4ValueType *>(_o);
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
        QQuickMatrix4x4ValueType *_t = reinterpret_cast<QQuickMatrix4x4ValueType *>(_o);
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

const QMetaObject QQuickMatrix4x4ValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickMatrix4x4ValueType.data,
      qt_meta_data_QQuickMatrix4x4ValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickFontValueType_t {
    QByteArrayData data[38];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFontValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFontValueType_t qt_meta_stringdata_QQuickFontValueType = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickFontValueType"
QT_MOC_LITERAL(1, 20, 8), // "toString"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "family"
QT_MOC_LITERAL(4, 37, 9), // "styleName"
QT_MOC_LITERAL(5, 47, 4), // "bold"
QT_MOC_LITERAL(6, 52, 6), // "weight"
QT_MOC_LITERAL(7, 59, 10), // "FontWeight"
QT_MOC_LITERAL(8, 70, 6), // "italic"
QT_MOC_LITERAL(9, 77, 9), // "underline"
QT_MOC_LITERAL(10, 87, 8), // "overline"
QT_MOC_LITERAL(11, 96, 9), // "strikeout"
QT_MOC_LITERAL(12, 106, 9), // "pointSize"
QT_MOC_LITERAL(13, 116, 9), // "pixelSize"
QT_MOC_LITERAL(14, 126, 14), // "capitalization"
QT_MOC_LITERAL(15, 141, 14), // "Capitalization"
QT_MOC_LITERAL(16, 156, 13), // "letterSpacing"
QT_MOC_LITERAL(17, 170, 11), // "wordSpacing"
QT_MOC_LITERAL(18, 182, 17), // "hintingPreference"
QT_MOC_LITERAL(19, 200, 17), // "HintingPreference"
QT_MOC_LITERAL(20, 218, 4), // "Thin"
QT_MOC_LITERAL(21, 223, 10), // "ExtraLight"
QT_MOC_LITERAL(22, 234, 5), // "Light"
QT_MOC_LITERAL(23, 240, 6), // "Normal"
QT_MOC_LITERAL(24, 247, 6), // "Medium"
QT_MOC_LITERAL(25, 254, 8), // "DemiBold"
QT_MOC_LITERAL(26, 263, 4), // "Bold"
QT_MOC_LITERAL(27, 268, 9), // "ExtraBold"
QT_MOC_LITERAL(28, 278, 5), // "Black"
QT_MOC_LITERAL(29, 284, 9), // "MixedCase"
QT_MOC_LITERAL(30, 294, 12), // "AllUppercase"
QT_MOC_LITERAL(31, 307, 12), // "AllLowercase"
QT_MOC_LITERAL(32, 320, 9), // "SmallCaps"
QT_MOC_LITERAL(33, 330, 10), // "Capitalize"
QT_MOC_LITERAL(34, 341, 20), // "PreferDefaultHinting"
QT_MOC_LITERAL(35, 362, 15), // "PreferNoHinting"
QT_MOC_LITERAL(36, 378, 21), // "PreferVerticalHinting"
QT_MOC_LITERAL(37, 400, 17) // "PreferFullHinting"

    },
    "QQuickFontValueType\0toString\0\0family\0"
    "styleName\0bold\0weight\0FontWeight\0"
    "italic\0underline\0overline\0strikeout\0"
    "pointSize\0pixelSize\0capitalization\0"
    "Capitalization\0letterSpacing\0wordSpacing\0"
    "hintingPreference\0HintingPreference\0"
    "Thin\0ExtraLight\0Light\0Normal\0Medium\0"
    "DemiBold\0Bold\0ExtraBold\0Black\0MixedCase\0"
    "AllUppercase\0AllLowercase\0SmallCaps\0"
    "Capitalize\0PreferDefaultHinting\0"
    "PreferNoHinting\0PreferVerticalHinting\0"
    "PreferFullHinting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFontValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      14,   20, // properties
       3,   62, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095903,
       4, QMetaType::QString, 0x00095903,
       5, QMetaType::Bool, 0x00095903,
       6, 0x80000000 | 7, 0x0009590b,
       8, QMetaType::Bool, 0x00095903,
       9, QMetaType::Bool, 0x00095903,
      10, QMetaType::Bool, 0x00095903,
      11, QMetaType::Bool, 0x00095903,
      12, QMetaType::QReal, 0x00095903,
      13, QMetaType::Int, 0x00095903,
      14, 0x80000000 | 15, 0x0009590b,
      16, QMetaType::QReal, 0x00095903,
      17, QMetaType::QReal, 0x00095903,
      18, 0x80000000 | 19, 0x0009590b,

 // enums: name, flags, count, data
       7, 0x0,    9,   74,
      15, 0x0,    5,   92,
      19, 0x0,    4,  102,

 // enum data: key, value
      20, uint(QQuickFontValueType::Thin),
      21, uint(QQuickFontValueType::ExtraLight),
      22, uint(QQuickFontValueType::Light),
      23, uint(QQuickFontValueType::Normal),
      24, uint(QQuickFontValueType::Medium),
      25, uint(QQuickFontValueType::DemiBold),
      26, uint(QQuickFontValueType::Bold),
      27, uint(QQuickFontValueType::ExtraBold),
      28, uint(QQuickFontValueType::Black),
      29, uint(QQuickFontValueType::MixedCase),
      30, uint(QQuickFontValueType::AllUppercase),
      31, uint(QQuickFontValueType::AllLowercase),
      32, uint(QQuickFontValueType::SmallCaps),
      33, uint(QQuickFontValueType::Capitalize),
      34, uint(QQuickFontValueType::PreferDefaultHinting),
      35, uint(QQuickFontValueType::PreferNoHinting),
      36, uint(QQuickFontValueType::PreferVerticalHinting),
      37, uint(QQuickFontValueType::PreferFullHinting),

       0        // eod
};

void QQuickFontValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFontValueType *_t = reinterpret_cast<QQuickFontValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFontValueType *_t = reinterpret_cast<QQuickFontValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->family(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->styleName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->bold(); break;
        case 3: *reinterpret_cast< FontWeight*>(_v) = _t->weight(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->italic(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->underline(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->overline(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->strikeout(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->pointSize(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->pixelSize(); break;
        case 10: *reinterpret_cast< Capitalization*>(_v) = _t->capitalization(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->letterSpacing(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->wordSpacing(); break;
        case 13: *reinterpret_cast< HintingPreference*>(_v) = _t->hintingPreference(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFontValueType *_t = reinterpret_cast<QQuickFontValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFamily(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setStyleName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBold(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setWeight(*reinterpret_cast< FontWeight*>(_v)); break;
        case 4: _t->setItalic(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setUnderline(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setOverline(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setStrikeout(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPointSize(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setPixelSize(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setCapitalization(*reinterpret_cast< Capitalization*>(_v)); break;
        case 11: _t->setLetterSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setWordSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setHintingPreference(*reinterpret_cast< HintingPreference*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFontValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickFontValueType.data,
      qt_meta_data_QQuickFontValueType,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
