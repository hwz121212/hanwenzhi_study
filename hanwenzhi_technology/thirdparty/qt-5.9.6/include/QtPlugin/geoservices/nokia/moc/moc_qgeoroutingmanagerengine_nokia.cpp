/****************************************************************************
** Meta object code from reading C++ file 'qgeoroutingmanagerengine_nokia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeoroutingmanagerengine_nokia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoroutingmanagerengine_nokia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoRoutingManagerEngineNokia_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoRoutingManagerEngineNokia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoRoutingManagerEngineNokia_t qt_meta_stringdata_QGeoRoutingManagerEngineNokia = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QGeoRoutingManagerEngineNokia"
QT_MOC_LITERAL(1, 30, 13), // "routeFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "routeError"
QT_MOC_LITERAL(4, 56, 21), // "QGeoRouteReply::Error"
QT_MOC_LITERAL(5, 78, 5), // "error"
QT_MOC_LITERAL(6, 84, 11) // "errorString"

    },
    "QGeoRoutingManagerEngineNokia\0"
    "routeFinished\0\0routeError\0"
    "QGeoRouteReply::Error\0error\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoRoutingManagerEngineNokia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,

       0        // eod
};

void QGeoRoutingManagerEngineNokia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoRoutingManagerEngineNokia *_t = static_cast<QGeoRoutingManagerEngineNokia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->routeFinished(); break;
        case 1: _t->routeError((*reinterpret_cast< QGeoRouteReply::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QGeoRoutingManagerEngineNokia::staticMetaObject = {
    { &QGeoRoutingManagerEngine::staticMetaObject, qt_meta_stringdata_QGeoRoutingManagerEngineNokia.data,
      qt_meta_data_QGeoRoutingManagerEngineNokia,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoRoutingManagerEngineNokia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoRoutingManagerEngineNokia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoRoutingManagerEngineNokia.stringdata0))
        return static_cast<void*>(this);
    return QGeoRoutingManagerEngine::qt_metacast(_clname);
}

int QGeoRoutingManagerEngineNokia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoRoutingManagerEngine::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
