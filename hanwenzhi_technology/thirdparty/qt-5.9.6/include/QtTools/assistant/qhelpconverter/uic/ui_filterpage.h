/********************************************************************************
** Form generated from reading UI file 'filterpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERPAGE_H
#define UI_FILTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *filterLineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTreeWidget *customFilterWidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *FilterPage)
    {
        if (FilterPage->objectName().isEmpty())
            FilterPage->setObjectName(QStringLiteral("FilterPage"));
        FilterPage->resize(419, 243);
        gridLayout = new QGridLayout(FilterPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FilterPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        filterLineEdit = new QLineEdit(FilterPage);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        gridLayout->addWidget(filterLineEdit, 2, 0, 1, 1);

        groupBox = new QGroupBox(FilterPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        customFilterWidget = new QTreeWidget(groupBox);
        customFilterWidget->setObjectName(QStringLiteral("customFilterWidget"));
        customFilterWidget->setColumnCount(2);

        gridLayout1->addWidget(customFilterWidget, 0, 0, 3, 1);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout1->addWidget(addButton, 0, 1, 1, 1);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        gridLayout1->addWidget(removeButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 4, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 5, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem3, 3, 0, 1, 1);


        retranslateUi(FilterPage);

        QMetaObject::connectSlotsByName(FilterPage);
    } // setupUi

    void retranslateUi(QWidget *FilterPage)
    {
        FilterPage->setWindowTitle(QApplication::translate("FilterPage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FilterPage", "Filter attributes for current documentation (comma separated list):", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FilterPage", "Custom Filters", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = customFilterWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("FilterPage", "2", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("FilterPage", "1", Q_NULLPTR));
        addButton->setText(QApplication::translate("FilterPage", "Add", Q_NULLPTR));
        removeButton->setText(QApplication::translate("FilterPage", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FilterPage: public Ui_FilterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERPAGE_H
