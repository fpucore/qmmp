/********************************************************************************
** Form generated from reading UI file 'historysettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYSETTINGSDIALOG_H
#define UI_HISTORYSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistorySettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *titleLineEdit;
    QToolButton *titleButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HistorySettingsDialog)
    {
        if (HistorySettingsDialog->objectName().isEmpty())
            HistorySettingsDialog->setObjectName("HistorySettingsDialog");
        HistorySettingsDialog->resize(402, 89);
        verticalLayout = new QVBoxLayout(HistorySettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(HistorySettingsDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        titleLineEdit = new QLineEdit(HistorySettingsDialog);
        titleLineEdit->setObjectName("titleLineEdit");

        horizontalLayout->addWidget(titleLineEdit);

        titleButton = new QToolButton(HistorySettingsDialog);
        titleButton->setObjectName("titleButton");
        titleButton->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(titleButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(HistorySettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HistorySettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HistorySettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HistorySettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HistorySettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *HistorySettingsDialog)
    {
        HistorySettingsDialog->setWindowTitle(QCoreApplication::translate("HistorySettingsDialog", "Listening History Plugin Settings", nullptr));
        label_3->setText(QCoreApplication::translate("HistorySettingsDialog", "Title format:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistorySettingsDialog: public Ui_HistorySettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYSETTINGSDIALOG_H
