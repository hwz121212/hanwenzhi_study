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

#ifndef QQUICKBUTTONGROUP_P_H
#define QQUICKBUTTONGROUP_P_H

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


#include <QtCore/private/qobject_p.h>
#include <QtCore/qmetaobject.h>
#include <QtCore/qvariant.h>
#include <QtQml/qqmlinfo.h>

#include <QtCore/qobject.h>
#include <QtQuickTemplates2/private/qtquicktemplates2global_p.h>
#include <QtQml/qqml.h>

QT_BEGIN_NAMESPACE

class QQuickAbstractButton;
class QQuickButtonGroupPrivate;
class QQuickButtonGroupAttached;
class QQuickButtonGroupAttachedPrivate;

class Q_QUICKTEMPLATES2_PRIVATE_EXPORT QQuickButtonGroup : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQuickAbstractButton *checkedButton READ checkedButton WRITE setCheckedButton NOTIFY checkedButtonChanged)
    Q_PROPERTY(QQmlListProperty<QQuickAbstractButton> buttons READ buttons NOTIFY buttonsChanged FINAL)

public:
    explicit QQuickButtonGroup(QObject *parent = nullptr);
    ~QQuickButtonGroup();

    static QQuickButtonGroupAttached *qmlAttachedProperties(QObject *object);

    QQuickAbstractButton *checkedButton() const;
    void setCheckedButton(QQuickAbstractButton *checkedButton);

    QQmlListProperty<QQuickAbstractButton> buttons();

public Q_SLOTS:
    void addButton(QQuickAbstractButton *button);
    void removeButton(QQuickAbstractButton *button);

Q_SIGNALS:
    void checkedButtonChanged();
    void buttonsChanged();
    // 2.1 (Qt 5.8)
    Q_REVISION(1) void clicked(QQuickAbstractButton *button);

private:
    Q_DISABLE_COPY(QQuickButtonGroup)
    Q_DECLARE_PRIVATE(QQuickButtonGroup)

    Q_PRIVATE_SLOT(d_func(), void _q_updateCurrent())
};

class Q_QUICKTEMPLATES2_PRIVATE_EXPORT QQuickButtonGroupAttached : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQuickButtonGroup *group READ group WRITE setGroup NOTIFY groupChanged FINAL)

public:
    explicit QQuickButtonGroupAttached(QObject *parent = nullptr);

    QQuickButtonGroup *group() const;
    void setGroup(QQuickButtonGroup *group);

Q_SIGNALS:
    void groupChanged();

private:
    Q_DISABLE_COPY(QQuickButtonGroupAttached)
    Q_DECLARE_PRIVATE(QQuickButtonGroupAttached)
};



/*!
	\qmltype ButtonGroup
	\inherits QtObject
	\instantiates QQuickButtonGroup
	\inqmlmodule QtQuick.Controls
	\since 5.7
	\ingroup utilities
	\brief Mutually-exclusive group of checkable buttons.

	ButtonGroup is a non-visual, mutually exclusive group of buttons.
	It is used with controls such as RadioButton, where only one of the options
	can be selected at a time.

	The most straight-forward way to use ButtonGroup is to assign
	a list of buttons. For example, the list of children of a
	\l{Item Positioners}{positioner} or a \l{Qt Quick Layouts}{layout}
	that manages a group of mutually exclusive buttons.

	\code
	ButtonGroup {
		buttons: column.children
	}

	Column {
		id: column

		RadioButton {
			checked: true
			text: qsTr("DAB")
		}

		RadioButton {
			text: qsTr("FM")
		}

		RadioButton {
			text: qsTr("AM")
		}
	}
	\endcode

	Mutually exclusive buttons do not always share the same parent item,
	or the parent layout may sometimes contain items that should not be
	included in the button group. Such cases are best handled using
	the \l group attached property.

	\code
	ButtonGroup { id: radioGroup }

	Column {
		Label {
			text: qsTr("Radio:")
		}

		RadioButton {
			checked: true
			text: qsTr("DAB")
			ButtonGroup.group: radioGroup
		}

		RadioButton {
			text: qsTr("FM")
			ButtonGroup.group: radioGroup
		}

		RadioButton {
			text: qsTr("AM")
			ButtonGroup.group: radioGroup
		}
	}
	\endcode

	More advanced use cases can be handled using the \c addButton() and
	\c removeButton() methods.

	\sa RadioButton, {Button Controls}
*/

/*!
	\qmlsignal QtQuick.Controls::ButtonGroup::clicked(AbstractButton button)
	\since QtQuick.Controls 2.1 (Qt 5.8)

	This signal is emitted when a \a button in the group has been clicked.

	This signal is convenient for implementing a common signal handler for
	all buttons in the same group.

	\code
	ButtonGroup {
		buttons: column.children
		onClicked: console.log("clicked:", button.text)
	}

	Column {
		id: column
		Button { text: "First" }
		Button { text: "Second" }
		Button { text: "Third" }
	}
	\endcode

	\sa AbstractButton::clicked()
*/

class QQuickButtonGroupPrivate : public QObjectPrivate
{
	Q_DECLARE_PUBLIC(QQuickButtonGroup)

public:
	void clear();
	void buttonClicked();
	void _q_updateCurrent();

	static void buttons_append(QQmlListProperty<QQuickAbstractButton> *prop, QQuickAbstractButton *obj);
	static int buttons_count(QQmlListProperty<QQuickAbstractButton> *prop);
	static QQuickAbstractButton *buttons_at(QQmlListProperty<QQuickAbstractButton> *prop, int index);
	static void buttons_clear(QQmlListProperty<QQuickAbstractButton> *prop);

	QPointer<QQuickAbstractButton> checkedButton;
	QVector<QQuickAbstractButton*> buttons;
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QQuickButtonGroup)
QML_DECLARE_TYPEINFO(QQuickButtonGroup, QML_HAS_ATTACHED_PROPERTIES)

#endif // QQUICKBUTTONGROUP_P_H
