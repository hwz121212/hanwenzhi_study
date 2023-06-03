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

#include "qscriptenginedebugger.h"



QT_BEGIN_NAMESPACE





QtScriptDebuggerResourceInitializer QScriptEngineDebuggerPrivate::resourceInitializer;

QScriptEngineDebuggerPrivate::QScriptEngineDebuggerPrivate()
{
    debugger = 0;
    frontend = 0;
#ifndef QT_NO_MAINWINDOW
    standardWindow = 0;
#endif
    autoShow = true;
}

QScriptEngineDebuggerPrivate::~QScriptEngineDebuggerPrivate()
{
    delete debugger;
    delete frontend;
#ifndef QT_NO_MAINWINDOW
    if (standardWindow) {
        QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
        QByteArray geometry = standardWindow->saveGeometry();
        settings.setValue(QLatin1String("Qt/scripttools/debugging/mainWindowGeometry"), geometry);
        QByteArray state = standardWindow->saveState();
        settings.setValue(QLatin1String("Qt/scripttools/debugging/mainWindowState"), state);
        if (standardWindow->parent() == 0)
            delete standardWindow;
    }
#endif
}

#ifndef QT_NO_MAINWINDOW
void QScriptEngineDebuggerPrivate::_q_showStandardWindow()
{
    Q_Q(QScriptEngineDebugger);
    (void)q->standardWindow(); // ensure it's created
    standardWindow->show();
}
#endif

void QScriptEngineDebuggerPrivate::createDebugger()
{
    Q_Q(QScriptEngineDebugger);
    if (!debugger) {
        debugger = new QScriptDebugger();
        debugger->setWidgetFactory(new QScriptDebuggerStandardWidgetFactory(q));
        QObject::connect(debugger, SIGNAL(started()),
                         q, SIGNAL(evaluationResumed()));
        QObject::connect(debugger, SIGNAL(stopped()),
                         q, SIGNAL(evaluationSuspended()));
        if (autoShow) {
            QObject::connect(q, SIGNAL(evaluationSuspended()),
                             q, SLOT(_q_showStandardWindow()));
        }
    }
}

/*!
  Constructs a new QScriptEngineDebugger object with the given \a
  parent.

  To attach a QScriptEngine to the debugger, use attachTo()
  function.

*/
QScriptEngineDebugger::QScriptEngineDebugger(QObject *parent)
    : QObject(*new QScriptEngineDebuggerPrivate, parent)
{
}

/*!
  Destroys this QScriptEngineDebugger.
*/
QScriptEngineDebugger::~QScriptEngineDebugger()
{
}

/*!
  Attaches to the given \a engine.

  The debugger will install a custom agent (using
  QScriptEngine::setAgent()) to monitor the engine. While the debugger
  is attached, you should not change the agent; however, if you do
  have to perform additional monitoring, you must set a proxy agent
  that forwards all events to the debugger's agent.

  \sa detach()
*/
void QScriptEngineDebugger::attachTo(QScriptEngine *engine)
{
    Q_D(QScriptEngineDebugger);
    if (!engine) {
        detach();
        return;
    }
    d->createDebugger();
    if (!d->frontend)
        d->frontend = new QScriptEngineDebuggerFrontend();
    d->frontend->attachTo(engine);
    d->debugger->setFrontend(d->frontend);
}

/*!
  Detaches from the current script engine, if any.

  \sa attachTo()
*/
void QScriptEngineDebugger::detach()
{
    Q_D(QScriptEngineDebugger);
    if (d->frontend)
        d->frontend->detach();
    if (d->debugger)
        d->debugger->setFrontend(0);
}

/*!
  \since 4.6

  Returns the current state of the debugger.

  \sa evaluationResumed()
  \sa evaluationSuspended()
*/
QScriptEngineDebugger::DebuggerState QScriptEngineDebugger::state() const
{
    Q_D(const QScriptEngineDebugger);
    return !d->debugger || !d->debugger->isInteractive() ? SuspendedState : RunningState;
}

/*!

    Returns a pointer to the instance of the specified standard \a
    widget. The widgets available are defined by the DebuggerWidget
    enum.

    A main window containing all widgets is returned by
    standardWindow(). If you do not want to use this window, you can
    fetch the individual widgets with this function. For instance, the
    code example below shows how to set up a layout containing a
    \l{QScriptEngineDebugger::CodeWidget}{code window} and a
    \l{QScriptEngineDebugger::StackWidget}{stack widget}.

    \snippet scriptdebugger.cpp 0

    Note that you need to set setAutoShowStandardWindow() to false; if
    not, the standard window will be shown regardless.

    \sa action(), standardWindow(), setAutoShowStandardWindow()
*/
QWidget *QScriptEngineDebugger::widget(DebuggerWidget widget) const
{
    Q_D(const QScriptEngineDebugger);
    const_cast<QScriptEngineDebuggerPrivate*>(d)->createDebugger();
    return d->debugger->widget(static_cast<QScriptDebugger::DebuggerWidget>(static_cast<int>(widget)));
}

/*!
    Returns a pointer to the specified \a action. The actions available
    are given by the DebuggerAction enum.

    With this function, you can add the actions to your own widgets,
    toolbars, and menus. It is also convenient if you, for example,
    wish to spice things up with your own groovy icons. The code
    example below shows how to add actions to a QToolBar.

    \snippet scriptdebugger.cpp 1

    Note that QScriptEngineDebugger has already added the actions to
    its \l{DebuggerWidget}{standard widgets} and \l{standardWindow()}{standard window}.

    \sa widget(), createStandardMenu(), createStandardToolBar(), standardWindow()
*/
QAction *QScriptEngineDebugger::action(DebuggerAction action) const
{
    Q_D(const QScriptEngineDebugger);
    QScriptEngineDebugger *that = const_cast<QScriptEngineDebugger*>(this);
    that->d_func()->createDebugger();
    return d->debugger->action(static_cast<QScriptDebugger::DebuggerAction>(static_cast<int>(action)), that);
}

/*!
  Returns whether the standard debugger window is automatically shown when
  evaluation is suspended.

  The default is true.
*/
bool QScriptEngineDebugger::autoShowStandardWindow() const
{
    Q_D(const QScriptEngineDebugger);
    return d->autoShow;
}

/*!
  Sets whether the standard debugger window is automatically shown when
  evaluation is suspended. If \a autoShow is true, the window will be
  automatically shown, otherwise it will not.
*/
void QScriptEngineDebugger::setAutoShowStandardWindow(bool autoShow)
{
    Q_D(QScriptEngineDebugger);
    if (autoShow == d->autoShow)
        return;
    if (autoShow) {
        QObject::connect(this, SIGNAL(evaluationSuspended()),
                         this, SLOT(_q_showStandardWindow()));
    } else {
        QObject::disconnect(this, SIGNAL(evaluationSuspended()),
                            this, SLOT(_q_showStandardWindow()));
    }
    d->autoShow = autoShow;
}

/*!
  Returns a main window with a standard configuration of the debugger's
  components.

  \sa createStandardMenu(), createStandardToolBar()
*/
#ifndef QT_NO_MAINWINDOW
QMainWindow *QScriptEngineDebugger::standardWindow() const
{
    Q_D(const QScriptEngineDebugger);
    if (d->standardWindow)
        return d->standardWindow;
    if (!QApplication::instance())
        return 0;
    QScriptEngineDebugger *that = const_cast<QScriptEngineDebugger*>(this);

    QMainWindow *win = new QMainWindow();
#ifndef QT_NO_DOCKWIDGET
    QDockWidget *scriptsDock = new QDockWidget(win);
    scriptsDock->setObjectName(QLatin1String("qtscriptdebugger_scriptsDockWidget"));
    scriptsDock->setWindowTitle(tr("Loaded Scripts"));
    scriptsDock->setWidget(widget(ScriptsWidget));
    win->addDockWidget(Qt::LeftDockWidgetArea, scriptsDock);

    QDockWidget *breakpointsDock = new QDockWidget(win);
    breakpointsDock->setObjectName(QLatin1String("qtscriptdebugger_breakpointsDockWidget"));
    breakpointsDock->setWindowTitle(tr("Breakpoints"));
    breakpointsDock->setWidget(widget(BreakpointsWidget));
    win->addDockWidget(Qt::LeftDockWidgetArea, breakpointsDock);

    QDockWidget *stackDock = new QDockWidget(win);
    stackDock->setObjectName(QLatin1String("qtscriptdebugger_stackDockWidget"));
    stackDock->setWindowTitle(tr("Stack"));
    stackDock->setWidget(widget(StackWidget));
    win->addDockWidget(Qt::RightDockWidgetArea, stackDock);

    QDockWidget *localsDock = new QDockWidget(win);
    localsDock->setObjectName(QLatin1String("qtscriptdebugger_localsDockWidget"));
    localsDock->setWindowTitle(tr("Locals"));
    localsDock->setWidget(widget(LocalsWidget));
    win->addDockWidget(Qt::RightDockWidgetArea, localsDock);

    QDockWidget *consoleDock = new QDockWidget(win);
    consoleDock->setObjectName(QLatin1String("qtscriptdebugger_consoleDockWidget"));
    consoleDock->setWindowTitle(tr("Console"));
    consoleDock->setWidget(widget(ConsoleWidget));
    win->addDockWidget(Qt::BottomDockWidgetArea, consoleDock);

    QDockWidget *debugOutputDock = new QDockWidget(win);
    debugOutputDock->setObjectName(QLatin1String("qtscriptdebugger_debugOutputDockWidget"));
    debugOutputDock->setWindowTitle(tr("Debug Output"));
    debugOutputDock->setWidget(widget(DebugOutputWidget));
    win->addDockWidget(Qt::BottomDockWidgetArea, debugOutputDock);

    QDockWidget *errorLogDock = new QDockWidget(win);
    errorLogDock->setObjectName(QLatin1String("qtscriptdebugger_errorLogDockWidget"));
    errorLogDock->setWindowTitle(tr("Error Log"));
    errorLogDock->setWidget(widget(ErrorLogWidget));
    win->addDockWidget(Qt::BottomDockWidgetArea, errorLogDock);

    win->tabifyDockWidget(errorLogDock, debugOutputDock);
    win->tabifyDockWidget(debugOutputDock, consoleDock);
#endif

#ifndef QT_NO_TOOLBAR
    win->addToolBar(Qt::TopToolBarArea, that->createStandardToolBar());
#endif

#ifndef QT_NO_MENUBAR
    win->menuBar()->addMenu(that->createStandardMenu(win));

    QMenu *editMenu = win->menuBar()->addMenu(tr("Search"));
    editMenu->addAction(action(FindInScriptAction));
    editMenu->addAction(action(FindNextInScriptAction));
    editMenu->addAction(action(FindPreviousInScriptAction));
    editMenu->addSeparator();
    editMenu->addAction(action(GoToLineAction));

#ifndef QT_NO_DOCKWIDGET
    QMenu *viewMenu = win->menuBar()->addMenu(tr("View"));
    viewMenu->addAction(scriptsDock->toggleViewAction());
    viewMenu->addAction(breakpointsDock->toggleViewAction());
    viewMenu->addAction(stackDock->toggleViewAction());
    viewMenu->addAction(localsDock->toggleViewAction());
    viewMenu->addAction(consoleDock->toggleViewAction());
    viewMenu->addAction(debugOutputDock->toggleViewAction());
    viewMenu->addAction(errorLogDock->toggleViewAction());
#endif
#endif

    QWidget *central = new QWidget();
    QVBoxLayout *vbox = new QVBoxLayout(central);
    vbox->setMargin(0);
    vbox->addWidget(widget(CodeWidget));
    vbox->addWidget(widget(CodeFinderWidget));
    widget(CodeFinderWidget)->hide();
    win->setCentralWidget(central);

    win->setWindowTitle(tr("Qt Script Debugger"));
#ifndef QT_NO_TOOLBAR
    win->setUnifiedTitleAndToolBarOnMac(true);
#endif

    QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
    QVariant geometry = settings.value(QLatin1String("Qt/scripttools/debugging/mainWindowGeometry"));
    if (geometry.isValid())
        win->restoreGeometry(geometry.toByteArray());
    QVariant state = settings.value(QLatin1String("Qt/scripttools/debugging/mainWindowState"));
    if (state.isValid())
        win->restoreState(state.toByteArray());

    WidgetClosedNotifier *closedNotifier = new WidgetClosedNotifier(win, that);
    QObject::connect(closedNotifier, SIGNAL(widgetClosed()),
                     action(ContinueAction), SLOT(trigger()));

    const_cast<QScriptEngineDebuggerPrivate*>(d)->standardWindow = win;
    return win;
}
#endif // QT_NO_MAINWINDOW

/*!
  Creates a standard debugger menu with the given \a parent.
  Returns the new menu object.

  \sa createStandardToolBar()
*/
QMenu *QScriptEngineDebugger::createStandardMenu(QWidget *parent)
{
    Q_D(QScriptEngineDebugger);
    d->createDebugger();
    return d->debugger->createStandardMenu(parent, this);
}

/*!
  Creates a standard debugger toolbar with the given \a parent.
  Returns the new toolbar object.

  \sa createStandardMenu()
*/
#ifndef QT_NO_TOOLBAR
QToolBar *QScriptEngineDebugger::createStandardToolBar(QWidget *parent)
{
    Q_D(QScriptEngineDebugger);
    d->createDebugger();
    return d->debugger->createStandardToolBar(parent, this);
}
#endif

/*!
    \fn QScriptEngineDebugger::evaluationSuspended()

    This signal is emitted when the debugger has suspended script
    evaluation for whatever reason (e.g. due to an uncaught script
    exception, or due to a breakpoint being triggered).

    \sa evaluationResumed()
*/

/*!
    \fn QScriptEngineDebugger::evaluationResumed()

    This signal is emitted when the debugger has resumed script
    evaluation (e.g. the user gave the "continue" command).

    \sa evaluationSuspended()
*/

QT_END_NAMESPACE

//#include "qscriptenginedebugger.moc"

//#include "moc_qscriptenginedebugger.cpp"
