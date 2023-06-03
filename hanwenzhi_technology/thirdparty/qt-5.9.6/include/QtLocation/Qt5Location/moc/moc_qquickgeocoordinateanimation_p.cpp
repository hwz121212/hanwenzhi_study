/****************************************************************************
** Meta object code from reading C++ file 'qquickgeocoordinateanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qquickgeocoordinateanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickgeocoordinateanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickGeoCoordinateAnimation_t {
    QByteArrayData data[11];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGeoCoordinateAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGeoCoordinateAnimation_t qt_meta_stringdata_QQuickGeoCoordinateAnimation = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QQuickGeoCoordinateAnimation"
QT_MOC_LITERAL(1, 29, 16), // "directionChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "from"
QT_MOC_LITERAL(4, 52, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(5, 67, 2), // "to"
QT_MOC_LITERAL(6, 70, 9), // "direction"
QT_MOC_LITERAL(7, 80, 9), // "Direction"
QT_MOC_LITERAL(8, 90, 8), // "Shortest"
QT_MOC_LITERAL(9, 99, 4), // "West"
QT_MOC_LITERAL(10, 104, 4) // "East"

    },
    "QQuickGeoCoordinateAnimation\0"
    "directionChanged\0\0from\0QGeoCoordinate\0"
    "to\0direction\0Direction\0Shortest\0West\0"
    "East"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGeoCoordinateAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 4, 0x0009510b,
       6, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
       7, 0x0,    3,   36,

 // enum data: key, value
       8, uint(QQuickGeoCoordinateAnimation::Shortest),
       9, uint(QQuickGeoCoordinateAnimation::West),
      10, uint(QQuickGeoCoordinateAnimation::East),

       0        // eod
};

void QQuickGeoCoordinateAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGeoCoordinateAnimation *_t = static_cast<QQuickGeoCoordinateAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGeoCoordinateAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoCoordinateAnimation::directionChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGeoCoordinateAnimation *_t = static_cast<QQuickGeoCoordinateAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->to(); break;
        case 2: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGeoCoordinateAnimation *_t = static_cast<QQuickGeoCoordinateAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 2: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickGeoCoordinateAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_QQuickGeoCoordinateAnimation.data,
      qt_meta_data_QQuickGeoCoordinateAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGeoCoordinateAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGeoCoordinateAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGeoCoordinateAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int QQuickGeoCoordinateAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickGeoCoordinateAnimation::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
