/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtNetwork module of the Qt Toolkit.
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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of the Network Access API.  This header file may change from
// version to version without notice, or even be removed.
//
// We mean it.
//

#ifndef QFTP_P_H
#define QFTP_P_H

#include <QtNetwork/private/qtnetworkglobal_p.h>
#include <QtCore/qstring.h>
#include <private/qurlinfo_p.h>
#include <QtCore/qobject.h>

#include "qabstractsocket.h"

#include "qcoreapplication.h"
#include "qtcpsocket.h"
#include "qurlinfo_p.h"
#include "qstringlist.h"
#include "qregexp.h"
#include "qtimer.h"
#include "qfileinfo.h"
#include "qtcpserver.h"
#include "qlocale.h"


QT_REQUIRE_CONFIG(ftp);

QT_BEGIN_NAMESPACE

class QFtpPrivate;

class Q_AUTOTEST_EXPORT QFtp : public QObject
{
    Q_OBJECT

public:
    explicit QFtp(QObject *parent = 0);
    virtual ~QFtp();

    enum State {
        Unconnected,
        HostLookup,
        Connecting,
        Connected,
        LoggedIn,
        Closing
    };
    enum Error {
        NoError,
        UnknownError,
        HostNotFound,
        ConnectionRefused,
        NotConnected
    };
    enum Command {
        None,
        SetTransferMode,
        SetProxy,
        ConnectToHost,
        Login,
        Close,
        List,
        Cd,
        Get,
        Put,
        Remove,
        Mkdir,
        Rmdir,
        Rename,
        RawCommand
    };
    enum TransferMode {
        Active,
        Passive
    };
    enum TransferType {
        Binary,
        Ascii
    };

    int setProxy(const QString &host, quint16 port);
    int connectToHost(const QString &host, quint16 port=21);
    int login(const QString &user = QString(), const QString &password = QString());
    int close();
    int setTransferMode(TransferMode mode);
    int list(const QString &dir = QString());
    int cd(const QString &dir);
    int get(const QString &file, QIODevice *dev=0, TransferType type = Binary);
    int put(const QByteArray &data, const QString &file, TransferType type = Binary);
    int put(QIODevice *dev, const QString &file, TransferType type = Binary);
    int remove(const QString &file);
    int mkdir(const QString &dir);
    int rmdir(const QString &dir);
    int rename(const QString &oldname, const QString &newname);

    int rawCommand(const QString &command);

    qint64 bytesAvailable() const;
    qint64 read(char *data, qint64 maxlen);
    QByteArray readAll();

    int currentId() const;
    QIODevice* currentDevice() const;
    Command currentCommand() const;
    bool hasPendingCommands() const;
    void clearPendingCommands();

    State state() const;

    Error error() const;
    QString errorString() const;

public Q_SLOTS:
    void abort();

Q_SIGNALS:
    void stateChanged(int);
    void listInfo(const QUrlInfo&);
    void readyRead();
    void dataTransferProgress(qint64, qint64);
    void rawCommandReply(int, const QString&);

    void commandStarted(int);
    void commandFinished(int, bool);
    void done(bool);

private:
    Q_DISABLE_COPY(QFtp)
    Q_DECLARE_PRIVATE(QFtp)

    Q_PRIVATE_SLOT(d_func(), void _q_startNextCommand())
    Q_PRIVATE_SLOT(d_func(), void _q_piFinished(const QString&))
    Q_PRIVATE_SLOT(d_func(), void _q_piError(int, const QString&))
    Q_PRIVATE_SLOT(d_func(), void _q_piConnectState(int))
    Q_PRIVATE_SLOT(d_func(), void _q_piFtpReply(int, const QString&))
};




class QFtpPI;

/*
	The QFtpDTP (DTP = Data Transfer Process) controls all client side
	data transfer between the client and server.
*/
class QFtpDTP : public QObject
{
	Q_OBJECT

public:
	enum ConnectState {
		CsHostFound,
		CsConnected,
		CsClosed,
		CsHostNotFound,
		CsConnectionRefused
	};

	QFtpDTP(QFtpPI *p, QObject *parent = 0);

	void setData(QByteArray *);
	void setDevice(QIODevice *);
	void writeData();
	void setBytesTotal(qint64 bytes);

	bool hasError() const;
	QString errorMessage() const;
	void clearError();

	void connectToHost(const QString & host, quint16 port);
	int setupListener(const QHostAddress &address);
	void waitForConnection();

	QTcpSocket::SocketState state() const;
	qint64 bytesAvailable() const;
	qint64 read(char *data, qint64 maxlen);
	QByteArray readAll();

	void abortConnection();

	static bool parseDir(const QByteArray &buffer, const QString &userName, QUrlInfo *info);

signals:
	void listInfo(const QUrlInfo&);
	void readyRead();
	void dataTransferProgress(qint64, qint64);

	void connectState(int);

private slots:
	void socketConnected();
	void socketReadyRead();
	void socketError(QAbstractSocket::SocketError);
	void socketConnectionClosed();
	void socketBytesWritten(qint64);
	void setupSocket();

	void dataReadyRead();

private:
	void clearData();

	QTcpSocket *socket;
	QTcpServer listener;

	QFtpPI *pi;
	QString err;
	qint64 bytesDone;
	qint64 bytesTotal;
	bool callWriteData;

	// If is_ba is true, ba is used; ba is never 0.
	// Otherwise dev is used; dev can be 0 or not.
	union {
		QByteArray *ba;
		QIODevice *dev;
	} data;
	bool is_ba;

	QByteArray bytesFromSocket;
};




/**********************************************************************
 *
 * QFtpPI - Protocol Interpreter
 *
 *********************************************************************/

class QFtpPI : public QObject
{
	Q_OBJECT

public:
	QFtpPI(QObject *parent = 0);

	void connectToHost(const QString &host, quint16 port);

	bool sendCommands(const QStringList &cmds);
	bool sendCommand(const QString &cmd)
	{
		return sendCommands(QStringList(cmd));
	}

	void clearPendingCommands();
	void abort();

	QString currentCommand() const
	{
		return currentCmd;
	}

	bool rawCommand;
	bool transferConnectionExtended;

	QFtpDTP dtp; // the PI has a DTP which is not the design of RFC 959, but it
				 // makes the design simpler this way
signals:
	void connectState(int);
	void finished(const QString&);
	void error(int, const QString&);
	void rawFtpReply(int, const QString&);

private slots:
	void hostFound();
	void connected();
	void connectionClosed();
	void delayedCloseFinished();
	void readyRead();
	void error(QAbstractSocket::SocketError);

	void dtpConnectState(int);

private:
	// the states are modelled after the generalized state diagram of RFC 959,
	// page 58
	enum State {
		Begin,
		Idle,
		Waiting,
		Success,
		Failure
	};

	enum AbortState {
		None,
		AbortStarted,
		WaitForAbortToFinish
	};

	bool processReply();
	bool startNextCmd();

	QTcpSocket commandSocket;
	QString replyText;
	char replyCode[3];
	State state;
	AbortState abortState;
	QStringList pendingCommands;
	QString currentCmd;

	bool waitForDtpToConnect;
	bool waitForDtpToClose;

	QByteArray bytesFromSocket;

	friend class QFtpDTP;
};



/**********************************************************************
 *
 * QFtpCommand implemenatation
 *
 *********************************************************************/
class QFtpCommand
{
public:
	QFtpCommand(QFtp::Command cmd, const QStringList &raw, const QByteArray &ba);
	QFtpCommand(QFtp::Command cmd, const QStringList &raw, QIODevice *dev = 0);
	~QFtpCommand();

	int id;
	QFtp::Command command;
	QStringList rawCmds;

	// If is_ba is true, ba is used; ba is never 0.
	// Otherwise dev is used; dev can be 0 or not.
	union {
		QByteArray *ba;
		QIODevice *dev;
	} data;
	bool is_ba;

};



/**********************************************************************
 *
 * QFtpPrivate
 *
 *********************************************************************/

QT_BEGIN_INCLUDE_NAMESPACE
#include <private/qobject_p.h>
QT_END_INCLUDE_NAMESPACE

class QFtpPrivate : public QObjectPrivate
{
	Q_DECLARE_PUBLIC(QFtp)
public:

	inline QFtpPrivate() : close_waitForStateChange(false), state(QFtp::Unconnected),
		transferMode(QFtp::Passive), error(QFtp::NoError)
	{ }

	~QFtpPrivate() { while (!pending.isEmpty()) delete pending.takeFirst(); }

	// private slots
	void _q_startNextCommand();
	void _q_piFinished(const QString&);
	void _q_piError(int, const QString&);
	void _q_piConnectState(int);
	void _q_piFtpReply(int, const QString&);

	int addCommand(QFtpCommand *cmd);

	QFtpPI pi;
	QList<QFtpCommand *> pending;
	bool close_waitForStateChange;
	QFtp::State state;
	QFtp::TransferMode transferMode;
	QFtp::Error error;
	QString errorString;

	QString host;
	quint16 port;
	QString proxyHost;
	quint16 proxyPort;
};


QT_END_NAMESPACE

#endif // QFTP_P_H
