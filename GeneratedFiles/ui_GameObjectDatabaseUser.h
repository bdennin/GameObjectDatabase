/********************************************************************************
** Form generated from reading UI file 'GameObjectDatabaseUser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOBJECTDATABASEUSER_H
#define UI_GAMEOBJECTDATABASEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameObjectDatabaseUser
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
    QSpacerItem *mainSpacer;
    QVBoxLayout *mainLayout;
    QHBoxLayout *buttonLayout;
    QSpacerItem *buttonLeftSpacer;
    QVBoxLayout *barLayout;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *objectLabel;
    QComboBox *obectComboBox;
    QSpacerItem *buttonRightSpacer;
    QHBoxLayout *viewLayout;
    QVBoxLayout *viewImage;
    QLabel *imageLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *image;
    QVBoxLayout *viewInformation;
    QLabel *informationLabel;
    QListWidget *listWidget;

    void setupUi(QMainWindow *GameObjectDatabaseUser)
    {
        if (GameObjectDatabaseUser->objectName().isEmpty())
            GameObjectDatabaseUser->setObjectName(QStringLiteral("GameObjectDatabaseUser"));
        GameObjectDatabaseUser->resize(600, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameObjectDatabaseUser->sizePolicy().hasHeightForWidth());
        GameObjectDatabaseUser->setSizePolicy(sizePolicy);
        GameObjectDatabaseUser->setMinimumSize(QSize(600, 350));
        centralwidget = new QWidget(GameObjectDatabaseUser);
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

        mainSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(mainSpacer);

        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonLeftSpacer);

        barLayout = new QVBoxLayout();
        barLayout->setObjectName(QStringLiteral("barLayout"));
        typeLabel = new QLabel(centralwidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setAlignment(Qt::AlignCenter);

        barLayout->addWidget(typeLabel);

        typeComboBox = new QComboBox(centralwidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(typeComboBox->sizePolicy().hasHeightForWidth());
        typeComboBox->setSizePolicy(sizePolicy2);

        barLayout->addWidget(typeComboBox);

        objectLabel = new QLabel(centralwidget);
        objectLabel->setObjectName(QStringLiteral("objectLabel"));
        objectLabel->setAlignment(Qt::AlignCenter);

        barLayout->addWidget(objectLabel);

        obectComboBox = new QComboBox(centralwidget);
        obectComboBox->setObjectName(QStringLiteral("obectComboBox"));
        sizePolicy2.setHeightForWidth(obectComboBox->sizePolicy().hasHeightForWidth());
        obectComboBox->setSizePolicy(sizePolicy2);

        barLayout->addWidget(obectComboBox);


        buttonLayout->addLayout(barLayout);

        buttonRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonRightSpacer);


        mainLayout->addLayout(buttonLayout);

        viewLayout = new QHBoxLayout();
        viewLayout->setObjectName(QStringLiteral("viewLayout"));
        viewImage = new QVBoxLayout();
        viewImage->setObjectName(QStringLiteral("viewImage"));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        viewImage->addWidget(imageLabel);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        image = new QLabel(groupBox);
        image->setObjectName(QStringLiteral("image"));
        sizePolicy3.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy3);
        image->setMinimumSize(QSize(150, 150));
        image->setFrameShape(QFrame::Panel);

        verticalLayout_4->addWidget(image);


        viewImage->addWidget(groupBox);


        viewLayout->addLayout(viewImage);

        viewInformation = new QVBoxLayout();
        viewInformation->setObjectName(QStringLiteral("viewInformation"));
        informationLabel = new QLabel(centralwidget);
        informationLabel->setObjectName(QStringLiteral("informationLabel"));
        informationLabel->setAlignment(Qt::AlignCenter);

        viewInformation->addWidget(informationLabel);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAlternatingRowColors(true);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        viewInformation->addWidget(listWidget);


        viewLayout->addLayout(viewInformation);


        mainLayout->addLayout(viewLayout);


        verticalLayout->addLayout(mainLayout);

        GameObjectDatabaseUser->setCentralWidget(centralwidget);

        retranslateUi(GameObjectDatabaseUser);
        QObject::connect(logoutButton, SIGNAL(clicked()), GameObjectDatabaseUser, SLOT(logout()));
        QObject::connect(typeComboBox, SIGNAL(activated(int)), GameObjectDatabaseUser, SLOT(getObjects()));
        QObject::connect(obectComboBox, SIGNAL(activated(int)), GameObjectDatabaseUser, SLOT(sendInformation()));

        QMetaObject::connectSlotsByName(GameObjectDatabaseUser);
    } // setupUi

    void retranslateUi(QMainWindow *GameObjectDatabaseUser)
    {
        GameObjectDatabaseUser->setWindowTitle(QApplication::translate("GameObjectDatabaseUser", "Game Object Database", 0));
        logoutButton->setText(QApplication::translate("GameObjectDatabaseUser", "Logout", 0));
        titleLabel->setText(QApplication::translate("GameObjectDatabaseUser", "<h2>Game Object Viewer</h2>", 0));
        welcomeLabel->setText(QApplication::translate("GameObjectDatabaseUser", "Welcome, User", 0));
        typeLabel->setText(QApplication::translate("GameObjectDatabaseUser", "Select an Object Type:", 0));
        objectLabel->setText(QApplication::translate("GameObjectDatabaseUser", "Select an Object:", 0));
        imageLabel->setText(QApplication::translate("GameObjectDatabaseUser", "Image:", 0));
        groupBox->setTitle(QString());
        image->setText(QString());
        informationLabel->setText(QApplication::translate("GameObjectDatabaseUser", "Object Information:", 0));
    } // retranslateUi

};

namespace Ui {
    class GameObjectDatabaseUser: public Ui_GameObjectDatabaseUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOBJECTDATABASEUSER_H
