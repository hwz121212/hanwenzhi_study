#include "qgenericengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#include "qgenericbearer_main.h"

QT_BEGIN_NAMESPACE


QGenericEnginePlugin::QGenericEnginePlugin()
{
}

QGenericEnginePlugin::~QGenericEnginePlugin()
{
}

QBearerEngine *QGenericEnginePlugin::create(const QString &key) const
{
    if (key == QLatin1String("generic"))
        return new QGenericEngine;
    else
        return 0;
}

QT_END_NAMESPACE

//#include "moc_qgenericbearer_main.cpp"
