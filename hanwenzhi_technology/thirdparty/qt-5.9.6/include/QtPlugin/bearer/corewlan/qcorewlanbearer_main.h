#pragma once

#include "qcorewlanengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#ifndef QT_NO_BEARERMANAGEMENT

QT_BEGIN_NAMESPACE

class QCoreWlanEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "corewlan.json")

public:
    QCoreWlanEnginePlugin();
    ~QCoreWlanEnginePlugin();

    QBearerEngine *create(const QString &key) const;
};


#endif // QT_NO_BEARERMANAGEMENT
