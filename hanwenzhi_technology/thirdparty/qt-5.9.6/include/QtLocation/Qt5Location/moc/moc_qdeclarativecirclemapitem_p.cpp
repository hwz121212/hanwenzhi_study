/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativecirclemapitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativecirclemapitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativecirclemapitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeCircleMapItem_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeCircleMapItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeCircleMapItem_t qt_meta_stringdata_QDeclarativeCircleMapItem = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QDeclarativeCircleMapItem"
QT_MOC_LITERAL(1, 26, 13), // "centerChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 56, 6), // "center"
QT_MOC_LITERAL(5, 63, 13), // "radiusChanged"
QT_MOC_LITERAL(6, 77, 6), // "radius"
QT_MOC_LITERAL(7, 84, 12), // "colorChanged"
QT_MOC_LITERAL(8, 97, 5), // "color"
QT_MOC_LITERAL(9, 103, 24), // "markSourceDirtyAndUpdate"
QT_MOC_LITERAL(10, 128, 20), // "afterViewportChanged"
QT_MOC_LITERAL(11, 149, 26), // "QGeoMapViewportChangeEvent"
QT_MOC_LITERAL(12, 176, 5), // "event"
QT_MOC_LITERAL(13, 182, 6), // "border"
QT_MOC_LITERAL(14, 189, 30) // "QDeclarativeMapLineProperties*"

    },
    "QDeclarativeCircleMapItem\0centerChanged\0"
    "\0QGeoCoordinate\0center\0radiusChanged\0"
    "radius\0colorChanged\0color\0"
    "markSourceDirtyAndUpdate\0afterViewportChanged\0"
    "QGeoMapViewportChangeEvent\0event\0"
    "border\0QDeclarativeMapLineProperties*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeCircleMapItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x09 /* Protected */,
      10,    1,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QColor,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::QReal, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
      13, 0x80000000 | 14, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

void QDeclarativeCircleMapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeCircleMapItem *_t = static_cast<QDeclarativeCircleMapItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->radiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->markSourceDirtyAndUpdate(); break;
        case 4: _t->afterViewportChanged((*reinterpret_cast< const QGeoMapViewportChangeEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeCircleMapItem::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCircleMapItem::centerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeCircleMapItem::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCircleMapItem::radiusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeCircleMapItem::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCircleMapItem::colorChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeMapLineProperties* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeCircleMapItem *_t = static_cast<QDeclarativeCircleMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->radius(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast< QDeclarativeMapLineProperties**>(_v) = _t->border(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeCircleMapItem *_t = static_cast<QDeclarativeCircleMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeCircleMapItem::staticMetaObject = {
    { &QDeclarativeGeoMapItemBase::staticMetaObject, qt_meta_stringdata_QDeclarativeCircleMapItem.data,
      qt_meta_data_QDeclarativeCircleMapItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeCircleMapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeCircleMapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeCircleMapItem.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeGeoMapItemBase::qt_metacast(_clname);
}

int QDeclarativeCircleMapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeGeoMapItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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

// SIGNAL 0
void QDeclarativeCircleMapItem::centerChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeCircleMapItem::radiusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeCircleMapItem::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
