#include <qpa/qplatformintegrationplugin.h>
#include "qoffscreenintegration.h"

#include "qoffscreen_main.h"

QT_BEGIN_NAMESPACE

QPlatformIntegration *QOffscreenIntegrationPlugin::create(const QString& system, const QStringList& paramList)
{
    Q_UNUSED(paramList);
    if (!system.compare(QLatin1String("offscreen"), Qt::CaseInsensitive))
        return QOffscreenIntegration::createOffscreenIntegration();

    return 0;
}

QT_END_NAMESPACE

//#include "moc_qoffscreen_main.cpp"
