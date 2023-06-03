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

#ifndef QTGRADIENTSTOPSWIDGET_H
#define QTGRADIENTSTOPSWIDGET_H

#include <QtCore/QMap>
#include <QtCore/QMimeData>
#include <QtGui/QImage>
#include <QtGui/QPainter>
#include <QtWidgets/QScrollBar>
#include <QtGui/QMouseEvent>
#include <QtWidgets/QRubberBand>
#include <QtWidgets/QMenu>
#include <QtWidgets/QAbstractScrollArea>
#include "qtgradientstopsmodel.h"
QT_BEGIN_NAMESPACE

class QtGradientStopsModel;
class QtGradientStopsWidgetPrivate;

class QtGradientStopsWidget : public QAbstractScrollArea
{
    Q_OBJECT
    Q_PROPERTY(bool backgroundCheckered READ isBackgroundCheckered WRITE setBackgroundCheckered)
public:
    QtGradientStopsWidget(QWidget *parent = 0);
    ~QtGradientStopsWidget();

    QSize minimumSizeHint() const;
    QSize sizeHint() const;

    bool isBackgroundCheckered() const;
    void setBackgroundCheckered(bool checkered);

    void setGradientStopsModel(QtGradientStopsModel *model);

    void setZoom(double zoom);
    double zoom() const;

signals:

    void zoomChanged(double zoom);

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseDoubleClickEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
    void focusInEvent(QFocusEvent *e);
    void focusOutEvent(QFocusEvent *e);
    void contextMenuEvent(QContextMenuEvent *e);
    void wheelEvent(QWheelEvent *e);
#ifndef QT_NO_DRAGANDDROP
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dropEvent(QDropEvent *event);
#endif

private:
    QScopedPointer<QtGradientStopsWidgetPrivate> d_ptr;
    Q_DECLARE_PRIVATE(QtGradientStopsWidget)
    Q_DISABLE_COPY(QtGradientStopsWidget)
    Q_PRIVATE_SLOT(d_func(), void slotStopAdded(QtGradientStop *stop))
    Q_PRIVATE_SLOT(d_func(), void slotStopRemoved(QtGradientStop *stop))
    Q_PRIVATE_SLOT(d_func(), void slotStopMoved(QtGradientStop *stop, qreal newPos))
    Q_PRIVATE_SLOT(d_func(), void slotStopsSwapped(QtGradientStop *stop1, QtGradientStop *stop2))
    Q_PRIVATE_SLOT(d_func(), void slotStopChanged(QtGradientStop *stop, const QColor &newColor))
    Q_PRIVATE_SLOT(d_func(), void slotStopSelected(QtGradientStop *stop, bool selected))
    Q_PRIVATE_SLOT(d_func(), void slotCurrentStopChanged(QtGradientStop *stop))
    Q_PRIVATE_SLOT(d_func(), void slotNewStop())
    Q_PRIVATE_SLOT(d_func(), void slotDelete())
    Q_PRIVATE_SLOT(d_func(), void slotFlipAll())
    Q_PRIVATE_SLOT(d_func(), void slotSelectAll())
    Q_PRIVATE_SLOT(d_func(), void slotZoomIn())
    Q_PRIVATE_SLOT(d_func(), void slotZoomOut())
    Q_PRIVATE_SLOT(d_func(), void slotResetZoom())
};




class QtGradientStopsWidgetPrivate
{
	QtGradientStopsWidget *q_ptr;
	Q_DECLARE_PUBLIC(QtGradientStopsWidget)
public:
	typedef QMap<qreal, QColor> PositionColorMap;
	typedef QMap<QtGradientStop *, qreal> StopPositionMap;

	void slotStopAdded(QtGradientStop *stop);
	void slotStopRemoved(QtGradientStop *stop);
	void slotStopMoved(QtGradientStop *stop, qreal newPos);
	void slotStopsSwapped(QtGradientStop *stop1, QtGradientStop *stop2);
	void slotStopChanged(QtGradientStop *stop, const QColor &newColor);
	void slotStopSelected(QtGradientStop *stop, bool selected);
	void slotCurrentStopChanged(QtGradientStop *stop);
	void slotNewStop();
	void slotDelete();
	void slotFlipAll();
	void slotSelectAll();
	void slotZoomIn();
	void slotZoomOut();
	void slotResetZoom();

	double fromViewport(int x) const;
	double toViewport(double x) const;
	QtGradientStop *stopAt(const QPoint &viewportPos) const;
	QList<QtGradientStop *> stopsAt(const QPoint &viewportPos) const;
	void setupMove(QtGradientStop *stop, int x);
	void ensureVisible(double x); // x = stop position
	void ensureVisible(QtGradientStop *stop);
	QtGradientStop *newStop(const QPoint &viewportPos);

	bool m_backgroundCheckered;
	QtGradientStopsModel *m_model;
	double m_handleSize;
	int m_scaleFactor;
	double m_zoom;

#ifndef QT_NO_DRAGANDDROP
	QtGradientStop *m_dragStop;
	QtGradientStop *m_changedStop;
	QtGradientStop *m_clonedStop;
	QtGradientStopsModel *m_dragModel;
	QColor m_dragColor;
	void clearDrag();
	void removeClonedStop();
	void restoreChangedStop();
	void changeStop(qreal pos);
	void cloneStop(qreal pos);
#endif

	QRubberBand *m_rubber;
	QPoint m_clickPos;

	QList<QtGradientStop *> m_stops;

	bool m_moving;
	int m_moveOffset;
	StopPositionMap m_moveStops;

	PositionColorMap m_moveOriginal;
};


QT_END_NAMESPACE

#endif
