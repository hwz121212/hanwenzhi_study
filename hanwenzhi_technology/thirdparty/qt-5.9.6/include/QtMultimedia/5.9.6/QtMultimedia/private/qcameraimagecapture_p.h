#pragma once


#include <qcameraimagecapture.h>
#include <qcameraimagecapturecontrol.h>
#include <qmediaencodersettings.h>
#include <qcameracapturedestinationcontrol.h>
#include <qcameracapturebufferformatcontrol.h>

#include <qimageencodercontrol.h>
#include "qmediaobject_p.h"
#include <qmediaservice.h>
#include <qcamera.h>
#include <qcameracontrol.h>
#include <QtCore/qdebug.h>
#include <QtCore/qurl.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qmetaobject.h>

QT_BEGIN_NAMESPACE

/*!
    \class QCameraImageCapture
    \inmodule QtMultimedia
    \ingroup multimedia
    \ingroup multimedia_camera


    \brief The QCameraImageCapture class is used for the recording of media content.

    The QCameraImageCapture class is a high level images recording class.
    It's not intended to be used alone but for accessing the media
    recording functions of other media objects, like QCamera.

    \snippet multimedia-snippets/camera.cpp Camera

    \snippet multimedia-snippets/camera.cpp Camera keys

    \sa QCamera
*/

/*!
    \enum QCameraImageCapture::CaptureDestination

    \value CaptureToFile  Capture the image to a file.
    \value CaptureToBuffer  Capture the image to a buffer for further processing.
*/


class QCameraImageCapturePrivate
{
    Q_DECLARE_NON_CONST_PUBLIC(QCameraImageCapture)
public:
    QCameraImageCapturePrivate();

    QMediaObject *mediaObject;

    QCameraImageCaptureControl *control;
    QImageEncoderControl *encoderControl;
    QCameraCaptureDestinationControl *captureDestinationControl;
    QCameraCaptureBufferFormatControl *bufferFormatControl;

    QCameraImageCapture::Error error;
    QString errorString;

    void _q_error(int id, int error, const QString &errorString);
    void _q_readyChanged(bool);
    void _q_serviceDestroyed();

    void unsetError() { error = QCameraImageCapture::NoError; errorString.clear(); }

    QCameraImageCapture *q_ptr;
};

QT_END_NAMESPACE

