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

#ifndef QSCRIPTDEBUGGERSTACKWIDGET_P_H
#define QSCRIPTDEBUGGERSTACKWIDGET_P_H

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

#include "qscriptdebuggerstackwidgetinterface_p.h"

#include "qscriptdebuggerstackwidgetinterface_p_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qheaderview.h>
#include <QtWidgets/qtreeview.h>
#include <QtWidgets/qboxlayout.h>

QT_BEGIN_NAMESPACE

class QScriptDebuggerStackWidgetPrivate;
class Q_AUTOTEST_EXPORT QScriptDebuggerStackWidget:
    public QScriptDebuggerStackWidgetInterface
{
    Q_OBJECT
public:
    QScriptDebuggerStackWidget(QWidget *parent = 0);
    ~QScriptDebuggerStackWidget();

    QAbstractItemModel *stackModel() const;
    void setStackModel(QAbstractItemModel *model);

    int currentFrameIndex() const;
    void setCurrentFrameIndex(int frameIndex);

private:
    Q_DECLARE_PRIVATE(QScriptDebuggerStackWidget)
    Q_DISABLE_COPY(QScriptDebuggerStackWidget)

    Q_PRIVATE_SLOT(d_func(), void _q_onCurrentChanged(const QModelIndex &))
};


class QScriptDebuggerStackWidgetPrivate
	: public QScriptDebuggerStackWidgetInterfacePrivate
{
	Q_DECLARE_PUBLIC(QScriptDebuggerStackWidget)
public:
	QScriptDebuggerStackWidgetPrivate();
	~QScriptDebuggerStackWidgetPrivate();

	// private slots
	void _q_onCurrentChanged(const QModelIndex &index);

	QTreeView *view;
};


QT_END_NAMESPACE

#endif
