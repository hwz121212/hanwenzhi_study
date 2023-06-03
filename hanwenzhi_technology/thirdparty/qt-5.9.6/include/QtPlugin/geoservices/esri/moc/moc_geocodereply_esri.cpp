/****************************************************************************
** Meta object code from reading C++ file 'geocodereply_esri.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../geocodereply_esri.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geocodereply_esri.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoCodeReplyEsri_t {
    QByteArrayData data[11];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoCodeReplyEsri_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoCodeReplyEsri_t qt_meta_stringdata_GeoCodeReplyEsri = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GeoCodeReplyEsri"
QT_MOC_LITERAL(1, 17, 20), // "networkReplyFinished"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "networkReplyError"
QT_MOC_LITERAL(4, 57, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 85, 5), // "error"
QT_MOC_LITERAL(6, 91, 12), // "parseAddress"
QT_MOC_LITERAL(7, 104, 12), // "QGeoLocation"
QT_MOC_LITERAL(8, 117, 6), // "object"
QT_MOC_LITERAL(9, 124, 14), // "parseCandidate"
QT_MOC_LITERAL(10, 139, 9) // "candidate"

    },
    "GeoCodeReplyEsri\0networkReplyFinished\0"
    "\0networkReplyError\0QNetworkReply::NetworkError\0"
    "error\0parseAddress\0QGeoLocation\0object\0"
    "parseCandidate\0candidate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoCodeReplyEsri[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       9,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 7, QMetaType::QJsonObject,    8,
    0x80000000 | 7, QMetaType::QJsonObject,   10,

       0        // eod
};

void GeoCodeReplyEsri::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeoCodeReplyEsri *_t = static_cast<GeoCodeReplyEsri *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkReplyFinished(); break;
        case 1: _t->networkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: { QGeoLocation _r = _t->parseAddress((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoLocation*>(_a[0]) = std::move(_r); }  break;
        case 3: { QGeoLocation _r = _t->parseCandidate((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoLocation*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject GeoCodeReplyEsri::staticMetaObject = {
    { &QGeoCodeReply::staticMetaObject, qt_meta_stringdata_GeoCodeReplyEsri.data,
      qt_meta_data_GeoCodeReplyEsri,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeoCodeReplyEsri::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoCodeReplyEsri::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoCodeReplyEsri.stringdata0))
        return static_cast<void*>(this);
    return QGeoCodeReply::qt_metacast(_clname);
}

int GeoCodeReplyEsri::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoCodeReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
