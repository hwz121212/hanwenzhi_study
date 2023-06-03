#include "modelsplugin.h"




QT_BEGIN_NAMESPACE


void QtQmlModelsPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQml.Models"));
	Q_UNUSED(uri);
	QQmlModelsModule::defineModule();
}

QT_END_NAMESPACE
