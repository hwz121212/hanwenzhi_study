#pragma once

#include <QtGui/qgenericplugin.h>
#include "qbsdmouse.h"

QT_BEGIN_NAMESPACE

class QBsdMousePlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QGenericPluginFactoryInterface" FILE "bsdmouse.json")

public:
    QObject *create(const QString &key, const QString &specification) override;
};
