/*
*********************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'newformwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFORMWIDGET_H
#define UI_NEWFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

namespace qdesigner_internal {

class Ui_NewFormWidget
{
public:
    QHBoxLayout *hboxLayout;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblPreview;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *embeddedGroup;
    QGridLayout *gridLayout;
    QComboBox *profileComboBox;
    QComboBox *sizeComboBox;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *qdesigner_internal__NewFormWidget)
    {
        if (qdesigner_internal__NewFormWidget->objectName().isEmpty())
            qdesigner_internal__NewFormWidget->setObjectName(QStringLiteral("qdesigner_internal__NewFormWidget"));
        qdesigner_internal__NewFormWidget->resize(480, 194);
        hboxLayout = new QHBoxLayout(qdesigner_internal__NewFormWidget);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        treeWidget = new QTreeWidget(qdesigner_internal__NewFormWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setIconSize(QSize(128, 128));
        treeWidget->setRootIsDecorated(false);
        treeWidget->setColumnCount(1);

        hboxLayout->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblPreview = new QLabel(qdesigner_internal__NewFormWidget);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setLineWidth(1);
        lblPreview->setAlignment(Qt::AlignCenter);
        lblPreview->setMargin(5);

        verticalLayout->addWidget(lblPreview);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(7, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        embeddedGroup = new QGroupBox(qdesigner_internal__NewFormWidget);
        embeddedGroup->setObjectName(QStringLiteral("embeddedGroup"));
        gridLayout = new QGridLayout(embeddedGroup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        profileComboBox = new QComboBox(embeddedGroup);
        profileComboBox->setObjectName(QStringLiteral("profileComboBox"));

        gridLayout->addWidget(profileComboBox, 0, 1, 1, 1);

        sizeComboBox = new QComboBox(embeddedGroup);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));

        gridLayout->addWidget(sizeComboBox, 1, 1, 1, 1);

        label = new QLabel(embeddedGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(embeddedGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        horizontalLayout->addWidget(embeddedGroup);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        hboxLayout->addLayout(verticalLayout);


        retranslateUi(qdesigner_internal__NewFormWidget);

        QMetaObject::connectSlotsByName(qdesigner_internal__NewFormWidget);
    } // setupUi

    void retranslateUi(QWidget *qdesigner_internal__NewFormWidget)
    {
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("qdesigner_internal::NewFormWidget", "0", Q_NULLPTR));
        lblPreview->setText(QApplication::translate("qdesigner_internal::NewFormWidget", "Choose a template for a preview", Q_NULLPTR));
        embeddedGroup->setTitle(QApplication::translate("qdesigner_internal::NewFormWidget", "Embedded Design", Q_NULLPTR));
        label->setText(QApplication::translate("qdesigner_internal::NewFormWidget", "Device:", Q_NULLPTR));
        label_2->setText(QApplication::translate("qdesigner_internal::NewFormWidget", "Screen Size:", Q_NULLPTR));
        Q_UNUSED(qdesigner_internal__NewFormWidget);
    } // retranslateUi

};

} // namespace qdesigner_internal

namespace qdesigner_internal {
namespace Ui {
    class NewFormWidget: public Ui_NewFormWidget {};
} // namespace Ui
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // UI_NEWFORMWIDGET_H
