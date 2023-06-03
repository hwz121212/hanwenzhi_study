#include <QtGui/qgenericplugin.h>
#include <QCoreApplication>

#include "qtuiohandler_p.h"

#include "qtuiotouchplugin_main.h"

QT_BEGIN_NAMESPACE


QTuioTouchPlugin::QTuioTouchPlugin()
{
}

QObject* QTuioTouchPlugin::create(const QString &key,
                                         const QString &spec)
{
    if (!key.compare(QLatin1String("TuioTouch"), Qt::CaseInsensitive))
        return new QTuioHandler(spec);

    return 0;
}

QT_END_NAMESPACE

//#include "moc_qtuiotouchplugin_main.cpp"
