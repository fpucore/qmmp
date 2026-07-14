/********************************************************************************
** Form generated from reading UI file 'cueeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUEEDITOR_H
#define UI_CUEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CueEditor
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loadButton;
    QPushButton *deleteButton;
    QPushButton *saveAsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CueEditor)
    {
        if (CueEditor->objectName().isEmpty())
            CueEditor->setObjectName("CueEditor");
        CueEditor->resize(420, 347);
        CueEditor->setWindowTitle(QString::fromUtf8("CUE Editor"));
        gridLayout = new QGridLayout(CueEditor);
        gridLayout->setObjectName("gridLayout");
        plainTextEdit = new QPlainTextEdit(CueEditor);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 0, 0, 5, 1);

        verticalSpacer_2 = new QSpacerItem(20, 74, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        loadButton = new QPushButton(CueEditor);
        loadButton->setObjectName("loadButton");

        gridLayout->addWidget(loadButton, 1, 1, 1, 1);

        deleteButton = new QPushButton(CueEditor);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 2, 1, 1, 1);

        saveAsButton = new QPushButton(CueEditor);
        saveAsButton->setObjectName("saveAsButton");

        gridLayout->addWidget(saveAsButton, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);


        retranslateUi(CueEditor);

        QMetaObject::connectSlotsByName(CueEditor);
    } // setupUi

    void retranslateUi(QWidget *CueEditor)
    {
        plainTextEdit->setPlainText(QString());
        loadButton->setText(QCoreApplication::translate("CueEditor", "Load", nullptr));
        deleteButton->setText(QCoreApplication::translate("CueEditor", "Delete", nullptr));
        saveAsButton->setText(QCoreApplication::translate("CueEditor", "Save as...", nullptr));
        (void)CueEditor;
    } // retranslateUi

};

namespace Ui {
    class CueEditor: public Ui_CueEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUEEDITOR_H
