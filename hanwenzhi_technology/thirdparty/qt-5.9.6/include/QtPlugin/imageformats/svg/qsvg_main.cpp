#include <qimageiohandler.h>
#include <qstringlist.h>

#include "qsvg_main.h"

#if !defined(QT_NO_SVGRENDERER)

#include "qsvgiohandler.h"

#include <qiodevice.h>
#include <qbytearray.h>
#include <qdebug.h>

QT_BEGIN_NAMESPACE


QImageIOPlugin::Capabilities QSvgPlugin::capabilities(QIODevice *device, const QByteArray &format) const
{
#ifndef QT_NO_COMPRESS
    if (format == "svg" || format == "svgz")
#else
    if (format == "svg")
#endif
        return Capabilities(CanRead);
    if (!format.isEmpty())
        return 0;

    Capabilities cap;
    if (device->isReadable() && QSvgIOHandler::canRead(device))
        cap |= CanRead;
    return cap;
}

QImageIOHandler *QSvgPlugin::create(QIODevice *device, const QByteArray &format) const
{
    QSvgIOHandler *hand = new QSvgIOHandler();
    hand->setDevice(device);
    hand->setFormat(format);
    return hand;
}

QT_END_NAMESPACE

//#include "moc_qsvg_main.cpp"

#endif // !QT_NO_IMAGEFORMATPLUGIN
