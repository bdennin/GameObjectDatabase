/********************************************************************************
** Form generated from reading UI file 'ViewTableDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTABLEDIALOG_H
#define UI_VIEWTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewTableDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QComboBox *tableComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewTableDialog)
    {
        if (ViewTableDialog->objectName().isEmpty())
            ViewTableDialog->setObjectName(QStringLiteral("ViewTableDialog"));
        ViewTableDialog->resize(320, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ViewTableDialog->sizePolicy().hasHeightForWidth());
        ViewTableDialog->setSizePolicy(sizePolicy);
        ViewTableDialog->setMinimumSize(QSize(320, 100));
        ViewTableDialog->setMaximumSize(QSize(320, 100));
        ViewTableDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ViewTableDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(ViewTableDialog);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableComboBox = new QComboBox(ViewTableDialog);
        tableComboBox->setObjectName(QStringLiteral("tableComboBox"));

        verticalLayout->addWidget(tableComboBox);

        buttonBox = new QDialogButtonBox(ViewTableDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(ViewTableDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewTableDialog, SLOT(hide()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewTableDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ViewTableDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewTableDialog)
    {
        ViewTableDialog->setWindowTitle(QApplication::translate("ViewTableDialog", "View Table Objects", 0));
        tableLabel->setText(QApplication::translate("ViewTableDialog", "Select Table:", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewTableDialog: public Ui_ViewTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTABLEDIALOG_H
