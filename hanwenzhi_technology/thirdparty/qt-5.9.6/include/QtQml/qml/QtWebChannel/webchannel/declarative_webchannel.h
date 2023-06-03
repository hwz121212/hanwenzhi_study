#pragma once


#include <qqml.h>
#include <QtQml/QQmlExtensionPlugin>

#include <qqmlwebchannel.h>
#include <qqmlwebchannelattached_p.h>


static void initResources()
{
#ifdef QT_STATIC
	Q_INIT_RESOURCE(qmake_QtWebChannel);
#endif
}


QT_BEGIN_NAMESPACE

class QWebChannelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QWebChannelPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
    void registerTypes(const char *uri);
};


QT_END_NAMESPACE
