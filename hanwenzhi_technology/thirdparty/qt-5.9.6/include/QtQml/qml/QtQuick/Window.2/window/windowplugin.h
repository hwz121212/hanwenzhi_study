#pragma once

#include <QtQml/qqmlextensionplugin.h>

#include <private/qquickwindowmodule_p.h>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQuick_Window_2);
#endif
}

QT_BEGIN_NAMESPACE

/*!
    \qmlmodule QtQuick.Window 2.2
    \title Qt Quick Window QML Types
    \ingroup qmlmodules
    \brief Provides QML types for window management

    This QML module contains types for creating top-level windows and accessing screen information.

    To use the types in this module, import the module with the following line:

    \code
    import QtQuick.Window 2.2
    \endcode
*/


//![class decl]
class QtQuick2WindowPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQuick2WindowPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};
//![class decl]

QT_END_NAMESPACE