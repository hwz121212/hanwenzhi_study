/****************************************************************************
** Meta object code from reading C++ file 'qrendersurfaceselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qrendersurfaceselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrendersurfaceselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector_t {
    QByteArrayData data[14];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector_t qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qt3DRender::QRenderSurfaceSel..."
QT_MOC_LITERAL(1, 35, 14), // "surfaceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "surface"
QT_MOC_LITERAL(4, 59, 31), // "externalRenderTargetSizeChanged"
QT_MOC_LITERAL(5, 91, 4), // "size"
QT_MOC_LITERAL(6, 96, 24), // "surfacePixelRatioChanged"
QT_MOC_LITERAL(7, 121, 5), // "ratio"
QT_MOC_LITERAL(8, 127, 10), // "setSurface"
QT_MOC_LITERAL(9, 138, 13), // "surfaceObject"
QT_MOC_LITERAL(10, 152, 20), // "setSurfacePixelRatio"
QT_MOC_LITERAL(11, 173, 27), // "setExternalRenderTargetSize"
QT_MOC_LITERAL(12, 201, 24), // "externalRenderTargetSize"
QT_MOC_LITERAL(13, 226, 17) // "surfacePixelRatio"

    },
    "Qt3DRender::QRenderSurfaceSelector\0"
    "surfaceChanged\0\0surface\0"
    "externalRenderTargetSizeChanged\0size\0"
    "surfacePixelRatioChanged\0ratio\0"
    "setSurface\0surfaceObject\0setSurfacePixelRatio\0"
    "setExternalRenderTargetSize\0"
    "externalRenderTargetSize\0surfacePixelRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QRenderSurfaceSelector[] = {

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
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::QSize,    5,

 // properties: name, type, flags
       3, QMetaType::QObjectStar, 0x00495103,
      12, QMetaType::QSize, 0x00495103,
      13, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QRenderSurfaceSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRenderSurfaceSelector *_t = static_cast<QRenderSurfaceSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->surfaceChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->externalRenderTargetSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->surfacePixelRatioChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setSurface((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->setSurfacePixelRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setExternalRenderTargetSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRenderSurfaceSelector::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderSurfaceSelector::surfaceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRenderSurfaceSelector::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderSurfaceSelector::externalRenderTargetSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRenderSurfaceSelector::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderSurfaceSelector::surfacePixelRatioChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRenderSurfaceSelector *_t = static_cast<QRenderSurfaceSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->surface(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->externalRenderTargetSize(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->surfacePixelRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRenderSurfaceSelector *_t = static_cast<QRenderSurfaceSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSurface(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setExternalRenderTargetSize(*reinterpret_cast< QSize*>(_v)); break;
        case 2: _t->setSurfacePixelRatio(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QRenderSurfaceSelector::staticMetaObject = {
    { &Qt3DRender::QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector.data,
      qt_meta_data_Qt3DRender__QRenderSurfaceSelector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QRenderSurfaceSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QRenderSurfaceSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QRenderSurfaceSelector.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QRenderSurfaceSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QFrameGraphNode::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QRenderSurfaceSelector::surfaceChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QRenderSurfaceSelector::externalRenderTargetSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QRenderSurfaceSelector::surfacePixelRatioChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
