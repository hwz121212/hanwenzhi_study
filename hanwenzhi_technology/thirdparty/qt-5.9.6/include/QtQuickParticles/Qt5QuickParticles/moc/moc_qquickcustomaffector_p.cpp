/****************************************************************************
** Meta object code from reading C++ file 'qquickcustomaffector_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickcustomaffector_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcustomaffector_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCustomAffector_t {
    QByteArrayData data[20];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCustomAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCustomAffector_t qt_meta_stringdata_QQuickCustomAffector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickCustomAffector"
QT_MOC_LITERAL(1, 21, 15), // "affectParticles"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "QQmlV4Handle"
QT_MOC_LITERAL(4, 51, 9), // "particles"
QT_MOC_LITERAL(5, 61, 2), // "dt"
QT_MOC_LITERAL(6, 64, 15), // "positionChanged"
QT_MOC_LITERAL(7, 80, 16), // "QQuickDirection*"
QT_MOC_LITERAL(8, 97, 3), // "arg"
QT_MOC_LITERAL(9, 101, 15), // "velocityChanged"
QT_MOC_LITERAL(10, 117, 19), // "accelerationChanged"
QT_MOC_LITERAL(11, 137, 15), // "relativeChanged"
QT_MOC_LITERAL(12, 153, 11), // "setPosition"
QT_MOC_LITERAL(13, 165, 11), // "setVelocity"
QT_MOC_LITERAL(14, 177, 15), // "setAcceleration"
QT_MOC_LITERAL(15, 193, 11), // "setRelative"
QT_MOC_LITERAL(16, 205, 8), // "relative"
QT_MOC_LITERAL(17, 214, 8), // "position"
QT_MOC_LITERAL(18, 223, 8), // "velocity"
QT_MOC_LITERAL(19, 232, 12) // "acceleration"

    },
    "QQuickCustomAffector\0affectParticles\0"
    "\0QQmlV4Handle\0particles\0dt\0positionChanged\0"
    "QQuickDirection*\0arg\0velocityChanged\0"
    "accelerationChanged\0relativeChanged\0"
    "setPosition\0setVelocity\0setAcceleration\0"
    "setRelative\0relative\0position\0velocity\0"
    "acceleration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCustomAffector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,
      10,    1,   70,    2, 0x06 /* Public */,
      11,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   76,    2, 0x0a /* Public */,
      13,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QReal,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495103,
      17, 0x80000000 | 7, 0x0049510f,
      18, 0x80000000 | 7, 0x0049510f,
      19, 0x80000000 | 7, 0x0049510f,

 // properties: notify_signal_id
       4,
       1,
       2,
       3,

       0        // eod
};

void QQuickCustomAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCustomAffector *_t = static_cast<QQuickCustomAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->affectParticles((*reinterpret_cast< QQmlV4Handle(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 2: _t->velocityChanged((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 3: _t->accelerationChanged((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 4: _t->relativeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPosition((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 6: _t->setVelocity((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 7: _t->setAcceleration((*reinterpret_cast< QQuickDirection*(*)>(_a[1]))); break;
        case 8: _t->setRelative((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlV4Handle >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCustomAffector::*_t)(QQmlV4Handle , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCustomAffector::affectParticles)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCustomAffector::*_t)(QQuickDirection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCustomAffector::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickCustomAffector::*_t)(QQuickDirection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCustomAffector::velocityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickCustomAffector::*_t)(QQuickDirection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCustomAffector::accelerationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickCustomAffector::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCustomAffector::relativeChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDirection* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCustomAffector *_t = static_cast<QQuickCustomAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->relative(); break;
        case 1: *reinterpret_cast< QQuickDirection**>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< QQuickDirection**>(_v) = _t->velocity(); break;
        case 3: *reinterpret_cast< QQuickDirection**>(_v) = _t->acceleration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCustomAffector *_t = static_cast<QQuickCustomAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRelative(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPosition(*reinterpret_cast< QQuickDirection**>(_v)); break;
        case 2: _t->setVelocity(*reinterpret_cast< QQuickDirection**>(_v)); break;
        case 3: _t->setAcceleration(*reinterpret_cast< QQuickDirection**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickCustomAffector *_t = static_cast<QQuickCustomAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->positionReset(); break;
        case 2: _t->velocityReset(); break;
        case 3: _t->accelerationReset(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickCustomAffector::staticMetaObject = {
    { &QQuickParticleAffector::staticMetaObject, qt_meta_stringdata_QQuickCustomAffector.data,
      qt_meta_data_QQuickCustomAffector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCustomAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCustomAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCustomAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickCustomAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
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
void QQuickCustomAffector::affectParticles(QQmlV4Handle _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickCustomAffector::positionChanged(QQuickDirection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickCustomAffector::velocityChanged(QQuickDirection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickCustomAffector::accelerationChanged(QQuickDirection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickCustomAffector::relativeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
