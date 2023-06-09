/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -i geocluetypes.h -p velocity_interface.h: org.freedesktop.Geoclue.Velocity.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef VELOCITY_INTERFACE_H
#define VELOCITY_INTERFACE_H

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
 * Proxy class for interface org.freedesktop.Geoclue.Velocity
 */
class OrgFreedesktopGeoclueVelocityInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.Geoclue.Velocity"; }

public:
    OrgFreedesktopGeoclueVelocityInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopGeoclueVelocityInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int, int, double, double, double> GetVelocity()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetVelocity"), argumentList);
    }
    inline QDBusReply<int> GetVelocity(int &timestamp, double &speed, double &direction, double &climb)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetVelocity"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 5) {
            timestamp = qdbus_cast<int>(reply.arguments().at(1));
            speed = qdbus_cast<double>(reply.arguments().at(2));
            direction = qdbus_cast<double>(reply.arguments().at(3));
            climb = qdbus_cast<double>(reply.arguments().at(4));
        }
        return reply;
    }

Q_SIGNALS: // SIGNALS
    void VelocityChanged(int fields, int timestamp, double speed, double direction, double climb);
};

#endif
