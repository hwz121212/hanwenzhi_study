#include <qpa/qplatforminputcontextplugin_p.h>

#include <QtCore/QStringList>

#include "qcomposeplatforminputcontext.h"

#include "composeplatforminputcontextplugin_main.h"

QT_BEGIN_NAMESPACE

QComposeInputContext *QComposePlatformInputContextPlugin::create(const QString &system, const QStringList &paramList)
{
    Q_UNUSED(paramList);

    if (system.compare(system, QLatin1String("compose"), Qt::CaseInsensitive) == 0
            || system.compare(system, QLatin1String("xim"), Qt::CaseInsensitive) == 0)
        return new QComposeInputContext;
    return 0;
}

QT_END_NAMESPACE

//#include "moc_composeplatforminputcontextplugin_main.cpp"
