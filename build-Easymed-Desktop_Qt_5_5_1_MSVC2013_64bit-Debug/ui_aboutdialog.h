/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *aboutdialog)
    {
        if (aboutdialog->objectName().isEmpty())
            aboutdialog->setObjectName(QStringLiteral("aboutdialog"));
        aboutdialog->resize(397, 292);
        buttonBox = new QDialogButtonBox(aboutdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(aboutdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 231, 181));

        retranslateUi(aboutdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), aboutdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), aboutdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(aboutdialog);
    } // setupUi

    void retranslateUi(QDialog *aboutdialog)
    {
        aboutdialog->setWindowTitle(QApplication::translate("aboutdialog", "EasyTrades Version Information", 0));
        label->setText(QApplication::translate("aboutdialog", "<html><head/><body><p><span style=\" font-size:14pt;\">You are currently using </span></p><p><span style=\" font-size:14pt;\">EasyTrades Version 3.0!</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutdialog: public Ui_aboutdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
