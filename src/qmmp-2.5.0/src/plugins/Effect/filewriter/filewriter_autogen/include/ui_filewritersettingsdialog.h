/********************************************************************************
** Form generated from reading UI file 'filewritersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEWRITERSETTINGSDIALOG_H
#define UI_FILEWRITERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FileWriterSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *outDirEdit;
    QSpacerItem *verticalSpacer;
    QToolButton *dirButton;
    QLineEdit *outFileEdit;
    QDoubleSpinBox *qualitySpinBox;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QToolButton *fileNameButton;
    QCheckBox *singleFileCheckBox;

    void setupUi(QDialog *FileWriterSettingsDialog)
    {
        if (FileWriterSettingsDialog->objectName().isEmpty())
            FileWriterSettingsDialog->setObjectName("FileWriterSettingsDialog");
        FileWriterSettingsDialog->resize(405, 184);
        gridLayout = new QGridLayout(FileWriterSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        label_2 = new QLabel(FileWriterSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_6 = new QLabel(FileWriterSettingsDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        outDirEdit = new QLineEdit(FileWriterSettingsDialog);
        outDirEdit->setObjectName("outDirEdit");

        gridLayout->addWidget(outDirEdit, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        dirButton = new QToolButton(FileWriterSettingsDialog);
        dirButton->setObjectName("dirButton");
        dirButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(dirButton, 0, 2, 1, 1);

        outFileEdit = new QLineEdit(FileWriterSettingsDialog);
        outFileEdit->setObjectName("outFileEdit");

        gridLayout->addWidget(outFileEdit, 1, 1, 1, 1);

        qualitySpinBox = new QDoubleSpinBox(FileWriterSettingsDialog);
        qualitySpinBox->setObjectName("qualitySpinBox");
        qualitySpinBox->setMinimum(0.200000000000000);
        qualitySpinBox->setMaximum(1.000000000000000);
        qualitySpinBox->setSingleStep(0.010000000000000);

        gridLayout->addWidget(qualitySpinBox, 2, 1, 1, 2);

        buttonBox = new QDialogButtonBox(FileWriterSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);

        label_3 = new QLabel(FileWriterSettingsDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        fileNameButton = new QToolButton(FileWriterSettingsDialog);
        fileNameButton->setObjectName("fileNameButton");
        fileNameButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(fileNameButton, 1, 2, 1, 1);

        singleFileCheckBox = new QCheckBox(FileWriterSettingsDialog);
        singleFileCheckBox->setObjectName("singleFileCheckBox");

        gridLayout->addWidget(singleFileCheckBox, 3, 0, 1, 2);


        retranslateUi(FileWriterSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FileWriterSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FileWriterSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FileWriterSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *FileWriterSettingsDialog)
    {
        FileWriterSettingsDialog->setWindowTitle(QCoreApplication::translate("FileWriterSettingsDialog", "File Writer Plugin Settings", nullptr));
        label_2->setText(QCoreApplication::translate("FileWriterSettingsDialog", "Output directory:", nullptr));
        label_6->setText(QCoreApplication::translate("FileWriterSettingsDialog", "Quality:", nullptr));
        label_3->setText(QCoreApplication::translate("FileWriterSettingsDialog", "Output file name:", nullptr));
        singleFileCheckBox->setText(QCoreApplication::translate("FileWriterSettingsDialog", "Write to single file if possible.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileWriterSettingsDialog: public Ui_FileWriterSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEWRITERSETTINGSDIALOG_H
