#include "qmlsettingsplugin.h"


QT_BEGIN_NAMESPACE


void QmlSettingsPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QByteArray(uri) == QByteArray("Qt.labs.settings"));
	qmlRegisterType<QQmlSettings>(uri, 1, 0, "Settings");
}

QT_END_NAMESPACE