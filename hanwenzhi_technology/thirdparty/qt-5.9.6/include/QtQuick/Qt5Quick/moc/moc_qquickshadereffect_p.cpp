/****************************************************************************
** Meta object code from reading C++ file 'qquickshadereffect_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickshadereffect_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickshadereffect_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickShaderEffect_t {
    QByteArrayData data[26];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShaderEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShaderEffect_t qt_meta_stringdata_QQuickShaderEffect = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickShaderEffect"
QT_MOC_LITERAL(1, 19, 21), // "fragmentShaderChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "vertexShaderChanged"
QT_MOC_LITERAL(4, 62, 15), // "blendingChanged"
QT_MOC_LITERAL(5, 78, 11), // "meshChanged"
QT_MOC_LITERAL(6, 90, 15), // "cullModeChanged"
QT_MOC_LITERAL(7, 106, 10), // "logChanged"
QT_MOC_LITERAL(8, 117, 13), // "statusChanged"
QT_MOC_LITERAL(9, 131, 28), // "supportsAtlasTexturesChanged"
QT_MOC_LITERAL(10, 160, 14), // "fragmentShader"
QT_MOC_LITERAL(11, 175, 12), // "vertexShader"
QT_MOC_LITERAL(12, 188, 8), // "blending"
QT_MOC_LITERAL(13, 197, 4), // "mesh"
QT_MOC_LITERAL(14, 202, 8), // "cullMode"
QT_MOC_LITERAL(15, 211, 8), // "CullMode"
QT_MOC_LITERAL(16, 220, 3), // "log"
QT_MOC_LITERAL(17, 224, 6), // "status"
QT_MOC_LITERAL(18, 231, 6), // "Status"
QT_MOC_LITERAL(19, 238, 21), // "supportsAtlasTextures"
QT_MOC_LITERAL(20, 260, 9), // "NoCulling"
QT_MOC_LITERAL(21, 270, 15), // "BackFaceCulling"
QT_MOC_LITERAL(22, 286, 16), // "FrontFaceCulling"
QT_MOC_LITERAL(23, 303, 8), // "Compiled"
QT_MOC_LITERAL(24, 312, 10), // "Uncompiled"
QT_MOC_LITERAL(25, 323, 5) // "Error"

    },
    "QQuickShaderEffect\0fragmentShaderChanged\0"
    "\0vertexShaderChanged\0blendingChanged\0"
    "meshChanged\0cullModeChanged\0logChanged\0"
    "statusChanged\0supportsAtlasTexturesChanged\0"
    "fragmentShader\0vertexShader\0blending\0"
    "mesh\0cullMode\0CullMode\0log\0status\0"
    "Status\0supportsAtlasTextures\0NoCulling\0"
    "BackFaceCulling\0FrontFaceCulling\0"
    "Compiled\0Uncompiled\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShaderEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       2,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QByteArray, 0x00495103,
      11, QMetaType::QByteArray, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::QVariant, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,
      16, QMetaType::QString, 0x00495001,
      17, 0x80000000 | 18, 0x00495009,
      19, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
      15, 0x0,    3,  110,
      18, 0x0,    3,  116,

 // enum data: key, value
      20, uint(QQuickShaderEffect::NoCulling),
      21, uint(QQuickShaderEffect::BackFaceCulling),
      22, uint(QQuickShaderEffect::FrontFaceCulling),
      23, uint(QQuickShaderEffect::Compiled),
      24, uint(QQuickShaderEffect::Uncompiled),
      25, uint(QQuickShaderEffect::Error),

       0        // eod
};

void QQuickShaderEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickShaderEffect *_t = static_cast<QQuickShaderEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fragmentShaderChanged(); break;
        case 1: _t->vertexShaderChanged(); break;
        case 2: _t->blendingChanged(); break;
        case 3: _t->meshChanged(); break;
        case 4: _t->cullModeChanged(); break;
        case 5: _t->logChanged(); break;
        case 6: _t->statusChanged(); break;
        case 7: _t->supportsAtlasTexturesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::fragmentShaderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::vertexShaderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::blendingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::meshChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::cullModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::logChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::statusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickShaderEffect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffect::supportsAtlasTexturesChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickShaderEffect *_t = static_cast<QQuickShaderEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->fragmentShader(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->vertexShader(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->blending(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->mesh(); break;
        case 4: *reinterpret_cast< CullMode*>(_v) = _t->cullMode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->log(); break;
        case 6: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->supportsAtlasTextures(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickShaderEffect *_t = static_cast<QQuickShaderEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFragmentShader(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setVertexShader(*reinterpret_cast< QByteArray*>(_v)); break;
        case 2: _t->setBlending(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMesh(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setCullMode(*reinterpret_cast< CullMode*>(_v)); break;
        case 7: _t->setSupportsAtlasTextures(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickShaderEffect::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickShaderEffect.data,
      qt_meta_data_QQuickShaderEffect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickShaderEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShaderEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShaderEffect.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickShaderEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShaderEffect::fragmentShaderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShaderEffect::vertexShaderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShaderEffect::blendingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShaderEffect::meshChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickShaderEffect::cullModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickShaderEffect::logChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickShaderEffect::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickShaderEffect::supportsAtlasTexturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
