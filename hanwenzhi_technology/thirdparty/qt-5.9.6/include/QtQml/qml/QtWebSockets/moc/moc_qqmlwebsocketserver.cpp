/****************************************************************************
** Meta object code from reading C++ file 'qqmlwebsocketserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmlwebsocketserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlwebsocketserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlWebSocketServer_t {
    QByteArrayData data[19];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlWebSocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlWebSocketServer_t qt_meta_stringdata_QQmlWebSocketServer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQmlWebSocketServer"
QT_MOC_LITERAL(1, 20, 15), // "clientConnected"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "QQmlWebSocket*"
QT_MOC_LITERAL(4, 52, 9), // "webSocket"
QT_MOC_LITERAL(5, 62, 18), // "errorStringChanged"
QT_MOC_LITERAL(6, 81, 11), // "errorString"
QT_MOC_LITERAL(7, 93, 10), // "urlChanged"
QT_MOC_LITERAL(8, 104, 3), // "url"
QT_MOC_LITERAL(9, 108, 11), // "portChanged"
QT_MOC_LITERAL(10, 120, 4), // "port"
QT_MOC_LITERAL(11, 125, 11), // "nameChanged"
QT_MOC_LITERAL(12, 137, 4), // "name"
QT_MOC_LITERAL(13, 142, 11), // "hostChanged"
QT_MOC_LITERAL(14, 154, 4), // "host"
QT_MOC_LITERAL(15, 159, 13), // "listenChanged"
QT_MOC_LITERAL(16, 173, 6), // "listen"
QT_MOC_LITERAL(17, 180, 13), // "acceptChanged"
QT_MOC_LITERAL(18, 194, 6) // "accept"

    },
    "QQmlWebSocketServer\0clientConnected\0"
    "\0QQmlWebSocket*\0webSocket\0errorStringChanged\0"
    "errorString\0urlChanged\0url\0portChanged\0"
    "port\0nameChanged\0name\0hostChanged\0"
    "host\0listenChanged\0listen\0acceptChanged\0"
    "accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlWebSocketServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,
      13,    1,   69,    2, 0x06 /* Public */,
      15,    1,   72,    2, 0x06 /* Public */,
      17,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // properties: name, type, flags
       8, QMetaType::QUrl, 0x00495001,
      14, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      12, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495001,
      16, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       5,
       3,
       4,
       1,
       6,
       7,

       0        // eod
};

void QQmlWebSocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlWebSocketServer *_t = static_cast<QQmlWebSocketServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientConnected((*reinterpret_cast< QQmlWebSocket*(*)>(_a[1]))); break;
        case 1: _t->errorStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->hostChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->listenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->acceptChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlWebSocketServer::*_t)(QQmlWebSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::clientConnected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::errorStringChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::urlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::portChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::nameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::hostChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::listenChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQmlWebSocketServer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlWebSocketServer::acceptChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlWebSocketServer *_t = static_cast<QQmlWebSocketServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->port(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->listen(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->accept(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlWebSocketServer *_t = static_cast<QQmlWebSocketServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setListen(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setAccept(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlWebSocketServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlWebSocketServer.data,
      qt_meta_data_QQmlWebSocketServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlWebSocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlWebSocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlWebSocketServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlWebSocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlWebSocketServer::clientConnected(QQmlWebSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlWebSocketServer::errorStringChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlWebSocketServer::urlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlWebSocketServer::portChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQmlWebSocketServer::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQmlWebSocketServer::hostChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQmlWebSocketServer::listenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQmlWebSocketServer::acceptChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
