/****************************************************************************
** Meta object code from reading C++ file 'qtexturematerial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtexturematerial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtexturematerial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QTextureMaterial_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QTextureMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QTextureMaterial_t qt_meta_stringdata_Qt3DExtras__QTextureMaterial = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qt3DExtras::QTextureMaterial"
QT_MOC_LITERAL(1, 29, 14), // "textureChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 29), // "Qt3DRender::QAbstractTexture*"
QT_MOC_LITERAL(4, 75, 7), // "texture"
QT_MOC_LITERAL(5, 83, 20), // "textureOffsetChanged"
QT_MOC_LITERAL(6, 104, 13), // "textureOffset"
QT_MOC_LITERAL(7, 118, 10), // "setTexture"
QT_MOC_LITERAL(8, 129, 16) // "setTextureOffset"

    },
    "Qt3DExtras::QTextureMaterial\0"
    "textureChanged\0\0Qt3DRender::QAbstractTexture*\0"
    "texture\0textureOffsetChanged\0textureOffset\0"
    "setTexture\0setTextureOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QTextureMaterial[] = {

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
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVector2D,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVector2D,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QVector2D, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3DExtras::QTextureMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextureMaterial *_t = static_cast<QTextureMaterial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textureChanged((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 1: _t->textureOffsetChanged((*reinterpret_cast< QVector2D(*)>(_a[1]))); break;
        case 2: _t->setTexture((*reinterpret_cast< Qt3DRender::QAbstractTexture*(*)>(_a[1]))); break;
        case 3: _t->setTextureOffset((*reinterpret_cast< QVector2D(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTextureMaterial::*_t)(Qt3DRender::QAbstractTexture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureMaterial::textureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTextureMaterial::*_t)(QVector2D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureMaterial::textureOffsetChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTextureMaterial *_t = static_cast<QTextureMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v) = _t->texture(); break;
        case 1: *reinterpret_cast< QVector2D*>(_v) = _t->textureOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTextureMaterial *_t = static_cast<QTextureMaterial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTexture(*reinterpret_cast< Qt3DRender::QAbstractTexture**>(_v)); break;
        case 1: _t->setTextureOffset(*reinterpret_cast< QVector2D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QTextureMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QTextureMaterial.data,
      qt_meta_data_Qt3DExtras__QTextureMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QTextureMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QTextureMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QTextureMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QTextureMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QMaterial::qt_metacall(_c, _id, _a);
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
void Qt3DExtras::QTextureMaterial::textureChanged(Qt3DRender::QAbstractTexture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QTextureMaterial::textureOffsetChanged(QVector2D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
