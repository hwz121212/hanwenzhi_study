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

#ifndef QSCRIPTDEBUGGERCONSOLEWIDGET_P_H
#define QSCRIPTDEBUGGERCONSOLEWIDGET_P_H

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


#include "qscriptdebuggerconsolewidgetinterface_p_p.h"
#include "qscriptdebuggerconsolehistorianinterface_p.h"
#include "qscriptcompletionproviderinterface_p.h"
#include "qscriptcompletiontaskinterface_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qplaintextedit.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qlistview.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qcompleter.h>


#include <algorithm>
#include "qscriptdebuggerconsolewidgetinterface_p.h"
#include "qscriptdebuggerconsolewidgetinterface_p_p.h"


QT_BEGIN_NAMESPACE

class QScriptDebuggerConsoleWidgetPrivate;
class CommandLine;

class Q_AUTOTEST_EXPORT QScriptDebuggerConsoleWidget:
    public QScriptDebuggerConsoleWidgetInterface
{
    Q_OBJECT
public:
    QScriptDebuggerConsoleWidget(QWidget *parent = 0);
    ~QScriptDebuggerConsoleWidget();

    void message(QtMsgType type, const QString &text,
                 const QString &fileName = QString(),
                 int lineNumber = -1, int columnNumber = -1,
                 const QVariant &data = QVariant());

    void setLineContinuationMode(bool enabled);

    void clear();

protected:
    void keyPressEvent(QKeyEvent *event);
    bool focusNextPrevChild(bool);

protected:
    QScriptDebuggerConsoleWidget(
        QScriptDebuggerConsoleWidgetPrivate &dd,
        QWidget *parent);

private:
    Q_DECLARE_PRIVATE(QScriptDebuggerConsoleWidget)
    Q_DISABLE_COPY(QScriptDebuggerConsoleWidget)

    Q_PRIVATE_SLOT(d_func(), void _q_onLineEntered(const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_onLineEdited(const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_onCompletionTaskFinished())
};

class QScriptDebuggerConsoleWidgetOutputEdit;
class QScriptDebuggerConsoleWidgetPrivate
	: public QScriptDebuggerConsoleWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptDebuggerConsoleWidget)
public:
	QScriptDebuggerConsoleWidgetPrivate();
	~QScriptDebuggerConsoleWidgetPrivate();

	// private slots
	void _q_onLineEntered(const QString &contents);
	void _q_onLineEdited(const QString &contents);
	void _q_onCompletionTaskFinished();

	CommandLine *commandLine;
	QScriptDebuggerConsoleWidgetOutputEdit *outputEdit;
	int historyIndex;
	QString newInput;
};



class PromptLabel : public QLabel
{
public:
	PromptLabel(QWidget *parent = 0)
		: QLabel(parent)
	{
		setFrameShape(QFrame::NoFrame);
		setIndent(2);
		setMargin(2);
		setSizePolicy(QSizePolicy::Minimum, sizePolicy().verticalPolicy());
		setAlignment(Qt::AlignHCenter);
#ifndef QT_NO_STYLE_STYLESHEET
		setStyleSheet(QLatin1String("background: white;"));
#endif
	}

	QSize sizeHint() const {
		QFontMetrics fm(font());
		return fm.size(0, text()) + QSize(8, 0);
	}
};


class InputEdit : public QLineEdit
{
public:
	InputEdit(QWidget *parent = 0)
		: QLineEdit(parent)
	{
		setFrame(false);
		setSizePolicy(QSizePolicy::MinimumExpanding, sizePolicy().verticalPolicy());
	}
};


class CommandLine : public QWidget
{
	Q_OBJECT
public:
	CommandLine(QWidget *parent = 0)
		: QWidget(parent)
	{
		promptLabel = new PromptLabel();
		inputEdit = new InputEdit();
		QHBoxLayout *hbox = new QHBoxLayout(this);
		hbox->setSpacing(0);
		hbox->setMargin(0);
		hbox->addWidget(promptLabel);
		hbox->addWidget(inputEdit);

		QObject::connect(inputEdit, SIGNAL(returnPressed()),
			this, SLOT(onReturnPressed()));
		QObject::connect(inputEdit, SIGNAL(textEdited(QString)),
			this, SIGNAL(lineEdited(QString)));

		setFocusProxy(inputEdit);
	}

	QString prompt() const
	{
		return promptLabel->text();
	}
	void setPrompt(const QString &prompt)
	{
		promptLabel->setText(prompt);
	}

	QString input() const
	{
		return inputEdit->text();
	}
	void setInput(const QString &input)
	{
		inputEdit->setText(input);
	}

	int cursorPosition() const
	{
		return inputEdit->cursorPosition();
	}
	void setCursorPosition(int position)
	{
		inputEdit->setCursorPosition(position);
	}

	QWidget *editor() const
	{
		return inputEdit;
	}

Q_SIGNALS:
	void lineEntered(const QString &contents);
	void lineEdited(const QString &contents);

private Q_SLOTS:
	void onReturnPressed()
	{
		QString text = inputEdit->text();
		inputEdit->clear();
		emit lineEntered(text);
	}

private:
	PromptLabel *promptLabel;
	InputEdit *inputEdit;
};


class QScriptDebuggerConsoleWidgetOutputEdit : public QPlainTextEdit
{
public:
	QScriptDebuggerConsoleWidgetOutputEdit(QWidget *parent = 0)
		: QPlainTextEdit(parent)
	{
		setFrameShape(QFrame::NoFrame);
		setReadOnly(true);
		// ### there's no context menu when the edit can't have focus,
		//     even though you can select text in it.
		//        setFocusPolicy(Qt::NoFocus);
		setMaximumBlockCount(2500);
	}

	void scrollToBottom()
	{
		QScrollBar *bar = verticalScrollBar();
		bar->setValue(bar->maximum());
	}

	int charactersPerLine() const
	{
		QFontMetrics fm(font());
		return width() / fm.maxWidth();
	}
};


QT_END_NAMESPACE

#endif
