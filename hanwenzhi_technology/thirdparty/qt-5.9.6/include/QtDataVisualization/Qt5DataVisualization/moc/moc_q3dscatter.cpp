/****************************************************************************
** Meta object code from reading C++ file 'q3dscatter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../q3dscatter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dscatter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Q3DScatter_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Q3DScatter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Q3DScatter_t qt_meta_stringdata_QtDataVisualization__Q3DScatter = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtDataVisualization::Q3DScatter"
QT_MOC_LITERAL(1, 32, 12), // "axisXChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "QValue3DAxis*"
QT_MOC_LITERAL(4, 60, 4), // "axis"
QT_MOC_LITERAL(5, 65, 12), // "axisYChanged"
QT_MOC_LITERAL(6, 78, 12), // "axisZChanged"
QT_MOC_LITERAL(7, 91, 21), // "selectedSeriesChanged"
QT_MOC_LITERAL(8, 113, 17), // "QScatter3DSeries*"
QT_MOC_LITERAL(9, 131, 6), // "series"
QT_MOC_LITERAL(10, 138, 5), // "axisX"
QT_MOC_LITERAL(11, 144, 5), // "axisY"
QT_MOC_LITERAL(12, 150, 5), // "axisZ"
QT_MOC_LITERAL(13, 156, 14) // "selectedSeries"

    },
    "QtDataVisualization::Q3DScatter\0"
    "axisXChanged\0\0QValue3DAxis*\0axis\0"
    "axisYChanged\0axisZChanged\0"
    "selectedSeriesChanged\0QScatter3DSeries*\0"
    "series\0axisX\0axisY\0axisZ\0selectedSeries"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Q3DScatter[] = {

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
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 3, 0x0049510b,
      11, 0x80000000 | 3, 0x0049510b,
      12, 0x80000000 | 3, 0x0049510b,
      13, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QtDataVisualization::Q3DScatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q3DScatter *_t = static_cast<Q3DScatter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QValue3DAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QValue3DAxis*(*)>(_a[1]))); break;
        case 2: _t->axisZChanged((*reinterpret_cast< QValue3DAxis*(*)>(_a[1]))); break;
        case 3: _t->selectedSeriesChanged((*reinterpret_cast< QScatter3DSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxis* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxis* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxis* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatter3DSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Q3DScatter::*_t)(QValue3DAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScatter::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Q3DScatter::*_t)(QValue3DAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScatter::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Q3DScatter::*_t)(QValue3DAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScatter::axisZChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Q3DScatter::*_t)(QScatter3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScatter::selectedSeriesChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatter3DSeries* >(); break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxis* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q3DScatter *_t = static_cast<Q3DScatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QValue3DAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QValue3DAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QValue3DAxis**>(_v) = _t->axisZ(); break;
        case 3: *reinterpret_cast< QScatter3DSeries**>(_v) = _t->selectedSeries(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q3DScatter *_t = static_cast<Q3DScatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QValue3DAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QValue3DAxis**>(_v)); break;
        case 2: _t->setAxisZ(*reinterpret_cast< QValue3DAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::Q3DScatter::staticMetaObject = {
    { &QAbstract3DGraph::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Q3DScatter.data,
      qt_meta_data_QtDataVisualization__Q3DScatter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Q3DScatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Q3DScatter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Q3DScatter.stringdata0))
        return static_cast<void*>(this);
    return QAbstract3DGraph::qt_metacast(_clname);
}

int QtDataVisualization::Q3DScatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstract3DGraph::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
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
void QtDataVisualization::Q3DScatter::axisXChanged(QValue3DAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::Q3DScatter::axisYChanged(QValue3DAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::Q3DScatter::axisZChanged(QValue3DAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::Q3DScatter::selectedSeriesChanged(QScatter3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
