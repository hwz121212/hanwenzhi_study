/****************************************************************************
** Meta object code from reading C++ file 'qcandlestickset.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcandlestickset.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcandlestickset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QCandlestickSet_t {
    QByteArrayData data[22];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QCandlestickSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QCandlestickSet_t qt_meta_stringdata_QtCharts__QCandlestickSet = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QtCharts::QCandlestickSet"
QT_MOC_LITERAL(1, 26, 7), // "clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "hovered"
QT_MOC_LITERAL(4, 43, 6), // "status"
QT_MOC_LITERAL(5, 50, 7), // "pressed"
QT_MOC_LITERAL(6, 58, 8), // "released"
QT_MOC_LITERAL(7, 67, 13), // "doubleClicked"
QT_MOC_LITERAL(8, 81, 16), // "timestampChanged"
QT_MOC_LITERAL(9, 98, 11), // "openChanged"
QT_MOC_LITERAL(10, 110, 11), // "highChanged"
QT_MOC_LITERAL(11, 122, 10), // "lowChanged"
QT_MOC_LITERAL(12, 133, 12), // "closeChanged"
QT_MOC_LITERAL(13, 146, 12), // "brushChanged"
QT_MOC_LITERAL(14, 159, 10), // "penChanged"
QT_MOC_LITERAL(15, 170, 9), // "timestamp"
QT_MOC_LITERAL(16, 180, 4), // "open"
QT_MOC_LITERAL(17, 185, 4), // "high"
QT_MOC_LITERAL(18, 190, 3), // "low"
QT_MOC_LITERAL(19, 194, 5), // "close"
QT_MOC_LITERAL(20, 200, 5), // "brush"
QT_MOC_LITERAL(21, 206, 3) // "pen"

    },
    "QtCharts::QCandlestickSet\0clicked\0\0"
    "hovered\0status\0pressed\0released\0"
    "doubleClicked\0timestampChanged\0"
    "openChanged\0highChanged\0lowChanged\0"
    "closeChanged\0brushChanged\0penChanged\0"
    "timestamp\0open\0high\0low\0close\0brush\0"
    "pen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QCandlestickSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,
       7,    0,   80,    2, 0x06 /* Public */,
       8,    0,   81,    2, 0x06 /* Public */,
       9,    0,   82,    2, 0x06 /* Public */,
      10,    0,   83,    2, 0x06 /* Public */,
      11,    0,   84,    2, 0x06 /* Public */,
      12,    0,   85,    2, 0x06 /* Public */,
      13,    0,   86,    2, 0x06 /* Public */,
      14,    0,   87,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, QMetaType::QReal, 0x00495103,
      18, QMetaType::QReal, 0x00495103,
      19, QMetaType::QReal, 0x00495103,
      20, QMetaType::QBrush, 0x00495103,
      21, QMetaType::QPen, 0x00495103,

 // properties: notify_signal_id
       5,
       6,
       7,
       8,
       9,
      10,
      11,

       0        // eod
};

void QtCharts::QCandlestickSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCandlestickSet *_t = static_cast<QCandlestickSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pressed(); break;
        case 3: _t->released(); break;
        case 4: _t->doubleClicked(); break;
        case 5: _t->timestampChanged(); break;
        case 6: _t->openChanged(); break;
        case 7: _t->highChanged(); break;
        case 8: _t->lowChanged(); break;
        case 9: _t->closeChanged(); break;
        case 10: _t->brushChanged(); break;
        case 11: _t->penChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::timestampChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::openChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::highChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::lowChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::closeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::brushChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QCandlestickSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCandlestickSet::penChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCandlestickSet *_t = static_cast<QCandlestickSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->timestamp(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->open(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->high(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->low(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->close(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCandlestickSet *_t = static_cast<QCandlestickSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimestamp(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setOpen(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHigh(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLow(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setClose(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QCandlestickSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QCandlestickSet.data,
      qt_meta_data_QtCharts__QCandlestickSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QCandlestickSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QCandlestickSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QCandlestickSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QCandlestickSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void QtCharts::QCandlestickSet::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QCandlestickSet::hovered(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QCandlestickSet::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QCandlestickSet::released()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QCandlestickSet::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QCandlestickSet::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QCandlestickSet::openChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCharts::QCandlestickSet::highChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtCharts::QCandlestickSet::lowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtCharts::QCandlestickSet::closeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QtCharts::QCandlestickSet::brushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QtCharts::QCandlestickSet::penChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
