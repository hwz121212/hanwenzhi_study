#pragma once

#include "qnetworkmanagerengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#ifndef QT_NO_DBUS

QT_BEGIN_NAMESPACE

class QNetworkManagerEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "networkmanager.json")

public:
    QNetworkManagerEnginePlugin();
    ~QNetworkManagerEnginePlugin();

    QBearerEngine *create(const QString &key) const;
};


#endif // QT_NO_DBUS
