/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginedialogrequests_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginedialogrequests_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginedialogrequests_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest_t qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest = {
    {
QT_MOC_LITERAL(0, 0, 42), // "QQuickWebEngineAuthentication..."
QT_MOC_LITERAL(1, 43, 12), // "dialogAccept"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 4), // "user"
QT_MOC_LITERAL(4, 62, 8), // "password"
QT_MOC_LITERAL(5, 71, 12), // "dialogReject"
QT_MOC_LITERAL(6, 84, 3), // "url"
QT_MOC_LITERAL(7, 88, 5), // "realm"
QT_MOC_LITERAL(8, 94, 9), // "proxyHost"
QT_MOC_LITERAL(9, 104, 4), // "type"
QT_MOC_LITERAL(10, 109, 18), // "AuthenticationType"
QT_MOC_LITERAL(11, 128, 8), // "accepted"
QT_MOC_LITERAL(12, 137, 22), // "AuthenticationTypeHTTP"
QT_MOC_LITERAL(13, 160, 23) // "AuthenticationTypeProxy"

    },
    "QQuickWebEngineAuthenticationDialogRequest\0"
    "dialogAccept\0\0user\0password\0dialogReject\0"
    "url\0realm\0proxyHost\0type\0AuthenticationType\0"
    "accepted\0AuthenticationTypeHTTP\0"
    "AuthenticationTypeProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineAuthenticationDialogRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   30, // properties
       1,   45, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    0,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QUrl, 0x00095c01,
       7, QMetaType::QString, 0x00095c01,
       8, QMetaType::QString, 0x00095c01,
       9, 0x80000000 | 10, 0x00095c09,
      11, QMetaType::Bool, 0x00095903,

 // enums: name, flags, count, data
      10, 0x0,    2,   49,

 // enum data: key, value
      12, uint(QQuickWebEngineAuthenticationDialogRequest::AuthenticationTypeHTTP),
      13, uint(QQuickWebEngineAuthenticationDialogRequest::AuthenticationTypeProxy),

       0        // eod
};

void QQuickWebEngineAuthenticationDialogRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineAuthenticationDialogRequest *_t = static_cast<QQuickWebEngineAuthenticationDialogRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAccept((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->dialogReject(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineAuthenticationDialogRequest *_t = static_cast<QQuickWebEngineAuthenticationDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->realm(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->proxyHost(); break;
        case 3: *reinterpret_cast< AuthenticationType*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineAuthenticationDialogRequest *_t = static_cast<QQuickWebEngineAuthenticationDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWebEngineAuthenticationDialogRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest.data,
      qt_meta_data_QQuickWebEngineAuthenticationDialogRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineAuthenticationDialogRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineAuthenticationDialogRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineAuthenticationDialogRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineAuthenticationDialogRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest_t {
    QByteArrayData data[16];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest_t qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QQuickWebEngineJavaScriptDial..."
QT_MOC_LITERAL(1, 39, 12), // "dialogAccept"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "text"
QT_MOC_LITERAL(4, 58, 12), // "dialogReject"
QT_MOC_LITERAL(5, 71, 7), // "message"
QT_MOC_LITERAL(6, 79, 11), // "defaultText"
QT_MOC_LITERAL(7, 91, 5), // "title"
QT_MOC_LITERAL(8, 97, 4), // "type"
QT_MOC_LITERAL(9, 102, 10), // "DialogType"
QT_MOC_LITERAL(10, 113, 14), // "securityOrigin"
QT_MOC_LITERAL(11, 128, 8), // "accepted"
QT_MOC_LITERAL(12, 137, 15), // "DialogTypeAlert"
QT_MOC_LITERAL(13, 153, 17), // "DialogTypeConfirm"
QT_MOC_LITERAL(14, 171, 16), // "DialogTypePrompt"
QT_MOC_LITERAL(15, 188, 22) // "DialogTypeBeforeUnload"

    },
    "QQuickWebEngineJavaScriptDialogRequest\0"
    "dialogAccept\0\0text\0dialogReject\0message\0"
    "defaultText\0title\0type\0DialogType\0"
    "securityOrigin\0accepted\0DialogTypeAlert\0"
    "DialogTypeConfirm\0DialogTypePrompt\0"
    "DialogTypeBeforeUnload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineJavaScriptDialogRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   34, // properties
       1,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       1,    0,   32,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095c01,
       6, QMetaType::QString, 0x00095c01,
       7, QMetaType::QString, 0x00095c01,
       8, 0x80000000 | 9, 0x00095c09,
      10, QMetaType::QUrl, 0x00095c01,
      11, QMetaType::Bool, 0x00095903,

 // enums: name, flags, count, data
       9, 0x0,    4,   56,

 // enum data: key, value
      12, uint(QQuickWebEngineJavaScriptDialogRequest::DialogTypeAlert),
      13, uint(QQuickWebEngineJavaScriptDialogRequest::DialogTypeConfirm),
      14, uint(QQuickWebEngineJavaScriptDialogRequest::DialogTypePrompt),
      15, uint(QQuickWebEngineJavaScriptDialogRequest::DialogTypeBeforeUnload),

       0        // eod
};

void QQuickWebEngineJavaScriptDialogRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineJavaScriptDialogRequest *_t = static_cast<QQuickWebEngineJavaScriptDialogRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAccept((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dialogAccept(); break;
        case 2: _t->dialogReject(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineJavaScriptDialogRequest *_t = static_cast<QQuickWebEngineJavaScriptDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->defaultText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 3: *reinterpret_cast< DialogType*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->securityOrigin(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineJavaScriptDialogRequest *_t = static_cast<QQuickWebEngineJavaScriptDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWebEngineJavaScriptDialogRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest.data,
      qt_meta_data_QQuickWebEngineJavaScriptDialogRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineJavaScriptDialogRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineJavaScriptDialogRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineJavaScriptDialogRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineJavaScriptDialogRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QQuickWebEngineColorDialogRequest_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineColorDialogRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineColorDialogRequest_t qt_meta_stringdata_QQuickWebEngineColorDialogRequest = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QQuickWebEngineColorDialogReq..."
QT_MOC_LITERAL(1, 34, 12), // "dialogAccept"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "color"
QT_MOC_LITERAL(4, 54, 12), // "dialogReject"
QT_MOC_LITERAL(5, 67, 8) // "accepted"

    },
    "QQuickWebEngineColorDialogRequest\0"
    "dialogAccept\0\0color\0dialogReject\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineColorDialogRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00095c01,
       5, QMetaType::Bool, 0x00095903,

       0        // eod
};

void QQuickWebEngineColorDialogRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineColorDialogRequest *_t = static_cast<QQuickWebEngineColorDialogRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAccept((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->dialogReject(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineColorDialogRequest *_t = static_cast<QQuickWebEngineColorDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineColorDialogRequest *_t = static_cast<QQuickWebEngineColorDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWebEngineColorDialogRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineColorDialogRequest.data,
      qt_meta_data_QQuickWebEngineColorDialogRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineColorDialogRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineColorDialogRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineColorDialogRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineColorDialogRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickWebEngineFileDialogRequest_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineFileDialogRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineFileDialogRequest_t qt_meta_stringdata_QQuickWebEngineFileDialogRequest = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QQuickWebEngineFileDialogRequest"
QT_MOC_LITERAL(1, 33, 12), // "dialogAccept"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "files"
QT_MOC_LITERAL(4, 53, 12), // "dialogReject"
QT_MOC_LITERAL(5, 66, 15), // "defaultFileName"
QT_MOC_LITERAL(6, 82, 17), // "acceptedMimeTypes"
QT_MOC_LITERAL(7, 100, 4), // "mode"
QT_MOC_LITERAL(8, 105, 8), // "FileMode"
QT_MOC_LITERAL(9, 114, 8), // "accepted"
QT_MOC_LITERAL(10, 123, 12), // "FileModeOpen"
QT_MOC_LITERAL(11, 136, 20), // "FileModeOpenMultiple"
QT_MOC_LITERAL(12, 157, 20), // "FileModeUploadFolder"
QT_MOC_LITERAL(13, 178, 12) // "FileModeSave"

    },
    "QQuickWebEngineFileDialogRequest\0"
    "dialogAccept\0\0files\0dialogReject\0"
    "defaultFileName\0acceptedMimeTypes\0"
    "mode\0FileMode\0accepted\0FileModeOpen\0"
    "FileModeOpenMultiple\0FileModeUploadFolder\0"
    "FileModeSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineFileDialogRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095c01,
       6, QMetaType::QStringList, 0x00095c01,
       7, 0x80000000 | 8, 0x00095c09,
       9, QMetaType::Bool, 0x00095903,

 // enums: name, flags, count, data
       8, 0x0,    4,   44,

 // enum data: key, value
      10, uint(QQuickWebEngineFileDialogRequest::FileModeOpen),
      11, uint(QQuickWebEngineFileDialogRequest::FileModeOpenMultiple),
      12, uint(QQuickWebEngineFileDialogRequest::FileModeUploadFolder),
      13, uint(QQuickWebEngineFileDialogRequest::FileModeSave),

       0        // eod
};

void QQuickWebEngineFileDialogRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineFileDialogRequest *_t = static_cast<QQuickWebEngineFileDialogRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAccept((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->dialogReject(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineFileDialogRequest *_t = static_cast<QQuickWebEngineFileDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultFileName(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->acceptedMimeTypes(); break;
        case 2: *reinterpret_cast< FileMode*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineFileDialogRequest *_t = static_cast<QQuickWebEngineFileDialogRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWebEngineFileDialogRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineFileDialogRequest.data,
      qt_meta_data_QQuickWebEngineFileDialogRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineFileDialogRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineFileDialogRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineFileDialogRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineFileDialogRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
struct qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest_t qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest = {
    {
QT_MOC_LITERAL(0, 0, 43), // "QQuickWebEngineFormValidation..."
QT_MOC_LITERAL(1, 44, 6), // "anchor"
QT_MOC_LITERAL(2, 51, 4), // "text"
QT_MOC_LITERAL(3, 56, 7), // "subText"
QT_MOC_LITERAL(4, 64, 4), // "type"
QT_MOC_LITERAL(5, 69, 11), // "RequestType"
QT_MOC_LITERAL(6, 81, 8), // "accepted"
QT_MOC_LITERAL(7, 90, 4), // "Show"
QT_MOC_LITERAL(8, 95, 4), // "Hide"
QT_MOC_LITERAL(9, 100, 4) // "Move"

    },
    "QQuickWebEngineFormValidationMessageRequest\0"
    "anchor\0text\0subText\0type\0RequestType\0"
    "accepted\0Show\0Hide\0Move"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineFormValidationMessageRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QRect, 0x00095c01,
       2, QMetaType::QString, 0x00095c01,
       3, QMetaType::QString, 0x00095c01,
       4, 0x80000000 | 5, 0x00095c09,
       6, QMetaType::Bool, 0x00095903,

 // enums: name, flags, count, data
       5, 0x0,    3,   33,

 // enum data: key, value
       7, uint(QQuickWebEngineFormValidationMessageRequest::Show),
       8, uint(QQuickWebEngineFormValidationMessageRequest::Hide),
       9, uint(QQuickWebEngineFormValidationMessageRequest::Move),

       0        // eod
};

void QQuickWebEngineFormValidationMessageRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineFormValidationMessageRequest *_t = static_cast<QQuickWebEngineFormValidationMessageRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->anchor(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->subText(); break;
        case 3: *reinterpret_cast< RequestType*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineFormValidationMessageRequest *_t = static_cast<QQuickWebEngineFormValidationMessageRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickWebEngineFormValidationMessageRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest.data,
      qt_meta_data_QQuickWebEngineFormValidationMessageRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineFormValidationMessageRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineFormValidationMessageRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineFormValidationMessageRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineFormValidationMessageRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
