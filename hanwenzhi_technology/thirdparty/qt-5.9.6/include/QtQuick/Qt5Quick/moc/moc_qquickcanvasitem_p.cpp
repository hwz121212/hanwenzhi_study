/****************************************************************************
** Meta object code from reading C++ file 'qquickcanvasitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickcanvasitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcanvasitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCanvasItem_t {
    QByteArrayData data[53];
    char stringdata0[693];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCanvasItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCanvasItem_t qt_meta_stringdata_QQuickCanvasItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickCanvasItem"
QT_MOC_LITERAL(1, 17, 5), // "paint"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "region"
QT_MOC_LITERAL(4, 31, 7), // "painted"
QT_MOC_LITERAL(5, 39, 16), // "availableChanged"
QT_MOC_LITERAL(6, 56, 18), // "contextTypeChanged"
QT_MOC_LITERAL(7, 75, 14), // "contextChanged"
QT_MOC_LITERAL(8, 90, 17), // "canvasSizeChanged"
QT_MOC_LITERAL(9, 108, 15), // "tileSizeChanged"
QT_MOC_LITERAL(10, 124, 19), // "canvasWindowChanged"
QT_MOC_LITERAL(11, 144, 19), // "renderTargetChanged"
QT_MOC_LITERAL(12, 164, 21), // "renderStrategyChanged"
QT_MOC_LITERAL(13, 186, 11), // "imageLoaded"
QT_MOC_LITERAL(14, 198, 9), // "loadImage"
QT_MOC_LITERAL(15, 208, 3), // "url"
QT_MOC_LITERAL(16, 212, 11), // "unloadImage"
QT_MOC_LITERAL(17, 224, 13), // "isImageLoaded"
QT_MOC_LITERAL(18, 238, 14), // "isImageLoading"
QT_MOC_LITERAL(19, 253, 12), // "isImageError"
QT_MOC_LITERAL(20, 266, 21), // "sceneGraphInitialized"
QT_MOC_LITERAL(21, 288, 23), // "checkAnimationCallbacks"
QT_MOC_LITERAL(22, 312, 20), // "invalidateSceneGraph"
QT_MOC_LITERAL(23, 333, 14), // "schedulePolish"
QT_MOC_LITERAL(24, 348, 10), // "getContext"
QT_MOC_LITERAL(25, 359, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(26, 375, 4), // "args"
QT_MOC_LITERAL(27, 380, 21), // "requestAnimationFrame"
QT_MOC_LITERAL(28, 402, 27), // "cancelRequestAnimationFrame"
QT_MOC_LITERAL(29, 430, 12), // "requestPaint"
QT_MOC_LITERAL(30, 443, 9), // "markDirty"
QT_MOC_LITERAL(31, 453, 9), // "dirtyRect"
QT_MOC_LITERAL(32, 463, 4), // "save"
QT_MOC_LITERAL(33, 468, 8), // "filename"
QT_MOC_LITERAL(34, 477, 9), // "toDataURL"
QT_MOC_LITERAL(35, 487, 4), // "type"
QT_MOC_LITERAL(36, 492, 13), // "delayedCreate"
QT_MOC_LITERAL(37, 506, 9), // "available"
QT_MOC_LITERAL(38, 516, 11), // "contextType"
QT_MOC_LITERAL(39, 528, 7), // "context"
QT_MOC_LITERAL(40, 536, 12), // "QQmlV4Handle"
QT_MOC_LITERAL(41, 549, 10), // "canvasSize"
QT_MOC_LITERAL(42, 560, 8), // "tileSize"
QT_MOC_LITERAL(43, 569, 12), // "canvasWindow"
QT_MOC_LITERAL(44, 582, 12), // "renderTarget"
QT_MOC_LITERAL(45, 595, 12), // "RenderTarget"
QT_MOC_LITERAL(46, 608, 14), // "renderStrategy"
QT_MOC_LITERAL(47, 623, 14), // "RenderStrategy"
QT_MOC_LITERAL(48, 638, 5), // "Image"
QT_MOC_LITERAL(49, 644, 17), // "FramebufferObject"
QT_MOC_LITERAL(50, 662, 9), // "Immediate"
QT_MOC_LITERAL(51, 672, 8), // "Threaded"
QT_MOC_LITERAL(52, 681, 11) // "Cooperative"

    },
    "QQuickCanvasItem\0paint\0\0region\0painted\0"
    "availableChanged\0contextTypeChanged\0"
    "contextChanged\0canvasSizeChanged\0"
    "tileSizeChanged\0canvasWindowChanged\0"
    "renderTargetChanged\0renderStrategyChanged\0"
    "imageLoaded\0loadImage\0url\0unloadImage\0"
    "isImageLoaded\0isImageLoading\0isImageError\0"
    "sceneGraphInitialized\0checkAnimationCallbacks\0"
    "invalidateSceneGraph\0schedulePolish\0"
    "getContext\0QQmlV4Function*\0args\0"
    "requestAnimationFrame\0cancelRequestAnimationFrame\0"
    "requestPaint\0markDirty\0dirtyRect\0save\0"
    "filename\0toDataURL\0type\0delayedCreate\0"
    "available\0contextType\0context\0"
    "QQmlV4Handle\0canvasSize\0tileSize\0"
    "canvasWindow\0renderTarget\0RenderTarget\0"
    "renderStrategy\0RenderStrategy\0Image\0"
    "FramebufferObject\0Immediate\0Threaded\0"
    "Cooperative"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCanvasItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       8,  218, // properties
       2,  250, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    0,  167,    2, 0x06 /* Public */,
       5,    0,  168,    2, 0x06 /* Public */,
       6,    0,  169,    2, 0x06 /* Public */,
       7,    0,  170,    2, 0x06 /* Public */,
       8,    0,  171,    2, 0x06 /* Public */,
       9,    0,  172,    2, 0x06 /* Public */,
      10,    0,  173,    2, 0x06 /* Public */,
      11,    0,  174,    2, 0x06 /* Public */,
      12,    0,  175,    2, 0x06 /* Public */,
      13,    0,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  177,    2, 0x0a /* Public */,
      16,    1,  180,    2, 0x0a /* Public */,
      17,    1,  183,    2, 0x0a /* Public */,
      18,    1,  186,    2, 0x0a /* Public */,
      19,    1,  189,    2, 0x0a /* Public */,
      20,    0,  192,    2, 0x08 /* Private */,
      21,    0,  193,    2, 0x08 /* Private */,
      22,    0,  194,    2, 0x08 /* Private */,
      23,    0,  195,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      24,    1,  196,    2, 0x02 /* Public */,
      27,    1,  199,    2, 0x02 /* Public */,
      28,    1,  202,    2, 0x02 /* Public */,
      29,    0,  205,    2, 0x02 /* Public */,
      30,    1,  206,    2, 0x02 /* Public */,
      30,    0,  209,    2, 0x22 /* Public | MethodCloned */,
      32,    1,  210,    2, 0x02 /* Public */,
      34,    1,  213,    2, 0x02 /* Public */,
      34,    0,  216,    2, 0x22 /* Public | MethodCloned */,
      36,    0,  217,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Bool, QMetaType::QUrl,   15,
    QMetaType::Bool, QMetaType::QUrl,   15,
    QMetaType::Bool, QMetaType::QUrl,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   31,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   33,
    QMetaType::QString, QMetaType::QString,   35,
    QMetaType::QString,
    QMetaType::Void,

 // properties: name, type, flags
      37, QMetaType::Bool, 0x00495001,
      38, QMetaType::QString, 0x00495103,
      39, 0x80000000 | 40, 0x00495009,
      41, QMetaType::QSizeF, 0x00495103,
      42, QMetaType::QSize, 0x00495103,
      43, QMetaType::QRectF, 0x00495103,
      44, 0x80000000 | 45, 0x0049510b,
      46, 0x80000000 | 47, 0x0049510b,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

 // enums: name, flags, count, data
      45, 0x0,    2,  258,
      47, 0x0,    3,  262,

 // enum data: key, value
      48, uint(QQuickCanvasItem::Image),
      49, uint(QQuickCanvasItem::FramebufferObject),
      50, uint(QQuickCanvasItem::Immediate),
      51, uint(QQuickCanvasItem::Threaded),
      52, uint(QQuickCanvasItem::Cooperative),

       0        // eod
};

void QQuickCanvasItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCanvasItem *_t = static_cast<QQuickCanvasItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paint((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->painted(); break;
        case 2: _t->availableChanged(); break;
        case 3: _t->contextTypeChanged(); break;
        case 4: _t->contextChanged(); break;
        case 5: _t->canvasSizeChanged(); break;
        case 6: _t->tileSizeChanged(); break;
        case 7: _t->canvasWindowChanged(); break;
        case 8: _t->renderTargetChanged(); break;
        case 9: _t->renderStrategyChanged(); break;
        case 10: _t->imageLoaded(); break;
        case 11: _t->loadImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->unloadImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 13: { bool _r = _t->isImageLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isImageLoading((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isImageError((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->sceneGraphInitialized(); break;
        case 17: _t->checkAnimationCallbacks(); break;
        case 18: _t->invalidateSceneGraph(); break;
        case 19: _t->schedulePolish(); break;
        case 20: _t->getContext((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 21: _t->requestAnimationFrame((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 22: _t->cancelRequestAnimationFrame((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 23: _t->requestPaint(); break;
        case 24: _t->markDirty((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 25: _t->markDirty(); break;
        case 26: { bool _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->toDataURL((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { QString _r = _t->toDataURL();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->delayedCreate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCanvasItem::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::paint)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::painted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::availableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::contextTypeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::contextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::canvasSizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::tileSizeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::canvasWindowChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::renderTargetChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::renderStrategyChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QQuickCanvasItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCanvasItem::imageLoaded)) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlV4Handle >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCanvasItem *_t = static_cast<QQuickCanvasItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAvailable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->contextType(); break;
        case 2: *reinterpret_cast< QQmlV4Handle*>(_v) = _t->context(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = _t->canvasSize(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->tileSize(); break;
        case 5: *reinterpret_cast< QRectF*>(_v) = _t->canvasWindow(); break;
        case 6: *reinterpret_cast< RenderTarget*>(_v) = _t->renderTarget(); break;
        case 7: *reinterpret_cast< RenderStrategy*>(_v) = _t->renderStrategy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCanvasItem *_t = static_cast<QQuickCanvasItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setContextType(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCanvasSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 4: _t->setTileSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setCanvasWindow(*reinterpret_cast< QRectF*>(_v)); break;
        case 6: _t->setRenderTarget(*reinterpret_cast< RenderTarget*>(_v)); break;
        case 7: _t->setRenderStrategy(*reinterpret_cast< RenderStrategy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickCanvasItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickCanvasItem.data,
      qt_meta_data_QQuickCanvasItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCanvasItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCanvasItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCanvasItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickCanvasItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
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
void QQuickCanvasItem::paint(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickCanvasItem::painted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickCanvasItem::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickCanvasItem::contextTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickCanvasItem::contextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickCanvasItem::canvasSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickCanvasItem::tileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickCanvasItem::canvasWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickCanvasItem::renderTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickCanvasItem::renderStrategyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QQuickCanvasItem::imageLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_QQuickContext2DRenderThread_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickContext2DRenderThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickContext2DRenderThread_t qt_meta_stringdata_QQuickContext2DRenderThread = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QQuickContext2DRenderThread"

    },
    "QQuickContext2DRenderThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickContext2DRenderThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickContext2DRenderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickContext2DRenderThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QQuickContext2DRenderThread.data,
      qt_meta_data_QQuickContext2DRenderThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickContext2DRenderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickContext2DRenderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickContext2DRenderThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QQuickContext2DRenderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
