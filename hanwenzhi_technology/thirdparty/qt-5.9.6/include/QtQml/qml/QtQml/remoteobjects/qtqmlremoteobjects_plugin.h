#pragma once

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QQmlExtensionPlugin>
#include <qqml.h>

QT_BEGIN_NAMESPACE

class QtQmlRemoteObjectsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtQml.RemoteObjects/1.0")

public:
	void registerTypes(const char *uri);

};

QT_END_NAMESPACE