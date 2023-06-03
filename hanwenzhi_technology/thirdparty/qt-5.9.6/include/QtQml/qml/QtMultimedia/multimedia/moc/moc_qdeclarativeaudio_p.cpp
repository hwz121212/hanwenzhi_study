/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeaudio_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativeaudio_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeaudio_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeAudio_t {
    QByteArrayData data[104];
    char stringdata0[1322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeAudio_t qt_meta_stringdata_QDeclarativeAudio = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QDeclarativeAudio"
QT_MOC_LITERAL(1, 18, 15), // "playlistChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "sourceChanged"
QT_MOC_LITERAL(4, 49, 15), // "autoLoadChanged"
QT_MOC_LITERAL(5, 65, 16), // "loopCountChanged"
QT_MOC_LITERAL(6, 82, 20), // "playbackStateChanged"
QT_MOC_LITERAL(7, 103, 15), // "autoPlayChanged"
QT_MOC_LITERAL(8, 119, 6), // "paused"
QT_MOC_LITERAL(9, 126, 7), // "stopped"
QT_MOC_LITERAL(10, 134, 7), // "playing"
QT_MOC_LITERAL(11, 142, 13), // "statusChanged"
QT_MOC_LITERAL(12, 156, 15), // "durationChanged"
QT_MOC_LITERAL(13, 172, 15), // "positionChanged"
QT_MOC_LITERAL(14, 188, 13), // "volumeChanged"
QT_MOC_LITERAL(15, 202, 12), // "mutedChanged"
QT_MOC_LITERAL(16, 215, 15), // "hasAudioChanged"
QT_MOC_LITERAL(17, 231, 15), // "hasVideoChanged"
QT_MOC_LITERAL(18, 247, 21), // "bufferProgressChanged"
QT_MOC_LITERAL(19, 269, 15), // "seekableChanged"
QT_MOC_LITERAL(20, 285, 19), // "playbackRateChanged"
QT_MOC_LITERAL(21, 305, 16), // "audioRoleChanged"
QT_MOC_LITERAL(22, 322, 19), // "availabilityChanged"
QT_MOC_LITERAL(23, 342, 12), // "Availability"
QT_MOC_LITERAL(24, 355, 12), // "availability"
QT_MOC_LITERAL(25, 368, 12), // "errorChanged"
QT_MOC_LITERAL(26, 381, 5), // "error"
QT_MOC_LITERAL(27, 387, 24), // "QDeclarativeAudio::Error"
QT_MOC_LITERAL(28, 412, 11), // "errorString"
QT_MOC_LITERAL(29, 424, 18), // "mediaObjectChanged"
QT_MOC_LITERAL(30, 443, 21), // "notifyIntervalChanged"
QT_MOC_LITERAL(31, 465, 4), // "play"
QT_MOC_LITERAL(32, 470, 5), // "pause"
QT_MOC_LITERAL(33, 476, 4), // "stop"
QT_MOC_LITERAL(34, 481, 4), // "seek"
QT_MOC_LITERAL(35, 486, 8), // "position"
QT_MOC_LITERAL(36, 495, 19), // "supportedAudioRoles"
QT_MOC_LITERAL(37, 515, 8), // "QJSValue"
QT_MOC_LITERAL(38, 524, 8), // "_q_error"
QT_MOC_LITERAL(39, 533, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(40, 553, 22), // "_q_availabilityChanged"
QT_MOC_LITERAL(41, 576, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(42, 608, 16), // "_q_statusChanged"
QT_MOC_LITERAL(43, 625, 15), // "_q_mediaChanged"
QT_MOC_LITERAL(44, 641, 13), // "QMediaContent"
QT_MOC_LITERAL(45, 655, 6), // "source"
QT_MOC_LITERAL(46, 662, 8), // "playlist"
QT_MOC_LITERAL(47, 671, 21), // "QDeclarativePlaylist*"
QT_MOC_LITERAL(48, 693, 5), // "loops"
QT_MOC_LITERAL(49, 699, 13), // "playbackState"
QT_MOC_LITERAL(50, 713, 13), // "PlaybackState"
QT_MOC_LITERAL(51, 727, 8), // "autoPlay"
QT_MOC_LITERAL(52, 736, 8), // "autoLoad"
QT_MOC_LITERAL(53, 745, 6), // "status"
QT_MOC_LITERAL(54, 752, 6), // "Status"
QT_MOC_LITERAL(55, 759, 8), // "duration"
QT_MOC_LITERAL(56, 768, 6), // "volume"
QT_MOC_LITERAL(57, 775, 5), // "muted"
QT_MOC_LITERAL(58, 781, 8), // "hasAudio"
QT_MOC_LITERAL(59, 790, 8), // "hasVideo"
QT_MOC_LITERAL(60, 799, 14), // "bufferProgress"
QT_MOC_LITERAL(61, 814, 8), // "seekable"
QT_MOC_LITERAL(62, 823, 12), // "playbackRate"
QT_MOC_LITERAL(63, 836, 5), // "Error"
QT_MOC_LITERAL(64, 842, 8), // "metaData"
QT_MOC_LITERAL(65, 851, 26), // "QDeclarativeMediaMetaData*"
QT_MOC_LITERAL(66, 878, 11), // "mediaObject"
QT_MOC_LITERAL(67, 890, 9), // "audioRole"
QT_MOC_LITERAL(68, 900, 9), // "AudioRole"
QT_MOC_LITERAL(69, 910, 14), // "notifyInterval"
QT_MOC_LITERAL(70, 925, 13), // "UnknownStatus"
QT_MOC_LITERAL(71, 939, 7), // "NoMedia"
QT_MOC_LITERAL(72, 947, 7), // "Loading"
QT_MOC_LITERAL(73, 955, 6), // "Loaded"
QT_MOC_LITERAL(74, 962, 7), // "Stalled"
QT_MOC_LITERAL(75, 970, 9), // "Buffering"
QT_MOC_LITERAL(76, 980, 8), // "Buffered"
QT_MOC_LITERAL(77, 989, 10), // "EndOfMedia"
QT_MOC_LITERAL(78, 1000, 12), // "InvalidMedia"
QT_MOC_LITERAL(79, 1013, 7), // "NoError"
QT_MOC_LITERAL(80, 1021, 13), // "ResourceError"
QT_MOC_LITERAL(81, 1035, 11), // "FormatError"
QT_MOC_LITERAL(82, 1047, 12), // "NetworkError"
QT_MOC_LITERAL(83, 1060, 12), // "AccessDenied"
QT_MOC_LITERAL(84, 1073, 14), // "ServiceMissing"
QT_MOC_LITERAL(85, 1088, 4), // "Loop"
QT_MOC_LITERAL(86, 1093, 8), // "Infinite"
QT_MOC_LITERAL(87, 1102, 12), // "PlayingState"
QT_MOC_LITERAL(88, 1115, 11), // "PausedState"
QT_MOC_LITERAL(89, 1127, 12), // "StoppedState"
QT_MOC_LITERAL(90, 1140, 9), // "Available"
QT_MOC_LITERAL(91, 1150, 4), // "Busy"
QT_MOC_LITERAL(92, 1155, 11), // "Unavailable"
QT_MOC_LITERAL(93, 1167, 15), // "ResourceMissing"
QT_MOC_LITERAL(94, 1183, 11), // "UnknownRole"
QT_MOC_LITERAL(95, 1195, 17), // "AccessibilityRole"
QT_MOC_LITERAL(96, 1213, 9), // "AlarmRole"
QT_MOC_LITERAL(97, 1223, 8), // "GameRole"
QT_MOC_LITERAL(98, 1232, 9), // "MusicRole"
QT_MOC_LITERAL(99, 1242, 16), // "NotificationRole"
QT_MOC_LITERAL(100, 1259, 12), // "RingtoneRole"
QT_MOC_LITERAL(101, 1272, 16), // "SonificationRole"
QT_MOC_LITERAL(102, 1289, 9), // "VideoRole"
QT_MOC_LITERAL(103, 1299, 22) // "VoiceCommunicationRole"

    },
    "QDeclarativeAudio\0playlistChanged\0\0"
    "sourceChanged\0autoLoadChanged\0"
    "loopCountChanged\0playbackStateChanged\0"
    "autoPlayChanged\0paused\0stopped\0playing\0"
    "statusChanged\0durationChanged\0"
    "positionChanged\0volumeChanged\0"
    "mutedChanged\0hasAudioChanged\0"
    "hasVideoChanged\0bufferProgressChanged\0"
    "seekableChanged\0playbackRateChanged\0"
    "audioRoleChanged\0availabilityChanged\0"
    "Availability\0availability\0errorChanged\0"
    "error\0QDeclarativeAudio::Error\0"
    "errorString\0mediaObjectChanged\0"
    "notifyIntervalChanged\0play\0pause\0stop\0"
    "seek\0position\0supportedAudioRoles\0"
    "QJSValue\0_q_error\0QMediaPlayer::Error\0"
    "_q_availabilityChanged\0"
    "QMultimedia::AvailabilityStatus\0"
    "_q_statusChanged\0_q_mediaChanged\0"
    "QMediaContent\0source\0playlist\0"
    "QDeclarativePlaylist*\0loops\0playbackState\0"
    "PlaybackState\0autoPlay\0autoLoad\0status\0"
    "Status\0duration\0volume\0muted\0hasAudio\0"
    "hasVideo\0bufferProgress\0seekable\0"
    "playbackRate\0Error\0metaData\0"
    "QDeclarativeMediaMetaData*\0mediaObject\0"
    "audioRole\0AudioRole\0notifyInterval\0"
    "UnknownStatus\0NoMedia\0Loading\0Loaded\0"
    "Stalled\0Buffering\0Buffered\0EndOfMedia\0"
    "InvalidMedia\0NoError\0ResourceError\0"
    "FormatError\0NetworkError\0AccessDenied\0"
    "ServiceMissing\0Loop\0Infinite\0PlayingState\0"
    "PausedState\0StoppedState\0Available\0"
    "Busy\0Unavailable\0ResourceMissing\0"
    "UnknownRole\0AccessibilityRole\0AlarmRole\0"
    "GameRole\0MusicRole\0NotificationRole\0"
    "RingtoneRole\0SonificationRole\0VideoRole\0"
    "VoiceCommunicationRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeAudio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      23,  266, // properties
       6,  381, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  218,    2, 0x86 /* Public | MethodRevisioned */,
       3,    0,  219,    2, 0x06 /* Public */,
       4,    0,  220,    2, 0x06 /* Public */,
       5,    0,  221,    2, 0x06 /* Public */,
       6,    0,  222,    2, 0x06 /* Public */,
       7,    0,  223,    2, 0x06 /* Public */,
       8,    0,  224,    2, 0x06 /* Public */,
       9,    0,  225,    2, 0x06 /* Public */,
      10,    0,  226,    2, 0x06 /* Public */,
      11,    0,  227,    2, 0x06 /* Public */,
      12,    0,  228,    2, 0x06 /* Public */,
      13,    0,  229,    2, 0x06 /* Public */,
      14,    0,  230,    2, 0x06 /* Public */,
      15,    0,  231,    2, 0x06 /* Public */,
      16,    0,  232,    2, 0x06 /* Public */,
      17,    0,  233,    2, 0x06 /* Public */,
      18,    0,  234,    2, 0x06 /* Public */,
      19,    0,  235,    2, 0x06 /* Public */,
      20,    0,  236,    2, 0x06 /* Public */,
      21,    0,  237,    2, 0x86 /* Public | MethodRevisioned */,
      22,    1,  238,    2, 0x06 /* Public */,
      25,    0,  241,    2, 0x06 /* Public */,
      26,    2,  242,    2, 0x06 /* Public */,
      29,    0,  247,    2, 0x06 /* Public */,
      30,    0,  248,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  249,    2, 0x0a /* Public */,
      32,    0,  250,    2, 0x0a /* Public */,
      33,    0,  251,    2, 0x0a /* Public */,
      34,    1,  252,    2, 0x0a /* Public */,
      36,    0,  255,    2, 0x8a /* Public | MethodRevisioned */,
      38,    1,  256,    2, 0x08 /* Private */,
      40,    1,  259,    2, 0x08 /* Private */,
      42,    0,  262,    2, 0x08 /* Private */,
      43,    1,  263,    2, 0x08 /* Private */,

 // signals: revision
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       2,

 // slots: revision
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString,   26,   28,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    0x80000000 | 37,
    QMetaType::Void, 0x80000000 | 39,    2,
    QMetaType::Void, 0x80000000 | 41,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,    2,

 // properties: name, type, flags
      45, QMetaType::QUrl, 0x00495103,
      46, 0x80000000 | 47, 0x00c9510b,
      48, QMetaType::Int, 0x00495003,
      49, 0x80000000 | 50, 0x00495009,
      51, QMetaType::Bool, 0x00495103,
      52, QMetaType::Bool, 0x00495103,
      53, 0x80000000 | 54, 0x00495009,
      55, QMetaType::Int, 0x00495001,
      35, QMetaType::Int, 0x00495001,
      56, QMetaType::QReal, 0x00495103,
      57, QMetaType::Bool, 0x00495103,
      58, QMetaType::Bool, 0x00495001,
      59, QMetaType::Bool, 0x00495001,
      60, QMetaType::QReal, 0x00495001,
      61, QMetaType::Bool, 0x00495001,
      62, QMetaType::QReal, 0x00495103,
      26, 0x80000000 | 63, 0x00495009,
      28, QMetaType::QString, 0x00495001,
      64, 0x80000000 | 65, 0x00095409,
      66, QMetaType::QObjectStar, 0x00490001,
      24, 0x80000000 | 23, 0x00495009,
      67, 0x80000000 | 68, 0x00c9510b,
      69, QMetaType::Int, 0x00c95103,

 // properties: notify_signal_id
       1,
       0,
       3,
       4,
       5,
       2,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      21,
      21,
       0,
      23,
      20,
      19,
      24,

 // properties: revision
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
      54, 0x0,    9,  405,
      63, 0x0,    6,  423,
      85, 0x0,    1,  435,
      50, 0x0,    3,  437,
      23, 0x0,    4,  443,
      68, 0x0,   10,  451,

 // enum data: key, value
      70, uint(QDeclarativeAudio::UnknownStatus),
      71, uint(QDeclarativeAudio::NoMedia),
      72, uint(QDeclarativeAudio::Loading),
      73, uint(QDeclarativeAudio::Loaded),
      74, uint(QDeclarativeAudio::Stalled),
      75, uint(QDeclarativeAudio::Buffering),
      76, uint(QDeclarativeAudio::Buffered),
      77, uint(QDeclarativeAudio::EndOfMedia),
      78, uint(QDeclarativeAudio::InvalidMedia),
      79, uint(QDeclarativeAudio::NoError),
      80, uint(QDeclarativeAudio::ResourceError),
      81, uint(QDeclarativeAudio::FormatError),
      82, uint(QDeclarativeAudio::NetworkError),
      83, uint(QDeclarativeAudio::AccessDenied),
      84, uint(QDeclarativeAudio::ServiceMissing),
      86, uint(QDeclarativeAudio::Infinite),
      87, uint(QDeclarativeAudio::PlayingState),
      88, uint(QDeclarativeAudio::PausedState),
      89, uint(QDeclarativeAudio::StoppedState),
      90, uint(QDeclarativeAudio::Available),
      91, uint(QDeclarativeAudio::Busy),
      92, uint(QDeclarativeAudio::Unavailable),
      93, uint(QDeclarativeAudio::ResourceMissing),
      94, uint(QDeclarativeAudio::UnknownRole),
      95, uint(QDeclarativeAudio::AccessibilityRole),
      96, uint(QDeclarativeAudio::AlarmRole),
      97, uint(QDeclarativeAudio::GameRole),
      98, uint(QDeclarativeAudio::MusicRole),
      99, uint(QDeclarativeAudio::NotificationRole),
     100, uint(QDeclarativeAudio::RingtoneRole),
     101, uint(QDeclarativeAudio::SonificationRole),
     102, uint(QDeclarativeAudio::VideoRole),
     103, uint(QDeclarativeAudio::VoiceCommunicationRole),

       0        // eod
};

void QDeclarativeAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeAudio *_t = static_cast<QDeclarativeAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playlistChanged(); break;
        case 1: _t->sourceChanged(); break;
        case 2: _t->autoLoadChanged(); break;
        case 3: _t->loopCountChanged(); break;
        case 4: _t->playbackStateChanged(); break;
        case 5: _t->autoPlayChanged(); break;
        case 6: _t->paused(); break;
        case 7: _t->stopped(); break;
        case 8: _t->playing(); break;
        case 9: _t->statusChanged(); break;
        case 10: _t->durationChanged(); break;
        case 11: _t->positionChanged(); break;
        case 12: _t->volumeChanged(); break;
        case 13: _t->mutedChanged(); break;
        case 14: _t->hasAudioChanged(); break;
        case 15: _t->hasVideoChanged(); break;
        case 16: _t->bufferProgressChanged(); break;
        case 17: _t->seekableChanged(); break;
        case 18: _t->playbackRateChanged(); break;
        case 19: _t->audioRoleChanged(); break;
        case 20: _t->availabilityChanged((*reinterpret_cast< Availability(*)>(_a[1]))); break;
        case 21: _t->errorChanged(); break;
        case 22: _t->error((*reinterpret_cast< QDeclarativeAudio::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->mediaObjectChanged(); break;
        case 24: _t->notifyIntervalChanged(); break;
        case 25: _t->play(); break;
        case 26: _t->pause(); break;
        case 27: _t->stop(); break;
        case 28: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: { QJSValue _r = _t->supportedAudioRoles();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->_q_error((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 31: _t->_q_availabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 32: _t->_q_statusChanged(); break;
        case 33: _t->_q_mediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::playlistChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::sourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::autoLoadChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::loopCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::playbackStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::autoPlayChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::paused)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::stopped)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::playing)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::statusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::durationChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::positionChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::volumeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::mutedChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::hasAudioChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::hasVideoChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::bufferProgressChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::seekableChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::playbackRateChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::audioRoleChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)(Availability );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::availabilityChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::errorChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)(QDeclarativeAudio::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::error)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::mediaObjectChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudio::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudio::notifyIntervalChanged)) {
                *result = 24;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeAudio *_t = static_cast<QDeclarativeAudio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QDeclarativePlaylist**>(_v) = _t->playlist(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 3: *reinterpret_cast< PlaybackState*>(_v) = _t->playbackState(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->autoPlay(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isAutoLoad(); break;
        case 6: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->position(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->volume(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasAudio(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->bufferProgress(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isSeekable(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->playbackRate(); break;
        case 16: *reinterpret_cast< Error*>(_v) = _t->error(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 18: *reinterpret_cast< QDeclarativeMediaMetaData**>(_v) = _t->metaData(); break;
        case 19: *reinterpret_cast< QObject**>(_v) = _t->mediaObject(); break;
        case 20: *reinterpret_cast< Availability*>(_v) = _t->availability(); break;
        case 21: *reinterpret_cast< AudioRole*>(_v) = _t->audioRole(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->notifyInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeAudio *_t = static_cast<QDeclarativeAudio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setPlaylist(*reinterpret_cast< QDeclarativePlaylist**>(_v)); break;
        case 2: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAutoPlay(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAutoLoad(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setVolume(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setPlaybackRate(*reinterpret_cast< qreal*>(_v)); break;
        case 21: _t->setAudioRole(*reinterpret_cast< AudioRole*>(_v)); break;
        case 22: _t->setNotifyInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeAudio::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeAudio.data,
      qt_meta_data_QDeclarativeAudio,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAudio.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeAudio::playlistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeAudio::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeAudio::autoLoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeAudio::loopCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativeAudio::playbackStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QDeclarativeAudio::autoPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QDeclarativeAudio::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QDeclarativeAudio::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QDeclarativeAudio::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QDeclarativeAudio::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QDeclarativeAudio::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QDeclarativeAudio::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QDeclarativeAudio::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QDeclarativeAudio::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QDeclarativeAudio::hasAudioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QDeclarativeAudio::hasVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QDeclarativeAudio::bufferProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QDeclarativeAudio::seekableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QDeclarativeAudio::playbackRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QDeclarativeAudio::audioRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QDeclarativeAudio::availabilityChanged(Availability _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QDeclarativeAudio::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QDeclarativeAudio::error(QDeclarativeAudio::Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QDeclarativeAudio::mediaObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QDeclarativeAudio::notifyIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
