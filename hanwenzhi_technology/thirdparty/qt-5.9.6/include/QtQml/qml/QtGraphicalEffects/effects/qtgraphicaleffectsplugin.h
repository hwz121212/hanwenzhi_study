#pragma once


#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>
#include <QtQml/qqmlengine.h>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtGraphicalEffects);
#endif
}

QT_BEGIN_NAMESPACE

class QtGraphicalEffectsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QtGraphicalEffectsPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	virtual void registerTypes(const char *uri);
};

QT_END_NAMESPACE