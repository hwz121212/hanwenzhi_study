/****************************************************************************
** Meta object code from reading C++ file 'qsgd3d12shadereffectnode_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qsgd3d12shadereffectnode_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsgd3d12shadereffectnode_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSGD3D12ShaderEffectNode_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSGD3D12ShaderEffectNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSGD3D12ShaderEffectNode_t qt_meta_stringdata_QSGD3D12ShaderEffectNode = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QSGD3D12ShaderEffectNode"
QT_MOC_LITERAL(1, 25, 19), // "handleTextureChange"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 30), // "handleTextureProviderDestroyed"
QT_MOC_LITERAL(4, 77, 6) // "object"

    },
    "QSGD3D12ShaderEffectNode\0handleTextureChange\0"
    "\0handleTextureProviderDestroyed\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSGD3D12ShaderEffectNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,

       0        // eod
};

void QSGD3D12ShaderEffectNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSGD3D12ShaderEffectNode *_t = static_cast<QSGD3D12ShaderEffectNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleTextureChange(); break;
        case 1: _t->handleTextureProviderDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSGD3D12ShaderEffectNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSGD3D12ShaderEffectNode.data,
      qt_meta_data_QSGD3D12ShaderEffectNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSGD3D12ShaderEffectNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSGD3D12ShaderEffectNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSGD3D12ShaderEffectNode.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSGShaderEffectNode"))
        return static_cast< QSGShaderEffectNode*>(this);
    return QObject::qt_metacast(_clname);
}

int QSGD3D12ShaderEffectNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
