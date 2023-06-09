/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -i geocluetypes.h -p satellite_interface.h: org.freedesktop.Geoclue.Satellite.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SATELLITE_INTERFACE_H
#define SATELLITE_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "geocluetypes.h"

/*
 * Proxy class for interface org.freedesktop.Geoclue.Satellite
 */
class OrgFreedesktopGeoclueSatelliteInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.Geoclue.Satellite"; }

public:
    OrgFreedesktopGeoclueSatelliteInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopGeoclueSatelliteInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int, int, int, QList<qint32> , QList<QGeoSatelliteInfo> > GetLastSatellite()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetLastSatellite"), argumentList);
    }
    inline QDBusReply<int> GetLastSatellite(int &satelliteUsed, int &satelliteVisible, QList<qint32> &usedPrn, QList<QGeoSatelliteInfo> &satInfo)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetLastSatellite"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 5) {
            satelliteUsed = qdbus_cast<int>(reply.arguments().at(1));
            satelliteVisible = qdbus_cast<int>(reply.arguments().at(2));
            usedPrn = qdbus_cast<QList<qint32> >(reply.arguments().at(3));
            satInfo = qdbus_cast<QList<QGeoSatelliteInfo> >(reply.arguments().at(4));
        }
        return reply;
    }

    inline QDBusPendingReply<int, int, int, QList<qint32> , QList<QGeoSatelliteInfo> > GetSatellite()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetSatellite"), argumentList);
    }
    inline QDBusReply<int> GetSatellite(int &satelliteUsed, int &satelliteVisible, QList<qint32> &usedPrn, QList<QGeoSatelliteInfo> &satInfo)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetSatellite"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 5) {
            satelliteUsed = qdbus_cast<int>(reply.arguments().at(1));
            satelliteVisible = qdbus_cast<int>(reply.arguments().at(2));
            usedPrn = qdbus_cast<QList<qint32> >(reply.arguments().at(3));
            satInfo = qdbus_cast<QList<QGeoSatelliteInfo> >(reply.arguments().at(4));
        }
        return reply;
    }

Q_SIGNALS: // SIGNALS
    void SatelliteChanged(int timestamp, int satelliteUsed, int satelliteVisible, const QList<qint32> &usedPrn, const QList<QGeoSatelliteInfo> &satInfo);
};

#endif
