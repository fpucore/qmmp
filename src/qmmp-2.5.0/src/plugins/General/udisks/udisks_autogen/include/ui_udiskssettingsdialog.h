/********************************************************************************
** Form generated from reading UI file 'udiskssettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDISKSSETTINGSDIALOG_H
#define UI_UDISKSSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UDisksSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *cdGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *addTracksCheckBox;
    QCheckBox *removeTracksCheckBox;
    QGroupBox *removableGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *addFilesCheckBox;
    QCheckBox *removeFilesCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UDisksSettingsDialog)
    {
        if (UDisksSettingsDialog->objectName().isEmpty())
            UDisksSettingsDialog->setObjectName("UDisksSettingsDialog");
        UDisksSettingsDialog->resize(372, 247);
        verticalLayout_3 = new QVBoxLayout(UDisksSettingsDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(6, -1, 6, 6);
        cdGroupBox = new QGroupBox(UDisksSettingsDialog);
        cdGroupBox->setObjectName("cdGroupBox");
        cdGroupBox->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(cdGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        addTracksCheckBox = new QCheckBox(cdGroupBox);
        addTracksCheckBox->setObjectName("addTracksCheckBox");

        verticalLayout_2->addWidget(addTracksCheckBox);

        removeTracksCheckBox = new QCheckBox(cdGroupBox);
        removeTracksCheckBox->setObjectName("removeTracksCheckBox");

        verticalLayout_2->addWidget(removeTracksCheckBox);


        verticalLayout_3->addWidget(cdGroupBox);

        removableGroupBox = new QGroupBox(UDisksSettingsDialog);
        removableGroupBox->setObjectName("removableGroupBox");
        removableGroupBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(removableGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        addFilesCheckBox = new QCheckBox(removableGroupBox);
        addFilesCheckBox->setObjectName("addFilesCheckBox");

        verticalLayout->addWidget(addFilesCheckBox);

        removeFilesCheckBox = new QCheckBox(removableGroupBox);
        removeFilesCheckBox->setObjectName("removeFilesCheckBox");

        verticalLayout->addWidget(removeFilesCheckBox);


        verticalLayout_3->addWidget(removableGroupBox);

        buttonBox = new QDialogButtonBox(UDisksSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(UDisksSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UDisksSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UDisksSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UDisksSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *UDisksSettingsDialog)
    {
        UDisksSettingsDialog->setWindowTitle(QCoreApplication::translate("UDisksSettingsDialog", "UDisks Plugin Settings", nullptr));
        cdGroupBox->setTitle(QCoreApplication::translate("UDisksSettingsDialog", "CD Audio Detection", nullptr));
        addTracksCheckBox->setText(QCoreApplication::translate("UDisksSettingsDialog", "Add tracks to playlist automatically", nullptr));
        removeTracksCheckBox->setText(QCoreApplication::translate("UDisksSettingsDialog", "Remove tracks from playlist automatically", nullptr));
        removableGroupBox->setTitle(QCoreApplication::translate("UDisksSettingsDialog", "Removable Device Detection", nullptr));
        addFilesCheckBox->setText(QCoreApplication::translate("UDisksSettingsDialog", "Add files to playlist automatically", nullptr));
        removeFilesCheckBox->setText(QCoreApplication::translate("UDisksSettingsDialog", "Remove files from playlist automatically", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDisksSettingsDialog: public Ui_UDisksSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDISKSSETTINGSDIALOG_H
