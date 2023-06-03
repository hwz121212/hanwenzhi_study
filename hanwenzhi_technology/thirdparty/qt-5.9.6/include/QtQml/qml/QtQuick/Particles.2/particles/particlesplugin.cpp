#include "particlesplugin.h"


QT_BEGIN_NAMESPACE


void QtQuick2ParticlesPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtQuick.Particles"));
	Q_UNUSED(uri);
	QQuickParticlesModule::defineModule();
}

QT_END_NAMESPACE