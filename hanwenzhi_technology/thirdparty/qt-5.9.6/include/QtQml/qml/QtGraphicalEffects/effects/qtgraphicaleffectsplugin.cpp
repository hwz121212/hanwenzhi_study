#include "qtgraphicaleffectsplugin.h"



QT_BEGIN_NAMESPACE


void QtGraphicalEffectsPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtGraphicalEffects"));
	Q_UNUSED(uri);
}

QT_END_NAMESPACE

//#include "plugin.moc"
