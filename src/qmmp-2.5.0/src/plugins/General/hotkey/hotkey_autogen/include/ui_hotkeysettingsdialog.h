/********************************************************************************
** Form generated from reading UI file 'hotkeysettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYSETTINGSDIALOG_H
#define UI_HOTKEYSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HotkeySettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HotkeySettingsDialog)
    {
        if (HotkeySettingsDialog->objectName().isEmpty())
            HotkeySettingsDialog->setObjectName("HotkeySettingsDialog");
        HotkeySettingsDialog->resize(421, 350);
        verticalLayout = new QVBoxLayout(HotkeySettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        tableWidget = new QTableWidget(HotkeySettingsDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setShowGrid(true);
        tableWidget->setWordWrap(true);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(2);

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(HotkeySettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HotkeySettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HotkeySettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HotkeySettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HotkeySettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *HotkeySettingsDialog)
    {
        HotkeySettingsDialog->setWindowTitle(QCoreApplication::translate("HotkeySettingsDialog", "Global Hotkey Plugin Settings", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HotkeySettingsDialog", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HotkeySettingsDialog", "Shortcut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotkeySettingsDialog: public Ui_HotkeySettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYSETTINGSDIALOG_H
