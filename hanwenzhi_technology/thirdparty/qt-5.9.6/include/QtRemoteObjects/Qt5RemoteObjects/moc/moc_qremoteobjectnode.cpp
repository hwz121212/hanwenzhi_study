/****************************************************************************
** Meta object code from reading C++ file 'qremoteobjectnode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qremoteobjectnode_p.h"
#include "../../qremoteobjectnode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qremoteobjectnode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRemoteObjectNode_t {
    QByteArrayData data[31];
    char stringdata0[511];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectNode_t qt_meta_stringdata_QRemoteObjectNode = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QRemoteObjectNode"
QT_MOC_LITERAL(1, 18, 17), // "remoteObjectAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "QRemoteObjectSourceLocation"
QT_MOC_LITERAL(4, 65, 19), // "remoteObjectRemoved"
QT_MOC_LITERAL(5, 85, 5), // "error"
QT_MOC_LITERAL(6, 91, 28), // "QRemoteObjectNode::ErrorCode"
QT_MOC_LITERAL(7, 120, 9), // "errorCode"
QT_MOC_LITERAL(8, 130, 12), // "onClientRead"
QT_MOC_LITERAL(9, 143, 3), // "obj"
QT_MOC_LITERAL(10, 147, 25), // "onRemoteObjectSourceAdded"
QT_MOC_LITERAL(11, 173, 5), // "entry"
QT_MOC_LITERAL(12, 179, 27), // "onRemoteObjectSourceRemoved"
QT_MOC_LITERAL(13, 207, 21), // "onRegistryInitialized"
QT_MOC_LITERAL(14, 229, 17), // "onShouldReconnect"
QT_MOC_LITERAL(15, 247, 15), // "ClientIoDevice*"
QT_MOC_LITERAL(16, 263, 8), // "ioDevice"
QT_MOC_LITERAL(17, 272, 13), // "connectToNode"
QT_MOC_LITERAL(18, 286, 7), // "address"
QT_MOC_LITERAL(19, 294, 11), // "registryUrl"
QT_MOC_LITERAL(20, 306, 9), // "ErrorCode"
QT_MOC_LITERAL(21, 316, 7), // "NoError"
QT_MOC_LITERAL(22, 324, 19), // "RegistryNotAcquired"
QT_MOC_LITERAL(23, 344, 21), // "RegistryAlreadyHosted"
QT_MOC_LITERAL(24, 366, 14), // "NodeIsNoServer"
QT_MOC_LITERAL(25, 381, 20), // "ServerAlreadyCreated"
QT_MOC_LITERAL(26, 402, 25), // "UnintendedRegistryHosting"
QT_MOC_LITERAL(27, 428, 29), // "OperationNotValidOnClientNode"
QT_MOC_LITERAL(28, 458, 19), // "SourceNotRegistered"
QT_MOC_LITERAL(29, 478, 17), // "MissingObjectName"
QT_MOC_LITERAL(30, 496, 14) // "HostUrlInvalid"

    },
    "QRemoteObjectNode\0remoteObjectAdded\0"
    "\0QRemoteObjectSourceLocation\0"
    "remoteObjectRemoved\0error\0"
    "QRemoteObjectNode::ErrorCode\0errorCode\0"
    "onClientRead\0obj\0onRemoteObjectSourceAdded\0"
    "entry\0onRemoteObjectSourceRemoved\0"
    "onRegistryInitialized\0onShouldReconnect\0"
    "ClientIoDevice*\0ioDevice\0connectToNode\0"
    "address\0registryUrl\0ErrorCode\0NoError\0"
    "RegistryNotAcquired\0RegistryAlreadyHosted\0"
    "NodeIsNoServer\0ServerAlreadyCreated\0"
    "UnintendedRegistryHosting\0"
    "OperationNotValidOnClientNode\0"
    "SourceNotRegistered\0MissingObjectName\0"
    "HostUrlInvalid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   84, // properties
       1,   87, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,
      12,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    1,   78,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

 // methods: parameters
    QMetaType::Bool, QMetaType::QUrl,   18,

 // properties: name, type, flags
      19, QMetaType::QUrl, 0x00095103,

 // enums: name, flags, count, data
      20, 0x0,   10,   91,

 // enum data: key, value
      21, uint(QRemoteObjectNode::NoError),
      22, uint(QRemoteObjectNode::RegistryNotAcquired),
      23, uint(QRemoteObjectNode::RegistryAlreadyHosted),
      24, uint(QRemoteObjectNode::NodeIsNoServer),
      25, uint(QRemoteObjectNode::ServerAlreadyCreated),
      26, uint(QRemoteObjectNode::UnintendedRegistryHosting),
      27, uint(QRemoteObjectNode::OperationNotValidOnClientNode),
      28, uint(QRemoteObjectNode::SourceNotRegistered),
      29, uint(QRemoteObjectNode::MissingObjectName),
      30, uint(QRemoteObjectNode::HostUrlInvalid),

       0        // eod
};

void QRemoteObjectNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRemoteObjectNode *_t = static_cast<QRemoteObjectNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remoteObjectAdded((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 1: _t->remoteObjectRemoved((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QRemoteObjectNode::ErrorCode(*)>(_a[1]))); break;
        case 3: _t->d_func()->onClientRead((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->d_func()->onRemoteObjectSourceAdded((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 5: _t->d_func()->onRemoteObjectSourceRemoved((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 6: _t->d_func()->onRegistryInitialized(); break;
        case 7: _t->d_func()->onShouldReconnect((*reinterpret_cast< ClientIoDevice*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->connectToNode((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        case 5:
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
            typedef void (QRemoteObjectNode::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectNode::remoteObjectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRemoteObjectNode::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectNode::remoteObjectRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRemoteObjectNode::*_t)(QRemoteObjectNode::ErrorCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectNode::error)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRemoteObjectNode *_t = static_cast<QRemoteObjectNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->registryUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRemoteObjectNode *_t = static_cast<QRemoteObjectNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegistryUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRemoteObjectNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QRemoteObjectNode.data,
      qt_meta_data_QRemoteObjectNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QRemoteObjectNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QRemoteObjectNode::remoteObjectAdded(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRemoteObjectNode::remoteObjectRemoved(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRemoteObjectNode::error(QRemoteObjectNode::ErrorCode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QRemoteObjectHostBase_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectHostBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectHostBase_t qt_meta_stringdata_QRemoteObjectHostBase = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QRemoteObjectHostBase"

    },
    "QRemoteObjectHostBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectHostBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QRemoteObjectHostBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QRemoteObjectHostBase::staticMetaObject = {
    { &QRemoteObjectNode::staticMetaObject, qt_meta_stringdata_QRemoteObjectHostBase.data,
      qt_meta_data_QRemoteObjectHostBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectHostBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectHostBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectHostBase.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectNode::qt_metacast(_clname);
}

int QRemoteObjectHostBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectNode::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QRemoteObjectHost_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectHost_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectHost_t qt_meta_stringdata_QRemoteObjectHost = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QRemoteObjectHost"

    },
    "QRemoteObjectHost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectHost[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QRemoteObjectHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QRemoteObjectHost::staticMetaObject = {
    { &QRemoteObjectHostBase::staticMetaObject, qt_meta_stringdata_QRemoteObjectHost.data,
      qt_meta_data_QRemoteObjectHost,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectHost::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectHost.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectHostBase::qt_metacast(_clname);
}

int QRemoteObjectHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectHostBase::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QRemoteObjectRegistryHost_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectRegistryHost_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectRegistryHost_t qt_meta_stringdata_QRemoteObjectRegistryHost = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QRemoteObjectRegistryHost"

    },
    "QRemoteObjectRegistryHost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectRegistryHost[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QRemoteObjectRegistryHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QRemoteObjectRegistryHost::staticMetaObject = {
    { &QRemoteObjectHostBase::staticMetaObject, qt_meta_stringdata_QRemoteObjectRegistryHost.data,
      qt_meta_data_QRemoteObjectRegistryHost,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectRegistryHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectRegistryHost::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectRegistryHost.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectHostBase::qt_metacast(_clname);
}

int QRemoteObjectRegistryHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectHostBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
