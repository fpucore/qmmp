/********************************************************************************
** Form generated from reading UI file 'qtmultimediasettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMULTIMEDIASETTINGSDIALOG_H
#define UI_QTMULTIMEDIASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtMultimediaSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *deviceComboBox;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *QtMultimediaSettingsDialog)
    {
        if (QtMultimediaSettingsDialog->objectName().isEmpty())
            QtMultimediaSettingsDialog->setObjectName("QtMultimediaSettingsDialog");
        QtMultimediaSettingsDialog->resize(276, 86);
        gridLayout = new QGridLayout(QtMultimediaSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        deviceComboBox = new QComboBox(QtMultimediaSettingsDialog);
        deviceComboBox->setObjectName("deviceComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deviceComboBox->sizePolicy().hasHeightForWidth());
        deviceComboBox->setSizePolicy(sizePolicy);
        deviceComboBox->setEditable(false);

        gridLayout->addWidget(deviceComboBox, 0, 1, 1, 2);

        buttonBox = new QDialogButtonBox(QtMultimediaSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

        label = new QLabel(QtMultimediaSettingsDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(QtMultimediaSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QtMultimediaSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QtMultimediaSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QtMultimediaSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *QtMultimediaSettingsDialog)
    {
        QtMultimediaSettingsDialog->setWindowTitle(QCoreApplication::translate("QtMultimediaSettingsDialog", "Qt Multimedia Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("QtMultimediaSettingsDialog", "Device:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtMultimediaSettingsDialog: public Ui_QtMultimediaSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMULTIMEDIASETTINGSDIALOG_H
