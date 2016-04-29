/********************************************************************************
** Form generated from reading UI file 'AddObjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDOBJECTDIALOG_H
#define UI_ADDOBJECTDIALOG_H

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

class Ui_AddObjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QComboBox *tableComboBox;
    QLabel *recordLabel;
    QLineEdit *recordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddObjectDialog)
    {
        if (AddObjectDialog->objectName().isEmpty())
            AddObjectDialog->setObjectName(QStringLiteral("AddObjectDialog"));
        AddObjectDialog->resize(320, 142);
        AddObjectDialog->setMinimumSize(QSize(320, 142));
        AddObjectDialog->setMaximumSize(QSize(320, 142));
        verticalLayout = new QVBoxLayout(AddObjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(AddObjectDialog);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableComboBox = new QComboBox(AddObjectDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        recordLabel = new QLabel(AddObjectDialog);
        recordLabel->setObjectName(QStringLiteral("recordLabel"));

        verticalLayout->addWidget(recordLabel);

        recordEdit = new QLineEdit(AddObjectDialog);
        recordEdit->setObjectName(QStringLiteral("recordEdit"));

        verticalLayout->addWidget(recordEdit);

        buttonBox = new QDialogButtonBox(AddObjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddObjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddObjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddObjectDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(AddObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *AddObjectDialog)
    {
        AddObjectDialog->setWindowTitle(QApplication::translate("AddObjectDialog", "Add Object", 0));
        tableLabel->setText(QApplication::translate("AddObjectDialog", "Select Table:", 0));
        recordLabel->setText(QApplication::translate("AddObjectDialog", "Enter Record String:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddObjectDialog: public Ui_AddObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDOBJECTDIALOG_H
