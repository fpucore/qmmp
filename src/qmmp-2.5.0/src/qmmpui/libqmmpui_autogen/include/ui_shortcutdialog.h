/********************************************************************************
** Form generated from reading UI file 'shortcutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTDIALOG_H
#define UI_SHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *keyLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShortcutDialog)
    {
        if (ShortcutDialog->objectName().isEmpty())
            ShortcutDialog->setObjectName("ShortcutDialog");
        ShortcutDialog->resize(366, 105);
        verticalLayout = new QVBoxLayout(ShortcutDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(ShortcutDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        keyLineEdit = new QLineEdit(ShortcutDialog);
        keyLineEdit->setObjectName("keyLineEdit");
        keyLineEdit->setFocusPolicy(Qt::NoFocus);
        keyLineEdit->setReadOnly(true);

        verticalLayout->addWidget(keyLineEdit);

        buttonBox = new QDialogButtonBox(ShortcutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ShortcutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShortcutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShortcutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutDialog)
    {
        ShortcutDialog->setWindowTitle(QCoreApplication::translate("ShortcutDialog", "Change Shortcut", nullptr));
        label->setText(QCoreApplication::translate("ShortcutDialog", "Press the key combination you want to assign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutDialog: public Ui_ShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTDIALOG_H
