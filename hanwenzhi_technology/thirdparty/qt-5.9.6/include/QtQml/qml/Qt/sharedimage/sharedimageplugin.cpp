#include "sharedimageplugin.h"


QT_BEGIN_NAMESPACE


void QtQuickSharedImagePlugin::registerTypes(const char *uri) 
{
	Q_ASSERT(uri == QStringLiteral("Qt.labs.sharedimage"));
	qmlRegisterModule(uri, 1, 0);
}

void QtQuickSharedImagePlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
	Q_UNUSED(uri);
	engine->addImageProvider("shared", new SharedImageProvider);
}


QT_END_NAMESPACE