/****************************************************************************
** Meta object code from reading C++ file 'qquickitemparticle_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickitemparticle_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickitemparticle_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickItemParticle_t {
    QByteArrayData data[17];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickItemParticle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickItemParticle_t qt_meta_stringdata_QQuickItemParticle = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickItemParticle"
QT_MOC_LITERAL(1, 19, 11), // "fadeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "delegateChanged"
QT_MOC_LITERAL(4, 48, 14), // "QQmlComponent*"
QT_MOC_LITERAL(5, 63, 3), // "arg"
QT_MOC_LITERAL(6, 67, 6), // "freeze"
QT_MOC_LITERAL(7, 74, 11), // "QQuickItem*"
QT_MOC_LITERAL(8, 86, 4), // "item"
QT_MOC_LITERAL(9, 91, 8), // "unfreeze"
QT_MOC_LITERAL(10, 100, 4), // "take"
QT_MOC_LITERAL(11, 105, 10), // "prioritize"
QT_MOC_LITERAL(12, 116, 4), // "give"
QT_MOC_LITERAL(13, 121, 7), // "setFade"
QT_MOC_LITERAL(14, 129, 11), // "setDelegate"
QT_MOC_LITERAL(15, 141, 4), // "fade"
QT_MOC_LITERAL(16, 146, 8) // "delegate"

    },
    "QQuickItemParticle\0fadeChanged\0\0"
    "delegateChanged\0QQmlComponent*\0arg\0"
    "freeze\0QQuickItem*\0item\0unfreeze\0take\0"
    "prioritize\0give\0setFade\0setDelegate\0"
    "fade\0delegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickItemParticle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      10,    2,   69,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   77,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,   11,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495103,
      16, 0x80000000 | 4, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickItemParticle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickItemParticle *_t = static_cast<QQuickItemParticle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fadeChanged(); break;
        case 1: _t->delegateChanged((*reinterpret_cast< QQmlComponent*(*)>(_a[1]))); break;
        case 2: _t->freeze((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: _t->unfreeze((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 4: _t->take((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->take((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 6: _t->give((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 7: _t->setFade((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDelegate((*reinterpret_cast< QQmlComponent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickItemParticle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItemParticle::fadeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickItemParticle::*_t)(QQmlComponent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItemParticle::delegateChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickItemParticle *_t = static_cast<QQuickItemParticle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->fade(); break;
        case 1: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickItemParticle *_t = static_cast<QQuickItemParticle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFade(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickItemParticle::staticMetaObject = {
    { &QQuickParticlePainter::staticMetaObject, qt_meta_stringdata_QQuickItemParticle.data,
      qt_meta_data_QQuickItemParticle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickItemParticle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickItemParticle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickItemParticle.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticlePainter::qt_metacast(_clname);
}

int QQuickItemParticle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticlePainter::qt_metacall(_c, _id, _a);
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
void QQuickItemParticle::fadeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickItemParticle::delegateChanged(QQmlComponent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QQuickItemParticleAttached_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickItemParticleAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickItemParticleAttached_t qt_meta_stringdata_QQuickItemParticleAttached = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QQuickItemParticleAttached"
QT_MOC_LITERAL(1, 27, 8), // "detached"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "attached"
QT_MOC_LITERAL(4, 46, 8), // "particle"
QT_MOC_LITERAL(5, 55, 19) // "QQuickItemParticle*"

    },
    "QQuickItemParticleAttached\0detached\0"
    "\0attached\0particle\0QQuickItemParticle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickItemParticleAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void QQuickItemParticleAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickItemParticleAttached *_t = static_cast<QQuickItemParticleAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detached(); break;
        case 1: _t->attached(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickItemParticleAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItemParticleAttached::detached)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickItemParticleAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItemParticleAttached::attached)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItemParticle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickItemParticleAttached *_t = static_cast<QQuickItemParticleAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItemParticle**>(_v) = _t->particle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickItemParticleAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickItemParticleAttached.data,
      qt_meta_data_QQuickItemParticleAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickItemParticleAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickItemParticleAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickItemParticleAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickItemParticleAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickItemParticleAttached::detached()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickItemParticleAttached::attached()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
