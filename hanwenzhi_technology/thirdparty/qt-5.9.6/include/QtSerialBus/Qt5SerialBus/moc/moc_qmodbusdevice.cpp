/****************************************************************************
** Meta object code from reading C++ file 'qmodbusdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmodbusdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmodbusdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QModbusDevice_t {
    QByteArrayData data[32];
    char stringdata0[488];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModbusDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModbusDevice_t qt_meta_stringdata_QModbusDevice = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QModbusDevice"
QT_MOC_LITERAL(1, 14, 13), // "errorOccurred"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "QModbusDevice::Error"
QT_MOC_LITERAL(4, 50, 5), // "error"
QT_MOC_LITERAL(5, 56, 12), // "stateChanged"
QT_MOC_LITERAL(6, 69, 20), // "QModbusDevice::State"
QT_MOC_LITERAL(7, 90, 5), // "state"
QT_MOC_LITERAL(8, 96, 5), // "Error"
QT_MOC_LITERAL(9, 102, 7), // "NoError"
QT_MOC_LITERAL(10, 110, 9), // "ReadError"
QT_MOC_LITERAL(11, 120, 10), // "WriteError"
QT_MOC_LITERAL(12, 131, 15), // "ConnectionError"
QT_MOC_LITERAL(13, 147, 18), // "ConfigurationError"
QT_MOC_LITERAL(14, 166, 12), // "TimeoutError"
QT_MOC_LITERAL(15, 179, 13), // "ProtocolError"
QT_MOC_LITERAL(16, 193, 17), // "ReplyAbortedError"
QT_MOC_LITERAL(17, 211, 12), // "UnknownError"
QT_MOC_LITERAL(18, 224, 5), // "State"
QT_MOC_LITERAL(19, 230, 16), // "UnconnectedState"
QT_MOC_LITERAL(20, 247, 15), // "ConnectingState"
QT_MOC_LITERAL(21, 263, 14), // "ConnectedState"
QT_MOC_LITERAL(22, 278, 12), // "ClosingState"
QT_MOC_LITERAL(23, 291, 19), // "ConnectionParameter"
QT_MOC_LITERAL(24, 311, 23), // "SerialPortNameParameter"
QT_MOC_LITERAL(25, 335, 21), // "SerialParityParameter"
QT_MOC_LITERAL(26, 357, 23), // "SerialBaudRateParameter"
QT_MOC_LITERAL(27, 381, 23), // "SerialDataBitsParameter"
QT_MOC_LITERAL(28, 405, 23), // "SerialStopBitsParameter"
QT_MOC_LITERAL(29, 429, 20), // "NetworkPortParameter"
QT_MOC_LITERAL(30, 450, 23), // "NetworkAddressParameter"
QT_MOC_LITERAL(31, 474, 13) // "UserParameter"

    },
    "QModbusDevice\0errorOccurred\0\0"
    "QModbusDevice::Error\0error\0stateChanged\0"
    "QModbusDevice::State\0state\0Error\0"
    "NoError\0ReadError\0WriteError\0"
    "ConnectionError\0ConfigurationError\0"
    "TimeoutError\0ProtocolError\0ReplyAbortedError\0"
    "UnknownError\0State\0UnconnectedState\0"
    "ConnectingState\0ConnectedState\0"
    "ClosingState\0ConnectionParameter\0"
    "SerialPortNameParameter\0SerialParityParameter\0"
    "SerialBaudRateParameter\0SerialDataBitsParameter\0"
    "SerialStopBitsParameter\0NetworkPortParameter\0"
    "NetworkAddressParameter\0UserParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModbusDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       3,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // enums: name, flags, count, data
       8, 0x0,    9,   42,
      18, 0x0,    4,   60,
      23, 0x0,    8,   68,

 // enum data: key, value
       9, uint(QModbusDevice::NoError),
      10, uint(QModbusDevice::ReadError),
      11, uint(QModbusDevice::WriteError),
      12, uint(QModbusDevice::ConnectionError),
      13, uint(QModbusDevice::ConfigurationError),
      14, uint(QModbusDevice::TimeoutError),
      15, uint(QModbusDevice::ProtocolError),
      16, uint(QModbusDevice::ReplyAbortedError),
      17, uint(QModbusDevice::UnknownError),
      19, uint(QModbusDevice::UnconnectedState),
      20, uint(QModbusDevice::ConnectingState),
      21, uint(QModbusDevice::ConnectedState),
      22, uint(QModbusDevice::ClosingState),
      24, uint(QModbusDevice::SerialPortNameParameter),
      25, uint(QModbusDevice::SerialParityParameter),
      26, uint(QModbusDevice::SerialBaudRateParameter),
      27, uint(QModbusDevice::SerialDataBitsParameter),
      28, uint(QModbusDevice::SerialStopBitsParameter),
      29, uint(QModbusDevice::NetworkPortParameter),
      30, uint(QModbusDevice::NetworkAddressParameter),
      31, uint(QModbusDevice::UserParameter),

       0        // eod
};

void QModbusDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QModbusDevice *_t = static_cast<QModbusDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast< QModbusDevice::Error(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< QModbusDevice::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QModbusDevice::*_t)(QModbusDevice::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusDevice::errorOccurred)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QModbusDevice::*_t)(QModbusDevice::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusDevice::stateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QModbusDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QModbusDevice.data,
      qt_meta_data_QModbusDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QModbusDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QModbusDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QModbusDevice::errorOccurred(QModbusDevice::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QModbusDevice::stateChanged(QModbusDevice::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
