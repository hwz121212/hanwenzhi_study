/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepolygonmapitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativepolygonmapitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepolygonmapitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativePolygonMapItem_t {
    QByteArrayData data[18];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePolygonMapItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePolygonMapItem_t qt_meta_stringdata_QDeclarativePolygonMapItem = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QDeclarativePolygonMapItem"
QT_MOC_LITERAL(1, 27, 11), // "pathChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "colorChanged"
QT_MOC_LITERAL(4, 53, 5), // "color"
QT_MOC_LITERAL(5, 59, 24), // "markSourceDirtyAndUpdate"
QT_MOC_LITERAL(6, 84, 19), // "handleBorderUpdated"
QT_MOC_LITERAL(7, 104, 20), // "afterViewportChanged"
QT_MOC_LITERAL(8, 125, 26), // "QGeoMapViewportChangeEvent"
QT_MOC_LITERAL(9, 152, 5), // "event"
QT_MOC_LITERAL(10, 158, 13), // "addCoordinate"
QT_MOC_LITERAL(11, 172, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(12, 187, 10), // "coordinate"
QT_MOC_LITERAL(13, 198, 16), // "removeCoordinate"
QT_MOC_LITERAL(14, 215, 4), // "path"
QT_MOC_LITERAL(15, 220, 8), // "QJSValue"
QT_MOC_LITERAL(16, 229, 6), // "border"
QT_MOC_LITERAL(17, 236, 30) // "QDeclarativeMapLineProperties*"

    },
    "QDeclarativePolygonMapItem\0pathChanged\0"
    "\0colorChanged\0color\0markSourceDirtyAndUpdate\0"
    "handleBorderUpdated\0afterViewportChanged\0"
    "QGeoMapViewportChangeEvent\0event\0"
    "addCoordinate\0QGeoCoordinate\0coordinate\0"
    "removeCoordinate\0path\0QJSValue\0border\0"
    "QDeclarativeMapLineProperties*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePolygonMapItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x09 /* Protected */,
       7,    1,   55,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   58,    2, 0x02 /* Public */,
      13,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049510b,
       4, QMetaType::QColor, 0x00495103,
      16, 0x80000000 | 17, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void QDeclarativePolygonMapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativePolygonMapItem *_t = static_cast<QDeclarativePolygonMapItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->markSourceDirtyAndUpdate(); break;
        case 3: _t->handleBorderUpdated(); break;
        case 4: _t->afterViewportChanged((*reinterpret_cast< const QGeoMapViewportChangeEvent(*)>(_a[1]))); break;
        case 5: _t->addCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 6: _t->removeCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 6:
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
            typedef void (QDeclarativePolygonMapItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePolygonMapItem::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativePolygonMapItem::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePolygonMapItem::colorChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeMapLineProperties* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativePolygonMapItem *_t = static_cast<QDeclarativePolygonMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< QDeclarativeMapLineProperties**>(_v) = _t->border(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePolygonMapItem *_t = static_cast<QDeclarativePolygonMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QJSValue*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativePolygonMapItem::staticMetaObject = {
    { &QDeclarativeGeoMapItemBase::staticMetaObject, qt_meta_stringdata_QDeclarativePolygonMapItem.data,
      qt_meta_data_QDeclarativePolygonMapItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePolygonMapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePolygonMapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePolygonMapItem.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeGeoMapItemBase::qt_metacast(_clname);
}

int QDeclarativePolygonMapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeGeoMapItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void QDeclarativePolygonMapItem::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativePolygonMapItem::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
