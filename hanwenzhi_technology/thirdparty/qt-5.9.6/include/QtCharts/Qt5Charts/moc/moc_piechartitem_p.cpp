/****************************************************************************
** Meta object code from reading C++ file 'piechartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/piechartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piechartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__PieChartItem_t {
    QByteArrayData data[16];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PieChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PieChartItem_t qt_meta_stringdata_QtCharts__PieChartItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtCharts::PieChartItem"
QT_MOC_LITERAL(1, 23, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "updateLayout"
QT_MOC_LITERAL(4, 57, 17), // "handleSlicesAdded"
QT_MOC_LITERAL(5, 75, 17), // "QList<QPieSlice*>"
QT_MOC_LITERAL(6, 93, 6), // "slices"
QT_MOC_LITERAL(7, 100, 19), // "handleSlicesRemoved"
QT_MOC_LITERAL(8, 120, 18), // "handleSliceChanged"
QT_MOC_LITERAL(9, 139, 26), // "handleSeriesVisibleChanged"
QT_MOC_LITERAL(10, 166, 20), // "handleOpacityChanged"
QT_MOC_LITERAL(11, 187, 12), // "setAnimation"
QT_MOC_LITERAL(12, 200, 13), // "PieAnimation*"
QT_MOC_LITERAL(13, 214, 9), // "animation"
QT_MOC_LITERAL(14, 224, 15), // "ChartAnimation*"
QT_MOC_LITERAL(15, 240, 7) // "cleanup"

    },
    "QtCharts::PieChartItem\0handleDomainUpdated\0"
    "\0updateLayout\0handleSlicesAdded\0"
    "QList<QPieSlice*>\0slices\0handleSlicesRemoved\0"
    "handleSliceChanged\0handleSeriesVisibleChanged\0"
    "handleOpacityChanged\0setAnimation\0"
    "PieAnimation*\0animation\0ChartAnimation*\0"
    "cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PieChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    0x80000000 | 14,
    QMetaType::Void,

       0        // eod
};

void QtCharts::PieChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PieChartItem *_t = static_cast<PieChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDomainUpdated(); break;
        case 1: _t->updateLayout(); break;
        case 2: _t->handleSlicesAdded((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 3: _t->handleSlicesRemoved((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 4: _t->handleSliceChanged(); break;
        case 5: _t->handleSeriesVisibleChanged(); break;
        case 6: _t->handleOpacityChanged(); break;
        case 7: _t->setAnimation((*reinterpret_cast< PieAnimation*(*)>(_a[1]))); break;
        case 8: { ChartAnimation* _r = _t->animation();
            if (_a[0]) *reinterpret_cast< ChartAnimation**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtCharts::PieChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__PieChartItem.data,
      qt_meta_data_QtCharts__PieChartItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::PieChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PieChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PieChartItem.stringdata0))
        return static_cast<void*>(this);
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::PieChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
