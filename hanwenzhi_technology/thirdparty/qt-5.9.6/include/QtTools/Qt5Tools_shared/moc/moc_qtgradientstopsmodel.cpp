/****************************************************************************
** Meta object code from reading C++ file 'qtgradientstopsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtgradienteditor/qtgradientstopsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientstopsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGradientStopsModel_t {
    QByteArrayData data[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGradientStopsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGradientStopsModel_t qt_meta_stringdata_QtGradientStopsModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtGradientStopsModel"
QT_MOC_LITERAL(1, 21, 9), // "stopAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "QtGradientStop*"
QT_MOC_LITERAL(4, 48, 4), // "stop"
QT_MOC_LITERAL(5, 53, 11), // "stopRemoved"
QT_MOC_LITERAL(6, 65, 9), // "stopMoved"
QT_MOC_LITERAL(7, 75, 6), // "newPos"
QT_MOC_LITERAL(8, 82, 12), // "stopsSwapped"
QT_MOC_LITERAL(9, 95, 5), // "stop1"
QT_MOC_LITERAL(10, 101, 5), // "stop2"
QT_MOC_LITERAL(11, 107, 11), // "stopChanged"
QT_MOC_LITERAL(12, 119, 8), // "newColor"
QT_MOC_LITERAL(13, 128, 12), // "stopSelected"
QT_MOC_LITERAL(14, 141, 8), // "selected"
QT_MOC_LITERAL(15, 150, 18) // "currentStopChanged"

    },
    "QtGradientStopsModel\0stopAdded\0\0"
    "QtGradientStop*\0stop\0stopRemoved\0"
    "stopMoved\0newPos\0stopsSwapped\0stop1\0"
    "stop2\0stopChanged\0newColor\0stopSelected\0"
    "selected\0currentStopChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGradientStopsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    2,   55,    2, 0x06 /* Public */,
       8,    2,   60,    2, 0x06 /* Public */,
      11,    2,   65,    2, 0x06 /* Public */,
      13,    2,   70,    2, 0x06 /* Public */,
      15,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QReal,    4,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    4,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   14,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QtGradientStopsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGradientStopsModel *_t = static_cast<QtGradientStopsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopAdded((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 1: _t->stopRemoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        case 2: _t->stopMoved((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->stopsSwapped((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< QtGradientStop*(*)>(_a[2]))); break;
        case 4: _t->stopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 5: _t->stopSelected((*reinterpret_cast< QtGradientStop*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->currentStopChanged((*reinterpret_cast< QtGradientStop*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopMoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * , QtGradientStop * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopsSwapped)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * , const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::stopSelected)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QtGradientStopsModel::*_t)(QtGradientStop * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientStopsModel::currentStopChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QtGradientStopsModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtGradientStopsModel.data,
      qt_meta_data_QtGradientStopsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGradientStopsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGradientStopsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientStopsModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtGradientStopsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtGradientStopsModel::stopAdded(QtGradientStop * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtGradientStopsModel::stopRemoved(QtGradientStop * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtGradientStopsModel::stopMoved(QtGradientStop * _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtGradientStopsModel::stopsSwapped(QtGradientStop * _t1, QtGradientStop * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtGradientStopsModel::stopChanged(QtGradientStop * _t1, const QColor & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtGradientStopsModel::stopSelected(QtGradientStop * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtGradientStopsModel::currentStopChanged(QtGradientStop * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
