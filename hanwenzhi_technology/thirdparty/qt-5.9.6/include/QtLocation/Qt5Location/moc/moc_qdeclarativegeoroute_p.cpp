/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeoroute_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeoroute_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeoroute_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoRoute_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoRoute_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoRoute_t qt_meta_stringdata_QDeclarativeGeoRoute = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QDeclarativeGeoRoute"
QT_MOC_LITERAL(1, 21, 11), // "pathChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "bounds"
QT_MOC_LITERAL(4, 41, 13), // "QGeoRectangle"
QT_MOC_LITERAL(5, 55, 10), // "travelTime"
QT_MOC_LITERAL(6, 66, 8), // "distance"
QT_MOC_LITERAL(7, 75, 4), // "path"
QT_MOC_LITERAL(8, 80, 8), // "QJSValue"
QT_MOC_LITERAL(9, 89, 8), // "segments"
QT_MOC_LITERAL(10, 98, 45) // "QQmlListProperty<QDeclarative..."

    },
    "QDeclarativeGeoRoute\0pathChanged\0\0"
    "bounds\0QGeoRectangle\0travelTime\0"
    "distance\0path\0QJSValue\0segments\0"
    "QQmlListProperty<QDeclarativeGeoRouteSegment>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoRoute[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::QReal, 0x00095401,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QDeclarativeGeoRoute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoRoute *_t = static_cast<QDeclarativeGeoRoute *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoRoute::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoRoute::pathChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoRectangle >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoRoute *_t = static_cast<QDeclarativeGeoRoute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoRectangle*>(_v) = _t->bounds(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->travelTime(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->distance(); break;
        case 3: *reinterpret_cast< QJSValue*>(_v) = _t->path(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QDeclarativeGeoRouteSegment>*>(_v) = _t->segments(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoRoute *_t = static_cast<QDeclarativeGeoRoute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setPath(*reinterpret_cast< QJSValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoRoute::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoRoute.data,
      qt_meta_data_QDeclarativeGeoRoute,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoRoute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoRoute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoRoute.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoRoute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QDeclarativeGeoRoute::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
