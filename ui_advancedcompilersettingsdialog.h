/********************************************************************************
** Form generated from reading UI file 'advancedcompilersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDCOMPILERSETTINGSDIALOG_H
#define UI_ADVANCEDCOMPILERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdvancedCompilerSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *typeSelect;
    QSpacerItem *horizontalSpacer;
    QGroupBox *locationGroup;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *compilerLabel;
    QLineEdit *compilerLocation;
    QToolButton *compilerSelectButton;
    QLabel *interpreterLabel;
    QLineEdit *interpreterLocation;
    QToolButton *interpreterSelectButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bytecodeExtensionLabel;
    QLineEdit *bytecodeExtension;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *limitGroup;
    QGridLayout *gridLayout_2;
    QLabel *timeLimitRationLabel;
    QDoubleSpinBox *timeLimitRatio;
    QSpacerItem *horizontalSpacer_2;
    QLabel *memoryLimitRatioLabel;
    QDoubleSpinBox *memoryLimitRatio;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *disableMemoryLimit;
    QGroupBox *argumentsGroup;
    QGridLayout *gridLayout_3;
    QLabel *configurationLabel;
    QComboBox *configurationSelect;
    QToolButton *deleteConfigurationButton;
    QLabel *compilerArgumentsLabel;
    QLineEdit *compilerArguments;
    QLabel *interpreterArgumentsLabel;
    QLineEdit *interpreterArguments;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *environmentVariablesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdvancedCompilerSettingsDialog)
    {
        if (AdvancedCompilerSettingsDialog->objectName().isEmpty())
            AdvancedCompilerSettingsDialog->setObjectName(QString::fromUtf8("AdvancedCompilerSettingsDialog"));
        AdvancedCompilerSettingsDialog->resize(358, 522);
        AdvancedCompilerSettingsDialog->setMinimumSize(QSize(358, 522));
        verticalLayout = new QVBoxLayout(AdvancedCompilerSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        typeSelect = new QComboBox(AdvancedCompilerSettingsDialog);
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->setObjectName(QString::fromUtf8("typeSelect"));
        typeSelect->setMinimumSize(QSize(211, 0));
        typeSelect->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout->addWidget(typeSelect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        locationGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        locationGroup->setObjectName(QString::fromUtf8("locationGroup"));
        locationGroup->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        verticalLayout_2 = new QVBoxLayout(locationGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        compilerLabel = new QLabel(locationGroup);
        compilerLabel->setObjectName(QString::fromUtf8("compilerLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compilerLabel->sizePolicy().hasHeightForWidth());
        compilerLabel->setSizePolicy(sizePolicy);
        compilerLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(compilerLabel, 0, 0, 1, 1);

        compilerLocation = new QLineEdit(locationGroup);
        compilerLocation->setObjectName(QString::fromUtf8("compilerLocation"));

        gridLayout->addWidget(compilerLocation, 0, 1, 1, 1);

        compilerSelectButton = new QToolButton(locationGroup);
        compilerSelectButton->setObjectName(QString::fromUtf8("compilerSelectButton"));
        compilerSelectButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(compilerSelectButton, 0, 2, 1, 1);

        interpreterLabel = new QLabel(locationGroup);
        interpreterLabel->setObjectName(QString::fromUtf8("interpreterLabel"));
        sizePolicy.setHeightForWidth(interpreterLabel->sizePolicy().hasHeightForWidth());
        interpreterLabel->setSizePolicy(sizePolicy);
        interpreterLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(interpreterLabel, 1, 0, 1, 1);

        interpreterLocation = new QLineEdit(locationGroup);
        interpreterLocation->setObjectName(QString::fromUtf8("interpreterLocation"));

        gridLayout->addWidget(interpreterLocation, 1, 1, 1, 1);

        interpreterSelectButton = new QToolButton(locationGroup);
        interpreterSelectButton->setObjectName(QString::fromUtf8("interpreterSelectButton"));
        interpreterSelectButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(interpreterSelectButton, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bytecodeExtensionLabel = new QLabel(locationGroup);
        bytecodeExtensionLabel->setObjectName(QString::fromUtf8("bytecodeExtensionLabel"));
        sizePolicy.setHeightForWidth(bytecodeExtensionLabel->sizePolicy().hasHeightForWidth());
        bytecodeExtensionLabel->setSizePolicy(sizePolicy);
        bytecodeExtensionLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        horizontalLayout_3->addWidget(bytecodeExtensionLabel);

        bytecodeExtension = new QLineEdit(locationGroup);
        bytecodeExtension->setObjectName(QString::fromUtf8("bytecodeExtension"));
        bytecodeExtension->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(bytecodeExtension);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(locationGroup);

        limitGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        limitGroup->setObjectName(QString::fromUtf8("limitGroup"));
        limitGroup->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        gridLayout_2 = new QGridLayout(limitGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        gridLayout_2->setVerticalSpacing(6);
        timeLimitRationLabel = new QLabel(limitGroup);
        timeLimitRationLabel->setObjectName(QString::fromUtf8("timeLimitRationLabel"));
        timeLimitRationLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(timeLimitRationLabel, 0, 0, 1, 1);

        timeLimitRatio = new QDoubleSpinBox(limitGroup);
        timeLimitRatio->setObjectName(QString::fromUtf8("timeLimitRatio"));
        timeLimitRatio->setDecimals(1);
        timeLimitRatio->setMinimum(1.000000000000000);
        timeLimitRatio->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(timeLimitRatio, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        memoryLimitRatioLabel = new QLabel(limitGroup);
        memoryLimitRatioLabel->setObjectName(QString::fromUtf8("memoryLimitRatioLabel"));
        memoryLimitRatioLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout_2->addWidget(memoryLimitRatioLabel, 1, 0, 1, 1);

        memoryLimitRatio = new QDoubleSpinBox(limitGroup);
        memoryLimitRatio->setObjectName(QString::fromUtf8("memoryLimitRatio"));
        memoryLimitRatio->setDecimals(1);
        memoryLimitRatio->setMinimum(1.000000000000000);
        memoryLimitRatio->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(memoryLimitRatio, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        disableMemoryLimit = new QCheckBox(limitGroup);
        disableMemoryLimit->setObjectName(QString::fromUtf8("disableMemoryLimit"));
        disableMemoryLimit->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        gridLayout_2->addWidget(disableMemoryLimit, 2, 0, 1, 1);


        verticalLayout->addWidget(limitGroup);

        argumentsGroup = new QGroupBox(AdvancedCompilerSettingsDialog);
        argumentsGroup->setObjectName(QString::fromUtf8("argumentsGroup"));
        argumentsGroup->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        gridLayout_3 = new QGridLayout(argumentsGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(8);
        gridLayout_3->setVerticalSpacing(6);
        configurationLabel = new QLabel(argumentsGroup);
        configurationLabel->setObjectName(QString::fromUtf8("configurationLabel"));
        sizePolicy.setHeightForWidth(configurationLabel->sizePolicy().hasHeightForWidth());
        configurationLabel->setSizePolicy(sizePolicy);
        configurationLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(configurationLabel, 0, 0, 1, 1);

        configurationSelect = new QComboBox(argumentsGroup);
        configurationSelect->setObjectName(QString::fromUtf8("configurationSelect"));

        gridLayout_3->addWidget(configurationSelect, 0, 1, 1, 1);

        deleteConfigurationButton = new QToolButton(argumentsGroup);
        deleteConfigurationButton->setObjectName(QString::fromUtf8("deleteConfigurationButton"));
        deleteConfigurationButton->setMinimumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteConfigurationButton->setIcon(icon);

        gridLayout_3->addWidget(deleteConfigurationButton, 0, 2, 1, 1);

        compilerArgumentsLabel = new QLabel(argumentsGroup);
        compilerArgumentsLabel->setObjectName(QString::fromUtf8("compilerArgumentsLabel"));
        sizePolicy.setHeightForWidth(compilerArgumentsLabel->sizePolicy().hasHeightForWidth());
        compilerArgumentsLabel->setSizePolicy(sizePolicy);
        compilerArgumentsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(compilerArgumentsLabel, 1, 0, 1, 1);

        compilerArguments = new QLineEdit(argumentsGroup);
        compilerArguments->setObjectName(QString::fromUtf8("compilerArguments"));

        gridLayout_3->addWidget(compilerArguments, 1, 1, 1, 2);

        interpreterArgumentsLabel = new QLabel(argumentsGroup);
        interpreterArgumentsLabel->setObjectName(QString::fromUtf8("interpreterArgumentsLabel"));
        sizePolicy.setHeightForWidth(interpreterArgumentsLabel->sizePolicy().hasHeightForWidth());
        interpreterArgumentsLabel->setSizePolicy(sizePolicy);
        interpreterArgumentsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout_3->addWidget(interpreterArgumentsLabel, 2, 0, 1, 1);

        interpreterArguments = new QLineEdit(argumentsGroup);
        interpreterArguments->setObjectName(QString::fromUtf8("interpreterArguments"));

        gridLayout_3->addWidget(interpreterArguments, 2, 1, 1, 2);


        verticalLayout->addWidget(argumentsGroup);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        environmentVariablesButton = new QPushButton(AdvancedCompilerSettingsDialog);
        environmentVariablesButton->setObjectName(QString::fromUtf8("environmentVariablesButton"));

        horizontalLayout_2->addWidget(environmentVariablesButton);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(AdvancedCompilerSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AdvancedCompilerSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), AdvancedCompilerSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdvancedCompilerSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancedCompilerSettingsDialog)
    {
        AdvancedCompilerSettingsDialog->setWindowTitle(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Compiler Settings", nullptr));
        typeSelect->setItemText(0, QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Typical (Generate executable file)", nullptr));
        typeSelect->setItemText(1, QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Interpretive (Generate byte-code file)", nullptr));
        typeSelect->setItemText(2, QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Interpretive (Run source code directly)", nullptr));

        locationGroup->setTitle(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Location", nullptr));
        compilerLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Compiler", nullptr));
        interpreterLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Interpreter", nullptr));
        bytecodeExtensionLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Byte-code File Extensions", nullptr));
        limitGroup->setTitle(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Time and Memory Limit", nullptr));
        timeLimitRationLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Time Limit Ration", nullptr));
        memoryLimitRatioLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Memory Limit Ration", nullptr));
        disableMemoryLimit->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Disable Memory Limit", nullptr));
        argumentsGroup->setTitle(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Arguments", nullptr));
        configurationLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Configuration", nullptr));
        deleteConfigurationButton->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "...", nullptr));
        compilerArgumentsLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Compiler's Arguments", nullptr));
        interpreterArgumentsLabel->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Interpreter's Arguments", nullptr));
        environmentVariablesButton->setText(QCoreApplication::translate("AdvancedCompilerSettingsDialog", "Environment Variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdvancedCompilerSettingsDialog: public Ui_AdvancedCompilerSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDCOMPILERSETTINGSDIALOG_H
