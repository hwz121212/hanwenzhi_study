/****************************************************************************
** Meta object code from reading C++ file 'qconnection_tcpip_backend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtRemoteObjects/private/qconnection_tcpip_backend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qconnection_tcpip_backend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpClientIo_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpClientIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpClientIo_t qt_meta_stringdata_TcpClientIo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TcpClientIo"
QT_MOC_LITERAL(1, 12, 7), // "onError"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(4, 50, 5), // "error"
QT_MOC_LITERAL(5, 56, 14), // "onStateChanged"
QT_MOC_LITERAL(6, 71, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(7, 100, 5) // "state"

    },
    "TcpClientIo\0onError\0\0QAbstractSocket::SocketError\0"
    "error\0onStateChanged\0QAbstractSocket::SocketState\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpClientIo[] = {

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

void TcpClientIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpClientIo *_t = static_cast<TcpClientIo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->onStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject TcpClientIo::staticMetaObject = {
    { &ClientIoDevice::staticMetaObject, qt_meta_stringdata_TcpClientIo.data,
      qt_meta_data_TcpClientIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpClientIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpClientIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpClientIo.stringdata0))
        return static_cast<void*>(this);
    return ClientIoDevice::qt_metacast(_clname);
}

int TcpClientIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_TcpServerIo_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpServerIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpServerIo_t qt_meta_stringdata_TcpServerIo = {
    {
QT_MOC_LITERAL(0, 0, 11) // "TcpServerIo"

    },
    "TcpServerIo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServerIo[] = {

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

void TcpServerIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TcpServerIo::staticMetaObject = {
    { &ServerIoDevice::staticMetaObject, qt_meta_stringdata_TcpServerIo.data,
      qt_meta_data_TcpServerIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpServerIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServerIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpServerIo.stringdata0))
        return static_cast<void*>(this);
    return ServerIoDevice::qt_metacast(_clname);
}

int TcpServerIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerIoDevice::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TcpServerImpl_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpServerImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpServerImpl_t qt_meta_stringdata_TcpServerImpl = {
    {
QT_MOC_LITERAL(0, 0, 13) // "TcpServerImpl"

    },
    "TcpServerImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServerImpl[] = {

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

void TcpServerImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TcpServerImpl::staticMetaObject = {
    { &QConnectionAbstractServer::staticMetaObject, qt_meta_stringdata_TcpServerImpl.data,
      qt_meta_data_TcpServerImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpServerImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServerImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpServerImpl.stringdata0))
        return static_cast<void*>(this);
    return QConnectionAbstractServer::qt_metacast(_clname);
}

int TcpServerImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QConnectionAbstractServer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
