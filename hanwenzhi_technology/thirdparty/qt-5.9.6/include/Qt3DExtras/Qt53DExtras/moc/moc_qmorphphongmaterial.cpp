/****************************************************************************
** Meta object code from reading C++ file 'qmorphphongmaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmorphphongmaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmorphphongmaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial_t {
    QByteArrayData data[17];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial_t qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qt3DExtras::QMorphPhongMaterial"
QT_MOC_LITERAL(1, 32, 14), // "ambientChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "ambient"
QT_MOC_LITERAL(4, 56, 14), // "diffuseChanged"
QT_MOC_LITERAL(5, 71, 7), // "diffuse"
QT_MOC_LITERAL(6, 79, 15), // "specularChanged"
QT_MOC_LITERAL(7, 95, 8), // "specular"
QT_MOC_LITERAL(8, 104, 16), // "shininessChanged"
QT_MOC_LITERAL(9, 121, 9), // "shininess"
QT_MOC_LITERAL(10, 131, 19), // "interpolatorChanged"
QT_MOC_LITERAL(11, 151, 12), // "interpolator"
QT_MOC_LITERAL(12, 164, 10), // "setAmbient"
QT_MOC_LITERAL(13, 175, 10), // "setDiffuse"
QT_MOC_LITERAL(14, 186, 11), // "setSpecular"
QT_MOC_LITERAL(15, 198, 12), // "setShininess"
QT_MOC_LITERAL(16, 211, 15) // "setInterpolator"

    },
    "Qt3DExtras::QMorphPhongMaterial\0"
    "ambientChanged\0\0ambient\0diffuseChanged\0"
    "diffuse\0specularChanged\0specular\0"
    "shininessChanged\0shininess\0"
    "interpolatorChanged\0interpolator\0"
    "setAmbient\0setDiffuse\0setSpecular\0"
    "setShininess\0setInterpolator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QMorphPhongMaterial[] = {

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
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   11,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::QColor, 0x00495103,
       7, QMetaType::QColor, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Qt3DExtras::QMorphPhongMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMorphPhongMaterial *_t = static_cast<QMorphPhongMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ambientChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->diffuseChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->specularChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->shininessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->interpolatorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setAmbient((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->setDiffuse((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setSpecular((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->setShininess((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setInterpolator((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMorphPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMorphPhongMaterial::ambientChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMorphPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMorphPhongMaterial::diffuseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMorphPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMorphPhongMaterial::specularChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMorphPhongMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMorphPhongMaterial::shininessChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMorphPhongMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMorphPhongMaterial::interpolatorChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMorphPhongMaterial *_t = static_cast<QMorphPhongMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->ambient(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->diffuse(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->specular(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->shininess(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->interpolator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMorphPhongMaterial *_t = static_cast<QMorphPhongMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbient(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setDiffuse(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSpecular(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setShininess(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setInterpolator(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QMorphPhongMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial.data,
      qt_meta_data_Qt3DExtras__QMorphPhongMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QMorphPhongMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QMorphPhongMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QMorphPhongMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QMorphPhongMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qt3DExtras::QMorphPhongMaterial::ambientChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QMorphPhongMaterial::diffuseChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QMorphPhongMaterial::specularChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QMorphPhongMaterial::shininessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DExtras::QMorphPhongMaterial::interpolatorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
