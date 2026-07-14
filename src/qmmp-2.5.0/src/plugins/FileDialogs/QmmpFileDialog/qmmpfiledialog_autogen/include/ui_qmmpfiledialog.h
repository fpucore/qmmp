/********************************************************************************
** Form generated from reading UI file 'qmmpfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMMPFILEDIALOG_H
#define UI_QMMPFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmmpFileDialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *mountPointsListWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *vboxLayout;
    QListView *fileListView;
    QWidget *page_2;
    QVBoxLayout *vboxLayout1;
    QTreeView *treeView;
    QLabel *label;
    QLineEdit *fileNameLineEdit;
    QPushButton *addPushButton;
    QLabel *label_3;
    QComboBox *fileTypeComboBox;
    QPushButton *closePushButton;
    QHBoxLayout *_2;
    QComboBox *lookInComboBox;
    QToolButton *upToolButton;
    QToolButton *listToolButton;
    QToolButton *detailsToolButton;
    QToolButton *closeOnAddToolButton;

    void setupUi(QDialog *QmmpFileDialog)
    {
        if (QmmpFileDialog->objectName().isEmpty())
            QmmpFileDialog->setObjectName("QmmpFileDialog");
        QmmpFileDialog->resize(616, 367);
        gridLayout = new QGridLayout(QmmpFileDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        splitter = new QSplitter(QmmpFileDialog);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        mountPointsListWidget = new QListWidget(splitter);
        mountPointsListWidget->setObjectName("mountPointsListWidget");
        splitter->addWidget(mountPointsListWidget);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        vboxLayout = new QVBoxLayout(page);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        fileListView = new QListView(page);
        fileListView->setObjectName("fileListView");
        fileListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        fileListView->setMovement(QListView::Free);
        fileListView->setProperty("isWrapping", QVariant(true));
        fileListView->setResizeMode(QListView::Adjust);
        fileListView->setLayoutMode(QListView::SinglePass);
        fileListView->setUniformItemSizes(false);
        fileListView->setWordWrap(false);

        vboxLayout->addWidget(fileListView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        vboxLayout1 = new QVBoxLayout(page_2);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(page_2);
        treeView->setObjectName("treeView");
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setRootIsDecorated(false);
        treeView->setItemsExpandable(false);
        treeView->setSortingEnabled(true);
        treeView->setAllColumnsShowFocus(true);

        vboxLayout1->addWidget(treeView);

        stackedWidget->addWidget(page_2);
        splitter->addWidget(stackedWidget);

        gridLayout->addWidget(splitter, 1, 0, 1, 3);

        label = new QLabel(QmmpFileDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        fileNameLineEdit = new QLineEdit(QmmpFileDialog);
        fileNameLineEdit->setObjectName("fileNameLineEdit");

        gridLayout->addWidget(fileNameLineEdit, 2, 1, 1, 1);

        addPushButton = new QPushButton(QmmpFileDialog);
        addPushButton->setObjectName("addPushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addPushButton->sizePolicy().hasHeightForWidth());
        addPushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(addPushButton, 2, 2, 1, 1);

        label_3 = new QLabel(QmmpFileDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        fileTypeComboBox = new QComboBox(QmmpFileDialog);
        fileTypeComboBox->setObjectName("fileTypeComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileTypeComboBox->sizePolicy().hasHeightForWidth());
        fileTypeComboBox->setSizePolicy(sizePolicy2);
        fileTypeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout->addWidget(fileTypeComboBox, 3, 1, 1, 1);

        closePushButton = new QPushButton(QmmpFileDialog);
        closePushButton->setObjectName("closePushButton");
        sizePolicy1.setHeightForWidth(closePushButton->sizePolicy().hasHeightForWidth());
        closePushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(closePushButton, 3, 2, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName("_2");
        lookInComboBox = new QComboBox(QmmpFileDialog);
        lookInComboBox->setObjectName("lookInComboBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lookInComboBox->sizePolicy().hasHeightForWidth());
        lookInComboBox->setSizePolicy(sizePolicy3);
        lookInComboBox->setEditable(true);
        lookInComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        _2->addWidget(lookInComboBox);

        upToolButton = new QToolButton(QmmpFileDialog);
        upToolButton->setObjectName("upToolButton");
        upToolButton->setAutoRaise(true);

        _2->addWidget(upToolButton);

        listToolButton = new QToolButton(QmmpFileDialog);
        listToolButton->setObjectName("listToolButton");
        listToolButton->setCheckable(true);
        listToolButton->setAutoExclusive(true);
        listToolButton->setAutoRaise(true);

        _2->addWidget(listToolButton);

        detailsToolButton = new QToolButton(QmmpFileDialog);
        detailsToolButton->setObjectName("detailsToolButton");
        detailsToolButton->setIconSize(QSize(16, 16));
        detailsToolButton->setCheckable(true);
        detailsToolButton->setAutoExclusive(true);
        detailsToolButton->setAutoRaise(true);

        _2->addWidget(detailsToolButton);

        closeOnAddToolButton = new QToolButton(QmmpFileDialog);
        closeOnAddToolButton->setObjectName("closeOnAddToolButton");
        closeOnAddToolButton->setCheckable(true);
        closeOnAddToolButton->setAutoRaise(true);

        _2->addWidget(closeOnAddToolButton);


        gridLayout->addLayout(_2, 0, 0, 1, 3);


        retranslateUi(QmmpFileDialog);
        QObject::connect(closePushButton, &QPushButton::clicked, QmmpFileDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QmmpFileDialog);
    } // setupUi

    void retranslateUi(QDialog *QmmpFileDialog)
    {
        QmmpFileDialog->setWindowTitle(QCoreApplication::translate("QmmpFileDialog", "Add Files", nullptr));
        label->setText(QCoreApplication::translate("QmmpFileDialog", "File name:", nullptr));
        addPushButton->setText(QCoreApplication::translate("QmmpFileDialog", "Add", nullptr));
        label_3->setText(QCoreApplication::translate("QmmpFileDialog", "Files of type:", nullptr));
        closePushButton->setText(QCoreApplication::translate("QmmpFileDialog", "Close", nullptr));
#if QT_CONFIG(tooltip)
        upToolButton->setToolTip(QCoreApplication::translate("QmmpFileDialog", "Up", nullptr));
#endif // QT_CONFIG(tooltip)
        upToolButton->setText(QCoreApplication::translate("QmmpFileDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        listToolButton->setToolTip(QCoreApplication::translate("QmmpFileDialog", "List view", nullptr));
#endif // QT_CONFIG(tooltip)
        listToolButton->setText(QCoreApplication::translate("QmmpFileDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        detailsToolButton->setToolTip(QCoreApplication::translate("QmmpFileDialog", "Detailed view", nullptr));
#endif // QT_CONFIG(tooltip)
        detailsToolButton->setText(QCoreApplication::translate("QmmpFileDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        closeOnAddToolButton->setToolTip(QCoreApplication::translate("QmmpFileDialog", "Close dialog on add", nullptr));
#endif // QT_CONFIG(tooltip)
        closeOnAddToolButton->setText(QCoreApplication::translate("QmmpFileDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QmmpFileDialog: public Ui_QmmpFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMMPFILEDIALOG_H
