#pragma once


#include "qgraphicsvideoitem.h"
#include "qpaintervideosurface_p.h"

#include <qmediaobject.h>
#include <qmediaservice.h>
#include <qvideorenderercontrol.h>
#include <qvideosurfaceformat.h>

#include <QtCore/qcoreevent.h>
#include <QtCore/qpointer.h>

#if QT_CONFIG(opengl)
#include <QtOpenGL/qgl.h>
#endif

#include <QtWidgets/qgraphicsitem.h>

#include <QtMultimediaWidgets/qvideowidget.h>
#include <QtMultimedia/qmediabindableinterface.h>


QT_BEGIN_NAMESPACE


class QGraphicsVideoItemPrivate
{
public:
	QGraphicsVideoItemPrivate()
		: q_ptr(0)
		, surface(0)
		, mediaObject(0)
		, service(0)
		, rendererControl(0)
		, aspectRatioMode(Qt::KeepAspectRatio)
		, updatePaintDevice(true)
		, rect(0.0, 0.0, 320, 240)
	{
	}

	QGraphicsVideoItem *q_ptr;

	QPainterVideoSurface *surface;
	QPointer<QMediaObject> mediaObject;
	QMediaService *service;
	QVideoRendererControl *rendererControl;
	Qt::AspectRatioMode aspectRatioMode;
	bool updatePaintDevice;
	QRectF rect;
	QRectF boundingRect;
	QRectF sourceRect;
	QSizeF nativeSize;

	void clearService();
	void updateRects();

	void _q_present();
	void _q_formatChanged(const QVideoSurfaceFormat &format);
	void _q_updateNativeSize();
	void _q_serviceDestroyed();
};


QT_END_NAMESPACE
