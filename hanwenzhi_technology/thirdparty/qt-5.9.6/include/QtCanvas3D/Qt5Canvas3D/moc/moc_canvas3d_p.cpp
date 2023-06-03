/****************************************************************************
** Meta object code from reading C++ file 'canvas3d_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/canvas3d_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas3d_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__Canvas_t {
    QByteArrayData data[44];
    char stringdata0[596];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__Canvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__Canvas_t qt_meta_stringdata_QtCanvas3D__Canvas = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtCanvas3D::Canvas"
QT_MOC_LITERAL(1, 19, 10), // "needRender"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "devicePixelRatioChanged"
QT_MOC_LITERAL(4, 55, 5), // "ratio"
QT_MOC_LITERAL(5, 61, 14), // "contextChanged"
QT_MOC_LITERAL(6, 76, 14), // "CanvasContext*"
QT_MOC_LITERAL(7, 91, 7), // "context"
QT_MOC_LITERAL(8, 99, 10), // "fpsChanged"
QT_MOC_LITERAL(9, 110, 3), // "fps"
QT_MOC_LITERAL(10, 114, 16), // "pixelSizeChanged"
QT_MOC_LITERAL(11, 131, 9), // "pixelSize"
QT_MOC_LITERAL(12, 141, 19), // "renderTargetChanged"
QT_MOC_LITERAL(13, 161, 21), // "renderOnDemandChanged"
QT_MOC_LITERAL(14, 183, 11), // "contextLost"
QT_MOC_LITERAL(15, 195, 15), // "contextRestored"
QT_MOC_LITERAL(16, 211, 12), // "initializeGL"
QT_MOC_LITERAL(17, 224, 7), // "paintGL"
QT_MOC_LITERAL(18, 232, 8), // "resizeGL"
QT_MOC_LITERAL(19, 241, 5), // "width"
QT_MOC_LITERAL(20, 247, 6), // "height"
QT_MOC_LITERAL(21, 254, 16), // "devicePixelRatio"
QT_MOC_LITERAL(22, 271, 12), // "textureReady"
QT_MOC_LITERAL(23, 284, 2), // "id"
QT_MOC_LITERAL(24, 287, 4), // "size"
QT_MOC_LITERAL(25, 292, 13), // "requestRender"
QT_MOC_LITERAL(26, 306, 15), // "queueNextRender"
QT_MOC_LITERAL(27, 322, 13), // "queueResizeGL"
QT_MOC_LITERAL(28, 336, 14), // "emitNeedRender"
QT_MOC_LITERAL(29, 351, 25), // "handleBeforeSynchronizing"
QT_MOC_LITERAL(30, 377, 23), // "handleRendererFpsChange"
QT_MOC_LITERAL(31, 401, 17), // "handleContextLost"
QT_MOC_LITERAL(32, 419, 11), // "frameTimeMs"
QT_MOC_LITERAL(33, 431, 16), // "frameSetupTimeMs"
QT_MOC_LITERAL(34, 448, 10), // "getContext"
QT_MOC_LITERAL(35, 459, 8), // "QJSValue"
QT_MOC_LITERAL(36, 468, 4), // "name"
QT_MOC_LITERAL(37, 473, 7), // "options"
QT_MOC_LITERAL(38, 481, 12), // "renderTarget"
QT_MOC_LITERAL(39, 494, 12), // "RenderTarget"
QT_MOC_LITERAL(40, 507, 14), // "renderOnDemand"
QT_MOC_LITERAL(41, 522, 27), // "RenderTargetOffscreenBuffer"
QT_MOC_LITERAL(42, 550, 22), // "RenderTargetBackground"
QT_MOC_LITERAL(43, 573, 22) // "RenderTargetForeground"

    },
    "QtCanvas3D::Canvas\0needRender\0\0"
    "devicePixelRatioChanged\0ratio\0"
    "contextChanged\0CanvasContext*\0context\0"
    "fpsChanged\0fps\0pixelSizeChanged\0"
    "pixelSize\0renderTargetChanged\0"
    "renderOnDemandChanged\0contextLost\0"
    "contextRestored\0initializeGL\0paintGL\0"
    "resizeGL\0width\0height\0devicePixelRatio\0"
    "textureReady\0id\0size\0requestRender\0"
    "queueNextRender\0queueResizeGL\0"
    "emitNeedRender\0handleBeforeSynchronizing\0"
    "handleRendererFpsChange\0handleContextLost\0"
    "frameTimeMs\0frameSetupTimeMs\0getContext\0"
    "QJSValue\0name\0options\0renderTarget\0"
    "RenderTarget\0renderOnDemand\0"
    "RenderTargetOffscreenBuffer\0"
    "RenderTargetBackground\0RenderTargetForeground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__Canvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       6,  210, // properties
       1,  240, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  158,    2, 0x06 /* Public */,
       3,    1,  159,    2, 0x06 /* Public */,
       5,    1,  162,    2, 0x06 /* Public */,
       8,    1,  165,    2, 0x06 /* Public */,
      10,    1,  168,    2, 0x06 /* Public */,
      12,    0,  171,    2, 0x06 /* Public */,
      13,    0,  172,    2, 0x06 /* Public */,
      14,    0,  173,    2, 0x06 /* Public */,
      15,    0,  174,    2, 0x06 /* Public */,
      16,    0,  175,    2, 0x06 /* Public */,
      17,    0,  176,    2, 0x06 /* Public */,
      18,    3,  177,    2, 0x06 /* Public */,
      22,    3,  184,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  191,    2, 0x0a /* Public */,
      26,    0,  192,    2, 0x08 /* Private */,
      27,    0,  193,    2, 0x08 /* Private */,
      28,    0,  194,    2, 0x08 /* Private */,
      29,    0,  195,    2, 0x08 /* Private */,
      30,    1,  196,    2, 0x08 /* Private */,
      31,    0,  199,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      32,    0,  200,    2, 0x02 /* Public */,
      33,    0,  201,    2, 0x82 /* Public | MethodRevisioned */,
      34,    1,  202,    2, 0x02 /* Public */,
      34,    2,  205,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // methods: revision
       0,
       1,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::QSize,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float,   19,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QSize, QMetaType::Float,   23,   24,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 35, QMetaType::QString,   36,
    0x80000000 | 35, QMetaType::QString, QMetaType::QVariantMap,   36,   37,

 // properties: name, type, flags
       7, 0x80000000 | 6, 0x00495009,
      21, QMetaType::Float, 0x00495001,
       9, QMetaType::UInt, 0x00495001,
      11, QMetaType::QSize, 0x00495103,
      38, 0x80000000 | 39, 0x00c9510b,
      40, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       2,
       1,
       3,
       4,
       5,
       6,

 // properties: revision
       0,
       0,
       0,
       0,
       1,
       1,

 // enums: name, flags, count, data
      39, 0x0,    3,  244,

 // enum data: key, value
      41, uint(QtCanvas3D::Canvas::RenderTargetOffscreenBuffer),
      42, uint(QtCanvas3D::Canvas::RenderTargetBackground),
      43, uint(QtCanvas3D::Canvas::RenderTargetForeground),

       0        // eod
};

void QtCanvas3D::Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Canvas *_t = static_cast<Canvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->needRender(); break;
        case 1: _t->devicePixelRatioChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->contextChanged((*reinterpret_cast< CanvasContext*(*)>(_a[1]))); break;
        case 3: _t->fpsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->pixelSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 5: _t->renderTargetChanged(); break;
        case 6: _t->renderOnDemandChanged(); break;
        case 7: _t->contextLost(); break;
        case 8: _t->contextRestored(); break;
        case 9: _t->initializeGL(); break;
        case 10: _t->paintGL(); break;
        case 11: _t->resizeGL((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 12: _t->textureReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 13: _t->requestRender(); break;
        case 14: _t->queueNextRender(); break;
        case 15: _t->queueResizeGL(); break;
        case 16: _t->emitNeedRender(); break;
        case 17: _t->handleBeforeSynchronizing(); break;
        case 18: _t->handleRendererFpsChange((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 19: _t->handleContextLost(); break;
        case 20: { int _r = _t->frameTimeMs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->frameSetupTimeMs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { QJSValue _r = _t->getContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 23: { QJSValue _r = _t->getContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CanvasContext* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::needRender)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::devicePixelRatioChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(CanvasContext * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::contextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::fpsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::pixelSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::renderTargetChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::renderOnDemandChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::contextLost)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::contextRestored)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::initializeGL)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::paintGL)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(int , int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::resizeGL)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Canvas::*_t)(int , const QSize & , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::textureReady)) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CanvasContext* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Canvas *_t = static_cast<Canvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CanvasContext**>(_v) = _t->context(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->devicePixelRatio(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->fps(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->pixelSize(); break;
        case 4: *reinterpret_cast< RenderTarget*>(_v) = _t->renderTarget(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->renderOnDemand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Canvas *_t = static_cast<Canvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setPixelSize(*reinterpret_cast< QSize*>(_v)); break;
        case 4: _t->setRenderTarget(*reinterpret_cast< RenderTarget*>(_v)); break;
        case 5: _t->setRenderOnDemand(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCanvas3D::Canvas::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QtCanvas3D__Canvas.data,
      qt_meta_data_QtCanvas3D__Canvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__Canvas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QtCanvas3D::Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCanvas3D::Canvas::needRender()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCanvas3D::Canvas::devicePixelRatioChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCanvas3D::Canvas::contextChanged(CanvasContext * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCanvas3D::Canvas::fpsChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCanvas3D::Canvas::pixelSizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCanvas3D::Canvas::renderTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCanvas3D::Canvas::renderOnDemandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCanvas3D::Canvas::contextLost()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtCanvas3D::Canvas::contextRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtCanvas3D::Canvas::initializeGL()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QtCanvas3D::Canvas::paintGL()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QtCanvas3D::Canvas::resizeGL(int _t1, int _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QtCanvas3D::Canvas::textureReady(int _t1, const QSize & _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
