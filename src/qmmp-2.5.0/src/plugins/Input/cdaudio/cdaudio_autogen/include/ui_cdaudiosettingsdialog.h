/********************************************************************************
** Form generated from reading UI file 'cdaudiosettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDAUDIOSETTINGSDIALOG_H
#define UI_CDAUDIOSETTINGSDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CDAudioSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpinBox *speedSpinBox;
    QGroupBox *cddbGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *httpCheckBox;
    QLineEdit *serverLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pathLineEdit;
    QLabel *label_3;
    QLineEdit *portLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearCacheButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *deviceLineEdit;
    QDialogButtonBox *buttonBox;
    QCheckBox *cdtextCheckBox;
    QCheckBox *speedCheckBox;
    QCheckBox *deviceCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CDAudioSettingsDialog)
    {
        if (CDAudioSettingsDialog->objectName().isEmpty())
            CDAudioSettingsDialog->setObjectName("CDAudioSettingsDialog");
        CDAudioSettingsDialog->resize(311, 351);
        gridLayout_2 = new QGridLayout(CDAudioSettingsDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, -1, 6, 6);
        speedSpinBox = new QSpinBox(CDAudioSettingsDialog);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setMinimum(1);
        speedSpinBox->setMaximum(48);

        gridLayout_2->addWidget(speedSpinBox, 1, 1, 1, 1);

        cddbGroupBox = new QGroupBox(CDAudioSettingsDialog);
        cddbGroupBox->setObjectName("cddbGroupBox");
        cddbGroupBox->setCheckable(true);
        gridLayout = new QGridLayout(cddbGroupBox);
        gridLayout->setObjectName("gridLayout");
        httpCheckBox = new QCheckBox(cddbGroupBox);
        httpCheckBox->setObjectName("httpCheckBox");

        gridLayout->addWidget(httpCheckBox, 0, 0, 1, 2);

        serverLineEdit = new QLineEdit(cddbGroupBox);
        serverLineEdit->setObjectName("serverLineEdit");

        gridLayout->addWidget(serverLineEdit, 1, 1, 1, 1);

        label = new QLabel(cddbGroupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 2, 1);

        label_2 = new QLabel(cddbGroupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        pathLineEdit = new QLineEdit(cddbGroupBox);
        pathLineEdit->setObjectName("pathLineEdit");

        gridLayout->addWidget(pathLineEdit, 3, 1, 1, 1);

        label_3 = new QLabel(cddbGroupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        portLineEdit = new QLineEdit(cddbGroupBox);
        portLineEdit->setObjectName("portLineEdit");

        gridLayout->addWidget(portLineEdit, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        clearCacheButton = new QPushButton(cddbGroupBox);
        clearCacheButton->setObjectName("clearCacheButton");

        horizontalLayout_2->addWidget(clearCacheButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);


        gridLayout_2->addWidget(cddbGroupBox, 3, 0, 1, 2);

        deviceLineEdit = new QLineEdit(CDAudioSettingsDialog);
        deviceLineEdit->setObjectName("deviceLineEdit");

        gridLayout_2->addWidget(deviceLineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CDAudioSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 2);

        cdtextCheckBox = new QCheckBox(CDAudioSettingsDialog);
        cdtextCheckBox->setObjectName("cdtextCheckBox");

        gridLayout_2->addWidget(cdtextCheckBox, 2, 0, 1, 2);

        speedCheckBox = new QCheckBox(CDAudioSettingsDialog);
        speedCheckBox->setObjectName("speedCheckBox");
        speedCheckBox->setChecked(true);

        gridLayout_2->addWidget(speedCheckBox, 1, 0, 1, 1);

        deviceCheckBox = new QCheckBox(CDAudioSettingsDialog);
        deviceCheckBox->setObjectName("deviceCheckBox");
        deviceCheckBox->setChecked(true);

        gridLayout_2->addWidget(deviceCheckBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 2);


        retranslateUi(CDAudioSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CDAudioSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CDAudioSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(deviceCheckBox, &QCheckBox::toggled, deviceLineEdit, &QLineEdit::setEnabled);
        QObject::connect(speedCheckBox, &QCheckBox::toggled, speedSpinBox, &QSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(CDAudioSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CDAudioSettingsDialog)
    {
        CDAudioSettingsDialog->setWindowTitle(QCoreApplication::translate("CDAudioSettingsDialog", "CD Audio Plugin Settings", nullptr));
        cddbGroupBox->setTitle(QCoreApplication::translate("CDAudioSettingsDialog", "CDDB", nullptr));
        httpCheckBox->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Use HTTP instead of CDDBP", nullptr));
        label->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Server:", nullptr));
        label_2->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Path:", nullptr));
        label_3->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Port:", nullptr));
        clearCacheButton->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Clear CDDB cache", nullptr));
        cdtextCheckBox->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Use cd-text", nullptr));
        speedCheckBox->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Limit cd speed:", nullptr));
        deviceCheckBox->setText(QCoreApplication::translate("CDAudioSettingsDialog", "Override device:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDAudioSettingsDialog: public Ui_CDAudioSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDAUDIOSETTINGSDIALOG_H
