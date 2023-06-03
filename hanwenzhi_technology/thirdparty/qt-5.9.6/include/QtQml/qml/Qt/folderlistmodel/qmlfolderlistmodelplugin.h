#pragma once


#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>

#include "qquickfolderlistmodel.h"

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_Qt_labs_folderlistmodel);
#endif
}

QT_BEGIN_NAMESPACE

//![class decl]
class QmlFolderListModelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QmlFolderListModelPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};
//![class decl]

QT_END_NAMESPACE