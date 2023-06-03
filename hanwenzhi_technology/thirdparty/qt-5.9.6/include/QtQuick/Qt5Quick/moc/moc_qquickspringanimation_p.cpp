/****************************************************************************
** Meta object code from reading C++ file 'qquickspringanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickspringanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickspringanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSpringAnimation_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSpringAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSpringAnimation_t qt_meta_stringdata_QQuickSpringAnimation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickSpringAnimation"
QT_MOC_LITERAL(1, 22, 14), // "modulusChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "massChanged"
QT_MOC_LITERAL(4, 50, 11), // "syncChanged"
QT_MOC_LITERAL(5, 62, 8), // "velocity"
QT_MOC_LITERAL(6, 71, 6), // "spring"
QT_MOC_LITERAL(7, 78, 7), // "damping"
QT_MOC_LITERAL(8, 86, 7), // "epsilon"
QT_MOC_LITERAL(9, 94, 7), // "modulus"
QT_MOC_LITERAL(10, 102, 4) // "mass"

    },
    "QQuickSpringAnimation\0modulusChanged\0"
    "\0massChanged\0syncChanged\0velocity\0"
    "spring\0damping\0epsilon\0modulus\0mass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSpringAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QQuickSpringAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSpringAnimation *_t = static_cast<QQuickSpringAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modulusChanged(); break;
        case 1: _t->massChanged(); break;
        case 2: _t->syncChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSpringAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpringAnimation::modulusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSpringAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpringAnimation::massChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickSpringAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpringAnimation::syncChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSpringAnimation *_t = static_cast<QQuickSpringAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->velocity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->spring(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->damping(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->epsilon(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->modulus(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->mass(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSpringAnimation *_t = static_cast<QQuickSpringAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSpring(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setDamping(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setEpsilon(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setModulus(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setMass(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickSpringAnimation::staticMetaObject = {
    { &QQuickNumberAnimation::staticMetaObject, qt_meta_stringdata_QQuickSpringAnimation.data,
      qt_meta_data_QQuickSpringAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSpringAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSpringAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSpringAnimation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlPropertyValueSource"))
        return static_cast< QQmlPropertyValueSource*>(this);
    return QQuickNumberAnimation::qt_metacast(_clname);
}

int QQuickSpringAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickNumberAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickSpringAnimation::modulusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickSpringAnimation::massChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickSpringAnimation::syncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
