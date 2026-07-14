/********************************************************************************
** Form generated from reading UI file 'librarywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWIDGET_H
#define UI_LIBRARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *filterLineEdit;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *LibraryWidget)
    {
        if (LibraryWidget->objectName().isEmpty())
            LibraryWidget->setObjectName("LibraryWidget");
        LibraryWidget->resize(423, 394);
        verticalLayout = new QVBoxLayout(LibraryWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        filterLineEdit = new QLineEdit(LibraryWidget);
        filterLineEdit->setObjectName("filterLineEdit");
        filterLineEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(filterLineEdit);

        treeView = new QTreeView(LibraryWidget);
        treeView->setObjectName("treeView");
        treeView->setDragEnabled(true);
        treeView->setDragDropMode(QAbstractItemView::DragOnly);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->header()->setVisible(false);

        verticalLayout->addWidget(treeView);

        buttonBox = new QDialogButtonBox(LibraryWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LibraryWidget);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LibraryWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(LibraryWidget);
    } // setupUi

    void retranslateUi(QWidget *LibraryWidget)
    {
        LibraryWidget->setWindowTitle(QCoreApplication::translate("LibraryWidget", "Media Library", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibraryWidget: public Ui_LibraryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWIDGET_H
