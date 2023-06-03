/****************************************************************************
** Meta object code from reading C++ file 'qserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSerialPort_t {
    QByteArrayData data[109];
    char stringdata0[1567];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSerialPort_t qt_meta_stringdata_QSerialPort = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QSerialPort"
QT_MOC_LITERAL(1, 12, 15), // "baudRateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "baudRate"
QT_MOC_LITERAL(4, 38, 23), // "QSerialPort::Directions"
QT_MOC_LITERAL(5, 62, 10), // "directions"
QT_MOC_LITERAL(6, 73, 15), // "dataBitsChanged"
QT_MOC_LITERAL(7, 89, 21), // "QSerialPort::DataBits"
QT_MOC_LITERAL(8, 111, 8), // "dataBits"
QT_MOC_LITERAL(9, 120, 13), // "parityChanged"
QT_MOC_LITERAL(10, 134, 19), // "QSerialPort::Parity"
QT_MOC_LITERAL(11, 154, 6), // "parity"
QT_MOC_LITERAL(12, 161, 15), // "stopBitsChanged"
QT_MOC_LITERAL(13, 177, 21), // "QSerialPort::StopBits"
QT_MOC_LITERAL(14, 199, 8), // "stopBits"
QT_MOC_LITERAL(15, 208, 18), // "flowControlChanged"
QT_MOC_LITERAL(16, 227, 24), // "QSerialPort::FlowControl"
QT_MOC_LITERAL(17, 252, 11), // "flowControl"
QT_MOC_LITERAL(18, 264, 22), // "dataErrorPolicyChanged"
QT_MOC_LITERAL(19, 287, 28), // "QSerialPort::DataErrorPolicy"
QT_MOC_LITERAL(20, 316, 6), // "policy"
QT_MOC_LITERAL(21, 323, 24), // "dataTerminalReadyChanged"
QT_MOC_LITERAL(22, 348, 3), // "set"
QT_MOC_LITERAL(23, 352, 20), // "requestToSendChanged"
QT_MOC_LITERAL(24, 373, 5), // "error"
QT_MOC_LITERAL(25, 379, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(26, 408, 15), // "serialPortError"
QT_MOC_LITERAL(27, 424, 13), // "errorOccurred"
QT_MOC_LITERAL(28, 438, 30), // "settingsRestoredOnCloseChanged"
QT_MOC_LITERAL(29, 469, 7), // "restore"
QT_MOC_LITERAL(30, 477, 19), // "breakEnabledChanged"
QT_MOC_LITERAL(31, 497, 18), // "_q_startAsyncWrite"
QT_MOC_LITERAL(32, 516, 11), // "_q_notified"
QT_MOC_LITERAL(33, 528, 11), // "OVERLAPPED*"
QT_MOC_LITERAL(34, 540, 8), // "DataBits"
QT_MOC_LITERAL(35, 549, 6), // "Parity"
QT_MOC_LITERAL(36, 556, 8), // "StopBits"
QT_MOC_LITERAL(37, 565, 11), // "FlowControl"
QT_MOC_LITERAL(38, 577, 15), // "dataErrorPolicy"
QT_MOC_LITERAL(39, 593, 15), // "DataErrorPolicy"
QT_MOC_LITERAL(40, 609, 17), // "dataTerminalReady"
QT_MOC_LITERAL(41, 627, 13), // "requestToSend"
QT_MOC_LITERAL(42, 641, 15), // "SerialPortError"
QT_MOC_LITERAL(43, 657, 23), // "settingsRestoredOnClose"
QT_MOC_LITERAL(44, 681, 12), // "breakEnabled"
QT_MOC_LITERAL(45, 694, 9), // "Direction"
QT_MOC_LITERAL(46, 704, 5), // "Input"
QT_MOC_LITERAL(47, 710, 6), // "Output"
QT_MOC_LITERAL(48, 717, 13), // "AllDirections"
QT_MOC_LITERAL(49, 731, 8), // "BaudRate"
QT_MOC_LITERAL(50, 740, 8), // "Baud1200"
QT_MOC_LITERAL(51, 749, 8), // "Baud2400"
QT_MOC_LITERAL(52, 758, 8), // "Baud4800"
QT_MOC_LITERAL(53, 767, 8), // "Baud9600"
QT_MOC_LITERAL(54, 776, 9), // "Baud19200"
QT_MOC_LITERAL(55, 786, 9), // "Baud38400"
QT_MOC_LITERAL(56, 796, 9), // "Baud57600"
QT_MOC_LITERAL(57, 806, 10), // "Baud115200"
QT_MOC_LITERAL(58, 817, 11), // "UnknownBaud"
QT_MOC_LITERAL(59, 829, 5), // "Data5"
QT_MOC_LITERAL(60, 835, 5), // "Data6"
QT_MOC_LITERAL(61, 841, 5), // "Data7"
QT_MOC_LITERAL(62, 847, 5), // "Data8"
QT_MOC_LITERAL(63, 853, 15), // "UnknownDataBits"
QT_MOC_LITERAL(64, 869, 8), // "NoParity"
QT_MOC_LITERAL(65, 878, 10), // "EvenParity"
QT_MOC_LITERAL(66, 889, 9), // "OddParity"
QT_MOC_LITERAL(67, 899, 11), // "SpaceParity"
QT_MOC_LITERAL(68, 911, 10), // "MarkParity"
QT_MOC_LITERAL(69, 922, 13), // "UnknownParity"
QT_MOC_LITERAL(70, 936, 7), // "OneStop"
QT_MOC_LITERAL(71, 944, 14), // "OneAndHalfStop"
QT_MOC_LITERAL(72, 959, 7), // "TwoStop"
QT_MOC_LITERAL(73, 967, 15), // "UnknownStopBits"
QT_MOC_LITERAL(74, 983, 13), // "NoFlowControl"
QT_MOC_LITERAL(75, 997, 15), // "HardwareControl"
QT_MOC_LITERAL(76, 1013, 15), // "SoftwareControl"
QT_MOC_LITERAL(77, 1029, 18), // "UnknownFlowControl"
QT_MOC_LITERAL(78, 1048, 12), // "PinoutSignal"
QT_MOC_LITERAL(79, 1061, 8), // "NoSignal"
QT_MOC_LITERAL(80, 1070, 21), // "TransmittedDataSignal"
QT_MOC_LITERAL(81, 1092, 18), // "ReceivedDataSignal"
QT_MOC_LITERAL(82, 1111, 23), // "DataTerminalReadySignal"
QT_MOC_LITERAL(83, 1135, 23), // "DataCarrierDetectSignal"
QT_MOC_LITERAL(84, 1159, 18), // "DataSetReadySignal"
QT_MOC_LITERAL(85, 1178, 19), // "RingIndicatorSignal"
QT_MOC_LITERAL(86, 1198, 19), // "RequestToSendSignal"
QT_MOC_LITERAL(87, 1218, 17), // "ClearToSendSignal"
QT_MOC_LITERAL(88, 1236, 30), // "SecondaryTransmittedDataSignal"
QT_MOC_LITERAL(89, 1267, 27), // "SecondaryReceivedDataSignal"
QT_MOC_LITERAL(90, 1295, 10), // "SkipPolicy"
QT_MOC_LITERAL(91, 1306, 14), // "PassZeroPolicy"
QT_MOC_LITERAL(92, 1321, 12), // "IgnorePolicy"
QT_MOC_LITERAL(93, 1334, 19), // "StopReceivingPolicy"
QT_MOC_LITERAL(94, 1354, 13), // "UnknownPolicy"
QT_MOC_LITERAL(95, 1368, 7), // "NoError"
QT_MOC_LITERAL(96, 1376, 19), // "DeviceNotFoundError"
QT_MOC_LITERAL(97, 1396, 15), // "PermissionError"
QT_MOC_LITERAL(98, 1412, 9), // "OpenError"
QT_MOC_LITERAL(99, 1422, 11), // "ParityError"
QT_MOC_LITERAL(100, 1434, 12), // "FramingError"
QT_MOC_LITERAL(101, 1447, 19), // "BreakConditionError"
QT_MOC_LITERAL(102, 1467, 10), // "WriteError"
QT_MOC_LITERAL(103, 1478, 9), // "ReadError"
QT_MOC_LITERAL(104, 1488, 13), // "ResourceError"
QT_MOC_LITERAL(105, 1502, 25), // "UnsupportedOperationError"
QT_MOC_LITERAL(106, 1528, 12), // "UnknownError"
QT_MOC_LITERAL(107, 1541, 12), // "TimeoutError"
QT_MOC_LITERAL(108, 1554, 12) // "NotOpenError"

    },
    "QSerialPort\0baudRateChanged\0\0baudRate\0"
    "QSerialPort::Directions\0directions\0"
    "dataBitsChanged\0QSerialPort::DataBits\0"
    "dataBits\0parityChanged\0QSerialPort::Parity\0"
    "parity\0stopBitsChanged\0QSerialPort::StopBits\0"
    "stopBits\0flowControlChanged\0"
    "QSerialPort::FlowControl\0flowControl\0"
    "dataErrorPolicyChanged\0"
    "QSerialPort::DataErrorPolicy\0policy\0"
    "dataTerminalReadyChanged\0set\0"
    "requestToSendChanged\0error\0"
    "QSerialPort::SerialPortError\0"
    "serialPortError\0errorOccurred\0"
    "settingsRestoredOnCloseChanged\0restore\0"
    "breakEnabledChanged\0_q_startAsyncWrite\0"
    "_q_notified\0OVERLAPPED*\0DataBits\0"
    "Parity\0StopBits\0FlowControl\0dataErrorPolicy\0"
    "DataErrorPolicy\0dataTerminalReady\0"
    "requestToSend\0SerialPortError\0"
    "settingsRestoredOnClose\0breakEnabled\0"
    "Direction\0Input\0Output\0AllDirections\0"
    "BaudRate\0Baud1200\0Baud2400\0Baud4800\0"
    "Baud9600\0Baud19200\0Baud38400\0Baud57600\0"
    "Baud115200\0UnknownBaud\0Data5\0Data6\0"
    "Data7\0Data8\0UnknownDataBits\0NoParity\0"
    "EvenParity\0OddParity\0SpaceParity\0"
    "MarkParity\0UnknownParity\0OneStop\0"
    "OneAndHalfStop\0TwoStop\0UnknownStopBits\0"
    "NoFlowControl\0HardwareControl\0"
    "SoftwareControl\0UnknownFlowControl\0"
    "PinoutSignal\0NoSignal\0TransmittedDataSignal\0"
    "ReceivedDataSignal\0DataTerminalReadySignal\0"
    "DataCarrierDetectSignal\0DataSetReadySignal\0"
    "RingIndicatorSignal\0RequestToSendSignal\0"
    "ClearToSendSignal\0SecondaryTransmittedDataSignal\0"
    "SecondaryReceivedDataSignal\0SkipPolicy\0"
    "PassZeroPolicy\0IgnorePolicy\0"
    "StopReceivingPolicy\0UnknownPolicy\0"
    "NoError\0DeviceNotFoundError\0PermissionError\0"
    "OpenError\0ParityError\0FramingError\0"
    "BreakConditionError\0WriteError\0ReadError\0"
    "ResourceError\0UnsupportedOperationError\0"
    "UnknownError\0TimeoutError\0NotOpenError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      11,  130, // properties
       9,  174, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       9,    1,   92,    2, 0x06 /* Public */,
      12,    1,   95,    2, 0x06 /* Public */,
      15,    1,   98,    2, 0x06 /* Public */,
      18,    1,  101,    2, 0x06 /* Public */,
      21,    1,  104,    2, 0x06 /* Public */,
      23,    1,  107,    2, 0x06 /* Public */,
      24,    1,  110,    2, 0x06 /* Public */,
      27,    1,  113,    2, 0x06 /* Public */,
      28,    1,  116,    2, 0x06 /* Public */,
      30,    1,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  122,    2, 0x08 /* Private */,
      32,    3,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   24,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   22,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 33,    2,    2,    2,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       8, 0x80000000 | 34, 0x0049510b,
      11, 0x80000000 | 35, 0x0049510b,
      14, 0x80000000 | 36, 0x0049510b,
      17, 0x80000000 | 37, 0x0049510b,
      38, 0x80000000 | 39, 0x0049510b,
      40, QMetaType::Bool, 0x00495103,
      41, QMetaType::Bool, 0x00495103,
      24, 0x80000000 | 42, 0x0049500d,
      43, QMetaType::Bool, 0x00495103,
      44, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
      10,
      11,

 // enums: name, flags, count, data
      45, 0x1,    3,  210,
      49, 0x0,    9,  216,
      34, 0x0,    5,  234,
      35, 0x0,    6,  244,
      36, 0x0,    4,  256,
      37, 0x0,    4,  264,
      78, 0x1,   11,  272,
      39, 0x0,    5,  294,
      42, 0x0,   14,  304,

 // enum data: key, value
      46, uint(QSerialPort::Input),
      47, uint(QSerialPort::Output),
      48, uint(QSerialPort::AllDirections),
      50, uint(QSerialPort::Baud1200),
      51, uint(QSerialPort::Baud2400),
      52, uint(QSerialPort::Baud4800),
      53, uint(QSerialPort::Baud9600),
      54, uint(QSerialPort::Baud19200),
      55, uint(QSerialPort::Baud38400),
      56, uint(QSerialPort::Baud57600),
      57, uint(QSerialPort::Baud115200),
      58, uint(QSerialPort::UnknownBaud),
      59, uint(QSerialPort::Data5),
      60, uint(QSerialPort::Data6),
      61, uint(QSerialPort::Data7),
      62, uint(QSerialPort::Data8),
      63, uint(QSerialPort::UnknownDataBits),
      64, uint(QSerialPort::NoParity),
      65, uint(QSerialPort::EvenParity),
      66, uint(QSerialPort::OddParity),
      67, uint(QSerialPort::SpaceParity),
      68, uint(QSerialPort::MarkParity),
      69, uint(QSerialPort::UnknownParity),
      70, uint(QSerialPort::OneStop),
      71, uint(QSerialPort::OneAndHalfStop),
      72, uint(QSerialPort::TwoStop),
      73, uint(QSerialPort::UnknownStopBits),
      74, uint(QSerialPort::NoFlowControl),
      75, uint(QSerialPort::HardwareControl),
      76, uint(QSerialPort::SoftwareControl),
      77, uint(QSerialPort::UnknownFlowControl),
      79, uint(QSerialPort::NoSignal),
      80, uint(QSerialPort::TransmittedDataSignal),
      81, uint(QSerialPort::ReceivedDataSignal),
      82, uint(QSerialPort::DataTerminalReadySignal),
      83, uint(QSerialPort::DataCarrierDetectSignal),
      84, uint(QSerialPort::DataSetReadySignal),
      85, uint(QSerialPort::RingIndicatorSignal),
      86, uint(QSerialPort::RequestToSendSignal),
      87, uint(QSerialPort::ClearToSendSignal),
      88, uint(QSerialPort::SecondaryTransmittedDataSignal),
      89, uint(QSerialPort::SecondaryReceivedDataSignal),
      90, uint(QSerialPort::SkipPolicy),
      91, uint(QSerialPort::PassZeroPolicy),
      92, uint(QSerialPort::IgnorePolicy),
      93, uint(QSerialPort::StopReceivingPolicy),
      94, uint(QSerialPort::UnknownPolicy),
      95, uint(QSerialPort::NoError),
      96, uint(QSerialPort::DeviceNotFoundError),
      97, uint(QSerialPort::PermissionError),
      98, uint(QSerialPort::OpenError),
      99, uint(QSerialPort::ParityError),
     100, uint(QSerialPort::FramingError),
     101, uint(QSerialPort::BreakConditionError),
     102, uint(QSerialPort::WriteError),
     103, uint(QSerialPort::ReadError),
     104, uint(QSerialPort::ResourceError),
     105, uint(QSerialPort::UnsupportedOperationError),
     106, uint(QSerialPort::UnknownError),
     107, uint(QSerialPort::TimeoutError),
     108, uint(QSerialPort::NotOpenError),

       0        // eod
};

void QSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baudRateChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QSerialPort::Directions(*)>(_a[2]))); break;
        case 1: _t->dataBitsChanged((*reinterpret_cast< QSerialPort::DataBits(*)>(_a[1]))); break;
        case 2: _t->parityChanged((*reinterpret_cast< QSerialPort::Parity(*)>(_a[1]))); break;
        case 3: _t->stopBitsChanged((*reinterpret_cast< QSerialPort::StopBits(*)>(_a[1]))); break;
        case 4: _t->flowControlChanged((*reinterpret_cast< QSerialPort::FlowControl(*)>(_a[1]))); break;
        case 5: _t->dataErrorPolicyChanged((*reinterpret_cast< QSerialPort::DataErrorPolicy(*)>(_a[1]))); break;
        case 6: _t->dataTerminalReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->requestToSendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->error((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 9: _t->errorOccurred((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 10: _t->settingsRestoredOnCloseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->breakEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->d_func()->_q_startAsyncWrite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->d_func()->_q_notified((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< OVERLAPPED*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSerialPort::*_t)(qint32 , QSerialPort::Directions );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::baudRateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::DataBits );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::dataBitsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::Parity );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::parityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::StopBits );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::stopBitsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::FlowControl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::flowControlChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::DataErrorPolicy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::dataErrorPolicyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::dataTerminalReadyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::requestToSendChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::SerialPortError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::error)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(QSerialPort::SerialPortError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::errorOccurred)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::settingsRestoredOnCloseChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QSerialPort::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSerialPort::breakEnabledChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->baudRate(); break;
        case 1: *reinterpret_cast< DataBits*>(_v) = _t->dataBits(); break;
        case 2: *reinterpret_cast< Parity*>(_v) = _t->parity(); break;
        case 3: *reinterpret_cast< StopBits*>(_v) = _t->stopBits(); break;
        case 4: *reinterpret_cast< FlowControl*>(_v) = _t->flowControl(); break;
        case 5: *reinterpret_cast< DataErrorPolicy*>(_v) = _t->dataErrorPolicy(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isDataTerminalReady(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isRequestToSend(); break;
        case 8: *reinterpret_cast< SerialPortError*>(_v) = _t->error(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->settingsRestoredOnClose(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isBreakEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaudRate(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setDataBits(*reinterpret_cast< DataBits*>(_v)); break;
        case 2: _t->setParity(*reinterpret_cast< Parity*>(_v)); break;
        case 3: _t->setStopBits(*reinterpret_cast< StopBits*>(_v)); break;
        case 4: _t->setFlowControl(*reinterpret_cast< FlowControl*>(_v)); break;
        case 5: _t->setDataErrorPolicy(*reinterpret_cast< DataErrorPolicy*>(_v)); break;
        case 6: _t->setDataTerminalReady(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setRequestToSend(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSettingsRestoredOnClose(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setBreakEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 8: _t->clearError(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QSerialPort::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QSerialPort.data,
      qt_meta_data_QSerialPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSerialPort.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSerialPort::baudRateChanged(qint32 _t1, QSerialPort::Directions _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSerialPort::dataBitsChanged(QSerialPort::DataBits _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSerialPort::parityChanged(QSerialPort::Parity _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSerialPort::stopBitsChanged(QSerialPort::StopBits _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSerialPort::flowControlChanged(QSerialPort::FlowControl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSerialPort::dataErrorPolicyChanged(QSerialPort::DataErrorPolicy _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSerialPort::dataTerminalReadyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSerialPort::requestToSendChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSerialPort::error(QSerialPort::SerialPortError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSerialPort::errorOccurred(QSerialPort::SerialPortError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSerialPort::settingsRestoredOnCloseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSerialPort::breakEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
