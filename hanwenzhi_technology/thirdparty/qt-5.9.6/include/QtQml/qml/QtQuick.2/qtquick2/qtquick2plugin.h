#pragma once

#include <QtQml/qqmlextensionplugin.h>

#include <private/qtquick2_p.h>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQuick_2);
#endif
}

QT_BEGIN_NAMESPACE

//![class decl]
class QtQuick2Plugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQuick2Plugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;

    ~QtQuick2Plugin()
    {
        if (moduleDefined)
            QQmlQtQuick2Module::undefineModule();
    }

    bool moduleDefined = false;
};
//![class decl]

QT_END_NAMESPACE