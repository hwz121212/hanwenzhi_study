/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessfilebackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtNetwork/private/qnetworkaccessfilebackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessfilebackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkAccessFileBackend_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkAccessFileBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkAccessFileBackend_t qt_meta_stringdata_QNetworkAccessFileBackend = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QNetworkAccessFileBackend"
QT_MOC_LITERAL(1, 26, 19), // "uploadReadyReadSlot"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "QNetworkAccessFileBackend\0uploadReadyReadSlot\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkAccessFileBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QNetworkAccessFileBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkAccessFileBackend *_t = static_cast<QNetworkAccessFileBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uploadReadyReadSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QNetworkAccessFileBackend::staticMetaObject = {
    { &QNetworkAccessBackend::staticMetaObject, qt_meta_stringdata_QNetworkAccessFileBackend.data,
      qt_meta_data_QNetworkAccessFileBackend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNetworkAccessFileBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessFileBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessFileBackend.stringdata0))
        return static_cast<void*>(this);
    return QNetworkAccessBackend::qt_metacast(_clname);
}

int QNetworkAccessFileBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
