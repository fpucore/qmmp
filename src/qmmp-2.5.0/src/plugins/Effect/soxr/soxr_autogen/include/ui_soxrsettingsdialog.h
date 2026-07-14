/********************************************************************************
** Form generated from reading UI file 'soxrsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOXRSETTINGSDIALOG_H
#define UI_SOXRSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SoXRSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *srSpinBox;
    QLabel *label_2;
    QComboBox *qualityComboBox;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SoXRSettingsDialog)
    {
        if (SoXRSettingsDialog->objectName().isEmpty())
            SoXRSettingsDialog->setObjectName("SoXRSettingsDialog");
        SoXRSettingsDialog->resize(360, 122);
        gridLayout = new QGridLayout(SoXRSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(SoXRSettingsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        srSpinBox = new QSpinBox(SoXRSettingsDialog);
        srSpinBox->setObjectName("srSpinBox");
        srSpinBox->setMaximum(96000);
        srSpinBox->setSingleStep(100);
        srSpinBox->setValue(48000);

        gridLayout->addWidget(srSpinBox, 0, 1, 1, 2);

        label_2 = new QLabel(SoXRSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        qualityComboBox = new QComboBox(SoXRSettingsDialog);
        qualityComboBox->setObjectName("qualityComboBox");

        gridLayout->addWidget(qualityComboBox, 1, 1, 1, 2);

        spacerItem = new QSpacerItem(228, 24, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(SoXRSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);


        retranslateUi(SoXRSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SoXRSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SoXRSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SoXRSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SoXRSettingsDialog)
    {
        SoXRSettingsDialog->setWindowTitle(QCoreApplication::translate("SoXRSettingsDialog", "Sample Rate Converter Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("SoXRSettingsDialog", "Sample Rate (Hz):", nullptr));
        label_2->setText(QCoreApplication::translate("SoXRSettingsDialog", "Quality:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoXRSettingsDialog: public Ui_SoXRSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOXRSETTINGSDIALOG_H
