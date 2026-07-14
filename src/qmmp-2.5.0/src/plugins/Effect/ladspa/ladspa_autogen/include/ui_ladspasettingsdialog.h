/********************************************************************************
** Form generated from reading UI file 'ladspasettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LADSPASETTINGSDIALOG_H
#define UI_LADSPASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_LADSPASettingsDialog
{
public:
    QGridLayout *gridLayout;
    QTreeView *pluginsTreeView;
    QSpacerItem *verticalSpacer;
    QListWidget *runningListWidget;
    QToolButton *loadButton;
    QToolButton *unloadButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LADSPASettingsDialog)
    {
        if (LADSPASettingsDialog->objectName().isEmpty())
            LADSPASettingsDialog->setObjectName("LADSPASettingsDialog");
        LADSPASettingsDialog->resize(532, 423);
        gridLayout = new QGridLayout(LADSPASettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        pluginsTreeView = new QTreeView(LADSPASettingsDialog);
        pluginsTreeView->setObjectName("pluginsTreeView");
        pluginsTreeView->setRootIsDecorated(false);

        gridLayout->addWidget(pluginsTreeView, 0, 0, 4, 1);

        verticalSpacer = new QSpacerItem(20, 124, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        runningListWidget = new QListWidget(LADSPASettingsDialog);
        runningListWidget->setObjectName("runningListWidget");

        gridLayout->addWidget(runningListWidget, 0, 2, 4, 1);

        loadButton = new QToolButton(LADSPASettingsDialog);
        loadButton->setObjectName("loadButton");

        gridLayout->addWidget(loadButton, 1, 1, 1, 1);

        unloadButton = new QToolButton(LADSPASettingsDialog);
        unloadButton->setObjectName("unloadButton");

        gridLayout->addWidget(unloadButton, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 123, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(LADSPASettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);


        retranslateUi(LADSPASettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LADSPASettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LADSPASettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LADSPASettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *LADSPASettingsDialog)
    {
        LADSPASettingsDialog->setWindowTitle(QCoreApplication::translate("LADSPASettingsDialog", "LADSPA Plugin Catalog", nullptr));
        loadButton->setText(QCoreApplication::translate("LADSPASettingsDialog", ">", nullptr));
        unloadButton->setText(QCoreApplication::translate("LADSPASettingsDialog", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LADSPASettingsDialog: public Ui_LADSPASettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LADSPASETTINGSDIALOG_H
