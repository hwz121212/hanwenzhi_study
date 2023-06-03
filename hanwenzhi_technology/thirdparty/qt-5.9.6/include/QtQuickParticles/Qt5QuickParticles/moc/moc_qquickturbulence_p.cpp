/****************************************************************************
** Meta object code from reading C++ file 'qquickturbulence_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickturbulence_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickturbulence_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTurbulenceAffector_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTurbulenceAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTurbulenceAffector_t qt_meta_stringdata_QQuickTurbulenceAffector = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickTurbulenceAffector"
QT_MOC_LITERAL(1, 25, 15), // "strengthChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "arg"
QT_MOC_LITERAL(4, 46, 18), // "noiseSourceChanged"
QT_MOC_LITERAL(5, 65, 11), // "setStrength"
QT_MOC_LITERAL(6, 77, 14), // "setNoiseSource"
QT_MOC_LITERAL(7, 92, 8), // "strength"
QT_MOC_LITERAL(8, 101, 11) // "noiseSource"

    },
    "QQuickTurbulenceAffector\0strengthChanged\0"
    "\0arg\0noiseSourceChanged\0setStrength\0"
    "setNoiseSource\0strength\0noiseSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTurbulenceAffector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QUrl,    3,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::QUrl, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickTurbulenceAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTurbulenceAffector *_t = static_cast<QQuickTurbulenceAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->strengthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->noiseSourceChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->setStrength((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setNoiseSource((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickTurbulenceAffector::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTurbulenceAffector::strengthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTurbulenceAffector::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTurbulenceAffector::noiseSourceChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTurbulenceAffector *_t = static_cast<QQuickTurbulenceAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->strength(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->noiseSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTurbulenceAffector *_t = static_cast<QQuickTurbulenceAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStrength(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setNoiseSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickTurbulenceAffector::staticMetaObject = {
    { &QQuickParticleAffector::staticMetaObject, qt_meta_stringdata_QQuickTurbulenceAffector.data,
      qt_meta_data_QQuickTurbulenceAffector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTurbulenceAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTurbulenceAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTurbulenceAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickTurbulenceAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QQuickTurbulenceAffector::strengthChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickTurbulenceAffector::noiseSourceChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
