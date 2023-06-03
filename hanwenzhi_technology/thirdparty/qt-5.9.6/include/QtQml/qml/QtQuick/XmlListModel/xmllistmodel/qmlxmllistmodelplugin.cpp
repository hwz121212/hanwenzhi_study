#include "qmlxmllistmodelplugin.h"


QT_BEGIN_NAMESPACE

void QmlXmlListModelPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQuick.XmlListModel"));
	qmlRegisterType<QQuickXmlListModel>(uri, 2, 0, "XmlListModel");
	qmlRegisterType<QQuickXmlListModelRole>(uri, 2, 0, "XmlRole");
}

QT_END_NAMESPACE