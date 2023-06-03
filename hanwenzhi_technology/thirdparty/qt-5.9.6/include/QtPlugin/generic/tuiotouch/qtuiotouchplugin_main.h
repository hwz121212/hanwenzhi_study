#pragma once

#include <QtGui/qgenericplugin.h>
#include <QCoreApplication>

#include "qtuiohandler_p.h"

QT_BEGIN_NAMESPACE

class QTuioTouchPlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "tuiotouch.json")

public:
    QTuioTouchPlugin();

    QObject* create(const QString &key, const QString &specification);
};
