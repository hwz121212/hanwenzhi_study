/****************************************************************************
** Meta object code from reading C++ file 'qpointlight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpointlight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpointlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QPointLight_t {
    QByteArrayData data[12];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QPointLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QPointLight_t qt_meta_stringdata_Qt3DRender__QPointLight = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qt3DRender::QPointLight"
QT_MOC_LITERAL(1, 24, 26), // "constantAttenuationChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 19), // "constantAttenuation"
QT_MOC_LITERAL(4, 72, 24), // "linearAttenuationChanged"
QT_MOC_LITERAL(5, 97, 17), // "linearAttenuation"
QT_MOC_LITERAL(6, 115, 27), // "quadraticAttenuationChanged"
QT_MOC_LITERAL(7, 143, 20), // "quadraticAttenuation"
QT_MOC_LITERAL(8, 164, 22), // "setConstantAttenuation"
QT_MOC_LITERAL(9, 187, 5), // "value"
QT_MOC_LITERAL(10, 193, 20), // "setLinearAttenuation"
QT_MOC_LITERAL(11, 214, 23) // "setQuadraticAttenuation"

    },
    "Qt3DRender::QPointLight\0"
    "constantAttenuationChanged\0\0"
    "constantAttenuation\0linearAttenuationChanged\0"
    "linearAttenuation\0quadraticAttenuationChanged\0"
    "quadraticAttenuation\0setConstantAttenuation\0"
    "value\0setLinearAttenuation\0"
    "setQuadraticAttenuation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QPointLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QPointLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPointLight *_t = static_cast<QPointLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->constantAttenuationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->linearAttenuationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->quadraticAttenuationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setConstantAttenuation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setLinearAttenuation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setQuadraticAttenuation((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPointLight::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointLight::constantAttenuationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPointLight::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointLight::linearAttenuationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPointLight::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointLight::quadraticAttenuationChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPointLight *_t = static_cast<QPointLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->constantAttenuation(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->linearAttenuation(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->quadraticAttenuation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPointLight *_t = static_cast<QPointLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConstantAttenuation(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setLinearAttenuation(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setQuadraticAttenuation(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QPointLight::staticMetaObject = {
    { &QAbstractLight::staticMetaObject, qt_meta_stringdata_Qt3DRender__QPointLight.data,
      qt_meta_data_Qt3DRender__QPointLight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QPointLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QPointLight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QPointLight.stringdata0))
        return static_cast<void*>(this);
    return QAbstractLight::qt_metacast(_clname);
}

int Qt3DRender::QPointLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractLight::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DRender::QPointLight::constantAttenuationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QPointLight::linearAttenuationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QPointLight::quadraticAttenuationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
