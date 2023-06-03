/****************************************************************************
** Meta object code from reading C++ file 'qllcpsocket_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtNfc/private/qllcpsocket_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qllcpsocket_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLlcpSocket_t {
    QByteArrayData data[22];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLlcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLlcpSocket_t qt_meta_stringdata_QLlcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QLlcpSocket"
QT_MOC_LITERAL(1, 12, 9), // "connected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "disconnected"
QT_MOC_LITERAL(4, 36, 5), // "error"
QT_MOC_LITERAL(5, 42, 24), // "QLlcpSocket::SocketError"
QT_MOC_LITERAL(6, 67, 11), // "socketError"
QT_MOC_LITERAL(7, 79, 12), // "stateChanged"
QT_MOC_LITERAL(8, 92, 24), // "QLlcpSocket::SocketState"
QT_MOC_LITERAL(9, 117, 11), // "socketState"
QT_MOC_LITERAL(10, 129, 11), // "SocketState"
QT_MOC_LITERAL(11, 141, 16), // "UnconnectedState"
QT_MOC_LITERAL(12, 158, 15), // "ConnectingState"
QT_MOC_LITERAL(13, 174, 14), // "ConnectedState"
QT_MOC_LITERAL(14, 189, 12), // "ClosingState"
QT_MOC_LITERAL(15, 202, 10), // "BoundState"
QT_MOC_LITERAL(16, 213, 14), // "ListeningState"
QT_MOC_LITERAL(17, 228, 11), // "SocketError"
QT_MOC_LITERAL(18, 240, 18), // "UnknownSocketError"
QT_MOC_LITERAL(19, 259, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(20, 281, 17), // "SocketAccessError"
QT_MOC_LITERAL(21, 299, 19) // "SocketResourceError"

    },
    "QLlcpSocket\0connected\0\0disconnected\0"
    "error\0QLlcpSocket::SocketError\0"
    "socketError\0stateChanged\0"
    "QLlcpSocket::SocketState\0socketState\0"
    "SocketState\0UnconnectedState\0"
    "ConnectingState\0ConnectedState\0"
    "ClosingState\0BoundState\0ListeningState\0"
    "SocketError\0UnknownSocketError\0"
    "RemoteHostClosedError\0SocketAccessError\0"
    "SocketResourceError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLlcpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       7,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // enums: name, flags, count, data
      10, 0x0,    6,   50,
      17, 0x0,    4,   62,

 // enum data: key, value
      11, uint(QLlcpSocket::UnconnectedState),
      12, uint(QLlcpSocket::ConnectingState),
      13, uint(QLlcpSocket::ConnectedState),
      14, uint(QLlcpSocket::ClosingState),
      15, uint(QLlcpSocket::BoundState),
      16, uint(QLlcpSocket::ListeningState),
      18, uint(QLlcpSocket::UnknownSocketError),
      19, uint(QLlcpSocket::RemoteHostClosedError),
      20, uint(QLlcpSocket::SocketAccessError),
      21, uint(QLlcpSocket::SocketResourceError),

       0        // eod
};

void QLlcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLlcpSocket *_t = static_cast<QLlcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QLlcpSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QLlcpSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QLlcpSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLlcpSocket::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLlcpSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLlcpSocket::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLlcpSocket::*_t)(QLlcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLlcpSocket::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QLlcpSocket::*_t)(QLlcpSocket::SocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLlcpSocket::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QLlcpSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QLlcpSocket.data,
      qt_meta_data_QLlcpSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QLlcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLlcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLlcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QLlcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QLlcpSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QLlcpSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QLlcpSocket::error(QLlcpSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLlcpSocket::stateChanged(QLlcpSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
