#pragma once

#include <qpa/qplatformintegrationplugin.h>
#include "qoffscreenintegration.h"

QT_BEGIN_NAMESPACE

class QOffscreenIntegrationPlugin : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformIntegrationFactoryInterface_iid FILE "offscreen.json")
public:
    QPlatformIntegration *create(const QString&, const QStringList&) Q_DECL_OVERRIDE;
};
