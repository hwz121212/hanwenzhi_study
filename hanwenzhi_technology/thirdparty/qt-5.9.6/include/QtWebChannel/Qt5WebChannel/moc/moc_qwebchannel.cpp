/****************************************************************************
** Meta object code from reading C++ file 'qwebchannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebchannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebChannel_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebChannel_t qt_meta_stringdata_QWebChannel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QWebChannel"
QT_MOC_LITERAL(1, 12, 19), // "blockUpdatesChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "block"
QT_MOC_LITERAL(4, 39, 9), // "connectTo"
QT_MOC_LITERAL(5, 49, 29), // "QWebChannelAbstractTransport*"
QT_MOC_LITERAL(6, 79, 9), // "transport"
QT_MOC_LITERAL(7, 89, 14), // "disconnectFrom"
QT_MOC_LITERAL(8, 104, 21), // "_q_transportDestroyed"
QT_MOC_LITERAL(9, 126, 14), // "registerObject"
QT_MOC_LITERAL(10, 141, 2), // "id"
QT_MOC_LITERAL(11, 144, 6), // "object"
QT_MOC_LITERAL(12, 151, 16), // "deregisterObject"
QT_MOC_LITERAL(13, 168, 12) // "blockUpdates"

    },
    "QWebChannel\0blockUpdatesChanged\0\0block\0"
    "connectTo\0QWebChannelAbstractTransport*\0"
    "transport\0disconnectFrom\0_q_transportDestroyed\0"
    "registerObject\0id\0object\0deregisterObject\0"
    "blockUpdates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    2,   56,    2, 0x02 /* Public */,
      12,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,   10,   11,
    QMetaType::Void, QMetaType::QObjectStar,   11,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QWebChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebChannel *_t = static_cast<QWebChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockUpdatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->connectTo((*reinterpret_cast< QWebChannelAbstractTransport*(*)>(_a[1]))); break;
        case 2: _t->disconnectFrom((*reinterpret_cast< QWebChannelAbstractTransport*(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_transportDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->registerObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: _t->deregisterObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebChannel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebChannel::blockUpdatesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWebChannel *_t = static_cast<QWebChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->blockUpdates(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWebChannel *_t = static_cast<QWebChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBlockUpdates(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWebChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebChannel.data,
      qt_meta_data_QWebChannel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QWebChannel::blockUpdatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
