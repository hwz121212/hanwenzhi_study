/****************************************************************************
** Meta object code from reading C++ file 'qmediaplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmediaplayer_p.h"
#include "../../qmediaplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlayer_t {
    QByteArrayData data[91];
    char stringdata0[1245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlayer_t qt_meta_stringdata_QMediaPlayer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QMediaPlayer"
QT_MOC_LITERAL(1, 13, 12), // "mediaChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "QMediaContent"
QT_MOC_LITERAL(4, 41, 5), // "media"
QT_MOC_LITERAL(5, 47, 19), // "currentMediaChanged"
QT_MOC_LITERAL(6, 67, 12), // "stateChanged"
QT_MOC_LITERAL(7, 80, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(8, 100, 8), // "newState"
QT_MOC_LITERAL(9, 109, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(10, 128, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(11, 154, 6), // "status"
QT_MOC_LITERAL(12, 161, 15), // "durationChanged"
QT_MOC_LITERAL(13, 177, 8), // "duration"
QT_MOC_LITERAL(14, 186, 15), // "positionChanged"
QT_MOC_LITERAL(15, 202, 8), // "position"
QT_MOC_LITERAL(16, 211, 13), // "volumeChanged"
QT_MOC_LITERAL(17, 225, 6), // "volume"
QT_MOC_LITERAL(18, 232, 12), // "mutedChanged"
QT_MOC_LITERAL(19, 245, 5), // "muted"
QT_MOC_LITERAL(20, 251, 21), // "audioAvailableChanged"
QT_MOC_LITERAL(21, 273, 9), // "available"
QT_MOC_LITERAL(22, 283, 21), // "videoAvailableChanged"
QT_MOC_LITERAL(23, 305, 14), // "videoAvailable"
QT_MOC_LITERAL(24, 320, 19), // "bufferStatusChanged"
QT_MOC_LITERAL(25, 340, 13), // "percentFilled"
QT_MOC_LITERAL(26, 354, 15), // "seekableChanged"
QT_MOC_LITERAL(27, 370, 8), // "seekable"
QT_MOC_LITERAL(28, 379, 19), // "playbackRateChanged"
QT_MOC_LITERAL(29, 399, 4), // "rate"
QT_MOC_LITERAL(30, 404, 16), // "audioRoleChanged"
QT_MOC_LITERAL(31, 421, 12), // "QAudio::Role"
QT_MOC_LITERAL(32, 434, 4), // "role"
QT_MOC_LITERAL(33, 439, 5), // "error"
QT_MOC_LITERAL(34, 445, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(35, 465, 27), // "networkConfigurationChanged"
QT_MOC_LITERAL(36, 493, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(37, 515, 13), // "configuration"
QT_MOC_LITERAL(38, 529, 4), // "play"
QT_MOC_LITERAL(39, 534, 5), // "pause"
QT_MOC_LITERAL(40, 540, 4), // "stop"
QT_MOC_LITERAL(41, 545, 11), // "setPosition"
QT_MOC_LITERAL(42, 557, 9), // "setVolume"
QT_MOC_LITERAL(43, 567, 8), // "setMuted"
QT_MOC_LITERAL(44, 576, 15), // "setPlaybackRate"
QT_MOC_LITERAL(45, 592, 8), // "setMedia"
QT_MOC_LITERAL(46, 601, 10), // "QIODevice*"
QT_MOC_LITERAL(47, 612, 6), // "stream"
QT_MOC_LITERAL(48, 619, 11), // "setPlaylist"
QT_MOC_LITERAL(49, 631, 15), // "QMediaPlaylist*"
QT_MOC_LITERAL(50, 647, 8), // "playlist"
QT_MOC_LITERAL(51, 656, 24), // "setNetworkConfigurations"
QT_MOC_LITERAL(52, 681, 28), // "QList<QNetworkConfiguration>"
QT_MOC_LITERAL(53, 710, 14), // "configurations"
QT_MOC_LITERAL(54, 725, 15), // "_q_stateChanged"
QT_MOC_LITERAL(55, 741, 21), // "_q_mediaStatusChanged"
QT_MOC_LITERAL(56, 763, 8), // "_q_error"
QT_MOC_LITERAL(57, 772, 14), // "_q_updateMedia"
QT_MOC_LITERAL(58, 787, 20), // "_q_playlistDestroyed"
QT_MOC_LITERAL(59, 808, 21), // "_q_handleMediaChanged"
QT_MOC_LITERAL(60, 830, 23), // "_q_handlePlaylistLoaded"
QT_MOC_LITERAL(61, 854, 27), // "_q_handlePlaylistLoadFailed"
QT_MOC_LITERAL(62, 882, 12), // "currentMedia"
QT_MOC_LITERAL(63, 895, 12), // "bufferStatus"
QT_MOC_LITERAL(64, 908, 14), // "audioAvailable"
QT_MOC_LITERAL(65, 923, 12), // "playbackRate"
QT_MOC_LITERAL(66, 936, 5), // "state"
QT_MOC_LITERAL(67, 942, 5), // "State"
QT_MOC_LITERAL(68, 948, 11), // "mediaStatus"
QT_MOC_LITERAL(69, 960, 11), // "MediaStatus"
QT_MOC_LITERAL(70, 972, 9), // "audioRole"
QT_MOC_LITERAL(71, 982, 12), // "StoppedState"
QT_MOC_LITERAL(72, 995, 12), // "PlayingState"
QT_MOC_LITERAL(73, 1008, 11), // "PausedState"
QT_MOC_LITERAL(74, 1020, 18), // "UnknownMediaStatus"
QT_MOC_LITERAL(75, 1039, 7), // "NoMedia"
QT_MOC_LITERAL(76, 1047, 12), // "LoadingMedia"
QT_MOC_LITERAL(77, 1060, 11), // "LoadedMedia"
QT_MOC_LITERAL(78, 1072, 12), // "StalledMedia"
QT_MOC_LITERAL(79, 1085, 14), // "BufferingMedia"
QT_MOC_LITERAL(80, 1100, 13), // "BufferedMedia"
QT_MOC_LITERAL(81, 1114, 10), // "EndOfMedia"
QT_MOC_LITERAL(82, 1125, 12), // "InvalidMedia"
QT_MOC_LITERAL(83, 1138, 5), // "Error"
QT_MOC_LITERAL(84, 1144, 7), // "NoError"
QT_MOC_LITERAL(85, 1152, 13), // "ResourceError"
QT_MOC_LITERAL(86, 1166, 11), // "FormatError"
QT_MOC_LITERAL(87, 1178, 12), // "NetworkError"
QT_MOC_LITERAL(88, 1191, 17), // "AccessDeniedError"
QT_MOC_LITERAL(89, 1209, 19), // "ServiceMissingError"
QT_MOC_LITERAL(90, 1229, 15) // "MediaIsPlaylist"

    },
    "QMediaPlayer\0mediaChanged\0\0QMediaContent\0"
    "media\0currentMediaChanged\0stateChanged\0"
    "QMediaPlayer::State\0newState\0"
    "mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0durationChanged\0duration\0"
    "positionChanged\0position\0volumeChanged\0"
    "volume\0mutedChanged\0muted\0"
    "audioAvailableChanged\0available\0"
    "videoAvailableChanged\0videoAvailable\0"
    "bufferStatusChanged\0percentFilled\0"
    "seekableChanged\0seekable\0playbackRateChanged\0"
    "rate\0audioRoleChanged\0QAudio::Role\0"
    "role\0error\0QMediaPlayer::Error\0"
    "networkConfigurationChanged\0"
    "QNetworkConfiguration\0configuration\0"
    "play\0pause\0stop\0setPosition\0setVolume\0"
    "setMuted\0setPlaybackRate\0setMedia\0"
    "QIODevice*\0stream\0setPlaylist\0"
    "QMediaPlaylist*\0playlist\0"
    "setNetworkConfigurations\0"
    "QList<QNetworkConfiguration>\0"
    "configurations\0_q_stateChanged\0"
    "_q_mediaStatusChanged\0_q_error\0"
    "_q_updateMedia\0_q_playlistDestroyed\0"
    "_q_handleMediaChanged\0_q_handlePlaylistLoaded\0"
    "_q_handlePlaylistLoadFailed\0currentMedia\0"
    "bufferStatus\0audioAvailable\0playbackRate\0"
    "state\0State\0mediaStatus\0MediaStatus\0"
    "audioRole\0StoppedState\0PlayingState\0"
    "PausedState\0UnknownMediaStatus\0NoMedia\0"
    "LoadingMedia\0LoadedMedia\0StalledMedia\0"
    "BufferingMedia\0BufferedMedia\0EndOfMedia\0"
    "InvalidMedia\0Error\0NoError\0ResourceError\0"
    "FormatError\0NetworkError\0AccessDeniedError\0"
    "ServiceMissingError\0MediaIsPlaylist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      16,  286, // properties
       3,  350, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       5,    1,  192,    2, 0x06 /* Public */,
       6,    1,  195,    2, 0x06 /* Public */,
       9,    1,  198,    2, 0x06 /* Public */,
      12,    1,  201,    2, 0x06 /* Public */,
      14,    1,  204,    2, 0x06 /* Public */,
      16,    1,  207,    2, 0x06 /* Public */,
      18,    1,  210,    2, 0x06 /* Public */,
      20,    1,  213,    2, 0x06 /* Public */,
      22,    1,  216,    2, 0x06 /* Public */,
      24,    1,  219,    2, 0x06 /* Public */,
      26,    1,  222,    2, 0x06 /* Public */,
      28,    1,  225,    2, 0x06 /* Public */,
      30,    1,  228,    2, 0x06 /* Public */,
      33,    1,  231,    2, 0x06 /* Public */,
      35,    1,  234,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      38,    0,  237,    2, 0x0a /* Public */,
      39,    0,  238,    2, 0x0a /* Public */,
      40,    0,  239,    2, 0x0a /* Public */,
      41,    1,  240,    2, 0x0a /* Public */,
      42,    1,  243,    2, 0x0a /* Public */,
      43,    1,  246,    2, 0x0a /* Public */,
      44,    1,  249,    2, 0x0a /* Public */,
      45,    2,  252,    2, 0x0a /* Public */,
      45,    1,  257,    2, 0x2a /* Public | MethodCloned */,
      48,    1,  260,    2, 0x0a /* Public */,
      51,    1,  263,    2, 0x0a /* Public */,
      54,    1,  266,    2, 0x08 /* Private */,
      55,    1,  269,    2, 0x08 /* Private */,
      56,    2,  272,    2, 0x08 /* Private */,
      57,    1,  277,    2, 0x08 /* Private */,
      58,    0,  280,    2, 0x08 /* Private */,
      59,    1,  281,    2, 0x08 /* Private */,
      60,    0,  284,    2, 0x08 /* Private */,
      61,    0,  285,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34,   33,
    QMetaType::Void, 0x80000000 | 36,   37,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 46,    4,   47,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      62, 0x80000000 | 3, 0x00495009,
      50, 0x80000000 | 49, 0x0009510b,
      13, QMetaType::LongLong, 0x00495001,
      15, QMetaType::LongLong, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      63, QMetaType::Int, 0x00495001,
      64, QMetaType::Bool, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      27, QMetaType::Bool, 0x00495001,
      65, QMetaType::QReal, 0x00495103,
      66, 0x80000000 | 67, 0x00495009,
      68, 0x80000000 | 69, 0x00495009,
      70, 0x80000000 | 31, 0x0009510b,
      33, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       0,
       1,
       0,
       4,
       5,
       6,
       7,
      10,
       8,
       9,
      11,
      12,
       2,
       3,
       0,
       0,

 // enums: name, flags, count, data
      67, 0x0,    3,  362,
      69, 0x0,    9,  368,
      83, 0x0,    7,  386,

 // enum data: key, value
      71, uint(QMediaPlayer::StoppedState),
      72, uint(QMediaPlayer::PlayingState),
      73, uint(QMediaPlayer::PausedState),
      74, uint(QMediaPlayer::UnknownMediaStatus),
      75, uint(QMediaPlayer::NoMedia),
      76, uint(QMediaPlayer::LoadingMedia),
      77, uint(QMediaPlayer::LoadedMedia),
      78, uint(QMediaPlayer::StalledMedia),
      79, uint(QMediaPlayer::BufferingMedia),
      80, uint(QMediaPlayer::BufferedMedia),
      81, uint(QMediaPlayer::EndOfMedia),
      82, uint(QMediaPlayer::InvalidMedia),
      84, uint(QMediaPlayer::NoError),
      85, uint(QMediaPlayer::ResourceError),
      86, uint(QMediaPlayer::FormatError),
      87, uint(QMediaPlayer::NetworkError),
      88, uint(QMediaPlayer::AccessDeniedError),
      89, uint(QMediaPlayer::ServiceMissingError),
      90, uint(QMediaPlayer::MediaIsPlaylist),

       0        // eod
};

void QMediaPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlayer *_t = static_cast<QMediaPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 1: _t->currentMediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 4: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->audioAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->videoAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->bufferStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->seekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->playbackRateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 13: _t->audioRoleChanged((*reinterpret_cast< QAudio::Role(*)>(_a[1]))); break;
        case 14: _t->error((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 15: _t->networkConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 16: _t->play(); break;
        case 17: _t->pause(); break;
        case 18: _t->stop(); break;
        case 19: _t->setPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 20: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setPlaybackRate((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 23: _t->setMedia((*reinterpret_cast< const QMediaContent(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 24: _t->setMedia((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 25: _t->setPlaylist((*reinterpret_cast< QMediaPlaylist*(*)>(_a[1]))); break;
        case 26: _t->setNetworkConfigurations((*reinterpret_cast< const QList<QNetworkConfiguration>(*)>(_a[1]))); break;
        case 27: _t->d_func()->_q_stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 28: _t->d_func()->_q_mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 29: _t->d_func()->_q_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->d_func()->_q_updateMedia((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 31: _t->d_func()->_q_playlistDestroyed(); break;
        case 32: _t->d_func()->_q_handleMediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 33: _t->d_func()->_q_handlePlaylistLoaded(); break;
        case 34: _t->d_func()->_q_handlePlaylistLoadFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Role >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QNetworkConfiguration> >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 32:
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
            typedef void (QMediaPlayer::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::mediaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::currentMediaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(QMediaPlayer::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(QMediaPlayer::MediaStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::mediaStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::durationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::positionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::volumeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::mutedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::audioAvailableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::videoAvailableChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::bufferStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::seekableChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::playbackRateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(QAudio::Role );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::audioRoleChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(QMediaPlayer::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::error)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QMediaPlayer::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayer::networkConfigurationChanged)) {
                *result = 15;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Role >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMediaPlayer *_t = static_cast<QMediaPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMediaContent*>(_v) = _t->media(); break;
        case 1: *reinterpret_cast< QMediaContent*>(_v) = _t->currentMedia(); break;
        case 2: *reinterpret_cast< QMediaPlaylist**>(_v) = _t->playlist(); break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->duration(); break;
        case 4: *reinterpret_cast< qint64*>(_v) = _t->position(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->bufferStatus(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isAudioAvailable(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isVideoAvailable(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isSeekable(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->playbackRate(); break;
        case 12: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 13: *reinterpret_cast< MediaStatus*>(_v) = _t->mediaStatus(); break;
        case 14: *reinterpret_cast< QAudio::Role*>(_v) = _t->audioRole(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMediaPlayer *_t = static_cast<QMediaPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMedia(*reinterpret_cast< QMediaContent*>(_v)); break;
        case 2: _t->setPlaylist(*reinterpret_cast< QMediaPlaylist**>(_v)); break;
        case 4: _t->setPosition(*reinterpret_cast< qint64*>(_v)); break;
        case 5: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setPlaybackRate(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setAudioRole(*reinterpret_cast< QAudio::Role*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMediaPlayer::staticMetaObject = {
    { &QMediaObject::staticMetaObject, qt_meta_stringdata_QMediaPlayer.data,
      qt_meta_data_QMediaPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlayer.stringdata0))
        return static_cast<void*>(this);
    return QMediaObject::qt_metacast(_clname);
}

int QMediaPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMediaPlayer::mediaChanged(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaPlayer::currentMediaChanged(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaPlayer::stateChanged(QMediaPlayer::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaPlayer::mediaStatusChanged(QMediaPlayer::MediaStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaPlayer::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaPlayer::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMediaPlayer::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMediaPlayer::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QMediaPlayer::audioAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMediaPlayer::videoAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMediaPlayer::bufferStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMediaPlayer::seekableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMediaPlayer::playbackRateChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMediaPlayer::audioRoleChanged(QAudio::Role _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QMediaPlayer::error(QMediaPlayer::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QMediaPlayer::networkConfigurationChanged(const QNetworkConfiguration & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
