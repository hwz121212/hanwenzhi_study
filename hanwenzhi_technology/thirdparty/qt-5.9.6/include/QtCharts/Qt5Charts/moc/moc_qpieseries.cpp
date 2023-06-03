/****************************************************************************
** Meta object code from reading C++ file 'qpieseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpieseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpieseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QPieSeries_t {
    QByteArrayData data[24];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QPieSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QPieSeries_t qt_meta_stringdata_QtCharts__QPieSeries = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtCharts::QPieSeries"
QT_MOC_LITERAL(1, 21, 5), // "added"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "QList<QPieSlice*>"
QT_MOC_LITERAL(4, 46, 6), // "slices"
QT_MOC_LITERAL(5, 53, 7), // "removed"
QT_MOC_LITERAL(6, 61, 7), // "clicked"
QT_MOC_LITERAL(7, 69, 10), // "QPieSlice*"
QT_MOC_LITERAL(8, 80, 5), // "slice"
QT_MOC_LITERAL(9, 86, 7), // "hovered"
QT_MOC_LITERAL(10, 94, 5), // "state"
QT_MOC_LITERAL(11, 100, 7), // "pressed"
QT_MOC_LITERAL(12, 108, 8), // "released"
QT_MOC_LITERAL(13, 117, 13), // "doubleClicked"
QT_MOC_LITERAL(14, 131, 12), // "countChanged"
QT_MOC_LITERAL(15, 144, 10), // "sumChanged"
QT_MOC_LITERAL(16, 155, 18), // "horizontalPosition"
QT_MOC_LITERAL(17, 174, 16), // "verticalPosition"
QT_MOC_LITERAL(18, 191, 4), // "size"
QT_MOC_LITERAL(19, 196, 10), // "startAngle"
QT_MOC_LITERAL(20, 207, 8), // "endAngle"
QT_MOC_LITERAL(21, 216, 5), // "count"
QT_MOC_LITERAL(22, 222, 3), // "sum"
QT_MOC_LITERAL(23, 226, 8) // "holeSize"

    },
    "QtCharts::QPieSeries\0added\0\0"
    "QList<QPieSlice*>\0slices\0removed\0"
    "clicked\0QPieSlice*\0slice\0hovered\0state\0"
    "pressed\0released\0doubleClicked\0"
    "countChanged\0sumChanged\0horizontalPosition\0"
    "verticalPosition\0size\0startAngle\0"
    "endAngle\0count\0sum\0holeSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QPieSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       9,    2,   68,    2, 0x06 /* Public */,
      11,    1,   73,    2, 0x06 /* Public */,
      12,    1,   76,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,
      14,    0,   82,    2, 0x06 /* Public */,
      15,    0,   83,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QReal, 0x00095103,
      17, QMetaType::QReal, 0x00095103,
      18, QMetaType::QReal, 0x00095003,
      19, QMetaType::QReal, 0x00095003,
      20, QMetaType::QReal, 0x00095003,
      21, QMetaType::Int, 0x00495001,
      22, QMetaType::QReal, 0x00495001,
      23, QMetaType::QReal, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       7,
       8,
       0,

       0        // eod
};

void QtCharts::QPieSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPieSeries *_t = static_cast<QPieSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 1: _t->removed((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 3: _t->hovered((*reinterpret_cast< QPieSlice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->pressed((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 5: _t->released((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 6: _t->doubleClicked((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 7: _t->countChanged(); break;
        case 8: _t->sumChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPieSeries::*_t)(QList<QPieSlice*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::added)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QList<QPieSlice*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::removed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::hovered)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::pressed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::released)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::doubleClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::countChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QPieSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeries::sumChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPieSeries *_t = static_cast<QPieSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->horizontalPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->verticalPosition(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->pieSize(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->pieStartAngle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->pieEndAngle(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->sum(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->holeSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPieSeries *_t = static_cast<QPieSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontalPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setVerticalPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setPieSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPieStartAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setPieEndAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setHoleSize(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QPieSeries::staticMetaObject = {
    { &QAbstractSeries::staticMetaObject, qt_meta_stringdata_QtCharts__QPieSeries.data,
      qt_meta_data_QtCharts__QPieSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QPieSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QPieSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QPieSeries.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCharts::QPieSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeries::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QPieSeries::added(QList<QPieSlice*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QPieSeries::removed(QList<QPieSlice*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QPieSeries::clicked(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QPieSeries::hovered(QPieSlice * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QPieSeries::pressed(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QPieSeries::released(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCharts::QPieSeries::doubleClicked(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCharts::QPieSeries::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtCharts::QPieSeries::sumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
