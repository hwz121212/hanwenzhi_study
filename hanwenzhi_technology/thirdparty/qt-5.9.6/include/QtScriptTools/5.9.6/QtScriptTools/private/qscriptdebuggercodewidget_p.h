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

#ifndef QSCRIPTDEBUGGERCODEWIDGET_P_H
#define QSCRIPTDEBUGGERCODEWIDGET_P_H

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

#include "qscriptdebuggercodewidgetinterface_p.h"

#include "qscriptdebuggercodewidgetinterface_p_p.h"
#include "qscriptdebuggercodeview_p.h"
#include "qscriptdebuggerscriptsmodel_p.h"
#include "qscriptbreakpointsmodel_p.h"
#include "qscripttooltipproviderinterface_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qstackedwidget.h>

QT_BEGIN_NAMESPACE

class QScriptDebuggerCodeWidgetPrivate;
class Q_AUTOTEST_EXPORT QScriptDebuggerCodeWidget:
    public QScriptDebuggerCodeWidgetInterface
{
    Q_OBJECT
public:
    QScriptDebuggerCodeWidget(QWidget *parent = 0);
    ~QScriptDebuggerCodeWidget();

    QScriptDebuggerScriptsModel *scriptsModel() const;
    void setScriptsModel(QScriptDebuggerScriptsModel *model);

    void setToolTipProvider(QScriptToolTipProviderInterface *toolTipProvider);

    qint64 currentScriptId() const;
    void setCurrentScript(qint64 scriptId);

    void invalidateExecutionLineNumbers();

    QScriptBreakpointsModel *breakpointsModel() const;
    void setBreakpointsModel(QScriptBreakpointsModel *model);

    QScriptDebuggerCodeViewInterface *currentView() const;

private:
    Q_DECLARE_PRIVATE(QScriptDebuggerCodeWidget)
    Q_DISABLE_COPY(QScriptDebuggerCodeWidget)

    Q_PRIVATE_SLOT(d_func(), void _q_onBreakpointToggleRequest(int,bool))
    Q_PRIVATE_SLOT(d_func(), void _q_onBreakpointEnableRequest(int,bool))
    Q_PRIVATE_SLOT(d_func(), void _q_onBreakpointsAboutToBeRemoved(const QModelIndex &,int,int))
    Q_PRIVATE_SLOT(d_func(), void _q_onBreakpointsInserted(const QModelIndex &,int,int))
    Q_PRIVATE_SLOT(d_func(), void _q_onBreakpointsDataChanged(const QModelIndex &, const QModelIndex &))
    Q_PRIVATE_SLOT(d_func(), void _q_onScriptsChanged())
    Q_PRIVATE_SLOT(d_func(), void _q_onToolTipRequest(const QPoint &, int, const QStringList &))
};



class QScriptDebuggerCodeWidgetPrivate
	: public QScriptDebuggerCodeWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptDebuggerCodeWidget)
public:
	QScriptDebuggerCodeWidgetPrivate();
	~QScriptDebuggerCodeWidgetPrivate();

	qint64 scriptId(QScriptDebuggerCodeViewInterface *view) const;

	// private slots
	void _q_onBreakpointToggleRequest(int lineNumber, bool on);
	void _q_onBreakpointEnableRequest(int lineNumber, bool enable);
	void _q_onBreakpointsAboutToBeRemoved(const QModelIndex&, int, int);
	void _q_onBreakpointsInserted(const QModelIndex&, int, int);
	void _q_onBreakpointsDataChanged(const QModelIndex &, const QModelIndex &);
	void _q_onScriptsChanged();
	void _q_onToolTipRequest(const QPoint &pos, int lineNumber, const QStringList &path);

	QScriptDebuggerScriptsModel *scriptsModel;
	QStackedWidget *viewStack;
	QHash<qint64, QScriptDebuggerCodeViewInterface*> viewHash;
	QScriptBreakpointsModel *breakpointsModel;
	QScriptToolTipProviderInterface *toolTipProvider;
};


QT_END_NAMESPACE

#endif
