/********************************************************************************
** Form generated from reading UI file 'stereosettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOSETTINGSDIALOG_H
#define UI_STEREOSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StereoSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *intensitySlider;
    QLabel *intensityLabel;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StereoSettingsDialog)
    {
        if (StereoSettingsDialog->objectName().isEmpty())
            StereoSettingsDialog->setObjectName("StereoSettingsDialog");
        StereoSettingsDialog->resize(383, 74);
        gridLayout = new QGridLayout(StereoSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StereoSettingsDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        intensitySlider = new QSlider(StereoSettingsDialog);
        intensitySlider->setObjectName("intensitySlider");
        intensitySlider->setMaximum(100);
        intensitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(intensitySlider);

        intensityLabel = new QLabel(StereoSettingsDialog);
        intensityLabel->setObjectName("intensityLabel");
        intensityLabel->setMinimumSize(QSize(28, 0));

        horizontalLayout->addWidget(intensityLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(229, 23, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(StereoSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(StereoSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StereoSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StereoSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StereoSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *StereoSettingsDialog)
    {
        StereoSettingsDialog->setWindowTitle(QCoreApplication::translate("StereoSettingsDialog", "Extra Stereo Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("StereoSettingsDialog", "Effect intensity:", nullptr));
        intensityLabel->setText(QCoreApplication::translate("StereoSettingsDialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StereoSettingsDialog: public Ui_StereoSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOSETTINGSDIALOG_H
