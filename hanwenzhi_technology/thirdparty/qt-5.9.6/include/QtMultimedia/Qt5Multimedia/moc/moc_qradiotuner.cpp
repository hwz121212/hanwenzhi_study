/****************************************************************************
** Meta object code from reading C++ file 'qradiotuner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qradiotuner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qradiotuner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRadioTuner_t {
    QByteArrayData data[63];
    char stringdata0[714];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRadioTuner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRadioTuner_t qt_meta_stringdata_QRadioTuner = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QRadioTuner"
QT_MOC_LITERAL(1, 12, 12), // "stateChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "QRadioTuner::State"
QT_MOC_LITERAL(4, 45, 5), // "state"
QT_MOC_LITERAL(5, 51, 11), // "bandChanged"
QT_MOC_LITERAL(6, 63, 17), // "QRadioTuner::Band"
QT_MOC_LITERAL(7, 81, 4), // "band"
QT_MOC_LITERAL(8, 86, 16), // "frequencyChanged"
QT_MOC_LITERAL(9, 103, 9), // "frequency"
QT_MOC_LITERAL(10, 113, 19), // "stereoStatusChanged"
QT_MOC_LITERAL(11, 133, 6), // "stereo"
QT_MOC_LITERAL(12, 140, 16), // "searchingChanged"
QT_MOC_LITERAL(13, 157, 9), // "searching"
QT_MOC_LITERAL(14, 167, 21), // "signalStrengthChanged"
QT_MOC_LITERAL(15, 189, 14), // "signalStrength"
QT_MOC_LITERAL(16, 204, 13), // "volumeChanged"
QT_MOC_LITERAL(17, 218, 6), // "volume"
QT_MOC_LITERAL(18, 225, 12), // "mutedChanged"
QT_MOC_LITERAL(19, 238, 5), // "muted"
QT_MOC_LITERAL(20, 244, 12), // "stationFound"
QT_MOC_LITERAL(21, 257, 9), // "stationId"
QT_MOC_LITERAL(22, 267, 23), // "antennaConnectedChanged"
QT_MOC_LITERAL(23, 291, 16), // "connectionStatus"
QT_MOC_LITERAL(24, 308, 5), // "error"
QT_MOC_LITERAL(25, 314, 18), // "QRadioTuner::Error"
QT_MOC_LITERAL(26, 333, 13), // "searchForward"
QT_MOC_LITERAL(27, 347, 14), // "searchBackward"
QT_MOC_LITERAL(28, 362, 17), // "searchAllStations"
QT_MOC_LITERAL(29, 380, 23), // "QRadioTuner::SearchMode"
QT_MOC_LITERAL(30, 404, 10), // "searchMode"
QT_MOC_LITERAL(31, 415, 12), // "cancelSearch"
QT_MOC_LITERAL(32, 428, 7), // "setBand"
QT_MOC_LITERAL(33, 436, 4), // "Band"
QT_MOC_LITERAL(34, 441, 12), // "setFrequency"
QT_MOC_LITERAL(35, 454, 9), // "setVolume"
QT_MOC_LITERAL(36, 464, 8), // "setMuted"
QT_MOC_LITERAL(37, 473, 5), // "start"
QT_MOC_LITERAL(38, 479, 4), // "stop"
QT_MOC_LITERAL(39, 484, 5), // "State"
QT_MOC_LITERAL(40, 490, 10), // "stereoMode"
QT_MOC_LITERAL(41, 501, 10), // "StereoMode"
QT_MOC_LITERAL(42, 512, 16), // "antennaConnected"
QT_MOC_LITERAL(43, 529, 9), // "radioData"
QT_MOC_LITERAL(44, 539, 11), // "QRadioData*"
QT_MOC_LITERAL(45, 551, 11), // "ActiveState"
QT_MOC_LITERAL(46, 563, 12), // "StoppedState"
QT_MOC_LITERAL(47, 576, 2), // "AM"
QT_MOC_LITERAL(48, 579, 2), // "FM"
QT_MOC_LITERAL(49, 582, 2), // "SW"
QT_MOC_LITERAL(50, 585, 2), // "LW"
QT_MOC_LITERAL(51, 588, 3), // "FM2"
QT_MOC_LITERAL(52, 592, 5), // "Error"
QT_MOC_LITERAL(53, 598, 7), // "NoError"
QT_MOC_LITERAL(54, 606, 13), // "ResourceError"
QT_MOC_LITERAL(55, 620, 9), // "OpenError"
QT_MOC_LITERAL(56, 630, 15), // "OutOfRangeError"
QT_MOC_LITERAL(57, 646, 11), // "ForceStereo"
QT_MOC_LITERAL(58, 658, 9), // "ForceMono"
QT_MOC_LITERAL(59, 668, 4), // "Auto"
QT_MOC_LITERAL(60, 673, 10), // "SearchMode"
QT_MOC_LITERAL(61, 684, 10), // "SearchFast"
QT_MOC_LITERAL(62, 695, 18) // "SearchGetStationId"

    },
    "QRadioTuner\0stateChanged\0\0QRadioTuner::State\0"
    "state\0bandChanged\0QRadioTuner::Band\0"
    "band\0frequencyChanged\0frequency\0"
    "stereoStatusChanged\0stereo\0searchingChanged\0"
    "searching\0signalStrengthChanged\0"
    "signalStrength\0volumeChanged\0volume\0"
    "mutedChanged\0muted\0stationFound\0"
    "stationId\0antennaConnectedChanged\0"
    "connectionStatus\0error\0QRadioTuner::Error\0"
    "searchForward\0searchBackward\0"
    "searchAllStations\0QRadioTuner::SearchMode\0"
    "searchMode\0cancelSearch\0setBand\0Band\0"
    "setFrequency\0setVolume\0setMuted\0start\0"
    "stop\0State\0stereoMode\0StereoMode\0"
    "antennaConnected\0radioData\0QRadioData*\0"
    "ActiveState\0StoppedState\0AM\0FM\0SW\0LW\0"
    "FM2\0Error\0NoError\0ResourceError\0"
    "OpenError\0OutOfRangeError\0ForceStereo\0"
    "ForceMono\0Auto\0SearchMode\0SearchFast\0"
    "SearchGetStationId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRadioTuner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
      11,  180, // properties
       5,  224, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       5,    1,  127,    2, 0x06 /* Public */,
       8,    1,  130,    2, 0x06 /* Public */,
      10,    1,  133,    2, 0x06 /* Public */,
      12,    1,  136,    2, 0x06 /* Public */,
      14,    1,  139,    2, 0x06 /* Public */,
      16,    1,  142,    2, 0x06 /* Public */,
      18,    1,  145,    2, 0x06 /* Public */,
      20,    2,  148,    2, 0x06 /* Public */,
      22,    1,  153,    2, 0x06 /* Public */,
      24,    1,  156,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  159,    2, 0x0a /* Public */,
      27,    0,  160,    2, 0x0a /* Public */,
      28,    1,  161,    2, 0x0a /* Public */,
      28,    0,  164,    2, 0x2a /* Public | MethodCloned */,
      31,    0,  165,    2, 0x0a /* Public */,
      32,    1,  166,    2, 0x0a /* Public */,
      34,    1,  169,    2, 0x0a /* Public */,
      35,    1,  172,    2, 0x0a /* Public */,
      36,    1,  175,    2, 0x0a /* Public */,
      37,    0,  178,    2, 0x0a /* Public */,
      38,    0,  179,    2, 0x0a /* Public */,

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
    QMetaType::Void, 0x80000000 | 25,   24,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 39, 0x00495009,
       7, 0x80000000 | 33, 0x0049510b,
       9, QMetaType::Int, 0x00495103,
      11, QMetaType::Bool, 0x00495001,
      40, 0x80000000 | 41, 0x0009510b,
      15, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      42, QMetaType::Bool, 0x00495001,
      43, 0x80000000 | 44, 0x00095409,

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
       9,
       0,

 // enums: name, flags, count, data
      39, 0x0,    2,  244,
      33, 0x0,    5,  248,
      52, 0x0,    4,  258,
      41, 0x0,    3,  266,
      60, 0x0,    2,  272,

 // enum data: key, value
      45, uint(QRadioTuner::ActiveState),
      46, uint(QRadioTuner::StoppedState),
      47, uint(QRadioTuner::AM),
      48, uint(QRadioTuner::FM),
      49, uint(QRadioTuner::SW),
      50, uint(QRadioTuner::LW),
      51, uint(QRadioTuner::FM2),
      53, uint(QRadioTuner::NoError),
      54, uint(QRadioTuner::ResourceError),
      55, uint(QRadioTuner::OpenError),
      56, uint(QRadioTuner::OutOfRangeError),
      57, uint(QRadioTuner::ForceStereo),
      58, uint(QRadioTuner::ForceMono),
      59, uint(QRadioTuner::Auto),
      61, uint(QRadioTuner::SearchFast),
      62, uint(QRadioTuner::SearchGetStationId),

       0        // eod
};

void QRadioTuner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRadioTuner *_t = static_cast<QRadioTuner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QRadioTuner::State(*)>(_a[1]))); break;
        case 1: _t->bandChanged((*reinterpret_cast< QRadioTuner::Band(*)>(_a[1]))); break;
        case 2: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stereoStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->searchingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalStrengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->stationFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->antennaConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->error((*reinterpret_cast< QRadioTuner::Error(*)>(_a[1]))); break;
        case 11: _t->searchForward(); break;
        case 12: _t->searchBackward(); break;
        case 13: _t->searchAllStations((*reinterpret_cast< QRadioTuner::SearchMode(*)>(_a[1]))); break;
        case 14: _t->searchAllStations(); break;
        case 15: _t->cancelSearch(); break;
        case 16: _t->setBand((*reinterpret_cast< Band(*)>(_a[1]))); break;
        case 17: _t->setFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->start(); break;
        case 21: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Error >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::SearchMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRadioTuner::*_t)(QRadioTuner::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(QRadioTuner::Band );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::bandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::frequencyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::stereoStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::searchingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::signalStrengthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::volumeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::mutedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::stationFound)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::antennaConnectedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QRadioTuner::*_t)(QRadioTuner::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTuner::error)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRadioTuner *_t = static_cast<QRadioTuner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Band*>(_v) = _t->band(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frequency(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isStereo(); break;
        case 4: *reinterpret_cast< StereoMode*>(_v) = _t->stereoMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->signalStrength(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isSearching(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isAntennaConnected(); break;
        case 10: *reinterpret_cast< QRadioData**>(_v) = _t->radioData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRadioTuner *_t = static_cast<QRadioTuner *>(_o);
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

const QMetaObject QRadioTuner::staticMetaObject = {
    { &QMediaObject::staticMetaObject, qt_meta_stringdata_QRadioTuner.data,
      qt_meta_data_QRadioTuner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRadioTuner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRadioTuner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRadioTuner.stringdata0))
        return static_cast<void*>(this);
    return QMediaObject::qt_metacast(_clname);
}

int QRadioTuner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
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
void QRadioTuner::stateChanged(QRadioTuner::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRadioTuner::bandChanged(QRadioTuner::Band _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRadioTuner::frequencyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QRadioTuner::stereoStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QRadioTuner::searchingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QRadioTuner::signalStrengthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QRadioTuner::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QRadioTuner::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QRadioTuner::stationFound(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QRadioTuner::antennaConnectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QRadioTuner::error(QRadioTuner::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
