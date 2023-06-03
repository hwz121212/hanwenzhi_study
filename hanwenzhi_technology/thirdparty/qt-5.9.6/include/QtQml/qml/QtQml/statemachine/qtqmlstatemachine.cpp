#include "qtqmlstatemachine.h"


QT_BEGIN_NAMESPACE


void QtQmlStateMachinePlugin::registerTypes(const char *uri)
{
	qmlRegisterType<State>(uri, 1, 0, "State");
	qmlRegisterType<StateMachine>(uri, 1, 0, "StateMachine");
	qmlRegisterType<QHistoryState>(uri, 1, 0, "HistoryState");
	qmlRegisterType<FinalState>(uri, 1, 0, "FinalState");
	qmlRegisterUncreatableType<QState>(uri, 1, 0, "QState", "Don't use this, use State instead");
	qmlRegisterUncreatableType<QAbstractState>(uri, 1, 0, "QAbstractState", "Don't use this, use State instead");
	qmlRegisterUncreatableType<QSignalTransition>(uri, 1, 0, "QSignalTransition", "Don't use this, use SignalTransition instead");
	qmlRegisterCustomType<SignalTransition>(uri, 1, 0, "SignalTransition", new SignalTransitionParser);
	qmlRegisterType<TimeoutTransition>(uri, 1, 0, "TimeoutTransition");
	qmlProtectModule(uri, 1);
}

QT_END_NAMESPACE