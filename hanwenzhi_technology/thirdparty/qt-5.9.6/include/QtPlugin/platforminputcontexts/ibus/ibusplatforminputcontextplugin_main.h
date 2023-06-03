#pragma once

#include <qpa/qplatforminputcontextplugin_p.h>
#include <QtCore/QStringList>
#include <QDBusMetaType>
#include "qibusplatforminputcontext.h"
#include "qibustypes.h"

QT_BEGIN_NAMESPACE

class QIbusPlatformInputContextPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "ibus.json")

public:
    QIBusPlatformInputContext *create(const QString&, const QStringList&) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE
