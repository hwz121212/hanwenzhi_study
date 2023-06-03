#include "qtquick2plugin.h"


QT_BEGIN_NAMESPACE


void QtQuick2Plugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQuick"));
	Q_UNUSED(uri);
	moduleDefined = true;
	QQmlQtQuick2Module::defineModule();
}

QT_END_NAMESPACE