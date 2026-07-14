/********************************************************************************
** Form generated from reading UI file 'converterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERDIALOG_H
#define UI_CONVERTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConverterDialog
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *outDirEdit;
    QToolButton *dirButton;
    QLabel *label_3;
    QLineEdit *outFileEdit;
    QToolButton *fileNameButton;
    QLabel *label_4;
    QComboBox *presetComboBox;
    QToolButton *presetButton;
    QCheckBox *overwriteCheckBox;
    QPushButton *convertButton;
    QPushButton *stopButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConverterDialog)
    {
        if (ConverterDialog->objectName().isEmpty())
            ConverterDialog->setObjectName("ConverterDialog");
        ConverterDialog->resize(598, 430);
        gridLayout_2 = new QGridLayout(ConverterDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, -1, 6, 6);
        tableWidget = new QTableWidget(ConverterDialog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setRowCount(0);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 3);

        widget = new QWidget(ConverterDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        outDirEdit = new QLineEdit(widget);
        outDirEdit->setObjectName("outDirEdit");

        gridLayout->addWidget(outDirEdit, 0, 1, 1, 1);

        dirButton = new QToolButton(widget);
        dirButton->setObjectName("dirButton");
        dirButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(dirButton, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        outFileEdit = new QLineEdit(widget);
        outFileEdit->setObjectName("outFileEdit");

        gridLayout->addWidget(outFileEdit, 1, 1, 1, 1);

        fileNameButton = new QToolButton(widget);
        fileNameButton->setObjectName("fileNameButton");
        fileNameButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(fileNameButton, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        presetComboBox = new QComboBox(widget);
        presetComboBox->setObjectName("presetComboBox");

        gridLayout->addWidget(presetComboBox, 2, 1, 1, 1);

        presetButton = new QToolButton(widget);
        presetButton->setObjectName("presetButton");
        presetButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(presetButton, 2, 2, 1, 1);

        overwriteCheckBox = new QCheckBox(widget);
        overwriteCheckBox->setObjectName("overwriteCheckBox");

        gridLayout->addWidget(overwriteCheckBox, 3, 0, 1, 3);


        gridLayout_2->addWidget(widget, 1, 0, 1, 3);

        convertButton = new QPushButton(ConverterDialog);
        convertButton->setObjectName("convertButton");

        gridLayout_2->addWidget(convertButton, 2, 0, 1, 1);

        stopButton = new QPushButton(ConverterDialog);
        stopButton->setObjectName("stopButton");

        gridLayout_2->addWidget(stopButton, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ConverterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_2->addWidget(buttonBox, 2, 2, 1, 1);


        retranslateUi(ConverterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConverterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConverterDialog);
    } // setupUi

    void retranslateUi(QDialog *ConverterDialog)
    {
        ConverterDialog->setWindowTitle(QCoreApplication::translate("ConverterDialog", "Audio Converter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ConverterDialog", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ConverterDialog", "Progress", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ConverterDialog", "State", nullptr));
        label_2->setText(QCoreApplication::translate("ConverterDialog", "Output directory:", nullptr));
        label_3->setText(QCoreApplication::translate("ConverterDialog", "Output file name:", nullptr));
        label_4->setText(QCoreApplication::translate("ConverterDialog", "Preset:", nullptr));
        overwriteCheckBox->setText(QCoreApplication::translate("ConverterDialog", "Overwrite existing files", nullptr));
        convertButton->setText(QCoreApplication::translate("ConverterDialog", "Convert", nullptr));
        stopButton->setText(QCoreApplication::translate("ConverterDialog", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConverterDialog: public Ui_ConverterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERDIALOG_H
