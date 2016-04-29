/********************************************************************************
** Form generated from reading UI file 'GenerateObjectsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEOBJECTSDIALOG_H
#define UI_GENERATEOBJECTSDIALOG_H

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

class Ui_GenerateObjectsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tabelLabel;
    QComboBox *tableComboBox;
    QLabel *generateLabel;
    QLineEdit *generateEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenerateObjectsDialog)
    {
        if (GenerateObjectsDialog->objectName().isEmpty())
            GenerateObjectsDialog->setObjectName(QStringLiteral("GenerateObjectsDialog"));
        GenerateObjectsDialog->resize(320, 142);
        GenerateObjectsDialog->setMinimumSize(QSize(320, 142));
        GenerateObjectsDialog->setMaximumSize(QSize(320, 142));
        verticalLayout = new QVBoxLayout(GenerateObjectsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabelLabel = new QLabel(GenerateObjectsDialog);
        tabelLabel->setObjectName(QStringLiteral("tabelLabel"));

        verticalLayout->addWidget(tabelLabel);

        tableComboBox = new QComboBox(GenerateObjectsDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        generateLabel = new QLabel(GenerateObjectsDialog);
        generateLabel->setObjectName(QStringLiteral("generateLabel"));

        verticalLayout->addWidget(generateLabel);

        generateEdit = new QLineEdit(GenerateObjectsDialog);
        generateEdit->setObjectName(QStringLiteral("generateEdit"));

        verticalLayout->addWidget(generateEdit);

        buttonBox = new QDialogButtonBox(GenerateObjectsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GenerateObjectsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GenerateObjectsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GenerateObjectsDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(GenerateObjectsDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateObjectsDialog)
    {
        GenerateObjectsDialog->setWindowTitle(QApplication::translate("GenerateObjectsDialog", "Generate Objects", 0));
        tabelLabel->setText(QApplication::translate("GenerateObjectsDialog", "Select Table:", 0));
        generateLabel->setText(QApplication::translate("GenerateObjectsDialog", "Enter Number to Generate:", 0));
    } // retranslateUi

};

namespace Ui {
    class GenerateObjectsDialog: public Ui_GenerateObjectsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEOBJECTSDIALOG_H
