/********************************************************************************
** Form generated from reading UI file 'shoutsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOUTSETTINGSDIALOG_H
#define UI_SHOUTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ShoutSettingsDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostLineEdit;
    QLabel *label_2;
    QSpinBox *portSpinBox;
    QLabel *label_3;
    QLineEdit *mountPointLineEdit;
    QLabel *label_4;
    QLineEdit *userLineEdit;
    QLabel *label_5;
    QLineEdit *passwLineEdit;
    QLabel *label_6;
    QDoubleSpinBox *qualitySpinBox;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *publicCheckBox;
    QSpinBox *srateSpinBox;

    void setupUi(QDialog *ShoutSettingsDialog)
    {
        if (ShoutSettingsDialog->objectName().isEmpty())
            ShoutSettingsDialog->setObjectName("ShoutSettingsDialog");
        ShoutSettingsDialog->resize(450, 320);
        formLayout = new QFormLayout(ShoutSettingsDialog);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(ShoutSettingsDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        hostLineEdit = new QLineEdit(ShoutSettingsDialog);
        hostLineEdit->setObjectName("hostLineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, hostLineEdit);

        label_2 = new QLabel(ShoutSettingsDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        portSpinBox = new QSpinBox(ShoutSettingsDialog);
        portSpinBox->setObjectName("portSpinBox");
        portSpinBox->setMaximum(65535);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, portSpinBox);

        label_3 = new QLabel(ShoutSettingsDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        mountPointLineEdit = new QLineEdit(ShoutSettingsDialog);
        mountPointLineEdit->setObjectName("mountPointLineEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, mountPointLineEdit);

        label_4 = new QLabel(ShoutSettingsDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        userLineEdit = new QLineEdit(ShoutSettingsDialog);
        userLineEdit->setObjectName("userLineEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, userLineEdit);

        label_5 = new QLabel(ShoutSettingsDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        passwLineEdit = new QLineEdit(ShoutSettingsDialog);
        passwLineEdit->setObjectName("passwLineEdit");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, passwLineEdit);

        label_6 = new QLabel(ShoutSettingsDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_6);

        qualitySpinBox = new QDoubleSpinBox(ShoutSettingsDialog);
        qualitySpinBox->setObjectName("qualitySpinBox");
        qualitySpinBox->setMinimum(0.200000000000000);
        qualitySpinBox->setMaximum(1.000000000000000);
        qualitySpinBox->setSingleStep(0.010000000000000);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, qualitySpinBox);

        label_7 = new QLabel(ShoutSettingsDialog);
        label_7->setObjectName("label_7");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_7);

        buttonBox = new QDialogButtonBox(ShoutSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(9, QFormLayout::ItemRole::SpanningRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(8, QFormLayout::ItemRole::LabelRole, verticalSpacer);

        publicCheckBox = new QCheckBox(ShoutSettingsDialog);
        publicCheckBox->setObjectName("publicCheckBox");

        formLayout->setWidget(5, QFormLayout::ItemRole::SpanningRole, publicCheckBox);

        srateSpinBox = new QSpinBox(ShoutSettingsDialog);
        srateSpinBox->setObjectName("srateSpinBox");
        srateSpinBox->setMinimum(8000);
        srateSpinBox->setMaximum(96000);
        srateSpinBox->setSingleStep(100);
        srateSpinBox->setValue(44100);

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, srateSpinBox);


        retranslateUi(ShoutSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShoutSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShoutSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShoutSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ShoutSettingsDialog)
    {
        ShoutSettingsDialog->setWindowTitle(QCoreApplication::translate("ShoutSettingsDialog", "Connection Settings", nullptr));
        label->setText(QCoreApplication::translate("ShoutSettingsDialog", "Host:", nullptr));
        label_2->setText(QCoreApplication::translate("ShoutSettingsDialog", "Port:", nullptr));
        label_3->setText(QCoreApplication::translate("ShoutSettingsDialog", "Mount point:", nullptr));
        label_4->setText(QCoreApplication::translate("ShoutSettingsDialog", "User:", nullptr));
        label_5->setText(QCoreApplication::translate("ShoutSettingsDialog", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("ShoutSettingsDialog", "Quality:", nullptr));
        label_7->setText(QCoreApplication::translate("ShoutSettingsDialog", "Sample rate:", nullptr));
        publicCheckBox->setText(QCoreApplication::translate("ShoutSettingsDialog", "Public", nullptr));
        srateSpinBox->setSuffix(QCoreApplication::translate("ShoutSettingsDialog", "Hz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShoutSettingsDialog: public Ui_ShoutSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOUTSETTINGSDIALOG_H
