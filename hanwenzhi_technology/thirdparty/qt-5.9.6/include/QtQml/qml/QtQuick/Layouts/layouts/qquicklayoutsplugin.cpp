#include "qquicklayoutsplugin.h"


QT_BEGIN_NAMESPACE


void QtQuickLayoutsPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQuick.Layouts"));
	Q_UNUSED(uri);

	qmlRegisterType<QQuickRowLayout>(uri, 1, 0, "RowLayout");
	qmlRegisterType<QQuickColumnLayout>(uri, 1, 0, "ColumnLayout");
	qmlRegisterType<QQuickGridLayout>(uri, 1, 0, "GridLayout");
	qmlRegisterType<QQuickStackLayout>(uri, 1, 3, "StackLayout");
	qmlRegisterUncreatableType<QQuickLayout>(uri, 1, 0, "Layout",
		QStringLiteral("Do not create objects of type Layout"));
	qmlRegisterUncreatableType<QQuickLayout>(uri, 1, 2, "Layout",
		QStringLiteral("Do not create objects of type Layout"));
	qmlRegisterRevision<QQuickGridLayoutBase, 1>(uri, 1, 1);
}


QT_END_NAMESPACE