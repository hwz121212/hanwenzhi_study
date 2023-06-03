/****************************************************************************
** Meta object code from reading C++ file 'qboxplotseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qboxplotseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qboxplotseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QBoxPlotSeries_t {
    QByteArrayData data[24];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QBoxPlotSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QBoxPlotSeries_t qt_meta_stringdata_QtCharts__QBoxPlotSeries = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtCharts::QBoxPlotSeries"
QT_MOC_LITERAL(1, 25, 7), // "clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "QBoxSet*"
QT_MOC_LITERAL(4, 43, 6), // "boxset"
QT_MOC_LITERAL(5, 50, 7), // "hovered"
QT_MOC_LITERAL(6, 58, 6), // "status"
QT_MOC_LITERAL(7, 65, 7), // "pressed"
QT_MOC_LITERAL(8, 73, 8), // "released"
QT_MOC_LITERAL(9, 82, 13), // "doubleClicked"
QT_MOC_LITERAL(10, 96, 12), // "countChanged"
QT_MOC_LITERAL(11, 109, 10), // "penChanged"
QT_MOC_LITERAL(12, 120, 12), // "brushChanged"
QT_MOC_LITERAL(13, 133, 27), // "boxOutlineVisibilityChanged"
QT_MOC_LITERAL(14, 161, 15), // "boxWidthChanged"
QT_MOC_LITERAL(15, 177, 12), // "boxsetsAdded"
QT_MOC_LITERAL(16, 190, 15), // "QList<QBoxSet*>"
QT_MOC_LITERAL(17, 206, 4), // "sets"
QT_MOC_LITERAL(18, 211, 14), // "boxsetsRemoved"
QT_MOC_LITERAL(19, 226, 17), // "boxOutlineVisible"
QT_MOC_LITERAL(20, 244, 8), // "boxWidth"
QT_MOC_LITERAL(21, 253, 3), // "pen"
QT_MOC_LITERAL(22, 257, 5), // "brush"
QT_MOC_LITERAL(23, 263, 5) // "count"

    },
    "QtCharts::QBoxPlotSeries\0clicked\0\0"
    "QBoxSet*\0boxset\0hovered\0status\0pressed\0"
    "released\0doubleClicked\0countChanged\0"
    "penChanged\0brushChanged\0"
    "boxOutlineVisibilityChanged\0boxWidthChanged\0"
    "boxsetsAdded\0QList<QBoxSet*>\0sets\0"
    "boxsetsRemoved\0boxOutlineVisible\0"
    "boxWidth\0pen\0brush\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QBoxPlotSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    2,   77,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,
       8,    1,   85,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,
      10,    0,   91,    2, 0x06 /* Public */,
      11,    0,   92,    2, 0x06 /* Public */,
      12,    0,   93,    2, 0x06 /* Public */,
      13,    0,   94,    2, 0x06 /* Public */,
      14,    0,   95,    2, 0x06 /* Public */,
      15,    1,   96,    2, 0x06 /* Public */,
      18,    1,   99,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,    6,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::QReal, 0x00495103,
      21, QMetaType::QPen, 0x00495103,
      22, QMetaType::QBrush, 0x00495103,
      23, QMetaType::Int, 0x00c95001,

 // properties: notify_signal_id
       8,
       9,
       6,
       7,
       5,

 // properties: revision
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QtCharts::QBoxPlotSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBoxPlotSeries *_t = static_cast<QBoxPlotSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 2: _t->pressed((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 3: _t->released((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 5: _t->countChanged(); break;
        case 6: _t->penChanged(); break;
        case 7: _t->brushChanged(); break;
        case 8: _t->boxOutlineVisibilityChanged(); break;
        case 9: _t->boxWidthChanged(); break;
        case 10: _t->boxsetsAdded((*reinterpret_cast< QList<QBoxSet*>(*)>(_a[1]))); break;
        case 11: _t->boxsetsRemoved((*reinterpret_cast< QList<QBoxSet*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QBoxSet*> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QBoxSet*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBoxPlotSeries::*_t)(QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(bool , QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(QBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::countChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::penChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::brushChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::boxOutlineVisibilityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::boxWidthChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(QList<QBoxSet*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::boxsetsAdded)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QBoxPlotSeries::*_t)(QList<QBoxSet*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxPlotSeries::boxsetsRemoved)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBoxPlotSeries *_t = static_cast<QBoxPlotSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->boxOutlineVisible(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->boxWidth(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBoxPlotSeries *_t = static_cast<QBoxPlotSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBoxOutlineVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setBoxWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QBoxPlotSeries::staticMetaObject = {
    { &QAbstractSeries::staticMetaObject, qt_meta_stringdata_QtCharts__QBoxPlotSeries.data,
      qt_meta_data_QtCharts__QBoxPlotSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QBoxPlotSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QBoxPlotSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QBoxPlotSeries.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCharts::QBoxPlotSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
void QtCharts::QBoxPlotSeries::clicked(QBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QBoxPlotSeries::hovered(bool _t1, QBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QBoxPlotSeries::pressed(QBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QBoxPlotSeries::released(QBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QBoxPlotSeries::doubleClicked(QBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QBoxPlotSeries::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QBoxPlotSeries::penChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCharts::QBoxPlotSeries::brushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtCharts::QBoxPlotSeries::boxOutlineVisibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtCharts::QBoxPlotSeries::boxWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QtCharts::QBoxPlotSeries::boxsetsAdded(QList<QBoxSet*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QtCharts::QBoxPlotSeries::boxsetsRemoved(QList<QBoxSet*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
