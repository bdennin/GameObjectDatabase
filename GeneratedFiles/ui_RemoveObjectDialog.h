/********************************************************************************
** Form generated from reading UI file 'RemoveObjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEOBJECTDIALOG_H
#define UI_REMOVEOBJECTDIALOG_H

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

class Ui_RemoveObjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QComboBox *tableComboBox;
    QLabel *IDLabel;
    QLineEdit *IDEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoveObjectDialog)
    {
        if (RemoveObjectDialog->objectName().isEmpty())
            RemoveObjectDialog->setObjectName(QStringLiteral("RemoveObjectDialog"));
        RemoveObjectDialog->resize(320, 142);
        RemoveObjectDialog->setMinimumSize(QSize(320, 142));
        RemoveObjectDialog->setMaximumSize(QSize(320, 142));
        verticalLayout = new QVBoxLayout(RemoveObjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(RemoveObjectDialog);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableComboBox = new QComboBox(RemoveObjectDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        IDLabel = new QLabel(RemoveObjectDialog);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));

        verticalLayout->addWidget(IDLabel);

        IDEdit = new QLineEdit(RemoveObjectDialog);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        verticalLayout->addWidget(IDEdit);

        buttonBox = new QDialogButtonBox(RemoveObjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RemoveObjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoveObjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoveObjectDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(RemoveObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveObjectDialog)
    {
        RemoveObjectDialog->setWindowTitle(QApplication::translate("RemoveObjectDialog", "Remove Object", 0));
        tableLabel->setText(QApplication::translate("RemoveObjectDialog", "Select Table:", 0));
        IDLabel->setText(QApplication::translate("RemoveObjectDialog", "Enter ID:", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveObjectDialog: public Ui_RemoveObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEOBJECTDIALOG_H
