/****************************************************************************
** Meta object code from reading C++ file 'qhttp2protocolhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtNetwork/private/qhttp2protocolhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttp2protocolhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHttp2ProtocolHandler_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttp2ProtocolHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttp2ProtocolHandler_t qt_meta_stringdata_QHttp2ProtocolHandler = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QHttp2ProtocolHandler"
QT_MOC_LITERAL(1, 22, 22), // "_q_uploadDataReadyRead"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17), // "_q_replyDestroyed"
QT_MOC_LITERAL(4, 64, 5), // "reply"
QT_MOC_LITERAL(5, 70, 11), // "sendRequest"
QT_MOC_LITERAL(6, 82, 17), // "sendWINDOW_UPDATE"
QT_MOC_LITERAL(7, 100, 8), // "streamID"
QT_MOC_LITERAL(8, 109, 5), // "delta"
QT_MOC_LITERAL(9, 115, 22) // "resumeSuspendedStreams"

    },
    "QHttp2ProtocolHandler\0_q_uploadDataReadyRead\0"
    "\0_q_replyDestroyed\0reply\0sendRequest\0"
    "sendWINDOW_UPDATE\0streamID\0delta\0"
    "resumeSuspendedStreams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttp2ProtocolHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x00 /* Private */,
       6,    2,   44,    2, 0x00 /* Private */,
       9,    0,   49,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::UInt, QMetaType::UInt,    7,    8,
    QMetaType::Void,

       0        // eod
};

void QHttp2ProtocolHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttp2ProtocolHandler *_t = static_cast<QHttp2ProtocolHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_q_uploadDataReadyRead(); break;
        case 1: _t->_q_replyDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->sendRequest();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->sendWINDOW_UPDATE((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->resumeSuspendedStreams(); break;
        default: ;
        }
    }
}

const QMetaObject QHttp2ProtocolHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttp2ProtocolHandler.data,
      qt_meta_data_QHttp2ProtocolHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHttp2ProtocolHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttp2ProtocolHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHttp2ProtocolHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractProtocolHandler"))
        return static_cast< QAbstractProtocolHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttp2ProtocolHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
