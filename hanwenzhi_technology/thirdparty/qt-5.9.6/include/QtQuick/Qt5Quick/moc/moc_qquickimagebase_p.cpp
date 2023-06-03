/****************************************************************************
** Meta object code from reading C++ file 'qquickimagebase_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickimagebase_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickimagebase_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickImageBase_t {
    QByteArrayData data[27];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickImageBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickImageBase_t qt_meta_stringdata_QQuickImageBase = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickImageBase"
QT_MOC_LITERAL(1, 16, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "sourceSizeChanged"
QT_MOC_LITERAL(4, 49, 13), // "statusChanged"
QT_MOC_LITERAL(5, 63, 23), // "QQuickImageBase::Status"
QT_MOC_LITERAL(6, 87, 15), // "progressChanged"
QT_MOC_LITERAL(7, 103, 8), // "progress"
QT_MOC_LITERAL(8, 112, 19), // "asynchronousChanged"
QT_MOC_LITERAL(9, 132, 12), // "cacheChanged"
QT_MOC_LITERAL(10, 145, 13), // "mirrorChanged"
QT_MOC_LITERAL(11, 159, 15), // "requestFinished"
QT_MOC_LITERAL(12, 175, 15), // "requestProgress"
QT_MOC_LITERAL(13, 191, 19), // "handleScreenChanged"
QT_MOC_LITERAL(14, 211, 8), // "QScreen*"
QT_MOC_LITERAL(15, 220, 6), // "screen"
QT_MOC_LITERAL(16, 227, 6), // "status"
QT_MOC_LITERAL(17, 234, 6), // "Status"
QT_MOC_LITERAL(18, 241, 6), // "source"
QT_MOC_LITERAL(19, 248, 12), // "asynchronous"
QT_MOC_LITERAL(20, 261, 5), // "cache"
QT_MOC_LITERAL(21, 267, 10), // "sourceSize"
QT_MOC_LITERAL(22, 278, 6), // "mirror"
QT_MOC_LITERAL(23, 285, 4), // "Null"
QT_MOC_LITERAL(24, 290, 5), // "Ready"
QT_MOC_LITERAL(25, 296, 7), // "Loading"
QT_MOC_LITERAL(26, 304, 5) // "Error"

    },
    "QQuickImageBase\0sourceChanged\0\0"
    "sourceSizeChanged\0statusChanged\0"
    "QQuickImageBase::Status\0progressChanged\0"
    "progress\0asynchronousChanged\0cacheChanged\0"
    "mirrorChanged\0requestFinished\0"
    "requestProgress\0handleScreenChanged\0"
    "QScreen*\0screen\0status\0Status\0source\0"
    "asynchronous\0cache\0sourceSize\0mirror\0"
    "Null\0Ready\0Loading\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickImageBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       7,   86, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    1,   68,    2, 0x06 /* Public */,
       6,    1,   71,    2, 0x06 /* Public */,
       8,    0,   74,    2, 0x06 /* Public */,
       9,    0,   75,    2, 0x06 /* Public */,
      10,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   77,    2, 0x08 /* Private */,
      12,    2,   78,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x00495009,
      18, QMetaType::QUrl, 0x00495103,
       7, QMetaType::QReal, 0x00495001,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::QSize, 0x00495107,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       0,
       3,
       4,
       5,
       1,
       6,

 // enums: name, flags, count, data
      17, 0x0,    4,  118,

 // enum data: key, value
      23, uint(QQuickImageBase::Null),
      24, uint(QQuickImageBase::Ready),
      25, uint(QQuickImageBase::Loading),
      26, uint(QQuickImageBase::Error),

       0        // eod
};

void QQuickImageBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickImageBase *_t = static_cast<QQuickImageBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->sourceSizeChanged(); break;
        case 2: _t->statusChanged((*reinterpret_cast< QQuickImageBase::Status(*)>(_a[1]))); break;
        case 3: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->asynchronousChanged(); break;
        case 5: _t->cacheChanged(); break;
        case 6: _t->mirrorChanged(); break;
        case 7: _t->requestFinished(); break;
        case 8: _t->requestProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->handleScreenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickImageBase::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::sourceSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)(QQuickImageBase::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::progressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::asynchronousChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::cacheChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickImageBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickImageBase::mirrorChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickImageBase *_t = static_cast<QQuickImageBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->asynchronous(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->cache(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->sourceSize(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->mirror(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickImageBase *_t = static_cast<QQuickImageBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setAsynchronous(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCache(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSourceSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: _t->setMirror(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickImageBase *_t = static_cast<QQuickImageBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 5: _t->resetSourceSize(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickImageBase::staticMetaObject = {
    { &QQuickImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QQuickImageBase.data,
      qt_meta_data_QQuickImageBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickImageBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickImageBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickImageBase.stringdata0))
        return static_cast<void*>(this);
    return QQuickImplicitSizeItem::qt_metacast(_clname);
}

int QQuickImageBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickImageBase::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickImageBase::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickImageBase::statusChanged(QQuickImageBase::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickImageBase::progressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickImageBase::asynchronousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickImageBase::cacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickImageBase::mirrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
