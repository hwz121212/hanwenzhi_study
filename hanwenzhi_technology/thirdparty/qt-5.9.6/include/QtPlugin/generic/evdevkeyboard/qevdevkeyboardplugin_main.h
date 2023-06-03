#pragma once

#include <QtGui/qgenericplugin.h>
#include <QtInputSupport/private/qevdevkeyboardmanager_p.h>

QT_BEGIN_NAMESPACE

class QEvdevKeyboardPlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "evdevkeyboard.json")

public:
    QEvdevKeyboardPlugin();

    QObject* create(const QString &key, const QString &specification) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE