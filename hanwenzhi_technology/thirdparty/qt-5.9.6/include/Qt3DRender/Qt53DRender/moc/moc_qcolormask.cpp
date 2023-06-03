/****************************************************************************
** Meta object code from reading C++ file 'qcolormask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcolormask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolormask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QColorMask_t {
    QByteArrayData data[14];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QColorMask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QColorMask_t qt_meta_stringdata_Qt3DRender__QColorMask = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DRender::QColorMask"
QT_MOC_LITERAL(1, 23, 16), // "redMaskedChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "redMasked"
QT_MOC_LITERAL(4, 51, 18), // "greenMaskedChanged"
QT_MOC_LITERAL(5, 70, 11), // "greenMasked"
QT_MOC_LITERAL(6, 82, 17), // "blueMaskedChanged"
QT_MOC_LITERAL(7, 100, 10), // "blueMasked"
QT_MOC_LITERAL(8, 111, 18), // "alphaMaskedChanged"
QT_MOC_LITERAL(9, 130, 11), // "alphaMasked"
QT_MOC_LITERAL(10, 142, 12), // "setRedMasked"
QT_MOC_LITERAL(11, 155, 14), // "setGreenMasked"
QT_MOC_LITERAL(12, 170, 13), // "setBlueMasked"
QT_MOC_LITERAL(13, 184, 14) // "setAlphaMasked"

    },
    "Qt3DRender::QColorMask\0redMaskedChanged\0"
    "\0redMasked\0greenMaskedChanged\0greenMasked\0"
    "blueMaskedChanged\0blueMasked\0"
    "alphaMaskedChanged\0alphaMasked\0"
    "setRedMasked\0setGreenMasked\0setBlueMasked\0"
    "setAlphaMasked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QColorMask[] = {

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
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Qt3DRender::QColorMask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QColorMask *_t = static_cast<QColorMask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redMaskedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->greenMaskedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->blueMaskedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->alphaMaskedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setRedMasked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setGreenMasked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setBlueMasked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAlphaMasked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QColorMask::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QColorMask::redMaskedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QColorMask::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QColorMask::greenMaskedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QColorMask::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QColorMask::blueMaskedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QColorMask::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QColorMask::alphaMaskedChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QColorMask *_t = static_cast<QColorMask *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRedMasked(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isGreenMasked(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isBlueMasked(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAlphaMasked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QColorMask *_t = static_cast<QColorMask *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRedMasked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGreenMasked(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBlueMasked(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAlphaMasked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QColorMask::staticMetaObject = {
    { &QRenderState::staticMetaObject, qt_meta_stringdata_Qt3DRender__QColorMask.data,
      qt_meta_data_Qt3DRender__QColorMask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QColorMask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QColorMask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QColorMask.stringdata0))
        return static_cast<void*>(this);
    return QRenderState::qt_metacast(_clname);
}

int Qt3DRender::QColorMask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRenderState::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QColorMask::redMaskedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QColorMask::greenMaskedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QColorMask::blueMaskedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DRender::QColorMask::alphaMaskedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
