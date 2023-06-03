/****************************************************************************
** Meta object code from reading C++ file 'qplacesearchreplyhere.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../placesv2/qplacesearchreplyhere.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplacesearchreplyhere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPlaceSearchReplyHere_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlaceSearchReplyHere_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlaceSearchReplyHere_t qt_meta_stringdata_QPlaceSearchReplyHere = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QPlaceSearchReplyHere"
QT_MOC_LITERAL(1, 22, 8), // "setError"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "QPlaceReply::Error"
QT_MOC_LITERAL(4, 51, 6), // "error_"
QT_MOC_LITERAL(5, 58, 11), // "errorString"
QT_MOC_LITERAL(6, 70, 13), // "replyFinished"
QT_MOC_LITERAL(7, 84, 10), // "replyError"
QT_MOC_LITERAL(8, 95, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 123, 5) // "error"

    },
    "QPlaceSearchReplyHere\0setError\0\0"
    "QPlaceReply::Error\0error_\0errorString\0"
    "replyFinished\0replyError\0"
    "QNetworkReply::NetworkError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlaceSearchReplyHere[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QPlaceSearchReplyHere::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlaceSearchReplyHere *_t = static_cast<QPlaceSearchReplyHere *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setError((*reinterpret_cast< QPlaceReply::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->replyFinished(); break;
        case 2: _t->replyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply::Error >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject QPlaceSearchReplyHere::staticMetaObject = {
    { &QPlaceSearchReply::staticMetaObject, qt_meta_stringdata_QPlaceSearchReplyHere.data,
      qt_meta_data_QPlaceSearchReplyHere,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QPlaceSearchReplyHere::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlaceSearchReplyHere::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaceSearchReplyHere.stringdata0))
        return static_cast<void*>(this);
    return QPlaceSearchReply::qt_metacast(_clname);
}

int QPlaceSearchReplyHere::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlaceSearchReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
