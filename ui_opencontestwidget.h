/********************************************************************************
** Form generated from reading UI file 'opencontestwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCONTESTWIDGET_H
#define UI_OPENCONTESTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenContestWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *recentContest;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *addButton;
    QToolButton *deleteButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OpenContestWidget)
    {
        if (OpenContestWidget->objectName().isEmpty())
            OpenContestWidget->setObjectName(QString::fromUtf8("OpenContestWidget"));
        OpenContestWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(OpenContestWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recentContest = new QTableWidget(OpenContestWidget);
        if (recentContest->columnCount() < 2)
            recentContest->setColumnCount(2);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        recentContest->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        recentContest->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        recentContest->setObjectName(QString::fromUtf8("recentContest"));
        recentContest->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        recentContest->setEditTriggers(QAbstractItemView::NoEditTriggers);
        recentContest->setSelectionMode(QAbstractItemView::SingleSelection);
        recentContest->setSelectionBehavior(QAbstractItemView::SelectRows);
        recentContest->horizontalHeader()->setMinimumSectionSize(80);
        recentContest->horizontalHeader()->setHighlightSections(false);
        recentContest->horizontalHeader()->setStretchLastSection(true);
        recentContest->verticalHeader()->setVisible(false);
        recentContest->verticalHeader()->setMinimumSectionSize(25);
        recentContest->verticalHeader()->setDefaultSectionSize(25);

        horizontalLayout->addWidget(recentContest);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        addButton = new QToolButton(OpenContestWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        verticalLayout->addWidget(addButton);

        deleteButton = new QToolButton(OpenContestWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);
        deleteButton->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/rod.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        verticalLayout->addWidget(deleteButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(OpenContestWidget);

        QMetaObject::connectSlotsByName(OpenContestWidget);
    } // setupUi

    void retranslateUi(QWidget *OpenContestWidget)
    {
        OpenContestWidget->setWindowTitle(QCoreApplication::translate("OpenContestWidget", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = recentContest->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OpenContestWidget", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = recentContest->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OpenContestWidget", "Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenContestWidget: public Ui_OpenContestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCONTESTWIDGET_H
