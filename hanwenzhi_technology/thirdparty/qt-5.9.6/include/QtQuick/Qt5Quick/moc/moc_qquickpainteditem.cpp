/****************************************************************************
** Meta object code from reading C++ file 'qquickpainteditem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickpainteditem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpainteditem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPaintedItem_t {
    QByteArrayData data[17];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPaintedItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPaintedItem_t qt_meta_stringdata_QQuickPaintedItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickPaintedItem"
QT_MOC_LITERAL(1, 18, 16), // "fillColorChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "contentsSizeChanged"
QT_MOC_LITERAL(4, 56, 20), // "contentsScaleChanged"
QT_MOC_LITERAL(5, 77, 19), // "renderTargetChanged"
QT_MOC_LITERAL(6, 97, 18), // "textureSizeChanged"
QT_MOC_LITERAL(7, 116, 20), // "invalidateSceneGraph"
QT_MOC_LITERAL(8, 137, 12), // "contentsSize"
QT_MOC_LITERAL(9, 150, 9), // "fillColor"
QT_MOC_LITERAL(10, 160, 13), // "contentsScale"
QT_MOC_LITERAL(11, 174, 12), // "renderTarget"
QT_MOC_LITERAL(12, 187, 12), // "RenderTarget"
QT_MOC_LITERAL(13, 200, 11), // "textureSize"
QT_MOC_LITERAL(14, 212, 5), // "Image"
QT_MOC_LITERAL(15, 218, 17), // "FramebufferObject"
QT_MOC_LITERAL(16, 236, 26) // "InvertedYFramebufferObject"

    },
    "QQuickPaintedItem\0fillColorChanged\0\0"
    "contentsSizeChanged\0contentsScaleChanged\0"
    "renderTargetChanged\0textureSizeChanged\0"
    "invalidateSceneGraph\0contentsSize\0"
    "fillColor\0contentsScale\0renderTarget\0"
    "RenderTarget\0textureSize\0Image\0"
    "FramebufferObject\0InvertedYFramebufferObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPaintedItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QSize, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
      10, QMetaType::QReal, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,
      13, QMetaType::QSize, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,

 // enums: name, flags, count, data
      12, 0x0,    3,   74,

 // enum data: key, value
      14, uint(QQuickPaintedItem::Image),
      15, uint(QQuickPaintedItem::FramebufferObject),
      16, uint(QQuickPaintedItem::InvertedYFramebufferObject),

       0        // eod
};

void QQuickPaintedItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPaintedItem *_t = static_cast<QQuickPaintedItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fillColorChanged(); break;
        case 1: _t->contentsSizeChanged(); break;
        case 2: _t->contentsScaleChanged(); break;
        case 3: _t->renderTargetChanged(); break;
        case 4: _t->textureSizeChanged(); break;
        case 5: _t->invalidateSceneGraph(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPaintedItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaintedItem::fillColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPaintedItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaintedItem::contentsSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPaintedItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaintedItem::contentsScaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPaintedItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaintedItem::renderTargetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPaintedItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaintedItem::textureSizeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPaintedItem *_t = static_cast<QQuickPaintedItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->contentsSize(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->contentsScale(); break;
        case 3: *reinterpret_cast< RenderTarget*>(_v) = _t->renderTarget(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->textureSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPaintedItem *_t = static_cast<QQuickPaintedItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentsSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setContentsScale(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setRenderTarget(*reinterpret_cast< RenderTarget*>(_v)); break;
        case 4: _t->setTextureSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPaintedItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickPaintedItem.data,
      qt_meta_data_QQuickPaintedItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPaintedItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPaintedItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPaintedItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickPaintedItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPaintedItem::fillColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPaintedItem::contentsSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPaintedItem::contentsScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPaintedItem::renderTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPaintedItem::textureSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
