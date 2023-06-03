#pragma once

#include <QtQml/qqmlextensionplugin.h>

#include <private/qquickparticlesmodule_p.h>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQuick_Particles_2);
#endif
}

QT_BEGIN_NAMESPACE

//![class decl]
class QtQuick2ParticlesPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQuick2ParticlesPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};
//![class decl]

QT_END_NAMESPACE