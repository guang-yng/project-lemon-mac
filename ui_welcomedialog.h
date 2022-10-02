/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "newcontestwidget.h"
#include "opencontestwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *openTab;
    QVBoxLayout *verticalLayout_2;
    OpenContestWidget *openContestWidget;
    QWidget *newTab;
    QVBoxLayout *verticalLayout_3;
    NewContestWidget *newContestWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName(QString::fromUtf8("WelcomeDialog"));
        WelcomeDialog->resize(470, 350);
        verticalLayout = new QVBoxLayout(WelcomeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(WelcomeDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        openTab = new QWidget();
        openTab->setObjectName(QString::fromUtf8("openTab"));
        verticalLayout_2 = new QVBoxLayout(openTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        openContestWidget = new OpenContestWidget(openTab);
        openContestWidget->setObjectName(QString::fromUtf8("openContestWidget"));

        verticalLayout_2->addWidget(openContestWidget);

        tabWidget->addTab(openTab, QString());
        newTab = new QWidget();
        newTab->setObjectName(QString::fromUtf8("newTab"));
        verticalLayout_3 = new QVBoxLayout(newTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        newContestWidget = new NewContestWidget(newTab);
        newContestWidget->setObjectName(QString::fromUtf8("newContestWidget"));

        verticalLayout_3->addWidget(newContestWidget);

        tabWidget->addTab(newTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(WelcomeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WelcomeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WelcomeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WelcomeDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QCoreApplication::translate("WelcomeDialog", "Welcome", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(openTab), QCoreApplication::translate("WelcomeDialog", "Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(newTab), QCoreApplication::translate("WelcomeDialog", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
