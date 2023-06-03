/****************************************************************************
** Meta object code from reading C++ file 'qmediaobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmediaobject_p.h"
#include "../../qmediaobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaObject_t {
    QByteArrayData data[15];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaObject_t qt_meta_stringdata_QMediaObject = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QMediaObject"
QT_MOC_LITERAL(1, 13, 21), // "notifyIntervalChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "milliSeconds"
QT_MOC_LITERAL(4, 49, 24), // "metaDataAvailableChanged"
QT_MOC_LITERAL(5, 74, 9), // "available"
QT_MOC_LITERAL(6, 84, 15), // "metaDataChanged"
QT_MOC_LITERAL(7, 100, 3), // "key"
QT_MOC_LITERAL(8, 104, 5), // "value"
QT_MOC_LITERAL(9, 110, 19), // "availabilityChanged"
QT_MOC_LITERAL(10, 130, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(11, 162, 12), // "availability"
QT_MOC_LITERAL(12, 175, 9), // "_q_notify"
QT_MOC_LITERAL(13, 185, 22), // "_q_availabilityChanged"
QT_MOC_LITERAL(14, 208, 14) // "notifyInterval"

    },
    "QMediaObject\0notifyIntervalChanged\0\0"
    "milliSeconds\0metaDataAvailableChanged\0"
    "available\0metaDataChanged\0key\0value\0"
    "availabilityChanged\0QMultimedia::AvailabilityStatus\0"
    "availability\0_q_notify\0_q_availabilityChanged\0"
    "notifyInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,
       6,    2,   61,    2, 0x06 /* Public */,
       9,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    7,    8,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QMediaObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaObject *_t = static_cast<QMediaObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifyIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->metaDataAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->metaDataChanged(); break;
        case 3: _t->metaDataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->availabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->availabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_notify(); break;
        case 7: _t->d_func()->_q_availabilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::notifyIntervalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaObject::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::metaDataAvailableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::metaDataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaObject::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::metaDataChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaObject::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::availabilityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaObject::*_t)(QMultimedia::AvailabilityStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaObject::availabilityChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMediaObject *_t = static_cast<QMediaObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->notifyInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMediaObject *_t = static_cast<QMediaObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNotifyInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMediaObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMediaObject.data,
      qt_meta_data_QMediaObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void QMediaObject::notifyIntervalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaObject::metaDataAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaObject::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMediaObject::metaDataChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaObject::availabilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaObject::availabilityChanged(QMultimedia::AvailabilityStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
