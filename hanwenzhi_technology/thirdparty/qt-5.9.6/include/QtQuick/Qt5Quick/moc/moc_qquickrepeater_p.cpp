/****************************************************************************
** Meta object code from reading C++ file 'qquickrepeater_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickrepeater_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickrepeater_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickRepeater_t {
    QByteArrayData data[22];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRepeater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRepeater_t qt_meta_stringdata_QQuickRepeater = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickRepeater"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 8), // "delegate"
QT_MOC_LITERAL(3, 40, 12), // "modelChanged"
QT_MOC_LITERAL(4, 53, 0), // ""
QT_MOC_LITERAL(5, 54, 15), // "delegateChanged"
QT_MOC_LITERAL(6, 70, 12), // "countChanged"
QT_MOC_LITERAL(7, 83, 9), // "itemAdded"
QT_MOC_LITERAL(8, 93, 5), // "index"
QT_MOC_LITERAL(9, 99, 11), // "QQuickItem*"
QT_MOC_LITERAL(10, 111, 4), // "item"
QT_MOC_LITERAL(11, 116, 11), // "itemRemoved"
QT_MOC_LITERAL(12, 128, 11), // "createdItem"
QT_MOC_LITERAL(13, 140, 8), // "initItem"
QT_MOC_LITERAL(14, 149, 12), // "modelUpdated"
QT_MOC_LITERAL(15, 162, 13), // "QQmlChangeSet"
QT_MOC_LITERAL(16, 176, 9), // "changeSet"
QT_MOC_LITERAL(17, 186, 5), // "reset"
QT_MOC_LITERAL(18, 192, 6), // "itemAt"
QT_MOC_LITERAL(19, 199, 5), // "model"
QT_MOC_LITERAL(20, 205, 14), // "QQmlComponent*"
QT_MOC_LITERAL(21, 220, 5) // "count"

    },
    "QQuickRepeater\0DefaultProperty\0delegate\0"
    "modelChanged\0\0delegateChanged\0"
    "countChanged\0itemAdded\0index\0QQuickItem*\0"
    "item\0itemRemoved\0createdItem\0initItem\0"
    "modelUpdated\0QQmlChangeSet\0changeSet\0"
    "reset\0itemAt\0model\0QQmlComponent*\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRepeater[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       3,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   61,    4, 0x06 /* Public */,
       5,    0,   62,    4, 0x06 /* Public */,
       6,    0,   63,    4, 0x06 /* Public */,
       7,    2,   64,    4, 0x06 /* Public */,
      11,    2,   69,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   74,    4, 0x08 /* Private */,
      13,    2,   79,    4, 0x08 /* Private */,
      14,    2,   84,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    1,   89,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    8,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    4,   10,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool,   16,   17,

 // methods: parameters
    0x80000000 | 9, QMetaType::Int,    8,

 // properties: name, type, flags
      19, QMetaType::QVariant, 0x00495103,
       2, 0x80000000 | 20, 0x0049510b,
      21, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickRepeater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRepeater *_t = static_cast<QQuickRepeater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->delegateChanged(); break;
        case 2: _t->countChanged(); break;
        case 3: _t->itemAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 4: _t->itemRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 5: _t->createdItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 6: _t->initItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 7: _t->modelUpdated((*reinterpret_cast< const QQmlChangeSet(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { QQuickItem* _r = _t->itemAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRepeater::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRepeater::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRepeater::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRepeater::delegateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickRepeater::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRepeater::countChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickRepeater::*_t)(int , QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRepeater::itemAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickRepeater::*_t)(int , QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRepeater::itemRemoved)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRepeater *_t = static_cast<QQuickRepeater *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRepeater *_t = static_cast<QQuickRepeater *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickRepeater::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickRepeater.data,
      qt_meta_data_QQuickRepeater,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRepeater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRepeater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRepeater.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickRepeater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
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
void QQuickRepeater::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRepeater::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickRepeater::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickRepeater::itemAdded(int _t1, QQuickItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickRepeater::itemRemoved(int _t1, QQuickItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
