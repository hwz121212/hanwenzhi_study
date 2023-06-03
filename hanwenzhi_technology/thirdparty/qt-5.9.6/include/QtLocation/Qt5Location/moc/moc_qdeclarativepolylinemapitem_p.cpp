/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepolylinemapitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativepolylinemapitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepolylinemapitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeMapLineProperties_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeMapLineProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeMapLineProperties_t qt_meta_stringdata_QDeclarativeMapLineProperties = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QDeclarativeMapLineProperties"
QT_MOC_LITERAL(1, 30, 12), // "widthChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "width"
QT_MOC_LITERAL(4, 50, 12), // "colorChanged"
QT_MOC_LITERAL(5, 63, 5) // "color"

    },
    "QDeclarativeMapLineProperties\0"
    "widthChanged\0\0width\0colorChanged\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeMapLineProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QColor,    5,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QDeclarativeMapLineProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeMapLineProperties *_t = static_cast<QDeclarativeMapLineProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeMapLineProperties::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeMapLineProperties::widthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeMapLineProperties::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeMapLineProperties::colorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeMapLineProperties *_t = static_cast<QDeclarativeMapLineProperties *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeMapLineProperties *_t = static_cast<QDeclarativeMapLineProperties *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeMapLineProperties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeMapLineProperties.data,
      qt_meta_data_QDeclarativeMapLineProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeMapLineProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeMapLineProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeMapLineProperties.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeMapLineProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeMapLineProperties::widthChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeMapLineProperties::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QDeclarativePolylineMapItem_t {
    QByteArrayData data[22];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePolylineMapItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePolylineMapItem_t qt_meta_stringdata_QDeclarativePolylineMapItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QDeclarativePolylineMapItem"
QT_MOC_LITERAL(1, 28, 11), // "pathChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24), // "markSourceDirtyAndUpdate"
QT_MOC_LITERAL(4, 66, 32), // "updateAfterLinePropertiesChanged"
QT_MOC_LITERAL(5, 99, 20), // "afterViewportChanged"
QT_MOC_LITERAL(6, 120, 26), // "QGeoMapViewportChangeEvent"
QT_MOC_LITERAL(7, 147, 5), // "event"
QT_MOC_LITERAL(8, 153, 10), // "pathLength"
QT_MOC_LITERAL(9, 164, 13), // "addCoordinate"
QT_MOC_LITERAL(10, 178, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(11, 193, 10), // "coordinate"
QT_MOC_LITERAL(12, 204, 16), // "insertCoordinate"
QT_MOC_LITERAL(13, 221, 5), // "index"
QT_MOC_LITERAL(14, 227, 17), // "replaceCoordinate"
QT_MOC_LITERAL(15, 245, 12), // "coordinateAt"
QT_MOC_LITERAL(16, 258, 18), // "containsCoordinate"
QT_MOC_LITERAL(17, 277, 16), // "removeCoordinate"
QT_MOC_LITERAL(18, 294, 4), // "path"
QT_MOC_LITERAL(19, 299, 8), // "QJSValue"
QT_MOC_LITERAL(20, 308, 4), // "line"
QT_MOC_LITERAL(21, 313, 30) // "QDeclarativeMapLineProperties*"

    },
    "QDeclarativePolylineMapItem\0pathChanged\0"
    "\0markSourceDirtyAndUpdate\0"
    "updateAfterLinePropertiesChanged\0"
    "afterViewportChanged\0QGeoMapViewportChangeEvent\0"
    "event\0pathLength\0addCoordinate\0"
    "QGeoCoordinate\0coordinate\0insertCoordinate\0"
    "index\0replaceCoordinate\0coordinateAt\0"
    "containsCoordinate\0removeCoordinate\0"
    "path\0QJSValue\0line\0QDeclarativeMapLineProperties*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePolylineMapItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    1,   77,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   80,    2, 0x02 /* Public */,
       9,    1,   81,    2, 0x02 /* Public */,
      12,    2,   84,    2, 0x02 /* Public */,
      14,    2,   89,    2, 0x02 /* Public */,
      15,    1,   94,    2, 0x02 /* Public */,
      16,    1,   97,    2, 0x02 /* Public */,
      17,    1,  100,    2, 0x02 /* Public */,
      17,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   13,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   13,   11,
    0x80000000 | 10, QMetaType::Int,   13,
    QMetaType::Bool, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x0049510b,
      20, 0x80000000 | 21, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void QDeclarativePolylineMapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativePolylineMapItem *_t = static_cast<QDeclarativePolylineMapItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->markSourceDirtyAndUpdate(); break;
        case 2: _t->updateAfterLinePropertiesChanged(); break;
        case 3: _t->afterViewportChanged((*reinterpret_cast< const QGeoMapViewportChangeEvent(*)>(_a[1]))); break;
        case 4: { int _r = _t->pathLength();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->addCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 6: _t->insertCoordinate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 7: _t->replaceCoordinate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 8: { QGeoCoordinate _r = _t->coordinateAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->containsCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->removeCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 11: _t->removeCoordinate((*reinterpret_cast< int(*)>(_a[1]))); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 10:
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
            typedef void (QDeclarativePolylineMapItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePolylineMapItem::pathChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeMapLineProperties* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativePolylineMapItem *_t = static_cast<QDeclarativePolylineMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< QDeclarativeMapLineProperties**>(_v) = _t->line(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePolylineMapItem *_t = static_cast<QDeclarativePolylineMapItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QJSValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativePolylineMapItem::staticMetaObject = {
    { &QDeclarativeGeoMapItemBase::staticMetaObject, qt_meta_stringdata_QDeclarativePolylineMapItem.data,
      qt_meta_data_QDeclarativePolylineMapItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePolylineMapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePolylineMapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePolylineMapItem.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeGeoMapItemBase::qt_metacast(_clname);
}

int QDeclarativePolylineMapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeGeoMapItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePolylineMapItem::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
