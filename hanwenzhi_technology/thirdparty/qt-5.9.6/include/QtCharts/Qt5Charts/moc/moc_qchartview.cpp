/****************************************************************************
** Meta object code from reading C++ file 'qchartview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qchartview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchartview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QChartView_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QChartView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QChartView_t qt_meta_stringdata_QtCharts__QChartView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtCharts::QChartView"
QT_MOC_LITERAL(1, 21, 10), // "RubberBand"
QT_MOC_LITERAL(2, 32, 12), // "NoRubberBand"
QT_MOC_LITERAL(3, 45, 18), // "VerticalRubberBand"
QT_MOC_LITERAL(4, 64, 20), // "HorizontalRubberBand"
QT_MOC_LITERAL(5, 85, 19) // "RectangleRubberBand"

    },
    "QtCharts::QChartView\0RubberBand\0"
    "NoRubberBand\0VerticalRubberBand\0"
    "HorizontalRubberBand\0RectangleRubberBand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QChartView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   18,

 // enum data: key, value
       2, uint(QtCharts::QChartView::NoRubberBand),
       3, uint(QtCharts::QChartView::VerticalRubberBand),
       4, uint(QtCharts::QChartView::HorizontalRubberBand),
       5, uint(QtCharts::QChartView::RectangleRubberBand),

       0        // eod
};

void QtCharts::QChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QChartView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QtCharts__QChartView.data,
      qt_meta_data_QtCharts__QChartView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QChartView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QtCharts::QChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
