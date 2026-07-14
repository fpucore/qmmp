/********************************************************************************
** Form generated from reading UI file 'skinnedplaylistbrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINNEDPLAYLISTBROWSER_H
#define UI_SKINNEDPLAYLISTBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SkinnedPlayListBrowser
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *filterLineEdit;
    QPushButton *newButton;
    QPushButton *deleteButton;
    QToolButton *downButton;
    QToolButton *upButton;
    QDialogButtonBox *buttonBox;
    QListView *listView;

    void setupUi(QDialog *SkinnedPlayListBrowser)
    {
        if (SkinnedPlayListBrowser->objectName().isEmpty())
            SkinnedPlayListBrowser->setObjectName("SkinnedPlayListBrowser");
        SkinnedPlayListBrowser->resize(402, 298);
        gridLayout = new QGridLayout(SkinnedPlayListBrowser);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(SkinnedPlayListBrowser);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        filterLineEdit = new QLineEdit(SkinnedPlayListBrowser);
        filterLineEdit->setObjectName("filterLineEdit");
        filterLineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(filterLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        newButton = new QPushButton(SkinnedPlayListBrowser);
        newButton->setObjectName("newButton");

        gridLayout->addWidget(newButton, 2, 0, 1, 1);

        deleteButton = new QPushButton(SkinnedPlayListBrowser);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 2, 1, 1, 1);

        downButton = new QToolButton(SkinnedPlayListBrowser);
        downButton->setObjectName("downButton");
        downButton->setAutoRaise(true);

        gridLayout->addWidget(downButton, 2, 2, 1, 1);

        upButton = new QToolButton(SkinnedPlayListBrowser);
        upButton->setObjectName("upButton");
        upButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        upButton->setAutoRaise(true);

        gridLayout->addWidget(upButton, 2, 3, 1, 1);

        buttonBox = new QDialogButtonBox(SkinnedPlayListBrowser);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 4, 1, 1);

        listView = new QListView(SkinnedPlayListBrowser);
        listView->setObjectName("listView");
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setSelectionMode(QAbstractItemView::SingleSelection);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);
        listView->setUniformItemSizes(true);

        gridLayout->addWidget(listView, 1, 0, 1, 5);

        QWidget::setTabOrder(filterLineEdit, listView);
        QWidget::setTabOrder(listView, newButton);
        QWidget::setTabOrder(newButton, deleteButton);
        QWidget::setTabOrder(deleteButton, downButton);
        QWidget::setTabOrder(downButton, upButton);
        QWidget::setTabOrder(upButton, buttonBox);

        retranslateUi(SkinnedPlayListBrowser);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SkinnedPlayListBrowser, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SkinnedPlayListBrowser, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SkinnedPlayListBrowser);
    } // setupUi

    void retranslateUi(QDialog *SkinnedPlayListBrowser)
    {
        SkinnedPlayListBrowser->setWindowTitle(QCoreApplication::translate("SkinnedPlayListBrowser", "Playlist Browser", nullptr));
        label->setText(QCoreApplication::translate("SkinnedPlayListBrowser", "Filter:", nullptr));
        newButton->setText(QCoreApplication::translate("SkinnedPlayListBrowser", "New", nullptr));
        deleteButton->setText(QCoreApplication::translate("SkinnedPlayListBrowser", "Delete", nullptr));
        downButton->setText(QCoreApplication::translate("SkinnedPlayListBrowser", "...", nullptr));
        upButton->setText(QCoreApplication::translate("SkinnedPlayListBrowser", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkinnedPlayListBrowser: public Ui_SkinnedPlayListBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINNEDPLAYLISTBROWSER_H
