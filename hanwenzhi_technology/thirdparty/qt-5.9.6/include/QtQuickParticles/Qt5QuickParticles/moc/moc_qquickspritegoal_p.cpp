/****************************************************************************
** Meta object code from reading C++ file 'qquickspritegoal_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickspritegoal_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickspritegoal_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSpriteGoalAffector_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSpriteGoalAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSpriteGoalAffector_t qt_meta_stringdata_QQuickSpriteGoalAffector = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickSpriteGoalAffector"
QT_MOC_LITERAL(1, 25, 16), // "goalStateChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "arg"
QT_MOC_LITERAL(4, 47, 11), // "jumpChanged"
QT_MOC_LITERAL(5, 59, 19), // "systemStatesChanged"
QT_MOC_LITERAL(6, 79, 12), // "setGoalState"
QT_MOC_LITERAL(7, 92, 7), // "setJump"
QT_MOC_LITERAL(8, 100, 15), // "setSystemStates"
QT_MOC_LITERAL(9, 116, 9), // "goalState"
QT_MOC_LITERAL(10, 126, 4), // "jump"
QT_MOC_LITERAL(11, 131, 12) // "systemStates"

    },
    "QQuickSpriteGoalAffector\0goalStateChanged\0"
    "\0arg\0jumpChanged\0systemStatesChanged\0"
    "setGoalState\0setJump\0setSystemStates\0"
    "goalState\0jump\0systemStates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSpriteGoalAffector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickSpriteGoalAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSpriteGoalAffector *_t = static_cast<QQuickSpriteGoalAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goalStateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->jumpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->systemStatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setGoalState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setJump((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setSystemStates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSpriteGoalAffector::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteGoalAffector::goalStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSpriteGoalAffector::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteGoalAffector::jumpChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickSpriteGoalAffector::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteGoalAffector::systemStatesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSpriteGoalAffector *_t = static_cast<QQuickSpriteGoalAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->goalState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->jump(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->systemStates(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSpriteGoalAffector *_t = static_cast<QQuickSpriteGoalAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGoalState(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setJump(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSystemStates(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickSpriteGoalAffector::staticMetaObject = {
    { &QQuickParticleAffector::staticMetaObject, qt_meta_stringdata_QQuickSpriteGoalAffector.data,
      qt_meta_data_QQuickSpriteGoalAffector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSpriteGoalAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSpriteGoalAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSpriteGoalAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickSpriteGoalAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QQuickSpriteGoalAffector::goalStateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickSpriteGoalAffector::jumpChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickSpriteGoalAffector::systemStatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
