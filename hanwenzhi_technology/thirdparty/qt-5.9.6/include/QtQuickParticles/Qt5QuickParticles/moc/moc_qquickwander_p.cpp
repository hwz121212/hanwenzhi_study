/****************************************************************************
** Meta object code from reading C++ file 'qquickwander_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickwander_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwander_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWanderAffector_t {
    QByteArrayData data[19];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWanderAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWanderAffector_t qt_meta_stringdata_QQuickWanderAffector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickWanderAffector"
QT_MOC_LITERAL(1, 21, 16), // "xVarianceChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "arg"
QT_MOC_LITERAL(4, 43, 16), // "yVarianceChanged"
QT_MOC_LITERAL(5, 60, 11), // "paceChanged"
QT_MOC_LITERAL(6, 72, 24), // "affectedParameterChanged"
QT_MOC_LITERAL(7, 97, 20), // "AffectableParameters"
QT_MOC_LITERAL(8, 118, 12), // "setXVariance"
QT_MOC_LITERAL(9, 131, 12), // "setYVariance"
QT_MOC_LITERAL(10, 144, 7), // "setPace"
QT_MOC_LITERAL(11, 152, 20), // "setAffectedParameter"
QT_MOC_LITERAL(12, 173, 4), // "pace"
QT_MOC_LITERAL(13, 178, 9), // "xVariance"
QT_MOC_LITERAL(14, 188, 9), // "yVariance"
QT_MOC_LITERAL(15, 198, 17), // "affectedParameter"
QT_MOC_LITERAL(16, 216, 8), // "Position"
QT_MOC_LITERAL(17, 225, 8), // "Velocity"
QT_MOC_LITERAL(18, 234, 12) // "Acceleration"

    },
    "QQuickWanderAffector\0xVarianceChanged\0"
    "\0arg\0yVarianceChanged\0paceChanged\0"
    "affectedParameterChanged\0AffectableParameters\0"
    "setXVariance\0setYVariance\0setPace\0"
    "setAffectedParameter\0pace\0xVariance\0"
    "yVariance\0affectedParameter\0Position\0"
    "Velocity\0Acceleration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWanderAffector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 7,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 7,    3,

 // properties: name, type, flags
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       2,
       0,
       1,
       3,

 // enums: name, flags, count, data
       7, 0x0,    3,   98,

 // enum data: key, value
      16, uint(QQuickWanderAffector::Position),
      17, uint(QQuickWanderAffector::Velocity),
      18, uint(QQuickWanderAffector::Acceleration),

       0        // eod
};

void QQuickWanderAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWanderAffector *_t = static_cast<QQuickWanderAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xVarianceChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->yVarianceChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->paceChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->affectedParameterChanged((*reinterpret_cast< AffectableParameters(*)>(_a[1]))); break;
        case 4: _t->setXVariance((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setYVariance((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setPace((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setAffectedParameter((*reinterpret_cast< AffectableParameters(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWanderAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWanderAffector::xVarianceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWanderAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWanderAffector::yVarianceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickWanderAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWanderAffector::paceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickWanderAffector::*_t)(AffectableParameters );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWanderAffector::affectedParameterChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWanderAffector *_t = static_cast<QQuickWanderAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->pace(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xVariance(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yVariance(); break;
        case 3: *reinterpret_cast< AffectableParameters*>(_v) = _t->affectedParameter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWanderAffector *_t = static_cast<QQuickWanderAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPace(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setXVariance(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYVariance(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setAffectedParameter(*reinterpret_cast< AffectableParameters*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWanderAffector::staticMetaObject = {
    { &QQuickParticleAffector::staticMetaObject, qt_meta_stringdata_QQuickWanderAffector.data,
      qt_meta_data_QQuickWanderAffector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWanderAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWanderAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWanderAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickWanderAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
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
void QQuickWanderAffector::xVarianceChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickWanderAffector::yVarianceChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickWanderAffector::paceChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickWanderAffector::affectedParameterChanged(AffectableParameters _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
