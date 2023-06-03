/****************************************************************************
** Meta object code from reading C++ file 'qlegend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/qlegend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlegend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QLegendPrivate_t {
    QByteArrayData data[8];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QLegendPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QLegendPrivate_t qt_meta_stringdata_QtCharts__QLegendPrivate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtCharts::QLegendPrivate"
QT_MOC_LITERAL(1, 25, 17), // "handleSeriesAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(4, 61, 6), // "series"
QT_MOC_LITERAL(5, 68, 19), // "handleSeriesRemoved"
QT_MOC_LITERAL(6, 88, 26), // "handleSeriesVisibleChanged"
QT_MOC_LITERAL(7, 115, 18) // "handleCountChanged"

    },
    "QtCharts::QLegendPrivate\0handleSeriesAdded\0"
    "\0QAbstractSeries*\0series\0handleSeriesRemoved\0"
    "handleSeriesVisibleChanged\0"
    "handleCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QLegendPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::QLegendPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLegendPrivate *_t = static_cast<QLegendPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleSeriesAdded((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 1: _t->handleSeriesRemoved((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 2: _t->handleSeriesVisibleChanged(); break;
        case 3: _t->handleCountChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QtCharts::QLegendPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QLegendPrivate.data,
      qt_meta_data_QtCharts__QLegendPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QLegendPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QLegendPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QLegendPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QLegendPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
