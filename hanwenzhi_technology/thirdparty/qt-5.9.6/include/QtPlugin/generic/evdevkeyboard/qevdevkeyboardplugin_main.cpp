#include <QtGui/qgenericplugin.h>
#include <QtInputSupport/private/qevdevkeyboardmanager_p.h>

#include "qevdevkeyboardplugin_main.h"

QT_BEGIN_NAMESPACE

QEvdevKeyboardPlugin::QEvdevKeyboardPlugin()
    : QGenericPlugin()
{
}

QObject* QEvdevKeyboardPlugin::create(const QString &key,
                                                 const QString &specification)
{
    if (!key.compare(QLatin1String("EvdevKeyboard"), Qt::CaseInsensitive))
        return new QEvdevKeyboardManager(key, specification);
    return 0;
}

QT_END_NAMESPACE

#include "moc_qevdevkeyboardplugin_main.cpp"
