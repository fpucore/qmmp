/********************************************************************************
** Form generated from reading UI file 'librarysettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYSETTINGSDIALOG_H
#define UI_LIBRARYSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LibrarySettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QCheckBox *recreateDatabaseCheckBox;
    QCheckBox *showYearCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addDirButton;
    QPushButton *removeDirButton;
    QSpacerItem *horizontalSpacer;
    QListWidget *dirsListWidget;
    QLabel *label;

    void setupUi(QDialog *LibrarySettingsDialog)
    {
        if (LibrarySettingsDialog->objectName().isEmpty())
            LibrarySettingsDialog->setObjectName("LibrarySettingsDialog");
        LibrarySettingsDialog->resize(412, 342);
        gridLayout = new QGridLayout(LibrarySettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        buttonBox = new QDialogButtonBox(LibrarySettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        recreateDatabaseCheckBox = new QCheckBox(LibrarySettingsDialog);
        recreateDatabaseCheckBox->setObjectName("recreateDatabaseCheckBox");

        gridLayout->addWidget(recreateDatabaseCheckBox, 4, 0, 1, 2);

        showYearCheckBox = new QCheckBox(LibrarySettingsDialog);
        showYearCheckBox->setObjectName("showYearCheckBox");

        gridLayout->addWidget(showYearCheckBox, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addDirButton = new QPushButton(LibrarySettingsDialog);
        addDirButton->setObjectName("addDirButton");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        addDirButton->setIcon(icon);

        horizontalLayout->addWidget(addDirButton);

        removeDirButton = new QPushButton(LibrarySettingsDialog);
        removeDirButton->setObjectName("removeDirButton");
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        removeDirButton->setIcon(icon1);

        horizontalLayout->addWidget(removeDirButton);

        horizontalSpacer = new QSpacerItem(264, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        dirsListWidget = new QListWidget(LibrarySettingsDialog);
        dirsListWidget->setObjectName("dirsListWidget");

        gridLayout->addWidget(dirsListWidget, 1, 0, 1, 2);

        label = new QLabel(LibrarySettingsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(LibrarySettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LibrarySettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LibrarySettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LibrarySettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *LibrarySettingsDialog)
    {
        LibrarySettingsDialog->setWindowTitle(QCoreApplication::translate("LibrarySettingsDialog", "Media Library Settings", nullptr));
        recreateDatabaseCheckBox->setText(QCoreApplication::translate("LibrarySettingsDialog", "Recreate database", nullptr));
        showYearCheckBox->setText(QCoreApplication::translate("LibrarySettingsDialog", "Show album year", nullptr));
        addDirButton->setText(QCoreApplication::translate("LibrarySettingsDialog", "Add", nullptr));
        removeDirButton->setText(QCoreApplication::translate("LibrarySettingsDialog", "Remove", nullptr));
        label->setText(QCoreApplication::translate("LibrarySettingsDialog", "List of directories for scanning:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibrarySettingsDialog: public Ui_LibrarySettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYSETTINGSDIALOG_H
