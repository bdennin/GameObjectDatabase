/********************************************************************************
** Form generated from reading UI file 'ModifyObjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYOBJECTDIALOG_H
#define UI_MODIFYOBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyObjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QComboBox *tableComboBox;
    QLabel *IDLabel;
    QLineEdit *IDEdit;
    QLabel *columnLabel;
    QLineEdit *columnEdit;
    QLabel *valueLabel;
    QLineEdit *valueEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModifyObjectDialog)
    {
        if (ModifyObjectDialog->objectName().isEmpty())
            ModifyObjectDialog->setObjectName(QStringLiteral("ModifyObjectDialog"));
        ModifyObjectDialog->resize(320, 259);
        ModifyObjectDialog->setMinimumSize(QSize(320, 0));
        ModifyObjectDialog->setMaximumSize(QSize(320, 16777215));
        verticalLayout = new QVBoxLayout(ModifyObjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(ModifyObjectDialog);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableComboBox = new QComboBox(ModifyObjectDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        IDLabel = new QLabel(ModifyObjectDialog);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));

        verticalLayout->addWidget(IDLabel);

        IDEdit = new QLineEdit(ModifyObjectDialog);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        verticalLayout->addWidget(IDEdit);

        columnLabel = new QLabel(ModifyObjectDialog);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));

        verticalLayout->addWidget(columnLabel);

        columnEdit = new QLineEdit(ModifyObjectDialog);
        columnEdit->setObjectName(QStringLiteral("columnEdit"));

        verticalLayout->addWidget(columnEdit);

        valueLabel = new QLabel(ModifyObjectDialog);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        verticalLayout->addWidget(valueLabel);

        valueEdit = new QLineEdit(ModifyObjectDialog);
        valueEdit->setObjectName(QStringLiteral("valueEdit"));

        verticalLayout->addWidget(valueEdit);

        buttonBox = new QDialogButtonBox(ModifyObjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        IDEdit->raise();
        tableLabel->raise();
        tableComboBox->raise();
        columnLabel->raise();
        columnEdit->raise();
        buttonBox->raise();
        valueLabel->raise();
        valueEdit->raise();
        IDLabel->raise();

        retranslateUi(ModifyObjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModifyObjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModifyObjectDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(ModifyObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifyObjectDialog)
    {
        ModifyObjectDialog->setWindowTitle(QApplication::translate("ModifyObjectDialog", "Modify Object", 0));
        tableLabel->setText(QApplication::translate("ModifyObjectDialog", "Select Table:", 0));
        IDLabel->setText(QApplication::translate("ModifyObjectDialog", "Enter ID:", 0));
        columnLabel->setText(QApplication::translate("ModifyObjectDialog", "Enter Column to Change:", 0));
        valueLabel->setText(QApplication::translate("ModifyObjectDialog", "Enter New Value:", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyObjectDialog: public Ui_ModifyObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYOBJECTDIALOG_H
