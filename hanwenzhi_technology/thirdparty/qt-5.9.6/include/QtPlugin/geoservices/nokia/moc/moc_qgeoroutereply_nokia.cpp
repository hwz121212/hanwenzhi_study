/****************************************************************************
** Meta object code from reading C++ file 'qgeoroutereply_nokia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeoroutereply_nokia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoroutereply_nokia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoRouteReplyNokia_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoRouteReplyNokia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoRouteReplyNokia_t qt_meta_stringdata_QGeoRouteReplyNokia = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGeoRouteReplyNokia"
QT_MOC_LITERAL(1, 20, 15), // "networkFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "networkError"
QT_MOC_LITERAL(4, 50, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 78, 5), // "error"
QT_MOC_LITERAL(6, 84, 13), // "appendResults"
QT_MOC_LITERAL(7, 98, 16), // "QList<QGeoRoute>"
QT_MOC_LITERAL(8, 115, 6), // "routes"
QT_MOC_LITERAL(9, 122, 11), // "parserError"
QT_MOC_LITERAL(10, 134, 11) // "errorString"

    },
    "QGeoRouteReplyNokia\0networkFinished\0"
    "\0networkError\0QNetworkReply::NetworkError\0"
    "error\0appendResults\0QList<QGeoRoute>\0"
    "routes\0parserError\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoRouteReplyNokia[] = {

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
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void QGeoRouteReplyNokia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoRouteReplyNokia *_t = static_cast<QGeoRouteReplyNokia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkFinished(); break;
        case 1: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->appendResults((*reinterpret_cast< const QList<QGeoRoute>(*)>(_a[1]))); break;
        case 3: _t->parserError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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

const QMetaObject QGeoRouteReplyNokia::staticMetaObject = {
    { &QGeoRouteReply::staticMetaObject, qt_meta_stringdata_QGeoRouteReplyNokia.data,
      qt_meta_data_QGeoRouteReplyNokia,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoRouteReplyNokia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoRouteReplyNokia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoRouteReplyNokia.stringdata0))
        return static_cast<void*>(this);
    return QGeoRouteReply::qt_metacast(_clname);
}

int QGeoRouteReplyNokia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoRouteReply::qt_metacall(_c, _id, _a);
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
