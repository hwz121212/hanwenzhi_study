#pragma once

#include "qnativewifiengine.h"
#include "platformdefs.h"

#include <QtCore/qmutex.h>
#include <QtCore/qlibrary.h>

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#ifndef QT_NO_BEARERMANAGEMENT

QT_BEGIN_NAMESPACE

class QNativeWifiEnginePlugin : public QBearerEnginePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QBearerEngineFactoryInterface" FILE "nativewifi.json")

public:
    QNativeWifiEnginePlugin();
    ~QNativeWifiEnginePlugin();

    QBearerEngine *create(const QString &key) const;
};


#endif // QT_NO_BEARERMANAGEMENT
