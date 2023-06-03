#pragma once

#include "finalstate.h"
#include "signaltransition.h"
#include "state.h"
#include "statemachine.h"
#include "timeouttransition.h"

#include <QHistoryState>
#include <QQmlExtensionPlugin>
#include <qqml.h>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtQml_StateMachine);
#endif
}

QT_BEGIN_NAMESPACE

class QtQmlStateMachinePlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QtQmlStateMachinePlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE