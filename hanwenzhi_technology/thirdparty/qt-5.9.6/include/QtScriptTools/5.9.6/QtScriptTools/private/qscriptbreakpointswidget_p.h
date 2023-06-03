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

#ifndef QSCRIPTBREAKPOINTSWIDGET_P_H
#define QSCRIPTBREAKPOINTSWIDGET_P_H

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

#include "qscriptbreakpointswidgetinterface_p.h"

#include "qscriptbreakpointswidgetinterface_p_p.h"
#include "qscriptbreakpointsmodel_p.h"
#include "qscriptdebuggerscriptsmodel_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qaction.h>
#include <QtWidgets/qcompleter.h>
#include <QtWidgets/qheaderview.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qmessagebox.h>
#include <QtWidgets/qtoolbar.h>
#include <QtWidgets/qtoolbutton.h>
#include <QtWidgets/qtreeview.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qstyleditemdelegate.h>
#include <QtGui/qevent.h>
#include <QtScript/qscriptengine.h>

QT_BEGIN_NAMESPACE

class QScriptBreakpointsWidgetPrivate;
class Q_AUTOTEST_EXPORT QScriptBreakpointsWidget:
    public QScriptBreakpointsWidgetInterface
{
    Q_OBJECT
public:
    QScriptBreakpointsWidget(QWidget *parent = 0);
    ~QScriptBreakpointsWidget();

    QScriptBreakpointsModel *breakpointsModel() const;
    void setBreakpointsModel(QScriptBreakpointsModel *model);

    QScriptDebuggerScriptsModel *scriptsModel() const;
    void setScriptsModel(QScriptDebuggerScriptsModel *model);

protected:
    void keyPressEvent(QKeyEvent *e);

private:
    Q_PRIVATE_SLOT(d_func(), void _q_newBreakpoint())
    Q_PRIVATE_SLOT(d_func(), void _q_deleteBreakpoint())
    Q_PRIVATE_SLOT(d_func(), void _q_onCurrentChanged(const QModelIndex &))
    Q_PRIVATE_SLOT(d_func(), void _q_onNewBreakpointRequest(const QString &, int))

    Q_DECLARE_PRIVATE(QScriptBreakpointsWidget)
    Q_DISABLE_COPY(QScriptBreakpointsWidget)
};


class QScriptNewBreakpointWidget : public QWidget
{
	Q_OBJECT
public:
	QScriptNewBreakpointWidget(QWidget *parent = 0)
		: QWidget(parent) {
		QString system = QLatin1String("win");
		QHBoxLayout *hboxLayout = new QHBoxLayout(this);
#ifdef Q_OS_MAC
		system = QLatin1String("mac");
#else
		hboxLayout->setSpacing(6);
		hboxLayout->setMargin(0);
#endif

		toolClose = new QToolButton(this);
		toolClose->setIcon(QIcon(QString::fromUtf8(":/qt/scripttools/debugging/images/%1/closetab.png").arg(system)));
		toolClose->setAutoRaise(true);
		toolClose->setText(tr("Close"));
		hboxLayout->addWidget(toolClose);

		fileNameEdit = new QLineEdit();
		setFocusProxy(fileNameEdit);
		QRegExp locationRegExp(QString::fromLatin1(".+:[0-9]+"));
		QRegExpValidator *validator = new QRegExpValidator(locationRegExp, fileNameEdit);
		fileNameEdit->setValidator(validator);
		hboxLayout->addWidget(fileNameEdit);

		toolOk = new QToolButton(this);
		toolOk->setIcon(QIcon(QString::fromUtf8(":/qt/scripttools/debugging/images/%1/plus.png").arg(system)));
		toolOk->setAutoRaise(true);
		toolOk->setEnabled(false);
		hboxLayout->addWidget(toolOk);

		QObject::connect(toolClose, SIGNAL(clicked()), this, SLOT(hide()));
		QObject::connect(toolOk, SIGNAL(clicked()), this, SLOT(onOkClicked()));
		QObject::connect(fileNameEdit, SIGNAL(textChanged(QString)),
			this, SLOT(onTextChanged()));
		QObject::connect(fileNameEdit, SIGNAL(returnPressed()),
			this, SLOT(onOkClicked()));
	}

	void setCompleter(QCompleter *comp)
	{
		fileNameEdit->setCompleter(comp);
	}

Q_SIGNALS:
	void newBreakpointRequest(const QString &fileName, int lineNumber);

protected:
	void keyPressEvent(QKeyEvent *e)
	{
		if (e->key() == Qt::Key_Escape)
			hide();
		else
			QWidget::keyPressEvent(e);
	}

private Q_SLOTS:
	void onOkClicked()
	{
		QString location = fileNameEdit->text();
		fileNameEdit->clear();
		QString fileName = location.left(location.lastIndexOf(QLatin1Char(':')));
		int lineNumber = location.mid(fileName.length() + 1).toInt();
		emit newBreakpointRequest(fileName, lineNumber);
	}

	void onTextChanged()
	{
		toolOk->setEnabled(fileNameEdit->hasAcceptableInput());
	}

private:
	QLineEdit *fileNameEdit;
	QToolButton *toolClose;
	QToolButton *toolOk;
};


class QScriptBreakpointsItemDelegate : public QStyledItemDelegate
{
	Q_OBJECT
public:
	QScriptBreakpointsItemDelegate(QObject *parent = 0)
		: QStyledItemDelegate(parent) {}

	QWidget *createEditor(QWidget *parent,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const
	{
		QWidget *editor = QStyledItemDelegate::createEditor(parent, option, index);
		if (index.column() == 2) {
			// condition
			QLineEdit *le = qobject_cast<QLineEdit*>(editor);
			if (le) {
				QObject::connect(le, SIGNAL(textEdited(QString)),
					this, SLOT(validateInput(QString)));
			}
		}
		return editor;
	}

	bool eventFilter(QObject *editor, QEvent *event)
	{
		if (QLineEdit *le = qobject_cast<QLineEdit*>(editor)) {
			if (event->type() == QEvent::KeyPress) {
				int key = static_cast<QKeyEvent*>(event)->key();
				if ((key == Qt::Key_Enter) || (key == Qt::Key_Return)) {
					if (QScriptEngine::checkSyntax(le->text()).state() != QScriptSyntaxCheckResult::Valid) {
						// ignore when script contains syntax error
						return true;
					}
				}
			}
		}
		return QStyledItemDelegate::eventFilter(editor, event);
	}

	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const
	{
		if (index.column() == 2) {
			// check that the syntax is OK
			QString condition = qobject_cast<QLineEdit*>(editor)->text();
			if (QScriptEngine::checkSyntax(condition).state() != QScriptSyntaxCheckResult::Valid)
				return;
		}
		QStyledItemDelegate::setModelData(editor, model, index);
	}

private Q_SLOTS:
	void validateInput(const QString &text)
	{
		QWidget *editor = qobject_cast<QWidget*>(sender());
		QPalette pal = editor->palette();
		QColor col;
		bool ok = (QScriptEngine::checkSyntax(text).state() == QScriptSyntaxCheckResult::Valid);
		if (ok) {
			col = Qt::white;
		}
		else {
			QScriptSyntaxCheckResult result = QScriptEngine::checkSyntax(
				text + QLatin1Char('\n'));
			if (result.state() == QScriptSyntaxCheckResult::Intermediate)
				col = QColor(255, 240, 192);
			else
				col = QColor(255, 102, 102);
		}
		pal.setColor(QPalette::Active, QPalette::Base, col);
		editor->setPalette(pal);
	}
};


class QScriptBreakpointsWidgetPrivate
	: public QScriptBreakpointsWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptBreakpointsWidget)
public:
	QScriptBreakpointsWidgetPrivate();
	~QScriptBreakpointsWidgetPrivate();

	void _q_newBreakpoint();
	void _q_deleteBreakpoint();
	void _q_onCurrentChanged(const QModelIndex &index);
	void _q_onNewBreakpointRequest(const QString &fileName, int lineNumber);

	static QPixmap pixmap(const QString &path)
	{
		static QString prefix = QString::fromLatin1(":/qt/scripttools/debugging/images/");
		return QPixmap(prefix + path);
	}

	QTreeView *view;
	QScriptNewBreakpointWidget *newBreakpointWidget;
	QAction *deleteBreakpointAction;
	QScriptDebuggerScriptsModel *scriptsModel;
};




QT_END_NAMESPACE

#endif
