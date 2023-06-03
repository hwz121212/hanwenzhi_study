#pragma once

#include <qpa/qplatformintegrationplugin.h>
#include "qminimalintegration.h"

QT_BEGIN_NAMESPACE

class QMinimalIntegrationPlugin : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformIntegrationFactoryInterface_iid FILE "minimal.json")
public:
    QPlatformIntegration *create(const QString&, const QStringList&) Q_DECL_OVERRIDE;
};
