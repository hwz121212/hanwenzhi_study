/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeomapitembase_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeomapitembase_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeomapitembase_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoMapItemBase_t {
    QByteArrayData data[13];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoMapItemBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoMapItemBase_t qt_meta_stringdata_QDeclarativeGeoMapItemBase = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QDeclarativeGeoMapItemBase"
QT_MOC_LITERAL(1, 27, 21), // "mapItemOpacityChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "afterChildrenChanged"
QT_MOC_LITERAL(4, 71, 20), // "afterViewportChanged"
QT_MOC_LITERAL(5, 92, 26), // "QGeoMapViewportChangeEvent"
QT_MOC_LITERAL(6, 119, 5), // "event"
QT_MOC_LITERAL(7, 125, 15), // "polishAndUpdate"
QT_MOC_LITERAL(8, 141, 21), // "baseCameraDataChanged"
QT_MOC_LITERAL(9, 163, 14), // "QGeoCameraData"
QT_MOC_LITERAL(10, 178, 6), // "camera"
QT_MOC_LITERAL(11, 185, 8), // "geoShape"
QT_MOC_LITERAL(12, 194, 9) // "QGeoShape"

    },
    "QDeclarativeGeoMapItemBase\0"
    "mapItemOpacityChanged\0\0afterChildrenChanged\0"
    "afterViewportChanged\0QGeoMapViewportChangeEvent\0"
    "event\0polishAndUpdate\0baseCameraDataChanged\0"
    "QGeoCameraData\0camera\0geoShape\0QGeoShape"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoMapItemBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    1,   41,    2, 0x09 /* Protected */,
       7,    0,   44,    2, 0x09 /* Protected */,
       8,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00085009,

       0        // eod
};

void QDeclarativeGeoMapItemBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoMapItemBase *_t = static_cast<QDeclarativeGeoMapItemBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapItemOpacityChanged(); break;
        case 1: _t->afterChildrenChanged(); break;
        case 2: _t->afterViewportChanged((*reinterpret_cast< const QGeoMapViewportChangeEvent(*)>(_a[1]))); break;
        case 3: _t->polishAndUpdate(); break;
        case 4: _t->baseCameraDataChanged((*reinterpret_cast< const QGeoCameraData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCameraData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoMapItemBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapItemBase::mapItemOpacityChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoShape >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoMapItemBase *_t = static_cast<QDeclarativeGeoMapItemBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoShape*>(_v) = _t->geoShape(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoMapItemBase::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoMapItemBase.data,
      qt_meta_data_QDeclarativeGeoMapItemBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoMapItemBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoMapItemBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoMapItemBase.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QDeclarativeGeoMapItemBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoMapItemBase::mapItemOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
