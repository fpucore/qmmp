/********************************************************************************
** Form generated from reading UI file 'detailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSDIALOG_H
#define UI_DETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *pathEdit;
    QToolButton *directoryButton;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QToolButton *prevButton;
    QToolButton *nextButton;
    QLabel *pageLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DetailsDialog)
    {
        if (DetailsDialog->objectName().isEmpty())
            DetailsDialog->setObjectName("DetailsDialog");
        DetailsDialog->resize(540, 435);
        gridLayout = new QGridLayout(DetailsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pathEdit = new QLineEdit(DetailsDialog);
        pathEdit->setObjectName("pathEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathEdit->sizePolicy().hasHeightForWidth());
        pathEdit->setSizePolicy(sizePolicy);
        pathEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(pathEdit);

        directoryButton = new QToolButton(DetailsDialog);
        directoryButton->setObjectName("directoryButton");
        directoryButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(directoryButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 4);

        tabWidget = new QTabWidget(DetailsDialog);
        tabWidget->setObjectName("tabWidget");
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout = new QVBoxLayout(tab_5);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(tab_5);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);
        textEdit->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\"><br /></p></body></html>"));

        verticalLayout->addWidget(textEdit);

        tabWidget->addTab(tab_5, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 4);

        prevButton = new QToolButton(DetailsDialog);
        prevButton->setObjectName("prevButton");
        prevButton->setText(QString::fromUtf8("<"));
        prevButton->setAutoRaise(true);

        gridLayout->addWidget(prevButton, 2, 0, 1, 1);

        nextButton = new QToolButton(DetailsDialog);
        nextButton->setObjectName("nextButton");
        nextButton->setText(QString::fromUtf8(">"));
        nextButton->setAutoRaise(true);

        gridLayout->addWidget(nextButton, 2, 1, 1, 1);

        pageLabel = new QLabel(DetailsDialog);
        pageLabel->setObjectName("pageLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageLabel->sizePolicy().hasHeightForWidth());
        pageLabel->setSizePolicy(sizePolicy1);
        pageLabel->setText(QString::fromUtf8("-/-"));

        gridLayout->addWidget(pageLabel, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(DetailsDialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);


        retranslateUi(DetailsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailsDialog)
    {
        DetailsDialog->setWindowTitle(QCoreApplication::translate("DetailsDialog", "Details", nullptr));
#if QT_CONFIG(tooltip)
        directoryButton->setToolTip(QCoreApplication::translate("DetailsDialog", "Open the directory containing this file", nullptr));
#endif // QT_CONFIG(tooltip)
        directoryButton->setText(QCoreApplication::translate("DetailsDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        textEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("DetailsDialog", "Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsDialog: public Ui_DetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSDIALOG_H
