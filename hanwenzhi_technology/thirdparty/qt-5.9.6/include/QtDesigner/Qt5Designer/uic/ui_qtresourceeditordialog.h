/********************************************************************************
** Form generated from reading UI file 'qtresourceeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRESOURCEEDITORDIALOG_H
#define UI_QTRESOURCEEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtResourceEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *qrcLayoutWidget;
    QGridLayout *qrcLayout;
    QListWidget *qrcFileList;
    QToolButton *newQrcButton;
    QToolButton *removeQrcButton;
    QSpacerItem *spacerItem;
    QToolButton *importQrcButton;
    QWidget *resourceLayoutWidget;
    QGridLayout *resourceLayout;
    QTreeView *resourceTreeView;
    QToolButton *newResourceButton;
    QToolButton *addResourceButton;
    QToolButton *removeResourceButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtResourceEditorDialog)
    {
        if (QtResourceEditorDialog->objectName().isEmpty())
            QtResourceEditorDialog->setObjectName(QStringLiteral("QtResourceEditorDialog"));
        QtResourceEditorDialog->resize(469, 317);
        verticalLayout = new QVBoxLayout(QtResourceEditorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(QtResourceEditorDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        qrcLayoutWidget = new QWidget(splitter);
        qrcLayoutWidget->setObjectName(QStringLiteral("qrcLayoutWidget"));
        qrcLayout = new QGridLayout(qrcLayoutWidget);
        qrcLayout->setObjectName(QStringLiteral("qrcLayout"));
        qrcLayout->setContentsMargins(0, 0, 0, 0);
        qrcFileList = new QListWidget(qrcLayoutWidget);
        qrcFileList->setObjectName(QStringLiteral("qrcFileList"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qrcFileList->sizePolicy().hasHeightForWidth());
        qrcFileList->setSizePolicy(sizePolicy);

        qrcLayout->addWidget(qrcFileList, 0, 0, 1, 4);

        newQrcButton = new QToolButton(qrcLayoutWidget);
        newQrcButton->setObjectName(QStringLiteral("newQrcButton"));

        qrcLayout->addWidget(newQrcButton, 1, 0, 1, 1);

        removeQrcButton = new QToolButton(qrcLayoutWidget);
        removeQrcButton->setObjectName(QStringLiteral("removeQrcButton"));

        qrcLayout->addWidget(removeQrcButton, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(21, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        qrcLayout->addItem(spacerItem, 1, 3, 1, 1);

        importQrcButton = new QToolButton(qrcLayoutWidget);
        importQrcButton->setObjectName(QStringLiteral("importQrcButton"));

        qrcLayout->addWidget(importQrcButton, 1, 1, 1, 1);

        splitter->addWidget(qrcLayoutWidget);
        resourceLayoutWidget = new QWidget(splitter);
        resourceLayoutWidget->setObjectName(QStringLiteral("resourceLayoutWidget"));
        resourceLayout = new QGridLayout(resourceLayoutWidget);
        resourceLayout->setObjectName(QStringLiteral("resourceLayout"));
        resourceLayout->setContentsMargins(0, 0, 0, 0);
        resourceTreeView = new QTreeView(resourceLayoutWidget);
        resourceTreeView->setObjectName(QStringLiteral("resourceTreeView"));

        resourceLayout->addWidget(resourceTreeView, 0, 0, 1, 4);

        newResourceButton = new QToolButton(resourceLayoutWidget);
        newResourceButton->setObjectName(QStringLiteral("newResourceButton"));

        resourceLayout->addWidget(newResourceButton, 1, 0, 1, 1);

        addResourceButton = new QToolButton(resourceLayoutWidget);
        addResourceButton->setObjectName(QStringLiteral("addResourceButton"));

        resourceLayout->addWidget(addResourceButton, 1, 1, 1, 1);

        removeResourceButton = new QToolButton(resourceLayoutWidget);
        removeResourceButton->setObjectName(QStringLiteral("removeResourceButton"));

        resourceLayout->addWidget(removeResourceButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        resourceLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        splitter->addWidget(resourceLayoutWidget);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QtResourceEditorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QtResourceEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtResourceEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtResourceEditorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtResourceEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *QtResourceEditorDialog)
    {
        QtResourceEditorDialog->setWindowTitle(QApplication::translate("QtResourceEditorDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        newQrcButton->setToolTip(QApplication::translate("QtResourceEditorDialog", "New File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        newQrcButton->setText(QApplication::translate("QtResourceEditorDialog", "N", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeQrcButton->setToolTip(QApplication::translate("QtResourceEditorDialog", "Remove File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeQrcButton->setText(QApplication::translate("QtResourceEditorDialog", "R", Q_NULLPTR));
        importQrcButton->setText(QApplication::translate("QtResourceEditorDialog", "I", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        newResourceButton->setToolTip(QApplication::translate("QtResourceEditorDialog", "New Resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        newResourceButton->setText(QApplication::translate("QtResourceEditorDialog", "N", Q_NULLPTR));
        addResourceButton->setText(QApplication::translate("QtResourceEditorDialog", "A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeResourceButton->setToolTip(QApplication::translate("QtResourceEditorDialog", "Remove Resource or File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeResourceButton->setText(QApplication::translate("QtResourceEditorDialog", "R", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtResourceEditorDialog: public Ui_QtResourceEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRESOURCEEDITORDIALOG_H
