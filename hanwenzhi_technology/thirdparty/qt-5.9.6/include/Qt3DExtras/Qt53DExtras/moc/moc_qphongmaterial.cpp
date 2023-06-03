/****************************************************************************
** Meta object code from reading C++ file 'qphongmaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qphongmaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qphongmaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QPhongMaterial_t {
    QByteArrayData data[14];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QPhongMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QPhongMaterial_t qt_meta_stringdata_Qt3DExtras__QPhongMaterial = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DExtras::QPhongMaterial"
QT_MOC_LITERAL(1, 27, 14), // "ambientChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "ambient"
QT_MOC_LITERAL(4, 51, 14), // "diffuseChanged"
QT_MOC_LITERAL(5, 66, 7), // "diffuse"
QT_MOC_LITERAL(6, 74, 15), // "specularChanged"
QT_MOC_LITERAL(7, 90, 8), // "specular"
QT_MOC_LITERAL(8, 99, 16), // "shininessChanged"
QT_MOC_LITERAL(9, 116, 9), // "shininess"
QT_MOC_LITERAL(10, 126, 10), // "setAmbient"
QT_MOC_LITERAL(11, 137, 10), // "setDiffuse"
QT_MOC_LITERAL(12, 148, 11), // "setSpecular"
QT_MOC_LITERAL(13, 160, 12) // "setShininess"

    },
    "Qt3DExtras::QPhongMaterial\0ambientChanged\0"
    "\0ambient\0diffuseChanged\0diffuse\0"
    "specularChanged\0specular\0shininessChanged\0"
    "shininess\0setAmbient\0setDiffuse\0"
    "setSpecular\0setShininess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QPhongMaterial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Float,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Float,    9,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::QColor, 0x00495103,
       7, QMetaType::QColor, 0x00495103,
       9, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Qt3DExtras::QPhongMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPhongMaterial *_t = static_cast<QPhongMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ambientChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->diffuseChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->specularChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->shininessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setAmbient((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->setDiffuse((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->setSpecular((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setShininess((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPhongMaterial::ambientChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPhongMaterial::diffuseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPhongMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPhongMaterial::specularChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QPhongMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPhongMaterial::shininessChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPhongMaterial *_t = static_cast<QPhongMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->ambient(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->diffuse(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->specular(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->shininess(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPhongMaterial *_t = static_cast<QPhongMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbient(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setDiffuse(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSpecular(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setShininess(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QPhongMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QPhongMaterial.data,
      qt_meta_data_Qt3DExtras__QPhongMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QPhongMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QPhongMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QPhongMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QPhongMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QMaterial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::QPhongMaterial::ambientChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QPhongMaterial::diffuseChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QPhongMaterial::specularChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QPhongMaterial::shininessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
