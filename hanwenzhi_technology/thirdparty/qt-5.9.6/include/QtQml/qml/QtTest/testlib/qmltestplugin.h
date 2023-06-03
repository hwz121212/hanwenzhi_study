#pragma once

#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qjsengine.h>
#include "QtQuickTest/private/quicktestresult_p.h"
#include "QtQuickTest/private/quicktestevent_p.h"
#include "private/qtestoptions_p.h"
#include "QtQuick/qquickitem.h"
#include <QtQml/private/qqmlengine_p.h>
#include <QtGui/QGuiApplication>
#include <QtGui/qstylehints.h>

QML_DECLARE_TYPE(QuickTestResult)
QML_DECLARE_TYPE(QuickTestEvent)

#include <QtDebug>

static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtTest);
#endif
}

QT_BEGIN_NAMESPACE

class QuickTestUtil : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool printAvailableFunctions READ printAvailableFunctions NOTIFY printAvailableFunctionsChanged)
    Q_PROPERTY(int dragThreshold READ dragThreshold NOTIFY dragThresholdChanged)
public:
    QuickTestUtil(QObject *parent = 0)
        :QObject(parent)
    {}

    ~QuickTestUtil()
    {}
    bool printAvailableFunctions() const
    {
        return QTest::printAvailableFunctions;
    }
    int dragThreshold() const { return QGuiApplication::styleHints()->startDragDistance(); }

Q_SIGNALS:
    void printAvailableFunctionsChanged();
    void dragThresholdChanged();

public Q_SLOTS:

	QQmlV4Handle typeName(const QVariant& v) const;

	bool compare(const QVariant& act, const QVariant& exp) const;

	QQmlV4Handle callerFile(int frameIndex = 0) const;
	int callerLine(int frameIndex = 0) const;
    
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QuickTestUtil)

QT_BEGIN_NAMESPACE

class QTestQmlModule : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    QTestQmlModule(QObject *parent = 0) : QQmlExtensionPlugin(parent) { initResources(); }
	void registerTypes(const char *uri) Q_DECL_OVERRIDE;
};

QT_END_NAMESPACE