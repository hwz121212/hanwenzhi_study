/****************************************************************************
** Meta object code from reading C++ file 'qhxymodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhxymodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhxymodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QHXYModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QHXYModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QHXYModelMapper_t qt_meta_stringdata_QtCharts__QHXYModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QtCharts::QHXYModelMapper"
QT_MOC_LITERAL(1, 26, 14), // "seriesReplaced"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "modelReplaced"
QT_MOC_LITERAL(4, 56, 11), // "xRowChanged"
QT_MOC_LITERAL(5, 68, 11), // "yRowChanged"
QT_MOC_LITERAL(6, 80, 18), // "firstColumnChanged"
QT_MOC_LITERAL(7, 99, 18), // "columnCountChanged"
QT_MOC_LITERAL(8, 118, 6), // "series"
QT_MOC_LITERAL(9, 125, 10), // "QXYSeries*"
QT_MOC_LITERAL(10, 136, 5), // "model"
QT_MOC_LITERAL(11, 142, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(12, 162, 4), // "xRow"
QT_MOC_LITERAL(13, 167, 4), // "yRow"
QT_MOC_LITERAL(14, 172, 11), // "firstColumn"
QT_MOC_LITERAL(15, 184, 11) // "columnCount"

    },
    "QtCharts::QHXYModelMapper\0seriesReplaced\0"
    "\0modelReplaced\0xRowChanged\0yRowChanged\0"
    "firstColumnChanged\0columnCountChanged\0"
    "series\0QXYSeries*\0model\0QAbstractItemModel*\0"
    "xRow\0yRow\0firstColumn\0columnCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QHXYModelMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QtCharts::QHXYModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHXYModelMapper *_t = static_cast<QHXYModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesReplaced(); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->xRowChanged(); break;
        case 3: _t->yRowChanged(); break;
        case 4: _t->firstColumnChanged(); break;
        case 5: _t->columnCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::seriesReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::modelReplaced)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::xRowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::yRowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::firstColumnChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHXYModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHXYModelMapper::columnCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHXYModelMapper *_t = static_cast<QHXYModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QXYSeries**>(_v) = _t->series(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->xRow(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->yRow(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->firstColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHXYModelMapper *_t = static_cast<QHXYModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeries(*reinterpret_cast< QXYSeries**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setXRow(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setYRow(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QHXYModelMapper::staticMetaObject = {
    { &QXYModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QHXYModelMapper.data,
      qt_meta_data_QtCharts__QHXYModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QHXYModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QHXYModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QHXYModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QXYModelMapper::qt_metacast(_clname);
}

int QtCharts::QHXYModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXYModelMapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QHXYModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QHXYModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QHXYModelMapper::xRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QHXYModelMapper::yRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QHXYModelMapper::firstColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QHXYModelMapper::columnCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
