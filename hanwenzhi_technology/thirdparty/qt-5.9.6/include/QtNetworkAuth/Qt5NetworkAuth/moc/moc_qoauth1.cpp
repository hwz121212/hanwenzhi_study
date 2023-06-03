/****************************************************************************
** Meta object code from reading C++ file 'qoauth1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qoauth1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qoauth1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QOAuth1_t {
    QByteArrayData data[19];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOAuth1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOAuth1_t qt_meta_stringdata_QOAuth1 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QOAuth1"
QT_MOC_LITERAL(1, 8, 22), // "signatureMethodChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "QOAuth1::SignatureMethod"
QT_MOC_LITERAL(4, 57, 6), // "method"
QT_MOC_LITERAL(5, 64, 25), // "clientSharedSecretChanged"
QT_MOC_LITERAL(6, 90, 10), // "credential"
QT_MOC_LITERAL(7, 101, 18), // "tokenSecretChanged"
QT_MOC_LITERAL(8, 120, 5), // "token"
QT_MOC_LITERAL(9, 126, 30), // "temporaryCredentialsUrlChanged"
QT_MOC_LITERAL(10, 157, 3), // "url"
QT_MOC_LITERAL(11, 161, 26), // "tokenCredentialsUrlChanged"
QT_MOC_LITERAL(12, 188, 5), // "grant"
QT_MOC_LITERAL(13, 194, 25), // "continueGrantWithVerifier"
QT_MOC_LITERAL(14, 220, 8), // "verifier"
QT_MOC_LITERAL(15, 229, 15), // "SignatureMethod"
QT_MOC_LITERAL(16, 245, 9), // "Hmac_Sha1"
QT_MOC_LITERAL(17, 255, 8), // "Rsa_Sha1"
QT_MOC_LITERAL(18, 264, 9) // "PlainText"

    },
    "QOAuth1\0signatureMethodChanged\0\0"
    "QOAuth1::SignatureMethod\0method\0"
    "clientSharedSecretChanged\0credential\0"
    "tokenSecretChanged\0token\0"
    "temporaryCredentialsUrlChanged\0url\0"
    "tokenCredentialsUrlChanged\0grant\0"
    "continueGrantWithVerifier\0verifier\0"
    "SignatureMethod\0Hmac_Sha1\0Rsa_Sha1\0"
    "PlainText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOAuth1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,
      11,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   64,    2, 0x0a /* Public */,
      13,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QUrl,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

 // enums: name, flags, count, data
      15, 0x2,    3,   72,

 // enum data: key, value
      16, uint(QOAuth1::SignatureMethod::Hmac_Sha1),
      17, uint(QOAuth1::SignatureMethod::Rsa_Sha1),
      18, uint(QOAuth1::SignatureMethod::PlainText),

       0        // eod
};

void QOAuth1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOAuth1 *_t = static_cast<QOAuth1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signatureMethodChanged((*reinterpret_cast< QOAuth1::SignatureMethod(*)>(_a[1]))); break;
        case 1: _t->clientSharedSecretChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->tokenSecretChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->temporaryCredentialsUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->tokenCredentialsUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->grant(); break;
        case 6: _t->continueGrantWithVerifier((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QOAuth1::*_t)(QOAuth1::SignatureMethod );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth1::signatureMethodChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QOAuth1::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth1::clientSharedSecretChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QOAuth1::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth1::tokenSecretChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QOAuth1::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth1::temporaryCredentialsUrlChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QOAuth1::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth1::tokenCredentialsUrlChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QOAuth1::staticMetaObject = {
    { &QAbstractOAuth::staticMetaObject, qt_meta_stringdata_QOAuth1.data,
      qt_meta_data_QOAuth1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QOAuth1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOAuth1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QOAuth1.stringdata0))
        return static_cast<void*>(this);
    return QAbstractOAuth::qt_metacast(_clname);
}

int QOAuth1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractOAuth::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QOAuth1::signatureMethodChanged(QOAuth1::SignatureMethod _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QOAuth1::clientSharedSecretChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QOAuth1::tokenSecretChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QOAuth1::temporaryCredentialsUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QOAuth1::tokenCredentialsUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
