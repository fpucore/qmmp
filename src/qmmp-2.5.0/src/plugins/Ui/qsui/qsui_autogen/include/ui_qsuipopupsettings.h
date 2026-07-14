/********************************************************************************
** Form generated from reading UI file 'qsuipopupsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUIPOPUPSETTINGS_H
#define UI_QSUIPOPUPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QSUiPopupSettings
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton;
    QPushButton *insertButton;
    QCheckBox *coverCheckBox;
    QLabel *coverSizeLabel;
    QLabel *label_5;
    QSlider *coverSizeSlider;
    QLabel *label_4;
    QSlider *transparencySlider;
    QLabel *transparencyLabel;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSpinBox *delaySpinBox;

    void setupUi(QDialog *QSUiPopupSettings)
    {
        if (QSUiPopupSettings->objectName().isEmpty())
            QSUiPopupSettings->setObjectName("QSUiPopupSettings");
        QSUiPopupSettings->resize(310, 335);
        gridLayout = new QGridLayout(QSUiPopupSettings);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        groupBox_3 = new QGroupBox(QSUiPopupSettings);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        textEdit = new QPlainTextEdit(groupBox_3);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textEdit, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        resetButton = new QPushButton(groupBox_3);
        resetButton->setObjectName("resetButton");

        gridLayout_4->addWidget(resetButton, 1, 1, 1, 1);

        insertButton = new QPushButton(groupBox_3);
        insertButton->setObjectName("insertButton");

        gridLayout_4->addWidget(insertButton, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 5);

        coverCheckBox = new QCheckBox(QSUiPopupSettings);
        coverCheckBox->setObjectName("coverCheckBox");

        gridLayout->addWidget(coverCheckBox, 1, 0, 1, 5);

        coverSizeLabel = new QLabel(QSUiPopupSettings);
        coverSizeLabel->setObjectName("coverSizeLabel");
        coverSizeLabel->setText(QString::fromUtf8("0"));

        gridLayout->addWidget(coverSizeLabel, 2, 4, 1, 1);

        label_5 = new QLabel(QSUiPopupSettings);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 3);

        coverSizeSlider = new QSlider(QSUiPopupSettings);
        coverSizeSlider->setObjectName("coverSizeSlider");
        coverSizeSlider->setMinimum(32);
        coverSizeSlider->setMaximum(128);
        coverSizeSlider->setSingleStep(1);
        coverSizeSlider->setPageStep(16);
        coverSizeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(coverSizeSlider, 2, 3, 1, 1);

        label_4 = new QLabel(QSUiPopupSettings);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 3);

        transparencySlider = new QSlider(QSUiPopupSettings);
        transparencySlider->setObjectName("transparencySlider");
        transparencySlider->setMaximum(90);
        transparencySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(transparencySlider, 3, 3, 1, 1);

        transparencyLabel = new QLabel(QSUiPopupSettings);
        transparencyLabel->setObjectName("transparencyLabel");
        transparencyLabel->setMinimumSize(QSize(18, 0));
        transparencyLabel->setText(QString::fromUtf8("0"));

        gridLayout->addWidget(transparencyLabel, 3, 4, 1, 1);

        label = new QLabel(QSUiPopupSettings);
        label->setObjectName("label");

        gridLayout->addWidget(label, 5, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QSUiPopupSettings);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 5);

        delaySpinBox = new QSpinBox(QSUiPopupSettings);
        delaySpinBox->setObjectName("delaySpinBox");
        delaySpinBox->setMinimum(20);
        delaySpinBox->setMaximum(7000);
        delaySpinBox->setSingleStep(500);

        gridLayout->addWidget(delaySpinBox, 5, 3, 1, 2);


        retranslateUi(QSUiPopupSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QSUiPopupSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QSUiPopupSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QSUiPopupSettings);
    } // setupUi

    void retranslateUi(QDialog *QSUiPopupSettings)
    {
        QSUiPopupSettings->setWindowTitle(QCoreApplication::translate("QSUiPopupSettings", "Popup Information Settings", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QSUiPopupSettings", "Template", nullptr));
        resetButton->setText(QCoreApplication::translate("QSUiPopupSettings", "Reset", nullptr));
        insertButton->setText(QCoreApplication::translate("QSUiPopupSettings", "Insert", nullptr));
        coverCheckBox->setText(QCoreApplication::translate("QSUiPopupSettings", "Show cover", nullptr));
        label_5->setText(QCoreApplication::translate("QSUiPopupSettings", "Cover size:", nullptr));
        label_4->setText(QCoreApplication::translate("QSUiPopupSettings", "Transparency:", nullptr));
        label->setText(QCoreApplication::translate("QSUiPopupSettings", "Delay:", nullptr));
        delaySpinBox->setSuffix(QCoreApplication::translate("QSUiPopupSettings", "ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSUiPopupSettings: public Ui_QSUiPopupSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUIPOPUPSETTINGS_H
