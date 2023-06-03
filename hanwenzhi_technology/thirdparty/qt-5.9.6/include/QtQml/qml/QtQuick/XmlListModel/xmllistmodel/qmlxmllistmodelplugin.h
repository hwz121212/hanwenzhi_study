#pragma once

#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>

#include "qqmlxmllistmodel_p.h"

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQuick_XmlListModel);
#endif
}

QT_BEGIN_NAMESPACE

class QmlXmlListModelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QmlXmlListModelPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE