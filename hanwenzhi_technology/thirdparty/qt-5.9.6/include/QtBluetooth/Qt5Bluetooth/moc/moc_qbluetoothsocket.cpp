/****************************************************************************
** Meta object code from reading C++ file 'qbluetoothsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qbluetoothsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbluetoothsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QBluetoothSocket_t {
    QByteArrayData data[29];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBluetoothSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBluetoothSocket_t qt_meta_stringdata_QBluetoothSocket = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QBluetoothSocket"
QT_MOC_LITERAL(1, 17, 9), // "connected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "disconnected"
QT_MOC_LITERAL(4, 41, 5), // "error"
QT_MOC_LITERAL(5, 47, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(6, 77, 12), // "stateChanged"
QT_MOC_LITERAL(7, 90, 29), // "QBluetoothSocket::SocketState"
QT_MOC_LITERAL(8, 120, 5), // "state"
QT_MOC_LITERAL(9, 126, 17), // "serviceDiscovered"
QT_MOC_LITERAL(10, 144, 21), // "QBluetoothServiceInfo"
QT_MOC_LITERAL(11, 166, 7), // "service"
QT_MOC_LITERAL(12, 174, 17), // "discoveryFinished"
QT_MOC_LITERAL(13, 192, 11), // "SocketState"
QT_MOC_LITERAL(14, 204, 16), // "UnconnectedState"
QT_MOC_LITERAL(15, 221, 18), // "ServiceLookupState"
QT_MOC_LITERAL(16, 240, 15), // "ConnectingState"
QT_MOC_LITERAL(17, 256, 14), // "ConnectedState"
QT_MOC_LITERAL(18, 271, 10), // "BoundState"
QT_MOC_LITERAL(19, 282, 12), // "ClosingState"
QT_MOC_LITERAL(20, 295, 14), // "ListeningState"
QT_MOC_LITERAL(21, 310, 11), // "SocketError"
QT_MOC_LITERAL(22, 322, 13), // "NoSocketError"
QT_MOC_LITERAL(23, 336, 18), // "UnknownSocketError"
QT_MOC_LITERAL(24, 355, 17), // "HostNotFoundError"
QT_MOC_LITERAL(25, 373, 20), // "ServiceNotFoundError"
QT_MOC_LITERAL(26, 394, 12), // "NetworkError"
QT_MOC_LITERAL(27, 407, 24), // "UnsupportedProtocolError"
QT_MOC_LITERAL(28, 432, 14) // "OperationError"

    },
    "QBluetoothSocket\0connected\0\0disconnected\0"
    "error\0QBluetoothSocket::SocketError\0"
    "stateChanged\0QBluetoothSocket::SocketState\0"
    "state\0serviceDiscovered\0QBluetoothServiceInfo\0"
    "service\0discoveryFinished\0SocketState\0"
    "UnconnectedState\0ServiceLookupState\0"
    "ConnectingState\0ConnectedState\0"
    "BoundState\0ClosingState\0ListeningState\0"
    "SocketError\0NoSocketError\0UnknownSocketError\0"
    "HostNotFoundError\0ServiceNotFoundError\0"
    "NetworkError\0UnsupportedProtocolError\0"
    "OperationError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBluetoothSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   52,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // enums: name, flags, count, data
      13, 0x0,    7,   64,
      21, 0x0,    7,   78,

 // enum data: key, value
      14, uint(QBluetoothSocket::UnconnectedState),
      15, uint(QBluetoothSocket::ServiceLookupState),
      16, uint(QBluetoothSocket::ConnectingState),
      17, uint(QBluetoothSocket::ConnectedState),
      18, uint(QBluetoothSocket::BoundState),
      19, uint(QBluetoothSocket::ClosingState),
      20, uint(QBluetoothSocket::ListeningState),
      22, uint(QBluetoothSocket::NoSocketError),
      23, uint(QBluetoothSocket::UnknownSocketError),
      24, uint(QBluetoothSocket::HostNotFoundError),
      25, uint(QBluetoothSocket::ServiceNotFoundError),
      26, uint(QBluetoothSocket::NetworkError),
      27, uint(QBluetoothSocket::UnsupportedProtocolError),
      28, uint(QBluetoothSocket::OperationError),

       0        // eod
};

void QBluetoothSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBluetoothSocket *_t = static_cast<QBluetoothSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QBluetoothSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothServiceInfo(*)>(_a[1]))); break;
        case 5: _t->discoveryFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothServiceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBluetoothSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothSocket::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBluetoothSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothSocket::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBluetoothSocket::*_t)(QBluetoothSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothSocket::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBluetoothSocket::*_t)(QBluetoothSocket::SocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothSocket::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QBluetoothSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QBluetoothSocket.data,
      qt_meta_data_QBluetoothSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QBluetoothSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBluetoothSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QBluetoothSocket.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QBluetoothSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QBluetoothSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QBluetoothSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QBluetoothSocket::error(QBluetoothSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBluetoothSocket::stateChanged(QBluetoothSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
