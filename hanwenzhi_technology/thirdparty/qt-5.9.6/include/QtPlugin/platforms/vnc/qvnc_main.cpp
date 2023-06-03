#include <qpa/qplatformintegrationplugin.h>
#include "qvncintegration.h"
#include "qvnc_p.h"

QT_BEGIN_NAMESPACE

#include "qvnc_main.h"


QPlatformIntegration* QVncIntegrationPlugin::create(const QString& system, const QStringList& paramList)
{
    if (!system.compare(QLatin1String("vnc"), Qt::CaseInsensitive))
        return new QVncIntegration(paramList);

    return 0;
}

QT_END_NAMESPACE

//#include "moc_qvnc_main.cpp"

