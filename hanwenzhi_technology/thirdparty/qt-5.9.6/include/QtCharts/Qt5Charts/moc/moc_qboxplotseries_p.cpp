/****************************************************************************
** Meta object code from reading C++ file 'qboxplotseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/qboxplotseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qboxplotseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate_t {
    QByteArrayData data[17];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate_t qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtCharts::QBoxPlotSeriesPrivate"
QT_MOC_LITERAL(1, 32, 7), // "updated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "clicked"
QT_MOC_LITERAL(4, 49, 5), // "index"
QT_MOC_LITERAL(5, 55, 8), // "QBoxSet*"
QT_MOC_LITERAL(6, 64, 6), // "barset"
QT_MOC_LITERAL(7, 71, 7), // "pressed"
QT_MOC_LITERAL(8, 79, 8), // "released"
QT_MOC_LITERAL(9, 88, 13), // "doubleClicked"
QT_MOC_LITERAL(10, 102, 12), // "updatedBoxes"
QT_MOC_LITERAL(11, 115, 13), // "updatedLayout"
QT_MOC_LITERAL(12, 129, 17), // "restructuredBoxes"
QT_MOC_LITERAL(13, 147, 18), // "handleSeriesChange"
QT_MOC_LITERAL(14, 166, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(15, 183, 6), // "series"
QT_MOC_LITERAL(16, 190, 18) // "handleSeriesRemove"

    },
    "QtCharts::QBoxPlotSeriesPrivate\0updated\0"
    "\0clicked\0index\0QBoxSet*\0barset\0pressed\0"
    "released\0doubleClicked\0updatedBoxes\0"
    "updatedLayout\0restructuredBoxes\0"
    "handleSeriesChange\0QAbstractSeries*\0"
    "series\0handleSeriesRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QBoxPlotSeriesPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       7,    2,   70,    2, 0x06 /* Public */,
       8,    2,   75,    2, 0x06 /* Public */,
       9,    2,   80,    2, 0x06 /* Public */,
      10,    0,   85,    2, 0x06 /* Public */,
      11,    0,   86,    2, 0x06 /* Public */,
      12,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   88,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QtCharts::QBoxPlotSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBoxPlotSeriesPrivate *_t = static_cast<QBoxPlotSeriesPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 2: _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 3: _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 5: _t->updatedBoxes(); break;
        case 6: _t->updatedLayout(); break;
        case 7: _t->restructuredBoxes(); break;
        case 8: _t->handleSeriesChange((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 9: _t->handleSeriesRemove((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 9:
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
            typedef void (QBoxPlotSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)(int , QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)(int , QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)(int , QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)(int , QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::updatedBoxes)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::updatedLayout)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeriesPrivate::restructuredBoxes)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::QBoxPlotSeriesPrivate::staticMetaObject = {
    { &QAbstractSeriesPrivate::staticMetaObject, qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate.data,
      qt_meta_data_QtCharts__QBoxPlotSeriesPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QBoxPlotSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QBoxPlotSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QBoxPlotSeriesPrivate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCharts::QBoxPlotSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtCharts::QBoxPlotSeriesPrivate::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QBoxPlotSeriesPrivate::clicked(int _t1, QBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QBoxPlotSeriesPrivate::pressed(int _t1, QBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QBoxPlotSeriesPrivate::released(int _t1, QBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QBoxPlotSeriesPrivate::doubleClicked(int _t1, QBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QBoxPlotSeriesPrivate::updatedBoxes()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QBoxPlotSeriesPrivate::updatedLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCharts::QBoxPlotSeriesPrivate::restructuredBoxes()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
