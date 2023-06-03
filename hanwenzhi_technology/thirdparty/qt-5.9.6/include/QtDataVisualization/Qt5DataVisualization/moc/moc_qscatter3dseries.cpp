/****************************************************************************
** Meta object code from reading C++ file 'qscatter3dseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscatter3dseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscatter3dseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QScatter3DSeries_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QScatter3DSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QScatter3DSeries_t qt_meta_stringdata_QtDataVisualization__QScatter3DSeries = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtDataVisualization::QScatter..."
QT_MOC_LITERAL(1, 38, 16), // "dataProxyChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 18), // "QScatterDataProxy*"
QT_MOC_LITERAL(4, 75, 5), // "proxy"
QT_MOC_LITERAL(5, 81, 19), // "selectedItemChanged"
QT_MOC_LITERAL(6, 101, 5), // "index"
QT_MOC_LITERAL(7, 107, 15), // "itemSizeChanged"
QT_MOC_LITERAL(8, 123, 4), // "size"
QT_MOC_LITERAL(9, 128, 9), // "dataProxy"
QT_MOC_LITERAL(10, 138, 12), // "selectedItem"
QT_MOC_LITERAL(11, 151, 8) // "itemSize"

    },
    "QtDataVisualization::QScatter3DSeries\0"
    "dataProxyChanged\0\0QScatterDataProxy*\0"
    "proxy\0selectedItemChanged\0index\0"
    "itemSizeChanged\0size\0dataProxy\0"
    "selectedItem\0itemSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QScatter3DSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    8,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x0049510b,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QtDataVisualization::QScatter3DSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScatter3DSeries *_t = static_cast<QScatter3DSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataProxyChanged((*reinterpret_cast< QScatterDataProxy*(*)>(_a[1]))); break;
        case 1: _t->selectedItemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatterDataProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScatter3DSeries::*_t)(QScatterDataProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatter3DSeries::dataProxyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScatter3DSeries::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatter3DSeries::selectedItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScatter3DSeries::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatter3DSeries::itemSizeChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatterDataProxy* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScatter3DSeries *_t = static_cast<QScatter3DSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QScatterDataProxy**>(_v) = _t->dataProxy(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->selectedItem(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->itemSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScatter3DSeries *_t = static_cast<QScatter3DSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataProxy(*reinterpret_cast< QScatterDataProxy**>(_v)); break;
        case 1: _t->setSelectedItem(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setItemSize(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QScatter3DSeries::staticMetaObject = {
    { &QAbstract3DSeries::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QScatter3DSeries.data,
      qt_meta_data_QtDataVisualization__QScatter3DSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QScatter3DSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QScatter3DSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QScatter3DSeries.stringdata0))
        return static_cast<void*>(this);
    return QAbstract3DSeries::qt_metacast(_clname);
}

int QtDataVisualization::QScatter3DSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstract3DSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QScatter3DSeries::dataProxyChanged(QScatterDataProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QScatter3DSeries::selectedItemChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QScatter3DSeries::itemSizeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
