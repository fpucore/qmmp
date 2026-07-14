/********************************************************************************
** Form generated from reading UI file 'kdenotifysettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KDENOTIFYSETTINGSDIALOG_H
#define UI_KDENOTIFYSETTINGSDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KdeNotifySettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QCheckBox *updateNotifyCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *notifyDelaySpinBox;
    QCheckBox *volumeCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *showCoversCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *templateButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *KdeNotifySettingsDialog)
    {
        if (KdeNotifySettingsDialog->objectName().isEmpty())
            KdeNotifySettingsDialog->setObjectName("KdeNotifySettingsDialog");
        KdeNotifySettingsDialog->resize(413, 326);
        gridLayout = new QGridLayout(KdeNotifySettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        buttonBox = new QDialogButtonBox(KdeNotifySettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        groupBox = new QGroupBox(KdeNotifySettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        updateNotifyCheckBox = new QCheckBox(groupBox);
        updateNotifyCheckBox->setObjectName("updateNotifyCheckBox");

        gridLayout_3->addWidget(updateNotifyCheckBox, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        notifyDelaySpinBox = new QSpinBox(groupBox);
        notifyDelaySpinBox->setObjectName("notifyDelaySpinBox");
        notifyDelaySpinBox->setMaximum(100);
        notifyDelaySpinBox->setValue(10);

        gridLayout_3->addWidget(notifyDelaySpinBox, 0, 1, 1, 1);

        volumeCheckBox = new QCheckBox(groupBox);
        volumeCheckBox->setObjectName("volumeCheckBox");

        gridLayout_3->addWidget(volumeCheckBox, 2, 0, 1, 3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(KdeNotifySettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        showCoversCheckBox = new QCheckBox(groupBox_2);
        showCoversCheckBox->setObjectName("showCoversCheckBox");

        verticalLayout->addWidget(showCoversCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        templateButton = new QPushButton(groupBox_2);
        templateButton->setObjectName("templateButton");

        horizontalLayout->addWidget(templateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);


        retranslateUi(KdeNotifySettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, KdeNotifySettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, KdeNotifySettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(KdeNotifySettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *KdeNotifySettingsDialog)
    {
        KdeNotifySettingsDialog->setWindowTitle(QCoreApplication::translate("KdeNotifySettingsDialog", "KDE Notification Plugin Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("KdeNotifySettingsDialog", "Options", nullptr));
        label->setText(QCoreApplication::translate("KdeNotifySettingsDialog", "Notification delay:", nullptr));
        updateNotifyCheckBox->setText(QCoreApplication::translate("KdeNotifySettingsDialog", "Update visible notification instead create new", nullptr));
        notifyDelaySpinBox->setSuffix(QCoreApplication::translate("KdeNotifySettingsDialog", "s", nullptr));
        volumeCheckBox->setText(QCoreApplication::translate("KdeNotifySettingsDialog", "Volume change notification", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("KdeNotifySettingsDialog", "Appearance", nullptr));
        showCoversCheckBox->setText(QCoreApplication::translate("KdeNotifySettingsDialog", "Show covers", nullptr));
        templateButton->setText(QCoreApplication::translate("KdeNotifySettingsDialog", "Edit template", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KdeNotifySettingsDialog: public Ui_KdeNotifySettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KDENOTIFYSETTINGSDIALOG_H
