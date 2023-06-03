/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Designer of the Qt Toolkit.
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

#ifndef QUILOADER_P_H
#define QUILOADER_P_H

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

#include <QtCore/QByteArray>
#include <QtCore/QMetaType>

#include <QtCore/qdebug.h>
#include <QtCore/QDataStream>
#include <QtWidgets/QAction>
#include <QtWidgets/QActionGroup>
#include <QtWidgets/QApplication>
#include <QtCore/QDir>
#include <QtCore/QLibraryInfo>
#include <QtWidgets/QLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QMap>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>

#include <formbuilder.h>
#include <formbuilderextra_p.h>
#include <textbuilder_p.h>
#include <ui4_p.h>


QT_FORWARD_DECLARE_CLASS(QDataStream)

// This file is here for use by the form preview in Linguist. If you change anything
// here or in the code which uses it, remember to adapt Linguist accordingly.

#define PROP_GENERIC_PREFIX "_q_notr_"
#define PROP_TOOLITEMTEXT "_q_toolItemText_notr"
#define PROP_TOOLITEMTOOLTIP "_q_toolItemToolTip_notr"
#define PROP_TABPAGETEXT "_q_tabPageText_notr"
#define PROP_TABPAGETOOLTIP "_q_tabPageToolTip_notr"
#define PROP_TABPAGEWHATSTHIS "_q_tabPageWhatsThis_notr"

QT_BEGIN_NAMESPACE

class QUiTranslatableStringValue
{
public:
    QByteArray value() const { return m_value; }
    void setValue(const QByteArray &value) { m_value = value; }
    QByteArray comment() const { return m_comment; }
    void setComment(const QByteArray &comment) { m_comment = comment; }

private:
    friend QDataStream &operator>>(QDataStream &in, QUiTranslatableStringValue &s);

    QByteArray m_value;
    QByteArray m_comment;
};

struct QUiItemRolePair {
    int realRole;
    int shadowRole;
};

#ifdef QFORMINTERNAL_NAMESPACE
namespace QFormInternal
{
#endif

extern const QUiItemRolePair qUiItemRoles[];

#ifdef QFORMINTERNAL_NAMESPACE
}
#endif




class TranslatingTextBuilder : public QTextBuilder
{
public:
	TranslatingTextBuilder(bool trEnabled, const QByteArray &className) :
		m_trEnabled(trEnabled), m_className(className) {}

	QVariant loadText(const DomProperty *icon) const Q_DECL_OVERRIDE;

	QVariant toNativeValue(const QVariant &value) const Q_DECL_OVERRIDE;

private:
	bool m_trEnabled;
	QByteArray m_className;
};



#define RETRANSLATE_SUBWIDGET_PROP(mainWidget, setter, propName) \
    do { \
        QVariant v = mainWidget->widget(i)->property(propName); \
        if (v.isValid()) { \
            QUiTranslatableStringValue tsv = qvariant_cast<QUiTranslatableStringValue>(v); \
            const QString text = QCoreApplication::translate(m_className, \
                                                             tsv.value(), tsv.comment()); \
            mainWidget->setter(i, text); \
        } \
    } while (0)




template<typename T>
static void reTranslateWidgetItem(T *item, const QByteArray &class_name)
{
	const QUiItemRolePair *irs = qUiItemRoles;

	for (unsigned j = 0; irs[j].shadowRole >= 0; j++) {
		QVariant v = item->data(irs[j].shadowRole);
		if (v.isValid()) {
			QUiTranslatableStringValue tsv = qvariant_cast<QUiTranslatableStringValue>(v);
			const QString text = QCoreApplication::translate(class_name,
				tsv.value(), tsv.comment());
			item->setData(irs[j].realRole, text);
		}
	}
}

void recursiveReTranslate(QTreeWidgetItem *item, const QByteArray &class_name);
void reTranslateTableItem(QTableWidgetItem *item, const QByteArray &class_name);

class TranslationWatcher : public QObject
{
	Q_OBJECT

public:
	TranslationWatcher(QObject *parent, const QByteArray &className) :
		QObject(parent),
		m_className(className)
	{
	}

	virtual bool eventFilter(QObject *o, QEvent *event)
	{
		if (event->type() == QEvent::LanguageChange) {
			const QList<QByteArray> &dynamicPropertyNames = o->dynamicPropertyNames();
			for (const QByteArray &prop : dynamicPropertyNames) {
				if (prop.startsWith(PROP_GENERIC_PREFIX)) {
					const QByteArray propName = prop.mid(sizeof(PROP_GENERIC_PREFIX) - 1);
					const QUiTranslatableStringValue tsv =
						qvariant_cast<QUiTranslatableStringValue>(o->property(prop));
					const QString text = QCoreApplication::translate(m_className,
						tsv.value(), tsv.comment());
					o->setProperty(propName, text);
				}
			}
			if (0) {
#ifndef QT_NO_TABWIDGET
			}
			else if (QTabWidget *tabw = qobject_cast<QTabWidget*>(o)) {
				const int cnt = tabw->count();
				for (int i = 0; i < cnt; ++i) {
					RETRANSLATE_SUBWIDGET_PROP(tabw, setTabText, PROP_TABPAGETEXT);
# ifndef QT_NO_TOOLTIP
					RETRANSLATE_SUBWIDGET_PROP(tabw, setTabToolTip, PROP_TABPAGETOOLTIP);
# endif
# ifndef QT_NO_WHATSTHIS
					RETRANSLATE_SUBWIDGET_PROP(tabw, setTabWhatsThis, PROP_TABPAGEWHATSTHIS);
# endif
				}
#endif
#ifndef QT_NO_LISTWIDGET
			}
			else if (QListWidget *listw = qobject_cast<QListWidget*>(o)) {
				const int cnt = listw->count();
				for (int i = 0; i < cnt; ++i)
					reTranslateWidgetItem(listw->item(i), m_className);
#endif
#ifndef QT_NO_TREEWIDGET
			}
			else if (QTreeWidget *treew = qobject_cast<QTreeWidget*>(o)) {
				if (QTreeWidgetItem *item = treew->headerItem())
					recursiveReTranslate(item, m_className);
				const int cnt = treew->topLevelItemCount();
				for (int i = 0; i < cnt; ++i) {
					QTreeWidgetItem *item = treew->topLevelItem(i);
					recursiveReTranslate(item, m_className);
				}
#endif
#ifndef QT_NO_TABLEWIDGET
			}
			else if (QTableWidget *tablew = qobject_cast<QTableWidget*>(o)) {
				const int row_cnt = tablew->rowCount();
				const int col_cnt = tablew->columnCount();
				for (int j = 0; j < col_cnt; ++j)
					reTranslateTableItem(tablew->horizontalHeaderItem(j), m_className);
				for (int i = 0; i < row_cnt; ++i) {
					reTranslateTableItem(tablew->verticalHeaderItem(i), m_className);
					for (int j = 0; j < col_cnt; ++j)
						reTranslateTableItem(tablew->item(i, j), m_className);
				}
#endif
#ifndef QT_NO_COMBOBOX
			}
			else if (QComboBox *combow = qobject_cast<QComboBox*>(o)) {
				if (!qobject_cast<QFontComboBox*>(o)) {
					const int cnt = combow->count();
					for (int i = 0; i < cnt; ++i) {
						const QVariant v = combow->itemData(i, Qt::DisplayPropertyRole);
						if (v.isValid()) {
							QUiTranslatableStringValue tsv = qvariant_cast<QUiTranslatableStringValue>(v);
							const QString text = QCoreApplication::translate(m_className,
								tsv.value(), tsv.comment());
							combow->setItemText(i, text);
						}
					}
				}
#endif
#ifndef QT_NO_TOOLBOX
			}
			else if (QToolBox *toolw = qobject_cast<QToolBox*>(o)) {
				const int cnt = toolw->count();
				for (int i = 0; i < cnt; ++i) {
					RETRANSLATE_SUBWIDGET_PROP(toolw, setItemText, PROP_TOOLITEMTEXT);
# ifndef QT_NO_TOOLTIP
					RETRANSLATE_SUBWIDGET_PROP(toolw, setItemToolTip, PROP_TOOLITEMTOOLTIP);
# endif
				}
#endif
			}
		}
		return false;
	}

private:
	QByteArray m_className;
};



QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUiTranslatableStringValue)


#endif // QUILOADER_P_H
