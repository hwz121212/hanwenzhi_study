/****************************************************************************
** Meta object code from reading C++ file 'qscxmlstatemachine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScxml/private/qscxmlstatemachine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscxmlstatemachine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlInternal__EventLoopHook_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInternal__EventLoopHook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInternal__EventLoopHook_t qt_meta_stringdata_QScxmlInternal__EventLoopHook = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QScxmlInternal::EventLoopHook"
QT_MOC_LITERAL(1, 30, 15), // "doProcessEvents"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "QScxmlInternal::EventLoopHook\0"
    "doProcessEvents\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInternal__EventLoopHook[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QScxmlInternal::EventLoopHook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EventLoopHook *_t = static_cast<EventLoopHook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProcessEvents(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QScxmlInternal::EventLoopHook::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInternal__EventLoopHook.data,
      qt_meta_data_QScxmlInternal__EventLoopHook,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInternal::EventLoopHook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInternal::EventLoopHook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInternal__EventLoopHook.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInternal::EventLoopHook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter_t qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QScxmlInternal::ScxmlEventRouter"
QT_MOC_LITERAL(1, 33, 13), // "eventOccurred"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "QScxmlEvent"
QT_MOC_LITERAL(4, 60, 5) // "event"

    },
    "QScxmlInternal::ScxmlEventRouter\0"
    "eventOccurred\0\0QScxmlEvent\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInternal__ScxmlEventRouter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QScxmlInternal::ScxmlEventRouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScxmlEventRouter *_t = static_cast<ScxmlEventRouter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventOccurred((*reinterpret_cast< const QScxmlEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ScxmlEventRouter::*_t)(const QScxmlEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScxmlEventRouter::eventOccurred)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QScxmlInternal::ScxmlEventRouter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter.data,
      qt_meta_data_QScxmlInternal__ScxmlEventRouter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInternal::ScxmlEventRouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInternal::ScxmlEventRouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInternal__ScxmlEventRouter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInternal::ScxmlEventRouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QScxmlInternal::ScxmlEventRouter::eventOccurred(const QScxmlEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy_t {
    QByteArrayData data[9];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy_t qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QScxmlInternal::StateMachineI..."
QT_MOC_LITERAL(1, 38, 13), // "statesEntered"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 40), // "QVector<QScxmlStateMachineInf..."
QT_MOC_LITERAL(4, 94, 6), // "states"
QT_MOC_LITERAL(5, 101, 12), // "statesExited"
QT_MOC_LITERAL(6, 114, 20), // "transitionsTriggered"
QT_MOC_LITERAL(7, 135, 45), // "QVector<QScxmlStateMachineInf..."
QT_MOC_LITERAL(8, 181, 11) // "transitions"

    },
    "QScxmlInternal::StateMachineInfoProxy\0"
    "statesEntered\0\0QVector<QScxmlStateMachineInfo::StateId>\0"
    "states\0statesExited\0transitionsTriggered\0"
    "QVector<QScxmlStateMachineInfo::TransitionId>\0"
    "transitions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInternal__StateMachineInfoProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QScxmlInternal::StateMachineInfoProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StateMachineInfoProxy *_t = static_cast<StateMachineInfoProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statesEntered((*reinterpret_cast< const QVector<QScxmlStateMachineInfo::StateId>(*)>(_a[1]))); break;
        case 1: _t->statesExited((*reinterpret_cast< const QVector<QScxmlStateMachineInfo::StateId>(*)>(_a[1]))); break;
        case 2: _t->transitionsTriggered((*reinterpret_cast< const QVector<QScxmlStateMachineInfo::TransitionId>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StateMachineInfoProxy::*_t)(const QVector<QScxmlStateMachineInfo::StateId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StateMachineInfoProxy::statesEntered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StateMachineInfoProxy::*_t)(const QVector<QScxmlStateMachineInfo::StateId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StateMachineInfoProxy::statesExited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StateMachineInfoProxy::*_t)(const QVector<QScxmlStateMachineInfo::TransitionId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StateMachineInfoProxy::transitionsTriggered)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QScxmlInternal::StateMachineInfoProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy.data,
      qt_meta_data_QScxmlInternal__StateMachineInfoProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInternal::StateMachineInfoProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInternal::StateMachineInfoProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInternal__StateMachineInfoProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInternal::StateMachineInfoProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QScxmlInternal::StateMachineInfoProxy::statesEntered(const QVector<QScxmlStateMachineInfo::StateId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScxmlInternal::StateMachineInfoProxy::statesExited(const QVector<QScxmlStateMachineInfo::StateId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QScxmlInternal::StateMachineInfoProxy::transitionsTriggered(const QVector<QScxmlStateMachineInfo::TransitionId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
