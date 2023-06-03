#include "qcorewlanengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>
#include "qcorewlanbearer_main.h"

#ifndef QT_NO_BEARERMANAGEMENT

QT_BEGIN_NAMESPACE

QCoreWlanEnginePlugin::QCoreWlanEnginePlugin()
{
}

QCoreWlanEnginePlugin::~QCoreWlanEnginePlugin()
{
}

QBearerEngine *QCoreWlanEnginePlugin::create(const QString &key) const
{
    if (key == QLatin1String("corewlan"))
        return new QCoreWlanEngine;
    else
        return 0;
}

QT_END_NAMESPACE

//#include "moc_qcorewlanbearer_main.cpp"

#endif // QT_NO_BEARERMANAGEMENT
