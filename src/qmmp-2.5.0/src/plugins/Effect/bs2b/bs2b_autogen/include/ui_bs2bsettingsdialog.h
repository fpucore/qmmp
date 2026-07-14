/********************************************************************************
** Form generated from reading UI file 'bs2bsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BS2BSETTINGSDIALOG_H
#define UI_BS2BSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Bs2bSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSlider *feedSlider;
    QLabel *feedLabel;
    QSlider *freqSlider;
    QLabel *freqLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Bs2bSettingsDialog)
    {
        if (Bs2bSettingsDialog->objectName().isEmpty())
            Bs2bSettingsDialog->setObjectName("Bs2bSettingsDialog");
        Bs2bSettingsDialog->resize(609, 133);
        verticalLayout = new QVBoxLayout(Bs2bSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        groupBox = new QGroupBox(Bs2bSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        feedSlider = new QSlider(groupBox);
        feedSlider->setObjectName("feedSlider");
        feedSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(feedSlider, 0, 0, 1, 1);

        feedLabel = new QLabel(groupBox);
        feedLabel->setObjectName("feedLabel");

        gridLayout->addWidget(feedLabel, 0, 1, 1, 1);

        freqSlider = new QSlider(groupBox);
        freqSlider->setObjectName("freqSlider");
        freqSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(freqSlider, 1, 0, 1, 1);

        freqLabel = new QLabel(groupBox);
        freqLabel->setObjectName("freqLabel");

        gridLayout->addWidget(freqLabel, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(Bs2bSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Bs2bSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Bs2bSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Bs2bSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Bs2bSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *Bs2bSettingsDialog)
    {
        Bs2bSettingsDialog->setWindowTitle(QCoreApplication::translate("Bs2bSettingsDialog", "BS2B Plugin Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Bs2bSettingsDialog", "Crossfeed level", nullptr));
        feedLabel->setText(QCoreApplication::translate("Bs2bSettingsDialog", "-", nullptr));
        freqLabel->setText(QCoreApplication::translate("Bs2bSettingsDialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bs2bSettingsDialog: public Ui_Bs2bSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BS2BSETTINGSDIALOG_H
