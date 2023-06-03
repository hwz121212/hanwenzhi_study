#include <qpa/qplatformintegrationplugin.h>
#include "qminimalintegration.h"

#include "qminimal_main.h"

QT_BEGIN_NAMESPACE


QPlatformIntegration *QMinimalIntegrationPlugin::create(const QString& system, const QStringList& paramList)
{
    if (!system.compare(QLatin1String("minimal"), Qt::CaseInsensitive))
        return new QMinimalIntegration(paramList);

    return 0;
}

QT_END_NAMESPACE

//#include "moc_qminimal_main.cpp"
