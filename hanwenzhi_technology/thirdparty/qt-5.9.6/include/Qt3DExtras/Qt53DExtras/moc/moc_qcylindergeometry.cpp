/****************************************************************************
** Meta object code from reading C++ file 'qcylindergeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcylindergeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcylindergeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QCylinderGeometry_t {
    QByteArrayData data[19];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QCylinderGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QCylinderGeometry_t qt_meta_stringdata_Qt3DExtras__QCylinderGeometry = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qt3DExtras::QCylinderGeometry"
QT_MOC_LITERAL(1, 30, 13), // "radiusChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "radius"
QT_MOC_LITERAL(4, 52, 12), // "ringsChanged"
QT_MOC_LITERAL(5, 65, 5), // "rings"
QT_MOC_LITERAL(6, 71, 13), // "slicesChanged"
QT_MOC_LITERAL(7, 85, 6), // "slices"
QT_MOC_LITERAL(8, 92, 13), // "lengthChanged"
QT_MOC_LITERAL(9, 106, 6), // "length"
QT_MOC_LITERAL(10, 113, 8), // "setRings"
QT_MOC_LITERAL(11, 122, 9), // "setSlices"
QT_MOC_LITERAL(12, 132, 9), // "setRadius"
QT_MOC_LITERAL(13, 142, 9), // "setLength"
QT_MOC_LITERAL(14, 152, 17), // "positionAttribute"
QT_MOC_LITERAL(15, 170, 23), // "Qt3DRender::QAttribute*"
QT_MOC_LITERAL(16, 194, 15), // "normalAttribute"
QT_MOC_LITERAL(17, 210, 17), // "texCoordAttribute"
QT_MOC_LITERAL(18, 228, 14) // "indexAttribute"

    },
    "Qt3DExtras::QCylinderGeometry\0"
    "radiusChanged\0\0radius\0ringsChanged\0"
    "rings\0slicesChanged\0slices\0lengthChanged\0"
    "length\0setRings\0setSlices\0setRadius\0"
    "setLength\0positionAttribute\0"
    "Qt3DRender::QAttribute*\0normalAttribute\0"
    "texCoordAttribute\0indexAttribute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QCylinderGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Float,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    9,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       3, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      14, 0x80000000 | 15, 0x00095409,
      16, 0x80000000 | 15, 0x00095409,
      17, 0x80000000 | 15, 0x00095409,
      18, 0x80000000 | 15, 0x00095409,

 // properties: notify_signal_id
       1,
       2,
       0,
       3,
       0,
       0,
       0,
       0,

       0        // eod
};

void Qt3DExtras::QCylinderGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCylinderGeometry *_t = static_cast<QCylinderGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radiusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->ringsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slicesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->lengthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setRings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSlices((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setLength((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCylinderGeometry::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCylinderGeometry::radiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCylinderGeometry::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCylinderGeometry::ringsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCylinderGeometry::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCylinderGeometry::slicesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCylinderGeometry::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCylinderGeometry::lengthChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCylinderGeometry *_t = static_cast<QCylinderGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rings(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->slices(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->length(); break;
        case 4: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->positionAttribute(); break;
        case 5: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->normalAttribute(); break;
        case 6: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->texCoordAttribute(); break;
        case 7: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->indexAttribute(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCylinderGeometry *_t = static_cast<QCylinderGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRings(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSlices(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRadius(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setLength(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QCylinderGeometry::staticMetaObject = {
    { &Qt3DRender::QGeometry::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QCylinderGeometry.data,
      qt_meta_data_Qt3DExtras__QCylinderGeometry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QCylinderGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QCylinderGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QCylinderGeometry.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QGeometry::qt_metacast(_clname);
}

int Qt3DExtras::QCylinderGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QGeometry::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::QCylinderGeometry::radiusChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QCylinderGeometry::ringsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QCylinderGeometry::slicesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QCylinderGeometry::lengthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
