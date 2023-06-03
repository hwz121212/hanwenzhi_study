/****************************************************************************
** Meta object code from reading C++ file 'qremoteobjectreplica.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qremoteobjectreplica.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qremoteobjectreplica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRemoteObjectReplica_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectReplica_t qt_meta_stringdata_QRemoteObjectReplica = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QRemoteObjectReplica"
QT_MOC_LITERAL(1, 21, 11), // "initialized"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "stateChanged"
QT_MOC_LITERAL(4, 47, 5), // "State"
QT_MOC_LITERAL(5, 53, 5), // "state"
QT_MOC_LITERAL(6, 59, 8), // "oldState"
QT_MOC_LITERAL(7, 68, 4), // "node"
QT_MOC_LITERAL(8, 73, 18), // "QRemoteObjectNode*"
QT_MOC_LITERAL(9, 92, 13), // "Uninitialized"
QT_MOC_LITERAL(10, 106, 7), // "Default"
QT_MOC_LITERAL(11, 114, 5), // "Valid"
QT_MOC_LITERAL(12, 120, 7), // "Suspect"
QT_MOC_LITERAL(13, 128, 17) // "SignatureMismatch"

    },
    "QRemoteObjectReplica\0initialized\0\0"
    "stateChanged\0State\0state\0oldState\0"
    "node\0QRemoteObjectNode*\0Uninitialized\0"
    "Default\0Valid\0Suspect\0SignatureMismatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectReplica[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    2,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       5, 0x80000000 | 4, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       4, 0x0,    5,   42,

 // enum data: key, value
       9, uint(QRemoteObjectReplica::Uninitialized),
      10, uint(QRemoteObjectReplica::Default),
      11, uint(QRemoteObjectReplica::Valid),
      12, uint(QRemoteObjectReplica::Suspect),
      13, uint(QRemoteObjectReplica::SignatureMismatch),

       0        // eod
};

void QRemoteObjectReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRemoteObjectReplica *_t = static_cast<QRemoteObjectReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->stateChanged((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRemoteObjectReplica::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectReplica::initialized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRemoteObjectReplica::*_t)(State , State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectReplica::stateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRemoteObjectReplica *_t = static_cast<QRemoteObjectReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRemoteObjectNode**>(_v) = _t->node(); break;
        case 1: *reinterpret_cast< State*>(_v) = _t->state(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRemoteObjectReplica *_t = static_cast<QRemoteObjectReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNode(*reinterpret_cast< QRemoteObjectNode**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRemoteObjectReplica::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QRemoteObjectReplica.data,
      qt_meta_data_QRemoteObjectReplica,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectReplica.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QRemoteObjectReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QRemoteObjectReplica::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QRemoteObjectReplica::stateChanged(State _t1, State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
