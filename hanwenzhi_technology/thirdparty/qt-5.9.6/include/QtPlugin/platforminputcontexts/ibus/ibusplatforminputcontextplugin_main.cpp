#include <qpa/qplatforminputcontextplugin_p.h>
#include <QtCore/QStringList>
#include <QDBusMetaType>
#include "qibusplatforminputcontext.h"
#include "qibustypes.h"

#include "ibusplatforminputcontextplugin_main.h"

QT_BEGIN_NAMESPACE

QIBusPlatformInputContext *QIbusPlatformInputContextPlugin::create(const QString& system, const QStringList& paramList)
{
    Q_UNUSED(paramList);

    if (system.compare(system, QLatin1String("ibus"), Qt::CaseInsensitive) == 0) {
        qDBusRegisterMetaType<QIBusAttribute>();
        qDBusRegisterMetaType<QIBusAttributeList>();
        qDBusRegisterMetaType<QIBusText>();
        return new QIBusPlatformInputContext;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_ibusplatforminputcontextplugin_main.cpp"
