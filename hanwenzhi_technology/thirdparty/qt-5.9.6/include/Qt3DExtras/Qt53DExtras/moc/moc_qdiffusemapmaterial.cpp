/****************************************************************************
** Meta object code from reading C++ file 'qdiffusemapmaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdiffusemapmaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdiffusemapmaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial_t {
    QByteArrayData data[19];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial_t qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qt3DExtras::QDiffuseMapMaterial"
QT_MOC_LITERAL(1, 32, 14), // "ambientChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "ambient"
QT_MOC_LITERAL(4, 56, 14), // "diffuseChanged"
QT_MOC_LITERAL(5, 71, 29), // "Qt3DRender::QAbstractTexture*"
QT_MOC_LITERAL(6, 101, 7), // "diffuse"
QT_MOC_LITERAL(7, 109, 15), // "specularChanged"
QT_MOC_LITERAL(8, 125, 8), // "specular"
QT_MOC_LITERAL(9, 134, 16), // "shininessChanged"
QT_MOC_LITERAL(10, 151, 9), // "shininess"
QT_MOC_LITERAL(11, 161, 19), // "textureScaleChanged"
QT_MOC_LITERAL(12, 181, 12), // "textureScale"
QT_MOC_LITERAL(13, 194, 10), // "setAmbient"
QT_MOC_LITERAL(14, 205, 5), // "color"
QT_MOC_LITERAL(15, 211, 11), // "setSpecular"
QT_MOC_LITERAL(16, 223, 12), // "setShininess"
QT_MOC_LITERAL(17, 236, 10), // "setDiffuse"
QT_MOC_LITERAL(18, 247, 15) // "setTextureScale"

    },
    "Qt3DExtras::QDiffuseMapMaterial\0"
    "ambientChanged\0\0ambient\0diffuseChanged\0"
    "Qt3DRender::QAbstractTexture*\0diffuse\0"
    "specularChanged\0specular\0shininessChanged\0"
    "shininess\0textureScaleChanged\0"
    "textureScale\0setAmbient\0color\0setSpecular\0"
    "setShininess\0setDiffuse\0setTextureScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QDiffuseMapMaterial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   79,    2, 0x0a /* Public */,
      15,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Float,   12,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
      10, QMetaType::Float, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
      12, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       1,
       4,

       0        // eod
};

void Qt3DExtras::QDiffuseMapMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDiffuseMapMaterial *_t = static_cast<QDiffuseMapMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ambientChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->diffuseChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 2: _t->specularChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->shininessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->textureScaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setAmbient((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->setSpecular((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setShininess((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setDiffuse((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 9: _t->setTextureScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDiffuseMapMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDiffuseMapMaterial::ambientChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDiffuseMapMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDiffuseMapMaterial::diffuseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDiffuseMapMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDiffuseMapMaterial::specularChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDiffuseMapMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDiffuseMapMaterial::shininessChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDiffuseMapMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDiffuseMapMaterial::textureScaleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDiffuseMapMaterial *_t = static_cast<QDiffuseMapMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->ambient(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->specular(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->shininess(); break;
        case 3: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->diffuse(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->textureScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDiffuseMapMaterial *_t = static_cast<QDiffuseMapMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbient(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSpecular(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setShininess(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setDiffuse(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 4: _t->setTextureScale(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QDiffuseMapMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial.data,
      qt_meta_data_Qt3DExtras__QDiffuseMapMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QDiffuseMapMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QDiffuseMapMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QDiffuseMapMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QDiffuseMapMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QMaterial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
void Qt3DExtras::QDiffuseMapMaterial::ambientChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QDiffuseMapMaterial::diffuseChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QDiffuseMapMaterial::specularChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QDiffuseMapMaterial::shininessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DExtras::QDiffuseMapMaterial::textureScaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
