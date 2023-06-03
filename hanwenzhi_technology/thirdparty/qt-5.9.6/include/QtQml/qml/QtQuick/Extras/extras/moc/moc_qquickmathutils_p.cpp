/****************************************************************************
** Meta object code from reading C++ file 'qquickmathutils_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickmathutils_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmathutils_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMathUtils_t {
    QByteArrayData data[18];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMathUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMathUtils_t qt_meta_stringdata_QQuickMathUtils = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMathUtils"
QT_MOC_LITERAL(1, 16, 8), // "degToRad"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "degrees"
QT_MOC_LITERAL(4, 34, 14), // "degToRadOffset"
QT_MOC_LITERAL(5, 49, 8), // "radToDeg"
QT_MOC_LITERAL(6, 58, 7), // "radians"
QT_MOC_LITERAL(7, 66, 14), // "radToDegOffset"
QT_MOC_LITERAL(8, 81, 17), // "centerAlongCircle"
QT_MOC_LITERAL(9, 99, 7), // "xCenter"
QT_MOC_LITERAL(10, 107, 7), // "yCenter"
QT_MOC_LITERAL(11, 115, 5), // "width"
QT_MOC_LITERAL(12, 121, 6), // "height"
QT_MOC_LITERAL(13, 128, 13), // "angleOnCircle"
QT_MOC_LITERAL(14, 142, 19), // "distanceAlongRadius"
QT_MOC_LITERAL(15, 162, 9), // "roundEven"
QT_MOC_LITERAL(16, 172, 6), // "number"
QT_MOC_LITERAL(17, 179, 3) // "pi2"

    },
    "QQuickMathUtils\0degToRad\0\0degrees\0"
    "degToRadOffset\0radToDeg\0radians\0"
    "radToDegOffset\0centerAlongCircle\0"
    "xCenter\0yCenter\0width\0height\0angleOnCircle\0"
    "distanceAlongRadius\0roundEven\0number\0"
    "pi2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMathUtils[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    1,   47,    2, 0x02 /* Public */,
       5,    1,   50,    2, 0x02 /* Public */,
       7,    1,   53,    2, 0x02 /* Public */,
       8,    6,   56,    2, 0x02 /* Public */,
      15,    1,   69,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QReal, QMetaType::QReal,    3,
    QMetaType::QReal, QMetaType::QReal,    3,
    QMetaType::QReal, QMetaType::QReal,    6,
    QMetaType::QReal, QMetaType::QReal,    6,
    QMetaType::QPointF, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    9,   10,   11,   12,   13,   14,
    QMetaType::QReal, QMetaType::QReal,   16,

 // properties: name, type, flags
      17, QMetaType::QReal, 0x00095401,

       0        // eod
};

void QQuickMathUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMathUtils *_t = static_cast<QQuickMathUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { qreal _r = _t->degToRad((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 1: { qreal _r = _t->degToRadOffset((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: { qreal _r = _t->radToDeg((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 3: { qreal _r = _t->radToDegOffset((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 4: { QPointF _r = _t->centerAlongCircle((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        case 5: { qreal _r = _t->roundEven((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMathUtils *_t = static_cast<QQuickMathUtils *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->pi2(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMathUtils::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMathUtils.data,
      qt_meta_data_QQuickMathUtils,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMathUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMathUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMathUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMathUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
