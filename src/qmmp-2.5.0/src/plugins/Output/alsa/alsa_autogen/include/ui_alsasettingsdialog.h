/********************************************************************************
** Form generated from reading UI file 'alsasettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALSASETTINGSDIALOG_H
#define UI_ALSASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlsaSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *deviceComboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QComboBox *mixerCardComboBox;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *mixerDeviceComboBox;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QLabel *label;
    QSpinBox *bufferSpinBox;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QSpinBox *periodSpinBox;
    QSpacerItem *spacerItem1;
    QCheckBox *mmapCheckBox;
    QSpacerItem *spacerItem2;
    QCheckBox *pauseCheckBox;
    QSpacerItem *spacerItem3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlsaSettingsDialog)
    {
        if (AlsaSettingsDialog->objectName().isEmpty())
            AlsaSettingsDialog->setObjectName("AlsaSettingsDialog");
        AlsaSettingsDialog->resize(403, 284);
        gridLayout = new QGridLayout(AlsaSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        tabWidget = new QTabWidget(AlsaSettingsDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        vboxLayout = new QVBoxLayout(tab);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        deviceComboBox = new QComboBox(groupBox);
        deviceComboBox->setObjectName("deviceComboBox");
        deviceComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(deviceComboBox);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        mixerCardComboBox = new QComboBox(groupBox_2);
        mixerCardComboBox->setObjectName("mixerCardComboBox");

        gridLayout1->addWidget(mixerCardComboBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        mixerDeviceComboBox = new QComboBox(groupBox_2);
        mixerDeviceComboBox->setObjectName("mixerDeviceComboBox");

        gridLayout1->addWidget(mixerDeviceComboBox, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        vboxLayout1 = new QVBoxLayout(tab_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout2 = new QGridLayout(groupBox_3);
        gridLayout2->setObjectName("gridLayout2");
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        bufferSpinBox = new QSpinBox(groupBox_3);
        bufferSpinBox->setObjectName("bufferSpinBox");
        bufferSpinBox->setMinimum(200);
        bufferSpinBox->setMaximum(10000);
        bufferSpinBox->setValue(500);

        gridLayout2->addWidget(bufferSpinBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        periodSpinBox = new QSpinBox(groupBox_3);
        periodSpinBox->setObjectName("periodSpinBox");
        periodSpinBox->setMinimum(20);
        periodSpinBox->setMaximum(5000);
        periodSpinBox->setValue(100);

        gridLayout2->addWidget(periodSpinBox, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 2, 1, 1);

        mmapCheckBox = new QCheckBox(groupBox_3);
        mmapCheckBox->setObjectName("mmapCheckBox");

        gridLayout2->addWidget(mmapCheckBox, 2, 0, 1, 3);

        spacerItem2 = new QSpacerItem(60, 81, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout2->addItem(spacerItem2, 4, 1, 1, 1);

        pauseCheckBox = new QCheckBox(groupBox_3);
        pauseCheckBox->setObjectName("pauseCheckBox");

        gridLayout2->addWidget(pauseCheckBox, 3, 0, 1, 3);


        vboxLayout1->addWidget(groupBox_3);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        spacerItem3 = new QSpacerItem(191, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(spacerItem3, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AlsaSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(AlsaSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlsaSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlsaSettingsDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AlsaSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AlsaSettingsDialog)
    {
        AlsaSettingsDialog->setWindowTitle(QCoreApplication::translate("AlsaSettingsDialog", "ALSA Plugin Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlsaSettingsDialog", "Audio device", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AlsaSettingsDialog", "Mixer", nullptr));
        label_3->setText(QCoreApplication::translate("AlsaSettingsDialog", "Mixer card:", nullptr));
        label_4->setText(QCoreApplication::translate("AlsaSettingsDialog", "Mixer device:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AlsaSettingsDialog", "Device Settings", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AlsaSettingsDialog", "Soundcard", nullptr));
        label->setText(QCoreApplication::translate("AlsaSettingsDialog", "Buffer time (ms):", nullptr));
        label_2->setText(QCoreApplication::translate("AlsaSettingsDialog", "Period time (ms):", nullptr));
        mmapCheckBox->setText(QCoreApplication::translate("AlsaSettingsDialog", "Use mmap access", nullptr));
        pauseCheckBox->setText(QCoreApplication::translate("AlsaSettingsDialog", "Use snd_pcm_pause function", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AlsaSettingsDialog", "Advanced Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlsaSettingsDialog: public Ui_AlsaSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALSASETTINGSDIALOG_H
