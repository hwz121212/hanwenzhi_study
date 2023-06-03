/****************************************************************************
** Meta object code from reading C++ file 'qscatterseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscatterseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscatterseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QScatterSeries_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QScatterSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QScatterSeries_t qt_meta_stringdata_QtCharts__QScatterSeries = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtCharts::QScatterSeries"
QT_MOC_LITERAL(1, 25, 12), // "colorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "color"
QT_MOC_LITERAL(4, 45, 18), // "borderColorChanged"
QT_MOC_LITERAL(5, 64, 18), // "markerShapeChanged"
QT_MOC_LITERAL(6, 83, 11), // "MarkerShape"
QT_MOC_LITERAL(7, 95, 5), // "shape"
QT_MOC_LITERAL(8, 101, 17), // "markerSizeChanged"
QT_MOC_LITERAL(9, 119, 4), // "size"
QT_MOC_LITERAL(10, 124, 11), // "borderColor"
QT_MOC_LITERAL(11, 136, 11), // "markerShape"
QT_MOC_LITERAL(12, 148, 10), // "markerSize"
QT_MOC_LITERAL(13, 159, 5), // "brush"
QT_MOC_LITERAL(14, 165, 17), // "MarkerShapeCircle"
QT_MOC_LITERAL(15, 183, 20) // "MarkerShapeRectangle"

    },
    "QtCharts::QScatterSeries\0colorChanged\0"
    "\0color\0borderColorChanged\0markerShapeChanged\0"
    "MarkerShape\0shape\0markerSizeChanged\0"
    "size\0borderColor\0markerShape\0markerSize\0"
    "brush\0MarkerShapeCircle\0MarkerShapeRectangle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QScatterSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   46, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QReal,    9,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
      10, QMetaType::QColor, 0x00495103,
      11, 0x80000000 | 6, 0x0049510b,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QBrush, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // enums: name, flags, count, data
       6, 0x0,    2,   70,

 // enum data: key, value
      14, uint(QtCharts::QScatterSeries::MarkerShapeCircle),
      15, uint(QtCharts::QScatterSeries::MarkerShapeRectangle),

       0        // eod
};

void QtCharts::QScatterSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScatterSeries *_t = static_cast<QScatterSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->borderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->markerShapeChanged((*reinterpret_cast< MarkerShape(*)>(_a[1]))); break;
        case 3: _t->markerSizeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScatterSeries::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterSeries::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScatterSeries::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterSeries::borderColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScatterSeries::*_t)(MarkerShape );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterSeries::markerShapeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QScatterSeries::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterSeries::markerSizeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScatterSeries *_t = static_cast<QScatterSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 2: *reinterpret_cast< MarkerShape*>(_v) = _t->markerShape(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->markerSize(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScatterSeries *_t = static_cast<QScatterSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setMarkerShape(*reinterpret_cast< MarkerShape*>(_v)); break;
        case 3: _t->setMarkerSize(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QScatterSeries::staticMetaObject = {
    { &QXYSeries::staticMetaObject, qt_meta_stringdata_QtCharts__QScatterSeries.data,
      qt_meta_data_QtCharts__QScatterSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QScatterSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QScatterSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QScatterSeries.stringdata0))
        return static_cast<void*>(this);
    return QXYSeries::qt_metacast(_clname);
}

int QtCharts::QScatterSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXYSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QScatterSeries::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QScatterSeries::borderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QScatterSeries::markerShapeChanged(MarkerShape _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QScatterSeries::markerSizeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
