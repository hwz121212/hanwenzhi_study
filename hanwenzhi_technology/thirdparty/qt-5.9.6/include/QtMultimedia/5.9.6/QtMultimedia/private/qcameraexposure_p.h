#pragma once


#include "qcameraexposure.h"
#include "qmediaobject_p.h"

#include <qcamera.h>
#include <qcameraexposurecontrol.h>
#include <qcameraflashcontrol.h>

#include <QtCore/QMetaObject>
#include <QtCore/QDebug>

QT_BEGIN_NAMESPACE

/*!
    \class QCameraExposure


    \brief The QCameraExposure class provides interface for exposure related camera settings.

    \inmodule QtMultimedia
    \ingroup multimedia
    \ingroup multimedia_camera

*/

//#define DEBUG_EXPOSURE_CHANGES 1


class QCameraExposurePrivate
{
    Q_DECLARE_NON_CONST_PUBLIC(QCameraExposure)
public:
    void initControls();
    QCameraExposure *q_ptr;

    template<typename T> T actualExposureParameter(QCameraExposureControl::ExposureParameter parameter, const T &defaultValue) const;
    template<typename T> T requestedExposureParameter(QCameraExposureControl::ExposureParameter parameter, const T &defaultValue) const;
    template<typename T> void setExposureParameter(QCameraExposureControl::ExposureParameter parameter, const T &value);
    void resetExposureParameter(QCameraExposureControl::ExposureParameter parameter);

    QCamera *camera;
    QCameraExposureControl *exposureControl;
    QCameraFlashControl *flashControl;

    void _q_exposureParameterChanged(int parameter);
    void _q_exposureParameterRangeChanged(int parameter);
};

QT_END_NAMESPACE
