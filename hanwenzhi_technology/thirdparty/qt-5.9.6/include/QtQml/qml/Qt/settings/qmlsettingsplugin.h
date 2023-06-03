#pragma once


#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>

#include "qqmlsettings_p.h"

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_Qt_labs_settings);
#endif
}

QT_BEGIN_NAMESPACE

class QmlSettingsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QmlSettingsPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE