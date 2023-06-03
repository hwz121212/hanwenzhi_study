/****************************************************************************
** Meta object code from reading C++ file 'qclearbuffers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qclearbuffers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qclearbuffers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QClearBuffers_t {
    QByteArrayData data[30];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QClearBuffers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QClearBuffers_t qt_meta_stringdata_Qt3DRender__QClearBuffers = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3DRender::QClearBuffers"
QT_MOC_LITERAL(1, 26, 14), // "buffersChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "BufferType"
QT_MOC_LITERAL(4, 53, 7), // "buffers"
QT_MOC_LITERAL(5, 61, 17), // "clearColorChanged"
QT_MOC_LITERAL(6, 79, 5), // "color"
QT_MOC_LITERAL(7, 85, 22), // "clearDepthValueChanged"
QT_MOC_LITERAL(8, 108, 15), // "clearDepthValue"
QT_MOC_LITERAL(9, 124, 24), // "clearStencilValueChanged"
QT_MOC_LITERAL(10, 149, 17), // "clearStencilValue"
QT_MOC_LITERAL(11, 167, 18), // "colorBufferChanged"
QT_MOC_LITERAL(12, 186, 20), // "QRenderTargetOutput*"
QT_MOC_LITERAL(13, 207, 6), // "buffer"
QT_MOC_LITERAL(14, 214, 10), // "setBuffers"
QT_MOC_LITERAL(15, 225, 13), // "setClearColor"
QT_MOC_LITERAL(16, 239, 18), // "setClearDepthValue"
QT_MOC_LITERAL(17, 258, 20), // "setClearStencilValue"
QT_MOC_LITERAL(18, 279, 14), // "setColorBuffer"
QT_MOC_LITERAL(19, 294, 10), // "clearColor"
QT_MOC_LITERAL(20, 305, 11), // "colorBuffer"
QT_MOC_LITERAL(21, 317, 32), // "Qt3DRender::QRenderTargetOutput*"
QT_MOC_LITERAL(22, 350, 4), // "None"
QT_MOC_LITERAL(23, 355, 11), // "ColorBuffer"
QT_MOC_LITERAL(24, 367, 11), // "DepthBuffer"
QT_MOC_LITERAL(25, 379, 13), // "StencilBuffer"
QT_MOC_LITERAL(26, 393, 18), // "DepthStencilBuffer"
QT_MOC_LITERAL(27, 412, 16), // "ColorDepthBuffer"
QT_MOC_LITERAL(28, 429, 23), // "ColorDepthStencilBuffer"
QT_MOC_LITERAL(29, 453, 10) // "AllBuffers"

    },
    "Qt3DRender::QClearBuffers\0buffersChanged\0"
    "\0BufferType\0buffers\0clearColorChanged\0"
    "color\0clearDepthValueChanged\0"
    "clearDepthValue\0clearStencilValueChanged\0"
    "clearStencilValue\0colorBufferChanged\0"
    "QRenderTargetOutput*\0buffer\0setBuffers\0"
    "setClearColor\0setClearDepthValue\0"
    "setClearStencilValue\0setColorBuffer\0"
    "clearColor\0colorBuffer\0"
    "Qt3DRender::QRenderTargetOutput*\0None\0"
    "ColorBuffer\0DepthBuffer\0StencilBuffer\0"
    "DepthStencilBuffer\0ColorDepthBuffer\0"
    "ColorDepthStencilBuffer\0AllBuffers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QClearBuffers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   79,    2, 0x0a /* Public */,
      15,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      19, QMetaType::QColor, 0x00495103,
       8, QMetaType::Float, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      20, 0x80000000 | 21, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
       3, 0x0,    8,  118,

 // enum data: key, value
      22, uint(Qt3DRender::QClearBuffers::None),
      23, uint(Qt3DRender::QClearBuffers::ColorBuffer),
      24, uint(Qt3DRender::QClearBuffers::DepthBuffer),
      25, uint(Qt3DRender::QClearBuffers::StencilBuffer),
      26, uint(Qt3DRender::QClearBuffers::DepthStencilBuffer),
      27, uint(Qt3DRender::QClearBuffers::ColorDepthBuffer),
      28, uint(Qt3DRender::QClearBuffers::ColorDepthStencilBuffer),
      29, uint(Qt3DRender::QClearBuffers::AllBuffers),

       0        // eod
};

void Qt3DRender::QClearBuffers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QClearBuffers *_t = static_cast<QClearBuffers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buffersChanged((*reinterpret_cast< BufferType(*)>(_a[1]))); break;
        case 1: _t->clearColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->clearDepthValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->clearStencilValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->colorBufferChanged((*reinterpret_cast< QRenderTargetOutput*(*)>(_a[1]))); break;
        case 5: _t->setBuffers((*reinterpret_cast< BufferType(*)>(_a[1]))); break;
        case 6: _t->setClearColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setClearDepthValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setClearStencilValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setColorBuffer((*reinterpret_cast< QRenderTargetOutput*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRenderTargetOutput* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRenderTargetOutput* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QClearBuffers::*_t)(BufferType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClearBuffers::buffersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QClearBuffers::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClearBuffers::clearColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QClearBuffers::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClearBuffers::clearDepthValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QClearBuffers::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClearBuffers::clearStencilValueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QClearBuffers::*_t)(QRenderTargetOutput * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QClearBuffers::colorBufferChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QRenderTargetOutput* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QClearBuffers *_t = static_cast<QClearBuffers *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BufferType*>(_v) = _t->buffers(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->clearColor(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->clearDepthValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->clearStencilValue(); break;
        case 4: *reinterpret_cast< Qt3DRender::QRenderTargetOutput**>(_v) = _t->colorBuffer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QClearBuffers *_t = static_cast<QClearBuffers *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBuffers(*reinterpret_cast< BufferType*>(_v)); break;
        case 1: _t->setClearColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setClearDepthValue(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setClearStencilValue(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColorBuffer(*reinterpret_cast< Qt3DRender::QRenderTargetOutput**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QClearBuffers::staticMetaObject = {
    { &QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QClearBuffers.data,
      qt_meta_data_Qt3DRender__QClearBuffers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QClearBuffers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QClearBuffers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QClearBuffers.stringdata0))
        return static_cast<void*>(this);
    return QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QClearBuffers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrameGraphNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void Qt3DRender::QClearBuffers::buffersChanged(BufferType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QClearBuffers::clearColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QClearBuffers::clearDepthValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DRender::QClearBuffers::clearStencilValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DRender::QClearBuffers::colorBufferChanged(QRenderTargetOutput * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
