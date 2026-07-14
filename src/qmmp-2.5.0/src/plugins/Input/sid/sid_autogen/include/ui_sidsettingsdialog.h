/********************************************************************************
** Form generated from reading UI file 'sidsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDSETTINGSDIALOG_H
#define UI_SIDSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SidSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *hvscPathLineEdit;
    QLabel *label;
    QSpinBox *defaultLengthSpinBox;
    QLabel *label_2;
    QComboBox *sampleRateComboBox;
    QLabel *emulationLabel;
    QComboBox *emuComboBox;
    QLabel *label_4;
    QComboBox *resamplingComboBox;
    QCheckBox *fastResampligCheckBox;
    QCheckBox *useHVSCCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SidSettingsDialog)
    {
        if (SidSettingsDialog->objectName().isEmpty())
            SidSettingsDialog->setObjectName("SidSettingsDialog");
        SidSettingsDialog->resize(475, 287);
        verticalLayout = new QVBoxLayout(SidSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(SidSettingsDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_5);

        hvscPathLineEdit = new QLineEdit(SidSettingsDialog);
        hvscPathLineEdit->setObjectName("hvscPathLineEdit");
        hvscPathLineEdit->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, hvscPathLineEdit);

        label = new QLabel(SidSettingsDialog);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        defaultLengthSpinBox = new QSpinBox(SidSettingsDialog);
        defaultLengthSpinBox->setObjectName("defaultLengthSpinBox");
        defaultLengthSpinBox->setMinimum(5);
        defaultLengthSpinBox->setMaximum(1000);
        defaultLengthSpinBox->setValue(180);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, defaultLengthSpinBox);

        label_2 = new QLabel(SidSettingsDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_2);

        sampleRateComboBox = new QComboBox(SidSettingsDialog);
        sampleRateComboBox->setObjectName("sampleRateComboBox");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, sampleRateComboBox);

        emulationLabel = new QLabel(SidSettingsDialog);
        emulationLabel->setObjectName("emulationLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, emulationLabel);

        emuComboBox = new QComboBox(SidSettingsDialog);
        emuComboBox->setObjectName("emuComboBox");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, emuComboBox);

        label_4 = new QLabel(SidSettingsDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_4);

        resamplingComboBox = new QComboBox(SidSettingsDialog);
        resamplingComboBox->setObjectName("resamplingComboBox");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, resamplingComboBox);

        fastResampligCheckBox = new QCheckBox(SidSettingsDialog);
        fastResampligCheckBox->setObjectName("fastResampligCheckBox");

        formLayout->setWidget(6, QFormLayout::ItemRole::SpanningRole, fastResampligCheckBox);

        useHVSCCheckBox = new QCheckBox(SidSettingsDialog);
        useHVSCCheckBox->setObjectName("useHVSCCheckBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, useHVSCCheckBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SidSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SidSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SidSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SidSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(useHVSCCheckBox, &QCheckBox::toggled, hvscPathLineEdit, &QLineEdit::setEnabled);

        QMetaObject::connectSlotsByName(SidSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SidSettingsDialog)
    {
        SidSettingsDialog->setWindowTitle(QCoreApplication::translate("SidSettingsDialog", "SID Plugin Settings", nullptr));
        label_5->setText(QCoreApplication::translate("SidSettingsDialog", "HVSC database file:", nullptr));
        label->setText(QCoreApplication::translate("SidSettingsDialog", "Defaults song length, sec:", nullptr));
        label_2->setText(QCoreApplication::translate("SidSettingsDialog", "Sample rate:", nullptr));
        emulationLabel->setText(QCoreApplication::translate("SidSettingsDialog", "Emulation:", nullptr));
        label_4->setText(QCoreApplication::translate("SidSettingsDialog", "Resampling method:", nullptr));
        fastResampligCheckBox->setText(QCoreApplication::translate("SidSettingsDialog", "Fast resampling", nullptr));
        useHVSCCheckBox->setText(QCoreApplication::translate("SidSettingsDialog", "Enable HVSC song length database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SidSettingsDialog: public Ui_SidSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDSETTINGSDIALOG_H
