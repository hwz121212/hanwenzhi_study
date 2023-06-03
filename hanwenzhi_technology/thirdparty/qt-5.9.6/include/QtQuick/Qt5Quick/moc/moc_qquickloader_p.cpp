/****************************************************************************
** Meta object code from reading C++ file 'qquickloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickLoader_t {
    QByteArrayData data[27];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickLoader_t qt_meta_stringdata_QQuickLoader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickLoader"
QT_MOC_LITERAL(1, 13, 11), // "itemChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "activeChanged"
QT_MOC_LITERAL(4, 40, 13), // "sourceChanged"
QT_MOC_LITERAL(5, 54, 22), // "sourceComponentChanged"
QT_MOC_LITERAL(6, 77, 13), // "statusChanged"
QT_MOC_LITERAL(7, 91, 15), // "progressChanged"
QT_MOC_LITERAL(8, 107, 6), // "loaded"
QT_MOC_LITERAL(9, 114, 19), // "asynchronousChanged"
QT_MOC_LITERAL(10, 134, 15), // "_q_sourceLoaded"
QT_MOC_LITERAL(11, 150, 13), // "_q_updateSize"
QT_MOC_LITERAL(12, 164, 9), // "setSource"
QT_MOC_LITERAL(13, 174, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(14, 190, 6), // "active"
QT_MOC_LITERAL(15, 197, 6), // "source"
QT_MOC_LITERAL(16, 204, 15), // "sourceComponent"
QT_MOC_LITERAL(17, 220, 14), // "QQmlComponent*"
QT_MOC_LITERAL(18, 235, 4), // "item"
QT_MOC_LITERAL(19, 240, 6), // "status"
QT_MOC_LITERAL(20, 247, 6), // "Status"
QT_MOC_LITERAL(21, 254, 8), // "progress"
QT_MOC_LITERAL(22, 263, 12), // "asynchronous"
QT_MOC_LITERAL(23, 276, 4), // "Null"
QT_MOC_LITERAL(24, 281, 5), // "Ready"
QT_MOC_LITERAL(25, 287, 7), // "Loading"
QT_MOC_LITERAL(26, 295, 5) // "Error"

    },
    "QQuickLoader\0itemChanged\0\0activeChanged\0"
    "sourceChanged\0sourceComponentChanged\0"
    "statusChanged\0progressChanged\0loaded\0"
    "asynchronousChanged\0_q_sourceLoaded\0"
    "_q_updateSize\0setSource\0QQmlV4Function*\0"
    "active\0source\0sourceComponent\0"
    "QQmlComponent*\0item\0status\0Status\0"
    "progress\0asynchronous\0Null\0Ready\0"
    "Loading\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   82, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,    2,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::QUrl, 0x00495103,
      16, 0x80000000 | 17, 0x0049510f,
      18, QMetaType::QObjectStar, 0x00495001,
      19, 0x80000000 | 20, 0x00495009,
      21, QMetaType::QReal, 0x00495001,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       0,
       4,
       5,
       7,

 // enums: name, flags, count, data
      20, 0x0,    4,  114,

 // enum data: key, value
      23, uint(QQuickLoader::Null),
      24, uint(QQuickLoader::Ready),
      25, uint(QQuickLoader::Loading),
      26, uint(QQuickLoader::Error),

       0        // eod
};

void QQuickLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickLoader *_t = static_cast<QQuickLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->sourceChanged(); break;
        case 3: _t->sourceComponentChanged(); break;
        case 4: _t->statusChanged(); break;
        case 5: _t->progressChanged(); break;
        case 6: _t->loaded(); break;
        case 7: _t->asynchronousChanged(); break;
        case 8: _t->d_func()->_q_sourceLoaded(); break;
        case 9: _t->d_func()->_q_updateSize(); break;
        case 10: _t->setSource((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::itemChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::sourceComponentChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::statusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::progressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::loaded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLoader::asynchronousChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickLoader *_t = static_cast<QQuickLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 2: *reinterpret_cast< QQmlComponent**>(_v) = _t->sourceComponent(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->item(); break;
        case 4: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->asynchronous(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickLoader *_t = static_cast<QQuickLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setSourceComponent(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 6: _t->setAsynchronous(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickLoader *_t = static_cast<QQuickLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->resetSourceComponent(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickLoader::staticMetaObject = {
    { &QQuickImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QQuickLoader.data,
      qt_meta_data_QQuickLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickLoader.stringdata0))
        return static_cast<void*>(this);
    return QQuickImplicitSizeItem::qt_metacast(_clname);
}

int QQuickLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void QQuickLoader::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickLoader::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickLoader::sourceComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickLoader::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickLoader::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickLoader::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickLoader::asynchronousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
