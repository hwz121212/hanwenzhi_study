/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtSensors module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QSENSORMANAGER_H
#define QSENSORMANAGER_H

#include <QtSensors/qsensor.h>
#include <QDebug>
#include <private/qfactoryloader_p.h>
#include <QPluginLoader>
#include "qsensorplugin.h"
#include <QStandardPaths>
#include "sensorlog_p.h"
#include <QTimer>
#include <QFile>
#include <QLoggingCategory>

QT_BEGIN_NAMESPACE

class QSensorBackend;
class QSensorBackendFactory;
class QSensorPluginInterface;
class QSensorManagerPrivate;


typedef QHash<QByteArray, QSensorBackendFactory*> FactoryForIdentifierMap;
typedef QHash<QByteArray, FactoryForIdentifierMap> BackendIdentifiersForTypeMap;



static QLoggingCategory sensorsCategory("qt.sensors");

class Q_SENSORS_EXPORT QSensorManager
{
public:
    // Register a backend (call this from a plugin)
    static void registerBackend(const QByteArray &type, const QByteArray &identifier, QSensorBackendFactory *factory);
    static void unregisterBackend(const QByteArray &type, const QByteArray &identifier);

    static bool isBackendRegistered(const QByteArray &type, const QByteArray &identifier);

    // Create a backend (uses the type and identifier set in the sensor)
    static QSensorBackend *createBackend(QSensor *sensor);

    static void setDefaultBackend(const QByteArray &type, const QByteArray &identifier);
};

class Q_SENSORS_EXPORT QSensorBackendFactory
{
public:
    virtual QSensorBackend *createBackend(QSensor *sensor) = 0;
protected:
    virtual ~QSensorBackendFactory();
};



class QSensorManagerPrivate : public QObject
{
	friend class QSensorManager;

	Q_OBJECT
public:
	enum PluginLoadingState {
		NotLoaded,
		Loading,
		Loaded
	};
	QSensorManagerPrivate()
		: loadExternalPlugins(true)
		, pluginLoadingState(NotLoaded)
		, loader(new QFactoryLoader("com.qt-project.Qt.QSensorPluginInterface/1.0", QLatin1String("/sensors")))
		, defaultIdentifierForTypeLoaded(false)
		, sensorsChanged(false)
	{
		QByteArray env = qgetenv("QT_SENSORS_LOAD_PLUGINS");
		if (env == "0") {
			loadExternalPlugins = false;
		}
	}
	bool loadExternalPlugins;
	PluginLoadingState pluginLoadingState;
	QFactoryLoader *loader;
	void loadPlugins();

	// Holds a mapping from type to available identifiers (and from there to the factory)
	BackendIdentifiersForTypeMap backendsByType;

	// Holds the default identifier
	QHash<QByteArray, QByteArray> defaultIdentifierForType;
	bool defaultIdentifierForTypeLoaded;
	void readConfigFile()
	{
		defaultIdentifierForTypeLoaded = true;
#ifdef QTSENSORS_CONFIG_PATH
		QString config = QString::fromLocal8Bit(QTSENSORS_CONFIG_PATH);
#else
		QStringList configs = QStandardPaths::standardLocations(QStandardPaths::ConfigLocation);
		if (configs.count() == 0) return; // QStandardPaths is broken?
		QString config = configs.at(configs.count() - 1);
		if (config.isEmpty()) return; // QStandardPaths is broken?
		config += QLatin1String("/QtProject/Sensors.conf");
#endif
		qCDebug(sensorsCategory) << "Loading config from" << config;
		if (!QFile::exists(config)) {
			qCDebug(sensorsCategory) << "There is no config file" << config;
			return;
		}
		QFile cfgfile(config);
		if (!cfgfile.open(QFile::ReadOnly)) {
			qCWarning(sensorsCategory) << "Can't open config file" << config;
			return;
		}

		QTextStream stream(&cfgfile);
		QString line;
		bool isconfig = false;
		while (!stream.atEnd()) {
			line = stream.readLine();
			if (!isconfig && line == QLatin1String("[Default]"))
				isconfig = true;
			else if (isconfig) {
				//read out setting line
				line.remove(' ');
				QStringList pair = line.split('=');
				if (pair.count() == 2)
					defaultIdentifierForType.insert(pair[0].toLatin1(), pair[1].toLatin1());
			}
		}
	}

	// Holds the first identifier for each type
	QHash<QByteArray, QByteArray> firstIdentifierForType;

	bool sensorsChanged;
	QList<QSensorChangesInterface*> changeListeners;
	QSet <QObject *> seenPlugins;

Q_SIGNALS:
	void availableSensorsChanged();

public Q_SLOTS:
	void emitSensorsChanged()
	{
		static bool alreadyRunning = false;
		if (pluginLoadingState != QSensorManagerPrivate::Loaded || alreadyRunning) {
			// We're busy.
			// Just note that a registration changed and exit.
			// Someone up the call stack will deal with this.
			sensorsChanged = true;
			return;
		}

		// Set a flag so any recursive calls doesn't cause a loop.
		alreadyRunning = true;

		// Since one [un]registration may cause other [un]registrations and since
		// the order in which we do things matters we just do a cascading update
		// until things stop changing.
		do {
			sensorsChanged = false;
			Q_FOREACH(QSensorChangesInterface *changes, changeListeners) {
				changes->sensorsChanged();
			}
		} while (sensorsChanged);

		// We're going away now so clear the flag
		alreadyRunning = false;

		// Notify the client of the changes
		Q_EMIT availableSensorsChanged();
	}
};



QT_END_NAMESPACE

#endif

