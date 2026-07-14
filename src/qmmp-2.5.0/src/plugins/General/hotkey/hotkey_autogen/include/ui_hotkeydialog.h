/********************************************************************************
** Form generated from reading UI file 'hotkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYDIALOG_H
#define UI_HOTKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HotkeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *keyLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HotkeyDialog)
    {
        if (HotkeyDialog->objectName().isEmpty())
            HotkeyDialog->setObjectName("HotkeyDialog");
        HotkeyDialog->resize(359, 105);
        verticalLayout = new QVBoxLayout(HotkeyDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(HotkeyDialog);
        label->setObjectName("label");
        label->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout->addWidget(label);

        keyLineEdit = new QLineEdit(HotkeyDialog);
        keyLineEdit->setObjectName("keyLineEdit");
        keyLineEdit->setFocusPolicy(Qt::NoFocus);
        keyLineEdit->setReadOnly(true);

        verticalLayout->addWidget(keyLineEdit);

        buttonBox = new QDialogButtonBox(HotkeyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HotkeyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HotkeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HotkeyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HotkeyDialog);
    } // setupUi

    void retranslateUi(QDialog *HotkeyDialog)
    {
        HotkeyDialog->setWindowTitle(QCoreApplication::translate("HotkeyDialog", "Modify Shortcut", nullptr));
        label->setText(QCoreApplication::translate("HotkeyDialog", "Press the key combination you want to assign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotkeyDialog: public Ui_HotkeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYDIALOG_H
