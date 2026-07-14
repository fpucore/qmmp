/********************************************************************************
** Form generated from reading UI file 'analyzersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZERSETTINGSDIALOG_H
#define UI_ANALYZERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "analyzercolorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AnalyzerSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *cellWidthSpinBox;
    QLabel *label_2;
    QSpinBox *cellHeightSpinBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    AnalyzerColorWidget *peakColorWidget;
    QLabel *label_6;
    AnalyzerColorWidget *colorWidget1;
    QLabel *label_5;
    AnalyzerColorWidget *bgColorWidget;
    QLabel *label_7;
    AnalyzerColorWidget *colorWidget2;
    QSpacerItem *spacerItem;
    QLabel *label_8;
    AnalyzerColorWidget *colorWidget3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AnalyzerSettingsDialog)
    {
        if (AnalyzerSettingsDialog->objectName().isEmpty())
            AnalyzerSettingsDialog->setObjectName("AnalyzerSettingsDialog");
        AnalyzerSettingsDialog->resize(312, 234);
        verticalLayout = new QVBoxLayout(AnalyzerSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        groupBox_2 = new QGroupBox(AnalyzerSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cellWidthSpinBox = new QSpinBox(groupBox_2);
        cellWidthSpinBox->setObjectName("cellWidthSpinBox");
        cellWidthSpinBox->setMinimum(2);
        cellWidthSpinBox->setMaximum(50);

        horizontalLayout->addWidget(cellWidthSpinBox);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setText(QString::fromUtf8("X"));

        horizontalLayout->addWidget(label_2);

        cellHeightSpinBox = new QSpinBox(groupBox_2);
        cellHeightSpinBox->setObjectName("cellHeightSpinBox");
        cellHeightSpinBox->setMinimum(2);
        cellHeightSpinBox->setMaximum(50);

        horizontalLayout->addWidget(cellHeightSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(AnalyzerSettingsDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        peakColorWidget = new AnalyzerColorWidget(groupBox);
        peakColorWidget->setObjectName("peakColorWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(peakColorWidget->sizePolicy().hasHeightForWidth());
        peakColorWidget->setSizePolicy(sizePolicy2);
        peakColorWidget->setMinimumSize(QSize(20, 20));
        peakColorWidget->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(peakColorWidget, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 3, 1, 1);

        colorWidget1 = new AnalyzerColorWidget(groupBox);
        colorWidget1->setObjectName("colorWidget1");
        sizePolicy2.setHeightForWidth(colorWidget1->sizePolicy().hasHeightForWidth());
        colorWidget1->setSizePolicy(sizePolicy2);
        colorWidget1->setMinimumSize(QSize(20, 20));
        colorWidget1->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(colorWidget1, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        bgColorWidget = new AnalyzerColorWidget(groupBox);
        bgColorWidget->setObjectName("bgColorWidget");
        sizePolicy2.setHeightForWidth(bgColorWidget->sizePolicy().hasHeightForWidth());
        bgColorWidget->setSizePolicy(sizePolicy2);
        bgColorWidget->setMinimumSize(QSize(20, 20));
        bgColorWidget->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(bgColorWidget, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        colorWidget2 = new AnalyzerColorWidget(groupBox);
        colorWidget2->setObjectName("colorWidget2");
        sizePolicy2.setHeightForWidth(colorWidget2->sizePolicy().hasHeightForWidth());
        colorWidget2->setSizePolicy(sizePolicy2);
        colorWidget2->setMinimumSize(QSize(20, 20));
        colorWidget2->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(colorWidget2, 1, 4, 1, 1);

        spacerItem = new QSpacerItem(111, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        colorWidget3 = new AnalyzerColorWidget(groupBox);
        colorWidget3->setObjectName("colorWidget3");
        sizePolicy2.setHeightForWidth(colorWidget3->sizePolicy().hasHeightForWidth());
        colorWidget3->setSizePolicy(sizePolicy2);
        colorWidget3->setMinimumSize(QSize(20, 20));
        colorWidget3->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(colorWidget3, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 5, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AnalyzerSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AnalyzerSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnalyzerSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnalyzerSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnalyzerSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalyzerSettingsDialog)
    {
        AnalyzerSettingsDialog->setWindowTitle(QCoreApplication::translate("AnalyzerSettingsDialog", "Analyzer Plugin Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AnalyzerSettingsDialog", "General", nullptr));
        label->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Cells size:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AnalyzerSettingsDialog", "Colors", nullptr));
        label_4->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Peaks:", nullptr));
        label_6->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Analyzer #1:", nullptr));
        label_5->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Background:", nullptr));
        label_7->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Analyzer #2:", nullptr));
        label_8->setText(QCoreApplication::translate("AnalyzerSettingsDialog", "Analyzer #3:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyzerSettingsDialog: public Ui_AnalyzerSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZERSETTINGSDIALOG_H
