/********************************************************************************
** Form generated from reading UI file 'RemoveAllObjectsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEALLOBJECTSDIALOG_H
#define UI_REMOVEALLOBJECTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoveAllDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoveAllDialog)
    {
        if (RemoveAllDialog->objectName().isEmpty())
            RemoveAllDialog->setObjectName(QStringLiteral("RemoveAllDialog"));
        RemoveAllDialog->resize(320, 80);
        RemoveAllDialog->setMinimumSize(QSize(320, 80));
        RemoveAllDialog->setMaximumSize(QSize(320, 80));
        verticalLayout = new QVBoxLayout(RemoveAllDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RemoveAllDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(RemoveAllDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RemoveAllDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoveAllDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoveAllDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(RemoveAllDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveAllDialog)
    {
        RemoveAllDialog->setWindowTitle(QApplication::translate("RemoveAllDialog", "Remove All Objects", 0));
        label->setText(QApplication::translate("RemoveAllDialog", "Are you sure you want to remove ALL database objects?", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveAllDialog: public Ui_RemoveAllDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEALLOBJECTSDIALOG_H
