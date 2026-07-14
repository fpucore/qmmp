/********************************************************************************
** Form generated from reading UI file 'aboutqsuidialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTQSUIDIALOG_H
#define UI_ABOUTQSUIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include "qsuilogo.h"

QT_BEGIN_NAMESPACE

class Ui_AboutQSUIDialog
{
public:
    QGridLayout *gridLayout;
    QSUiLogo *widget;
    QDialogButtonBox *buttonBox;
    QTextEdit *aboutTextEdit;

    void setupUi(QDialog *AboutQSUIDialog)
    {
        if (AboutQSUIDialog->objectName().isEmpty())
            AboutQSUIDialog->setObjectName("AboutQSUIDialog");
        AboutQSUIDialog->resize(454, 494);
        gridLayout = new QGridLayout(AboutQSUIDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        widget = new QSUiLogo(AboutQSUIDialog);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(93);
        sizePolicy.setVerticalStretch(93);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(250, 300));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AboutQSUIDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        aboutTextEdit = new QTextEdit(AboutQSUIDialog);
        aboutTextEdit->setObjectName("aboutTextEdit");
        aboutTextEdit->setReadOnly(true);

        gridLayout->addWidget(aboutTextEdit, 1, 0, 1, 1);


        retranslateUi(AboutQSUIDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutQSUIDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutQSUIDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutQSUIDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutQSUIDialog)
    {
        AboutQSUIDialog->setWindowTitle(QCoreApplication::translate("AboutQSUIDialog", "About QSUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutQSUIDialog: public Ui_AboutQSUIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTQSUIDIALOG_H
