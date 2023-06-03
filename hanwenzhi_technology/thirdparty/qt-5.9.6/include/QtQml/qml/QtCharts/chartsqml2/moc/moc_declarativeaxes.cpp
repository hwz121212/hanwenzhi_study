/****************************************************************************
** Meta object code from reading C++ file 'declarativeaxes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativeaxes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativeaxes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativeAxes_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeAxes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeAxes_t qt_meta_stringdata_QtCharts__DeclarativeAxes = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QtCharts::DeclarativeAxes"
QT_MOC_LITERAL(1, 26, 12), // "axisXChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(4, 55, 4), // "axis"
QT_MOC_LITERAL(5, 60, 12), // "axisYChanged"
QT_MOC_LITERAL(6, 73, 15), // "axisXTopChanged"
QT_MOC_LITERAL(7, 89, 17), // "axisYRightChanged"
QT_MOC_LITERAL(8, 107, 5), // "axisX"
QT_MOC_LITERAL(9, 113, 5), // "axisY"
QT_MOC_LITERAL(10, 119, 8), // "axisXTop"
QT_MOC_LITERAL(11, 128, 10) // "axisYRight"

    },
    "QtCharts::DeclarativeAxes\0axisXChanged\0"
    "\0QAbstractAxis*\0axis\0axisYChanged\0"
    "axisXTopChanged\0axisYRightChanged\0"
    "axisX\0axisY\0axisXTop\0axisYRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeAxes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0049510b,
       9, 0x80000000 | 3, 0x0049510b,
      10, 0x80000000 | 3, 0x0049510b,
      11, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QtCharts::DeclarativeAxes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeAxes *_t = static_cast<DeclarativeAxes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeAxes::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAxes::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeAxes::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAxes::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeAxes::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAxes::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeAxes::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAxes::axisYRightChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeAxes *_t = static_cast<DeclarativeAxes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeAxes *_t = static_cast<DeclarativeAxes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeAxes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeAxes.data,
      qt_meta_data_QtCharts__DeclarativeAxes,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeAxes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeAxes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeAxes.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::DeclarativeAxes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::DeclarativeAxes::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeAxes::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeAxes::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeAxes::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
