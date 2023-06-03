/****************************************************************************
** Meta object code from reading C++ file 'qqmlvaluetype_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmlvaluetype_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlvaluetype_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlPointFValueType_t {
    QByteArrayData data[5];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlPointFValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlPointFValueType_t qt_meta_stringdata_QQmlPointFValueType = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQmlPointFValueType"
QT_MOC_LITERAL(1, 20, 8), // "toString"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "x"
QT_MOC_LITERAL(4, 32, 1) // "y"

    },
    "QQmlPointFValueType\0toString\0\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlPointFValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
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

       0        // eod
};

void QQmlPointFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlPointFValueType *_t = reinterpret_cast<QQmlPointFValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlPointFValueType *_t = reinterpret_cast<QQmlPointFValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlPointFValueType *_t = reinterpret_cast<QQmlPointFValueType *>(_o);
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

const QMetaObject QQmlPointFValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlPointFValueType.data,
      qt_meta_data_QQmlPointFValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlPointValueType_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlPointValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlPointValueType_t qt_meta_stringdata_QQmlPointValueType = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQmlPointValueType"
QT_MOC_LITERAL(1, 19, 1), // "x"
QT_MOC_LITERAL(2, 21, 1) // "y"

    },
    "QQmlPointValueType\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlPointValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095903,
       2, QMetaType::Int, 0x00095903,

       0        // eod
};

void QQmlPointValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQmlPointValueType *_t = reinterpret_cast<QQmlPointValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlPointValueType *_t = reinterpret_cast<QQmlPointValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlPointValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlPointValueType.data,
      qt_meta_data_QQmlPointValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlSizeFValueType_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlSizeFValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlSizeFValueType_t qt_meta_stringdata_QQmlSizeFValueType = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQmlSizeFValueType"
QT_MOC_LITERAL(1, 19, 8), // "toString"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "width"
QT_MOC_LITERAL(4, 35, 6) // "height"

    },
    "QQmlSizeFValueType\0toString\0\0width\0"
    "height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlSizeFValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
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

       0        // eod
};

void QQmlSizeFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlSizeFValueType *_t = reinterpret_cast<QQmlSizeFValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlSizeFValueType *_t = reinterpret_cast<QQmlSizeFValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlSizeFValueType *_t = reinterpret_cast<QQmlSizeFValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlSizeFValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlSizeFValueType.data,
      qt_meta_data_QQmlSizeFValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlSizeValueType_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlSizeValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlSizeValueType_t qt_meta_stringdata_QQmlSizeValueType = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQmlSizeValueType"
QT_MOC_LITERAL(1, 18, 5), // "width"
QT_MOC_LITERAL(2, 24, 6) // "height"

    },
    "QQmlSizeValueType\0width\0height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlSizeValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095903,
       2, QMetaType::Int, 0x00095903,

       0        // eod
};

void QQmlSizeValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQmlSizeValueType *_t = reinterpret_cast<QQmlSizeValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->height(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlSizeValueType *_t = reinterpret_cast<QQmlSizeValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlSizeValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlSizeValueType.data,
      qt_meta_data_QQmlSizeValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlRectFValueType_t {
    QByteArrayData data[11];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlRectFValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlRectFValueType_t qt_meta_stringdata_QQmlRectFValueType = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQmlRectFValueType"
QT_MOC_LITERAL(1, 19, 8), // "toString"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "x"
QT_MOC_LITERAL(4, 31, 1), // "y"
QT_MOC_LITERAL(5, 33, 5), // "width"
QT_MOC_LITERAL(6, 39, 6), // "height"
QT_MOC_LITERAL(7, 46, 4), // "left"
QT_MOC_LITERAL(8, 51, 5), // "right"
QT_MOC_LITERAL(9, 57, 3), // "top"
QT_MOC_LITERAL(10, 61, 6) // "bottom"

    },
    "QQmlRectFValueType\0toString\0\0x\0y\0width\0"
    "height\0left\0right\0top\0bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlRectFValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   20, // properties
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
       7, QMetaType::QReal, 0x00094801,
       8, QMetaType::QReal, 0x00094801,
       9, QMetaType::QReal, 0x00094801,
      10, QMetaType::QReal, 0x00094801,

       0        // eod
};

void QQmlRectFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlRectFValueType *_t = reinterpret_cast<QQmlRectFValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlRectFValueType *_t = reinterpret_cast<QQmlRectFValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->left(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->right(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->top(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlRectFValueType *_t = reinterpret_cast<QQmlRectFValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlRectFValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlRectFValueType.data,
      qt_meta_data_QQmlRectFValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlRectValueType_t {
    QByteArrayData data[9];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlRectValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlRectValueType_t qt_meta_stringdata_QQmlRectValueType = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQmlRectValueType"
QT_MOC_LITERAL(1, 18, 1), // "x"
QT_MOC_LITERAL(2, 20, 1), // "y"
QT_MOC_LITERAL(3, 22, 5), // "width"
QT_MOC_LITERAL(4, 28, 6), // "height"
QT_MOC_LITERAL(5, 35, 4), // "left"
QT_MOC_LITERAL(6, 40, 5), // "right"
QT_MOC_LITERAL(7, 46, 3), // "top"
QT_MOC_LITERAL(8, 50, 6) // "bottom"

    },
    "QQmlRectValueType\0x\0y\0width\0height\0"
    "left\0right\0top\0bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlRectValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095903,
       2, QMetaType::Int, 0x00095903,
       3, QMetaType::Int, 0x00095903,
       4, QMetaType::Int, 0x00095903,
       5, QMetaType::Int, 0x00094801,
       6, QMetaType::Int, 0x00094801,
       7, QMetaType::Int, 0x00094801,
       8, QMetaType::Int, 0x00094801,

       0        // eod
};

void QQmlRectValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQmlRectValueType *_t = reinterpret_cast<QQmlRectValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->left(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->right(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->top(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlRectValueType *_t = reinterpret_cast<QQmlRectValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlRectValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlRectValueType.data,
      qt_meta_data_QQmlRectValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlEasingValueType_t {
    QByteArrayData data[54];
    char stringdata0[530];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlEasingValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlEasingValueType_t qt_meta_stringdata_QQmlEasingValueType = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQmlEasingValueType"
QT_MOC_LITERAL(1, 20, 4), // "type"
QT_MOC_LITERAL(2, 25, 25), // "QQmlEasingValueType::Type"
QT_MOC_LITERAL(3, 51, 9), // "amplitude"
QT_MOC_LITERAL(4, 61, 9), // "overshoot"
QT_MOC_LITERAL(5, 71, 6), // "period"
QT_MOC_LITERAL(6, 78, 11), // "bezierCurve"
QT_MOC_LITERAL(7, 90, 4), // "Type"
QT_MOC_LITERAL(8, 95, 6), // "Linear"
QT_MOC_LITERAL(9, 102, 6), // "InQuad"
QT_MOC_LITERAL(10, 109, 7), // "OutQuad"
QT_MOC_LITERAL(11, 117, 9), // "InOutQuad"
QT_MOC_LITERAL(12, 127, 9), // "OutInQuad"
QT_MOC_LITERAL(13, 137, 7), // "InCubic"
QT_MOC_LITERAL(14, 145, 8), // "OutCubic"
QT_MOC_LITERAL(15, 154, 10), // "InOutCubic"
QT_MOC_LITERAL(16, 165, 10), // "OutInCubic"
QT_MOC_LITERAL(17, 176, 7), // "InQuart"
QT_MOC_LITERAL(18, 184, 8), // "OutQuart"
QT_MOC_LITERAL(19, 193, 10), // "InOutQuart"
QT_MOC_LITERAL(20, 204, 10), // "OutInQuart"
QT_MOC_LITERAL(21, 215, 7), // "InQuint"
QT_MOC_LITERAL(22, 223, 8), // "OutQuint"
QT_MOC_LITERAL(23, 232, 10), // "InOutQuint"
QT_MOC_LITERAL(24, 243, 10), // "OutInQuint"
QT_MOC_LITERAL(25, 254, 6), // "InSine"
QT_MOC_LITERAL(26, 261, 7), // "OutSine"
QT_MOC_LITERAL(27, 269, 9), // "InOutSine"
QT_MOC_LITERAL(28, 279, 9), // "OutInSine"
QT_MOC_LITERAL(29, 289, 6), // "InExpo"
QT_MOC_LITERAL(30, 296, 7), // "OutExpo"
QT_MOC_LITERAL(31, 304, 9), // "InOutExpo"
QT_MOC_LITERAL(32, 314, 9), // "OutInExpo"
QT_MOC_LITERAL(33, 324, 6), // "InCirc"
QT_MOC_LITERAL(34, 331, 7), // "OutCirc"
QT_MOC_LITERAL(35, 339, 9), // "InOutCirc"
QT_MOC_LITERAL(36, 349, 9), // "OutInCirc"
QT_MOC_LITERAL(37, 359, 9), // "InElastic"
QT_MOC_LITERAL(38, 369, 10), // "OutElastic"
QT_MOC_LITERAL(39, 380, 12), // "InOutElastic"
QT_MOC_LITERAL(40, 393, 12), // "OutInElastic"
QT_MOC_LITERAL(41, 406, 6), // "InBack"
QT_MOC_LITERAL(42, 413, 7), // "OutBack"
QT_MOC_LITERAL(43, 421, 9), // "InOutBack"
QT_MOC_LITERAL(44, 431, 9), // "OutInBack"
QT_MOC_LITERAL(45, 441, 8), // "InBounce"
QT_MOC_LITERAL(46, 450, 9), // "OutBounce"
QT_MOC_LITERAL(47, 460, 11), // "InOutBounce"
QT_MOC_LITERAL(48, 472, 11), // "OutInBounce"
QT_MOC_LITERAL(49, 484, 7), // "InCurve"
QT_MOC_LITERAL(50, 492, 8), // "OutCurve"
QT_MOC_LITERAL(51, 501, 9), // "SineCurve"
QT_MOC_LITERAL(52, 511, 11), // "CosineCurve"
QT_MOC_LITERAL(53, 523, 6) // "Bezier"

    },
    "QQmlEasingValueType\0type\0"
    "QQmlEasingValueType::Type\0amplitude\0"
    "overshoot\0period\0bezierCurve\0Type\0"
    "Linear\0InQuad\0OutQuad\0InOutQuad\0"
    "OutInQuad\0InCubic\0OutCubic\0InOutCubic\0"
    "OutInCubic\0InQuart\0OutQuart\0InOutQuart\0"
    "OutInQuart\0InQuint\0OutQuint\0InOutQuint\0"
    "OutInQuint\0InSine\0OutSine\0InOutSine\0"
    "OutInSine\0InExpo\0OutExpo\0InOutExpo\0"
    "OutInExpo\0InCirc\0OutCirc\0InOutCirc\0"
    "OutInCirc\0InElastic\0OutElastic\0"
    "InOutElastic\0OutInElastic\0InBack\0"
    "OutBack\0InOutBack\0OutInBack\0InBounce\0"
    "OutBounce\0InOutBounce\0OutInBounce\0"
    "InCurve\0OutCurve\0SineCurve\0CosineCurve\0"
    "Bezier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlEasingValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009590b,
       3, QMetaType::QReal, 0x00095903,
       4, QMetaType::QReal, 0x00095903,
       5, QMetaType::QReal, 0x00095903,
       6, QMetaType::QVariantList, 0x00095903,

 // enums: name, flags, count, data
       7, 0x0,   46,   33,

 // enum data: key, value
       8, uint(QQmlEasingValueType::Linear),
       9, uint(QQmlEasingValueType::InQuad),
      10, uint(QQmlEasingValueType::OutQuad),
      11, uint(QQmlEasingValueType::InOutQuad),
      12, uint(QQmlEasingValueType::OutInQuad),
      13, uint(QQmlEasingValueType::InCubic),
      14, uint(QQmlEasingValueType::OutCubic),
      15, uint(QQmlEasingValueType::InOutCubic),
      16, uint(QQmlEasingValueType::OutInCubic),
      17, uint(QQmlEasingValueType::InQuart),
      18, uint(QQmlEasingValueType::OutQuart),
      19, uint(QQmlEasingValueType::InOutQuart),
      20, uint(QQmlEasingValueType::OutInQuart),
      21, uint(QQmlEasingValueType::InQuint),
      22, uint(QQmlEasingValueType::OutQuint),
      23, uint(QQmlEasingValueType::InOutQuint),
      24, uint(QQmlEasingValueType::OutInQuint),
      25, uint(QQmlEasingValueType::InSine),
      26, uint(QQmlEasingValueType::OutSine),
      27, uint(QQmlEasingValueType::InOutSine),
      28, uint(QQmlEasingValueType::OutInSine),
      29, uint(QQmlEasingValueType::InExpo),
      30, uint(QQmlEasingValueType::OutExpo),
      31, uint(QQmlEasingValueType::InOutExpo),
      32, uint(QQmlEasingValueType::OutInExpo),
      33, uint(QQmlEasingValueType::InCirc),
      34, uint(QQmlEasingValueType::OutCirc),
      35, uint(QQmlEasingValueType::InOutCirc),
      36, uint(QQmlEasingValueType::OutInCirc),
      37, uint(QQmlEasingValueType::InElastic),
      38, uint(QQmlEasingValueType::OutElastic),
      39, uint(QQmlEasingValueType::InOutElastic),
      40, uint(QQmlEasingValueType::OutInElastic),
      41, uint(QQmlEasingValueType::InBack),
      42, uint(QQmlEasingValueType::OutBack),
      43, uint(QQmlEasingValueType::InOutBack),
      44, uint(QQmlEasingValueType::OutInBack),
      45, uint(QQmlEasingValueType::InBounce),
      46, uint(QQmlEasingValueType::OutBounce),
      47, uint(QQmlEasingValueType::InOutBounce),
      48, uint(QQmlEasingValueType::OutInBounce),
      49, uint(QQmlEasingValueType::InCurve),
      50, uint(QQmlEasingValueType::OutCurve),
      51, uint(QQmlEasingValueType::SineCurve),
      52, uint(QQmlEasingValueType::CosineCurve),
      53, uint(QQmlEasingValueType::Bezier),

       0        // eod
};

void QQmlEasingValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQmlEasingValueType *_t = reinterpret_cast<QQmlEasingValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlEasingValueType::Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->amplitude(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->overshoot(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->period(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->bezierCurve(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlEasingValueType *_t = reinterpret_cast<QQmlEasingValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QQmlEasingValueType::Type*>(_v)); break;
        case 1: _t->setAmplitude(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setOvershoot(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPeriod(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setBezierCurve(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlEasingValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlEasingValueType.data,
      qt_meta_data_QQmlEasingValueType,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
