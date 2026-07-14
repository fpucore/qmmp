/********************************************************************************
** Form generated from reading UI file 'qsuitoolbareditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUITOOLBAREDITOR_H
#define UI_QSUITOOLBAREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_QSUiToolBarEditor
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *toolbarNameComboBox;
    QPushButton *createButton;
    QPushButton *renameButton;
    QPushButton *removeButton;
    QListWidget *actionsListWidget;
    QSpacerItem *verticalSpacer;
    QListWidget *activeActionsListWidget;
    QGridLayout *gridLayout;
    QToolButton *upToolButton;
    QToolButton *removeToolButton;
    QToolButton *addToolButton;
    QToolButton *downToolButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QSUiToolBarEditor)
    {
        if (QSUiToolBarEditor->objectName().isEmpty())
            QSUiToolBarEditor->setObjectName("QSUiToolBarEditor");
        QSUiToolBarEditor->resize(578, 419);
        gridLayout_2 = new QGridLayout(QSUiToolBarEditor);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, -1, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(QSUiToolBarEditor);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        toolbarNameComboBox = new QComboBox(QSUiToolBarEditor);
        toolbarNameComboBox->setObjectName("toolbarNameComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolbarNameComboBox->sizePolicy().hasHeightForWidth());
        toolbarNameComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(toolbarNameComboBox);

        createButton = new QPushButton(QSUiToolBarEditor);
        createButton->setObjectName("createButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy1);
        createButton->setFlat(false);

        horizontalLayout_2->addWidget(createButton);

        renameButton = new QPushButton(QSUiToolBarEditor);
        renameButton->setObjectName("renameButton");
        sizePolicy1.setHeightForWidth(renameButton->sizePolicy().hasHeightForWidth());
        renameButton->setSizePolicy(sizePolicy1);
        renameButton->setFlat(false);

        horizontalLayout_2->addWidget(renameButton);

        removeButton = new QPushButton(QSUiToolBarEditor);
        removeButton->setObjectName("removeButton");
        sizePolicy1.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy1);
        removeButton->setFlat(false);

        horizontalLayout_2->addWidget(removeButton);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        actionsListWidget = new QListWidget(QSUiToolBarEditor);
        actionsListWidget->setObjectName("actionsListWidget");
        actionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        actionsListWidget->setProperty("showDropIndicator", QVariant(false));
        actionsListWidget->setDragEnabled(true);
        actionsListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        actionsListWidget->setDefaultDropAction(Qt::MoveAction);
        actionsListWidget->setAlternatingRowColors(true);
        actionsListWidget->setIconSize(QSize(16, 16));
        actionsListWidget->setMovement(QListView::Free);

        gridLayout_2->addWidget(actionsListWidget, 1, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 137, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        activeActionsListWidget = new QListWidget(QSUiToolBarEditor);
        activeActionsListWidget->setObjectName("activeActionsListWidget");
        activeActionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        activeActionsListWidget->setDragEnabled(true);
        activeActionsListWidget->setDragDropOverwriteMode(false);
        activeActionsListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        activeActionsListWidget->setDefaultDropAction(Qt::MoveAction);
        activeActionsListWidget->setAlternatingRowColors(true);
        activeActionsListWidget->setIconSize(QSize(16, 16));
        activeActionsListWidget->setMovement(QListView::Free);

        gridLayout_2->addWidget(activeActionsListWidget, 1, 2, 3, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        upToolButton = new QToolButton(QSUiToolBarEditor);
        upToolButton->setObjectName("upToolButton");
        sizePolicy1.setHeightForWidth(upToolButton->sizePolicy().hasHeightForWidth());
        upToolButton->setSizePolicy(sizePolicy1);
        upToolButton->setText(QString::fromUtf8("..."));
        upToolButton->setAutoRaise(true);

        gridLayout->addWidget(upToolButton, 0, 0, 1, 2);

        removeToolButton = new QToolButton(QSUiToolBarEditor);
        removeToolButton->setObjectName("removeToolButton");
        removeToolButton->setText(QString::fromUtf8("..."));
        removeToolButton->setAutoRaise(true);

        gridLayout->addWidget(removeToolButton, 1, 0, 1, 1);

        addToolButton = new QToolButton(QSUiToolBarEditor);
        addToolButton->setObjectName("addToolButton");
        addToolButton->setText(QString::fromUtf8("..."));
        addToolButton->setAutoRaise(true);

        gridLayout->addWidget(addToolButton, 1, 1, 1, 1);

        downToolButton = new QToolButton(QSUiToolBarEditor);
        downToolButton->setObjectName("downToolButton");
        sizePolicy1.setHeightForWidth(downToolButton->sizePolicy().hasHeightForWidth());
        downToolButton->setSizePolicy(sizePolicy1);
        downToolButton->setText(QString::fromUtf8("..."));
        downToolButton->setAutoRaise(true);

        gridLayout->addWidget(downToolButton, 2, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 137, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QSUiToolBarEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 3);


        retranslateUi(QSUiToolBarEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QSUiToolBarEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QSUiToolBarEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QSUiToolBarEditor);
    } // setupUi

    void retranslateUi(QDialog *QSUiToolBarEditor)
    {
        QSUiToolBarEditor->setWindowTitle(QCoreApplication::translate("QSUiToolBarEditor", "ToolBar Editor", nullptr));
        label->setText(QCoreApplication::translate("QSUiToolBarEditor", "Toolbar:", nullptr));
        createButton->setText(QCoreApplication::translate("QSUiToolBarEditor", "&Create", nullptr));
        renameButton->setText(QCoreApplication::translate("QSUiToolBarEditor", "Re&name", nullptr));
        removeButton->setText(QCoreApplication::translate("QSUiToolBarEditor", "&Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSUiToolBarEditor: public Ui_QSUiToolBarEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUITOOLBAREDITOR_H
