/****************************************************************************
** Meta object code from reading C++ file 'qvcandlestickmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qvcandlestickmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvcandlestickmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QVCandlestickModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QVCandlestickModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QVCandlestickModelMapper_t qt_meta_stringdata_QtCharts__QVCandlestickModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtCharts::QVCandlestickModelM..."
QT_MOC_LITERAL(1, 35, 19), // "timestampRowChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 14), // "openRowChanged"
QT_MOC_LITERAL(4, 71, 14), // "highRowChanged"
QT_MOC_LITERAL(5, 86, 13), // "lowRowChanged"
QT_MOC_LITERAL(6, 100, 15), // "closeRowChanged"
QT_MOC_LITERAL(7, 116, 21), // "firstSetColumnChanged"
QT_MOC_LITERAL(8, 138, 20), // "lastSetColumnChanged"
QT_MOC_LITERAL(9, 159, 12), // "timestampRow"
QT_MOC_LITERAL(10, 172, 7), // "openRow"
QT_MOC_LITERAL(11, 180, 7), // "highRow"
QT_MOC_LITERAL(12, 188, 6), // "lowRow"
QT_MOC_LITERAL(13, 195, 8), // "closeRow"
QT_MOC_LITERAL(14, 204, 14), // "firstSetColumn"
QT_MOC_LITERAL(15, 219, 13) // "lastSetColumn"

    },
    "QtCharts::QVCandlestickModelMapper\0"
    "timestampRowChanged\0\0openRowChanged\0"
    "highRowChanged\0lowRowChanged\0"
    "closeRowChanged\0firstSetColumnChanged\0"
    "lastSetColumnChanged\0timestampRow\0"
    "openRow\0highRow\0lowRow\0closeRow\0"
    "firstSetColumn\0lastSetColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QVCandlestickModelMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
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
       6,

       0        // eod
};

void QtCharts::QVCandlestickModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVCandlestickModelMapper *_t = static_cast<QVCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timestampRowChanged(); break;
        case 1: _t->openRowChanged(); break;
        case 2: _t->highRowChanged(); break;
        case 3: _t->lowRowChanged(); break;
        case 4: _t->closeRowChanged(); break;
        case 5: _t->firstSetColumnChanged(); break;
        case 6: _t->lastSetColumnChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::timestampRowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::openRowChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::highRowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::lowRowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::closeRowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::firstSetColumnChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QVCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCandlestickModelMapper::lastSetColumnChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QVCandlestickModelMapper *_t = static_cast<QVCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->timestampRow(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->openRow(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->highRow(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lowRow(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->closeRow(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->firstSetColumn(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->lastSetColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QVCandlestickModelMapper *_t = static_cast<QVCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimestampRow(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOpenRow(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setHighRow(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLowRow(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCloseRow(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFirstSetColumn(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setLastSetColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QVCandlestickModelMapper::staticMetaObject = {
    { &QCandlestickModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QVCandlestickModelMapper.data,
      qt_meta_data_QtCharts__QVCandlestickModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QVCandlestickModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QVCandlestickModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QVCandlestickModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QCandlestickModelMapper::qt_metacast(_clname);
}

int QtCharts::QVCandlestickModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCandlestickModelMapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QVCandlestickModelMapper::timestampRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QVCandlestickModelMapper::openRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QVCandlestickModelMapper::highRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QVCandlestickModelMapper::lowRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QVCandlestickModelMapper::closeRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QVCandlestickModelMapper::firstSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QVCandlestickModelMapper::lastSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
