/********************************************************************************
** Form generated from reading UI file 'statusiconsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSICONSETTINGSDIALOG_H
#define UI_STATUSICONSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_StatusIconSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *messageGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *messageDelaySpinBox;
    QGroupBox *niceTooltipGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *niceTooltipSplitCheckBox;
    QCheckBox *progressCheckBox;
    QLabel *niceTooltipDelayLabel;
    QSpinBox *niceTooltipDelaySpinBox;
    QLabel *transparencyLabel;
    QHBoxLayout *horizontalLayout_3;
    QSlider *transparencySlider;
    QLabel *niceTooltipOpacityValueLabel;
    QLabel *transparencyLabel_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *coverSizeSlider;
    QLabel *niceTooltipOpacityValueLabel_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *templateButton;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *standardIconsCheckBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatusIconSettingsDialog)
    {
        if (StatusIconSettingsDialog->objectName().isEmpty())
            StatusIconSettingsDialog->setObjectName("StatusIconSettingsDialog");
        StatusIconSettingsDialog->resize(307, 368);
        gridLayout = new QGridLayout(StatusIconSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        messageGroupBox = new QGroupBox(StatusIconSettingsDialog);
        messageGroupBox->setObjectName("messageGroupBox");
        messageGroupBox->setCheckable(true);
        horizontalLayout = new QHBoxLayout(messageGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(messageGroupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        messageDelaySpinBox = new QSpinBox(messageGroupBox);
        messageDelaySpinBox->setObjectName("messageDelaySpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageDelaySpinBox->sizePolicy().hasHeightForWidth());
        messageDelaySpinBox->setSizePolicy(sizePolicy);
        messageDelaySpinBox->setMinimum(100);
        messageDelaySpinBox->setMaximum(10000);
        messageDelaySpinBox->setSingleStep(100);
        messageDelaySpinBox->setValue(1000);

        horizontalLayout->addWidget(messageDelaySpinBox);


        gridLayout->addWidget(messageGroupBox, 0, 0, 1, 2);

        niceTooltipGroupBox = new QGroupBox(StatusIconSettingsDialog);
        niceTooltipGroupBox->setObjectName("niceTooltipGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(niceTooltipGroupBox->sizePolicy().hasHeightForWidth());
        niceTooltipGroupBox->setSizePolicy(sizePolicy1);
        niceTooltipGroupBox->setFlat(false);
        niceTooltipGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(niceTooltipGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        niceTooltipSplitCheckBox = new QCheckBox(niceTooltipGroupBox);
        niceTooltipSplitCheckBox->setObjectName("niceTooltipSplitCheckBox");

        gridLayout_2->addWidget(niceTooltipSplitCheckBox, 0, 0, 1, 2);

        progressCheckBox = new QCheckBox(niceTooltipGroupBox);
        progressCheckBox->setObjectName("progressCheckBox");

        gridLayout_2->addWidget(progressCheckBox, 1, 0, 1, 2);

        niceTooltipDelayLabel = new QLabel(niceTooltipGroupBox);
        niceTooltipDelayLabel->setObjectName("niceTooltipDelayLabel");

        gridLayout_2->addWidget(niceTooltipDelayLabel, 2, 0, 1, 1);

        niceTooltipDelaySpinBox = new QSpinBox(niceTooltipGroupBox);
        niceTooltipDelaySpinBox->setObjectName("niceTooltipDelaySpinBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(niceTooltipDelaySpinBox->sizePolicy().hasHeightForWidth());
        niceTooltipDelaySpinBox->setSizePolicy(sizePolicy2);
        niceTooltipDelaySpinBox->setMaximum(10000);
        niceTooltipDelaySpinBox->setSingleStep(500);
        niceTooltipDelaySpinBox->setValue(2000);

        gridLayout_2->addWidget(niceTooltipDelaySpinBox, 2, 1, 1, 1);

        transparencyLabel = new QLabel(niceTooltipGroupBox);
        transparencyLabel->setObjectName("transparencyLabel");

        gridLayout_2->addWidget(transparencyLabel, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        transparencySlider = new QSlider(niceTooltipGroupBox);
        transparencySlider->setObjectName("transparencySlider");
        transparencySlider->setMaximum(100);
        transparencySlider->setOrientation(Qt::Horizontal);
        transparencySlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_3->addWidget(transparencySlider);

        niceTooltipOpacityValueLabel = new QLabel(niceTooltipGroupBox);
        niceTooltipOpacityValueLabel->setObjectName("niceTooltipOpacityValueLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(niceTooltipOpacityValueLabel->sizePolicy().hasHeightForWidth());
        niceTooltipOpacityValueLabel->setSizePolicy(sizePolicy3);
        niceTooltipOpacityValueLabel->setMinimumSize(QSize(26, 0));

        horizontalLayout_3->addWidget(niceTooltipOpacityValueLabel);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        transparencyLabel_2 = new QLabel(niceTooltipGroupBox);
        transparencyLabel_2->setObjectName("transparencyLabel_2");

        gridLayout_2->addWidget(transparencyLabel_2, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        coverSizeSlider = new QSlider(niceTooltipGroupBox);
        coverSizeSlider->setObjectName("coverSizeSlider");
        coverSizeSlider->setMinimum(32);
        coverSizeSlider->setMaximum(160);
        coverSizeSlider->setPageStep(16);
        coverSizeSlider->setOrientation(Qt::Horizontal);
        coverSizeSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(coverSizeSlider);

        niceTooltipOpacityValueLabel_2 = new QLabel(niceTooltipGroupBox);
        niceTooltipOpacityValueLabel_2->setObjectName("niceTooltipOpacityValueLabel_2");
        sizePolicy3.setHeightForWidth(niceTooltipOpacityValueLabel_2->sizePolicy().hasHeightForWidth());
        niceTooltipOpacityValueLabel_2->setSizePolicy(sizePolicy3);
        niceTooltipOpacityValueLabel_2->setMinimumSize(QSize(26, 0));

        horizontalLayout_2->addWidget(niceTooltipOpacityValueLabel_2);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        templateButton = new QPushButton(niceTooltipGroupBox);
        templateButton->setObjectName("templateButton");

        horizontalLayout_4->addWidget(templateButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 2);


        gridLayout->addWidget(niceTooltipGroupBox, 1, 0, 1, 2);

        standardIconsCheckBox = new QCheckBox(StatusIconSettingsDialog);
        standardIconsCheckBox->setObjectName("standardIconsCheckBox");

        gridLayout->addWidget(standardIconsCheckBox, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(279, 23, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(StatusIconSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(StatusIconSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StatusIconSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StatusIconSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StatusIconSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *StatusIconSettingsDialog)
    {
        StatusIconSettingsDialog->setWindowTitle(QCoreApplication::translate("StatusIconSettingsDialog", "Status Icon Plugin Settings", nullptr));
        messageGroupBox->setTitle(QCoreApplication::translate("StatusIconSettingsDialog", "Balloon message", nullptr));
        label_3->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Delay, ms:", nullptr));
        niceTooltipGroupBox->setTitle(QCoreApplication::translate("StatusIconSettingsDialog", "Tooltip", nullptr));
        niceTooltipSplitCheckBox->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Try to split file name when no tag", nullptr));
        progressCheckBox->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Show progress bar", nullptr));
        niceTooltipDelayLabel->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Delay, ms:", nullptr));
        transparencyLabel->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Transparency:", nullptr));
        niceTooltipOpacityValueLabel->setText(QCoreApplication::translate("StatusIconSettingsDialog", "0", nullptr));
        transparencyLabel_2->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Cover size:", nullptr));
        niceTooltipOpacityValueLabel_2->setText(QCoreApplication::translate("StatusIconSettingsDialog", "32", nullptr));
        templateButton->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Edit template", nullptr));
        standardIconsCheckBox->setText(QCoreApplication::translate("StatusIconSettingsDialog", "Use standard icons", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusIconSettingsDialog: public Ui_StatusIconSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSICONSETTINGSDIALOG_H
