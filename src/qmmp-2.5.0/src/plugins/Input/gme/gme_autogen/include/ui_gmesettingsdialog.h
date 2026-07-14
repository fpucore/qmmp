/********************************************************************************
** Form generated from reading UI file 'gmesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMESETTINGSDIALOG_H
#define UI_GMESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GmeSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *fadeoutSpinBox;
    QCheckBox *fadeoutCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GmeSettingsDialog)
    {
        if (GmeSettingsDialog->objectName().isEmpty())
            GmeSettingsDialog->setObjectName("GmeSettingsDialog");
        GmeSettingsDialog->resize(360, 114);
        verticalLayout = new QVBoxLayout(GmeSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(GmeSettingsDialog);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        fadeoutSpinBox = new QSpinBox(GmeSettingsDialog);
        fadeoutSpinBox->setObjectName("fadeoutSpinBox");
        fadeoutSpinBox->setEnabled(false);
        fadeoutSpinBox->setMinimum(500);
        fadeoutSpinBox->setMaximum(10000);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, fadeoutSpinBox);

        fadeoutCheckBox = new QCheckBox(GmeSettingsDialog);
        fadeoutCheckBox->setObjectName("fadeoutCheckBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, fadeoutCheckBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(GmeSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GmeSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GmeSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GmeSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(fadeoutCheckBox, &QCheckBox::toggled, fadeoutSpinBox, &QSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(GmeSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GmeSettingsDialog)
    {
        GmeSettingsDialog->setWindowTitle(QCoreApplication::translate("GmeSettingsDialog", "GME Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("GmeSettingsDialog", "Fadeout length:", nullptr));
        fadeoutSpinBox->setSuffix(QCoreApplication::translate("GmeSettingsDialog", "ms", nullptr));
        fadeoutCheckBox->setText(QCoreApplication::translate("GmeSettingsDialog", "Enable fadeout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GmeSettingsDialog: public Ui_GmeSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMESETTINGSDIALOG_H
