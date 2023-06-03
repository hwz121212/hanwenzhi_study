#pragma once


#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>

#include <QtWebView/private/qquickwebviewloadrequest_p.h>
#include <QtWebView/private/qquickwebview_p.h>


QT_BEGIN_NAMESPACE

class QWebViewModule : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
	QWebViewModule(QObject *parent = 0);
	void registerTypes(const char *uri);

	void initializeEngine(QQmlEngine *engine, const char *uri);
};

QT_END_NAMESPACE



