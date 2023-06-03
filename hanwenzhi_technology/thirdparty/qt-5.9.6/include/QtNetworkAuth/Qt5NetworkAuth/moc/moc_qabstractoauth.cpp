/****************************************************************************
** Meta object code from reading C++ file 'qabstractoauth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractoauth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractoauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractOAuth_t {
    QByteArrayData data[50];
    char stringdata0[699];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractOAuth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractOAuth_t qt_meta_stringdata_QAbstractOAuth = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QAbstractOAuth"
QT_MOC_LITERAL(1, 15, 23), // "clientIdentifierChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "clientIdentifier"
QT_MOC_LITERAL(4, 57, 12), // "tokenChanged"
QT_MOC_LITERAL(5, 70, 5), // "token"
QT_MOC_LITERAL(6, 76, 13), // "statusChanged"
QT_MOC_LITERAL(7, 90, 6), // "Status"
QT_MOC_LITERAL(8, 97, 6), // "status"
QT_MOC_LITERAL(9, 104, 23), // "authorizationUrlChanged"
QT_MOC_LITERAL(10, 128, 3), // "url"
QT_MOC_LITERAL(11, 132, 18), // "extraTokensChanged"
QT_MOC_LITERAL(12, 151, 6), // "tokens"
QT_MOC_LITERAL(13, 158, 18), // "contentTypeChanged"
QT_MOC_LITERAL(14, 177, 11), // "ContentType"
QT_MOC_LITERAL(15, 189, 11), // "contentType"
QT_MOC_LITERAL(16, 201, 13), // "requestFailed"
QT_MOC_LITERAL(17, 215, 5), // "Error"
QT_MOC_LITERAL(18, 221, 5), // "error"
QT_MOC_LITERAL(19, 227, 20), // "authorizeWithBrowser"
QT_MOC_LITERAL(20, 248, 7), // "granted"
QT_MOC_LITERAL(21, 256, 8), // "finished"
QT_MOC_LITERAL(22, 265, 14), // "QNetworkReply*"
QT_MOC_LITERAL(23, 280, 5), // "reply"
QT_MOC_LITERAL(24, 286, 17), // "replyDataReceived"
QT_MOC_LITERAL(25, 304, 4), // "data"
QT_MOC_LITERAL(26, 309, 5), // "grant"
QT_MOC_LITERAL(27, 315, 4), // "head"
QT_MOC_LITERAL(28, 320, 10), // "parameters"
QT_MOC_LITERAL(29, 331, 3), // "get"
QT_MOC_LITERAL(30, 335, 4), // "post"
QT_MOC_LITERAL(31, 340, 14), // "deleteResource"
QT_MOC_LITERAL(32, 355, 11), // "extraTokens"
QT_MOC_LITERAL(33, 367, 16), // "authorizationUrl"
QT_MOC_LITERAL(34, 384, 27), // "QAbstractOAuth::ContentType"
QT_MOC_LITERAL(35, 412, 16), // "NotAuthenticated"
QT_MOC_LITERAL(36, 429, 28), // "TemporaryCredentialsReceived"
QT_MOC_LITERAL(37, 458, 7), // "Granted"
QT_MOC_LITERAL(38, 466, 15), // "RefreshingToken"
QT_MOC_LITERAL(39, 482, 5), // "Stage"
QT_MOC_LITERAL(40, 488, 30), // "RequestingTemporaryCredentials"
QT_MOC_LITERAL(41, 519, 23), // "RequestingAuthorization"
QT_MOC_LITERAL(42, 543, 21), // "RequestingAccessToken"
QT_MOC_LITERAL(43, 565, 21), // "RefreshingAccessToken"
QT_MOC_LITERAL(44, 587, 7), // "NoError"
QT_MOC_LITERAL(45, 595, 12), // "NetworkError"
QT_MOC_LITERAL(46, 608, 11), // "ServerError"
QT_MOC_LITERAL(47, 620, 23), // "OAuthTokenNotFoundError"
QT_MOC_LITERAL(48, 644, 29), // "OAuthTokenSecretNotFoundError"
QT_MOC_LITERAL(49, 674, 24) // "OAuthCallbackNotVerified"

    },
    "QAbstractOAuth\0clientIdentifierChanged\0"
    "\0clientIdentifier\0tokenChanged\0token\0"
    "statusChanged\0Status\0status\0"
    "authorizationUrlChanged\0url\0"
    "extraTokensChanged\0tokens\0contentTypeChanged\0"
    "ContentType\0contentType\0requestFailed\0"
    "Error\0error\0authorizeWithBrowser\0"
    "granted\0finished\0QNetworkReply*\0reply\0"
    "replyDataReceived\0data\0grant\0head\0"
    "parameters\0get\0post\0deleteResource\0"
    "extraTokens\0authorizationUrl\0"
    "QAbstractOAuth::ContentType\0"
    "NotAuthenticated\0TemporaryCredentialsReceived\0"
    "Granted\0RefreshingToken\0Stage\0"
    "RequestingTemporaryCredentials\0"
    "RequestingAuthorization\0RequestingAccessToken\0"
    "RefreshingAccessToken\0NoError\0"
    "NetworkError\0ServerError\0"
    "OAuthTokenNotFoundError\0"
    "OAuthTokenSecretNotFoundError\0"
    "OAuthCallbackNotVerified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractOAuth[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       4,  178, // properties
       3,  194, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    1,  117,    2, 0x06 /* Public */,
       6,    1,  120,    2, 0x06 /* Public */,
       9,    1,  123,    2, 0x06 /* Public */,
      11,    1,  126,    2, 0x06 /* Public */,
      13,    1,  129,    2, 0x06 /* Public */,
      16,    1,  132,    2, 0x06 /* Public */,
      19,    1,  135,    2, 0x06 /* Public */,
      20,    0,  138,    2, 0x06 /* Public */,
      21,    1,  139,    2, 0x06 /* Public */,
      24,    1,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  145,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      27,    2,  146,    2, 0x02 /* Public */,
      27,    1,  151,    2, 0x22 /* Public | MethodCloned */,
      29,    2,  154,    2, 0x02 /* Public */,
      29,    1,  159,    2, 0x22 /* Public | MethodCloned */,
      30,    2,  162,    2, 0x02 /* Public */,
      30,    1,  167,    2, 0x22 /* Public | MethodCloned */,
      31,    2,  170,    2, 0x02 /* Public */,
      31,    1,  175,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QByteArray,   25,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 22, QMetaType::QUrl, QMetaType::QVariantMap,   10,   28,
    0x80000000 | 22, QMetaType::QUrl,   10,
    0x80000000 | 22, QMetaType::QUrl, QMetaType::QVariantMap,   10,   28,
    0x80000000 | 22, QMetaType::QUrl,   10,
    0x80000000 | 22, QMetaType::QUrl, QMetaType::QVariantMap,   10,   28,
    0x80000000 | 22, QMetaType::QUrl,   10,
    0x80000000 | 22, QMetaType::QUrl, QMetaType::QVariantMap,   10,   28,
    0x80000000 | 22, QMetaType::QUrl,   10,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x00495009,
      32, QMetaType::QVariantMap, 0x00495001,
      33, QMetaType::QUrl, 0x00495103,
      15, 0x80000000 | 34, 0x0049510b,

 // properties: notify_signal_id
       2,
       4,
       3,
       5,

 // enums: name, flags, count, data
       7, 0x2,    4,  206,
      39, 0x2,    4,  214,
      17, 0x2,    6,  222,

 // enum data: key, value
      35, uint(QAbstractOAuth::Status::NotAuthenticated),
      36, uint(QAbstractOAuth::Status::TemporaryCredentialsReceived),
      37, uint(QAbstractOAuth::Status::Granted),
      38, uint(QAbstractOAuth::Status::RefreshingToken),
      40, uint(QAbstractOAuth::Stage::RequestingTemporaryCredentials),
      41, uint(QAbstractOAuth::Stage::RequestingAuthorization),
      42, uint(QAbstractOAuth::Stage::RequestingAccessToken),
      43, uint(QAbstractOAuth::Stage::RefreshingAccessToken),
      44, uint(QAbstractOAuth::Error::NoError),
      45, uint(QAbstractOAuth::Error::NetworkError),
      46, uint(QAbstractOAuth::Error::ServerError),
      47, uint(QAbstractOAuth::Error::OAuthTokenNotFoundError),
      48, uint(QAbstractOAuth::Error::OAuthTokenSecretNotFoundError),
      49, uint(QAbstractOAuth::Error::OAuthCallbackNotVerified),

       0        // eod
};

void QAbstractOAuth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractOAuth *_t = static_cast<QAbstractOAuth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientIdentifierChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tokenChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 3: _t->authorizationUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->extraTokensChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 5: _t->contentTypeChanged((*reinterpret_cast< ContentType(*)>(_a[1]))); break;
        case 6: _t->requestFailed((*reinterpret_cast< const Error(*)>(_a[1]))); break;
        case 7: _t->authorizeWithBrowser((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->granted(); break;
        case 9: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->replyDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->grant(); break;
        case 12: { QNetworkReply* _r = _t->head((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 13: { QNetworkReply* _r = _t->head((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 14: { QNetworkReply* _r = _t->get((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 15: { QNetworkReply* _r = _t->get((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 16: { QNetworkReply* _r = _t->post((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 17: { QNetworkReply* _r = _t->post((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 18: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 19: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractOAuth::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::clientIdentifierChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::tokenChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::authorizationUrlChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::extraTokensChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(ContentType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::contentTypeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::requestFailed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::authorizeWithBrowser)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::granted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::finished)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QAbstractOAuth::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractOAuth::replyDataReceived)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractOAuth *_t = static_cast<QAbstractOAuth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->extraTokens(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->authorizationUrl(); break;
        case 3: *reinterpret_cast< QAbstractOAuth::ContentType*>(_v) = _t->contentType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractOAuth *_t = static_cast<QAbstractOAuth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setAuthorizationUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setContentType(*reinterpret_cast< QAbstractOAuth::ContentType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractOAuth::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractOAuth.data,
      qt_meta_data_QAbstractOAuth,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractOAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractOAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractOAuth.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractOAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
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
void QAbstractOAuth::clientIdentifierChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractOAuth::tokenChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractOAuth::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractOAuth::authorizationUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractOAuth::extraTokensChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractOAuth::contentTypeChanged(ContentType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAbstractOAuth::requestFailed(const Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QAbstractOAuth::authorizeWithBrowser(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QAbstractOAuth::granted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QAbstractOAuth::finished(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QAbstractOAuth::replyDataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
