#pragma once


#include "qaudiodecoder.h"

#include "qmediaobject_p.h"
#include <qmediaservice.h>
#include "qaudiodecodercontrol.h"
#include <private/qmediaserviceprovider_p.h>

#include <QtCore/qcoreevent.h>
#include <QtCore/qmetaobject.h>
#include <QtCore/qtimer.h>
#include <QtCore/qdebug.h>
#include <QtCore/qpointer.h>

QT_BEGIN_NAMESPACE

/*!
    \class QAudioDecoder
    \brief The QAudioDecoder class allows decoding audio.
    \inmodule QtMultimedia
    \ingroup multimedia
    \ingroup multimedia_audio

    \preliminary

    The QAudioDecoder class is a high level class for decoding local
    audio media files.  It is similar to the QMediaPlayer class except
    that audio is provided back through this API rather than routed
    directly to audio hardware, and playlists and network and streaming
    based media is not supported.

    \sa QAudioBuffer
*/


class QAudioDecoderPrivate : public QMediaObjectPrivate
{
    Q_DECLARE_NON_CONST_PUBLIC(QAudioDecoder)

public:
    QAudioDecoderPrivate()
        : provider(0)
        , control(0)
        , state(QAudioDecoder::StoppedState)
        , error(QAudioDecoder::NoError)
    {}

    QMediaServiceProvider *provider;
    QAudioDecoderControl *control;
    QAudioDecoder::State state;
    QAudioDecoder::Error error;
    QString errorString;

    void _q_stateChanged(QAudioDecoder::State state);
    void _q_error(int error, const QString &errorString);
};

QT_END_NAMESPACE

