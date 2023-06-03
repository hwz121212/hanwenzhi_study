/****************************************************************************
** Meta object code from reading C++ file 'qconnection_local_backend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtRemoteObjects/private/qconnection_local_backend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qconnection_local_backend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalClientIo_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalClientIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalClientIo_t qt_meta_stringdata_LocalClientIo = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LocalClientIo"
QT_MOC_LITERAL(1, 14, 7), // "onError"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(4, 54, 5), // "error"
QT_MOC_LITERAL(5, 60, 14), // "onStateChanged"
QT_MOC_LITERAL(6, 75, 30), // "QLocalSocket::LocalSocketState"
QT_MOC_LITERAL(7, 106, 5) // "state"

    },
    "LocalClientIo\0onError\0\0"
    "QLocalSocket::LocalSocketError\0error\0"
    "onStateChanged\0QLocalSocket::LocalSocketState\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalClientIo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void LocalClientIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalClientIo *_t = static_cast<LocalClientIo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onError((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 1: _t->onStateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LocalClientIo::staticMetaObject = {
    { &ClientIoDevice::staticMetaObject, qt_meta_stringdata_LocalClientIo.data,
      qt_meta_data_LocalClientIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalClientIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalClientIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalClientIo.stringdata0))
        return static_cast<void*>(this);
    return ClientIoDevice::qt_metacast(_clname);
}

int LocalClientIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClientIoDevice::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_LocalServerIo_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalServerIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalServerIo_t qt_meta_stringdata_LocalServerIo = {
    {
QT_MOC_LITERAL(0, 0, 13) // "LocalServerIo"

    },
    "LocalServerIo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalServerIo[] = {

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

void LocalServerIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LocalServerIo::staticMetaObject = {
    { &ServerIoDevice::staticMetaObject, qt_meta_stringdata_LocalServerIo.data,
      qt_meta_data_LocalServerIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalServerIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalServerIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalServerIo.stringdata0))
        return static_cast<void*>(this);
    return ServerIoDevice::qt_metacast(_clname);
}

int LocalServerIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerIoDevice::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LocalServerImpl_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalServerImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalServerImpl_t qt_meta_stringdata_LocalServerImpl = {
    {
QT_MOC_LITERAL(0, 0, 15) // "LocalServerImpl"

    },
    "LocalServerImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalServerImpl[] = {

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

void LocalServerImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LocalServerImpl::staticMetaObject = {
    { &QConnectionAbstractServer::staticMetaObject, qt_meta_stringdata_LocalServerImpl.data,
      qt_meta_data_LocalServerImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalServerImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalServerImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalServerImpl.stringdata0))
        return static_cast<void*>(this);
    return QConnectionAbstractServer::qt_metacast(_clname);
}

int LocalServerImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QConnectionAbstractServer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
