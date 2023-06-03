#include "webview.h"


static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtWebView);
#endif
}

QT_BEGIN_NAMESPACE


QWebViewModule::QWebViewModule(QObject *parent) : QQmlExtensionPlugin(parent) 
{ 
	initResources(); 
}

void QWebViewModule::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtWebView"));

	// @uri QtWebView
	const QString &msg = QObject::tr("Cannot create separate instance of WebViewLoadRequest");
	qmlRegisterType<QQuickWebView>(uri, 1, 0, "WebView");
	qmlRegisterType<QQuickWebView, 1>(uri, 1, 1, "WebView");
	qmlRegisterUncreatableType<QQuickWebViewLoadRequest>(uri, 1, 1, "WebViewLoadRequest", msg);
}

void QWebViewModule::initializeEngine(QQmlEngine *engine, const char *uri)
{
	Q_UNUSED(uri);
	Q_UNUSED(engine);
}


QT_END_NAMESPACE



