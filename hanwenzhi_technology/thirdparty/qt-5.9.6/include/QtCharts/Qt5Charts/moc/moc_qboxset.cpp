/****************************************************************************
** Meta object code from reading C++ file 'qboxset.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qboxset.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qboxset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QBoxSet_t {
    QByteArrayData data[16];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QBoxSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QBoxSet_t qt_meta_stringdata_QtCharts__QBoxSet = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtCharts::QBoxSet"
QT_MOC_LITERAL(1, 18, 7), // "clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "hovered"
QT_MOC_LITERAL(4, 35, 6), // "status"
QT_MOC_LITERAL(5, 42, 7), // "pressed"
QT_MOC_LITERAL(6, 50, 8), // "released"
QT_MOC_LITERAL(7, 59, 13), // "doubleClicked"
QT_MOC_LITERAL(8, 73, 10), // "penChanged"
QT_MOC_LITERAL(9, 84, 12), // "brushChanged"
QT_MOC_LITERAL(10, 97, 13), // "valuesChanged"
QT_MOC_LITERAL(11, 111, 12), // "valueChanged"
QT_MOC_LITERAL(12, 124, 5), // "index"
QT_MOC_LITERAL(13, 130, 7), // "cleared"
QT_MOC_LITERAL(14, 138, 3), // "pen"
QT_MOC_LITERAL(15, 142, 5) // "brush"

    },
    "QtCharts::QBoxSet\0clicked\0\0hovered\0"
    "status\0pressed\0released\0doubleClicked\0"
    "penChanged\0brushChanged\0valuesChanged\0"
    "valueChanged\0index\0cleared\0pen\0brush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QBoxSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,
      11,    1,   74,    2, 0x06 /* Public */,
      13,    0,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QPen, 0x00495103,
      15, QMetaType::QBrush, 0x00495103,

 // properties: notify_signal_id
       5,
       6,

       0        // eod
};

void QtCharts::QBoxSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBoxSet *_t = static_cast<QBoxSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pressed(); break;
        case 3: _t->released(); break;
        case 4: _t->doubleClicked(); break;
        case 5: _t->penChanged(); break;
        case 6: _t->brushChanged(); break;
        case 7: _t->valuesChanged(); break;
        case 8: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->cleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::penChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::brushChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::valuesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::valueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBoxSet::cleared)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBoxSet *_t = static_cast<QBoxSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBoxSet *_t = static_cast<QBoxSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QBoxSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QBoxSet.data,
      qt_meta_data_QtCharts__QBoxSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QBoxSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QBoxSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QBoxSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QBoxSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void QtCharts::QBoxSet::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QBoxSet::hovered(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QBoxSet::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QBoxSet::released()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QBoxSet::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QBoxSet::penChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QBoxSet::brushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCharts::QBoxSet::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtCharts::QBoxSet::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtCharts::QBoxSet::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
