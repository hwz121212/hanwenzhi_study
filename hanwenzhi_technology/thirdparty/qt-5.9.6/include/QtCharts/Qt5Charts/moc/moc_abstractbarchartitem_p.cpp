/****************************************************************************
** Meta object code from reading C++ file 'abstractbarchartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/abstractbarchartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractbarchartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__AbstractBarChartItem_t {
    QByteArrayData data[23];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__AbstractBarChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__AbstractBarChartItem_t qt_meta_stringdata_QtCharts__AbstractBarChartItem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::AbstractBarChartItem"
QT_MOC_LITERAL(1, 31, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 19), // "handleLayoutChanged"
QT_MOC_LITERAL(4, 72, 26), // "handleLabelsVisibleChanged"
QT_MOC_LITERAL(5, 99, 7), // "visible"
QT_MOC_LITERAL(6, 107, 26), // "handleDataStructureChanged"
QT_MOC_LITERAL(7, 134, 20), // "handleVisibleChanged"
QT_MOC_LITERAL(8, 155, 20), // "handleOpacityChanged"
QT_MOC_LITERAL(9, 176, 17), // "handleUpdatedBars"
QT_MOC_LITERAL(10, 194, 27), // "handleLabelsPositionChanged"
QT_MOC_LITERAL(11, 222, 14), // "positionLabels"
QT_MOC_LITERAL(12, 237, 20), // "handleBarValueChange"
QT_MOC_LITERAL(13, 258, 5), // "index"
QT_MOC_LITERAL(14, 264, 8), // "QBarSet*"
QT_MOC_LITERAL(15, 273, 6), // "barset"
QT_MOC_LITERAL(16, 280, 17), // "handleBarValueAdd"
QT_MOC_LITERAL(17, 298, 5), // "count"
QT_MOC_LITERAL(18, 304, 20), // "handleBarValueRemove"
QT_MOC_LITERAL(19, 325, 17), // "handleSeriesAdded"
QT_MOC_LITERAL(20, 343, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(21, 360, 6), // "series"
QT_MOC_LITERAL(22, 367, 19) // "handleSeriesRemoved"

    },
    "QtCharts::AbstractBarChartItem\0"
    "handleDomainUpdated\0\0handleLayoutChanged\0"
    "handleLabelsVisibleChanged\0visible\0"
    "handleDataStructureChanged\0"
    "handleVisibleChanged\0handleOpacityChanged\0"
    "handleUpdatedBars\0handleLabelsPositionChanged\0"
    "positionLabels\0handleBarValueChange\0"
    "index\0QBarSet*\0barset\0handleBarValueAdd\0"
    "count\0handleBarValueRemove\0handleSeriesAdded\0"
    "QAbstractSeries*\0series\0handleSeriesRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__AbstractBarChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    1,   86,    2, 0x0a /* Public */,
       6,    0,   89,    2, 0x0a /* Public */,
       7,    0,   90,    2, 0x0a /* Public */,
       8,    0,   91,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    2,   95,    2, 0x0a /* Public */,
      16,    3,  100,    2, 0x0a /* Public */,
      18,    3,  107,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,
      22,    1,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   13,   17,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   13,   17,   15,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void QtCharts::AbstractBarChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractBarChartItem *_t = static_cast<AbstractBarChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDomainUpdated(); break;
        case 1: _t->handleLayoutChanged(); break;
        case 2: _t->handleLabelsVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handleDataStructureChanged(); break;
        case 4: _t->handleVisibleChanged(); break;
        case 5: _t->handleOpacityChanged(); break;
        case 6: _t->handleUpdatedBars(); break;
        case 7: _t->handleLabelsPositionChanged(); break;
        case 8: _t->positionLabels(); break;
        case 9: _t->handleBarValueChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 10: _t->handleBarValueAdd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QBarSet*(*)>(_a[3]))); break;
        case 11: _t->handleBarValueRemove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QBarSet*(*)>(_a[3]))); break;
        case 12: _t->handleSeriesAdded((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 13: _t->handleSeriesRemoved((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtCharts::AbstractBarChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__AbstractBarChartItem.data,
      qt_meta_data_QtCharts__AbstractBarChartItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::AbstractBarChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::AbstractBarChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__AbstractBarChartItem.stringdata0))
        return static_cast<void*>(this);
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::AbstractBarChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
