/****************************************************************************
** Meta object code from reading C++ file 'candlestickchartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/candlestickchartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'candlestickchartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__CandlestickChartItem_t {
    QByteArrayData data[11];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__CandlestickChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__CandlestickChartItem_t qt_meta_stringdata_QtCharts__CandlestickChartItem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::CandlestickChartItem"
QT_MOC_LITERAL(1, 31, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 19), // "handleLayoutUpdated"
QT_MOC_LITERAL(4, 72, 25), // "handleCandlesticksUpdated"
QT_MOC_LITERAL(5, 98, 29), // "handleCandlestickSeriesChange"
QT_MOC_LITERAL(6, 128, 24), // "handleCandlestickSetsAdd"
QT_MOC_LITERAL(7, 153, 23), // "QList<QCandlestickSet*>"
QT_MOC_LITERAL(8, 177, 4), // "sets"
QT_MOC_LITERAL(9, 182, 27), // "handleCandlestickSetsRemove"
QT_MOC_LITERAL(10, 210, 26) // "handleDataStructureChanged"

    },
    "QtCharts::CandlestickChartItem\0"
    "handleDomainUpdated\0\0handleLayoutUpdated\0"
    "handleCandlesticksUpdated\0"
    "handleCandlestickSeriesChange\0"
    "handleCandlestickSetsAdd\0"
    "QList<QCandlestickSet*>\0sets\0"
    "handleCandlestickSetsRemove\0"
    "handleDataStructureChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__CandlestickChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void QtCharts::CandlestickChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CandlestickChartItem *_t = static_cast<CandlestickChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDomainUpdated(); break;
        case 1: _t->handleLayoutUpdated(); break;
        case 2: _t->handleCandlesticksUpdated(); break;
        case 3: _t->handleCandlestickSeriesChange(); break;
        case 4: _t->handleCandlestickSetsAdd((*reinterpret_cast< const QList<QCandlestickSet*>(*)>(_a[1]))); break;
        case 5: _t->handleCandlestickSetsRemove((*reinterpret_cast< const QList<QCandlestickSet*>(*)>(_a[1]))); break;
        case 6: _t->handleDataStructureChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QtCharts::CandlestickChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__CandlestickChartItem.data,
      qt_meta_data_QtCharts__CandlestickChartItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::CandlestickChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::CandlestickChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__CandlestickChartItem.stringdata0))
        return static_cast<void*>(this);
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::CandlestickChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
