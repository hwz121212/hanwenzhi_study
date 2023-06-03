/****************************************************************************
** Meta object code from reading C++ file 'qquickangledirection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickangledirection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickangledirection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAngleDirection_t {
    QByteArrayData data[15];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAngleDirection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAngleDirection_t qt_meta_stringdata_QQuickAngleDirection = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickAngleDirection"
QT_MOC_LITERAL(1, 21, 12), // "angleChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "arg"
QT_MOC_LITERAL(4, 39, 16), // "magnitudeChanged"
QT_MOC_LITERAL(5, 56, 21), // "angleVariationChanged"
QT_MOC_LITERAL(6, 78, 25), // "magnitudeVariationChanged"
QT_MOC_LITERAL(7, 104, 8), // "setAngle"
QT_MOC_LITERAL(8, 113, 12), // "setMagnitude"
QT_MOC_LITERAL(9, 126, 17), // "setAngleVariation"
QT_MOC_LITERAL(10, 144, 21), // "setMagnitudeVariation"
QT_MOC_LITERAL(11, 166, 5), // "angle"
QT_MOC_LITERAL(12, 172, 9), // "magnitude"
QT_MOC_LITERAL(13, 182, 14), // "angleVariation"
QT_MOC_LITERAL(14, 197, 18) // "magnitudeVariation"

    },
    "QQuickAngleDirection\0angleChanged\0\0"
    "arg\0magnitudeChanged\0angleVariationChanged\0"
    "magnitudeVariationChanged\0setAngle\0"
    "setMagnitude\0setAngleVariation\0"
    "setMagnitudeVariation\0angle\0magnitude\0"
    "angleVariation\0magnitudeVariation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAngleDirection[] = {

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

void QQuickAngleDirection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAngleDirection *_t = static_cast<QQuickAngleDirection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->angleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->magnitudeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->angleVariationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->magnitudeVariationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setAngle((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setMagnitude((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setAngleVariation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setMagnitudeVariation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAngleDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAngleDirection::angleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAngleDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAngleDirection::magnitudeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickAngleDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAngleDirection::angleVariationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickAngleDirection::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAngleDirection::magnitudeVariationChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAngleDirection *_t = static_cast<QQuickAngleDirection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->magnitude(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->angleVariation(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->magnitudeVariation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAngleDirection *_t = static_cast<QQuickAngleDirection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMagnitude(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAngleVariation(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setMagnitudeVariation(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAngleDirection::staticMetaObject = {
    { &QQuickDirection::staticMetaObject, qt_meta_stringdata_QQuickAngleDirection.data,
      qt_meta_data_QQuickAngleDirection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAngleDirection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAngleDirection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAngleDirection.stringdata0))
        return static_cast<void*>(this);
    return QQuickDirection::qt_metacast(_clname);
}

int QQuickAngleDirection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickAngleDirection::angleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickAngleDirection::magnitudeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickAngleDirection::angleVariationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickAngleDirection::magnitudeVariationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
