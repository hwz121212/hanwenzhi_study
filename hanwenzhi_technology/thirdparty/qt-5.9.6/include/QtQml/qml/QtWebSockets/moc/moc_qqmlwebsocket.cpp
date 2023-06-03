/****************************************************************************
** Meta object code from reading C++ file 'qqmlwebsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmlwebsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlwebsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlWebSocket_t {
    QByteArrayData data[28];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlWebSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlWebSocket_t qt_meta_stringdata_QQmlWebSocket = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQmlWebSocket"
QT_MOC_LITERAL(1, 14, 19), // "textMessageReceived"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "message"
QT_MOC_LITERAL(4, 43, 21), // "binaryMessageReceived"
QT_MOC_LITERAL(5, 65, 13), // "statusChanged"
QT_MOC_LITERAL(6, 79, 6), // "Status"
QT_MOC_LITERAL(7, 86, 6), // "status"
QT_MOC_LITERAL(8, 93, 13), // "activeChanged"
QT_MOC_LITERAL(9, 107, 8), // "isActive"
QT_MOC_LITERAL(10, 116, 18), // "errorStringChanged"
QT_MOC_LITERAL(11, 135, 11), // "errorString"
QT_MOC_LITERAL(12, 147, 10), // "urlChanged"
QT_MOC_LITERAL(13, 158, 7), // "onError"
QT_MOC_LITERAL(14, 166, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(15, 195, 5), // "error"
QT_MOC_LITERAL(16, 201, 14), // "onStateChanged"
QT_MOC_LITERAL(17, 216, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(18, 245, 5), // "state"
QT_MOC_LITERAL(19, 251, 15), // "sendTextMessage"
QT_MOC_LITERAL(20, 267, 17), // "sendBinaryMessage"
QT_MOC_LITERAL(21, 285, 3), // "url"
QT_MOC_LITERAL(22, 289, 6), // "active"
QT_MOC_LITERAL(23, 296, 10), // "Connecting"
QT_MOC_LITERAL(24, 307, 4), // "Open"
QT_MOC_LITERAL(25, 312, 7), // "Closing"
QT_MOC_LITERAL(26, 320, 6), // "Closed"
QT_MOC_LITERAL(27, 327, 5) // "Error"

    },
    "QQmlWebSocket\0textMessageReceived\0\0"
    "message\0binaryMessageReceived\0"
    "statusChanged\0Status\0status\0activeChanged\0"
    "isActive\0errorStringChanged\0errorString\0"
    "urlChanged\0onError\0QAbstractSocket::SocketError\0"
    "error\0onStateChanged\0QAbstractSocket::SocketState\0"
    "state\0sendTextMessage\0sendBinaryMessage\0"
    "url\0active\0Connecting\0Open\0Closing\0"
    "Closed\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlWebSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,  102, // properties
       1,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x86 /* Public | MethodRevisioned */,
       5,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      12,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      19,    1,   96,    2, 0x02 /* Public */,
      20,    1,   99,    2, 0x82 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       1,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,

 // methods: revision
       0,
       1,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

 // methods: parameters
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QByteArray,    3,

 // properties: name, type, flags
      21, QMetaType::QUrl, 0x00495103,
       7, 0x80000000 | 6, 0x00495009,
      11, QMetaType::QString, 0x00495001,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       5,
       2,
       4,
       3,

 // enums: name, flags, count, data
       6, 0x0,    5,  122,

 // enum data: key, value
      23, uint(QQmlWebSocket::Connecting),
      24, uint(QQmlWebSocket::Open),
      25, uint(QQmlWebSocket::Closing),
      26, uint(QQmlWebSocket::Closed),
      27, uint(QQmlWebSocket::Error),

       0        // eod
};

void QQmlWebSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlWebSocket *_t = static_cast<QQmlWebSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->binaryMessageReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 3: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->errorStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->urlChanged(); break;
        case 6: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->onStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 8: { qint64 _r = _t->sendTextMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 9: { qint64 _r = _t->sendBinaryMessage((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlWebSocket::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::textMessageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlWebSocket::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::binaryMessageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlWebSocket::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlWebSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::activeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQmlWebSocket::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::errorStringChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQmlWebSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocket::urlChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlWebSocket *_t = static_cast<QQmlWebSocket *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlWebSocket *_t = static_cast<QQmlWebSocket *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlWebSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlWebSocket.data,
      qt_meta_data_QQmlWebSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlWebSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlWebSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlWebSocket.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlWebSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlWebSocket::textMessageReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlWebSocket::binaryMessageReceived(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlWebSocket::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlWebSocket::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQmlWebSocket::errorStringChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQmlWebSocket::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
