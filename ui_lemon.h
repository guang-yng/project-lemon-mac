/********************************************************************************
** Form generated from reading UI file 'lemon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEMON_H
#define UI_LEMON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resultviewer.h"
#include "summarytree.h"
#include "taskeditwidget.h"
#include "testcaseeditwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Lemon
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *exitAction;
    QAction *optionsAction;
    QAction *aboutAction;
    QAction *judgeAction;
    QAction *judgeAllAction;
    QAction *closeAction;
    QAction *setEnglishAction;
    QAction *addTasksAction;
    QAction *makeSelfTestAction;
    QAction *exportAction;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tasksTab;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *taskBox;
    QVBoxLayout *verticalLayout_2;
    SummaryTree *summary;
    QGroupBox *editBox;
    QVBoxLayout *verticalLayout_8;
    QStackedWidget *editWidget;
    QWidget *nullPage;
    TaskEditWidget *taskEdit;
    TestCaseEditWidget *testCaseEdit;
    QWidget *contestantsTab;
    QVBoxLayout *verticalLayout;
    ResultViewer *resultViewer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QPushButton *judgeButton;
    QPushButton *judgeAllButton;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *controlMenu;
    QMenu *toolsMenu;
    QMenu *languageMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *Lemon)
    {
        if (Lemon->objectName().isEmpty())
            Lemon->setObjectName(QString::fromUtf8("Lemon"));
        Lemon->resize(725, 510);
        Lemon->setMinimumSize(QSize(725, 510));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lemon->setWindowIcon(icon);
        newAction = new QAction(Lemon);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        openAction = new QAction(Lemon);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        exitAction = new QAction(Lemon);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        optionsAction = new QAction(Lemon);
        optionsAction->setObjectName(QString::fromUtf8("optionsAction"));
        aboutAction = new QAction(Lemon);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        judgeAction = new QAction(Lemon);
        judgeAction->setObjectName(QString::fromUtf8("judgeAction"));
        judgeAction->setEnabled(false);
        judgeAllAction = new QAction(Lemon);
        judgeAllAction->setObjectName(QString::fromUtf8("judgeAllAction"));
        judgeAllAction->setEnabled(false);
        closeAction = new QAction(Lemon);
        closeAction->setObjectName(QString::fromUtf8("closeAction"));
        setEnglishAction = new QAction(Lemon);
        setEnglishAction->setObjectName(QString::fromUtf8("setEnglishAction"));
        setEnglishAction->setText(QString::fromUtf8("English"));
        addTasksAction = new QAction(Lemon);
        addTasksAction->setObjectName(QString::fromUtf8("addTasksAction"));
        addTasksAction->setEnabled(false);
        makeSelfTestAction = new QAction(Lemon);
        makeSelfTestAction->setObjectName(QString::fromUtf8("makeSelfTestAction"));
        makeSelfTestAction->setEnabled(false);
        exportAction = new QAction(Lemon);
        exportAction->setObjectName(QString::fromUtf8("exportAction"));
        exportAction->setEnabled(false);
        centralWidget = new QWidget(Lemon);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        tasksTab = new QWidget();
        tasksTab->setObjectName(QString::fromUtf8("tasksTab"));
        horizontalLayout_2 = new QHBoxLayout(tasksTab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        taskBox = new QGroupBox(tasksTab);
        taskBox->setObjectName(QString::fromUtf8("taskBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskBox->sizePolicy().hasHeightForWidth());
        taskBox->setSizePolicy(sizePolicy);
        taskBox->setMinimumSize(QSize(176, 387));
        taskBox->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        verticalLayout_2 = new QVBoxLayout(taskBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        summary = new SummaryTree(taskBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        summary->setHeaderItem(__qtreewidgetitem);
        summary->setObjectName(QString::fromUtf8("summary"));
        summary->setContextMenuPolicy(Qt::DefaultContextMenu);
        summary->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        summary->header()->setVisible(false);

        verticalLayout_2->addWidget(summary);


        horizontalLayout_2->addWidget(taskBox);

        editBox = new QGroupBox(tasksTab);
        editBox->setObjectName(QString::fromUtf8("editBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editBox->sizePolicy().hasHeightForWidth());
        editBox->setSizePolicy(sizePolicy1);
        editBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        verticalLayout_8 = new QVBoxLayout(editBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        editWidget = new QStackedWidget(editBox);
        editWidget->setObjectName(QString::fromUtf8("editWidget"));
        editWidget->setContextMenuPolicy(Qt::NoContextMenu);
        nullPage = new QWidget();
        nullPage->setObjectName(QString::fromUtf8("nullPage"));
        editWidget->addWidget(nullPage);
        taskEdit = new TaskEditWidget();
        taskEdit->setObjectName(QString::fromUtf8("taskEdit"));
        editWidget->addWidget(taskEdit);
        testCaseEdit = new TestCaseEditWidget();
        testCaseEdit->setObjectName(QString::fromUtf8("testCaseEdit"));
        editWidget->addWidget(testCaseEdit);

        verticalLayout_8->addWidget(editWidget);


        horizontalLayout_2->addWidget(editBox);

        tabWidget->addTab(tasksTab, QString());
        contestantsTab = new QWidget();
        contestantsTab->setObjectName(QString::fromUtf8("contestantsTab"));
        verticalLayout = new QVBoxLayout(contestantsTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        resultViewer = new ResultViewer(contestantsTab);
        resultViewer->setObjectName(QString::fromUtf8("resultViewer"));
        resultViewer->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        resultViewer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resultViewer->setTabKeyNavigation(false);
        resultViewer->setSelectionMode(QAbstractItemView::ExtendedSelection);
        resultViewer->setSelectionBehavior(QAbstractItemView::SelectRows);
        resultViewer->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        resultViewer->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        resultViewer->setShowGrid(false);
        resultViewer->setSortingEnabled(true);
        resultViewer->setCornerButtonEnabled(false);
        resultViewer->horizontalHeader()->setHighlightSections(false);
        resultViewer->verticalHeader()->setVisible(false);
        resultViewer->verticalHeader()->setMinimumSectionSize(25);
        resultViewer->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout->addWidget(resultViewer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        refreshButton = new QPushButton(contestantsTab);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        horizontalLayout_4->addWidget(refreshButton);

        judgeButton = new QPushButton(contestantsTab);
        judgeButton->setObjectName(QString::fromUtf8("judgeButton"));
        judgeButton->setEnabled(false);

        horizontalLayout_4->addWidget(judgeButton);

        judgeAllButton = new QPushButton(contestantsTab);
        judgeAllButton->setObjectName(QString::fromUtf8("judgeAllButton"));
        judgeAllButton->setEnabled(false);

        horizontalLayout_4->addWidget(judgeAllButton);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(contestantsTab, QString());

        horizontalLayout->addWidget(tabWidget);

        Lemon->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lemon);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 25));
        menuBar->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        controlMenu = new QMenu(menuBar);
        controlMenu->setObjectName(QString::fromUtf8("controlMenu"));
        toolsMenu = new QMenu(menuBar);
        toolsMenu->setObjectName(QString::fromUtf8("toolsMenu"));
        languageMenu = new QMenu(toolsMenu);
        languageMenu->setObjectName(QString::fromUtf8("languageMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        Lemon->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidget, summary);
        QWidget::setTabOrder(summary, refreshButton);
        QWidget::setTabOrder(refreshButton, judgeButton);
        QWidget::setTabOrder(judgeButton, judgeAllButton);
        QWidget::setTabOrder(judgeAllButton, resultViewer);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(controlMenu->menuAction());
        menuBar->addAction(toolsMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(newAction);
        fileMenu->addAction(openAction);
        fileMenu->addAction(closeAction);
        fileMenu->addSeparator();
        fileMenu->addAction(exitAction);
        controlMenu->addAction(judgeAction);
        controlMenu->addAction(judgeAllAction);
        controlMenu->addSeparator();
        controlMenu->addAction(addTasksAction);
        controlMenu->addAction(makeSelfTestAction);
        controlMenu->addAction(exportAction);
        toolsMenu->addAction(optionsAction);
        toolsMenu->addAction(languageMenu->menuAction());
        languageMenu->addAction(setEnglishAction);
        helpMenu->addAction(aboutAction);

        retranslateUi(Lemon);

        tabWidget->setCurrentIndex(0);
        editWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Lemon);
    } // setupUi

    void retranslateUi(QMainWindow *Lemon)
    {
        Lemon->setWindowTitle(QCoreApplication::translate("Lemon", "Lemon", nullptr));
        newAction->setText(QCoreApplication::translate("Lemon", "&New Contest", nullptr));
        openAction->setText(QCoreApplication::translate("Lemon", "&Open Existing Contest", nullptr));
        exitAction->setText(QCoreApplication::translate("Lemon", "E&xit", nullptr));
        optionsAction->setText(QCoreApplication::translate("Lemon", "&Options", nullptr));
        aboutAction->setText(QCoreApplication::translate("Lemon", "&About", nullptr));
        judgeAction->setText(QCoreApplication::translate("Lemon", "&Judge Selected", nullptr));
        judgeAllAction->setText(QCoreApplication::translate("Lemon", "Judge &All", nullptr));
        closeAction->setText(QCoreApplication::translate("Lemon", "&Close Current Contest", nullptr));
        addTasksAction->setText(QCoreApplication::translate("Lemon", "Add &Tasks Automatically", nullptr));
        makeSelfTestAction->setText(QCoreApplication::translate("Lemon", "&Make Self-testing Folder", nullptr));
        exportAction->setText(QCoreApplication::translate("Lemon", "&Export Result", nullptr));
        taskBox->setTitle(QCoreApplication::translate("Lemon", "Summary", nullptr));
        editBox->setTitle(QCoreApplication::translate("Lemon", "Detail", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tasksTab), QCoreApplication::translate("Lemon", "Tasks", nullptr));
        refreshButton->setText(QCoreApplication::translate("Lemon", "&Refresh", nullptr));
        judgeButton->setText(QCoreApplication::translate("Lemon", "&Judge", nullptr));
        judgeAllButton->setText(QCoreApplication::translate("Lemon", "Judge &All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(contestantsTab), QCoreApplication::translate("Lemon", "Contestants", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("Lemon", "&File", nullptr));
        controlMenu->setTitle(QCoreApplication::translate("Lemon", "&Control", nullptr));
        toolsMenu->setTitle(QCoreApplication::translate("Lemon", "&Tools", nullptr));
        languageMenu->setTitle(QCoreApplication::translate("Lemon", "UI Language", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("Lemon", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lemon: public Ui_Lemon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEMON_H
