/********************************************************************************
** Form generated from reading UI file 'fileopssettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEOPSSETTINGSDIALOG_H
#define UI_FILEOPSSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FileOpsSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *destinationLabel;
    QLineEdit *destinationEdit;
    QToolButton *destButton;
    QLabel *patternLabel;
    QLineEdit *patternEdit;
    QToolButton *patternButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FileOpsSettingsDialog)
    {
        if (FileOpsSettingsDialog->objectName().isEmpty())
            FileOpsSettingsDialog->setObjectName("FileOpsSettingsDialog");
        FileOpsSettingsDialog->resize(764, 503);
        gridLayout_2 = new QGridLayout(FileOpsSettingsDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, 9, 6, 6);
        tableWidget = new QTableWidget(FileOpsSettingsDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newButton = new QPushButton(FileOpsSettingsDialog);
        newButton->setObjectName("newButton");
        newButton->setMinimumSize(QSize(26, 0));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        newButton->setIcon(icon);

        horizontalLayout->addWidget(newButton);

        deleteButton = new QPushButton(FileOpsSettingsDialog);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setMinimumSize(QSize(26, 0));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        deleteButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(178, 23, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        destinationLabel = new QLabel(FileOpsSettingsDialog);
        destinationLabel->setObjectName("destinationLabel");

        gridLayout->addWidget(destinationLabel, 0, 0, 1, 1);

        destinationEdit = new QLineEdit(FileOpsSettingsDialog);
        destinationEdit->setObjectName("destinationEdit");

        gridLayout->addWidget(destinationEdit, 0, 1, 1, 1);

        destButton = new QToolButton(FileOpsSettingsDialog);
        destButton->setObjectName("destButton");

        gridLayout->addWidget(destButton, 0, 2, 1, 1);

        patternLabel = new QLabel(FileOpsSettingsDialog);
        patternLabel->setObjectName("patternLabel");

        gridLayout->addWidget(patternLabel, 1, 0, 1, 1);

        patternEdit = new QLineEdit(FileOpsSettingsDialog);
        patternEdit->setObjectName("patternEdit");

        gridLayout->addWidget(patternEdit, 1, 1, 1, 1);

        patternButton = new QToolButton(FileOpsSettingsDialog);
        patternButton->setObjectName("patternButton");

        gridLayout->addWidget(patternButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(FileOpsSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(FileOpsSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FileOpsSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FileOpsSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FileOpsSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *FileOpsSettingsDialog)
    {
        FileOpsSettingsDialog->setWindowTitle(QCoreApplication::translate("FileOpsSettingsDialog", "File Operations Settings", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Enabled", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Operation", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Menu text", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Shortcut", nullptr));
        newButton->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Remove", nullptr));
        destinationLabel->setText(QCoreApplication::translate("FileOpsSettingsDialog", "Destination:", nullptr));
        destButton->setText(QCoreApplication::translate("FileOpsSettingsDialog", "...", nullptr));
        patternLabel->setText(QCoreApplication::translate("FileOpsSettingsDialog", "File name pattern:", nullptr));
        patternButton->setText(QCoreApplication::translate("FileOpsSettingsDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileOpsSettingsDialog: public Ui_FileOpsSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPSSETTINGSDIALOG_H
