/****************************************************************************
** Meta object code from reading C++ file 'qcanbusdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcanbusdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcanbusdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCanBusDevice_t {
    QByteArrayData data[31];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCanBusDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCanBusDevice_t qt_meta_stringdata_QCanBusDevice = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QCanBusDevice"
QT_MOC_LITERAL(1, 14, 13), // "errorOccurred"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 26), // "QCanBusDevice::CanBusError"
QT_MOC_LITERAL(4, 56, 14), // "framesReceived"
QT_MOC_LITERAL(5, 71, 13), // "framesWritten"
QT_MOC_LITERAL(6, 85, 11), // "framesCount"
QT_MOC_LITERAL(7, 97, 12), // "stateChanged"
QT_MOC_LITERAL(8, 110, 32), // "QCanBusDevice::CanBusDeviceState"
QT_MOC_LITERAL(9, 143, 5), // "state"
QT_MOC_LITERAL(10, 149, 11), // "CanBusError"
QT_MOC_LITERAL(11, 161, 7), // "NoError"
QT_MOC_LITERAL(12, 169, 9), // "ReadError"
QT_MOC_LITERAL(13, 179, 10), // "WriteError"
QT_MOC_LITERAL(14, 190, 15), // "ConnectionError"
QT_MOC_LITERAL(15, 206, 18), // "ConfigurationError"
QT_MOC_LITERAL(16, 225, 12), // "UnknownError"
QT_MOC_LITERAL(17, 238, 17), // "CanBusDeviceState"
QT_MOC_LITERAL(18, 256, 16), // "UnconnectedState"
QT_MOC_LITERAL(19, 273, 15), // "ConnectingState"
QT_MOC_LITERAL(20, 289, 14), // "ConnectedState"
QT_MOC_LITERAL(21, 304, 12), // "ClosingState"
QT_MOC_LITERAL(22, 317, 16), // "ConfigurationKey"
QT_MOC_LITERAL(23, 334, 12), // "RawFilterKey"
QT_MOC_LITERAL(24, 347, 14), // "ErrorFilterKey"
QT_MOC_LITERAL(25, 362, 11), // "LoopbackKey"
QT_MOC_LITERAL(26, 374, 13), // "ReceiveOwnKey"
QT_MOC_LITERAL(27, 388, 10), // "BitRateKey"
QT_MOC_LITERAL(28, 399, 8), // "CanFdKey"
QT_MOC_LITERAL(29, 408, 14), // "DataBitRateKey"
QT_MOC_LITERAL(30, 423, 7) // "UserKey"

    },
    "QCanBusDevice\0errorOccurred\0\0"
    "QCanBusDevice::CanBusError\0framesReceived\0"
    "framesWritten\0framesCount\0stateChanged\0"
    "QCanBusDevice::CanBusDeviceState\0state\0"
    "CanBusError\0NoError\0ReadError\0WriteError\0"
    "ConnectionError\0ConfigurationError\0"
    "UnknownError\0CanBusDeviceState\0"
    "UnconnectedState\0ConnectingState\0"
    "ConnectedState\0ClosingState\0"
    "ConfigurationKey\0RawFilterKey\0"
    "ErrorFilterKey\0LoopbackKey\0ReceiveOwnKey\0"
    "BitRateKey\0CanFdKey\0DataBitRateKey\0"
    "UserKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCanBusDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       3,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // enums: name, flags, count, data
      10, 0x0,    6,   56,
      17, 0x0,    4,   68,
      22, 0x0,    8,   76,

 // enum data: key, value
      11, uint(QCanBusDevice::NoError),
      12, uint(QCanBusDevice::ReadError),
      13, uint(QCanBusDevice::WriteError),
      14, uint(QCanBusDevice::ConnectionError),
      15, uint(QCanBusDevice::ConfigurationError),
      16, uint(QCanBusDevice::UnknownError),
      18, uint(QCanBusDevice::UnconnectedState),
      19, uint(QCanBusDevice::ConnectingState),
      20, uint(QCanBusDevice::ConnectedState),
      21, uint(QCanBusDevice::ClosingState),
      23, uint(QCanBusDevice::RawFilterKey),
      24, uint(QCanBusDevice::ErrorFilterKey),
      25, uint(QCanBusDevice::LoopbackKey),
      26, uint(QCanBusDevice::ReceiveOwnKey),
      27, uint(QCanBusDevice::BitRateKey),
      28, uint(QCanBusDevice::CanFdKey),
      29, uint(QCanBusDevice::DataBitRateKey),
      30, uint(QCanBusDevice::UserKey),

       0        // eod
};

void QCanBusDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCanBusDevice *_t = static_cast<QCanBusDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast< QCanBusDevice::CanBusError(*)>(_a[1]))); break;
        case 1: _t->framesReceived(); break;
        case 2: _t->framesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QCanBusDevice::CanBusDeviceState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCanBusDevice::*_t)(QCanBusDevice::CanBusError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCanBusDevice::errorOccurred)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCanBusDevice::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCanBusDevice::framesReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCanBusDevice::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCanBusDevice::framesWritten)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCanBusDevice::*_t)(QCanBusDevice::CanBusDeviceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCanBusDevice::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QCanBusDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCanBusDevice.data,
      qt_meta_data_QCanBusDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCanBusDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCanBusDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCanBusDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCanBusDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QCanBusDevice::errorOccurred(QCanBusDevice::CanBusError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCanBusDevice::framesReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCanBusDevice::framesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCanBusDevice::stateChanged(QCanBusDevice::CanBusDeviceState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
