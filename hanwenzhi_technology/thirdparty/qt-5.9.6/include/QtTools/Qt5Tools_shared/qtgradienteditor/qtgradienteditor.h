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

#ifndef QTGRADIENTEDITOR_H
#define QTGRADIENTEDITOR_H

#include <QtWidgets/QWidget>
#include "ui_qtgradienteditor.h"
#include "qtgradientstopscontroller.h"

QT_BEGIN_NAMESPACE

class QtGradientEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QGradient gradient READ gradient WRITE setGradient)
    Q_PROPERTY(bool backgroundCheckered READ isBackgroundCheckered WRITE setBackgroundCheckered)
    Q_PROPERTY(bool detailsVisible READ detailsVisible WRITE setDetailsVisible)
    Q_PROPERTY(bool detailsButtonVisible READ isDetailsButtonVisible WRITE setDetailsButtonVisible)
public:
    QtGradientEditor(QWidget *parent = 0);
    ~QtGradientEditor();

    void setGradient(const QGradient &gradient);
    QGradient gradient() const;

    bool isBackgroundCheckered() const;
    void setBackgroundCheckered(bool checkered);

    bool detailsVisible() const;
    void setDetailsVisible(bool visible);

    bool isDetailsButtonVisible() const;
    void setDetailsButtonVisible(bool visible);

    QColor::Spec spec() const;
    void setSpec(QColor::Spec spec);

signals:

    void gradientChanged(const QGradient &gradient);
    void aboutToShowDetails(bool details, int extenstionWidthHint);

private:
    QScopedPointer<class QtGradientEditorPrivate> d_ptr;
    Q_DECLARE_PRIVATE(QtGradientEditor)
    Q_DISABLE_COPY(QtGradientEditor)
    Q_PRIVATE_SLOT(d_func(), void slotGradientStopsChanged(const QGradientStops &stops))
    Q_PRIVATE_SLOT(d_func(), void slotTypeChanged(int type))
    Q_PRIVATE_SLOT(d_func(), void slotSpreadChanged(int type))
    Q_PRIVATE_SLOT(d_func(), void slotStartLinearXChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotStartLinearYChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotEndLinearXChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotEndLinearYChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotCentralRadialXChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotCentralRadialYChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotFocalRadialXChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotFocalRadialYChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotRadiusRadialChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotCentralConicalXChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotCentralConicalYChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotAngleConicalChanged(double value))
    Q_PRIVATE_SLOT(d_func(), void slotDetailsChanged(bool details))
    Q_PRIVATE_SLOT(d_func(), void startLinearChanged(const QPointF &))
    Q_PRIVATE_SLOT(d_func(), void endLinearChanged(const QPointF &))
    Q_PRIVATE_SLOT(d_func(), void centralRadialChanged(const QPointF &))
    Q_PRIVATE_SLOT(d_func(), void focalRadialChanged(const QPointF &))
    Q_PRIVATE_SLOT(d_func(), void radiusRadialChanged(qreal))
    Q_PRIVATE_SLOT(d_func(), void centralConicalChanged(const QPointF &))
    Q_PRIVATE_SLOT(d_func(), void angleConicalChanged(qreal))
};



class QtGradientEditorPrivate
{
	QtGradientEditor *q_ptr;
	Q_DECLARE_PUBLIC(QtGradientEditor)
public:
	QtGradientEditorPrivate() : m_gradient(QLinearGradient()) {}

	void slotGradientStopsChanged(const QGradientStops &stops);
	void slotTypeChanged(int type);
	void slotSpreadChanged(int spread);
	void slotStartLinearXChanged(double value);
	void slotStartLinearYChanged(double value);
	void slotEndLinearXChanged(double value);
	void slotEndLinearYChanged(double value);
	void slotCentralRadialXChanged(double value);
	void slotCentralRadialYChanged(double value);
	void slotFocalRadialXChanged(double value);
	void slotFocalRadialYChanged(double value);
	void slotRadiusRadialChanged(double value);
	void slotCentralConicalXChanged(double value);
	void slotCentralConicalYChanged(double value);
	void slotAngleConicalChanged(double value);

	void slotDetailsChanged(bool details);

	void startLinearChanged(const QPointF &point);
	void endLinearChanged(const QPointF &point);
	void centralRadialChanged(const QPointF &point);
	void focalRadialChanged(const QPointF &point);
	void radiusRadialChanged(qreal radius);
	void centralConicalChanged(const QPointF &point);
	void angleConicalChanged(qreal angle);

	void setStartLinear(const QPointF &point);
	void setEndLinear(const QPointF &point);
	void setCentralRadial(const QPointF &point);
	void setFocalRadial(const QPointF &point);
	void setRadiusRadial(qreal radius);
	void setCentralConical(const QPointF &point);
	void setAngleConical(qreal angle);

	void setType(QGradient::Type type);
	void showDetails(bool details);

	void setSpinBox(QDoubleSpinBox *spinBox, const char *slot, double max = 1.0, double step = 0.01, int decimals = 3);
	void reset();
	void setLayout(bool details);
	void layoutDetails(bool details);
	bool row4Visible() const;
	bool row5Visible() const;
	int extensionWidthHint() const;

	void setCombos(bool combos);

	QGradient gradient() const;
	void updateGradient(bool emitSignal);

	Ui::QtGradientEditor m_ui;
	QtGradientStopsController *m_gradientStopsController;

	QDoubleSpinBox *startLinearXSpinBox;
	QDoubleSpinBox *startLinearYSpinBox;
	QDoubleSpinBox *endLinearXSpinBox;
	QDoubleSpinBox *endLinearYSpinBox;
	QDoubleSpinBox *centralRadialXSpinBox;
	QDoubleSpinBox *centralRadialYSpinBox;
	QDoubleSpinBox *focalRadialXSpinBox;
	QDoubleSpinBox *focalRadialYSpinBox;
	QDoubleSpinBox *radiusRadialSpinBox;
	QDoubleSpinBox *centralConicalXSpinBox;
	QDoubleSpinBox *centralConicalYSpinBox;
	QDoubleSpinBox *angleConicalSpinBox;

	QButtonGroup *m_typeGroup;
	QButtonGroup *m_spreadGroup;

	QGradient::Type m_type;

	QGridLayout *m_gridLayout;
	QWidget *m_hiddenWidget;
	QGridLayout *m_hiddenLayout;
	bool m_details;
	bool m_detailsButtonVisible;
	bool m_backgroundCheckered;

	QGradient m_gradient;

	bool m_combos;
};

QT_END_NAMESPACE

#endif
