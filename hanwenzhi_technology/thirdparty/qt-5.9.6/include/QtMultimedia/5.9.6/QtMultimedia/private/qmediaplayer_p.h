#pragma once


#include "qmediaplayer.h"
#include "qvideosurfaceoutput_p.h"

#include "qmediaobject_p.h"
#include <qmediaservice.h>
#include <qmediaplayercontrol.h>
#include <qmediaserviceprovider_p.h>
#include <qmediaplaylist.h>
#include <qmediaplaylistcontrol_p.h>
#include <qmediaplaylistsourcecontrol_p.h>
#include <qmedianetworkaccesscontrol.h>
#include <qaudiorolecontrol.h>

#include <QtCore/qcoreevent.h>
#include <QtCore/qmetaobject.h>
#include <QtCore/qtimer.h>
#include <QtCore/qdebug.h>
#include <QtCore/qpointer.h>
#include <QtCore/qfileinfo.h>
#include <QtCore/qtemporaryfile.h>

QT_BEGIN_NAMESPACE

/*!
    \class QMediaPlayer
    \brief The QMediaPlayer class allows the playing of a media source.
    \inmodule QtMultimedia
    \ingroup multimedia
    \ingroup multimedia_playback

    The QMediaPlayer class is a high level media playback class. It can be used
    to playback such content as songs, movies and internet radio. The content
    to playback is specified as a QMediaContent object, which can be thought of as a
    main or canonical URL with additional information attached. When provided
    with a QMediaContent playback may be able to commence.

    \snippet multimedia-snippets/media.cpp Player

    QVideoWidget can be used with QMediaPlayer for video rendering and QMediaPlaylist
    for accessing playlist functionality.

    \snippet multimedia-snippets/media.cpp Movie playlist

    Since QMediaPlayer is a QMediaObject, you can use several of the QMediaObject
    functions for things like:

    \list
    \li Accessing the currently playing media's metadata (\l {QMediaObject::metaData()} and \l {QMediaMetaData}{predefined meta-data keys})
    \li Checking to see if the media playback service is currently available (\l {QMediaObject::availability()})
    \endlist

    \sa QMediaObject, QMediaService, QVideoWidget, QMediaPlaylist
*/


class QMediaPlayerPrivate : public QMediaObjectPrivate
{
    Q_DECLARE_NON_CONST_PUBLIC(QMediaPlayer)

public:
    QMediaPlayerPrivate()
        : provider(0)
        , control(0)
        , audioRoleControl(0)
        , playlist(0)
        , networkAccessControl(0)
        , state(QMediaPlayer::StoppedState)
        , status(QMediaPlayer::UnknownMediaStatus)
        , error(QMediaPlayer::NoError)
        , ignoreNextStatusChange(-1)
        , nestedPlaylists(0)
        , hasStreamPlaybackFeature(false)
    {}

    QMediaServiceProvider *provider;
    QMediaPlayerControl* control;
    QAudioRoleControl *audioRoleControl;
    QString errorString;

    QPointer<QObject> videoOutput;
    QMediaPlaylist *playlist;
    QMediaNetworkAccessControl *networkAccessControl;
    QVideoSurfaceOutput surfaceOutput;
    QMediaContent qrcMedia;
    QScopedPointer<QFile> qrcFile;

    QMediaContent rootMedia;
    QMediaContent pendingPlaylist;
    QMediaPlayer::State state;
    QMediaPlayer::MediaStatus status;
    QMediaPlayer::Error error;
    int ignoreNextStatusChange;
    int nestedPlaylists;
    bool hasStreamPlaybackFeature;

    QMediaPlaylist *parentPlaylist(QMediaPlaylist *pls);
    bool isInChain(const QUrl &url);

    void setMedia(const QMediaContent &media, QIODevice *stream = 0);

    void setPlaylist(QMediaPlaylist *playlist);
    void setPlaylistMedia();
    void loadPlaylist();
    void disconnectPlaylist();
    void connectPlaylist();

    void _q_stateChanged(QMediaPlayer::State state);
    void _q_mediaStatusChanged(QMediaPlayer::MediaStatus status);
    void _q_error(int error, const QString &errorString);
    void _q_updateMedia(const QMediaContent&);
    void _q_playlistDestroyed();
    void _q_handleMediaChanged(const QMediaContent&);
    void _q_handlePlaylistLoaded();
    void _q_handlePlaylistLoadFailed();
};

QT_END_NAMESPACE

