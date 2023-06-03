/****************************************************************************
** Meta object code from reading C++ file 'qquaternionanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuick/private/qquaternionanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquaternionanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation_t {
    QByteArrayData data[22];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation_t qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qt3DCore::Quick::QQuaternionA..."
QT_MOC_LITERAL(1, 38, 11), // "typeChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "Type"
QT_MOC_LITERAL(4, 56, 4), // "type"
QT_MOC_LITERAL(5, 61, 20), // "fromXRotationChanged"
QT_MOC_LITERAL(6, 82, 5), // "value"
QT_MOC_LITERAL(7, 88, 20), // "fromYRotationChanged"
QT_MOC_LITERAL(8, 109, 20), // "fromZRotationChanged"
QT_MOC_LITERAL(9, 130, 18), // "toXRotationChanged"
QT_MOC_LITERAL(10, 149, 18), // "toYRotationChanged"
QT_MOC_LITERAL(11, 168, 18), // "toZRotationChanged"
QT_MOC_LITERAL(12, 187, 4), // "from"
QT_MOC_LITERAL(13, 192, 2), // "to"
QT_MOC_LITERAL(14, 195, 13), // "fromXRotation"
QT_MOC_LITERAL(15, 209, 13), // "fromYRotation"
QT_MOC_LITERAL(16, 223, 13), // "fromZRotation"
QT_MOC_LITERAL(17, 237, 11), // "toXRotation"
QT_MOC_LITERAL(18, 249, 11), // "toYRotation"
QT_MOC_LITERAL(19, 261, 11), // "toZRotation"
QT_MOC_LITERAL(20, 273, 5), // "Slerp"
QT_MOC_LITERAL(21, 279, 5) // "Nlerp"

    },
    "Qt3DCore::Quick::QQuaternionAnimation\0"
    "typeChanged\0\0Type\0type\0fromXRotationChanged\0"
    "value\0fromYRotationChanged\0"
    "fromZRotationChanged\0toXRotationChanged\0"
    "toYRotationChanged\0toZRotationChanged\0"
    "from\0to\0fromXRotation\0fromYRotation\0"
    "fromZRotation\0toXRotation\0toYRotation\0"
    "toZRotation\0Slerp\0Nlerp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__QQuaternionAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       9,   70, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      11,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,

 // properties: name, type, flags
      12, QMetaType::QQuaternion, 0x00095103,
      13, QMetaType::QQuaternion, 0x00095103,
       4, 0x80000000 | 3, 0x0049510b,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       5,
       6,

 // enums: name, flags, count, data
       3, 0x0,    2,  110,

 // enum data: key, value
      20, uint(Qt3DCore::Quick::QQuaternionAnimation::Slerp),
      21, uint(Qt3DCore::Quick::QQuaternionAnimation::Nlerp),

       0        // eod
};

void Qt3DCore::Quick::QQuaternionAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuaternionAnimation *_t = static_cast<QQuaternionAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< Type(*)>(_a[1]))); break;
        case 1: _t->fromXRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->fromYRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->fromZRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->toXRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->toYRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->toZRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuaternionAnimation::*_t)(Type );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::typeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::fromXRotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::fromYRotationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::fromZRotationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::toXRotationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::toYRotationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuaternionAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuaternionAnimation::toZRotationChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuaternionAnimation *_t = static_cast<QQuaternionAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuaternion*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< QQuaternion*>(_v) = _t->to(); break;
        case 2: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->fromXRotation(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->fromYRotation(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->fromZRotation(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->toXRotation(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->toYRotation(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->toZRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuaternionAnimation *_t = static_cast<QQuaternionAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< QQuaternion*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< QQuaternion*>(_v)); break;
        case 2: _t->setType(*reinterpret_cast< Type*>(_v)); break;
        case 3: _t->setFromXRotation(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setFromYRotation(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setFromZRotation(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setToXRotation(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setToYRotation(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setToZRotation(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::QQuaternionAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation.data,
      qt_meta_data_Qt3DCore__Quick__QQuaternionAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::Quick::QQuaternionAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::Quick::QQuaternionAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__Quick__QQuaternionAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int Qt3DCore::Quick::QQuaternionAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DCore::Quick::QQuaternionAnimation::typeChanged(Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DCore::Quick::QQuaternionAnimation::fromXRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DCore::Quick::QQuaternionAnimation::fromYRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DCore::Quick::QQuaternionAnimation::fromZRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DCore::Quick::QQuaternionAnimation::toXRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qt3DCore::Quick::QQuaternionAnimation::toYRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Qt3DCore::Quick::QQuaternionAnimation::toZRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
