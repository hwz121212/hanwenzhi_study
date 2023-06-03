/****************************************************************************
** Meta object code from reading C++ file 'qquickpointdirection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickpointdirection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpointdirection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPointDirection_t {
    QByteArrayData data[15];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointDirection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointDirection_t qt_meta_stringdata_QQuickPointDirection = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickPointDirection"
QT_MOC_LITERAL(1, 21, 8), // "xChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "arg"
QT_MOC_LITERAL(4, 35, 8), // "yChanged"
QT_MOC_LITERAL(5, 44, 17), // "xVariationChanged"
QT_MOC_LITERAL(6, 62, 17), // "yVariationChanged"
QT_MOC_LITERAL(7, 80, 4), // "setX"
QT_MOC_LITERAL(8, 85, 4), // "setY"
QT_MOC_LITERAL(9, 90, 13), // "setXVariation"
QT_MOC_LITERAL(10, 104, 13), // "setYVariation"
QT_MOC_LITERAL(11, 118, 1), // "x"
QT_MOC_LITERAL(12, 120, 1), // "y"
QT_MOC_LITERAL(13, 122, 10), // "xVariation"
QT_MOC_LITERAL(14, 133, 10) // "yVariation"

    },
    "QQuickPointDirection\0xChanged\0\0arg\0"
    "yChanged\0xVariationChanged\0yVariationChanged\0"
    "setX\0setY\0setXVariation\0setYVariation\0"
    "x\0y\0xVariation\0yVariation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointDirection[] = {

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
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,

 // properties: name, type, flags
      11, QMetaType::QReal, 0x00495103,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickPointDirection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPointDirection *_t = static_cast<QQuickPointDirection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->xVariationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->yVariationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setX((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setY((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setXVariation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setYVariation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPointDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointDirection::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPointDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointDirection::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPointDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointDirection::xVariationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPointDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointDirection::yVariationChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPointDirection *_t = static_cast<QQuickPointDirection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->xVariation(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->yVariation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPointDirection *_t = static_cast<QQuickPointDirection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setXVariation(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setYVariation(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPointDirection::staticMetaObject = {
    { &QQuickDirection::staticMetaObject, qt_meta_stringdata_QQuickPointDirection.data,
      qt_meta_data_QQuickPointDirection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPointDirection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointDirection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointDirection.stringdata0))
        return static_cast<void*>(this);
    return QQuickDirection::qt_metacast(_clname);
}

int QQuickPointDirection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickDirection::qt_metacall(_c, _id, _a);
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
void QQuickPointDirection::xChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickPointDirection::yChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickPointDirection::xVariationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickPointDirection::yVariationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
