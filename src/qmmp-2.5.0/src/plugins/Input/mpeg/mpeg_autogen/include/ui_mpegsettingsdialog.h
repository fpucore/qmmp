/********************************************************************************
** Form generated from reading UI file 'mpegsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPEGSETTINGSDIALOG_H
#define UI_MPEGSETTINGSDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MpegSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *decoderGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *madRadioButton;
    QRadioButton *mpg123RadioButton;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *enableCrcCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_15_2;
    QComboBox *firstTagComboBox;
    QLabel *label_15_3;
    QComboBox *secondTagComboBox;
    QLabel *label_15_4;
    QComboBox *thirdTagComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mergeTagsCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *id3v1EncComboBox;
    QLabel *label_18_2_2;
    QComboBox *id3v2EncComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_17_2_2;
    QCheckBox *detectEncodingCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MpegSettingsDialog)
    {
        if (MpegSettingsDialog->objectName().isEmpty())
            MpegSettingsDialog->setObjectName("MpegSettingsDialog");
        MpegSettingsDialog->resize(362, 466);
        verticalLayout = new QVBoxLayout(MpegSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        decoderGroupBox = new QGroupBox(MpegSettingsDialog);
        decoderGroupBox->setObjectName("decoderGroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(decoderGroupBox->sizePolicy().hasHeightForWidth());
        decoderGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(decoderGroupBox);
        gridLayout->setObjectName("gridLayout");
        madRadioButton = new QRadioButton(decoderGroupBox);
        madRadioButton->setObjectName("madRadioButton");

        gridLayout->addWidget(madRadioButton, 0, 0, 1, 1);

        mpg123RadioButton = new QRadioButton(decoderGroupBox);
        mpg123RadioButton->setObjectName("mpg123RadioButton");

        gridLayout->addWidget(mpg123RadioButton, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 2, 1);

        enableCrcCheckBox = new QCheckBox(decoderGroupBox);
        enableCrcCheckBox->setObjectName("enableCrcCheckBox");
        enableCrcCheckBox->setEnabled(false);

        gridLayout->addWidget(enableCrcCheckBox, 1, 0, 1, 2);


        verticalLayout->addWidget(decoderGroupBox);

        groupBox_2 = new QGroupBox(MpegSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_15_2 = new QLabel(groupBox_2);
        label_15_2->setObjectName("label_15_2");
        sizePolicy.setHeightForWidth(label_15_2->sizePolicy().hasHeightForWidth());
        label_15_2->setSizePolicy(sizePolicy);
        label_15_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15_2, 0, 0, 1, 1);

        firstTagComboBox = new QComboBox(groupBox_2);
        firstTagComboBox->addItem(QString());
        firstTagComboBox->addItem(QString());
        firstTagComboBox->addItem(QString());
        firstTagComboBox->addItem(QString());
        firstTagComboBox->setObjectName("firstTagComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(firstTagComboBox->sizePolicy().hasHeightForWidth());
        firstTagComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(firstTagComboBox, 0, 1, 1, 2);

        label_15_3 = new QLabel(groupBox_2);
        label_15_3->setObjectName("label_15_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_15_3->sizePolicy().hasHeightForWidth());
        label_15_3->setSizePolicy(sizePolicy2);
        label_15_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15_3, 1, 0, 1, 1);

        secondTagComboBox = new QComboBox(groupBox_2);
        secondTagComboBox->addItem(QString());
        secondTagComboBox->addItem(QString());
        secondTagComboBox->addItem(QString());
        secondTagComboBox->addItem(QString());
        secondTagComboBox->setObjectName("secondTagComboBox");
        sizePolicy1.setHeightForWidth(secondTagComboBox->sizePolicy().hasHeightForWidth());
        secondTagComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(secondTagComboBox, 1, 1, 1, 2);

        label_15_4 = new QLabel(groupBox_2);
        label_15_4->setObjectName("label_15_4");
        sizePolicy.setHeightForWidth(label_15_4->sizePolicy().hasHeightForWidth());
        label_15_4->setSizePolicy(sizePolicy);
        label_15_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15_4, 2, 0, 1, 1);

        thirdTagComboBox = new QComboBox(groupBox_2);
        thirdTagComboBox->addItem(QString());
        thirdTagComboBox->addItem(QString());
        thirdTagComboBox->addItem(QString());
        thirdTagComboBox->addItem(QString());
        thirdTagComboBox->setObjectName("thirdTagComboBox");
        sizePolicy1.setHeightForWidth(thirdTagComboBox->sizePolicy().hasHeightForWidth());
        thirdTagComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(thirdTagComboBox, 2, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 3, 1);

        mergeTagsCheckBox = new QCheckBox(groupBox_2);
        mergeTagsCheckBox->setObjectName("mergeTagsCheckBox");
        mergeTagsCheckBox->setChecked(false);

        gridLayout_2->addWidget(mergeTagsCheckBox, 3, 0, 1, 4);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(MpegSettingsDialog);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        id3v1EncComboBox = new QComboBox(groupBox);
        id3v1EncComboBox->setObjectName("id3v1EncComboBox");
        sizePolicy1.setHeightForWidth(id3v1EncComboBox->sizePolicy().hasHeightForWidth());
        id3v1EncComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(id3v1EncComboBox, 0, 1, 1, 1);

        label_18_2_2 = new QLabel(groupBox);
        label_18_2_2->setObjectName("label_18_2_2");
        sizePolicy2.setHeightForWidth(label_18_2_2->sizePolicy().hasHeightForWidth());
        label_18_2_2->setSizePolicy(sizePolicy2);
        label_18_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_18_2_2, 1, 0, 1, 1);

        id3v2EncComboBox = new QComboBox(groupBox);
        id3v2EncComboBox->setObjectName("id3v2EncComboBox");
        sizePolicy1.setHeightForWidth(id3v2EncComboBox->sizePolicy().hasHeightForWidth());
        id3v2EncComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(id3v2EncComboBox, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 2, 1);

        label_17_2_2 = new QLabel(groupBox);
        label_17_2_2->setObjectName("label_17_2_2");
        sizePolicy2.setHeightForWidth(label_17_2_2->sizePolicy().hasHeightForWidth());
        label_17_2_2->setSizePolicy(sizePolicy2);
        label_17_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_17_2_2, 0, 0, 1, 1);

        detectEncodingCheckBox = new QCheckBox(groupBox);
        detectEncodingCheckBox->setObjectName("detectEncodingCheckBox");

        gridLayout_3->addWidget(detectEncodingCheckBox, 2, 0, 1, 3);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(MpegSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MpegSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MpegSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MpegSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(madRadioButton, &QRadioButton::toggled, enableCrcCheckBox, &QCheckBox::setEnabled);

        firstTagComboBox->setCurrentIndex(0);
        secondTagComboBox->setCurrentIndex(0);
        thirdTagComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MpegSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MpegSettingsDialog)
    {
        MpegSettingsDialog->setWindowTitle(QCoreApplication::translate("MpegSettingsDialog", "MPEG Plugin Settings", nullptr));
        decoderGroupBox->setTitle(QCoreApplication::translate("MpegSettingsDialog", "Decoder", nullptr));
        madRadioButton->setText(QCoreApplication::translate("MpegSettingsDialog", "MAD", nullptr));
        mpg123RadioButton->setText(QCoreApplication::translate("MpegSettingsDialog", "MPG123", nullptr));
        enableCrcCheckBox->setText(QCoreApplication::translate("MpegSettingsDialog", "Enable CRC checking", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MpegSettingsDialog", "Tag Priority", nullptr));
        label_15_2->setText(QCoreApplication::translate("MpegSettingsDialog", "First:", nullptr));
        firstTagComboBox->setItemText(0, QCoreApplication::translate("MpegSettingsDialog", "ID3v1", nullptr));
        firstTagComboBox->setItemText(1, QCoreApplication::translate("MpegSettingsDialog", "ID3v2", nullptr));
        firstTagComboBox->setItemText(2, QCoreApplication::translate("MpegSettingsDialog", "APE", nullptr));
        firstTagComboBox->setItemText(3, QCoreApplication::translate("MpegSettingsDialog", "Disabled", nullptr));

        label_15_3->setText(QCoreApplication::translate("MpegSettingsDialog", "Second:", nullptr));
        secondTagComboBox->setItemText(0, QCoreApplication::translate("MpegSettingsDialog", "ID3v1", nullptr));
        secondTagComboBox->setItemText(1, QCoreApplication::translate("MpegSettingsDialog", "ID3v2", nullptr));
        secondTagComboBox->setItemText(2, QCoreApplication::translate("MpegSettingsDialog", "APE", nullptr));
        secondTagComboBox->setItemText(3, QCoreApplication::translate("MpegSettingsDialog", "Disabled", nullptr));

        label_15_4->setText(QCoreApplication::translate("MpegSettingsDialog", "Third:", nullptr));
        thirdTagComboBox->setItemText(0, QCoreApplication::translate("MpegSettingsDialog", "ID3v1", nullptr));
        thirdTagComboBox->setItemText(1, QCoreApplication::translate("MpegSettingsDialog", "ID3v2", nullptr));
        thirdTagComboBox->setItemText(2, QCoreApplication::translate("MpegSettingsDialog", "APE", nullptr));
        thirdTagComboBox->setItemText(3, QCoreApplication::translate("MpegSettingsDialog", "Disabled", nullptr));

        mergeTagsCheckBox->setText(QCoreApplication::translate("MpegSettingsDialog", "Merge selected tag types", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MpegSettingsDialog", "Encodings", nullptr));
        label_18_2_2->setText(QCoreApplication::translate("MpegSettingsDialog", "ID3v2 encoding:", nullptr));
        label_17_2_2->setText(QCoreApplication::translate("MpegSettingsDialog", "ID3v1 encoding:", nullptr));
        detectEncodingCheckBox->setText(QCoreApplication::translate("MpegSettingsDialog", "Try to detect encoding", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MpegSettingsDialog: public Ui_MpegSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPEGSETTINGSDIALOG_H
