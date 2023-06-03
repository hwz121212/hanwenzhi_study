/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsvideoitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgraphicsvideoitem_p.h"
#include "../../qgraphicsvideoitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsvideoitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGraphicsVideoItem_t {
    QByteArrayData data[13];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsVideoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsVideoItem_t qt_meta_stringdata_QGraphicsVideoItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGraphicsVideoItem"
QT_MOC_LITERAL(1, 19, 17), // "nativeSizeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "size"
QT_MOC_LITERAL(4, 43, 10), // "_q_present"
QT_MOC_LITERAL(5, 54, 19), // "_q_updateNativeSize"
QT_MOC_LITERAL(6, 74, 19), // "_q_serviceDestroyed"
QT_MOC_LITERAL(7, 94, 11), // "mediaObject"
QT_MOC_LITERAL(8, 106, 13), // "QMediaObject*"
QT_MOC_LITERAL(9, 120, 15), // "aspectRatioMode"
QT_MOC_LITERAL(10, 136, 19), // "Qt::AspectRatioMode"
QT_MOC_LITERAL(11, 156, 6), // "offset"
QT_MOC_LITERAL(12, 163, 10) // "nativeSize"

    },
    "QGraphicsVideoItem\0nativeSizeChanged\0"
    "\0size\0_q_present\0_q_updateNativeSize\0"
    "_q_serviceDestroyed\0mediaObject\0"
    "QMediaObject*\0aspectRatioMode\0"
    "Qt::AspectRatioMode\0offset\0nativeSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsVideoItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QPointF, 0x00095103,
       3, QMetaType::QSizeF, 0x00095103,
      12, QMetaType::QSizeF, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QGraphicsVideoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsVideoItem *_t = static_cast<QGraphicsVideoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nativeSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_present(); break;
        case 2: _t->d_func()->_q_updateNativeSize(); break;
        case 3: _t->d_func()->_q_serviceDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGraphicsVideoItem::*_t)(const QSizeF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGraphicsVideoItem::nativeSizeChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsVideoItem *_t = static_cast<QGraphicsVideoItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMediaObject**>(_v) = _t->mediaObject(); break;
        case 1: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->aspectRatioMode(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->offset(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast< QSizeF*>(_v) = _t->nativeSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsVideoItem *_t = static_cast<QGraphicsVideoItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMediaObject(*reinterpret_cast< QMediaObject**>(_v)); break;
        case 1: _t->setAspectRatioMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 2: _t->setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setSize(*reinterpret_cast< QSizeF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsVideoItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QGraphicsVideoItem.data,
      qt_meta_data_QGraphicsVideoItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGraphicsVideoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsVideoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsVideoItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QMediaBindableInterface"))
        return static_cast< QMediaBindableInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.mediabindable/5.0"))
        return static_cast< QMediaBindableInterface*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsVideoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QGraphicsVideoItem::nativeSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
