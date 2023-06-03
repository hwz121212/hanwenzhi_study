#include <QtGui/qgenericplugin.h>
#include "qbsdmouse.h"

#include "qbsdmouseplugin_main.h"

QT_BEGIN_NAMESPACE


QObject *QBsdMousePlugin::create(const QString &key, const QString &specification)
{
    if (!key.compare(QLatin1String("BsdMouse"), Qt::CaseInsensitive))
        return new QBsdMouseHandler(key, specification);

    return nullptr;
}

QT_END_NAMESPACE

//#include "moc_qbsdmouseplugin_main.cpp"
