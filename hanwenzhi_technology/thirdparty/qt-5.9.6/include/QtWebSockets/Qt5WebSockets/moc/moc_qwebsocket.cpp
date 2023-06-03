/****************************************************************************
** Meta object code from reading C++ file 'qwebsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebSocket_t {
    QByteArrayData data[37];
    char stringdata0[471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSocket_t qt_meta_stringdata_QWebSocket = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QWebSocket"
QT_MOC_LITERAL(1, 11, 12), // "aboutToClose"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "connected"
QT_MOC_LITERAL(4, 35, 12), // "disconnected"
QT_MOC_LITERAL(5, 48, 12), // "stateChanged"
QT_MOC_LITERAL(6, 61, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(7, 90, 5), // "state"
QT_MOC_LITERAL(8, 96, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(9, 124, 13), // "QNetworkProxy"
QT_MOC_LITERAL(10, 138, 5), // "proxy"
QT_MOC_LITERAL(11, 144, 15), // "QAuthenticator*"
QT_MOC_LITERAL(12, 160, 14), // "pAuthenticator"
QT_MOC_LITERAL(13, 175, 19), // "readChannelFinished"
QT_MOC_LITERAL(14, 195, 17), // "textFrameReceived"
QT_MOC_LITERAL(15, 213, 5), // "frame"
QT_MOC_LITERAL(16, 219, 11), // "isLastFrame"
QT_MOC_LITERAL(17, 231, 19), // "binaryFrameReceived"
QT_MOC_LITERAL(18, 251, 19), // "textMessageReceived"
QT_MOC_LITERAL(19, 271, 7), // "message"
QT_MOC_LITERAL(20, 279, 21), // "binaryMessageReceived"
QT_MOC_LITERAL(21, 301, 5), // "error"
QT_MOC_LITERAL(22, 307, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(23, 336, 4), // "pong"
QT_MOC_LITERAL(24, 341, 11), // "elapsedTime"
QT_MOC_LITERAL(25, 353, 7), // "payload"
QT_MOC_LITERAL(26, 361, 12), // "bytesWritten"
QT_MOC_LITERAL(27, 374, 5), // "bytes"
QT_MOC_LITERAL(28, 380, 5), // "close"
QT_MOC_LITERAL(29, 386, 29), // "QWebSocketProtocol::CloseCode"
QT_MOC_LITERAL(30, 416, 9), // "closeCode"
QT_MOC_LITERAL(31, 426, 6), // "reason"
QT_MOC_LITERAL(32, 433, 4), // "open"
QT_MOC_LITERAL(33, 438, 3), // "url"
QT_MOC_LITERAL(34, 442, 15), // "QNetworkRequest"
QT_MOC_LITERAL(35, 458, 7), // "request"
QT_MOC_LITERAL(36, 466, 4) // "ping"

    },
    "QWebSocket\0aboutToClose\0\0connected\0"
    "disconnected\0stateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0QAuthenticator*\0pAuthenticator\0"
    "readChannelFinished\0textFrameReceived\0"
    "frame\0isLastFrame\0binaryFrameReceived\0"
    "textMessageReceived\0message\0"
    "binaryMessageReceived\0error\0"
    "QAbstractSocket::SocketError\0pong\0"
    "elapsedTime\0payload\0bytesWritten\0bytes\0"
    "close\0QWebSocketProtocol::CloseCode\0"
    "closeCode\0reason\0open\0url\0QNetworkRequest\0"
    "request\0ping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       8,    2,  120,    2, 0x06 /* Public */,
      13,    0,  125,    2, 0x06 /* Public */,
      14,    2,  126,    2, 0x06 /* Public */,
      17,    2,  131,    2, 0x06 /* Public */,
      18,    1,  136,    2, 0x06 /* Public */,
      20,    1,  139,    2, 0x06 /* Public */,
      21,    1,  142,    2, 0x06 /* Public */,
      23,    2,  145,    2, 0x06 /* Public */,
      26,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    2,  153,    2, 0x0a /* Public */,
      28,    1,  158,    2, 0x2a /* Public | MethodCloned */,
      28,    0,  161,    2, 0x2a /* Public | MethodCloned */,
      32,    1,  162,    2, 0x0a /* Public */,
      32,    1,  165,    2, 0x0a /* Public */,
      36,    1,  168,    2, 0x0a /* Public */,
      36,    0,  171,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QByteArray,   19,
    QMetaType::Void, 0x80000000 | 22,   21,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QByteArray,   24,   25,
    QMetaType::Void, QMetaType::LongLong,   27,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString,   30,   31,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   33,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::QByteArray,   25,
    QMetaType::Void,

       0        // eod
};

void QWebSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebSocket *_t = static_cast<QWebSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToClose(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 5: _t->readChannelFinished(); break;
        case 6: _t->textFrameReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->binaryFrameReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->textMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->binaryMessageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 11: _t->pong((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 12: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->close((*reinterpret_cast< QWebSocketProtocol::CloseCode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->close((*reinterpret_cast< QWebSocketProtocol::CloseCode(*)>(_a[1]))); break;
        case 15: _t->close(); break;
        case 16: _t->open((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 17: _t->open((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 18: _t->ping((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 19: _t->ping(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::aboutToClose)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(QAbstractSocket::SocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::proxyAuthenticationRequired)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::readChannelFinished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::textFrameReceived)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(const QByteArray & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::binaryFrameReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::textMessageReceived)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::binaryMessageReceived)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::error)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(quint64 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::pong)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QWebSocket::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocket::bytesWritten)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject QWebSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebSocket.data,
      qt_meta_data_QWebSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSocket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QWebSocket::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWebSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QWebSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QWebSocket::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWebSocket::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWebSocket::readChannelFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QWebSocket::textFrameReceived(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QWebSocket::binaryFrameReceived(const QByteArray & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QWebSocket::textMessageReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QWebSocket::binaryMessageReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QWebSocket::error(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QWebSocket::pong(quint64 _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QWebSocket::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
