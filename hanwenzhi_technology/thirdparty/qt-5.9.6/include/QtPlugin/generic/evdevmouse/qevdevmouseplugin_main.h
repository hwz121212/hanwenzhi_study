#pragma once

#include <QtGui/qgenericplugin.h>
#include <QtInputSupport/private/qevdevmousemanager_p.h>

QT_BEGIN_NAMESPACE

class QEvdevMousePlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "evdevmouse.json")

public:
    QEvdevMousePlugin();

    QObject* create(const QString &key, const QString &specification) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE


