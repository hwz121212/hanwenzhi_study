/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeradio_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativeradio_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeradio_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeRadio_t {
    QByteArrayData data[88];
    char stringdata0[1123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeRadio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeRadio_t qt_meta_stringdata_QDeclarativeRadio = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QDeclarativeRadio"
QT_MOC_LITERAL(1, 18, 12), // "stateChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "QDeclarativeRadio::State"
QT_MOC_LITERAL(4, 57, 5), // "state"
QT_MOC_LITERAL(5, 63, 11), // "bandChanged"
QT_MOC_LITERAL(6, 75, 23), // "QDeclarativeRadio::Band"
QT_MOC_LITERAL(7, 99, 4), // "band"
QT_MOC_LITERAL(8, 104, 16), // "frequencyChanged"
QT_MOC_LITERAL(9, 121, 9), // "frequency"
QT_MOC_LITERAL(10, 131, 19), // "stereoStatusChanged"
QT_MOC_LITERAL(11, 151, 6), // "stereo"
QT_MOC_LITERAL(12, 158, 16), // "searchingChanged"
QT_MOC_LITERAL(13, 175, 9), // "searching"
QT_MOC_LITERAL(14, 185, 21), // "signalStrengthChanged"
QT_MOC_LITERAL(15, 207, 14), // "signalStrength"
QT_MOC_LITERAL(16, 222, 13), // "volumeChanged"
QT_MOC_LITERAL(17, 236, 6), // "volume"
QT_MOC_LITERAL(18, 243, 12), // "mutedChanged"
QT_MOC_LITERAL(19, 256, 5), // "muted"
QT_MOC_LITERAL(20, 262, 12), // "stationFound"
QT_MOC_LITERAL(21, 275, 9), // "stationId"
QT_MOC_LITERAL(22, 285, 23), // "antennaConnectedChanged"
QT_MOC_LITERAL(23, 309, 16), // "connectionStatus"
QT_MOC_LITERAL(24, 326, 19), // "availabilityChanged"
QT_MOC_LITERAL(25, 346, 12), // "Availability"
QT_MOC_LITERAL(26, 359, 12), // "availability"
QT_MOC_LITERAL(27, 372, 12), // "errorChanged"
QT_MOC_LITERAL(28, 385, 5), // "error"
QT_MOC_LITERAL(29, 391, 24), // "QDeclarativeRadio::Error"
QT_MOC_LITERAL(30, 416, 9), // "errorCode"
QT_MOC_LITERAL(31, 426, 7), // "setBand"
QT_MOC_LITERAL(32, 434, 12), // "setFrequency"
QT_MOC_LITERAL(33, 447, 13), // "setStereoMode"
QT_MOC_LITERAL(34, 461, 29), // "QDeclarativeRadio::StereoMode"
QT_MOC_LITERAL(35, 491, 10), // "stereoMode"
QT_MOC_LITERAL(36, 502, 9), // "setVolume"
QT_MOC_LITERAL(37, 512, 8), // "setMuted"
QT_MOC_LITERAL(38, 521, 10), // "cancelScan"
QT_MOC_LITERAL(39, 532, 8), // "scanDown"
QT_MOC_LITERAL(40, 541, 6), // "scanUp"
QT_MOC_LITERAL(41, 548, 6), // "tuneUp"
QT_MOC_LITERAL(42, 555, 8), // "tuneDown"
QT_MOC_LITERAL(43, 564, 17), // "searchAllStations"
QT_MOC_LITERAL(44, 582, 29), // "QDeclarativeRadio::SearchMode"
QT_MOC_LITERAL(45, 612, 10), // "searchMode"
QT_MOC_LITERAL(46, 623, 5), // "start"
QT_MOC_LITERAL(47, 629, 4), // "stop"
QT_MOC_LITERAL(48, 634, 15), // "_q_stateChanged"
QT_MOC_LITERAL(49, 650, 18), // "QRadioTuner::State"
QT_MOC_LITERAL(50, 669, 14), // "_q_bandChanged"
QT_MOC_LITERAL(51, 684, 17), // "QRadioTuner::Band"
QT_MOC_LITERAL(52, 702, 8), // "_q_error"
QT_MOC_LITERAL(53, 711, 18), // "QRadioTuner::Error"
QT_MOC_LITERAL(54, 730, 22), // "_q_availabilityChanged"
QT_MOC_LITERAL(55, 753, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(56, 785, 11), // "isAvailable"
QT_MOC_LITERAL(57, 797, 5), // "State"
QT_MOC_LITERAL(58, 803, 4), // "Band"
QT_MOC_LITERAL(59, 808, 10), // "StereoMode"
QT_MOC_LITERAL(60, 819, 13), // "frequencyStep"
QT_MOC_LITERAL(61, 833, 16), // "minimumFrequency"
QT_MOC_LITERAL(62, 850, 16), // "maximumFrequency"
QT_MOC_LITERAL(63, 867, 16), // "antennaConnected"
QT_MOC_LITERAL(64, 884, 9), // "radioData"
QT_MOC_LITERAL(65, 894, 22), // "QDeclarativeRadioData*"
QT_MOC_LITERAL(66, 917, 11), // "ActiveState"
QT_MOC_LITERAL(67, 929, 12), // "StoppedState"
QT_MOC_LITERAL(68, 942, 2), // "AM"
QT_MOC_LITERAL(69, 945, 2), // "FM"
QT_MOC_LITERAL(70, 948, 2), // "SW"
QT_MOC_LITERAL(71, 951, 2), // "LW"
QT_MOC_LITERAL(72, 954, 3), // "FM2"
QT_MOC_LITERAL(73, 958, 5), // "Error"
QT_MOC_LITERAL(74, 964, 7), // "NoError"
QT_MOC_LITERAL(75, 972, 13), // "ResourceError"
QT_MOC_LITERAL(76, 986, 9), // "OpenError"
QT_MOC_LITERAL(77, 996, 15), // "OutOfRangeError"
QT_MOC_LITERAL(78, 1012, 11), // "ForceStereo"
QT_MOC_LITERAL(79, 1024, 9), // "ForceMono"
QT_MOC_LITERAL(80, 1034, 4), // "Auto"
QT_MOC_LITERAL(81, 1039, 10), // "SearchMode"
QT_MOC_LITERAL(82, 1050, 10), // "SearchFast"
QT_MOC_LITERAL(83, 1061, 18), // "SearchGetStationId"
QT_MOC_LITERAL(84, 1080, 9), // "Available"
QT_MOC_LITERAL(85, 1090, 4), // "Busy"
QT_MOC_LITERAL(86, 1095, 11), // "Unavailable"
QT_MOC_LITERAL(87, 1107, 15) // "ResourceMissing"

    },
    "QDeclarativeRadio\0stateChanged\0\0"
    "QDeclarativeRadio::State\0state\0"
    "bandChanged\0QDeclarativeRadio::Band\0"
    "band\0frequencyChanged\0frequency\0"
    "stereoStatusChanged\0stereo\0searchingChanged\0"
    "searching\0signalStrengthChanged\0"
    "signalStrength\0volumeChanged\0volume\0"
    "mutedChanged\0muted\0stationFound\0"
    "stationId\0antennaConnectedChanged\0"
    "connectionStatus\0availabilityChanged\0"
    "Availability\0availability\0errorChanged\0"
    "error\0QDeclarativeRadio::Error\0errorCode\0"
    "setBand\0setFrequency\0setStereoMode\0"
    "QDeclarativeRadio::StereoMode\0stereoMode\0"
    "setVolume\0setMuted\0cancelScan\0scanDown\0"
    "scanUp\0tuneUp\0tuneDown\0searchAllStations\0"
    "QDeclarativeRadio::SearchMode\0searchMode\0"
    "start\0stop\0_q_stateChanged\0"
    "QRadioTuner::State\0_q_bandChanged\0"
    "QRadioTuner::Band\0_q_error\0"
    "QRadioTuner::Error\0_q_availabilityChanged\0"
    "QMultimedia::AvailabilityStatus\0"
    "isAvailable\0State\0Band\0StereoMode\0"
    "frequencyStep\0minimumFrequency\0"
    "maximumFrequency\0antennaConnected\0"
    "radioData\0QDeclarativeRadioData*\0"
    "ActiveState\0StoppedState\0AM\0FM\0SW\0LW\0"
    "FM2\0Error\0NoError\0ResourceError\0"
    "OpenError\0OutOfRangeError\0ForceStereo\0"
    "ForceMono\0Auto\0SearchMode\0SearchFast\0"
    "SearchGetStationId\0Available\0Busy\0"
    "Unavailable\0ResourceMissing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeRadio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      15,  252, // properties
       6,  312, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       5,    1,  177,    2, 0x06 /* Public */,
       8,    1,  180,    2, 0x06 /* Public */,
      10,    1,  183,    2, 0x06 /* Public */,
      12,    1,  186,    2, 0x06 /* Public */,
      14,    1,  189,    2, 0x06 /* Public */,
      16,    1,  192,    2, 0x06 /* Public */,
      18,    1,  195,    2, 0x06 /* Public */,
      20,    2,  198,    2, 0x06 /* Public */,
      22,    1,  203,    2, 0x06 /* Public */,
      24,    1,  206,    2, 0x06 /* Public */,
      27,    0,  209,    2, 0x06 /* Public */,
      28,    1,  210,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  213,    2, 0x0a /* Public */,
      32,    1,  216,    2, 0x0a /* Public */,
      33,    1,  219,    2, 0x0a /* Public */,
      36,    1,  222,    2, 0x0a /* Public */,
      37,    1,  225,    2, 0x0a /* Public */,
      38,    0,  228,    2, 0x0a /* Public */,
      39,    0,  229,    2, 0x0a /* Public */,
      40,    0,  230,    2, 0x0a /* Public */,
      41,    0,  231,    2, 0x0a /* Public */,
      42,    0,  232,    2, 0x0a /* Public */,
      43,    1,  233,    2, 0x0a /* Public */,
      43,    0,  236,    2, 0x2a /* Public | MethodCloned */,
      46,    0,  237,    2, 0x0a /* Public */,
      47,    0,  238,    2, 0x0a /* Public */,
      48,    1,  239,    2, 0x08 /* Private */,
      50,    1,  242,    2, 0x08 /* Private */,
      52,    1,  245,    2, 0x08 /* Private */,
      54,    1,  248,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      56,    0,  251,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,    4,
    QMetaType::Void, 0x80000000 | 51,    7,
    QMetaType::Void, 0x80000000 | 53,   30,
    QMetaType::Void, 0x80000000 | 55,    2,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       4, 0x80000000 | 57, 0x00495009,
       7, 0x80000000 | 58, 0x0049510b,
       9, QMetaType::Int, 0x00495103,
      11, QMetaType::Bool, 0x00495001,
      35, 0x80000000 | 59, 0x0009510b,
      15, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      60, QMetaType::Int, 0x00495001,
      61, QMetaType::Int, 0x00495001,
      62, QMetaType::Int, 0x00495001,
      63, QMetaType::Bool, 0x00495001,
      26, 0x80000000 | 25, 0x00495009,
      64, 0x80000000 | 65, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       5,
       6,
       7,
       4,
       1,
       1,
       1,
       9,
      10,
       0,

 // enums: name, flags, count, data
      57, 0x0,    2,  336,
      58, 0x0,    5,  340,
      73, 0x0,    4,  350,
      59, 0x0,    3,  358,
      81, 0x0,    2,  364,
      25, 0x0,    4,  368,

 // enum data: key, value
      66, uint(QDeclarativeRadio::ActiveState),
      67, uint(QDeclarativeRadio::StoppedState),
      68, uint(QDeclarativeRadio::AM),
      69, uint(QDeclarativeRadio::FM),
      70, uint(QDeclarativeRadio::SW),
      71, uint(QDeclarativeRadio::LW),
      72, uint(QDeclarativeRadio::FM2),
      74, uint(QDeclarativeRadio::NoError),
      75, uint(QDeclarativeRadio::ResourceError),
      76, uint(QDeclarativeRadio::OpenError),
      77, uint(QDeclarativeRadio::OutOfRangeError),
      78, uint(QDeclarativeRadio::ForceStereo),
      79, uint(QDeclarativeRadio::ForceMono),
      80, uint(QDeclarativeRadio::Auto),
      82, uint(QDeclarativeRadio::SearchFast),
      83, uint(QDeclarativeRadio::SearchGetStationId),
      84, uint(QDeclarativeRadio::Available),
      85, uint(QDeclarativeRadio::Busy),
      86, uint(QDeclarativeRadio::Unavailable),
      87, uint(QDeclarativeRadio::ResourceMissing),

       0        // eod
};

void QDeclarativeRadio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeRadio *_t = static_cast<QDeclarativeRadio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QDeclarativeRadio::State(*)>(_a[1]))); break;
        case 1: _t->bandChanged((*reinterpret_cast< QDeclarativeRadio::Band(*)>(_a[1]))); break;
        case 2: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stereoStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->searchingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalStrengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->stationFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->antennaConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->availabilityChanged((*reinterpret_cast< Availability(*)>(_a[1]))); break;
        case 11: _t->errorChanged(); break;
        case 12: _t->error((*reinterpret_cast< QDeclarativeRadio::Error(*)>(_a[1]))); break;
        case 13: _t->setBand((*reinterpret_cast< QDeclarativeRadio::Band(*)>(_a[1]))); break;
        case 14: _t->setFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setStereoMode((*reinterpret_cast< QDeclarativeRadio::StereoMode(*)>(_a[1]))); break;
        case 16: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->cancelScan(); break;
        case 19: _t->scanDown(); break;
        case 20: _t->scanUp(); break;
        case 21: _t->tuneUp(); break;
        case 22: _t->tuneDown(); break;
        case 23: _t->searchAllStations((*reinterpret_cast< QDeclarativeRadio::SearchMode(*)>(_a[1]))); break;
        case 24: _t->searchAllStations(); break;
        case 25: _t->start(); break;
        case 26: _t->stop(); break;
        case 27: _t->_q_stateChanged((*reinterpret_cast< QRadioTuner::State(*)>(_a[1]))); break;
        case 28: _t->_q_bandChanged((*reinterpret_cast< QRadioTuner::Band(*)>(_a[1]))); break;
        case 29: _t->_q_error((*reinterpret_cast< QRadioTuner::Error(*)>(_a[1]))); break;
        case 30: _t->_q_availabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 31: { bool _r = _t->isAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::State >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Error >(); break;
            }
            break;
        case 30:
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
            typedef void (QDeclarativeRadio::*_t)(QDeclarativeRadio::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(QDeclarativeRadio::Band );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::bandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::frequencyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::stereoStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::searchingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::signalStrengthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::volumeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::mutedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::stationFound)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::antennaConnectedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(Availability );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::availabilityChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::errorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QDeclarativeRadio::*_t)(QDeclarativeRadio::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeRadio::error)) {
                *result = 12;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeRadio *_t = static_cast<QDeclarativeRadio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Band*>(_v) = _t->band(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frequency(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->stereo(); break;
        case 4: *reinterpret_cast< StereoMode*>(_v) = _t->stereoMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->signalStrength(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->muted(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->searching(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->frequencyStep(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->minimumFrequency(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->maximumFrequency(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isAntennaConnected(); break;
        case 13: *reinterpret_cast< Availability*>(_v) = _t->availability(); break;
        case 14: *reinterpret_cast< QDeclarativeRadioData**>(_v) = _t->radioData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeRadio *_t = static_cast<QDeclarativeRadio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setBand(*reinterpret_cast< Band*>(_v)); break;
        case 2: _t->setFrequency(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setStereoMode(*reinterpret_cast< StereoMode*>(_v)); break;
        case 6: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeRadio::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeRadio.data,
      qt_meta_data_QDeclarativeRadio,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeRadio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeRadio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeRadio.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeRadio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeRadio::stateChanged(QDeclarativeRadio::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeRadio::bandChanged(QDeclarativeRadio::Band _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeRadio::frequencyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativeRadio::stereoStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeRadio::searchingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QDeclarativeRadio::signalStrengthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QDeclarativeRadio::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QDeclarativeRadio::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QDeclarativeRadio::stationFound(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QDeclarativeRadio::antennaConnectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QDeclarativeRadio::availabilityChanged(Availability _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QDeclarativeRadio::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QDeclarativeRadio::error(QDeclarativeRadio::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
