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
** Form generated from reading UI file 'formwindowsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWINDOWSETTINGS_H
#define UI_FORMWINDOWSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <gridpanel_p.h>

QT_BEGIN_NAMESPACE

class Ui_FormWindowSettings
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QGroupBox *layoutDefaultGroupBox;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *defaultSpacingSpinBox;
    QSpinBox *defaultMarginSpinBox;
    QGroupBox *layoutFunctionGroupBox;
    QGridLayout *gridLayout2;
    QLineEdit *spacingFunctionLineEdit;
    QLineEdit *marginFunctionLineEdit;
    QLabel *label_3;
    QLabel *label_3_2;
    QHBoxLayout *hboxLayout1;
    QGroupBox *pixmapFunctionGroupBox;
    QVBoxLayout *vboxLayout;
    QLineEdit *pixmapFunctionLineEdit;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QGroupBox *includeHintsGroupBox;
    QVBoxLayout *vboxLayout1;
    QTextEdit *includeHintsTextEdit;
    qdesigner_internal::GridPanel *gridPanel;
    QGroupBox *embeddedGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *deviceProfileLabel;
    QGroupBox *pixmapFunctionGroupBox_2;
    QVBoxLayout *vboxLayout2;
    QLineEdit *authorLineEdit;

    void setupUi(QDialog *FormWindowSettings)
    {
        if (FormWindowSettings->objectName().isEmpty())
            FormWindowSettings->setObjectName(QStringLiteral("FormWindowSettings"));
        FormWindowSettings->resize(470, 466);
        gridLayout = new QGridLayout(FormWindowSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        layoutDefaultGroupBox = new QGroupBox(FormWindowSettings);
        layoutDefaultGroupBox->setObjectName(QStringLiteral("layoutDefaultGroupBox"));
        layoutDefaultGroupBox->setCheckable(true);
        gridLayout1 = new QGridLayout(layoutDefaultGroupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_2 = new QLabel(layoutDefaultGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(layoutDefaultGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        defaultSpacingSpinBox = new QSpinBox(layoutDefaultGroupBox);
        defaultSpacingSpinBox->setObjectName(QStringLiteral("defaultSpacingSpinBox"));

        gridLayout1->addWidget(defaultSpacingSpinBox, 1, 1, 1, 1);

        defaultMarginSpinBox = new QSpinBox(layoutDefaultGroupBox);
        defaultMarginSpinBox->setObjectName(QStringLiteral("defaultMarginSpinBox"));

        gridLayout1->addWidget(defaultMarginSpinBox, 0, 1, 1, 1);


        hboxLayout->addWidget(layoutDefaultGroupBox);

        layoutFunctionGroupBox = new QGroupBox(FormWindowSettings);
        layoutFunctionGroupBox->setObjectName(QStringLiteral("layoutFunctionGroupBox"));
        layoutFunctionGroupBox->setCheckable(true);
        gridLayout2 = new QGridLayout(layoutFunctionGroupBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
        gridLayout2->setContentsMargins(8, 8, 8, 8);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        spacingFunctionLineEdit = new QLineEdit(layoutFunctionGroupBox);
        spacingFunctionLineEdit->setObjectName(QStringLiteral("spacingFunctionLineEdit"));

        gridLayout2->addWidget(spacingFunctionLineEdit, 1, 1, 1, 1);

        marginFunctionLineEdit = new QLineEdit(layoutFunctionGroupBox);
        marginFunctionLineEdit->setObjectName(QStringLiteral("marginFunctionLineEdit"));

        gridLayout2->addWidget(marginFunctionLineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutFunctionGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout2->addWidget(label_3, 0, 0, 1, 1);

        label_3_2 = new QLabel(layoutFunctionGroupBox);
        label_3_2->setObjectName(QStringLiteral("label_3_2"));

        gridLayout2->addWidget(label_3_2, 1, 0, 1, 1);


        hboxLayout->addWidget(layoutFunctionGroupBox);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        pixmapFunctionGroupBox = new QGroupBox(FormWindowSettings);
        pixmapFunctionGroupBox->setObjectName(QStringLiteral("pixmapFunctionGroupBox"));
        pixmapFunctionGroupBox->setCheckable(true);
        vboxLayout = new QVBoxLayout(pixmapFunctionGroupBox);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        pixmapFunctionLineEdit = new QLineEdit(pixmapFunctionGroupBox);
        pixmapFunctionLineEdit->setObjectName(QStringLiteral("pixmapFunctionLineEdit"));

        vboxLayout->addWidget(pixmapFunctionLineEdit);


        hboxLayout1->addWidget(pixmapFunctionGroupBox);


        gridLayout->addLayout(hboxLayout1, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(111, 115, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(FormWindowSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 2);

        line = new QFrame(FormWindowSettings);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 2);

        includeHintsGroupBox = new QGroupBox(FormWindowSettings);
        includeHintsGroupBox->setObjectName(QStringLiteral("includeHintsGroupBox"));
        vboxLayout1 = new QVBoxLayout(includeHintsGroupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        includeHintsTextEdit = new QTextEdit(includeHintsGroupBox);
        includeHintsTextEdit->setObjectName(QStringLiteral("includeHintsTextEdit"));

        vboxLayout1->addWidget(includeHintsTextEdit);


        gridLayout->addWidget(includeHintsGroupBox, 4, 0, 2, 1);

        gridPanel = new qdesigner_internal::GridPanel(FormWindowSettings);
        gridPanel->setObjectName(QStringLiteral("gridPanel"));

        gridLayout->addWidget(gridPanel, 2, 0, 1, 2);

        embeddedGroupBox = new QGroupBox(FormWindowSettings);
        embeddedGroupBox->setObjectName(QStringLiteral("embeddedGroupBox"));
        verticalLayout = new QVBoxLayout(embeddedGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        deviceProfileLabel = new QLabel(embeddedGroupBox);
        deviceProfileLabel->setObjectName(QStringLiteral("deviceProfileLabel"));
        deviceProfileLabel->setText(QStringLiteral("TextLabel"));

        verticalLayout->addWidget(deviceProfileLabel);


        gridLayout->addWidget(embeddedGroupBox, 0, 0, 1, 2);

        pixmapFunctionGroupBox_2 = new QGroupBox(FormWindowSettings);
        pixmapFunctionGroupBox_2->setObjectName(QStringLiteral("pixmapFunctionGroupBox_2"));
        vboxLayout2 = new QVBoxLayout(pixmapFunctionGroupBox_2);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(8, 8, 8, 8);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        authorLineEdit = new QLineEdit(pixmapFunctionGroupBox_2);
        authorLineEdit->setObjectName(QStringLiteral("authorLineEdit"));

        vboxLayout2->addWidget(authorLineEdit);


        gridLayout->addWidget(pixmapFunctionGroupBox_2, 1, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(defaultSpacingSpinBox);
        label->setBuddy(defaultMarginSpinBox);
        label_3->setBuddy(marginFunctionLineEdit);
        label_3_2->setBuddy(spacingFunctionLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(authorLineEdit, defaultMarginSpinBox);
        QWidget::setTabOrder(defaultMarginSpinBox, defaultSpacingSpinBox);
        QWidget::setTabOrder(defaultSpacingSpinBox, marginFunctionLineEdit);
        QWidget::setTabOrder(marginFunctionLineEdit, spacingFunctionLineEdit);
        QWidget::setTabOrder(spacingFunctionLineEdit, pixmapFunctionLineEdit);

        retranslateUi(FormWindowSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormWindowSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormWindowSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormWindowSettings);
    } // setupUi

    void retranslateUi(QDialog *FormWindowSettings)
    {
        FormWindowSettings->setWindowTitle(QApplication::translate("FormWindowSettings", "Form Settings", Q_NULLPTR));
        layoutDefaultGroupBox->setTitle(QApplication::translate("FormWindowSettings", "Layout &Default", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormWindowSettings", "&Spacing:", Q_NULLPTR));
        label->setText(QApplication::translate("FormWindowSettings", "&Margin:", Q_NULLPTR));
        layoutFunctionGroupBox->setTitle(QApplication::translate("FormWindowSettings", "&Layout Function", Q_NULLPTR));
        label_3->setText(QApplication::translate("FormWindowSettings", "Ma&rgin:", Q_NULLPTR));
        label_3_2->setText(QApplication::translate("FormWindowSettings", "Spa&cing:", Q_NULLPTR));
        pixmapFunctionGroupBox->setTitle(QApplication::translate("FormWindowSettings", "&Pixmap Function", Q_NULLPTR));
        includeHintsGroupBox->setTitle(QApplication::translate("FormWindowSettings", "&Include Hints", Q_NULLPTR));
        gridPanel->setTitle(QApplication::translate("FormWindowSettings", "Grid", Q_NULLPTR));
        embeddedGroupBox->setTitle(QApplication::translate("FormWindowSettings", "Embedded Design", Q_NULLPTR));
        pixmapFunctionGroupBox_2->setTitle(QApplication::translate("FormWindowSettings", "&Author", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormWindowSettings: public Ui_FormWindowSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWINDOWSETTINGS_H
