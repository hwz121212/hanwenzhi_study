/****************************************************************************
** Meta object code from reading C++ file 'qenvironmentlight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qenvironmentlight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qenvironmentlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QEnvironmentLight_t {
    QByteArrayData data[11];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QEnvironmentLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QEnvironmentLight_t qt_meta_stringdata_Qt3DRender__QEnvironmentLight = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qt3DRender::QEnvironmentLight"
QT_MOC_LITERAL(1, 30, 17), // "irradianceChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 29), // "Qt3DRender::QAbstractTexture*"
QT_MOC_LITERAL(4, 79, 21), // "environmentIrradiance"
QT_MOC_LITERAL(5, 101, 15), // "specularChanged"
QT_MOC_LITERAL(6, 117, 19), // "environmentSpecular"
QT_MOC_LITERAL(7, 137, 13), // "setIrradiance"
QT_MOC_LITERAL(8, 151, 10), // "irradiance"
QT_MOC_LITERAL(9, 162, 11), // "setSpecular"
QT_MOC_LITERAL(10, 174, 8) // "specular"

    },
    "Qt3DRender::QEnvironmentLight\0"
    "irradianceChanged\0\0Qt3DRender::QAbstractTexture*\0"
    "environmentIrradiance\0specularChanged\0"
    "environmentSpecular\0setIrradiance\0"
    "irradiance\0setSpecular\0specular"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QEnvironmentLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3,   10,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0049510b,
      10, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3DRender::QEnvironmentLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEnvironmentLight *_t = static_cast<QEnvironmentLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->irradianceChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 1: _t->specularChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 2: _t->setIrradiance((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 3: _t->setSpecular((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QEnvironmentLight::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QEnvironmentLight::irradianceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QEnvironmentLight::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QEnvironmentLight::specularChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEnvironmentLight *_t = static_cast<QEnvironmentLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->irradiance(); break;
        case 1: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->specular(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEnvironmentLight *_t = static_cast<QEnvironmentLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIrradiance(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 1: _t->setSpecular(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QEnvironmentLight::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QEnvironmentLight.data,
      qt_meta_data_Qt3DRender__QEnvironmentLight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QEnvironmentLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QEnvironmentLight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QEnvironmentLight.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QEnvironmentLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DRender::QEnvironmentLight::irradianceChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QEnvironmentLight::specularChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
