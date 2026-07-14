/********************************************************************************
** Form generated from reading UI file 'rgscandialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGSCANDIALOG_H
#define UI_RGSCANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RGScanDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *skipScannedCheckBox;
    QCheckBox *trackCheckBox;
    QCheckBox *albumCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *calculateButton;
    QPushButton *writeButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RGScanDialog)
    {
        if (RGScanDialog->objectName().isEmpty())
            RGScanDialog->setObjectName("RGScanDialog");
        RGScanDialog->resize(756, 429);
        gridLayout = new QGridLayout(RGScanDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        tableWidget = new QTableWidget(RGScanDialog);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        skipScannedCheckBox = new QCheckBox(RGScanDialog);
        skipScannedCheckBox->setObjectName("skipScannedCheckBox");

        horizontalLayout->addWidget(skipScannedCheckBox);

        trackCheckBox = new QCheckBox(RGScanDialog);
        trackCheckBox->setObjectName("trackCheckBox");

        horizontalLayout->addWidget(trackCheckBox);

        albumCheckBox = new QCheckBox(RGScanDialog);
        albumCheckBox->setObjectName("albumCheckBox");

        horizontalLayout->addWidget(albumCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        calculateButton = new QPushButton(RGScanDialog);
        calculateButton->setObjectName("calculateButton");

        gridLayout->addWidget(calculateButton, 2, 0, 1, 1);

        writeButton = new QPushButton(RGScanDialog);
        writeButton->setObjectName("writeButton");

        gridLayout->addWidget(writeButton, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(RGScanDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);


        retranslateUi(RGScanDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RGScanDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RGScanDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RGScanDialog);
    } // setupUi

    void retranslateUi(QDialog *RGScanDialog)
    {
        RGScanDialog->setWindowTitle(QCoreApplication::translate("RGScanDialog", "ReplayGain Scanner", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RGScanDialog", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RGScanDialog", "Progress", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RGScanDialog", "Track Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RGScanDialog", "Album Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RGScanDialog", "Track Peak", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("RGScanDialog", "Album Peak", nullptr));
        skipScannedCheckBox->setText(QCoreApplication::translate("RGScanDialog", "Skip already scanned files", nullptr));
        trackCheckBox->setText(QCoreApplication::translate("RGScanDialog", "Write track gain/peak", nullptr));
        albumCheckBox->setText(QCoreApplication::translate("RGScanDialog", "Write album gain/peak", nullptr));
        calculateButton->setText(QCoreApplication::translate("RGScanDialog", "Calculate", nullptr));
        writeButton->setText(QCoreApplication::translate("RGScanDialog", "Write Tags", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RGScanDialog: public Ui_RGScanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGSCANDIALOG_H
