#pragma once

#include "qnlaengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

QT_BEGIN_NAMESPACE

class QNlaEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "nla.json")

public:
    QNlaEnginePlugin();
    ~QNlaEnginePlugin();

    QBearerEngine *create(const QString &key) const;
};


QT_END_NAMESPACE
