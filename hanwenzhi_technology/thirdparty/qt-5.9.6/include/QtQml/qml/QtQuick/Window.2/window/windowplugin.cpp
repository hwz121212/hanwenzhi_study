#include "windowplugin.h"


QT_BEGIN_NAMESPACE


void QtQuick2WindowPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQuick.Window"));
	Q_UNUSED(uri);
	QQuickWindowModule::defineModule();
}

QT_END_NAMESPACE