/********************************************************************************
** Form generated from reading UI file 'GameObjectDatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOBJECTDATABASE_H
#define UI_GAMEOBJECTDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameObjectDatabase
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerHorizontalLayout;
    QSpacerItem *leftHeaderSpacer;
    QLabel *headerLabel;
    QSpacerItem *rightHeaderSpacer;
    QHBoxLayout *buttonHorizontalLayout;
    QVBoxLayout *buttonVerticalLayout;
    QFormLayout *inputLayout;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QLabel *errorLabel;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *GameObjectDatabase)
    {
        if (GameObjectDatabase->objectName().isEmpty())
            GameObjectDatabase->setObjectName(QStringLiteral("GameObjectDatabase"));
        GameObjectDatabase->resize(353, 203);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameObjectDatabase->sizePolicy().hasHeightForWidth());
        GameObjectDatabase->setSizePolicy(sizePolicy);
        GameObjectDatabase->setMinimumSize(QSize(353, 203));
        centralWidget = new QWidget(GameObjectDatabase);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        headerHorizontalLayout = new QHBoxLayout();
        headerHorizontalLayout->setSpacing(6);
        headerHorizontalLayout->setObjectName(QStringLiteral("headerHorizontalLayout"));
        leftHeaderSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerHorizontalLayout->addItem(leftHeaderSpacer);

        headerLabel = new QLabel(centralWidget);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(headerLabel->sizePolicy().hasHeightForWidth());
        headerLabel->setSizePolicy(sizePolicy1);

        headerHorizontalLayout->addWidget(headerLabel);

        rightHeaderSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerHorizontalLayout->addItem(rightHeaderSpacer);


        verticalLayout->addLayout(headerHorizontalLayout);

        buttonHorizontalLayout = new QHBoxLayout();
        buttonHorizontalLayout->setSpacing(6);
        buttonHorizontalLayout->setObjectName(QStringLiteral("buttonHorizontalLayout"));
        buttonVerticalLayout = new QVBoxLayout();
        buttonVerticalLayout->setSpacing(6);
        buttonVerticalLayout->setObjectName(QStringLiteral("buttonVerticalLayout"));
        inputLayout = new QFormLayout();
        inputLayout->setSpacing(6);
        inputLayout->setObjectName(QStringLiteral("inputLayout"));
        inputLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        inputLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        passwordLabel = new QLabel(centralWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        inputLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        usernameInput = new QLineEdit(centralWidget);
        usernameInput->setObjectName(QStringLiteral("usernameInput"));

        inputLayout->setWidget(0, QFormLayout::FieldRole, usernameInput);

        passwordInput = new QLineEdit(centralWidget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setInputMask(QStringLiteral(""));
        passwordInput->setFrame(true);
        passwordInput->setEchoMode(QLineEdit::Password);

        inputLayout->setWidget(1, QFormLayout::FieldRole, passwordInput);


        buttonVerticalLayout->addLayout(inputLayout);

        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setAlignment(Qt::AlignCenter);

        buttonVerticalLayout->addWidget(errorLabel);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        buttonLayout->addWidget(loginButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_3);

        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        buttonLayout->addWidget(exitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_2);


        buttonVerticalLayout->addLayout(buttonLayout);


        buttonHorizontalLayout->addLayout(buttonVerticalLayout);


        verticalLayout->addLayout(buttonHorizontalLayout);

        GameObjectDatabase->setCentralWidget(centralWidget);

        retranslateUi(GameObjectDatabase);
        QObject::connect(loginButton, SIGNAL(clicked()), GameObjectDatabase, SLOT(login()));
        QObject::connect(exitButton, SIGNAL(clicked()), GameObjectDatabase, SLOT(close()));

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(GameObjectDatabase);
    } // setupUi

    void retranslateUi(QMainWindow *GameObjectDatabase)
    {
        GameObjectDatabase->setWindowTitle(QApplication::translate("GameObjectDatabase", "Game Object Database", 0));
        headerLabel->setText(QApplication::translate("GameObjectDatabase", "<h2>Game Object Database</h2>", 0));
        usernameLabel->setText(QApplication::translate("GameObjectDatabase", "Username:", 0));
        passwordLabel->setText(QApplication::translate("GameObjectDatabase", "Password:", 0));
        passwordInput->setText(QString());
        errorLabel->setText(QString());
        loginButton->setText(QApplication::translate("GameObjectDatabase", "Login", 0));
        exitButton->setText(QApplication::translate("GameObjectDatabase", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class GameObjectDatabase: public Ui_GameObjectDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOBJECTDATABASE_H
