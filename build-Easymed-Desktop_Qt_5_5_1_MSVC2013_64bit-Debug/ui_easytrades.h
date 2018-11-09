/********************************************************************************
** Form generated from reading UI file 'easytrades.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYTRADES_H
#define UI_EASYTRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EasyTrades
{
public:
    QAction *actionStart_Application;
    QAction *actionBack_Up;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionCheck_for_Updates;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuLicense;

    void setupUi(QMainWindow *EasyTrades)
    {
        if (EasyTrades->objectName().isEmpty())
            EasyTrades->setObjectName(QStringLiteral("EasyTrades"));
        EasyTrades->resize(514, 378);
        EasyTrades->setMaximumSize(QSize(800, 500));
        EasyTrades->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/Pictures/ewebs_logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        EasyTrades->setWindowIcon(icon);
        EasyTrades->setStyleSheet(QStringLiteral(""));
        actionStart_Application = new QAction(EasyTrades);
        actionStart_Application->setObjectName(QStringLiteral("actionStart_Application"));
        actionBack_Up = new QAction(EasyTrades);
        actionBack_Up->setObjectName(QStringLiteral("actionBack_Up"));
        actionExit = new QAction(EasyTrades);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(EasyTrades);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionCheck_for_Updates = new QAction(EasyTrades);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        centralWidget = new QWidget(EasyTrades);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(500, 500));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 161, 61));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgb(153,0,51), stop:1 rgba(255, 255, 255, 255));\n"
"color: #fff;\n"
"font-weight: bold;\n"
"border-radius: 5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/no2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(50, 30));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 120, 161, 71));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgb(153,0,51), stop:1 rgb(51,51,204) );\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"border-radius: 5px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/PuTTY_icon_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(50, 30));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 240, 161, 71));
        pushButton_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgb(153,0,51), stop:1 rgb(51,51,204) );\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"border-radius: 5px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/images/database-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(50, 30));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(210, 0, 281, 341));
        frame->setStyleSheet(QStringLiteral("image: url(:/files/Pictures/ewebs_logo.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        EasyTrades->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EasyTrades);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EasyTrades->setStatusBar(statusBar);
        menuBar = new QMenuBar(EasyTrades);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuLicense = new QMenu(menuBar);
        menuLicense->setObjectName(QStringLiteral("menuLicense"));
        EasyTrades->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLicense->menuAction());
        menuFile->addAction(actionStart_Application);
        menuFile->addAction(actionBack_Up);
        menuFile->addAction(actionExit);
        menuLicense->addAction(actionCheck_for_Updates);
        menuLicense->addAction(actionAbout);

        retranslateUi(EasyTrades);

        QMetaObject::connectSlotsByName(EasyTrades);
    } // setupUi

    void retranslateUi(QMainWindow *EasyTrades)
    {
        EasyTrades->setWindowTitle(QApplication::translate("EasyTrades", "EasyMed", 0));
        actionStart_Application->setText(QApplication::translate("EasyTrades", "Start Application", 0));
        actionBack_Up->setText(QApplication::translate("EasyTrades", "Back-Up", 0));
        actionExit->setText(QApplication::translate("EasyTrades", "Exit", 0));
        actionAbout->setText(QApplication::translate("EasyTrades", "About", 0));
        actionCheck_for_Updates->setText(QApplication::translate("EasyTrades", "Check for Updates", 0));
        pushButton->setText(QApplication::translate("EasyTrades", "Start EasyMed", 0));
        pushButton_2->setText(QApplication::translate("EasyTrades", "Software-Version", 0));
        pushButton_3->setText(QApplication::translate("EasyTrades", "Manage Database", 0));
        menuFile->setTitle(QApplication::translate("EasyTrades", "File", 0));
        menuLicense->setTitle(QApplication::translate("EasyTrades", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class EasyTrades: public Ui_EasyTrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYTRADES_H
