/****************************************************************************
** Meta object code from reading C++ file 'qhpiemodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhpiemodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhpiemodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QHPieModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QHPieModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QHPieModelMapper_t qt_meta_stringdata_QtCharts__QHPieModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QtCharts::QHPieModelMapper"
QT_MOC_LITERAL(1, 27, 14), // "seriesReplaced"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "modelReplaced"
QT_MOC_LITERAL(4, 57, 16), // "valuesRowChanged"
QT_MOC_LITERAL(5, 74, 16), // "labelsRowChanged"
QT_MOC_LITERAL(6, 91, 18), // "firstColumnChanged"
QT_MOC_LITERAL(7, 110, 18), // "columnCountChanged"
QT_MOC_LITERAL(8, 129, 6), // "series"
QT_MOC_LITERAL(9, 136, 11), // "QPieSeries*"
QT_MOC_LITERAL(10, 148, 5), // "model"
QT_MOC_LITERAL(11, 154, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(12, 174, 9), // "valuesRow"
QT_MOC_LITERAL(13, 184, 9), // "labelsRow"
QT_MOC_LITERAL(14, 194, 11), // "firstColumn"
QT_MOC_LITERAL(15, 206, 11) // "columnCount"

    },
    "QtCharts::QHPieModelMapper\0seriesReplaced\0"
    "\0modelReplaced\0valuesRowChanged\0"
    "labelsRowChanged\0firstColumnChanged\0"
    "columnCountChanged\0series\0QPieSeries*\0"
    "model\0QAbstractItemModel*\0valuesRow\0"
    "labelsRow\0firstColumn\0columnCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QHPieModelMapper[] = {

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

void QtCharts::QHPieModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHPieModelMapper *_t = static_cast<QHPieModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesReplaced(); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->valuesRowChanged(); break;
        case 3: _t->labelsRowChanged(); break;
        case 4: _t->firstColumnChanged(); break;
        case 5: _t->columnCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::seriesReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::modelReplaced)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::valuesRowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::labelsRowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::firstColumnChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHPieModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHPieModelMapper::columnCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHPieModelMapper *_t = static_cast<QHPieModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPieSeries**>(_v) = _t->series(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->valuesRow(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->labelsRow(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->firstColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHPieModelMapper *_t = static_cast<QHPieModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeries(*reinterpret_cast< QPieSeries**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setValuesRow(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLabelsRow(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QHPieModelMapper::staticMetaObject = {
    { &QPieModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QHPieModelMapper.data,
      qt_meta_data_QtCharts__QHPieModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QHPieModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QHPieModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QHPieModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QPieModelMapper::qt_metacast(_clname);
}

int QtCharts::QHPieModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPieModelMapper::qt_metacall(_c, _id, _a);
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
void QtCharts::QHPieModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QHPieModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QHPieModelMapper::valuesRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QHPieModelMapper::labelsRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QHPieModelMapper::firstColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QHPieModelMapper::columnCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
