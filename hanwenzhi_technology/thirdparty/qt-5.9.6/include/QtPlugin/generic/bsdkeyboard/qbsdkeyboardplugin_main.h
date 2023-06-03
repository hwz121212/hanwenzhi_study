#pragma once

#include <QtGui/qgenericplugin.h>
#include "qbsdkeyboard.h"

QT_BEGIN_NAMESPACE

class QBsdKeyboardPlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QGenericPluginFactoryInterface" FILE "bsdkeyboard.json")

public:
    QObject *create(const QString &key, const QString &specification) override;
};
