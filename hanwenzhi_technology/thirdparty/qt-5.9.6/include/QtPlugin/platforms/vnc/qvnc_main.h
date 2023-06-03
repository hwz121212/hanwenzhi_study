#pragma once

#include <qpa/qplatformintegrationplugin.h>
#include "qvncintegration.h"
#include "qvnc_p.h"

QT_BEGIN_NAMESPACE

class QVncIntegrationPlugin : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformIntegrationFactoryInterface_iid FILE "vnc.json")
public:
    QPlatformIntegration *create(const QString&, const QStringList&) override;
};
