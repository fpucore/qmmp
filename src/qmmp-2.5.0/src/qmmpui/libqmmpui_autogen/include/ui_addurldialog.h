/********************************************************************************
** Form generated from reading UI file 'addurldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDURLDIALOG_H
#define UI_ADDURLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddUrlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *urlComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddUrlDialog)
    {
        if (AddUrlDialog->objectName().isEmpty())
            AddUrlDialog->setObjectName("AddUrlDialog");
        AddUrlDialog->resize(460, 84);
        verticalLayout = new QVBoxLayout(AddUrlDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        urlComboBox = new QComboBox(AddUrlDialog);
        urlComboBox->setObjectName("urlComboBox");
        urlComboBox->setEditable(true);
        urlComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout->addWidget(urlComboBox);

        buttonBox = new QDialogButtonBox(AddUrlDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddUrlDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddUrlDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddUrlDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddUrlDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUrlDialog)
    {
        AddUrlDialog->setWindowTitle(QCoreApplication::translate("AddUrlDialog", "Enter URL to add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUrlDialog: public Ui_AddUrlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDURLDIALOG_H
