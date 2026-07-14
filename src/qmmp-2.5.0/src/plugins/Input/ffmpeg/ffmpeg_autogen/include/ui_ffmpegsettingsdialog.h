/********************************************************************************
** Form generated from reading UI file 'ffmpegsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGSETTINGSDIALOG_H
#define UI_FFMPEGSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FFmpegSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *wmaCheckBox;
    QCheckBox *apeCheckBox;
    QCheckBox *ttaCheckBox;
    QCheckBox *aacCheckBox;
    QCheckBox *mp3CheckBox;
    QCheckBox *mp4CheckBox;
    QCheckBox *raCheckBox;
    QCheckBox *shCheckBox;
    QCheckBox *ac3CheckBox;
    QCheckBox *dtsCheckBox;
    QCheckBox *mkaCheckBox;
    QCheckBox *vqfCheckBox;
    QCheckBox *takCheckBox;
    QCheckBox *dsdCheckBox;

    void setupUi(QDialog *FFmpegSettingsDialog)
    {
        if (FFmpegSettingsDialog->objectName().isEmpty())
            FFmpegSettingsDialog->setObjectName("FFmpegSettingsDialog");
        FFmpegSettingsDialog->resize(364, 503);
        gridLayout = new QGridLayout(FFmpegSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FFmpegSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        groupBox = new QGroupBox(FFmpegSettingsDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        wmaCheckBox = new QCheckBox(groupBox);
        wmaCheckBox->setObjectName("wmaCheckBox");

        verticalLayout->addWidget(wmaCheckBox);

        apeCheckBox = new QCheckBox(groupBox);
        apeCheckBox->setObjectName("apeCheckBox");

        verticalLayout->addWidget(apeCheckBox);

        ttaCheckBox = new QCheckBox(groupBox);
        ttaCheckBox->setObjectName("ttaCheckBox");

        verticalLayout->addWidget(ttaCheckBox);

        aacCheckBox = new QCheckBox(groupBox);
        aacCheckBox->setObjectName("aacCheckBox");

        verticalLayout->addWidget(aacCheckBox);

        mp3CheckBox = new QCheckBox(groupBox);
        mp3CheckBox->setObjectName("mp3CheckBox");

        verticalLayout->addWidget(mp3CheckBox);

        mp4CheckBox = new QCheckBox(groupBox);
        mp4CheckBox->setObjectName("mp4CheckBox");

        verticalLayout->addWidget(mp4CheckBox);

        raCheckBox = new QCheckBox(groupBox);
        raCheckBox->setObjectName("raCheckBox");

        verticalLayout->addWidget(raCheckBox);

        shCheckBox = new QCheckBox(groupBox);
        shCheckBox->setObjectName("shCheckBox");

        verticalLayout->addWidget(shCheckBox);

        ac3CheckBox = new QCheckBox(groupBox);
        ac3CheckBox->setObjectName("ac3CheckBox");

        verticalLayout->addWidget(ac3CheckBox);

        dtsCheckBox = new QCheckBox(groupBox);
        dtsCheckBox->setObjectName("dtsCheckBox");

        verticalLayout->addWidget(dtsCheckBox);

        mkaCheckBox = new QCheckBox(groupBox);
        mkaCheckBox->setObjectName("mkaCheckBox");

        verticalLayout->addWidget(mkaCheckBox);

        vqfCheckBox = new QCheckBox(groupBox);
        vqfCheckBox->setObjectName("vqfCheckBox");

        verticalLayout->addWidget(vqfCheckBox);

        takCheckBox = new QCheckBox(groupBox);
        takCheckBox->setObjectName("takCheckBox");

        verticalLayout->addWidget(takCheckBox);

        dsdCheckBox = new QCheckBox(groupBox);
        dsdCheckBox->setObjectName("dsdCheckBox");

        verticalLayout->addWidget(dsdCheckBox);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(FFmpegSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FFmpegSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FFmpegSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FFmpegSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *FFmpegSettingsDialog)
    {
        FFmpegSettingsDialog->setWindowTitle(QCoreApplication::translate("FFmpegSettingsDialog", "FFmpeg Plugin Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FFmpegSettingsDialog", "Formats", nullptr));
        wmaCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Windows Media Audio", nullptr));
        apeCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Monkey's Audio (APE)", nullptr));
        ttaCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "True Audio", nullptr));
        aacCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "ADTS AAC", nullptr));
        mp3CheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "MP3 (MPEG audio layer 3)", nullptr));
        mp4CheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "MPEG-4 AAC/ALAC", nullptr));
        raCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "RealAudio 1.0/2.0", nullptr));
        shCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Shorten", nullptr));
        ac3CheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "AC3/EAC", nullptr));
        dtsCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "DTS/DTS-Core", nullptr));
        mkaCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Matroska Audio (Dolby TrueHD Lossless)", nullptr));
        vqfCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "VQF", nullptr));
        takCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Tom's lossless Audio Kompressor (TAK)", nullptr));
        dsdCheckBox->setText(QCoreApplication::translate("FFmpegSettingsDialog", "Direct Stream Digital (DSD)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FFmpegSettingsDialog: public Ui_FFmpegSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGSETTINGSDIALOG_H
