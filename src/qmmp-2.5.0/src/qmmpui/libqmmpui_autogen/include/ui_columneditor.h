/********************************************************************************
** Form generated from reading UI file 'columneditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNEDITOR_H
#define UI_COLUMNEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ColumnEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *nameLineEdit;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *formatLineEdit;
    QToolButton *formatButton;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ColumnEditor)
    {
        if (ColumnEditor->objectName().isEmpty())
            ColumnEditor->setObjectName("ColumnEditor");
        ColumnEditor->resize(391, 149);
        gridLayout = new QGridLayout(ColumnEditor);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        label_2 = new QLabel(ColumnEditor);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(ColumnEditor);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 2);

        comboBox = new QComboBox(ColumnEditor);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        nameLineEdit = new QLineEdit(ColumnEditor);
        nameLineEdit->setObjectName("nameLineEdit");

        gridLayout->addWidget(nameLineEdit, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(ColumnEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formatLineEdit = new QLineEdit(ColumnEditor);
        formatLineEdit->setObjectName("formatLineEdit");

        horizontalLayout->addWidget(formatLineEdit);

        formatButton = new QToolButton(ColumnEditor);
        formatButton->setObjectName("formatButton");
        formatButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(formatButton);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        label_3 = new QLabel(ColumnEditor);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(ColumnEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ColumnEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ColumnEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ColumnEditor);
    } // setupUi

    void retranslateUi(QDialog *ColumnEditor)
    {
        ColumnEditor->setWindowTitle(QCoreApplication::translate("ColumnEditor", "Edit Column", nullptr));
        label_2->setText(QCoreApplication::translate("ColumnEditor", "Type:", nullptr));
        label->setText(QCoreApplication::translate("ColumnEditor", "Name:", nullptr));
        formatButton->setText(QCoreApplication::translate("ColumnEditor", "...", nullptr));
        label_3->setText(QCoreApplication::translate("ColumnEditor", "Format:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnEditor: public Ui_ColumnEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNEDITOR_H
