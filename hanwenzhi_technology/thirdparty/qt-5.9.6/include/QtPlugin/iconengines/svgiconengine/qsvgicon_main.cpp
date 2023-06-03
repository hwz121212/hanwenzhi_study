#include <qiconengineplugin.h>
#include <qstringlist.h>

#include "qsvgiconengine.h"

#include <qiodevice.h>
#include <qbytearray.h>
#include <qdebug.h>

#include "qsvgicon_main.h"

QT_BEGIN_NAMESPACE


QIconEngine *QSvgIconPlugin::create(const QString &file)
{
    QSvgIconEngine *engine = new QSvgIconEngine;
    if (!file.isNull())
        engine->addFile(file, QSize(), QIcon::Normal, QIcon::Off);
    return engine;
}

QT_END_NAMESPACE

//#include "moc_qsvgicon_main.cpp"
