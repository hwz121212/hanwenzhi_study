/****************************************************************************
** Meta object code from reading C++ file 'qlowenergyserviceprivate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtBluetooth/private/qlowenergyserviceprivate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlowenergyserviceprivate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLowEnergyServicePrivate_t {
    QByteArrayData data[19];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLowEnergyServicePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLowEnergyServicePrivate_t qt_meta_stringdata_QLowEnergyServicePrivate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QLowEnergyServicePrivate"
QT_MOC_LITERAL(1, 25, 12), // "stateChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(4, 71, 8), // "newState"
QT_MOC_LITERAL(5, 80, 5), // "error"
QT_MOC_LITERAL(6, 86, 31), // "QLowEnergyService::ServiceError"
QT_MOC_LITERAL(7, 118, 21), // "characteristicChanged"
QT_MOC_LITERAL(8, 140, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(9, 165, 14), // "characteristic"
QT_MOC_LITERAL(10, 180, 8), // "newValue"
QT_MOC_LITERAL(11, 189, 18), // "characteristicRead"
QT_MOC_LITERAL(12, 208, 4), // "info"
QT_MOC_LITERAL(13, 213, 5), // "value"
QT_MOC_LITERAL(14, 219, 21), // "characteristicWritten"
QT_MOC_LITERAL(15, 241, 14), // "descriptorRead"
QT_MOC_LITERAL(16, 256, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(17, 277, 17), // "descriptorWritten"
QT_MOC_LITERAL(18, 295, 10) // "descriptor"

    },
    "QLowEnergyServicePrivate\0stateChanged\0"
    "\0QLowEnergyService::ServiceState\0"
    "newState\0error\0QLowEnergyService::ServiceError\0"
    "characteristicChanged\0QLowEnergyCharacteristic\0"
    "characteristic\0newValue\0characteristicRead\0"
    "info\0value\0characteristicWritten\0"
    "descriptorRead\0QLowEnergyDescriptor\0"
    "descriptorWritten\0descriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLowEnergyServicePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    2,   55,    2, 0x06 /* Public */,
      11,    2,   60,    2, 0x06 /* Public */,
      14,    2,   65,    2, 0x06 /* Public */,
      15,    2,   70,    2, 0x06 /* Public */,
      17,    2,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QByteArray,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QByteArray,   12,   13,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QByteArray,    9,   10,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QByteArray,   12,   13,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QByteArray,   18,   10,

       0        // eod
};

void QLowEnergyServicePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLowEnergyServicePrivate *_t = static_cast<QLowEnergyServicePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QLowEnergyService::ServiceError(*)>(_a[1]))); break;
        case 2: _t->characteristicChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->characteristicRead((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->characteristicWritten((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->descriptorRead((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->descriptorWritten((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QLowEnergyServicePrivate::*_t)(QLowEnergyService::ServiceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(QLowEnergyService::ServiceError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(const QLowEnergyCharacteristic & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::characteristicChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(const QLowEnergyCharacteristic & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::characteristicRead)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(const QLowEnergyCharacteristic & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::characteristicWritten)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(const QLowEnergyDescriptor & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::descriptorRead)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QLowEnergyServicePrivate::*_t)(const QLowEnergyDescriptor & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLowEnergyServicePrivate::descriptorWritten)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QLowEnergyServicePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLowEnergyServicePrivate.data,
      qt_meta_data_QLowEnergyServicePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QLowEnergyServicePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLowEnergyServicePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLowEnergyServicePrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QLowEnergyServicePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QLowEnergyServicePrivate::stateChanged(QLowEnergyService::ServiceState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLowEnergyServicePrivate::error(QLowEnergyService::ServiceError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLowEnergyServicePrivate::characteristicChanged(const QLowEnergyCharacteristic & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLowEnergyServicePrivate::characteristicRead(const QLowEnergyCharacteristic & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QLowEnergyServicePrivate::characteristicWritten(const QLowEnergyCharacteristic & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QLowEnergyServicePrivate::descriptorRead(const QLowEnergyDescriptor & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QLowEnergyServicePrivate::descriptorWritten(const QLowEnergyDescriptor & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
