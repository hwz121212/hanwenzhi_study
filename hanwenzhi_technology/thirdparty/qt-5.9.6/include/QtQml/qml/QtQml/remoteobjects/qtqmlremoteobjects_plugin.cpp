#include "qtqmlremoteobjects_plugin.h"


QT_BEGIN_NAMESPACE

void QtQmlRemoteObjectsPlugin::registerTypes(const char *uri)
{
	qmlRegisterType<QRemoteObjectNode>(uri, 1, 0, "Node");
	qmlProtectModule(uri, 1);
}

QT_END_NAMESPACE
