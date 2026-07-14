/********************************************************************************
** Form generated from reading UI file 'editstreamdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTREAMDIALOG_H
#define UI_EDITSTREAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *urlLineEdit;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLineEdit *genreLineEdit;
    QLabel *label_4;
    QLineEdit *bitrateLineEdit;
    QLabel *label_5;
    QComboBox *typeComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditStreamDialog)
    {
        if (EditStreamDialog->objectName().isEmpty())
            EditStreamDialog->setObjectName("EditStreamDialog");
        EditStreamDialog->resize(396, 214);
        verticalLayout = new QVBoxLayout(EditStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(EditStreamDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        urlLineEdit = new QLineEdit(EditStreamDialog);
        urlLineEdit->setObjectName("urlLineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, urlLineEdit);

        label_2 = new QLabel(EditStreamDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        nameLineEdit = new QLineEdit(EditStreamDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, nameLineEdit);

        label_3 = new QLabel(EditStreamDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        genreLineEdit = new QLineEdit(EditStreamDialog);
        genreLineEdit->setObjectName("genreLineEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, genreLineEdit);

        label_4 = new QLabel(EditStreamDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        bitrateLineEdit = new QLineEdit(EditStreamDialog);
        bitrateLineEdit->setObjectName("bitrateLineEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, bitrateLineEdit);

        label_5 = new QLabel(EditStreamDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        typeComboBox = new QComboBox(EditStreamDialog);
        typeComboBox->setObjectName("typeComboBox");
        typeComboBox->setEditable(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, typeComboBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditStreamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditStreamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditStreamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditStreamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *EditStreamDialog)
    {
        EditStreamDialog->setWindowTitle(QCoreApplication::translate("EditStreamDialog", "Edit Stream", nullptr));
        label->setText(QCoreApplication::translate("EditStreamDialog", "URL:", nullptr));
        label_2->setText(QCoreApplication::translate("EditStreamDialog", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("EditStreamDialog", "Genre:", nullptr));
        label_4->setText(QCoreApplication::translate("EditStreamDialog", "Bitrate:", nullptr));
        label_5->setText(QCoreApplication::translate("EditStreamDialog", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStreamDialog: public Ui_EditStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTREAMDIALOG_H
