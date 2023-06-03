#pragma once

#include <QtQml/qqmlextensionplugin.h>

#include <private/qqmlmodelsmodule_p.h>


static void initResources()
{
#ifdef QT_STATIC
	Q_INIT_RESOURCE(qmake_QtQml_Models_2);
#endif

}

QT_BEGIN_NAMESPACE

/*!
    \qmlmodule QtQml.Models 2.2
    \title Qt QML Models QML Types
    \ingroup qmlmodules
    \brief Provides QML types for data models
    \since 5.1

    This QML module contains types for defining data models in QML.

    To use the types in this module, import the module with the following line:

    \code
    import QtQml.Models 2.2
    \endcode

    Note that QtQml.Models module started at version 2.1 to match the version
    of the parent module, \l{Qt QML}.
*/



//![class decl]
class QtQmlModelsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQmlModelsPlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};
//![class decl]

QT_END_NAMESPACE
