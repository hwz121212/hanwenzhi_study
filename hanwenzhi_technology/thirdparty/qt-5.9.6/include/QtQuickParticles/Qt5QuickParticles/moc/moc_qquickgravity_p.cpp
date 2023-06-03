/****************************************************************************
** Meta object code from reading C++ file 'qquickgravity_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickgravity_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickgravity_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickGravityAffector_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGravityAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGravityAffector_t qt_meta_stringdata_QQuickGravityAffector = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickGravityAffector"
QT_MOC_LITERAL(1, 22, 16), // "magnitudeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "arg"
QT_MOC_LITERAL(4, 44, 12), // "angleChanged"
QT_MOC_LITERAL(5, 57, 12), // "setMagnitude"
QT_MOC_LITERAL(6, 70, 15), // "setAcceleration"
QT_MOC_LITERAL(7, 86, 8), // "setAngle"
QT_MOC_LITERAL(8, 95, 9), // "magnitude"
QT_MOC_LITERAL(9, 105, 12), // "acceleration"
QT_MOC_LITERAL(10, 118, 5) // "angle"

    },
    "QQuickGravityAffector\0magnitudeChanged\0"
    "\0arg\0angleChanged\0setMagnitude\0"
    "setAcceleration\0setAngle\0magnitude\0"
    "acceleration\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGravityAffector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void QQuickGravityAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGravityAffector *_t = static_cast<QQuickGravityAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->magnitudeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->angleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->setMagnitude((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setAcceleration((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setAngle((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGravityAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGravityAffector::magnitudeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickGravityAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGravityAffector::angleChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGravityAffector *_t = static_cast<QQuickGravityAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->magnitude(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->magnitude(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGravityAffector *_t = static_cast<QQuickGravityAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMagnitude(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAngle(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickGravityAffector::staticMetaObject = {
    { &QQuickParticleAffector::staticMetaObject, qt_meta_stringdata_QQuickGravityAffector.data,
      qt_meta_data_QQuickGravityAffector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGravityAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGravityAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGravityAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickGravityAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QQuickGravityAffector::magnitudeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickGravityAffector::angleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
