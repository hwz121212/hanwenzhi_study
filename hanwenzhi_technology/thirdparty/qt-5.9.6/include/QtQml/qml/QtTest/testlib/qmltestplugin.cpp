#include "qmltestplugin.h"


QT_BEGIN_NAMESPACE


QQmlV4Handle QuickTestUtil::typeName(const QVariant& v) const
{
	QString name(v.typeName());
	if (v.canConvert<QObject*>()) {
		QQmlType type;
		const QMetaObject *mo = v.value<QObject*>()->metaObject();
		while (!type.isValid() && mo) {
			type = QQmlMetaType::qmlType(mo);
			mo = mo->superClass();
		}
		if (type.isValid()) {
			name = type.qmlTypeName();
		}
	}

	QQmlEngine *engine = qmlEngine(this);
	QV4::ExecutionEngine *v4 = QV8Engine::getV4(engine->handle());
	QV4::Scope scope(v4);
	QV4::ScopedValue s(scope, v4->newString(name));
	return QQmlV4Handle(s);
}

bool QuickTestUtil::compare(const QVariant& act, const QVariant& exp) const {
	return act == exp;
}

QQmlV4Handle QuickTestUtil::callerFile(int frameIndex) const
{
	QQmlEngine *engine = qmlEngine(this);
	QV4::ExecutionEngine *v4 = QV8Engine::getV4(engine->handle());
	QV4::Scope scope(v4);

	QVector<QV4::StackFrame> stack = v4->stackTrace(frameIndex + 2);
	if (stack.size() > frameIndex + 1) {
		QV4::ScopedValue s(scope, v4->newString(stack.at(frameIndex + 1).source));
		return QQmlV4Handle(s);
	}
	return QQmlV4Handle();
}

int QuickTestUtil::callerLine(int frameIndex) const
{
	QQmlEngine *engine = qmlEngine(this);
	QV4::ExecutionEngine *v4 = QV8Engine::getV4(engine->handle());

	QVector<QV4::StackFrame> stack = v4->stackTrace(frameIndex + 2);
	if (stack.size() > frameIndex + 1)
		return stack.at(frameIndex + 1).line;
	return -1;
}



QT_END_NAMESPACE



QT_BEGIN_NAMESPACE


void QTestQmlModule::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("QtTest"));
	qmlRegisterType<QuickTestResult, 0>(uri, 1, 0, "TestResult");
	qmlRegisterType<QuickTestResult, 1>(uri, 1, 1, "TestResult");
	qmlRegisterType<QuickTestEvent>(uri, 1, 0, "TestEvent");
	qmlRegisterType<QuickTestUtil>(uri, 1, 0, "TestUtil");
	qmlRegisterType<QQuickTouchEventSequence>();
}


QT_END_NAMESPACE