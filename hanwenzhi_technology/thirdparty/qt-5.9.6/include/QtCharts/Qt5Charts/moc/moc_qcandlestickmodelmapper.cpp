/****************************************************************************
** Meta object code from reading C++ file 'qcandlestickmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcandlestickmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcandlestickmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QCandlestickModelMapper_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QCandlestickModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QCandlestickModelMapper_t qt_meta_stringdata_QtCharts__QCandlestickModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtCharts::QCandlestickModelMa..."
QT_MOC_LITERAL(1, 34, 13), // "modelReplaced"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 14), // "seriesReplaced"
QT_MOC_LITERAL(4, 64, 5), // "model"
QT_MOC_LITERAL(5, 70, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(6, 90, 6), // "series"
QT_MOC_LITERAL(7, 97, 19) // "QCandlestickSeries*"

    },
    "QtCharts::QCandlestickModelMapper\0"
    "modelReplaced\0\0seriesReplaced\0model\0"
    "QAbstractItemModel*\0series\0"
    "QCandlestickSeries*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QCandlestickModelMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049510b,
       6, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QtCharts::QCandlestickModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCandlestickModelMapper *_t = static_cast<QCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelReplaced(); break;
        case 1: _t->seriesReplaced(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickModelMapper::modelReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickModelMapper::seriesReplaced)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCandlestickModelMapper *_t = static_cast<QCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< QCandlestickSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCandlestickModelMapper *_t = static_cast<QCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 1: _t->setSeries(*reinterpret_cast< QCandlestickSeries**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QCandlestickModelMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QCandlestickModelMapper.data,
      qt_meta_data_QtCharts__QCandlestickModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QCandlestickModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QCandlestickModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QCandlestickModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QCandlestickModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QCandlestickModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QCandlestickModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
