/********************************************************************************
** Form generated from reading UI file 'notifiersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFIERSETTINGSDIALOG_H
#define UI_NOTIFIERSETTINGSDIALOG_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NotifierSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSlider *transparencySlider;
    QLabel *label_2;
    QLabel *fontLabel;
    QToolButton *fontButton;
    QLabel *coverSizeLabel;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QPushButton *topLeftButton;
    QPushButton *topButton;
    QPushButton *topRightButton;
    QPushButton *leftButton;
    QPushButton *centerButton;
    QPushButton *rightButton;
    QPushButton *bottomLeftButton;
    QPushButton *bottomButton;
    QPushButton *bottomRightButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *templateButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *transparencyLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QSlider *coverSizeSlider;
    QCheckBox *volumeCheckBox;
    QLabel *label_3;
    QSpinBox *messageDelaySpinBox;
    QCheckBox *resumeCheckBox;
    QCheckBox *songCheckBox;
    QCheckBox *disableForFScheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *psiCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NotifierSettingsDialog)
    {
        if (NotifierSettingsDialog->objectName().isEmpty())
            NotifierSettingsDialog->setObjectName("NotifierSettingsDialog");
        NotifierSettingsDialog->resize(325, 515);
        verticalLayout_2 = new QVBoxLayout(NotifierSettingsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(6, -1, 6, 6);
        groupBox = new QGroupBox(NotifierSettingsDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        transparencySlider = new QSlider(groupBox);
        transparencySlider->setObjectName("transparencySlider");
        transparencySlider->setMaximum(90);
        transparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(transparencySlider, 7, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        fontLabel = new QLabel(groupBox);
        fontLabel->setObjectName("fontLabel");
        fontLabel->setFrameShape(QFrame::StyledPanel);
        fontLabel->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(fontLabel, 4, 1, 1, 1);

        fontButton = new QToolButton(groupBox);
        fontButton->setObjectName("fontButton");

        gridLayout_2->addWidget(fontButton, 4, 2, 1, 1);

        coverSizeLabel = new QLabel(groupBox);
        coverSizeLabel->setObjectName("coverSizeLabel");

        gridLayout_2->addWidget(coverSizeLabel, 6, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 7, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName("gridLayout");
        topLeftButton = new QPushButton(groupBox);
        topLeftButton->setObjectName("topLeftButton");
        topLeftButton->setCheckable(true);
        topLeftButton->setAutoExclusive(true);

        gridLayout->addWidget(topLeftButton, 0, 0, 1, 1);

        topButton = new QPushButton(groupBox);
        topButton->setObjectName("topButton");
        topButton->setCheckable(true);
        topButton->setAutoExclusive(true);

        gridLayout->addWidget(topButton, 0, 1, 1, 1);

        topRightButton = new QPushButton(groupBox);
        topRightButton->setObjectName("topRightButton");
        topRightButton->setCheckable(true);
        topRightButton->setAutoExclusive(true);

        gridLayout->addWidget(topRightButton, 0, 2, 1, 1);

        leftButton = new QPushButton(groupBox);
        leftButton->setObjectName("leftButton");
        leftButton->setCheckable(true);
        leftButton->setAutoExclusive(true);

        gridLayout->addWidget(leftButton, 1, 0, 1, 1);

        centerButton = new QPushButton(groupBox);
        centerButton->setObjectName("centerButton");
        centerButton->setCheckable(true);
        centerButton->setAutoExclusive(true);

        gridLayout->addWidget(centerButton, 1, 1, 1, 1);

        rightButton = new QPushButton(groupBox);
        rightButton->setObjectName("rightButton");
        rightButton->setCheckable(true);
        rightButton->setAutoExclusive(true);

        gridLayout->addWidget(rightButton, 1, 2, 1, 1);

        bottomLeftButton = new QPushButton(groupBox);
        bottomLeftButton->setObjectName("bottomLeftButton");
        bottomLeftButton->setCheckable(true);
        bottomLeftButton->setAutoExclusive(true);

        gridLayout->addWidget(bottomLeftButton, 2, 0, 1, 1);

        bottomButton = new QPushButton(groupBox);
        bottomButton->setObjectName("bottomButton");
        bottomButton->setCheckable(true);
        bottomButton->setAutoExclusive(true);

        gridLayout->addWidget(bottomButton, 2, 1, 1, 1);

        bottomRightButton = new QPushButton(groupBox);
        bottomRightButton->setObjectName("bottomRightButton");
        bottomRightButton->setCheckable(true);
        bottomRightButton->setAutoExclusive(true);

        gridLayout->addWidget(bottomRightButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 1, 3, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 10, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        templateButton = new QPushButton(groupBox);
        templateButton->setObjectName("templateButton");

        horizontalLayout_2->addWidget(templateButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 11, 0, 1, 3);

        transparencyLabel = new QLabel(groupBox);
        transparencyLabel->setObjectName("transparencyLabel");
        transparencyLabel->setMinimumSize(QSize(18, 0));

        gridLayout_2->addWidget(transparencyLabel, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 8, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 6, 0, 1, 1);

        coverSizeSlider = new QSlider(groupBox);
        coverSizeSlider->setObjectName("coverSizeSlider");
        coverSizeSlider->setMinimum(32);
        coverSizeSlider->setMaximum(128);
        coverSizeSlider->setSingleStep(1);
        coverSizeSlider->setPageStep(16);
        coverSizeSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(coverSizeSlider, 6, 1, 1, 1);

        volumeCheckBox = new QCheckBox(groupBox);
        volumeCheckBox->setObjectName("volumeCheckBox");

        gridLayout_2->addWidget(volumeCheckBox, 2, 0, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        messageDelaySpinBox = new QSpinBox(groupBox);
        messageDelaySpinBox->setObjectName("messageDelaySpinBox");
        messageDelaySpinBox->setMinimum(100);
        messageDelaySpinBox->setMaximum(10000);
        messageDelaySpinBox->setSingleStep(100);
        messageDelaySpinBox->setValue(1000);

        gridLayout_2->addWidget(messageDelaySpinBox, 5, 1, 1, 1);

        resumeCheckBox = new QCheckBox(groupBox);
        resumeCheckBox->setObjectName("resumeCheckBox");
        resumeCheckBox->setEnabled(false);

        gridLayout_2->addWidget(resumeCheckBox, 1, 0, 1, 3);

        songCheckBox = new QCheckBox(groupBox);
        songCheckBox->setObjectName("songCheckBox");

        gridLayout_2->addWidget(songCheckBox, 0, 0, 1, 3);

        disableForFScheckBox = new QCheckBox(groupBox);
        disableForFScheckBox->setObjectName("disableForFScheckBox");

        gridLayout_2->addWidget(disableForFScheckBox, 3, 0, 1, 3);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NotifierSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        psiCheckBox = new QCheckBox(groupBox_2);
        psiCheckBox->setObjectName("psiCheckBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(psiCheckBox->sizePolicy().hasHeightForWidth());
        psiCheckBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(psiCheckBox);


        verticalLayout_2->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(NotifierSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(NotifierSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NotifierSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NotifierSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(songCheckBox, &QCheckBox::toggled, resumeCheckBox, &QCheckBox::setEnabled);

        QMetaObject::connectSlotsByName(NotifierSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *NotifierSettingsDialog)
    {
        NotifierSettingsDialog->setWindowTitle(QCoreApplication::translate("NotifierSettingsDialog", "Notifier Plugin Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NotifierSettingsDialog", "Desktop Notification", nullptr));
        label_2->setText(QCoreApplication::translate("NotifierSettingsDialog", "Font:", nullptr));
        fontLabel->setText(QString());
        fontButton->setText(QCoreApplication::translate("NotifierSettingsDialog", "...", nullptr));
        coverSizeLabel->setText(QCoreApplication::translate("NotifierSettingsDialog", "0", nullptr));
        label_4->setText(QCoreApplication::translate("NotifierSettingsDialog", "Transparency:", nullptr));
        topLeftButton->setText(QString());
        topButton->setText(QString());
        topRightButton->setText(QString());
        leftButton->setText(QString());
        centerButton->setText(QString());
        rightButton->setText(QString());
        bottomLeftButton->setText(QString());
        bottomButton->setText(QString());
        bottomRightButton->setText(QString());
        label->setText(QCoreApplication::translate("NotifierSettingsDialog", "Position", nullptr));
        templateButton->setText(QCoreApplication::translate("NotifierSettingsDialog", "Edit template", nullptr));
        transparencyLabel->setText(QCoreApplication::translate("NotifierSettingsDialog", "0", nullptr));
        label_5->setText(QCoreApplication::translate("NotifierSettingsDialog", "Cover size:", nullptr));
        volumeCheckBox->setText(QCoreApplication::translate("NotifierSettingsDialog", "Volume change notification", nullptr));
        label_3->setText(QCoreApplication::translate("NotifierSettingsDialog", "Delay (ms):", nullptr));
        resumeCheckBox->setText(QCoreApplication::translate("NotifierSettingsDialog", "Playback resume notification", nullptr));
        songCheckBox->setText(QCoreApplication::translate("NotifierSettingsDialog", "Song change notification", nullptr));
#if QT_CONFIG(tooltip)
        disableForFScheckBox->setToolTip(QCoreApplication::translate("NotifierSettingsDialog", "Disable notifications when another application is in the Full Screen Mode", nullptr));
#endif // QT_CONFIG(tooltip)
        disableForFScheckBox->setText(QCoreApplication::translate("NotifierSettingsDialog", "Disable for full screen windows", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NotifierSettingsDialog", "Psi Notification", nullptr));
        psiCheckBox->setText(QCoreApplication::translate("NotifierSettingsDialog", "Enable Psi notification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotifierSettingsDialog: public Ui_NotifierSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFIERSETTINGSDIALOG_H
