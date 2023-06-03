/****************************************************************************
** Meta object code from reading C++ file 'contextattributes_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/contextattributes_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextattributes_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes_t {
    QByteArrayData data[19];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes_t qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtCanvas3D::CanvasContextAttr..."
QT_MOC_LITERAL(1, 36, 12), // "alphaChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "newValue"
QT_MOC_LITERAL(4, 59, 12), // "depthChanged"
QT_MOC_LITERAL(5, 72, 14), // "stencilChanged"
QT_MOC_LITERAL(6, 87, 16), // "antialiasChanged"
QT_MOC_LITERAL(7, 104, 25), // "premultipliedAlphaChanged"
QT_MOC_LITERAL(8, 130, 28), // "preserveDrawingBufferChanged"
QT_MOC_LITERAL(9, 159, 38), // "preferLowPowerToHighPerforman..."
QT_MOC_LITERAL(10, 198, 35), // "failIfMajorPerformanceCaveatC..."
QT_MOC_LITERAL(11, 234, 5), // "alpha"
QT_MOC_LITERAL(12, 240, 5), // "depth"
QT_MOC_LITERAL(13, 246, 7), // "stencil"
QT_MOC_LITERAL(14, 254, 9), // "antialias"
QT_MOC_LITERAL(15, 264, 18), // "premultipliedAlpha"
QT_MOC_LITERAL(16, 283, 21), // "preserveDrawingBuffer"
QT_MOC_LITERAL(17, 305, 31), // "preferLowPowerToHighPerformance"
QT_MOC_LITERAL(18, 337, 28) // "failIfMajorPerformanceCaveat"

    },
    "QtCanvas3D::CanvasContextAttributes\0"
    "alphaChanged\0\0newValue\0depthChanged\0"
    "stencilChanged\0antialiasChanged\0"
    "premultipliedAlphaChanged\0"
    "preserveDrawingBufferChanged\0"
    "preferLowPowerToHighPerformanceChanged\0"
    "failIfMajorPerformanceCaveatChanged\0"
    "alpha\0depth\0stencil\0antialias\0"
    "premultipliedAlpha\0preserveDrawingBuffer\0"
    "preferLowPowerToHighPerformance\0"
    "failIfMajorPerformanceCaveat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasContextAttributes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,
       9,    1,   72,    2, 0x06 /* Public */,
      10,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void QtCanvas3D::CanvasContextAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasContextAttributes *_t = static_cast<CanvasContextAttributes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alphaChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->depthChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->stencilChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->antialiasChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->premultipliedAlphaChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->preserveDrawingBufferChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->preferLowPowerToHighPerformanceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->failIfMajorPerformanceCaveatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::alphaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::depthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::stencilChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::antialiasChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::premultipliedAlphaChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::preserveDrawingBufferChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::preferLowPowerToHighPerformanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CanvasContextAttributes::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasContextAttributes::failIfMajorPerformanceCaveatChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasContextAttributes *_t = static_cast<CanvasContextAttributes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->alpha(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->depth(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->stencil(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->antialias(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->premultipliedAlpha(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->preserveDrawingBuffer(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->preferLowPowerToHighPerformance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->failIfMajorPerformanceCaveat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CanvasContextAttributes *_t = static_cast<CanvasContextAttributes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlpha(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDepth(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setStencil(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAntialias(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPremultipliedAlpha(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setPreserveDrawingBuffer(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setPreferLowPowerToHighPerformance(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFailIfMajorPerformanceCaveat(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCanvas3D::CanvasContextAttributes::staticMetaObject = {
    { &CanvasAbstractObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes.data,
      qt_meta_data_QtCanvas3D__CanvasContextAttributes,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasContextAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasContextAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasContextAttributes.stringdata0))
        return static_cast<void*>(this);
    return CanvasAbstractObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasContextAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanvasAbstractObject::qt_metacall(_c, _id, _a);
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
void QtCanvas3D::CanvasContextAttributes::alphaChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCanvas3D::CanvasContextAttributes::depthChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCanvas3D::CanvasContextAttributes::stencilChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCanvas3D::CanvasContextAttributes::antialiasChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCanvas3D::CanvasContextAttributes::premultipliedAlphaChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCanvas3D::CanvasContextAttributes::preserveDrawingBufferChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCanvas3D::CanvasContextAttributes::preferLowPowerToHighPerformanceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCanvas3D::CanvasContextAttributes::failIfMajorPerformanceCaveatChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
