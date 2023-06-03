/****************************************************************************
** Meta object code from reading C++ file 'qabstractoauth2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractoauth2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractoauth2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractOAuth2_t {
    QByteArrayData data[27];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractOAuth2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractOAuth2_t qt_meta_stringdata_QAbstractOAuth2 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QAbstractOAuth2"
QT_MOC_LITERAL(1, 16, 12), // "scopeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "scope"
QT_MOC_LITERAL(4, 36, 16), // "userAgentChanged"
QT_MOC_LITERAL(5, 53, 9), // "userAgent"
QT_MOC_LITERAL(6, 63, 23), // "clientIdentifierChanged"
QT_MOC_LITERAL(7, 87, 16), // "clientIdentifier"
QT_MOC_LITERAL(8, 104, 32), // "clientIdentifierSharedKeyChanged"
QT_MOC_LITERAL(9, 137, 25), // "clientIdentifierSharedKey"
QT_MOC_LITERAL(10, 163, 12), // "stateChanged"
QT_MOC_LITERAL(11, 176, 5), // "state"
QT_MOC_LITERAL(12, 182, 19), // "expirationAtChanged"
QT_MOC_LITERAL(13, 202, 10), // "expiration"
QT_MOC_LITERAL(14, 213, 5), // "error"
QT_MOC_LITERAL(15, 219, 16), // "errorDescription"
QT_MOC_LITERAL(16, 236, 3), // "uri"
QT_MOC_LITERAL(17, 240, 29), // "authorizationCallbackReceived"
QT_MOC_LITERAL(18, 270, 4), // "data"
QT_MOC_LITERAL(19, 275, 22), // "createAuthenticatedUrl"
QT_MOC_LITERAL(20, 298, 3), // "url"
QT_MOC_LITERAL(21, 302, 10), // "parameters"
QT_MOC_LITERAL(22, 313, 4), // "head"
QT_MOC_LITERAL(23, 318, 14), // "QNetworkReply*"
QT_MOC_LITERAL(24, 333, 3), // "get"
QT_MOC_LITERAL(25, 337, 4), // "post"
QT_MOC_LITERAL(26, 342, 14) // "deleteResource"

    },
    "QAbstractOAuth2\0scopeChanged\0\0scope\0"
    "userAgentChanged\0userAgent\0"
    "clientIdentifierChanged\0clientIdentifier\0"
    "clientIdentifierSharedKeyChanged\0"
    "clientIdentifierSharedKey\0stateChanged\0"
    "state\0expirationAtChanged\0expiration\0"
    "error\0errorDescription\0uri\0"
    "authorizationCallbackReceived\0data\0"
    "createAuthenticatedUrl\0url\0parameters\0"
    "head\0QNetworkReply*\0get\0post\0"
    "deleteResource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractOAuth2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       6,  172, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       6,    1,  110,    2, 0x06 /* Public */,
       8,    1,  113,    2, 0x06 /* Public */,
      10,    1,  116,    2, 0x06 /* Public */,
      12,    1,  119,    2, 0x06 /* Public */,
      14,    3,  122,    2, 0x06 /* Public */,
      17,    1,  129,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    2,  132,    2, 0x02 /* Public */,
      19,    1,  137,    2, 0x22 /* Public | MethodCloned */,
      22,    2,  140,    2, 0x02 /* Public */,
      22,    1,  145,    2, 0x22 /* Public | MethodCloned */,
      24,    2,  148,    2, 0x02 /* Public */,
      24,    1,  153,    2, 0x22 /* Public | MethodCloned */,
      25,    2,  156,    2, 0x02 /* Public */,
      25,    1,  161,    2, 0x22 /* Public | MethodCloned */,
      26,    2,  164,    2, 0x02 /* Public */,
      26,    1,  169,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QDateTime,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,   14,   15,   16,
    QMetaType::Void, QMetaType::QVariantMap,   18,

 // methods: parameters
    QMetaType::QUrl, QMetaType::QUrl, QMetaType::QVariantMap,   20,   21,
    QMetaType::QUrl, QMetaType::QUrl,   20,
    0x80000000 | 23, QMetaType::QUrl, QMetaType::QVariantMap,   20,   21,
    0x80000000 | 23, QMetaType::QUrl,   20,
    0x80000000 | 23, QMetaType::QUrl, QMetaType::QVariantMap,   20,   21,
    0x80000000 | 23, QMetaType::QUrl,   20,
    0x80000000 | 23, QMetaType::QUrl, QMetaType::QVariantMap,   20,   21,
    0x80000000 | 23, QMetaType::QUrl,   20,
    0x80000000 | 23, QMetaType::QUrl, QMetaType::QVariantMap,   20,   21,
    0x80000000 | 23, QMetaType::QUrl,   20,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      13, QMetaType::QDateTime, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QAbstractOAuth2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractOAuth2 *_t = static_cast<QAbstractOAuth2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scopeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->userAgentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clientIdentifierChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clientIdentifierSharedKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->expirationAtChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 7: _t->authorizationCallbackReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 8: { QUrl _r = _t->createAuthenticatedUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 9: { QUrl _r = _t->createAuthenticatedUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 10: { QNetworkReply* _r = _t->head((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 11: { QNetworkReply* _r = _t->head((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 12: { QNetworkReply* _r = _t->get((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 13: { QNetworkReply* _r = _t->get((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 14: { QNetworkReply* _r = _t->post((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 15: { QNetworkReply* _r = _t->post((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 16: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 17: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::scopeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::userAgentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::clientIdentifierChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::clientIdentifierSharedKeyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::stateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::expirationAtChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QString & , const QString & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::error)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth2::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth2::authorizationCallbackReceived)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractOAuth2 *_t = static_cast<QAbstractOAuth2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->scope(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userAgent(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->clientIdentifier(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->clientIdentifierSharedKey(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->state(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = _t->expirationAt(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractOAuth2 *_t = static_cast<QAbstractOAuth2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScope(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserAgent(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setClientIdentifier(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setClientIdentifierSharedKey(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setState(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractOAuth2::staticMetaObject = {
    { &QAbstractOAuth::staticMetaObject, qt_meta_stringdata_QAbstractOAuth2.data,
      qt_meta_data_QAbstractOAuth2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractOAuth2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractOAuth2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractOAuth2.stringdata0))
        return static_cast<void*>(this);
    return QAbstractOAuth::qt_metacast(_clname);
}

int QAbstractOAuth2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractOAuth::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractOAuth2::scopeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractOAuth2::userAgentChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractOAuth2::clientIdentifierChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractOAuth2::clientIdentifierSharedKeyChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractOAuth2::stateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractOAuth2::expirationAtChanged(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAbstractOAuth2::error(const QString & _t1, const QString & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QAbstractOAuth2::authorizationCallbackReceived(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
