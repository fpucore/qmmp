/********************************************************************************
** Form generated from reading UI file 'templateeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEEDITOR_H
#define UI_TEMPLATEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TemplateEditor
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *textEdit;
    QPushButton *insertButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TemplateEditor)
    {
        if (TemplateEditor->objectName().isEmpty())
            TemplateEditor->setObjectName("TemplateEditor");
        TemplateEditor->resize(492, 265);
        gridLayout = new QGridLayout(TemplateEditor);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QPlainTextEdit(TemplateEditor);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        insertButton = new QPushButton(TemplateEditor);
        insertButton->setObjectName("insertButton");

        gridLayout->addWidget(insertButton, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TemplateEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(TemplateEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TemplateEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TemplateEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TemplateEditor);
    } // setupUi

    void retranslateUi(QDialog *TemplateEditor)
    {
        TemplateEditor->setWindowTitle(QCoreApplication::translate("TemplateEditor", "Template Editor", nullptr));
        insertButton->setText(QCoreApplication::translate("TemplateEditor", "Insert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateEditor: public Ui_TemplateEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEEDITOR_H
