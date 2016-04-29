/********************************************************************************
** Form generated from reading UI file 'ViewObjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWOBJECTDIALOG_H
#define UI_VIEWOBJECTDIALOG_H

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

class Ui_ViewObjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QComboBox *tableComboBox;
    QLabel *IDLabel;
    QLineEdit *IDEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewObjectDialog)
    {
        if (ViewObjectDialog->objectName().isEmpty())
            ViewObjectDialog->setObjectName(QStringLiteral("ViewObjectDialog"));
        ViewObjectDialog->resize(320, 142);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ViewObjectDialog->sizePolicy().hasHeightForWidth());
        ViewObjectDialog->setSizePolicy(sizePolicy);
        ViewObjectDialog->setMinimumSize(QSize(320, 142));
        ViewObjectDialog->setMaximumSize(QSize(320, 142));
        verticalLayout = new QVBoxLayout(ViewObjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(ViewObjectDialog);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableComboBox = new QComboBox(ViewObjectDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        IDLabel = new QLabel(ViewObjectDialog);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));

        verticalLayout->addWidget(IDLabel);

        IDEdit = new QLineEdit(ViewObjectDialog);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        verticalLayout->addWidget(IDEdit);

        buttonBox = new QDialogButtonBox(ViewObjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ViewObjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewObjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewObjectDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(ViewObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewObjectDialog)
    {
        ViewObjectDialog->setWindowTitle(QApplication::translate("ViewObjectDialog", "View Object", 0));
        tableLabel->setText(QApplication::translate("ViewObjectDialog", "Select Table:", 0));
        IDLabel->setText(QApplication::translate("ViewObjectDialog", "Enter ID:", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewObjectDialog: public Ui_ViewObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWOBJECTDIALOG_H
