/********************************************************************************
** Form generated from reading UI file 'GameObjectDatabaseAdmin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOBJECTDATABASEADMIN_H
#define UI_GAMEOBJECTDATABASEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameObjectDatabaseAdmin
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerLayout;
    QHBoxLayout *toolLayout;
    QToolButton *logoutButton;
    QSpacerItem *toolExpander;
    QSpacerItem *headerLeftFixedSpacer;
    QHBoxLayout *titleLayout;
    QLabel *titleLabel;
    QSpacerItem *headerRightFixedSpacer;
    QHBoxLayout *welcomeLayout;
    QSpacerItem *welcomeExpander;
    QLabel *welcomeLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *mainLayout;
    QVBoxLayout *recordLayout;
    QLabel *obectLabel;
    QTableWidget *tableWidget;
    QVBoxLayout *commandLayout;
    QLabel *commandLabel;
    QGroupBox *commandBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addButton;
    QPushButton *generateButton;
    QPushButton *modifyButton;
    QPushButton *removeButton;
    QPushButton *removeAllButton;
    QPushButton *viewButton;
    QPushButton *viewTablesButton;
    QLabel *errLabel;

    void setupUi(QMainWindow *GameObjectDatabaseAdmin)
    {
        if (GameObjectDatabaseAdmin->objectName().isEmpty())
            GameObjectDatabaseAdmin->setObjectName(QStringLiteral("GameObjectDatabaseAdmin"));
        GameObjectDatabaseAdmin->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameObjectDatabaseAdmin->sizePolicy().hasHeightForWidth());
        GameObjectDatabaseAdmin->setSizePolicy(sizePolicy);
        GameObjectDatabaseAdmin->setMinimumSize(QSize(600, 400));
        centralwidget = new QWidget(GameObjectDatabaseAdmin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName(QStringLiteral("headerLayout"));
        toolLayout = new QHBoxLayout();
        toolLayout->setObjectName(QStringLiteral("toolLayout"));
        logoutButton = new QToolButton(centralwidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));

        toolLayout->addWidget(logoutButton);

        toolExpander = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolLayout->addItem(toolExpander);


        headerLayout->addLayout(toolLayout);

        headerLeftFixedSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        headerLayout->addItem(headerLeftFixedSpacer);

        titleLayout = new QHBoxLayout();
        titleLayout->setObjectName(QStringLiteral("titleLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);

        titleLayout->addWidget(titleLabel);


        headerLayout->addLayout(titleLayout);

        headerRightFixedSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        headerLayout->addItem(headerRightFixedSpacer);

        welcomeLayout = new QHBoxLayout();
        welcomeLayout->setObjectName(QStringLiteral("welcomeLayout"));
        welcomeExpander = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomeLayout->addItem(welcomeExpander);

        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        sizePolicy1.setHeightForWidth(welcomeLabel->sizePolicy().hasHeightForWidth());
        welcomeLabel->setSizePolicy(sizePolicy1);

        welcomeLayout->addWidget(welcomeLabel);


        headerLayout->addLayout(welcomeLayout);


        verticalLayout->addLayout(headerLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        recordLayout = new QVBoxLayout();
        recordLayout->setObjectName(QStringLiteral("recordLayout"));
        obectLabel = new QLabel(centralwidget);
        obectLabel->setObjectName(QStringLiteral("obectLabel"));
        obectLabel->setAlignment(Qt::AlignCenter);

        recordLayout->addWidget(obectLabel);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(true);

        recordLayout->addWidget(tableWidget);


        mainLayout->addLayout(recordLayout);

        commandLayout = new QVBoxLayout();
        commandLayout->setObjectName(QStringLiteral("commandLayout"));
        commandLabel = new QLabel(centralwidget);
        commandLabel->setObjectName(QStringLiteral("commandLabel"));
        commandLabel->setAlignment(Qt::AlignCenter);

        commandLayout->addWidget(commandLabel);

        commandBox = new QGroupBox(centralwidget);
        commandBox->setObjectName(QStringLiteral("commandBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(commandBox->sizePolicy().hasHeightForWidth());
        commandBox->setSizePolicy(sizePolicy2);
        commandBox->setMinimumSize(QSize(100, 0));
        verticalLayout_2 = new QVBoxLayout(commandBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        addButton = new QPushButton(commandBox);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout_2->addWidget(addButton);

        generateButton = new QPushButton(commandBox);
        generateButton->setObjectName(QStringLiteral("generateButton"));

        verticalLayout_2->addWidget(generateButton);

        modifyButton = new QPushButton(commandBox);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));

        verticalLayout_2->addWidget(modifyButton);

        removeButton = new QPushButton(commandBox);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        verticalLayout_2->addWidget(removeButton);

        removeAllButton = new QPushButton(commandBox);
        removeAllButton->setObjectName(QStringLiteral("removeAllButton"));

        verticalLayout_2->addWidget(removeAllButton);

        viewButton = new QPushButton(commandBox);
        viewButton->setObjectName(QStringLiteral("viewButton"));

        verticalLayout_2->addWidget(viewButton);

        viewTablesButton = new QPushButton(commandBox);
        viewTablesButton->setObjectName(QStringLiteral("viewTablesButton"));

        verticalLayout_2->addWidget(viewTablesButton);

        errLabel = new QLabel(commandBox);
        errLabel->setObjectName(QStringLiteral("errLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(errLabel->sizePolicy().hasHeightForWidth());
        errLabel->setSizePolicy(sizePolicy3);
        errLabel->setMaximumSize(QSize(16777215, 20));
        errLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(errLabel);


        commandLayout->addWidget(commandBox);


        mainLayout->addLayout(commandLayout);


        verticalLayout->addLayout(mainLayout);

        GameObjectDatabaseAdmin->setCentralWidget(centralwidget);

        retranslateUi(GameObjectDatabaseAdmin);
        QObject::connect(viewButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(view()));
        QObject::connect(viewTablesButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(viewTable()));
        QObject::connect(modifyButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(modify()));
        QObject::connect(removeAllButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(removeAll()));
        QObject::connect(logoutButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(logout()));
        QObject::connect(removeButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(remove()));
        QObject::connect(generateButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(generate()));
        QObject::connect(addButton, SIGNAL(clicked()), GameObjectDatabaseAdmin, SLOT(add()));

        QMetaObject::connectSlotsByName(GameObjectDatabaseAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *GameObjectDatabaseAdmin)
    {
        GameObjectDatabaseAdmin->setWindowTitle(QApplication::translate("GameObjectDatabaseAdmin", "Game Object Database", 0));
        logoutButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Logout", 0));
        titleLabel->setText(QApplication::translate("GameObjectDatabaseAdmin", "<h2>Game Object Database</h2>", 0));
        welcomeLabel->setText(QApplication::translate("GameObjectDatabaseAdmin", "Welcome, Administrator", 0));
        obectLabel->setText(QApplication::translate("GameObjectDatabaseAdmin", "Objects", 0));
        commandLabel->setText(QApplication::translate("GameObjectDatabaseAdmin", "Commands", 0));
        commandBox->setTitle(QString());
        addButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Add Object", 0));
        generateButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Generate Objects", 0));
        modifyButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Modify Object", 0));
        removeButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Remove Object", 0));
        removeAllButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "Remove All Objects", 0));
        viewButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "View Object", 0));
        viewTablesButton->setText(QApplication::translate("GameObjectDatabaseAdmin", "View Table Objects", 0));
        errLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameObjectDatabaseAdmin: public Ui_GameObjectDatabaseAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOBJECTDATABASEADMIN_H
