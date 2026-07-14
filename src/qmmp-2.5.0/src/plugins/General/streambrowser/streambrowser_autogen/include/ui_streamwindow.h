/********************************************************************************
** Form generated from reading UI file 'streamwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMWINDOW_H
#define UI_STREAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StreamWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *filterLineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableView *favoritesTableView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTableView *icecastTableView;
    QPushButton *addPushButton;
    QPushButton *updatePushButton;
    QLabel *statusLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *StreamWindow)
    {
        if (StreamWindow->objectName().isEmpty())
            StreamWindow->setObjectName("StreamWindow");
        StreamWindow->resize(551, 427);
        gridLayout = new QGridLayout(StreamWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StreamWindow);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        filterLineEdit = new QLineEdit(StreamWindow);
        filterLineEdit->setObjectName("filterLineEdit");

        horizontalLayout->addWidget(filterLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 4);

        tabWidget = new QTabWidget(StreamWindow);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        favoritesTableView = new QTableView(tab);
        favoritesTableView->setObjectName("favoritesTableView");
        favoritesTableView->setAlternatingRowColors(true);
        favoritesTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        favoritesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        favoritesTableView->setSortingEnabled(true);
        favoritesTableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(favoritesTableView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        icecastTableView = new QTableView(tab_2);
        icecastTableView->setObjectName("icecastTableView");
        icecastTableView->setAlternatingRowColors(true);
        icecastTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        icecastTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        icecastTableView->setSortingEnabled(true);
        icecastTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(icecastTableView);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 4);

        addPushButton = new QPushButton(StreamWindow);
        addPushButton->setObjectName("addPushButton");

        gridLayout->addWidget(addPushButton, 2, 0, 1, 1);

        updatePushButton = new QPushButton(StreamWindow);
        updatePushButton->setObjectName("updatePushButton");

        gridLayout->addWidget(updatePushButton, 2, 1, 1, 1);

        statusLabel = new QLabel(StreamWindow);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setText(QString::fromUtf8("?"));

        gridLayout->addWidget(statusLabel, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(StreamWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);


        retranslateUi(StreamWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StreamWindow, qOverload<>(&QWidget::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StreamWindow);
    } // setupUi

    void retranslateUi(QWidget *StreamWindow)
    {
        StreamWindow->setWindowTitle(QCoreApplication::translate("StreamWindow", "Stream Browser", nullptr));
        label->setText(QCoreApplication::translate("StreamWindow", "Filter:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("StreamWindow", "Favorites", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("StreamWindow", "IceCast", nullptr));
        addPushButton->setText(QCoreApplication::translate("StreamWindow", "Add", nullptr));
        updatePushButton->setText(QCoreApplication::translate("StreamWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamWindow: public Ui_StreamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMWINDOW_H
