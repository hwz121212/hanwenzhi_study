#include "qnlaengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#include "qnlabearer_main.h"

QT_BEGIN_NAMESPACE

QNlaEnginePlugin::QNlaEnginePlugin()
{
}

QNlaEnginePlugin::~QNlaEnginePlugin()
{
}

QBearerEngine *QNlaEnginePlugin::create(const QString &key) const
{
    if (key == QLatin1String("nla"))
        return new QNlaEngine;
    else
        return 0;
}

QT_END_NAMESPACE

//#include "moc_qnlabearer_main.cpp"
