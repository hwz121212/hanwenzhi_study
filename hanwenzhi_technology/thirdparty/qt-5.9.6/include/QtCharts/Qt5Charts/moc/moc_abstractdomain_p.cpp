/****************************************************************************
** Meta object code from reading C++ file 'abstractdomain_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/abstractdomain_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractdomain_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__AbstractDomain_t {
    QByteArrayData data[12];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__AbstractDomain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__AbstractDomain_t qt_meta_stringdata_QtCharts__AbstractDomain = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtCharts::AbstractDomain"
QT_MOC_LITERAL(1, 25, 7), // "updated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "rangeHorizontalChanged"
QT_MOC_LITERAL(4, 57, 3), // "min"
QT_MOC_LITERAL(5, 61, 3), // "max"
QT_MOC_LITERAL(6, 65, 20), // "rangeVerticalChanged"
QT_MOC_LITERAL(7, 86, 30), // "handleVerticalAxisRangeChanged"
QT_MOC_LITERAL(8, 117, 32), // "handleHorizontalAxisRangeChanged"
QT_MOC_LITERAL(9, 150, 21), // "handleReverseXChanged"
QT_MOC_LITERAL(10, 172, 7), // "reverse"
QT_MOC_LITERAL(11, 180, 21) // "handleReverseYChanged"

    },
    "QtCharts::AbstractDomain\0updated\0\0"
    "rangeHorizontalChanged\0min\0max\0"
    "rangeVerticalChanged\0"
    "handleVerticalAxisRangeChanged\0"
    "handleHorizontalAxisRangeChanged\0"
    "handleReverseXChanged\0reverse\0"
    "handleReverseYChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__AbstractDomain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       6,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   60,    2, 0x0a /* Public */,
       8,    2,   65,    2, 0x0a /* Public */,
       9,    1,   70,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    4,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    4,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    4,    5,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void QtCharts::AbstractDomain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractDomain *_t = static_cast<AbstractDomain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->rangeHorizontalChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 2: _t->rangeVerticalChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->handleVerticalAxisRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->handleHorizontalAxisRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: _t->handleReverseXChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->handleReverseYChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AbstractDomain::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractDomain::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractDomain::*_t)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractDomain::rangeHorizontalChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractDomain::*_t)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractDomain::rangeVerticalChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::AbstractDomain::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__AbstractDomain.data,
      qt_meta_data_QtCharts__AbstractDomain,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::AbstractDomain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::AbstractDomain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__AbstractDomain.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::AbstractDomain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QtCharts::AbstractDomain::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::AbstractDomain::rangeHorizontalChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::AbstractDomain::rangeVerticalChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
