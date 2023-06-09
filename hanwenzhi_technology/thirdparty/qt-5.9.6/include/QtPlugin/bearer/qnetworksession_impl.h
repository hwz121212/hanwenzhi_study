/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
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

#ifndef QNETWORKSESSION_IMPL_H
#define QNETWORKSESSION_IMPL_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qbearerengine_impl.h"

#include <QtNetwork/private/qnetworkconfigmanager_p.h>
#include <QtNetwork/private/qnetworksession_p.h>

QT_BEGIN_NAMESPACE

class QBearerEngineImpl;

class QNetworkSessionPrivateImpl : public QNetworkSessionPrivate
{
    Q_OBJECT

public:
    QNetworkSessionPrivateImpl()
        : engine(0), startTime(0), lastError(QNetworkSession::UnknownSessionError), sessionTimeout(-1), currentPolicies(QNetworkSession::NoPolicy), opened(false)
    {}
    ~QNetworkSessionPrivateImpl()
    {}

    //called by QNetworkSession constructor and ensures
    //that the state is immediately updated (w/o actually opening
    //a session). Also this function should take care of
    //notification hooks to discover future state changes.
    void syncStateWithInterface() Q_DECL_OVERRIDE;

#ifndef QT_NO_NETWORKINTERFACE
    QNetworkInterface currentInterface() const Q_DECL_OVERRIDE;
#endif
    QVariant sessionProperty(const QString& key) const Q_DECL_OVERRIDE;
    void setSessionProperty(const QString& key, const QVariant& value) Q_DECL_OVERRIDE;

    void open() Q_DECL_OVERRIDE;
    void close() Q_DECL_OVERRIDE;
    void stop() Q_DECL_OVERRIDE;
    void migrate() Q_DECL_OVERRIDE;
    void accept() Q_DECL_OVERRIDE;
    void ignore() Q_DECL_OVERRIDE;
    void reject() Q_DECL_OVERRIDE;

    QString errorString() const Q_DECL_OVERRIDE; //must return translated string
    QNetworkSession::SessionError error() const Q_DECL_OVERRIDE;

    quint64 bytesWritten() const Q_DECL_OVERRIDE;
    quint64 bytesReceived() const Q_DECL_OVERRIDE;
    quint64 activeTime() const Q_DECL_OVERRIDE;

    QNetworkSession::UsagePolicies usagePolicies() const Q_DECL_OVERRIDE;
    void setUsagePolicies(QNetworkSession::UsagePolicies) Q_DECL_OVERRIDE;

private Q_SLOTS:
    void networkConfigurationsChanged();
    void configurationChanged(QNetworkConfigurationPrivatePointer config);
    void forcedSessionClose(const QNetworkConfiguration &config);
    void connectionError(const QString &id, QBearerEngineImpl::ConnectionError error);
    void decrementTimeout();

private:
    void updateStateFromServiceNetwork();
    void updateStateFromActiveConfig();

private:
    QBearerEngineImpl *engine;

    quint64 startTime;

    QNetworkSession::SessionError lastError;

    int sessionTimeout;
    QNetworkSession::UsagePolicies currentPolicies;

    bool opened;
};




class QNetworkSessionManagerPrivate : public QObject
{
	Q_OBJECT

public:
	QNetworkSessionManagerPrivate(QObject *parent = 0) : QObject(parent) {}
	~QNetworkSessionManagerPrivate() {}

	inline void forceSessionClose(const QNetworkConfiguration &config)
	{
		emit forcedSessionClose(config);
	}

Q_SIGNALS:
	void forcedSessionClose(const QNetworkConfiguration &config);
};


QT_END_NAMESPACE

#endif // QNETWORKSESSION_IMPL_H
