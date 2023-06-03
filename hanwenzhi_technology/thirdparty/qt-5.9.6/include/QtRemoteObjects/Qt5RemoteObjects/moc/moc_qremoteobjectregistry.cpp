/****************************************************************************
** Meta object code from reading C++ file 'qremoteobjectregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qremoteobjectregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qremoteobjectregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRemoteObjectRegistry_t {
    QByteArrayData data[13];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectRegistry_t qt_meta_stringdata_QRemoteObjectRegistry = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QRemoteObjectRegistry"
QT_MOC_LITERAL(1, 22, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 40, 8), // "Registry"
QT_MOC_LITERAL(3, 49, 17), // "remoteObjectAdded"
QT_MOC_LITERAL(4, 67, 0), // ""
QT_MOC_LITERAL(5, 68, 27), // "QRemoteObjectSourceLocation"
QT_MOC_LITERAL(6, 96, 5), // "entry"
QT_MOC_LITERAL(7, 102, 19), // "remoteObjectRemoved"
QT_MOC_LITERAL(8, 122, 9), // "addSource"
QT_MOC_LITERAL(9, 132, 12), // "removeSource"
QT_MOC_LITERAL(10, 145, 22), // "pushToRegistryIfNeeded"
QT_MOC_LITERAL(11, 168, 15), // "sourceLocations"
QT_MOC_LITERAL(12, 184, 28) // "QRemoteObjectSourceLocations"

    },
    "QRemoteObjectRegistry\0RemoteObject Type\0"
    "Registry\0remoteObjectAdded\0\0"
    "QRemoteObjectSourceLocation\0entry\0"
    "remoteObjectRemoved\0addSource\0"
    "removeSource\0pushToRegistryIfNeeded\0"
    "sourceLocations\0QRemoteObjectSourceLocations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   41,    4, 0x06 /* Public */,
       7,    1,   44,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   47,    4, 0x09 /* Protected */,
       9,    1,   50,    4, 0x09 /* Protected */,
      10,    0,   53,    4, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00095009,

       0        // eod
};

void QRemoteObjectRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRemoteObjectRegistry *_t = static_cast<QRemoteObjectRegistry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remoteObjectAdded((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 1: _t->remoteObjectRemoved((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 2: _t->addSource((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 3: _t->removeSource((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 4: _t->pushToRegistryIfNeeded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRemoteObjectRegistry::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectRegistry::remoteObjectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRemoteObjectRegistry::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectRegistry::remoteObjectRemoved)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocations >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRemoteObjectRegistry *_t = static_cast<QRemoteObjectRegistry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRemoteObjectSourceLocations*>(_v) = _t->sourceLocations(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRemoteObjectRegistry::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_QRemoteObjectRegistry.data,
      qt_meta_data_QRemoteObjectRegistry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectRegistry.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int QRemoteObjectRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectReplica::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void QRemoteObjectRegistry::remoteObjectAdded(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRemoteObjectRegistry::remoteObjectRemoved(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
