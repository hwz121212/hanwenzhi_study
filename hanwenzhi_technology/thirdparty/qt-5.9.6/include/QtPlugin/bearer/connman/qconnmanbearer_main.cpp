#include "qconnmanengine.h"

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#include "qconnmanbearer_main.h"

#ifndef QT_NO_DBUS

QT_BEGIN_NAMESPACE


QConnmanEnginePlugin::QConnmanEnginePlugin()
{
}

QConnmanEnginePlugin::~QConnmanEnginePlugin()
{
}

QBearerEngine *QConnmanEnginePlugin::create(const QString &key) const
{
    if (key == QLatin1String("connman")) {
        QConnmanEngine *engine = new QConnmanEngine;
        if (engine->connmanAvailable())
            return engine;
        else
            delete engine;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qconnmanbearer_main.cpp"

#endif
