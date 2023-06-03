/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeomapquickitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeomapquickitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeomapquickitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoMapQuickItem_t {
    QByteArrayData data[16];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoMapQuickItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoMapQuickItem_t qt_meta_stringdata_QDeclarativeGeoMapQuickItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QDeclarativeGeoMapQuickItem"
QT_MOC_LITERAL(1, 28, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "sourceItemChanged"
QT_MOC_LITERAL(4, 65, 18), // "anchorPointChanged"
QT_MOC_LITERAL(5, 84, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(6, 101, 20), // "afterChildrenChanged"
QT_MOC_LITERAL(7, 122, 20), // "afterViewportChanged"
QT_MOC_LITERAL(8, 143, 26), // "QGeoMapViewportChangeEvent"
QT_MOC_LITERAL(9, 170, 5), // "event"
QT_MOC_LITERAL(10, 176, 10), // "coordinate"
QT_MOC_LITERAL(11, 187, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(12, 202, 11), // "anchorPoint"
QT_MOC_LITERAL(13, 214, 9), // "zoomLevel"
QT_MOC_LITERAL(14, 224, 10), // "sourceItem"
QT_MOC_LITERAL(15, 235, 11) // "QQuickItem*"

    },
    "QDeclarativeGeoMapQuickItem\0"
    "coordinateChanged\0\0sourceItemChanged\0"
    "anchorPointChanged\0zoomLevelChanged\0"
    "afterChildrenChanged\0afterViewportChanged\0"
    "QGeoMapViewportChangeEvent\0event\0"
    "coordinate\0QGeoCoordinate\0anchorPoint\0"
    "zoomLevel\0sourceItem\0QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoMapQuickItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::QPointF, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,
       3,
       1,

       0        // eod
};

void QDeclarativeGeoMapQuickItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoMapQuickItem *_t = static_cast<QDeclarativeGeoMapQuickItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged(); break;
        case 1: _t->sourceItemChanged(); break;
        case 2: _t->anchorPointChanged(); break;
        case 3: _t->zoomLevelChanged(); break;
        case 4: _t->afterChildrenChanged(); break;
        case 5: _t->afterViewportChanged((*reinterpret_cast< const QGeoMapViewportChangeEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoMapQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapQuickItem::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoMapQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapQuickItem::sourceItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoMapQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapQuickItem::anchorPointChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoMapQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapQuickItem::zoomLevelChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoMapQuickItem *_t = static_cast<QDeclarativeGeoMapQuickItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->anchorPoint(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->zoomLevel(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->sourceItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoMapQuickItem *_t = static_cast<QDeclarativeGeoMapQuickItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setAnchorPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setSourceItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoMapQuickItem::staticMetaObject = {
    { &QDeclarativeGeoMapItemBase::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoMapQuickItem.data,
      qt_meta_data_QDeclarativeGeoMapQuickItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoMapQuickItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoMapQuickItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoMapQuickItem.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeGeoMapItemBase::qt_metacast(_clname);
}

int QDeclarativeGeoMapQuickItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeGeoMapItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QDeclarativeGeoMapQuickItem::coordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeGeoMapQuickItem::sourceItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeGeoMapQuickItem::anchorPointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeGeoMapQuickItem::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
