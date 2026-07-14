/********************************************************************************
** Form generated from reading UI file 'listenbrainzsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTENBRAINZSETTINGSDIALOG_H
#define UI_LISTENBRAINZSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ListenBrainzSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userTokenLineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ListenBrainzSettingsDialog)
    {
        if (ListenBrainzSettingsDialog->objectName().isEmpty())
            ListenBrainzSettingsDialog->setObjectName("ListenBrainzSettingsDialog");
        ListenBrainzSettingsDialog->resize(400, 111);
        verticalLayout = new QVBoxLayout(ListenBrainzSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(ListenBrainzSettingsDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        userTokenLineEdit = new QLineEdit(ListenBrainzSettingsDialog);
        userTokenLineEdit->setObjectName("userTokenLineEdit");

        verticalLayout->addWidget(userTokenLineEdit);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ListenBrainzSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ListenBrainzSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ListenBrainzSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ListenBrainzSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ListenBrainzSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ListenBrainzSettingsDialog)
    {
        ListenBrainzSettingsDialog->setWindowTitle(QCoreApplication::translate("ListenBrainzSettingsDialog", "ListenBrainz Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("ListenBrainzSettingsDialog", "ListenBrainz user token:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListenBrainzSettingsDialog: public Ui_ListenBrainzSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTENBRAINZSETTINGSDIALOG_H
