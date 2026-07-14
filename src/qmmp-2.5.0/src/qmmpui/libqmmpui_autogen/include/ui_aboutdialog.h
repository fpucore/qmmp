/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pixmapLabel;
    QTabWidget *tabWidget;
    QWidget *aboutTab;
    QGridLayout *gridLayout_3;
    QTextBrowser *aboutTextBrowser;
    QWidget *authorsTab;
    QGridLayout *gridLayout_4;
    QTextBrowser *authorsTextBrowser;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    QTextBrowser *translatorsTextBrowser;
    QWidget *thanksToTab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *thanksToTextBrowser;
    QWidget *licenseTab;
    QGridLayout *gridLayout_2;
    QTextBrowser *licenseTextBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(523, 532);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 9, 6, 6);
        pixmapLabel = new QLabel(AboutDialog);
        pixmapLabel->setObjectName("pixmapLabel");
        pixmapLabel->setPixmap(QPixmap(QString::fromUtf8(":/logo-qmmp.png")));
        pixmapLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pixmapLabel);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        aboutTab = new QWidget();
        aboutTab->setObjectName("aboutTab");
        gridLayout_3 = new QGridLayout(aboutTab);
        gridLayout_3->setObjectName("gridLayout_3");
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName("aboutTextBrowser");
        aboutTextBrowser->setOpenExternalLinks(true);

        gridLayout_3->addWidget(aboutTextBrowser, 0, 0, 1, 1);

        tabWidget->addTab(aboutTab, QString());
        authorsTab = new QWidget();
        authorsTab->setObjectName("authorsTab");
        gridLayout_4 = new QGridLayout(authorsTab);
        gridLayout_4->setObjectName("gridLayout_4");
        authorsTextBrowser = new QTextBrowser(authorsTab);
        authorsTextBrowser->setObjectName("authorsTextBrowser");
        authorsTextBrowser->setOpenExternalLinks(true);

        gridLayout_4->addWidget(authorsTextBrowser, 0, 0, 1, 1);

        tabWidget->addTab(authorsTab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        vboxLayout = new QVBoxLayout(tab);
        vboxLayout->setObjectName("vboxLayout");
        translatorsTextBrowser = new QTextBrowser(tab);
        translatorsTextBrowser->setObjectName("translatorsTextBrowser");
        translatorsTextBrowser->setOpenExternalLinks(true);

        vboxLayout->addWidget(translatorsTextBrowser);

        tabWidget->addTab(tab, QString());
        thanksToTab = new QWidget();
        thanksToTab->setObjectName("thanksToTab");
        horizontalLayout = new QHBoxLayout(thanksToTab);
        horizontalLayout->setObjectName("horizontalLayout");
        thanksToTextBrowser = new QTextBrowser(thanksToTab);
        thanksToTextBrowser->setObjectName("thanksToTextBrowser");
        thanksToTextBrowser->setOpenExternalLinks(true);

        horizontalLayout->addWidget(thanksToTextBrowser);

        tabWidget->addTab(thanksToTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName("licenseTab");
        gridLayout_2 = new QGridLayout(licenseTab);
        gridLayout_2->setObjectName("gridLayout_2");
        licenseTextBrowser = new QTextBrowser(licenseTab);
        licenseTextBrowser->setObjectName("licenseTextBrowser");
        licenseTextBrowser->setOpenExternalLinks(true);

        gridLayout_2->addWidget(licenseTextBrowser, 0, 0, 1, 1);

        tabWidget->addTab(licenseTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Qmmp", nullptr));
        pixmapLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QCoreApplication::translate("AboutDialog", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(authorsTab), QCoreApplication::translate("AboutDialog", "Authors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutDialog", "Translators", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(thanksToTab), QCoreApplication::translate("AboutDialog", "Thanks To", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(licenseTab), QCoreApplication::translate("AboutDialog", "License Agreement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
