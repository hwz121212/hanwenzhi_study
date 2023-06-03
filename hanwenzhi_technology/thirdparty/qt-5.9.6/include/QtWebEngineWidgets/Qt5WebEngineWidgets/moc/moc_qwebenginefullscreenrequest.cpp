/****************************************************************************
** Meta object code from reading C++ file 'qwebenginefullscreenrequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebenginefullscreenrequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebenginefullscreenrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineFullScreenRequest_t {
    QByteArrayData data[6];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineFullScreenRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineFullScreenRequest_t qt_meta_stringdata_QWebEngineFullScreenRequest = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QWebEngineFullScreenRequest"
QT_MOC_LITERAL(1, 28, 6), // "reject"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "accept"
QT_MOC_LITERAL(4, 43, 8), // "toggleOn"
QT_MOC_LITERAL(5, 52, 6) // "origin"

    },
    "QWebEngineFullScreenRequest\0reject\0\0"
    "accept\0toggleOn\0origin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineFullScreenRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::QUrl, 0x00095401,

       0        // eod
};

void QWebEngineFullScreenRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebEngineFullScreenRequest *_t = reinterpret_cast<QWebEngineFullScreenRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->accept(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWebEngineFullScreenRequest *_t = reinterpret_cast<QWebEngineFullScreenRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->toggleOn(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->origin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QWebEngineFullScreenRequest::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QWebEngineFullScreenRequest.data,
      qt_meta_data_QWebEngineFullScreenRequest,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
