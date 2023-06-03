#include <qpa/qplatformintegrationplugin.h>
#include <QtCore/QStringList>

#include "qwindowsgdiintegration.h"

#include "qwindows_main.h"

QT_BEGIN_NAMESPACE


QPlatformIntegration *QWindowsIntegrationPlugin::create(const QString& system, const QStringList& paramList, int &, char **)
{
    if (system.compare(system, QLatin1String("windows"), Qt::CaseInsensitive) == 0)
        return new QWindowsGdiIntegration(paramList);
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qwindows_main.cpp"
