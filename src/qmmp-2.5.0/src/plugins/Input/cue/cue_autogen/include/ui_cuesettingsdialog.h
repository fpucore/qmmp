/********************************************************************************
** Form generated from reading UI file 'cuesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUESETTINGSDIALOG_H
#define UI_CUESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CueSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *dirtyCueCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *autoCharsetCheckBox;
    QLabel *label;
    QComboBox *encaAnalyserComboBox;
    QLabel *label_17_2_2;
    QComboBox *cueEncComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CueSettingsDialog)
    {
        if (CueSettingsDialog->objectName().isEmpty())
            CueSettingsDialog->setObjectName("CueSettingsDialog");
        CueSettingsDialog->resize(329, 253);
        verticalLayout_2 = new QVBoxLayout(CueSettingsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(6, -1, 6, 6);
        groupBox_2 = new QGroupBox(CueSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        dirtyCueCheckBox = new QCheckBox(groupBox_2);
        dirtyCueCheckBox->setObjectName("dirtyCueCheckBox");

        verticalLayout->addWidget(dirtyCueCheckBox);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(CueSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        autoCharsetCheckBox = new QCheckBox(groupBox);
        autoCharsetCheckBox->setObjectName("autoCharsetCheckBox");

        gridLayout->addWidget(autoCharsetCheckBox, 0, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setEnabled(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        encaAnalyserComboBox = new QComboBox(groupBox);
        encaAnalyserComboBox->setObjectName("encaAnalyserComboBox");
        encaAnalyserComboBox->setEnabled(false);

        gridLayout->addWidget(encaAnalyserComboBox, 1, 1, 1, 2);

        label_17_2_2 = new QLabel(groupBox);
        label_17_2_2->setObjectName("label_17_2_2");
        label_17_2_2->setFocusPolicy(Qt::TabFocus);
        label_17_2_2->setLayoutDirection(Qt::LeftToRight);
        label_17_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_17_2_2, 2, 0, 1, 1);

        cueEncComboBox = new QComboBox(groupBox);
        cueEncComboBox->setObjectName("cueEncComboBox");

        gridLayout->addWidget(cueEncComboBox, 2, 1, 1, 2);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(CueSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CueSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CueSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CueSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(autoCharsetCheckBox, &QCheckBox::toggled, encaAnalyserComboBox, &QComboBox::setEnabled);

        QMetaObject::connectSlotsByName(CueSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CueSettingsDialog)
    {
        CueSettingsDialog->setWindowTitle(QCoreApplication::translate("CueSettingsDialog", "CUE Plugin Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CueSettingsDialog", "Common settings", nullptr));
        dirtyCueCheckBox->setText(QCoreApplication::translate("CueSettingsDialog", "Load incorrect cue sheets if possible", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CueSettingsDialog", "CUE encoding", nullptr));
        autoCharsetCheckBox->setText(QCoreApplication::translate("CueSettingsDialog", "Automatic charset detection", nullptr));
        label->setText(QCoreApplication::translate("CueSettingsDialog", "Language:", nullptr));
        label_17_2_2->setText(QCoreApplication::translate("CueSettingsDialog", "Default encoding:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CueSettingsDialog: public Ui_CueSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUESETTINGSDIALOG_H
