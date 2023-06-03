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

#ifndef QSCRIPTDEBUGGERLOCALSWIDGET_P_H
#define QSCRIPTDEBUGGERLOCALSWIDGET_P_H

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


#include "qscriptdebuggerlocalswidgetinterface_p_p.h"
#include "qscriptdebuggerlocalsmodel_p.h"
#include "qscriptcompletionproviderinterface_p.h"
#include "qscriptcompletiontaskinterface_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qheaderview.h>
#include <QtWidgets/qcompleter.h>
#include <QtCore/qstringlistmodel.h>
#include <QtWidgets/qtreeview.h>
#include <QtWidgets/qboxlayout.h>
#include <QtCore/qsortfilterproxymodel.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qstyleditemdelegate.h>
#include <QtGui/qevent.h>
#include <QtWidgets/qmessagebox.h>

#include <QtScript/qscriptengine.h>
#include "qscriptdebuggerlocalswidgetinterface_p.h"



QT_BEGIN_NAMESPACE

class QScriptDebuggerLocalsWidgetPrivate;
class Q_AUTOTEST_EXPORT QScriptDebuggerLocalsWidget:
    public QScriptDebuggerLocalsWidgetInterface
{
    Q_OBJECT
public:
    QScriptDebuggerLocalsWidget(QWidget *parent = 0);
    ~QScriptDebuggerLocalsWidget();

    QScriptDebuggerLocalsModel *localsModel() const;
    void setLocalsModel(QScriptDebuggerLocalsModel *model);

    void expand(const QModelIndex &index);

private:
    Q_DECLARE_PRIVATE(QScriptDebuggerLocalsWidget)
    Q_DISABLE_COPY(QScriptDebuggerLocalsWidget)

    Q_PRIVATE_SLOT(d_func(), void _q_onCompletionTaskFinished())
    Q_PRIVATE_SLOT(d_func(), void _q_insertCompletion(const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_expandIndex(const QModelIndex &))
};


namespace {

	class CustomProxyModel : public QSortFilterProxyModel
	{
	public:
		CustomProxyModel(QObject *parent = 0)
			: QSortFilterProxyModel(parent) {}

		bool hasChildren(const QModelIndex &parent) const
		{
			if (!sourceModel())
				return false;
			QModelIndex sourceParent = mapToSource(parent);
			if (parent.isValid() && !sourceParent.isValid())
				return false;
			return sourceModel()->hasChildren(sourceParent);
		}
	};

} // namespace


class QScriptDebuggerLocalsItemDelegate
	: public QStyledItemDelegate
{
	Q_OBJECT
public:
	QScriptDebuggerLocalsItemDelegate(QObject *parent = 0);

	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
	void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	bool eventFilter(QObject *watched, QEvent *event);

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


class QScriptDebuggerLocalsWidgetPrivate
	: public QScriptDebuggerLocalsWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptDebuggerLocalsWidget)
public:
	QScriptDebuggerLocalsWidgetPrivate();
	~QScriptDebuggerLocalsWidgetPrivate();

	void complete(QLineEdit *le);

	// private slots
	void _q_onCompletionTaskFinished();
	void _q_insertCompletion(const QString &text);
	void _q_expandIndex(const QModelIndex &index);

	QTreeView *view;
	QPointer<QLineEdit> completingEditor;
	QCompleter *completer;
	CustomProxyModel *proxy;
};


QT_END_NAMESPACE

#endif
