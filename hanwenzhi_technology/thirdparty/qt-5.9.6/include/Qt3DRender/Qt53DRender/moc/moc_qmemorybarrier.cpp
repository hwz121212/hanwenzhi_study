/****************************************************************************
** Meta object code from reading C++ file 'qmemorybarrier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmemorybarrier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmemorybarrier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QMemoryBarrier_t {
    QByteArrayData data[24];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QMemoryBarrier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QMemoryBarrier_t qt_meta_stringdata_Qt3DRender__QMemoryBarrier = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DRender::QMemoryBarrier"
QT_MOC_LITERAL(1, 27, 21), // "waitOperationsChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 26), // "QMemoryBarrier::Operations"
QT_MOC_LITERAL(4, 77, 12), // "barrierTypes"
QT_MOC_LITERAL(5, 90, 17), // "setWaitOperations"
QT_MOC_LITERAL(6, 108, 10), // "operations"
QT_MOC_LITERAL(7, 119, 9), // "Operation"
QT_MOC_LITERAL(8, 129, 4), // "None"
QT_MOC_LITERAL(9, 134, 20), // "VertexAttributeArray"
QT_MOC_LITERAL(10, 155, 12), // "ElementArray"
QT_MOC_LITERAL(11, 168, 7), // "Uniform"
QT_MOC_LITERAL(12, 176, 12), // "TextureFetch"
QT_MOC_LITERAL(13, 189, 17), // "ShaderImageAccess"
QT_MOC_LITERAL(14, 207, 7), // "Command"
QT_MOC_LITERAL(15, 215, 11), // "PixelBuffer"
QT_MOC_LITERAL(16, 227, 13), // "TextureUpdate"
QT_MOC_LITERAL(17, 241, 12), // "BufferUpdate"
QT_MOC_LITERAL(18, 254, 11), // "FrameBuffer"
QT_MOC_LITERAL(19, 266, 17), // "TransformFeedback"
QT_MOC_LITERAL(20, 284, 13), // "AtomicCounter"
QT_MOC_LITERAL(21, 298, 13), // "ShaderStorage"
QT_MOC_LITERAL(22, 312, 11), // "QueryBuffer"
QT_MOC_LITERAL(23, 324, 3) // "All"

    },
    "Qt3DRender::QMemoryBarrier\0"
    "waitOperationsChanged\0\0"
    "QMemoryBarrier::Operations\0barrierTypes\0"
    "setWaitOperations\0operations\0Operation\0"
    "None\0VertexAttributeArray\0ElementArray\0"
    "Uniform\0TextureFetch\0ShaderImageAccess\0"
    "Command\0PixelBuffer\0TextureUpdate\0"
    "BufferUpdate\0FrameBuffer\0TransformFeedback\0"
    "AtomicCounter\0ShaderStorage\0QueryBuffer\0"
    "All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QMemoryBarrier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,

 // enums: name, flags, count, data
       7, 0x0,   16,   34,

 // enum data: key, value
       8, uint(Qt3DRender::QMemoryBarrier::None),
       9, uint(Qt3DRender::QMemoryBarrier::VertexAttributeArray),
      10, uint(Qt3DRender::QMemoryBarrier::ElementArray),
      11, uint(Qt3DRender::QMemoryBarrier::Uniform),
      12, uint(Qt3DRender::QMemoryBarrier::TextureFetch),
      13, uint(Qt3DRender::QMemoryBarrier::ShaderImageAccess),
      14, uint(Qt3DRender::QMemoryBarrier::Command),
      15, uint(Qt3DRender::QMemoryBarrier::PixelBuffer),
      16, uint(Qt3DRender::QMemoryBarrier::TextureUpdate),
      17, uint(Qt3DRender::QMemoryBarrier::BufferUpdate),
      18, uint(Qt3DRender::QMemoryBarrier::FrameBuffer),
      19, uint(Qt3DRender::QMemoryBarrier::TransformFeedback),
      20, uint(Qt3DRender::QMemoryBarrier::AtomicCounter),
      21, uint(Qt3DRender::QMemoryBarrier::ShaderStorage),
      22, uint(Qt3DRender::QMemoryBarrier::QueryBuffer),
      23, uint(Qt3DRender::QMemoryBarrier::All),

       0        // eod
};

void Qt3DRender::QMemoryBarrier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMemoryBarrier *_t = static_cast<QMemoryBarrier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waitOperationsChanged((*reinterpret_cast< QMemoryBarrier::Operations(*)>(_a[1]))); break;
        case 1: _t->setWaitOperations((*reinterpret_cast< QMemoryBarrier::Operations(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMemoryBarrier::*_t)(QMemoryBarrier::Operations );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMemoryBarrier::waitOperationsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qt3DRender::QMemoryBarrier::staticMetaObject = {
    { &QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QMemoryBarrier.data,
      qt_meta_data_Qt3DRender__QMemoryBarrier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QMemoryBarrier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QMemoryBarrier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QMemoryBarrier.stringdata0))
        return static_cast<void*>(this);
    return QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QMemoryBarrier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrameGraphNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qt3DRender::QMemoryBarrier::waitOperationsChanged(QMemoryBarrier::Operations _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
