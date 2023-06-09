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

#ifndef QNLAENGINE_P_H
#define QNLAENGINE_P_H

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

#include "../qbearerengine_impl.h"

#include <QtNetwork/private/qnativesocketengine_p.h>

#include <QtCore/qthread.h>
#include <QtCore/qmutex.h>
#include <QtCore/qcoreapplication.h>
#include <QtCore/qstringlist.h>

#include <QtCore/qdebug.h>

#include <QMap>

QT_BEGIN_NAMESPACE

class QNetworkConfigurationPrivate;
class QNlaThread;

class QWindowsSockInit2
{
public:
    QWindowsSockInit2();
    ~QWindowsSockInit2();
    int version;
};

class QNlaEngine : public QBearerEngineImpl
{
    Q_OBJECT

    friend class QNlaThread;

public:
    QNlaEngine(QObject *parent = 0);
    ~QNlaEngine();

    QString getInterfaceFromId(const QString &id);
    bool hasIdentifier(const QString &id);

    void connectToId(const QString &id);
    void disconnectFromId(const QString &id);

    Q_INVOKABLE void requestUpdate();

    QNetworkSession::State sessionStateForId(const QString &id);

    QNetworkConfigurationManager::Capabilities capabilities() const;

    QNetworkSessionPrivate *createSessionBackend();

    QNetworkConfigurationPrivatePointer defaultConfiguration();

private Q_SLOTS:
    void networksChanged();

private:
    QWindowsSockInit2 winSock;
    QNlaThread *nlaThread;
    QMap<uint, QString> configurationInterface;
};



class QNlaThread : public QThread
{
	Q_OBJECT

public:
	QNlaThread(QNlaEngine *parent = 0);
	~QNlaThread();

	QList<QNetworkConfigurationPrivate *> getConfigurations();

	void forceUpdate();

protected:
	virtual void run();

private:
	void updateConfigurations(QList<QNetworkConfigurationPrivate *> &configs);
	DWORD parseBlob(NLA_BLOB *blob, QNetworkConfigurationPrivate *cpPriv) const;
	QNetworkConfigurationPrivate *parseQuerySet(const WSAQUERYSET *querySet) const;
	void fetchConfigurations();

signals:
	void networksChanged();

private:
	QMutex mutex;
	HANDLE handle;
	bool done;
	QList<QNetworkConfigurationPrivate *> fetchedConfigurations;
};



QT_END_NAMESPACE

#endif
