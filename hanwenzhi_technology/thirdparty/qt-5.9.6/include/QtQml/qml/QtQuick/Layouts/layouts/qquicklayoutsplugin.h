#pragma once

#include <QtQml/qqmlextensionplugin.h>

#include "qquicklinearlayout_p.h"
#include "qquickstacklayout_p.h"

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQuick_Layouts);
#endif
}

QT_BEGIN_NAMESPACE

//![class decl]
class QtQuickLayoutsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQuickLayoutsPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent)
    {
        initResources();
    }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};
//![class decl]

QT_END_NAMESPACE