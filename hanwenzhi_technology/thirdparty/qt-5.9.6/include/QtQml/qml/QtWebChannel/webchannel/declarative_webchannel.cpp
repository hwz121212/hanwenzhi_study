#include "declarative_webchannel.h"



QT_BEGIN_NAMESPACE


void QWebChannelPlugin::registerTypes(const char *uri)
{
    int major = 1;
    int minor = 0;
    qmlRegisterType<QQmlWebChannel>(uri, major, minor, "WebChannel");
}

QT_END_NAMESPACE