/****************************************************************************
** Meta object code from reading C++ file 'qhcandlestickmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhcandlestickmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhcandlestickmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QHCandlestickModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QHCandlestickModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QHCandlestickModelMapper_t qt_meta_stringdata_QtCharts__QHCandlestickModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtCharts::QHCandlestickModelM..."
QT_MOC_LITERAL(1, 35, 22), // "timestampColumnChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 17), // "openColumnChanged"
QT_MOC_LITERAL(4, 77, 17), // "highColumnChanged"
QT_MOC_LITERAL(5, 95, 16), // "lowColumnChanged"
QT_MOC_LITERAL(6, 112, 18), // "closeColumnChanged"
QT_MOC_LITERAL(7, 131, 18), // "firstSetRowChanged"
QT_MOC_LITERAL(8, 150, 17), // "lastSetRowChanged"
QT_MOC_LITERAL(9, 168, 15), // "timestampColumn"
QT_MOC_LITERAL(10, 184, 10), // "openColumn"
QT_MOC_LITERAL(11, 195, 10), // "highColumn"
QT_MOC_LITERAL(12, 206, 9), // "lowColumn"
QT_MOC_LITERAL(13, 216, 11), // "closeColumn"
QT_MOC_LITERAL(14, 228, 11), // "firstSetRow"
QT_MOC_LITERAL(15, 240, 10) // "lastSetRow"

    },
    "QtCharts::QHCandlestickModelMapper\0"
    "timestampColumnChanged\0\0openColumnChanged\0"
    "highColumnChanged\0lowColumnChanged\0"
    "closeColumnChanged\0firstSetRowChanged\0"
    "lastSetRowChanged\0timestampColumn\0"
    "openColumn\0highColumn\0lowColumn\0"
    "closeColumn\0firstSetRow\0lastSetRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QHCandlestickModelMapper[] = {

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

void QtCharts::QHCandlestickModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHCandlestickModelMapper *_t = static_cast<QHCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timestampColumnChanged(); break;
        case 1: _t->openColumnChanged(); break;
        case 2: _t->highColumnChanged(); break;
        case 3: _t->lowColumnChanged(); break;
        case 4: _t->closeColumnChanged(); break;
        case 5: _t->firstSetRowChanged(); break;
        case 6: _t->lastSetRowChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::timestampColumnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::openColumnChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::highColumnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::lowColumnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::closeColumnChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::firstSetRowChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QHCandlestickModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHCandlestickModelMapper::lastSetRowChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHCandlestickModelMapper *_t = static_cast<QHCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->timestampColumn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->openColumn(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->highColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lowColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->closeColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->firstSetRow(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->lastSetRow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHCandlestickModelMapper *_t = static_cast<QHCandlestickModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimestampColumn(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOpenColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setHighColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLowColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCloseColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFirstSetRow(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setLastSetRow(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QHCandlestickModelMapper::staticMetaObject = {
    { &QCandlestickModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QHCandlestickModelMapper.data,
      qt_meta_data_QtCharts__QHCandlestickModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QHCandlestickModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QHCandlestickModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QHCandlestickModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QCandlestickModelMapper::qt_metacast(_clname);
}

int QtCharts::QHCandlestickModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtCharts::QHCandlestickModelMapper::timestampColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QHCandlestickModelMapper::openColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QHCandlestickModelMapper::highColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QHCandlestickModelMapper::lowColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QHCandlestickModelMapper::closeColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QHCandlestickModelMapper::firstSetRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QHCandlestickModelMapper::lastSetRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
