/********************************************************************************
** Form generated from reading UI file 'lyricssettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICSSETTINGSDIALOG_H
#define UI_LYRICSSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LyricsSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *providersListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LyricsSettingsDialog)
    {
        if (LyricsSettingsDialog->objectName().isEmpty())
            LyricsSettingsDialog->setObjectName("LyricsSettingsDialog");
        LyricsSettingsDialog->resize(431, 371);
        verticalLayout = new QVBoxLayout(LyricsSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(LyricsSettingsDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        providersListWidget = new QListWidget(LyricsSettingsDialog);
        providersListWidget->setObjectName("providersListWidget");

        verticalLayout->addWidget(providersListWidget);

        buttonBox = new QDialogButtonBox(LyricsSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LyricsSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LyricsSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LyricsSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LyricsSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *LyricsSettingsDialog)
    {
        LyricsSettingsDialog->setWindowTitle(QCoreApplication::translate("LyricsSettingsDialog", "Lyrics Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("LyricsSettingsDialog", "Lyrics providers:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricsSettingsDialog: public Ui_LyricsSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICSSETTINGSDIALOG_H
