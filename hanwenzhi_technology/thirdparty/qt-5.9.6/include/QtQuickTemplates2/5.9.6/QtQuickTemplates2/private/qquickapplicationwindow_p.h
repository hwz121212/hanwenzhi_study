/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Quick Templates 2 module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QQUICKAPPLICATIONWINDOW_P_H
#define QQUICKAPPLICATIONWINDOW_P_H

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

#include <QtQuick/private/qquickwindowmodule_p.h>
#include <QtQuickTemplates2/private/qtquicktemplates2global_p.h>
#include <QtGui/qfont.h>
#include <QtCore/qlocale.h>
#include <qquickitemchangelistener_p.h>
#include <QQuickItem>
#include <qquickdeferredpointer_p_p.h>

QT_BEGIN_NAMESPACE

class QQuickOverlay;
class QQuickApplicationWindowPrivate;
class QQuickApplicationWindowAttached;
class QQuickApplicationWindowAttachedPrivate;

class Q_QUICKTEMPLATES2_PRIVATE_EXPORT QQuickApplicationWindow : public QQuickWindowQmlImpl
{
    Q_OBJECT
    Q_PROPERTY(QQuickItem *background READ background WRITE setBackground NOTIFY backgroundChanged FINAL)
    Q_PROPERTY(QQuickItem *contentItem READ contentItem CONSTANT FINAL)
    Q_PROPERTY(QQmlListProperty<QObject> contentData READ contentData FINAL)
    Q_PROPERTY(QQuickItem *activeFocusControl READ activeFocusControl NOTIFY activeFocusControlChanged FINAL)
    Q_PROPERTY(QQuickItem *header READ header WRITE setHeader NOTIFY headerChanged FINAL)
    Q_PROPERTY(QQuickItem *footer READ footer WRITE setFooter NOTIFY footerChanged FINAL)
    Q_PROPERTY(QQuickOverlay *overlay READ overlay CONSTANT FINAL)
    Q_PROPERTY(QFont font READ font WRITE setFont RESET resetFont NOTIFY fontChanged FINAL)
    Q_PROPERTY(QLocale locale READ locale WRITE setLocale RESET resetLocale NOTIFY localeChanged FINAL)
    Q_CLASSINFO("DeferredPropertyNames", "background")
    Q_CLASSINFO("DefaultProperty", "contentData")

public:
    explicit QQuickApplicationWindow(QWindow *parent = nullptr);
    ~QQuickApplicationWindow();

    QQuickItem *background() const;
    void setBackground(QQuickItem *background);

    QQuickItem *contentItem() const;
    QQmlListProperty<QObject> contentData();

    QQuickItem *activeFocusControl() const;

    QQuickItem *header() const;
    void setHeader(QQuickItem *header);

    QQuickItem *footer() const;
    void setFooter(QQuickItem *footer);

    QQuickOverlay *overlay() const;

    QFont font() const;
    void setFont(const QFont &font);
    void resetFont();

    QLocale locale() const;
    void setLocale(const QLocale &locale);
    void resetLocale();

    static QQuickApplicationWindowAttached *qmlAttachedProperties(QObject *object);

Q_SIGNALS:
    void backgroundChanged();
    void activeFocusControlChanged();
    void headerChanged();
    void footerChanged();
    void fontChanged();
    void localeChanged();

protected:
    bool isComponentComplete() const;
    void classBegin() override;
    void componentComplete() override;
    void resizeEvent(QResizeEvent *event) override;

private:
    Q_DISABLE_COPY(QQuickApplicationWindow)
    Q_DECLARE_PRIVATE(QQuickApplicationWindow)
    Q_PRIVATE_SLOT(d_func(), void _q_updateActiveFocus())
    QScopedPointer<QQuickApplicationWindowPrivate> d_ptr;
};

class Q_QUICKTEMPLATES2_PRIVATE_EXPORT QQuickApplicationWindowAttached : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQuickApplicationWindow *window READ window NOTIFY windowChanged FINAL)
    Q_PROPERTY(QQuickItem *contentItem READ contentItem NOTIFY contentItemChanged FINAL)
    Q_PROPERTY(QQuickItem *activeFocusControl READ activeFocusControl NOTIFY activeFocusControlChanged FINAL)
    Q_PROPERTY(QQuickItem *header READ header NOTIFY headerChanged FINAL)
    Q_PROPERTY(QQuickItem *footer READ footer NOTIFY footerChanged FINAL)
    Q_PROPERTY(QQuickOverlay *overlay READ overlay NOTIFY overlayChanged FINAL)

public:
    explicit QQuickApplicationWindowAttached(QObject *parent = nullptr);

    QQuickApplicationWindow *window() const;
    QQuickItem *contentItem() const;
    QQuickItem *activeFocusControl() const;
    QQuickItem *header() const;
    QQuickItem *footer() const;
    QQuickOverlay *overlay() const;

Q_SIGNALS:
    void windowChanged();
    void contentItemChanged();
    void activeFocusControlChanged();
    void headerChanged();
    void footerChanged();
    void overlayChanged();

private:
    Q_DISABLE_COPY(QQuickApplicationWindowAttached)
    Q_DECLARE_PRIVATE(QQuickApplicationWindowAttached)
};



/*!
	\qmltype ApplicationWindow
	\inherits Window
	\instantiates QQuickApplicationWindow
	\inqmlmodule QtQuick.Controls
	\since 5.7
	\ingroup qtquickcontrols2-containers
	\brief Styled top-level window with support for a header and footer.

	ApplicationWindow is a \l Window which makes it convenient to add
	a \l header and \l footer item to the window.

	You can declare ApplicationWindow as the root item of your application,
	and run it by using \l QQmlApplicationEngine.  In this way you can control
	the window's properties, appearance and layout from QML.

	\image qtquickcontrols2-applicationwindow-wireframe.png

	\qml
	import QtQuick.Controls 2.1

	ApplicationWindow {
		visible: true

		header: ToolBar {
			// ...
		}

		footer: TabBar {
			// ...
		}

		StackView {
			anchors.fill: parent
		}
	}
	\endqml

	ApplicationWindow supports popups via its \l overlay property, which
	ensures that popups are displayed above other content and that the
	background is dimmed when a \l {Popup::}{modal} or \l {Popup::dim}
	{dimmed} popup is visible.

	\note By default, an ApplicationWindow is not visible.

	\section2 Attached ApplicationWindow Properties

	Due to how \l {Scope and Naming Resolution} works in QML, it is possible
	to reference the \c id of the application root element anywhere in its
	child QML objects. Even though this approach is fine for many applications
	and use cases, for a generic QML component it may not be acceptable as it
	creates a dependency to the surrounding environment.

	ApplicationWindow provides a set of attached properties that can be used
	to access the window and its building blocks from places where no direct
	access to the window is available, without creating a dependency to a
	certain window \c id. A QML component that uses the ApplicationWindow
	attached properties works in any window regardless of its \c id. The
	following example uses the attached \c overlay property to position the
	popup to the center of the window, despite the position of the button
	that opens the popup.

	\code
	Button {
		onClicked: popup.open()

		Popup {
			id: popup

			parent: ApplicationWindow.overlay

			x: (parent.width - width) / 2
			y: (parent.height - height) / 2
			width: 100
			height: 100
		}
	}
	\endcode

	\sa {Customizing ApplicationWindow}, Page, {Container Controls}
*/

class QQuickApplicationWindowPrivate : public QQuickItemChangeListener
{
	Q_DECLARE_PUBLIC(QQuickApplicationWindow)

public:
	QQuickApplicationWindowPrivate()
		: complete(true),
		background(nullptr),
		contentItem(nullptr),
		header(nullptr),
		footer(nullptr),
		overlay(nullptr),
		activeFocusControl(nullptr)
	{
	}

	static QQuickApplicationWindowPrivate *get(QQuickApplicationWindow *window)
	{
		return window->d_func();
	}

	void relayout();

	void itemGeometryChanged(QQuickItem *item, QQuickGeometryChange change, const QRectF &diff) override;
	void itemVisibilityChanged(QQuickItem *item) override;
	void itemImplicitWidthChanged(QQuickItem *item) override;
	void itemImplicitHeightChanged(QQuickItem *item) override;

	void updateFont(const QFont &f);
	inline void setFont_helper(const QFont &f) {
		if (font.resolve() == f.resolve() && font == f)
			return;
		updateFont(f);
	}
	void resolveFont();

	void _q_updateActiveFocus();
	void setActiveFocusControl(QQuickItem *item);

	static void contentData_append(QQmlListProperty<QObject> *prop, QObject *obj);

	void cancelBackground();
	void executeBackground(bool complete = false);

	bool complete;
	QQuickDeferredPointer<QQuickItem> background;
	QQuickItem *contentItem;
	QQuickItem *header;
	QQuickItem *footer;
	QQuickOverlay *overlay;
	QFont font;
	QLocale locale;
	QQuickItem *activeFocusControl;
	QQuickApplicationWindow *q_ptr;
};


QT_END_NAMESPACE

QML_DECLARE_TYPE(QQuickApplicationWindow)
QML_DECLARE_TYPEINFO(QQuickApplicationWindow, QML_HAS_ATTACHED_PROPERTIES)

#endif // QQUICKAPPLICATIONWINDOW_P_H
