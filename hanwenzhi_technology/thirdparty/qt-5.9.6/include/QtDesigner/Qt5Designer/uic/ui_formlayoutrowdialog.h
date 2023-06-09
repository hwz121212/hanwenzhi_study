/********************************************************************************
** Form generated from reading UI file 'formlayoutrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLAYOUTROWDIALOG_H
#define UI_FORMLAYOUTROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FormLayoutRowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelTextLabel;
    QLineEdit *labelTextLineEdit;
    QLineEdit *labelNameLineEdit;
    QLabel *fieldClassLabel;
    QComboBox *fieldClassComboBox;
    QLabel *fieldNameLabel;
    QLabel *buddyLabel;
    QCheckBox *buddyCheckBox;
    QLabel *rowLabel;
    QSpinBox *rowSpinBox;
    QLineEdit *fieldNameLineEdit;
    QLabel *labelNameLabel;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormLayoutRowDialog)
    {
        if (FormLayoutRowDialog->objectName().isEmpty())
            FormLayoutRowDialog->setObjectName(QStringLiteral("FormLayoutRowDialog"));
        verticalLayout = new QVBoxLayout(FormLayoutRowDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelTextLabel = new QLabel(FormLayoutRowDialog);
        labelTextLabel->setObjectName(QStringLiteral("labelTextLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTextLabel);

        labelTextLineEdit = new QLineEdit(FormLayoutRowDialog);
        labelTextLineEdit->setObjectName(QStringLiteral("labelTextLineEdit"));
        labelTextLineEdit->setMinimumSize(QSize(180, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelTextLineEdit);

        labelNameLineEdit = new QLineEdit(FormLayoutRowDialog);
        labelNameLineEdit->setObjectName(QStringLiteral("labelNameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelNameLineEdit);

        fieldClassLabel = new QLabel(FormLayoutRowDialog);
        fieldClassLabel->setObjectName(QStringLiteral("fieldClassLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, fieldClassLabel);

        fieldClassComboBox = new QComboBox(FormLayoutRowDialog);
        fieldClassComboBox->setObjectName(QStringLiteral("fieldClassComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fieldClassComboBox->sizePolicy().hasHeightForWidth());
        fieldClassComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, fieldClassComboBox);

        fieldNameLabel = new QLabel(FormLayoutRowDialog);
        fieldNameLabel->setObjectName(QStringLiteral("fieldNameLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, fieldNameLabel);

        buddyLabel = new QLabel(FormLayoutRowDialog);
        buddyLabel->setObjectName(QStringLiteral("buddyLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, buddyLabel);

        buddyCheckBox = new QCheckBox(FormLayoutRowDialog);
        buddyCheckBox->setObjectName(QStringLiteral("buddyCheckBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, buddyCheckBox);

        rowLabel = new QLabel(FormLayoutRowDialog);
        rowLabel->setObjectName(QStringLiteral("rowLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, rowLabel);

        rowSpinBox = new QSpinBox(FormLayoutRowDialog);
        rowSpinBox->setObjectName(QStringLiteral("rowSpinBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, rowSpinBox);

        fieldNameLineEdit = new QLineEdit(FormLayoutRowDialog);
        fieldNameLineEdit->setObjectName(QStringLiteral("fieldNameLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, fieldNameLineEdit);

        labelNameLabel = new QLabel(FormLayoutRowDialog);
        labelNameLabel->setObjectName(QStringLiteral("labelNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNameLabel);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(FormLayoutRowDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(FormLayoutRowDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelTextLabel->setBuddy(labelTextLineEdit);
        fieldClassLabel->setBuddy(fieldClassComboBox);
        fieldNameLabel->setBuddy(fieldNameLineEdit);
        buddyLabel->setBuddy(buddyCheckBox);
        rowLabel->setBuddy(rowSpinBox);
        labelNameLabel->setBuddy(labelNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(FormLayoutRowDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormLayoutRowDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormLayoutRowDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormLayoutRowDialog);
    } // setupUi

    void retranslateUi(QDialog *FormLayoutRowDialog)
    {
        FormLayoutRowDialog->setWindowTitle(QApplication::translate("FormLayoutRowDialog", "Add Form Layout Row", Q_NULLPTR));
        labelTextLabel->setText(QApplication::translate("FormLayoutRowDialog", "&Label text:", Q_NULLPTR));
        fieldClassLabel->setText(QApplication::translate("FormLayoutRowDialog", "Field &type:", Q_NULLPTR));
        fieldNameLabel->setText(QApplication::translate("FormLayoutRowDialog", "&Field name:", Q_NULLPTR));
        buddyLabel->setText(QApplication::translate("FormLayoutRowDialog", "&Buddy:", Q_NULLPTR));
        buddyCheckBox->setText(QString());
        rowLabel->setText(QApplication::translate("FormLayoutRowDialog", "&Row:", Q_NULLPTR));
        labelNameLabel->setText(QApplication::translate("FormLayoutRowDialog", "Label &name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormLayoutRowDialog: public Ui_FormLayoutRowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLAYOUTROWDIALOG_H
