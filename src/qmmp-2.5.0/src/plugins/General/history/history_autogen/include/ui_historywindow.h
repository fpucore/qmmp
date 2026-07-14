/********************************************************************************
** Form generated from reading UI file 'historywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYWINDOW_H
#define UI_HISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryWindow
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *fromDateEdit;
    QLabel *label_2;
    QDateEdit *toDateEdit;
    QPushButton *lastWeekButton;
    QPushButton *lastMonthButton;
    QPushButton *executeButton;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTreeWidget *historyTreeWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *distributionTreeWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *topSongsTreeWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *topArtistsTreeWidget;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    QTreeWidget *topGenresTreeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *HistoryWindow)
    {
        if (HistoryWindow->objectName().isEmpty())
            HistoryWindow->setObjectName("HistoryWindow");
        HistoryWindow->resize(777, 566);
        gridLayout = new QGridLayout(HistoryWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        groupBox = new QGroupBox(HistoryWindow);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fromDateEdit = new QDateEdit(groupBox);
        fromDateEdit->setObjectName("fromDateEdit");
        fromDateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(fromDateEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        toDateEdit = new QDateEdit(groupBox);
        toDateEdit->setObjectName("toDateEdit");
        toDateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(toDateEdit);

        lastWeekButton = new QPushButton(groupBox);
        lastWeekButton->setObjectName("lastWeekButton");

        horizontalLayout->addWidget(lastWeekButton);

        lastMonthButton = new QPushButton(groupBox);
        lastMonthButton->setObjectName("lastMonthButton");

        horizontalLayout->addWidget(lastMonthButton);

        executeButton = new QPushButton(groupBox);
        executeButton->setObjectName("executeButton");

        horizontalLayout->addWidget(executeButton);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(234, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        tabWidget = new QTabWidget(HistoryWindow);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        historyTreeWidget = new QTreeWidget(tab);
        historyTreeWidget->setObjectName("historyTreeWidget");
        historyTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        historyTreeWidget->setProperty("showDropIndicator", QVariant(false));
        historyTreeWidget->setAlternatingRowColors(true);
        historyTreeWidget->setUniformRowHeights(true);

        verticalLayout->addWidget(historyTreeWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        distributionTreeWidget = new QTreeWidget(tab_2);
        distributionTreeWidget->setObjectName("distributionTreeWidget");
        distributionTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        distributionTreeWidget->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(distributionTreeWidget);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        topSongsTreeWidget = new QTreeWidget(tab_3);
        topSongsTreeWidget->setObjectName("topSongsTreeWidget");
        topSongsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        topSongsTreeWidget->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(topSongsTreeWidget);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        topArtistsTreeWidget = new QTreeWidget(tab_4);
        topArtistsTreeWidget->setObjectName("topArtistsTreeWidget");
        topArtistsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        topArtistsTreeWidget->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(topArtistsTreeWidget);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        topGenresTreeWidget = new QTreeWidget(tab_5);
        topGenresTreeWidget->setObjectName("topGenresTreeWidget");
        topGenresTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        topGenresTreeWidget->setAlternatingRowColors(true);

        verticalLayout_5->addWidget(topGenresTreeWidget);

        tabWidget->addTab(tab_5, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(HistoryWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(HistoryWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HistoryWindow, qOverload<>(&QWidget::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HistoryWindow);
    } // setupUi

    void retranslateUi(QWidget *HistoryWindow)
    {
        HistoryWindow->setWindowTitle(QCoreApplication::translate("HistoryWindow", "History", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HistoryWindow", "Time Range", nullptr));
        label->setText(QCoreApplication::translate("HistoryWindow", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("HistoryWindow", "To:", nullptr));
        lastWeekButton->setText(QCoreApplication::translate("HistoryWindow", "Last week", nullptr));
        lastMonthButton->setText(QCoreApplication::translate("HistoryWindow", "Last month", nullptr));
        executeButton->setText(QCoreApplication::translate("HistoryWindow", "Execute", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = historyTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("HistoryWindow", "Song", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("HistoryWindow", "Time", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HistoryWindow", "History", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = distributionTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("HistoryWindow", "Play counts", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("HistoryWindow", "Day", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HistoryWindow", "Distribution", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = topSongsTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("HistoryWindow", "Play counts", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("HistoryWindow", "Song", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("HistoryWindow", "Top Songs", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = topArtistsTreeWidget->headerItem();
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("HistoryWindow", "Play counts", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("HistoryWindow", "Artist", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("HistoryWindow", "Top Artists", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = topGenresTreeWidget->headerItem();
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("HistoryWindow", "Play counts", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("HistoryWindow", "Genre", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("HistoryWindow", "Top Genres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryWindow: public Ui_HistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYWINDOW_H
