/********************************************************************************
** Form generated from reading UI file 'skinnedpreseteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINNEDPRESETEDITOR_H
#define UI_SKINNEDPRESETEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinnedPresetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    QListWidget *presetListWidget;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout1;
    QListWidget *autoPresetListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *deleteButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SkinnedPresetEditor)
    {
        if (SkinnedPresetEditor->objectName().isEmpty())
            SkinnedPresetEditor->setObjectName("SkinnedPresetEditor");
        SkinnedPresetEditor->resize(357, 290);
        SkinnedPresetEditor->setModal(false);
        verticalLayout = new QVBoxLayout(SkinnedPresetEditor);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        tabWidget = new QTabWidget(SkinnedPresetEditor);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        vboxLayout = new QVBoxLayout(tab);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        presetListWidget = new QListWidget(tab);
        presetListWidget->setObjectName("presetListWidget");

        vboxLayout->addWidget(presetListWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        vboxLayout1 = new QVBoxLayout(tab_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        autoPresetListWidget = new QListWidget(tab_2);
        autoPresetListWidget->setObjectName("autoPresetListWidget");
        autoPresetListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        vboxLayout1->addWidget(autoPresetListWidget);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        loadButton = new QPushButton(SkinnedPresetEditor);
        loadButton->setObjectName("loadButton");

        horizontalLayout->addWidget(loadButton);

        deleteButton = new QPushButton(SkinnedPresetEditor);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout->addWidget(deleteButton);

        buttonBox = new QDialogButtonBox(SkinnedPresetEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SkinnedPresetEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SkinnedPresetEditor, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SkinnedPresetEditor);
    } // setupUi

    void retranslateUi(QDialog *SkinnedPresetEditor)
    {
        SkinnedPresetEditor->setWindowTitle(QCoreApplication::translate("SkinnedPresetEditor", "Preset Editor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SkinnedPresetEditor", "Preset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SkinnedPresetEditor", "Auto-preset", nullptr));
        loadButton->setText(QCoreApplication::translate("SkinnedPresetEditor", "Load", nullptr));
        deleteButton->setText(QCoreApplication::translate("SkinnedPresetEditor", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkinnedPresetEditor: public Ui_SkinnedPresetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINNEDPRESETEDITOR_H
