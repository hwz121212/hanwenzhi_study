/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the tools applications of the Qt Toolkit.
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
// of Qt Designer.  This header
// file may change from version to version without notice, or even be removed.
//
// We mean it.
//

#ifndef QTTOOLBARDIALOG_H
#define QTTOOLBARDIALOG_H


#include "ui_qttoolbardialog.h"

#include <QtCore/QSet>
#include <QtGui/QtEvents>
#include <QtWidgets/QAction>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class QMainWindow;
class QAction;
class QToolBar;

class QtToolBarManagerPrivate;

class QtToolBarManager : public QObject
{
    Q_OBJECT
public:

    explicit QtToolBarManager(QObject *parent = 0);
    ~QtToolBarManager();

    void setMainWindow(QMainWindow *mainWindow);
    QMainWindow *mainWindow() const;

    void addAction(QAction *action, const QString &category);
    void removeAction(QAction *action);

    void addToolBar(QToolBar *toolBar, const QString &category);
    void removeToolBar(QToolBar *toolBar);

    QList<QToolBar *> toolBars() const;

    QByteArray saveState(int version = 0) const;
    bool restoreState(const QByteArray &state, int version = 0);

private:

    friend class QtToolBarDialog;
    QScopedPointer<QtToolBarManagerPrivate> d_ptr;
    Q_DECLARE_PRIVATE(QtToolBarManager)
    Q_DISABLE_COPY(QtToolBarManager)
};

//class QtToolBarDialogPrivate;


class ToolBarItem {
public:
	ToolBarItem() : tb(0) {}
	ToolBarItem(QToolBar *toolBar) : tb(toolBar) {}
	ToolBarItem(QToolBar *toolBar, const QString &toolBarName)
		: tb(toolBar), tbName(toolBarName) {}
	ToolBarItem(const QString &toolBarName) : tb(0), tbName(toolBarName) {}
	QToolBar *toolBar() const
	{
		return tb;
	}
	void setToolBar(QToolBar *toolBar)
	{
		tb = toolBar;
	}
	QString toolBarName() const
	{
		return tbName;
	}
	void setToolBarName(const QString &toolBarName)
	{
		tbName = toolBarName;
	}
private:
	QToolBar *tb;
	QString tbName;
};


class QtFullToolBarManagerPrivate
{
	class QtFullToolBarManager *q_ptr;
	Q_DECLARE_PUBLIC(QtFullToolBarManager)

public:

	QToolBar *toolBarWidgetAction(QAction *action) const;
	void removeWidgetActions(const QMap<QToolBar *, QList<QAction *> > &actions);

	enum {
		VersionMarker = 0xff,
		ToolBarMarker = 0xfe,
		CustomToolBarMarker = 0xfd,
	};

	void saveState(QDataStream &stream) const;
	bool restoreState(QDataStream &stream) const;
	QToolBar *findDefaultToolBar(const QString &objectName) const;
	QAction *findAction(const QString &actionName) const;

	QToolBar *toolBarByName(const QString &toolBarName) const;

	QMap<QString, QList<QAction *> > categoryToActions;
	QMap<QAction *, QString>         actionToCategory;

	QSet<QAction *> allActions;
	QMap<QAction *, QToolBar *> widgetActions;
	QSet<QAction *> regularActions;
	QMap<QAction *, QList<QToolBar *> > actionToToolBars;

	QMap<QToolBar *, QList<QAction *> > toolBars;
	QMap<QToolBar *, QList<QAction *> > toolBarsWithSeparators;
	QMap<QToolBar *, QList<QAction *> > defaultToolBars;
	QList<QToolBar *> customToolBars;

	QMainWindow *theMainWindow{ nullptr };
};

class QtFullToolBarManager : public QObject
{
	Q_OBJECT
public:
	QtFullToolBarManager(QObject *parent);
	~QtFullToolBarManager();

	void setMainWindow(QMainWindow *mainWindow);
	QMainWindow *mainWindow() const;

	void addCategory(const QString &category);
	bool hasCategory(const QString &category) const;
	QStringList categories() const;
	QList<QAction *> categoryActions(const QString &category) const;
	QString actionCategory(QAction *action) const;

	// only non-separator
	void addAction(QAction *action, const QString &category);

	void removeAction(QAction *action);

	QSet<QAction *> actions() const;
	bool isWidgetAction(QAction *action) const;

	/*
	Adds (registers) toolBar. Adds (registers) actions that already exists in toolBar.
	Remembers toolbar and its actions as a default.
	*/
	void addDefaultToolBar(QToolBar *toolBar, const QString &category);

	void removeDefaultToolBar(QToolBar *toolBar);
	// NULL on action list means separator.
	QMap<QToolBar *, QList<QAction *> > defaultToolBars() const;
	bool isDefaultToolBar(QToolBar *toolBar) const;

	QToolBar *createToolBar(const QString &toolBarName);
	void deleteToolBar(QToolBar *toolBar); // only those which were created, not added

	QList<QAction *> actions(QToolBar *toolBar) const;

	void setToolBars(const QMap<QToolBar *, QList<QAction *> > &actions);
	void setToolBar(QToolBar *toolBar, const QList<QAction *> &actions);

	QMap<QToolBar *, QList<QAction *> > toolBarsActions() const;
	QByteArray saveState(int version = 0) const;
	bool restoreState(const QByteArray &state, int version = 0);

public slots:

	void resetToolBar(QToolBar *toolBar);
	void resetAllToolBars();

signals:
	void toolBarCreated(QToolBar *toolBar);
	void toolBarRemoved(QToolBar *toolBar);

	/*
	If QToolBarWidgetAction was in another tool bar and is inserted into
	this toolBar, toolBarChanged is first emitted for other toolbar - without
	that action. (Another approach may be that user first must call setToolBar
	without that action for old tool bar)
	*/
	void toolBarChanged(QToolBar *toolBar, const QList<QAction *> &actions);

private:
	QScopedPointer<QtFullToolBarManagerPrivate> d_ptr;
	Q_DECLARE_PRIVATE(QtFullToolBarManager)
		Q_DISABLE_COPY(QtFullToolBarManager)
};



class QtToolBarDialogPrivate {
	QtToolBarDialog *q_ptr;
	Q_DECLARE_PUBLIC(QtToolBarDialog)
public:
	QtToolBarDialogPrivate()
		: toolBarManager(0),
		currentAction(0),
		currentToolBar(0)
	{ }

	ToolBarItem *createItem(QToolBar *toolBar);
	ToolBarItem *createItem(const QString &toolBarName);
	void deleteItem(ToolBarItem *item);

	void newClicked();
	void removeClicked();
	void defaultClicked();
	void okClicked();
	void applyClicked();
	void cancelClicked();
	void upClicked();
	void downClicked();
	void leftClicked();
	void rightClicked();
	void renameClicked();
	void toolBarRenamed(QListWidgetItem *item);
	void currentActionChanged(QTreeWidgetItem *current);
	void currentToolBarChanged(QListWidgetItem *current);
	void currentToolBarActionChanged(QListWidgetItem *current);

	void removeToolBar(ToolBarItem *item);
	bool isDefaultToolBar(ToolBarItem *item) const;
	void setButtons();
	void clearOld();
	void fillNew();
	QtFullToolBarManager *toolBarManager;
	QMap<ToolBarItem *, QList<QAction *> > currentState;
	QMap<QToolBar *, ToolBarItem *> toolBarItems;
	QSet<ToolBarItem *> createdItems;
	QSet<ToolBarItem *> removedItems;

	QSet<ToolBarItem *> allToolBarItems;

	// static
	QTreeWidgetItem *currentAction;
	QMap<QAction *, QTreeWidgetItem *> actionToItem;
	QMap<QTreeWidgetItem *, QAction *> itemToAction;

	// dynamic
	ToolBarItem *currentToolBar;
	QMap<ToolBarItem *, QListWidgetItem *> toolBarToItem;
	QMap<QListWidgetItem *, ToolBarItem *> itemToToolBar;

	// dynamic
	QMap<QAction *, QListWidgetItem *> actionToCurrentItem;
	QMap<QListWidgetItem *, QAction *> currentItemToAction;

	QMap<QAction *, ToolBarItem *> widgetActionToToolBar;
	QMap<ToolBarItem *, QSet<QAction *> > toolBarToWidgetActions;

	QString separatorText;
	Ui::QtToolBarDialog ui;
};


class QtToolBarDialog : public QDialog
{
    Q_OBJECT
public:

    explicit QtToolBarDialog(QWidget *parent = 0, Qt::WindowFlags flags = 0);
    ~QtToolBarDialog();

    void setToolBarManager(QtToolBarManager *toolBarManager);

protected:

    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);

private:

    QScopedPointer<QtToolBarDialogPrivate> d_ptr;
    Q_DECLARE_PRIVATE(QtToolBarDialog)
    Q_DISABLE_COPY(QtToolBarDialog)

    Q_PRIVATE_SLOT(d_func(), void newClicked())
    Q_PRIVATE_SLOT(d_func(), void removeClicked())
    Q_PRIVATE_SLOT(d_func(), void defaultClicked())
    Q_PRIVATE_SLOT(d_func(), void okClicked())
    Q_PRIVATE_SLOT(d_func(), void applyClicked())
    Q_PRIVATE_SLOT(d_func(), void cancelClicked())
    Q_PRIVATE_SLOT(d_func(), void upClicked())
    Q_PRIVATE_SLOT(d_func(), void downClicked())
    Q_PRIVATE_SLOT(d_func(), void leftClicked())
    Q_PRIVATE_SLOT(d_func(), void rightClicked())
    Q_PRIVATE_SLOT(d_func(), void renameClicked())
    Q_PRIVATE_SLOT(d_func(), void toolBarRenamed(QListWidgetItem *))
    Q_PRIVATE_SLOT(d_func(), void currentActionChanged(QTreeWidgetItem *))
    Q_PRIVATE_SLOT(d_func(), void currentToolBarChanged(QListWidgetItem *))
    Q_PRIVATE_SLOT(d_func(), void currentToolBarActionChanged(QListWidgetItem *))
};

QT_END_NAMESPACE

#endif
