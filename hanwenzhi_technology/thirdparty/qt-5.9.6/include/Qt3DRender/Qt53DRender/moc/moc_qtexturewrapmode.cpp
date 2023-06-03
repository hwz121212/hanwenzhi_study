/****************************************************************************
** Meta object code from reading C++ file 'qtexturewrapmode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtexturewrapmode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtexturewrapmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QTextureWrapMode_t {
    QByteArrayData data[16];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QTextureWrapMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QTextureWrapMode_t qt_meta_stringdata_Qt3DRender__QTextureWrapMode = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qt3DRender::QTextureWrapMode"
QT_MOC_LITERAL(1, 29, 8), // "xChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "WrapMode"
QT_MOC_LITERAL(4, 48, 1), // "x"
QT_MOC_LITERAL(5, 50, 8), // "yChanged"
QT_MOC_LITERAL(6, 59, 1), // "y"
QT_MOC_LITERAL(7, 61, 8), // "zChanged"
QT_MOC_LITERAL(8, 70, 1), // "z"
QT_MOC_LITERAL(9, 72, 4), // "setX"
QT_MOC_LITERAL(10, 77, 4), // "setY"
QT_MOC_LITERAL(11, 82, 4), // "setZ"
QT_MOC_LITERAL(12, 87, 6), // "Repeat"
QT_MOC_LITERAL(13, 94, 14), // "MirroredRepeat"
QT_MOC_LITERAL(14, 109, 11), // "ClampToEdge"
QT_MOC_LITERAL(15, 121, 13) // "ClampToBorder"

    },
    "Qt3DRender::QTextureWrapMode\0xChanged\0"
    "\0WrapMode\0x\0yChanged\0y\0zChanged\0z\0"
    "setX\0setY\0setZ\0Repeat\0MirroredRepeat\0"
    "ClampToEdge\0ClampToBorder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QTextureWrapMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, 0x80000000 | 3, 0x0049510b,
       8, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       3, 0x0,    4,   78,

 // enum data: key, value
      12, uint(Qt3DRender::QTextureWrapMode::Repeat),
      13, uint(Qt3DRender::QTextureWrapMode::MirroredRepeat),
      14, uint(Qt3DRender::QTextureWrapMode::ClampToEdge),
      15, uint(Qt3DRender::QTextureWrapMode::ClampToBorder),

       0        // eod
};

void Qt3DRender::QTextureWrapMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextureWrapMode *_t = static_cast<QTextureWrapMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 3: _t->setX((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 4: _t->setY((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 5: _t->setZ((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTextureWrapMode::*_t)(WrapMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureWrapMode::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTextureWrapMode::*_t)(WrapMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureWrapMode::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTextureWrapMode::*_t)(WrapMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureWrapMode::zChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTextureWrapMode *_t = static_cast<QTextureWrapMode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< WrapMode*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< WrapMode*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< WrapMode*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTextureWrapMode *_t = static_cast<QTextureWrapMode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< WrapMode*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< WrapMode*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< WrapMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QTextureWrapMode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DRender__QTextureWrapMode.data,
      qt_meta_data_Qt3DRender__QTextureWrapMode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QTextureWrapMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QTextureWrapMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QTextureWrapMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DRender::QTextureWrapMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QTextureWrapMode::xChanged(WrapMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QTextureWrapMode::yChanged(WrapMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QTextureWrapMode::zChanged(WrapMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
