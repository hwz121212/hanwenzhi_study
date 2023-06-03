/****************************************************************************
** Meta object code from reading C++ file 'qoauth2authorizationcodeflow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qoauth2authorizationcodeflow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qoauth2authorizationcodeflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QOAuth2AuthorizationCodeFlow_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOAuth2AuthorizationCodeFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOAuth2AuthorizationCodeFlow_t qt_meta_stringdata_QOAuth2AuthorizationCodeFlow = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QOAuth2AuthorizationCodeFlow"
QT_MOC_LITERAL(1, 29, 21), // "accessTokenUrlChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 14), // "accessTokenUrl"
QT_MOC_LITERAL(4, 67, 5), // "grant"
QT_MOC_LITERAL(5, 73, 18) // "refreshAccessToken"

    },
    "QOAuth2AuthorizationCodeFlow\0"
    "accessTokenUrlChanged\0\0accessTokenUrl\0"
    "grant\0refreshAccessToken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOAuth2AuthorizationCodeFlow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QUrl, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QOAuth2AuthorizationCodeFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOAuth2AuthorizationCodeFlow *_t = static_cast<QOAuth2AuthorizationCodeFlow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accessTokenUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->grant(); break;
        case 2: _t->refreshAccessToken(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QOAuth2AuthorizationCodeFlow::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOAuth2AuthorizationCodeFlow::accessTokenUrlChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QOAuth2AuthorizationCodeFlow *_t = static_cast<QOAuth2AuthorizationCodeFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->accessTokenUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QOAuth2AuthorizationCodeFlow *_t = static_cast<QOAuth2AuthorizationCodeFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccessTokenUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QOAuth2AuthorizationCodeFlow::staticMetaObject = {
    { &QAbstractOAuth2::staticMetaObject, qt_meta_stringdata_QOAuth2AuthorizationCodeFlow.data,
      qt_meta_data_QOAuth2AuthorizationCodeFlow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QOAuth2AuthorizationCodeFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOAuth2AuthorizationCodeFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QOAuth2AuthorizationCodeFlow.stringdata0))
        return static_cast<void*>(this);
    return QAbstractOAuth2::qt_metacast(_clname);
}

int QOAuth2AuthorizationCodeFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractOAuth2::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QOAuth2AuthorizationCodeFlow::accessTokenUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
