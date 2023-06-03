/****************************************************************************
** Meta object code from reading C++ file 'qcandlestickseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcandlestickseries.h"
#include "../../5.9.6/QtCharts/private/qcandlestickseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcandlestickseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate_t {
    QByteArrayData data[16];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate_t qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtCharts::QCandlestickSeriesP..."
QT_MOC_LITERAL(1, 36, 7), // "clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "index"
QT_MOC_LITERAL(4, 51, 16), // "QCandlestickSet*"
QT_MOC_LITERAL(5, 68, 3), // "set"
QT_MOC_LITERAL(6, 72, 7), // "pressed"
QT_MOC_LITERAL(7, 80, 8), // "released"
QT_MOC_LITERAL(8, 89, 13), // "doubleClicked"
QT_MOC_LITERAL(9, 103, 7), // "updated"
QT_MOC_LITERAL(10, 111, 13), // "updatedLayout"
QT_MOC_LITERAL(11, 125, 19), // "updatedCandlesticks"
QT_MOC_LITERAL(12, 145, 18), // "handleSeriesChange"
QT_MOC_LITERAL(13, 164, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(14, 181, 6), // "series"
QT_MOC_LITERAL(15, 188, 18) // "handleSeriesRemove"

    },
    "QtCharts::QCandlestickSeriesPrivate\0"
    "clicked\0\0index\0QCandlestickSet*\0set\0"
    "pressed\0released\0doubleClicked\0updated\0"
    "updatedLayout\0updatedCandlesticks\0"
    "handleSeriesChange\0QAbstractSeries*\0"
    "series\0handleSeriesRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QCandlestickSeriesPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
       8,    2,   74,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x06 /* Public */,
      10,    0,   80,    2, 0x06 /* Public */,
      11,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QtCharts::QCandlestickSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCandlestickSeriesPrivate *_t = static_cast<QCandlestickSeriesPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCandlestickSet*(*)>(_a[2]))); break;
        case 1: _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCandlestickSet*(*)>(_a[2]))); break;
        case 2: _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCandlestickSet*(*)>(_a[2]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCandlestickSet*(*)>(_a[2]))); break;
        case 4: _t->updated(); break;
        case 5: _t->updatedLayout(); break;
        case 6: _t->updatedCandlesticks(); break;
        case 7: _t->handleSeriesChange((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 8: _t->handleSeriesRemove((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCandlestickSeriesPrivate::*_t)(int , QCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)(int , QCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::pressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)(int , QCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::released)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)(int , QCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::doubleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::updated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::updatedLayout)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCandlestickSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSeriesPrivate::updatedCandlesticks)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::QCandlestickSeriesPrivate::staticMetaObject = {
    { &QAbstractSeriesPrivate::staticMetaObject, qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate.data,
      qt_meta_data_QtCharts__QCandlestickSeriesPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QCandlestickSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QCandlestickSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QCandlestickSeriesPrivate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCharts::QCandlestickSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtCharts::QCandlestickSeriesPrivate::clicked(int _t1, QCandlestickSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QCandlestickSeriesPrivate::pressed(int _t1, QCandlestickSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QCandlestickSeriesPrivate::released(int _t1, QCandlestickSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QCandlestickSeriesPrivate::doubleClicked(int _t1, QCandlestickSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QCandlestickSeriesPrivate::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QCandlestickSeriesPrivate::updatedLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QCandlestickSeriesPrivate::updatedCandlesticks()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
