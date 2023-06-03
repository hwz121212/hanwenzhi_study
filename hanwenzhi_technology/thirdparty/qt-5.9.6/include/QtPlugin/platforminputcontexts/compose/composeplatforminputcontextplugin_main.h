#pragma once

#include <qpa/qplatforminputcontextplugin_p.h>

#include <QtCore/QStringList>

#include "qcomposeplatforminputcontext.h"

QT_BEGIN_NAMESPACE

class QComposePlatformInputContextPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "compose.json")

public:
    QComposeInputContext *create(const QString &, const QStringList &) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE