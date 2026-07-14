/********************************************************************************
** Form generated from reading UI file 'converterpreseteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERPRESETEDITOR_H
#define UI_CONVERTERPRESETEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConverterPresetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *extensionLineEdit;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *commandLineEdit;
    QToolButton *commandToolButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *tagsCheckBox;
    QCheckBox *us16bitCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConverterPresetEditor)
    {
        if (ConverterPresetEditor->objectName().isEmpty())
            ConverterPresetEditor->setObjectName("ConverterPresetEditor");
        ConverterPresetEditor->resize(400, 314);
        verticalLayout = new QVBoxLayout(ConverterPresetEditor);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        groupBox = new QGroupBox(ConverterPresetEditor);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        nameLineEdit = new QLineEdit(groupBox);
        nameLineEdit->setObjectName("nameLineEdit");

        gridLayout->addWidget(nameLineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        extensionLineEdit = new QLineEdit(groupBox);
        extensionLineEdit->setObjectName("extensionLineEdit");

        gridLayout->addWidget(extensionLineEdit, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ConverterPresetEditor);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        commandLineEdit = new QLineEdit(groupBox_2);
        commandLineEdit->setObjectName("commandLineEdit");

        horizontalLayout->addWidget(commandLineEdit);

        commandToolButton = new QToolButton(groupBox_2);
        commandToolButton->setObjectName("commandToolButton");
        commandToolButton->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(commandToolButton);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ConverterPresetEditor);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tagsCheckBox = new QCheckBox(groupBox_3);
        tagsCheckBox->setObjectName("tagsCheckBox");

        verticalLayout_2->addWidget(tagsCheckBox);

        us16bitCheckBox = new QCheckBox(groupBox_3);
        us16bitCheckBox->setObjectName("us16bitCheckBox");

        verticalLayout_2->addWidget(us16bitCheckBox);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(ConverterPresetEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConverterPresetEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConverterPresetEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConverterPresetEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConverterPresetEditor);
    } // setupUi

    void retranslateUi(QDialog *ConverterPresetEditor)
    {
        ConverterPresetEditor->setWindowTitle(QCoreApplication::translate("ConverterPresetEditor", "Preset Editor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConverterPresetEditor", "General", nullptr));
        label->setText(QCoreApplication::translate("ConverterPresetEditor", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("ConverterPresetEditor", "Extension:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConverterPresetEditor", "Command", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ConverterPresetEditor", "Options", nullptr));
        tagsCheckBox->setText(QCoreApplication::translate("ConverterPresetEditor", "Write tags", nullptr));
        us16bitCheckBox->setText(QCoreApplication::translate("ConverterPresetEditor", "Convert to 16 bit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConverterPresetEditor: public Ui_ConverterPresetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERPRESETEDITOR_H
