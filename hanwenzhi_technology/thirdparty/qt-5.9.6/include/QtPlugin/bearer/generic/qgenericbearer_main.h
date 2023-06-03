#pragma once
#include "qgenericengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

QT_BEGIN_NAMESPACE

class QGenericEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "generic.json")

public:
    QGenericEnginePlugin();
    ~QGenericEnginePlugin();

    QBearerEngine *create(const QString &key) const Q_DECL_OVERRIDE;
};
