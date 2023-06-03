/****************************************************************************
** Meta object code from reading C++ file 'qbar3dseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qbar3dseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbar3dseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QBar3DSeries_t {
    QByteArrayData data[12];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QBar3DSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QBar3DSeries_t qt_meta_stringdata_QtDataVisualization__QBar3DSeries = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtDataVisualization::QBar3DSe..."
QT_MOC_LITERAL(1, 34, 16), // "dataProxyChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 14), // "QBarDataProxy*"
QT_MOC_LITERAL(4, 67, 5), // "proxy"
QT_MOC_LITERAL(5, 73, 18), // "selectedBarChanged"
QT_MOC_LITERAL(6, 92, 8), // "position"
QT_MOC_LITERAL(7, 101, 16), // "meshAngleChanged"
QT_MOC_LITERAL(8, 118, 5), // "angle"
QT_MOC_LITERAL(9, 124, 9), // "dataProxy"
QT_MOC_LITERAL(10, 134, 11), // "selectedBar"
QT_MOC_LITERAL(11, 146, 9) // "meshAngle"

    },
    "QtDataVisualization::QBar3DSeries\0"
    "dataProxyChanged\0\0QBarDataProxy*\0proxy\0"
    "selectedBarChanged\0position\0"
    "meshAngleChanged\0angle\0dataProxy\0"
    "selectedBar\0meshAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QBar3DSeries[] = {

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
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::Float,    8,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x0049510b,
      10, QMetaType::QPoint, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QtDataVisualization::QBar3DSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBar3DSeries *_t = static_cast<QBar3DSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataProxyChanged((*reinterpret_cast< QBarDataProxy*(*)>(_a[1]))); break;
        case 1: _t->selectedBarChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->meshAngleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarDataProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBar3DSeries::*_t)(QBarDataProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBar3DSeries::dataProxyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBar3DSeries::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBar3DSeries::selectedBarChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBar3DSeries::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBar3DSeries::meshAngleChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarDataProxy* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBar3DSeries *_t = static_cast<QBar3DSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBarDataProxy**>(_v) = _t->dataProxy(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = _t->selectedBar(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->meshAngle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBar3DSeries *_t = static_cast<QBar3DSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataProxy(*reinterpret_cast< QBarDataProxy**>(_v)); break;
        case 1: _t->setSelectedBar(*reinterpret_cast< QPoint*>(_v)); break;
        case 2: _t->setMeshAngle(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QBar3DSeries::staticMetaObject = {
    { &QAbstract3DSeries::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QBar3DSeries.data,
      qt_meta_data_QtDataVisualization__QBar3DSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QBar3DSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QBar3DSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QBar3DSeries.stringdata0))
        return static_cast<void*>(this);
    return QAbstract3DSeries::qt_metacast(_clname);
}

int QtDataVisualization::QBar3DSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtDataVisualization::QBar3DSeries::dataProxyChanged(QBarDataProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QBar3DSeries::selectedBarChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QBar3DSeries::meshAngleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
