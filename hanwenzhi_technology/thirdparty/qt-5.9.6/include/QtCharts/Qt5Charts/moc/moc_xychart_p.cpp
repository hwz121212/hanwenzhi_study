/****************************************************************************
** Meta object code from reading C++ file 'xychart_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/xychart_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xychart_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__XYChart_t {
    QByteArrayData data[17];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__XYChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__XYChart_t qt_meta_stringdata_QtCharts__XYChart = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtCharts::XYChart"
QT_MOC_LITERAL(1, 18, 7), // "clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "point"
QT_MOC_LITERAL(4, 33, 7), // "hovered"
QT_MOC_LITERAL(5, 41, 5), // "state"
QT_MOC_LITERAL(6, 47, 7), // "pressed"
QT_MOC_LITERAL(7, 55, 8), // "released"
QT_MOC_LITERAL(8, 64, 13), // "doubleClicked"
QT_MOC_LITERAL(9, 78, 16), // "handlePointAdded"
QT_MOC_LITERAL(10, 95, 5), // "index"
QT_MOC_LITERAL(11, 101, 18), // "handlePointRemoved"
QT_MOC_LITERAL(12, 120, 19), // "handlePointsRemoved"
QT_MOC_LITERAL(13, 140, 5), // "count"
QT_MOC_LITERAL(14, 146, 19), // "handlePointReplaced"
QT_MOC_LITERAL(15, 166, 20), // "handlePointsReplaced"
QT_MOC_LITERAL(16, 187, 19) // "handleDomainUpdated"

    },
    "QtCharts::XYChart\0clicked\0\0point\0"
    "hovered\0state\0pressed\0released\0"
    "doubleClicked\0handlePointAdded\0index\0"
    "handlePointRemoved\0handlePointsRemoved\0"
    "count\0handlePointReplaced\0"
    "handlePointsReplaced\0handleDomainUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__XYChart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    2,   72,    2, 0x06 /* Public */,
       6,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   86,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      12,    2,   92,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,    3,    5,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   13,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::XYChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYChart *_t = static_cast<XYChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->pressed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->released((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 5: _t->handlePointAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handlePointRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handlePointsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->handlePointReplaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->handlePointsReplaced(); break;
        case 10: _t->handleDomainUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (XYChart::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XYChart::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (XYChart::*_t)(const QPointF & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XYChart::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (XYChart::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XYChart::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (XYChart::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XYChart::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (XYChart::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XYChart::doubleClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::XYChart::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__XYChart.data,
      qt_meta_data_QtCharts__XYChart,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::XYChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::XYChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__XYChart.stringdata0))
        return static_cast<void*>(this);
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::XYChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QtCharts::XYChart::clicked(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::XYChart::hovered(const QPointF & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::XYChart::pressed(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::XYChart::released(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::XYChart::doubleClicked(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
