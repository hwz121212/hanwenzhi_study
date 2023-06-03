/****************************************************************************
** Meta object code from reading C++ file 'qclipplane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qclipplane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qclipplane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QClipPlane_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QClipPlane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QClipPlane_t qt_meta_stringdata_Qt3DRender__QClipPlane = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DRender::QClipPlane"
QT_MOC_LITERAL(1, 23, 17), // "planeIndexChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "planeIndex"
QT_MOC_LITERAL(4, 53, 13), // "normalChanged"
QT_MOC_LITERAL(5, 67, 6), // "normal"
QT_MOC_LITERAL(6, 74, 15), // "distanceChanged"
QT_MOC_LITERAL(7, 90, 8), // "distance"
QT_MOC_LITERAL(8, 99, 13), // "setPlaneIndex"
QT_MOC_LITERAL(9, 113, 9), // "setNormal"
QT_MOC_LITERAL(10, 123, 11) // "setDistance"

    },
    "Qt3DRender::QClipPlane\0planeIndexChanged\0"
    "\0planeIndex\0normalChanged\0normal\0"
    "distanceChanged\0distance\0setPlaneIndex\0"
    "setNormal\0setDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QClipPlane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QVector3D,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::QVector3D, 0x00495103,
       7, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QClipPlane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QClipPlane *_t = static_cast<QClipPlane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->planeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->normalChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 2: _t->distanceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setPlaneIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setNormal((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 5: _t->setDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QClipPlane::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClipPlane::planeIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QClipPlane::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClipPlane::normalChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QClipPlane::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClipPlane::distanceChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QClipPlane *_t = static_cast<QClipPlane *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->planeIndex(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->normal(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->distance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QClipPlane *_t = static_cast<QClipPlane *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaneIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNormal(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setDistance(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QClipPlane::staticMetaObject = {
    { &QRenderState::staticMetaObject, qt_meta_stringdata_Qt3DRender__QClipPlane.data,
      qt_meta_data_Qt3DRender__QClipPlane,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QClipPlane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QClipPlane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QClipPlane.stringdata0))
        return static_cast<void*>(this);
    return QRenderState::qt_metacast(_clname);
}

int Qt3DRender::QClipPlane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRenderState::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void Qt3DRender::QClipPlane::planeIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QClipPlane::normalChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QClipPlane::distanceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
