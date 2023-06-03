#include "qwindowsdirect2dintegration.h"

#include <QtGui/qpa/qplatformintegrationplugin.h>
#include <QtCore/QStringList>

#include "qwindowsdirect2dplatformplugin.h"

QT_BEGIN_NAMESPACE

QPlatformIntegration *QWindowsDirect2DIntegrationPlugin::create(const QString& system, const QStringList& paramList)
{
    if (system.compare(system, QLatin1String("direct2d"), Qt::CaseInsensitive) == 0)
        return QWindowsDirect2DIntegration::create(paramList);
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qwindowsdirect2dplatformplugin.cpp"
