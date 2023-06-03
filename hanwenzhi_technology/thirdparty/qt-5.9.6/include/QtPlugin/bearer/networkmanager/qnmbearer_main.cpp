#include "qnetworkmanagerengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#include "qnmbearer_main.h"

#ifndef QT_NO_DBUS

QT_BEGIN_NAMESPACE


QNetworkManagerEnginePlugin::QNetworkManagerEnginePlugin()
{
}

QNetworkManagerEnginePlugin::~QNetworkManagerEnginePlugin()
{
}

QBearerEngine *QNetworkManagerEnginePlugin::create(const QString &key) const
{
    if (key == QLatin1String("networkmanager")) {
        QNetworkManagerEngine *engine = new QNetworkManagerEngine;
        return engine;
    }

    return 0;
}

QT_END_NAMESPACE

//#include "qnmbearer_main.cpp"

#endif // QT_NO_DBUS
