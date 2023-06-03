/****************************************************************************
** Meta object code from reading C++ file 'quick3dshaderdataarray_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuickRender/private/quick3dshaderdataarray_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3dshaderdataarray_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray_t {
    QByteArrayData data[4];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray_t qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray = {
    {
QT_MOC_LITERAL(0, 0, 49), // "Qt3DRender::Render::Quick::Qu..."
QT_MOC_LITERAL(1, 50, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 66, 6), // "values"
QT_MOC_LITERAL(3, 73, 41) // "QQmlListProperty<Qt3DRender::..."

    },
    "Qt3DRender::Render::Quick::Quick3DShaderDataArray\0"
    "DefaultProperty\0values\0"
    "QQmlListProperty<Qt3DRender::QShaderData>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__Render__Quick__Quick3DShaderDataArray[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       1,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // properties: name, type, flags
       2, 0x80000000 | 3, 0x00095009,

       0        // eod
};

void Qt3DRender::Render::Quick::Quick3DShaderDataArray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Quick3DShaderDataArray *_t = static_cast<Quick3DShaderDataArray *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<Qt3DRender::QShaderData>*>(_v) = _t->valuesList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DRender::Render::Quick::Quick3DShaderDataArray::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray.data,
      qt_meta_data_Qt3DRender__Render__Quick__Quick3DShaderDataArray,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::Render::Quick::Quick3DShaderDataArray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::Render::Quick::Quick3DShaderDataArray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DShaderDataArray.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DRender::Render::Quick::Quick3DShaderDataArray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
