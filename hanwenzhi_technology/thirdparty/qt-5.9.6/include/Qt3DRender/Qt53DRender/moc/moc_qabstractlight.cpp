/****************************************************************************
** Meta object code from reading C++ file 'qabstractlight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractlight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QAbstractLight_t {
    QByteArrayData data[13];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QAbstractLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QAbstractLight_t qt_meta_stringdata_Qt3DRender__QAbstractLight = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DRender::QAbstractLight"
QT_MOC_LITERAL(1, 27, 12), // "colorChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "color"
QT_MOC_LITERAL(4, 47, 16), // "intensityChanged"
QT_MOC_LITERAL(5, 64, 9), // "intensity"
QT_MOC_LITERAL(6, 74, 8), // "setColor"
QT_MOC_LITERAL(7, 83, 12), // "setIntensity"
QT_MOC_LITERAL(8, 96, 4), // "type"
QT_MOC_LITERAL(9, 101, 4), // "Type"
QT_MOC_LITERAL(10, 106, 10), // "PointLight"
QT_MOC_LITERAL(11, 117, 16), // "DirectionalLight"
QT_MOC_LITERAL(12, 134, 9) // "SpotLight"

    },
    "Qt3DRender::QAbstractLight\0colorChanged\0"
    "\0color\0intensityChanged\0intensity\0"
    "setColor\0setIntensity\0type\0Type\0"
    "PointLight\0DirectionalLight\0SpotLight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QAbstractLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   46, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Float,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Float,    5,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095009,
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,

 // enums: name, flags, count, data
       9, 0x0,    3,   62,

 // enum data: key, value
      10, uint(Qt3DRender::QAbstractLight::PointLight),
      11, uint(Qt3DRender::QAbstractLight::DirectionalLight),
      12, uint(Qt3DRender::QAbstractLight::SpotLight),

       0        // eod
};

void Qt3DRender::QAbstractLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractLight *_t = static_cast<QAbstractLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->intensityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setIntensity((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractLight::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractLight::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractLight::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractLight::intensityChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractLight *_t = static_cast<QAbstractLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->intensity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractLight *_t = static_cast<QAbstractLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setIntensity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QAbstractLight::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QAbstractLight.data,
      qt_meta_data_Qt3DRender__QAbstractLight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QAbstractLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QAbstractLight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QAbstractLight.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QAbstractLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qt3DRender::QAbstractLight::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QAbstractLight::intensityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
