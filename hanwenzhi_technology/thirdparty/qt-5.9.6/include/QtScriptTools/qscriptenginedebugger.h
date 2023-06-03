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

#ifndef QSCRIPTENGINEDEBUGGER_H
#define QSCRIPTENGINEDEBUGGER_H

#include <QtCore/qobject.h>
#include <QtScript/qtscriptglobal.h>

#include "qscriptdebugger_p.h"
#include "qscriptenginedebuggerfrontend_p.h"
#include "qscriptdebuggerstandardwidgetfactory_p.h"
#include <private/qobject_p.h>

#include <QtCore/qsettings.h>
#include <QtWidgets/qapplication.h>
#include <QtWidgets/qdockwidget.h>
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qmenubar.h>
#include <QtWidgets/qboxlayout.h>

QT_BEGIN_NAMESPACE


class QAction;
class QScriptEngine;
class QWidget;
#ifndef QT_NO_MAINWINDOW
class QMainWindow;
#endif
class QMenu;
class QToolBar;

class QScriptEngineDebuggerPrivate;
class Q_SCRIPTTOOLS_EXPORT QScriptEngineDebugger : public QObject
{
    Q_OBJECT
public:
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

    enum DebuggerState {
        RunningState,
        SuspendedState
    };

    explicit QScriptEngineDebugger(QObject *parent = Q_NULLPTR);
    ~QScriptEngineDebugger();

    void attachTo(QScriptEngine *engine);
    void detach();

    bool autoShowStandardWindow() const;
    void setAutoShowStandardWindow(bool autoShow);

#ifndef QT_NO_MAINWINDOW
    QMainWindow *standardWindow() const;
#endif
    QToolBar *createStandardToolBar(QWidget *parent = Q_NULLPTR);
    QMenu *createStandardMenu(QWidget *parent = Q_NULLPTR);

    QWidget *widget(DebuggerWidget widget) const;
    QAction *action(DebuggerAction action) const;

    DebuggerState state() const;

Q_SIGNALS:
    void evaluationSuspended();
    void evaluationResumed();

private:
    Q_DECLARE_PRIVATE(QScriptEngineDebugger)
    Q_DISABLE_COPY(QScriptEngineDebugger)

    Q_PRIVATE_SLOT(d_func(), void _q_showStandardWindow())
};


// this has to be outside the namespace
static void initScriptEngineDebuggerResources()
{
	Q_INIT_RESOURCE(scripttools_debugging);
}

class WidgetClosedNotifier : public QObject
{
	Q_OBJECT
public:
	WidgetClosedNotifier(QWidget *w, QObject *parent = 0)
		: QObject(parent), widget(w)
	{
		w->installEventFilter(this);
	}

	bool eventFilter(QObject *watched, QEvent *e)
	{
		if (watched != widget)
			return false;
		if (e->type() != QEvent::Close)
			return false;
		emit widgetClosed();
		return true;
	}

Q_SIGNALS:
	void widgetClosed();

private:
	QWidget *widget;
};


class QtScriptDebuggerResourceInitializer
{
public:
	QtScriptDebuggerResourceInitializer() {
		// call outside-the-namespace function
		initScriptEngineDebuggerResources();
	}
};

/*!
	\since 4.5
	\class QScriptEngineDebugger
	\inmodule QtScriptTools
	\brief The QScriptEngineDebugger class provides a QScriptEngine debugger.

	\ingroup script


  The QScriptEngineDebugger class provides a debugger that can be
  embedded into Qt applications that use Qt Script. The debugger
  enables the application user to inspect the state of the script
  environment and control script execution.

  To attach the debugger to a script engine, call the attachTo()
  function.

  \snippet src.scripttools.qscriptenginedebugger.cpp 0

  Once the debugger has been attached to a script engine, you can
  proceed to evaluate scripts as usual, e.g. by calling
  QScriptEngine::evaluate(). The debugger will be triggered when an
  uncaught exception occurs, or when a \c{debugger} statement is
  encountered in a script. It is also possible to interrupt script
  evaluation at an arbitrary time by triggering the InterruptAction.
  For instance, to start the debugger when script evaluation starts,
  you trigger the action before you begin to \l{QScriptEngine::}{evaluate()}
  the script.

  \snippet scriptdebugger.cpp 2

  By default, the \l{standardWindow()}{standard debugger window} is shown when
  evaluation is suspended.  This can be changed by calling the
  setAutoShowStandardWindow() function.

  The debugger defines a set of \l{DebuggerAction}{actions} that are
  available, such as stopping execution or printing the contents of a
  variable. It also provides a set of widgets (components) that
  display the information available from the debugger and that trigger
  the actions on request. The actions available are identified by the
  DebuggerAction enum, and the widgets are identified by the
  DebuggerWidget enum.

  Access to the individual debugger widgets is provided by the
  widget() function. This makes it possible to arrange the widgets in
  a custom manner. Similarly, the action() function provides access
  to the various debugger actions.

  The createStandardToolBar() function creates a standard toolbar, and the
  createStandardMenu() function creates a standard menu; these functions can
  be useful if you are creating a custom debugger configuration.

  The evaluationSuspended() signal is emitted when the debugger has
  suspended script evaluation and entered interactive mode, i.e., the
  mode in which it accepts input from the user. The
  evaluationResumed() signal is emitted when script evaluation is
  resumed, i.e, when execution control is given back to the script
  engine. The state() function returns the debugger's current state.

  When calling QScriptEngine::evaluate() it is useful to pass a
  descriptive script name (file name) as second argument, as this is
  the name that will be displayed by the debugger in the
  ScriptsWidget; if a name is not passed, the script will be labelled
  "anonymous".

  When evaluation is suspended, the debugger will also suspend the
  event loop of the script. In the following snippet, the call to
  QScriptEngine::evaluate() causes the debugger to be triggered, and
  the function call does not return until the user has finished
  interacting with the debugger.

  \snippet src.scripttools.qscriptenginedebugger.cpp 1

  When the Qt Script debugger is running, the C++ application itself
  is not "frozen". This means that it is possible that more scripts
  are evaluated, even though the debugger has suspended evaluation of
  the \b{current} script evaluation. For example, a C++ timer might
  trigger that causes a script function to be called, or the user
  might click on a button in the main application user interface whose
  clicked() signal is connected to a script function. This kind of
  nested evaluation is permitted. The debugger will enter interactive
  mode for the new script if an exception is thrown or a breakpoint is
  reached. Note that it will not stop when encountering \c{debugger}
  statements. \omit The effects are similar to those achieved by
  typing a program into the debugger's console and evaluating
  it. \endomit

  Nested evaluation requires some thought when deciding
  how the debugger is presented to the user; for example, whether a
  modal dialog is suitable, or whether some parts of the main
  application user interface should be disabled while the debugger is
  running. \omit Seems unfinished somehow \endomit

  Debugging inside of a \l{QWidget::paintEvent()}{paintEvent}() is
  currently not supported. If you need to debug painting-related
  script code, that code should be evaluated outside of the C++
  paintEvent(), e.g. by rendering to an image, like the Context2D and
  Tetrix Qt Script examples do. This will make the code safe for
  debugging.

  The debugger adds some special properties to the script engine:
  \c{__FILE__} holds the name of the script in which the current
  evaluation occurs, and \c{__LINE__} holds the current line
  number. These are useful when doing print()-style debugging (the
  messages appear in the debugger's debug output widget).

  The \l{Qt Script Debugger Manual} describes how to use the debugger.
  The \l{Context2D Example}{Context2D example} shows how to integrate
  the debugger in applications.

  \sa QScriptEngine, {Context2D Example}
*/

/*!
	\enum QScriptEngineDebugger::DebuggerWidget

	This enum decides the widget that the widget() function should
	retrieve. We treat these widgets in more detail in the \l{Qt
	Script Debugger Manual}.

	\value ConsoleWidget Provides a command-line interface to the debugger.
	\value StackWidget Shows a backtrace of the script's execution state.
	\value ScriptsWidget Displays a list of currently loaded scripts.
	\value LocalsWidget Shows the local variables of the current stack frame.
	\value CodeWidget Displays the code of the current script.
	\value CodeFinderWidget Provides a widget that can search for text in the script shown in the
		   CodeWidget.
	\value BreakpointsWidget Shows breakpoints that have been set.
	\value DebugOutputWidget Contains output from the \c print() script function.
	\value ErrorLogWidget Shows error messages that have been generated.
*/

/*!
	\enum QScriptEngineDebugger::DebuggerAction

	This enum specifies the action that the action() function should
	retrieve.  The actions retrieved can be connected to any slot and
	connected to any widget. Please see the \l{Qt Script Debugger Manual}'s
	\l{Console Command Reference} for a detailed description of these actions.

	\value InterruptAction Suspends script execution as soon as the next script statement is reached.
	\value ContinueAction Gives the execution control back to the script engine.
	\value StepIntoAction Performs a step action.
	\value StepOverAction Performs a next action.
	\value StepOutAction Executes the script until the current function returns.
	\value RunToCursorAction Continues execution to the selected line (which contains the cursor) in the CodeWidget.
	\value RunToNewScriptAction Returns control to the script engine until a new script is executed.
	\value ToggleBreakpointAction Toggles a breakpoint at the selected line in the CodeWidget.
	\value ClearDebugOutputAction Clears the contents of the DebugOutputWidget.
	\value ClearErrorLogAction Clears the contents of the ErrorLogWidget.
	\value ClearConsoleAction Clears the contents of the ConsoleWidget.
	\value FindInScriptAction Displays the CodeFinderWidget.
	\value FindNextInScriptAction Finds next occurrence in the CodeWidget.
	\value FindPreviousInScriptAction Finds previous occurrence in the CodeWidget.
	\value GoToLineAction Shows the "Go to Line" dialog.
*/

/*!
	\enum QScriptEngineDebugger::DebuggerState
	\since 4.6

	This enum specifies the current state of the debugger.

	\value RunningState   The debugger is running.  (Script evaluation is allowed.)
	\value SuspendedState The debugger has suspended script evaluation.
*/

class QScriptEngineDebuggerPrivate
	: public QObjectPrivate
{
	Q_DECLARE_PUBLIC(QScriptEngineDebugger)
public:
	QScriptEngineDebuggerPrivate();
	~QScriptEngineDebuggerPrivate();

	// private slots
	void _q_showStandardWindow();

	void createDebugger();

	QScriptDebugger *debugger;
	QScriptEngineDebuggerFrontend *frontend;
#ifndef QT_NO_MAINWINDOW
	QMainWindow *standardWindow;
#endif
	bool autoShow;

	static QtScriptDebuggerResourceInitializer resourceInitializer;
};




QT_END_NAMESPACE

#endif
