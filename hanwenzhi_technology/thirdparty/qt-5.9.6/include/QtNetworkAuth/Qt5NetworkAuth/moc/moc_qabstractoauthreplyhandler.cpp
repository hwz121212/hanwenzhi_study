/****************************************************************************
** Meta object code from reading C++ file 'qabstractoauthreplyhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractoauthreplyhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractoauthreplyhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractOAuthReplyHandler_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractOAuthReplyHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractOAuthReplyHandler_t qt_meta_stringdata_QAbstractOAuthReplyHandler = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QAbstractOAuthReplyHandler"
QT_MOC_LITERAL(1, 27, 16), // "callbackReceived"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "values"
QT_MOC_LITERAL(4, 52, 14), // "tokensReceived"
QT_MOC_LITERAL(5, 67, 6), // "tokens"
QT_MOC_LITERAL(6, 74, 17), // "replyDataReceived"
QT_MOC_LITERAL(7, 92, 4), // "data"
QT_MOC_LITERAL(8, 97, 20), // "callbackDataReceived"
QT_MOC_LITERAL(9, 118, 20), // "networkReplyFinished"
QT_MOC_LITERAL(10, 139, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 154, 5) // "reply"

    },
    "QAbstractOAuthReplyHandler\0callbackReceived\0"
    "\0values\0tokensReceived\0tokens\0"
    "replyDataReceived\0data\0callbackDataReceived\0"
    "networkReplyFinished\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractOAuthReplyHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QByteArray,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void QAbstractOAuthReplyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractOAuthReplyHandler *_t = static_cast<QAbstractOAuthReplyHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callbackReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->tokensReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->replyDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->callbackDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->networkReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractOAuthReplyHandler::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuthReplyHandler::callbackReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractOAuthReplyHandler::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuthReplyHandler::tokensReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractOAuthReplyHandler::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuthReplyHandler::replyDataReceived)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractOAuthReplyHandler::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuthReplyHandler::callbackDataReceived)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QAbstractOAuthReplyHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractOAuthReplyHandler.data,
      qt_meta_data_QAbstractOAuthReplyHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractOAuthReplyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractOAuthReplyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractOAuthReplyHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractOAuthReplyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QAbstractOAuthReplyHandler::callbackReceived(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractOAuthReplyHandler::tokensReceived(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractOAuthReplyHandler::replyDataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractOAuthReplyHandler::callbackDataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
