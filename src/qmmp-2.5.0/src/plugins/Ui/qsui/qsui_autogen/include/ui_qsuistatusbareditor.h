/********************************************************************************
** Form generated from reading UI file 'qsuistatusbareditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUISTATUSBAREDITOR_H
#define UI_QSUISTATUSBAREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_QSUiStatusBarEditor
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *labelsListWidget;
    QSpacerItem *verticalSpacer;
    QListWidget *enabledLabelsListWidget;
    QGridLayout *gridLayout;
    QToolButton *upToolButton;
    QToolButton *removeToolButton;
    QToolButton *addToolButton;
    QToolButton *downToolButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QSUiStatusBarEditor)
    {
        if (QSUiStatusBarEditor->objectName().isEmpty())
            QSUiStatusBarEditor->setObjectName("QSUiStatusBarEditor");
        QSUiStatusBarEditor->resize(578, 419);
        gridLayout_2 = new QGridLayout(QSUiStatusBarEditor);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, -1, 6, 6);
        labelsListWidget = new QListWidget(QSUiStatusBarEditor);
        labelsListWidget->setObjectName("labelsListWidget");
        labelsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        labelsListWidget->setProperty("showDropIndicator", QVariant(false));
        labelsListWidget->setDragEnabled(true);
        labelsListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        labelsListWidget->setDefaultDropAction(Qt::MoveAction);
        labelsListWidget->setAlternatingRowColors(true);
        labelsListWidget->setIconSize(QSize(16, 16));
        labelsListWidget->setMovement(QListView::Free);

        gridLayout_2->addWidget(labelsListWidget, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 137, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        enabledLabelsListWidget = new QListWidget(QSUiStatusBarEditor);
        enabledLabelsListWidget->setObjectName("enabledLabelsListWidget");
        enabledLabelsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        enabledLabelsListWidget->setDragEnabled(true);
        enabledLabelsListWidget->setDragDropOverwriteMode(false);
        enabledLabelsListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        enabledLabelsListWidget->setDefaultDropAction(Qt::MoveAction);
        enabledLabelsListWidget->setAlternatingRowColors(true);
        enabledLabelsListWidget->setIconSize(QSize(16, 16));
        enabledLabelsListWidget->setMovement(QListView::Free);

        gridLayout_2->addWidget(enabledLabelsListWidget, 0, 2, 3, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        upToolButton = new QToolButton(QSUiStatusBarEditor);
        upToolButton->setObjectName("upToolButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(upToolButton->sizePolicy().hasHeightForWidth());
        upToolButton->setSizePolicy(sizePolicy);
        upToolButton->setText(QString::fromUtf8("..."));
        upToolButton->setAutoRaise(true);

        gridLayout->addWidget(upToolButton, 0, 0, 1, 2);

        removeToolButton = new QToolButton(QSUiStatusBarEditor);
        removeToolButton->setObjectName("removeToolButton");
        removeToolButton->setText(QString::fromUtf8("..."));
        removeToolButton->setAutoRaise(true);

        gridLayout->addWidget(removeToolButton, 1, 0, 1, 1);

        addToolButton = new QToolButton(QSUiStatusBarEditor);
        addToolButton->setObjectName("addToolButton");
        addToolButton->setText(QString::fromUtf8("..."));
        addToolButton->setAutoRaise(true);

        gridLayout->addWidget(addToolButton, 1, 1, 1, 1);

        downToolButton = new QToolButton(QSUiStatusBarEditor);
        downToolButton->setObjectName("downToolButton");
        sizePolicy.setHeightForWidth(downToolButton->sizePolicy().hasHeightForWidth());
        downToolButton->setSizePolicy(sizePolicy);
        downToolButton->setText(QString::fromUtf8("..."));
        downToolButton->setAutoRaise(true);

        gridLayout->addWidget(downToolButton, 2, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 137, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QSUiStatusBarEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 3);


        retranslateUi(QSUiStatusBarEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QSUiStatusBarEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QSUiStatusBarEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QSUiStatusBarEditor);
    } // setupUi

    void retranslateUi(QDialog *QSUiStatusBarEditor)
    {
        QSUiStatusBarEditor->setWindowTitle(QCoreApplication::translate("QSUiStatusBarEditor", "StatusBar Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSUiStatusBarEditor: public Ui_QSUiStatusBarEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUISTATUSBAREDITOR_H
