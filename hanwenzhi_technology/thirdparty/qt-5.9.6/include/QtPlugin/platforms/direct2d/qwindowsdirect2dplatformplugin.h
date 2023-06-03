#pragma once

#include "qwindowsdirect2dintegration.h"

#include <QtGui/qpa/qplatformintegrationplugin.h>
#include <QtCore/QStringList>

QT_BEGIN_NAMESPACE

class QWindowsDirect2DIntegrationPlugin : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformIntegrationFactoryInterface_iid FILE "direct2d.json")
public:
    QPlatformIntegration *create(const QString&, const QStringList&);
};

