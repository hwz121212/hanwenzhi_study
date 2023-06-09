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

#ifndef QSCRIPTDEBUGGERCODEFINDERWIDGET_P_H
#define QSCRIPTDEBUGGERCODEFINDERWIDGET_P_H

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

#include "qscriptdebuggercodefinderwidgetinterface_p_p.h"

#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qcheckbox.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qtoolbutton.h>
#include <QtGui/qevent.h>
#include <QtCore/qdebug.h>

#include "qscriptdebuggercodefinderwidgetinterface_p.h"
#include "qscriptdebuggercodefinderwidgetinterface_p_p.h"

QT_BEGIN_NAMESPACE

class QScriptDebuggerCodeFinderWidgetPrivate;
class Q_AUTOTEST_EXPORT QScriptDebuggerCodeFinderWidget:
    public QScriptDebuggerCodeFinderWidgetInterface
{
    Q_OBJECT
public:
    QScriptDebuggerCodeFinderWidget(QWidget *parent = 0);
    ~QScriptDebuggerCodeFinderWidget();

    int findOptions() const;

    QString text() const;
    void setText(const QString &text);

    void setOK(bool ok);
    void setWrapped(bool wrapped);

protected:
    void keyPressEvent(QKeyEvent *e);

private:
    Q_DECLARE_PRIVATE(QScriptDebuggerCodeFinderWidget)
    Q_DISABLE_COPY(QScriptDebuggerCodeFinderWidget)

    Q_PRIVATE_SLOT(d_func(), void _q_updateButtons())
    Q_PRIVATE_SLOT(d_func(), void _q_onTextChanged(const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_next())
    Q_PRIVATE_SLOT(d_func(), void _q_previous())
};



class QScriptDebuggerCodeFinderWidgetPrivate
	: public QScriptDebuggerCodeFinderWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptDebuggerCodeFinderWidget)
public:
	QScriptDebuggerCodeFinderWidgetPrivate();
	~QScriptDebuggerCodeFinderWidgetPrivate();

	// private slots
	void _q_updateButtons();
	void _q_onTextChanged(const QString &);
	void _q_next();
	void _q_previous();

	int findOptions() const;

	QLineEdit *editFind;
	QCheckBox *checkCase;
	QLabel *labelWrapped;
	QToolButton *toolNext;
	QToolButton *toolClose;
	QToolButton *toolPrevious;
	QCheckBox *checkWholeWords;
};


QT_END_NAMESPACE

#endif
