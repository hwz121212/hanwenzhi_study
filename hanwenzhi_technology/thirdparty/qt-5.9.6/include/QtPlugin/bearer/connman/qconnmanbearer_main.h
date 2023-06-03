#pragma once

#include "qconnmanengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#ifndef QT_NO_DBUS

QT_BEGIN_NAMESPACE

class QConnmanEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "connman.json")

public:
    QConnmanEnginePlugin();
    ~QConnmanEnginePlugin();

    QBearerEngine *create(const QString &key) const;
};


#endif
