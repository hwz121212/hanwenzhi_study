#include <QtGui/qgenericplugin.h>
#include "qbsdkeyboard.h"

#include "qbsdkeyboardplugin_main.h"

QT_BEGIN_NAMESPACE


QObject *QBsdKeyboardPlugin::create(const QString &key,
                                   const QString &specification)
{
    if (!key.compare(QLatin1String("BsdKeyboard"), Qt::CaseInsensitive))
        return new QBsdKeyboardHandler(key, specification);

    return nullptr;
}

QT_END_NAMESPACE

//#include "moc_qbsdkeyboardplugin_main.cpp"
