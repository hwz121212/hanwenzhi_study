/****************************************************************************
** Meta object code from reading C++ file 'qmetalroughmaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmetalroughmaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmetalroughmaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial_t qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qt3DExtras::QMetalRoughMaterial"
QT_MOC_LITERAL(1, 32, 16), // "baseColorChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "baseColor"
QT_MOC_LITERAL(4, 60, 16), // "metalnessChanged"
QT_MOC_LITERAL(5, 77, 9), // "metalness"
QT_MOC_LITERAL(6, 87, 16), // "roughnessChanged"
QT_MOC_LITERAL(7, 104, 9), // "roughness"
QT_MOC_LITERAL(8, 114, 12), // "setBaseColor"
QT_MOC_LITERAL(9, 127, 12), // "setMetalness"
QT_MOC_LITERAL(10, 140, 12) // "setRoughness"

    },
    "Qt3DExtras::QMetalRoughMaterial\0"
    "baseColorChanged\0\0baseColor\0"
    "metalnessChanged\0metalness\0roughnessChanged\0"
    "roughness\0setBaseColor\0setMetalness\0"
    "setRoughness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QMetalRoughMaterial[] = {

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
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DExtras::QMetalRoughMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMetalRoughMaterial *_t = static_cast<QMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baseColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->metalnessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->roughnessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setBaseColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setMetalness((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setRoughness((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMetalRoughMaterial::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMetalRoughMaterial::baseColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMetalRoughMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMetalRoughMaterial::metalnessChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMetalRoughMaterial::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMetalRoughMaterial::roughnessChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMetalRoughMaterial *_t = static_cast<QMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->baseColor(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->metalness(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->roughness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMetalRoughMaterial *_t = static_cast<QMetalRoughMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setMetalness(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setRoughness(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QMetalRoughMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial.data,
      qt_meta_data_Qt3DExtras__QMetalRoughMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QMetalRoughMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QMetalRoughMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QMetalRoughMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QMetalRoughMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QMaterial::qt_metacall(_c, _id, _a);
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
void Qt3DExtras::QMetalRoughMaterial::baseColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QMetalRoughMaterial::metalnessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QMetalRoughMaterial::roughnessChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
