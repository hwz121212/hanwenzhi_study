/****************************************************************************
** Meta object code from reading C++ file 'qtexturedmetalroughmaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtexturedmetalroughmaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtexturedmetalroughmaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial_t {
    QByteArrayData data[18];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial_t qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qt3DExtras::QTexturedMetalRou..."
QT_MOC_LITERAL(1, 40, 16), // "baseColorChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 29), // "Qt3DRender::QAbstractTexture*"
QT_MOC_LITERAL(4, 88, 9), // "baseColor"
QT_MOC_LITERAL(5, 98, 16), // "metalnessChanged"
QT_MOC_LITERAL(6, 115, 9), // "metalness"
QT_MOC_LITERAL(7, 125, 16), // "roughnessChanged"
QT_MOC_LITERAL(8, 142, 9), // "roughness"
QT_MOC_LITERAL(9, 152, 23), // "ambientOcclusionChanged"
QT_MOC_LITERAL(10, 176, 16), // "ambientOcclusion"
QT_MOC_LITERAL(11, 193, 13), // "normalChanged"
QT_MOC_LITERAL(12, 207, 6), // "normal"
QT_MOC_LITERAL(13, 214, 12), // "setBaseColor"
QT_MOC_LITERAL(14, 227, 12), // "setMetalness"
QT_MOC_LITERAL(15, 240, 12), // "setRoughness"
QT_MOC_LITERAL(16, 253, 19), // "setAmbientOcclusion"
QT_MOC_LITERAL(17, 273, 9) // "setNormal"

    },
    "Qt3DExtras::QTexturedMetalRoughMaterial\0"
    "baseColorChanged\0\0Qt3DRender::QAbstractTexture*\0"
    "baseColor\0metalnessChanged\0metalness\0"
    "roughnessChanged\0roughness\0"
    "ambientOcclusionChanged\0ambientOcclusion\0"
    "normalChanged\0normal\0setBaseColor\0"
    "setMetalness\0setRoughness\0setAmbientOcclusion\0"
    "setNormal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QTexturedMetalRoughMaterial[] = {

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
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,
      16,    1,   88,    2, 0x0a /* Public */,
      17,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   12,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, 0x80000000 | 3, 0x0049510b,
       8, 0x80000000 | 3, 0x0049510b,
      10, 0x80000000 | 3, 0x0049510b,
      12, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Qt3DExtras::QTexturedMetalRoughMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTexturedMetalRoughMaterial *_t = static_cast<QTexturedMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baseColorChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 1: _t->metalnessChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 2: _t->roughnessChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 3: _t->ambientOcclusionChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 4: _t->normalChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 5: _t->setBaseColor((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 6: _t->setMetalness((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 7: _t->setRoughness((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 8: _t->setAmbientOcclusion((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 9: _t->setNormal((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTexturedMetalRoughMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTexturedMetalRoughMaterial::baseColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTexturedMetalRoughMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTexturedMetalRoughMaterial::metalnessChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTexturedMetalRoughMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTexturedMetalRoughMaterial::roughnessChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QTexturedMetalRoughMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTexturedMetalRoughMaterial::ambientOcclusionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QTexturedMetalRoughMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTexturedMetalRoughMaterial::normalChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTexturedMetalRoughMaterial *_t = static_cast<QTexturedMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->baseColor(); break;
        case 1: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->metalness(); break;
        case 2: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->roughness(); break;
        case 3: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->ambientOcclusion(); break;
        case 4: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->normal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTexturedMetalRoughMaterial *_t = static_cast<QTexturedMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaseColor(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 1: _t->setMetalness(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 2: _t->setRoughness(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 3: _t->setAmbientOcclusion(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 4: _t->setNormal(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QTexturedMetalRoughMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial.data,
      qt_meta_data_Qt3DExtras__QTexturedMetalRoughMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QTexturedMetalRoughMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QTexturedMetalRoughMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QTexturedMetalRoughMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QTexturedMetalRoughMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qt3DExtras::QTexturedMetalRoughMaterial::baseColorChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QTexturedMetalRoughMaterial::metalnessChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QTexturedMetalRoughMaterial::roughnessChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QTexturedMetalRoughMaterial::ambientOcclusionChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DExtras::QTexturedMetalRoughMaterial::normalChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
