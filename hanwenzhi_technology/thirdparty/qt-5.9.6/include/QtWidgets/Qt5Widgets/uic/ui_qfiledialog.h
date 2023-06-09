/*
*********************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtWidgets module of the Qt Toolkit.
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
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'qfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILEDIALOG_H
#define UI_QFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "private/qfiledialog_p.h"
#include "private/qsidebar_p.h"

QT_BEGIN_NAMESPACE

class Ui_QFileDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lookInLabel;
    QHBoxLayout *hboxLayout;
    QFileDialogComboBox *lookInCombo;
    QToolButton *backButton;
    QToolButton *forwardButton;
    QToolButton *toParentButton;
    QToolButton *newFolderButton;
    QToolButton *listModeButton;
    QToolButton *detailModeButton;
    QSplitter *splitter;
    QSidebar *sidebar;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *vboxLayout1;
    QFileDialogListView *listView;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QFileDialogTreeView *treeView;
    QLabel *fileNameLabel;
    QFileDialogLineEdit *fileNameEdit;
    QDialogButtonBox *buttonBox;
    QLabel *fileTypeLabel;
    QComboBox *fileTypeCombo;

    void setupUi(QDialog *QFileDialog)
    {
        if (QFileDialog->objectName().isEmpty())
            QFileDialog->setObjectName(QStringLiteral("QFileDialog"));
        QFileDialog->resize(521, 316);
        QFileDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(QFileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lookInLabel = new QLabel(QFileDialog);
        lookInLabel->setObjectName(QStringLiteral("lookInLabel"));

        gridLayout->addWidget(lookInLabel, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        lookInCombo = new QFileDialogComboBox(QFileDialog);
        lookInCombo->setObjectName(QStringLiteral("lookInCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lookInCombo->sizePolicy().hasHeightForWidth());
        lookInCombo->setSizePolicy(sizePolicy);
        lookInCombo->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(lookInCombo);

        backButton = new QToolButton(QFileDialog);
        backButton->setObjectName(QStringLiteral("backButton"));

        hboxLayout->addWidget(backButton);

        forwardButton = new QToolButton(QFileDialog);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));

        hboxLayout->addWidget(forwardButton);

        toParentButton = new QToolButton(QFileDialog);
        toParentButton->setObjectName(QStringLiteral("toParentButton"));

        hboxLayout->addWidget(toParentButton);

        newFolderButton = new QToolButton(QFileDialog);
        newFolderButton->setObjectName(QStringLiteral("newFolderButton"));

        hboxLayout->addWidget(newFolderButton);

        listModeButton = new QToolButton(QFileDialog);
        listModeButton->setObjectName(QStringLiteral("listModeButton"));

        hboxLayout->addWidget(listModeButton);

        detailModeButton = new QToolButton(QFileDialog);
        detailModeButton->setObjectName(QStringLiteral("detailModeButton"));

        hboxLayout->addWidget(detailModeButton);


        gridLayout->addLayout(hboxLayout, 0, 1, 1, 2);

        splitter = new QSplitter(QFileDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        sidebar = new QSidebar(splitter);
        sidebar->setObjectName(QStringLiteral("sidebar"));
        splitter->addWidget(sidebar);
        frame = new QFrame(splitter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        vboxLayout1 = new QVBoxLayout(page);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        listView = new QFileDialogListView(page);
        listView->setObjectName(QStringLiteral("listView"));

        vboxLayout1->addWidget(listView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        treeView = new QFileDialogTreeView(page_2);
        treeView->setObjectName(QStringLiteral("treeView"));

        vboxLayout2->addWidget(treeView);

        stackedWidget->addWidget(page_2);

        vboxLayout->addWidget(stackedWidget);

        splitter->addWidget(frame);

        gridLayout->addWidget(splitter, 1, 0, 1, 3);

        fileNameLabel = new QLabel(QFileDialog);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy2);
        fileNameLabel->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(fileNameLabel, 2, 0, 1, 1);

        fileNameEdit = new QFileDialogLineEdit(QFileDialog);
        fileNameEdit->setObjectName(QStringLiteral("fileNameEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileNameEdit->sizePolicy().hasHeightForWidth());
        fileNameEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(fileNameEdit, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 2, 1);

        fileTypeLabel = new QLabel(QFileDialog);
        fileTypeLabel->setObjectName(QStringLiteral("fileTypeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fileTypeLabel->sizePolicy().hasHeightForWidth());
        fileTypeLabel->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(fileTypeLabel, 3, 0, 1, 1);

        fileTypeCombo = new QComboBox(QFileDialog);
        fileTypeCombo->setObjectName(QStringLiteral("fileTypeCombo"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fileTypeCombo->sizePolicy().hasHeightForWidth());
        fileTypeCombo->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(fileTypeCombo, 3, 1, 1, 1);

        QWidget::setTabOrder(lookInCombo, backButton);
        QWidget::setTabOrder(backButton, forwardButton);
        QWidget::setTabOrder(forwardButton, toParentButton);
        QWidget::setTabOrder(toParentButton, newFolderButton);
        QWidget::setTabOrder(newFolderButton, listModeButton);
        QWidget::setTabOrder(listModeButton, detailModeButton);
        QWidget::setTabOrder(detailModeButton, sidebar);
        QWidget::setTabOrder(sidebar, treeView);
        QWidget::setTabOrder(treeView, listView);
        QWidget::setTabOrder(listView, fileNameEdit);
        QWidget::setTabOrder(fileNameEdit, buttonBox);
        QWidget::setTabOrder(buttonBox, fileTypeCombo);

        retranslateUi(QFileDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QFileDialog);
    } // setupUi

    void retranslateUi(QDialog *QFileDialog)
    {
        lookInLabel->setText(QApplication::translate("QFileDialog", "Look in:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backButton->setToolTip(QApplication::translate("QFileDialog", "Back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleName(QApplication::translate("QFileDialog", "Back", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go back", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_SHORTCUT
        backButton->setShortcut(QApplication::translate("QFileDialog", "Alt+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        forwardButton->setToolTip(QApplication::translate("QFileDialog", "Forward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleName(QApplication::translate("QFileDialog", "Forward", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go forward", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_SHORTCUT
        forwardButton->setShortcut(QApplication::translate("QFileDialog", "Alt+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        toParentButton->setToolTip(QApplication::translate("QFileDialog", "Parent Directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleName(QApplication::translate("QFileDialog", "Parent Directory", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go to the parent directory", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_SHORTCUT
        toParentButton->setShortcut(QApplication::translate("QFileDialog", "Alt+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        newFolderButton->setToolTip(QApplication::translate("QFileDialog", "Create New Folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        newFolderButton->setAccessibleName(QApplication::translate("QFileDialog", "Create New Folder", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        newFolderButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Create a New Folder", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        listModeButton->setToolTip(QApplication::translate("QFileDialog", "List View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleName(QApplication::translate("QFileDialog", "List View", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Change to list view mode", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        detailModeButton->setToolTip(QApplication::translate("QFileDialog", "Detail View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleName(QApplication::translate("QFileDialog", "Detail View", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Change to detail view mode", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sidebar->setAccessibleName(QApplication::translate("QFileDialog", "Sidebar", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sidebar->setAccessibleDescription(QApplication::translate("QFileDialog", "List of places and bookmarks", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listView->setAccessibleName(QApplication::translate("QFileDialog", "Files", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        treeView->setAccessibleName(QApplication::translate("QFileDialog", "Files", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        fileTypeLabel->setText(QApplication::translate("QFileDialog", "Files of type:", Q_NULLPTR));
        Q_UNUSED(QFileDialog);
    } // retranslateUi

};

namespace Ui {
    class QFileDialog: public Ui_QFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILEDIALOG_H
