/********************************************************************************
** Form generated from reading UI file 'wildmidisettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WILDMIDISETTINGSDIALOG_H
#define UI_WILDMIDISETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WildMidiSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *confPathComboBox;
    QLabel *label_2;
    QCheckBox *enhancedResamplingCheckBox;
    QCheckBox *reverbCheckBox;
    QDialogButtonBox *buttonBox;
    QComboBox *sampleRateComboBox;

    void setupUi(QDialog *WildMidiSettingsDialog)
    {
        if (WildMidiSettingsDialog->objectName().isEmpty())
            WildMidiSettingsDialog->setObjectName("WildMidiSettingsDialog");
        WildMidiSettingsDialog->resize(339, 181);
        gridLayout = new QGridLayout(WildMidiSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(WildMidiSettingsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        confPathComboBox = new QComboBox(WildMidiSettingsDialog);
        confPathComboBox->setObjectName("confPathComboBox");
        confPathComboBox->setEditable(true);

        gridLayout->addWidget(confPathComboBox, 0, 1, 1, 2);

        label_2 = new QLabel(WildMidiSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        enhancedResamplingCheckBox = new QCheckBox(WildMidiSettingsDialog);
        enhancedResamplingCheckBox->setObjectName("enhancedResamplingCheckBox");

        gridLayout->addWidget(enhancedResamplingCheckBox, 2, 0, 1, 3);

        reverbCheckBox = new QCheckBox(WildMidiSettingsDialog);
        reverbCheckBox->setObjectName("reverbCheckBox");

        gridLayout->addWidget(reverbCheckBox, 3, 0, 1, 3);

        buttonBox = new QDialogButtonBox(WildMidiSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);

        sampleRateComboBox = new QComboBox(WildMidiSettingsDialog);
        sampleRateComboBox->setObjectName("sampleRateComboBox");

        gridLayout->addWidget(sampleRateComboBox, 1, 1, 1, 2);


        retranslateUi(WildMidiSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, WildMidiSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, WildMidiSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WildMidiSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *WildMidiSettingsDialog)
    {
        WildMidiSettingsDialog->setWindowTitle(QCoreApplication::translate("WildMidiSettingsDialog", "WildMidi Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("WildMidiSettingsDialog", "Instrument configuration: ", nullptr));
        label_2->setText(QCoreApplication::translate("WildMidiSettingsDialog", "Sample rate:", nullptr));
        enhancedResamplingCheckBox->setText(QCoreApplication::translate("WildMidiSettingsDialog", "Enhanced resampling", nullptr));
        reverbCheckBox->setText(QCoreApplication::translate("WildMidiSettingsDialog", "Reverberation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WildMidiSettingsDialog: public Ui_WildMidiSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WILDMIDISETTINGSDIALOG_H
