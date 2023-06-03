#include <QtGui/qgenericplugin.h>
#include <QtInputSupport/private/qevdevmousemanager_p.h>

#include "qevdevmouseplugin_main.h"

QT_BEGIN_NAMESPACE


QEvdevMousePlugin::QEvdevMousePlugin()
    : QGenericPlugin()
{
}

QObject* QEvdevMousePlugin::create(const QString &key,
                                   const QString &specification)
{
    if (!key.compare(QLatin1String("EvdevMouse"), Qt::CaseInsensitive))
        return new QEvdevMouseManager(key, specification);
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qevdevmouseplugin_main.cpp"
