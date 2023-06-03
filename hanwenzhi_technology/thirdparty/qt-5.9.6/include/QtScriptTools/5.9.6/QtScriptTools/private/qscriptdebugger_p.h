/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtSCriptTools module of the Qt Toolkit.
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

#ifndef QSCRIPTDEBUGGER_P_H
#define QSCRIPTDEBUGGER_P_H

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

#include <QtCore/qobject.h>


#include "qscriptdebuggerconsole_p.h"
#include "qscriptdebuggerconsolecommandmanager_p.h"
#include "qscriptdebuggerconsolecommandjob_p.h"
#include "qscriptstdmessagehandler_p.h"
#include "qscriptdebuggerfrontend_p.h"
#include "qscriptdebuggereventhandlerinterface_p.h"
#include "qscriptdebuggerresponsehandlerinterface_p.h"
#include "qscriptdebuggerjobschedulerinterface_p.h"
#include "qscriptdebuggerconsolewidgetinterface_p.h"
#include "qscriptcompletionproviderinterface_p.h"
#include "qscriptcompletiontask_p.h"
#include "qscripttooltipproviderinterface_p.h"
#include "qscriptdebuggerstackwidgetinterface_p.h"
#include "qscriptdebuggerstackmodel_p.h"
#include "qscriptdebuggerscriptswidgetinterface_p.h"
#include "qscriptdebuggerscriptsmodel_p.h"
#include "qscriptdebuggerlocalswidgetinterface_p.h"
#include "qscriptdebuggerlocalsmodel_p.h"
#include "qscriptdebuggercodewidgetinterface_p.h"
#include "qscriptdebuggercodeviewinterface_p.h"
#include "qscriptdebuggercodefinderwidgetinterface_p.h"
#include "qscriptbreakpointswidgetinterface_p.h"
#include "qscriptbreakpointsmodel_p.h"
#include "qscriptdebugoutputwidgetinterface_p.h"
#include "qscripterrorlogwidgetinterface_p.h"
#include "qscriptdebuggerwidgetfactoryinterface_p.h"
#include "qscriptdebuggerevent_p.h"
#include "qscriptdebuggervalue_p.h"
#include "qscriptdebuggerresponse_p.h"
#include "qscriptdebuggercommand_p.h"
#include "qscriptdebuggercommandschedulerfrontend_p.h"
#include "qscriptdebuggercommandschedulerjob_p.h"
#include "qscriptdebuggerjob_p_p.h"
#include "qscriptxmlparser_p.h"

#include "private/qobject_p.h"

#include <QtScript/qscriptcontext.h>
#include <QtScript/qscriptcontextinfo.h>

#include <QtCore/qcoreapplication.h>
#include <QtCore/qdir.h>
#include <QtCore/qfileinfo.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qdebug.h>

#include <QtWidgets/qaction.h>
#include <QtGui/qevent.h>
#include <QtGui/qicon.h>
#include <QtWidgets/qinputdialog.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qtoolbar.h>
#include <QtWidgets/qtooltip.h>

QT_BEGIN_NAMESPACE

class QScriptDebuggerFrontend;
class QScriptDebuggerConsoleWidgetInterface;
class QScriptDebuggerScriptsWidgetInterface;
class QScriptDebuggerCodeWidgetInterface;
class QScriptDebuggerCodeFinderWidgetInterface;
class QScriptBreakpointsWidgetInterface;
class QScriptDebuggerStackWidgetInterface;
class QScriptDebuggerLocalsWidgetInterface;
class QScriptDebugOutputWidgetInterface;
class QScriptErrorLogWidgetInterface;
class QScriptDebuggerWidgetFactoryInterface;
class QAction;
class QEvent;
class QMenu;
#ifndef QT_NO_TOOLBAR
class QToolBar;
#endif

class QScriptDebuggerPrivate;
class Q_AUTOTEST_EXPORT QScriptDebugger : public QObject
{
    Q_OBJECT
public:
    // mirrors QScriptEngineDebugger::DebuggerWidget
    enum DebuggerWidget {
        ConsoleWidget,
        StackWidget,
        ScriptsWidget,
        LocalsWidget,
        CodeWidget,
        CodeFinderWidget,
        BreakpointsWidget,
        DebugOutputWidget,
        ErrorLogWidget
    };
    // mirrors QScriptEngineDebugger::DebuggerAction
    enum DebuggerAction {
        InterruptAction,
        ContinueAction,
        StepIntoAction,
        StepOverAction,
        StepOutAction,
        RunToCursorAction,
        RunToNewScriptAction,
        ToggleBreakpointAction,
        ClearDebugOutputAction,
        ClearErrorLogAction,
        ClearConsoleAction,
        FindInScriptAction,
        FindNextInScriptAction,
        FindPreviousInScriptAction,
        GoToLineAction
    };

    QScriptDebugger(QObject *parent = 0);
    ~QScriptDebugger();

    QScriptDebuggerFrontend *frontend() const;
    void setFrontend(QScriptDebuggerFrontend *frontend);

    QWidget *widget(DebuggerWidget widget);
    QAction *action(DebuggerAction action, QObject *parent);

    QScriptDebuggerConsoleWidgetInterface *consoleWidget() const;
    void setConsoleWidget(QScriptDebuggerConsoleWidgetInterface *consoleWidget);

    QScriptDebuggerScriptsWidgetInterface *scriptsWidget() const;
    void setScriptsWidget(QScriptDebuggerScriptsWidgetInterface *scriptsWidget);

    QScriptDebuggerCodeWidgetInterface *codeWidget() const;
    void setCodeWidget(QScriptDebuggerCodeWidgetInterface *codeWidget);

    QScriptDebuggerCodeFinderWidgetInterface *codeFinderWidget() const;
    void setCodeFinderWidget(QScriptDebuggerCodeFinderWidgetInterface *codeFinderWidget);

    QScriptDebuggerStackWidgetInterface *stackWidget() const;
    void setStackWidget(QScriptDebuggerStackWidgetInterface *stackWidget);

    QScriptDebuggerLocalsWidgetInterface *localsWidget() const;
    void setLocalsWidget(QScriptDebuggerLocalsWidgetInterface *localsWidget);

    QScriptBreakpointsWidgetInterface *breakpointsWidget() const;
    void setBreakpointsWidget(QScriptBreakpointsWidgetInterface *breakpointsWidget);

    QScriptDebugOutputWidgetInterface *debugOutputWidget() const;
    void setDebugOutputWidget(QScriptDebugOutputWidgetInterface *debugOutputWidget);

    QScriptErrorLogWidgetInterface *errorLogWidget() const;
    void setErrorLogWidget(QScriptErrorLogWidgetInterface *errorLogWidget);

    QScriptDebuggerWidgetFactoryInterface *widgetFactory() const;
    void setWidgetFactory(QScriptDebuggerWidgetFactoryInterface *factory);

    QAction *interruptAction(QObject *parent) const;
    QAction *continueAction(QObject *parent) const;
    QAction *stepIntoAction(QObject *parent) const;
    QAction *stepOverAction(QObject *parent) const;
    QAction *stepOutAction(QObject *parent) const;
    QAction *runToCursorAction(QObject *parent) const;
    QAction *runToNewScriptAction(QObject *parent) const;

    QAction *toggleBreakpointAction(QObject *parent) const;

    QAction *findInScriptAction(QObject *parent) const;
    QAction *findNextInScriptAction(QObject *parent) const;
    QAction *findPreviousInScriptAction(QObject *parent) const;
    QAction *goToLineAction(QObject *parent) const;

    QAction *clearDebugOutputAction(QObject *parent) const;
    QAction *clearConsoleAction(QObject *parent) const;
    QAction *clearErrorLogAction(QObject *parent) const;

    QMenu *createStandardMenu(QWidget *widgetParent, QObject *actionParent);
#ifndef QT_NO_TOOLBAR
    QToolBar *createStandardToolBar(QWidget *widgetParent, QObject *actionParent);
#endif
    bool eventFilter(QObject *, QEvent *e);

    bool isInteractive() const;

Q_SIGNALS:
    void stopped() const;
    void started() const;

protected:
    void timerEvent(QTimerEvent *e);

protected:
    QScriptDebugger(QScriptDebuggerPrivate &dd, QObject *parent);

private:
    Q_DECLARE_PRIVATE(QScriptDebugger)
    Q_DISABLE_COPY(QScriptDebugger)

    Q_PRIVATE_SLOT(d_func(), void _q_onLineEntered(const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_onCurrentFrameChanged(int))
    Q_PRIVATE_SLOT(d_func(), void _q_onCurrentScriptChanged(qint64))
    Q_PRIVATE_SLOT(d_func(), void _q_onScriptLocationSelected(int))

    Q_PRIVATE_SLOT(d_func(), void _q_interrupt())
    Q_PRIVATE_SLOT(d_func(), void _q_continue())
    Q_PRIVATE_SLOT(d_func(), void _q_stepInto())
    Q_PRIVATE_SLOT(d_func(), void _q_stepOver())
    Q_PRIVATE_SLOT(d_func(), void _q_stepOut())
    Q_PRIVATE_SLOT(d_func(), void _q_runToCursor())
    Q_PRIVATE_SLOT(d_func(), void _q_runToNewScript())

    Q_PRIVATE_SLOT(d_func(), void _q_toggleBreakpoint())

    Q_PRIVATE_SLOT(d_func(), void _q_clearDebugOutput())
    Q_PRIVATE_SLOT(d_func(), void _q_clearErrorLog())
    Q_PRIVATE_SLOT(d_func(), void _q_clearConsole())

    Q_PRIVATE_SLOT(d_func(), void _q_findInScript())
    Q_PRIVATE_SLOT(d_func(), void _q_findNextInScript())
    Q_PRIVATE_SLOT(d_func(), void _q_findPreviousInScript())
    Q_PRIVATE_SLOT(d_func(), void _q_onFindCodeRequest(const QString &, int))
    Q_PRIVATE_SLOT(d_func(), void _q_goToLine())
};




/*!
  \since 4.5
  \class QScriptDebugger
  \internal

  \brief The QScriptDebugger class provides a Qt Script debugger.

  \ingroup script

*/

class QScriptDebuggerPrivate
	: public QObjectPrivate,
	public QScriptDebuggerCommandSchedulerInterface,
	public QScriptDebuggerJobSchedulerInterface,
	public QScriptDebuggerEventHandlerInterface,
	public QScriptDebuggerResponseHandlerInterface,
	public QScriptCompletionProviderInterface,
	public QScriptToolTipProviderInterface
{
	Q_DECLARE_PUBLIC(QScriptDebugger)
public:
	QScriptDebuggerPrivate();
	~QScriptDebuggerPrivate();

	int scheduleJob(QScriptDebuggerJob *job);
	void finishJob(QScriptDebuggerJob *job);
	void hibernateUntilEvaluateFinished(QScriptDebuggerJob *job);

	void maybeStartNewJob();

	int scheduleCommand(const QScriptDebuggerCommand &command,
		QScriptDebuggerResponseHandlerInterface *responseHandler);

	void handleResponse(
		const QScriptDebuggerResponse &response, int commandId);
	bool debuggerEvent(const QScriptDebuggerEvent &event);

	QScriptCompletionTaskInterface *createCompletionTask(
		const QString &contents, int cursorPosition, int frameIndex, int options);

	void showToolTip(const QPoint &pos, int frameIndex,
		int lineNumber, const QStringList &path);

	static QPixmap pixmap(const QString &path);

	void startInteraction(QScriptDebuggerEvent::Type type,
		qint64 scriptId, int lineNumber);
	void sync();
	void loadLocals(int frameIndex);
	QScriptDebuggerLocalsModel *createLocalsModel();
	void selectScriptForFrame(int frameIndex);
	void emitStoppedSignal();

	void maybeDelete(QWidget *widget);

	// private slots
	void _q_onLineEntered(const QString &contents);
	void _q_onCurrentFrameChanged(int frameIndex);
	void _q_onCurrentScriptChanged(qint64 scriptId);
	void _q_onScriptLocationSelected(int lineNumber);
	void _q_interrupt();
	void _q_continue();
	void _q_stepInto();
	void _q_stepOver();
	void _q_stepOut();
	void _q_runToCursor();
	void _q_runToNewScript();
	void _q_toggleBreakpoint();
	void _q_clearDebugOutput();
	void _q_clearErrorLog();
	void _q_clearConsole();
	void _q_findInScript();
	void _q_findNextInScript();
	void _q_findPreviousInScript();
	void _q_onFindCodeRequest(const QString &, int);
	void _q_goToLine();

	void executeConsoleCommand(const QString &command);
	void findCode(const QString &exp, int options);

	QScriptDebuggerFrontend *frontend;

	bool interactive;
	QScriptDebuggerConsole *console;

	int nextJobId;
	QList<QScriptDebuggerJob*> pendingJobs;
	QList<int> pendingJobIds;
	QScriptDebuggerJob *activeJob;
	bool activeJobHibernating;
	QHash<int, QScriptDebuggerCommand> watchedCommands;
	QHash<int, QScriptDebuggerResponseHandlerInterface*> responseHandlers;

	QScriptDebuggerConsoleWidgetInterface *consoleWidget;
	QScriptDebuggerStackWidgetInterface *stackWidget;
	QScriptDebuggerStackModel *stackModel;
	QScriptDebuggerScriptsWidgetInterface *scriptsWidget;
	QScriptDebuggerScriptsModel *scriptsModel;
	QScriptDebuggerLocalsWidgetInterface *localsWidget;
	QHash<int, QScriptDebuggerLocalsModel*> localsModels;
	QScriptDebuggerCodeWidgetInterface *codeWidget;
	QScriptDebuggerCodeFinderWidgetInterface *codeFinderWidget;
	QScriptBreakpointsWidgetInterface *breakpointsWidget;
	QScriptBreakpointsModel *breakpointsModel;
	QScriptDebugOutputWidgetInterface *debugOutputWidget;
	QScriptErrorLogWidgetInterface *errorLogWidget;
	QScriptDebuggerWidgetFactoryInterface *widgetFactory;

	QAction *interruptAction;
	QAction *continueAction;
	QAction *stepIntoAction;
	QAction *stepOverAction;
	QAction *stepOutAction;
	QAction *runToCursorAction;
	QAction *runToNewScriptAction;

	QAction *toggleBreakpointAction;

	QAction *clearDebugOutputAction;
	QAction *clearErrorLogAction;
	QAction *clearConsoleAction;

	QAction *findInScriptAction;
	QAction *findNextInScriptAction;
	QAction *findPreviousInScriptAction;
	QAction *goToLineAction;

	int updatesEnabledTimerId;
};


QT_END_NAMESPACE

#endif
