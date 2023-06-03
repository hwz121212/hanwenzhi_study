/****************************************************************************
** Meta object code from reading C++ file 'qquickgenericshadereffect_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickgenericshadereffect_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickgenericshadereffect_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickGenericShaderEffect_t {
    QByteArrayData data[15];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGenericShaderEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGenericShaderEffect_t qt_meta_stringdata_QQuickGenericShaderEffect = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickGenericShaderEffect"
QT_MOC_LITERAL(1, 26, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "mappedId"
QT_MOC_LITERAL(4, 52, 15), // "sourceDestroyed"
QT_MOC_LITERAL(5, 68, 6), // "object"
QT_MOC_LITERAL(6, 75, 26), // "markGeometryDirtyAndUpdate"
QT_MOC_LITERAL(7, 102, 41), // "markGeometryDirtyAndUpdateIfS..."
QT_MOC_LITERAL(8, 144, 18), // "shaderCodePrepared"
QT_MOC_LITERAL(9, 163, 2), // "ok"
QT_MOC_LITERAL(10, 166, 49), // "QSGGuiThreadShaderEffectManag..."
QT_MOC_LITERAL(11, 216, 8), // "typeHint"
QT_MOC_LITERAL(12, 225, 3), // "src"
QT_MOC_LITERAL(13, 229, 44), // "QSGGuiThreadShaderEffectManag..."
QT_MOC_LITERAL(14, 274, 6) // "result"

    },
    "QQuickGenericShaderEffect\0propertyChanged\0"
    "\0mappedId\0sourceDestroyed\0object\0"
    "markGeometryDirtyAndUpdate\0"
    "markGeometryDirtyAndUpdateIfSupportsAtlas\0"
    "shaderCodePrepared\0ok\0"
    "QSGGuiThreadShaderEffectManager::ShaderInfo::Type\0"
    "typeHint\0src\0QSGGuiThreadShaderEffectManager::ShaderInfo*\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGenericShaderEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    4,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10, QMetaType::QByteArray, 0x80000000 | 13,    9,   11,   12,   14,

       0        // eod
};

void QQuickGenericShaderEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGenericShaderEffect *_t = static_cast<QQuickGenericShaderEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sourceDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->markGeometryDirtyAndUpdate(); break;
        case 3: _t->markGeometryDirtyAndUpdateIfSupportsAtlas(); break;
        case 4: _t->shaderCodePrepared((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QSGGuiThreadShaderEffectManager::ShaderInfo::Type(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< QSGGuiThreadShaderEffectManager::ShaderInfo*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSGGuiThreadShaderEffectManager::ShaderInfo::Type >(); break;
            }
            break;
        }
    }
}

const QMetaObject QQuickGenericShaderEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickGenericShaderEffect.data,
      qt_meta_data_QQuickGenericShaderEffect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGenericShaderEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGenericShaderEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGenericShaderEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickGenericShaderEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
