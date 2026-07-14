/********************************************************************************
** Form generated from reading UI file 'httpsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTPSETTINGSDIALOG_H
#define UI_HTTPSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HttpSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_17_2_2;
    QSpinBox *bufferSizeSpinBox;
    QCheckBox *userAgentCheckBox;
    QLabel *label_3;
    QLineEdit *userAgentLineEdit;
    QLabel *label;
    QSpinBox *bufferDurationSpinBox;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QCheckBox *autoCharsetCheckBox;
    QLabel *label_2;
    QComboBox *encaAnalyserComboBox;
    QLabel *label_15_4;
    QComboBox *icyEncodingComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HttpSettingsDialog)
    {
        if (HttpSettingsDialog->objectName().isEmpty())
            HttpSettingsDialog->setObjectName("HttpSettingsDialog");
        HttpSettingsDialog->resize(415, 325);
        verticalLayout = new QVBoxLayout(HttpSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_17_2_2 = new QLabel(HttpSettingsDialog);
        label_17_2_2->setObjectName("label_17_2_2");
        label_17_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_17_2_2);

        bufferSizeSpinBox = new QSpinBox(HttpSettingsDialog);
        bufferSizeSpinBox->setObjectName("bufferSizeSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bufferSizeSpinBox->sizePolicy().hasHeightForWidth());
        bufferSizeSpinBox->setSizePolicy(sizePolicy);
        bufferSizeSpinBox->setMinimum(20);
        bufferSizeSpinBox->setMaximum(10000);
        bufferSizeSpinBox->setSingleStep(20);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, bufferSizeSpinBox);

        userAgentCheckBox = new QCheckBox(HttpSettingsDialog);
        userAgentCheckBox->setObjectName("userAgentCheckBox");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, userAgentCheckBox);

        label_3 = new QLabel(HttpSettingsDialog);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_3);

        userAgentLineEdit = new QLineEdit(HttpSettingsDialog);
        userAgentLineEdit->setObjectName("userAgentLineEdit");
        userAgentLineEdit->setEnabled(false);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, userAgentLineEdit);

        label = new QLabel(HttpSettingsDialog);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        bufferDurationSpinBox = new QSpinBox(HttpSettingsDialog);
        bufferDurationSpinBox->setObjectName("bufferDurationSpinBox");
        bufferDurationSpinBox->setMinimum(500);
        bufferDurationSpinBox->setMaximum(30000);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, bufferDurationSpinBox);


        verticalLayout->addLayout(formLayout_2);

        groupBox = new QGroupBox(HttpSettingsDialog);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        autoCharsetCheckBox = new QCheckBox(groupBox);
        autoCharsetCheckBox->setObjectName("autoCharsetCheckBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, autoCharsetCheckBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        encaAnalyserComboBox = new QComboBox(groupBox);
        encaAnalyserComboBox->setObjectName("encaAnalyserComboBox");
        encaAnalyserComboBox->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, encaAnalyserComboBox);

        label_15_4 = new QLabel(groupBox);
        label_15_4->setObjectName("label_15_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_15_4->sizePolicy().hasHeightForWidth());
        label_15_4->setSizePolicy(sizePolicy1);
        label_15_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_15_4);

        icyEncodingComboBox = new QComboBox(groupBox);
        icyEncodingComboBox->setObjectName("icyEncodingComboBox");
        sizePolicy.setHeightForWidth(icyEncodingComboBox->sizePolicy().hasHeightForWidth());
        icyEncodingComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, icyEncodingComboBox);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(HttpSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HttpSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HttpSettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HttpSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(autoCharsetCheckBox, &QCheckBox::toggled, encaAnalyserComboBox, &QComboBox::setEnabled);
        QObject::connect(userAgentCheckBox, &QCheckBox::toggled, userAgentLineEdit, &QLineEdit::setEnabled);

        QMetaObject::connectSlotsByName(HttpSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *HttpSettingsDialog)
    {
        HttpSettingsDialog->setWindowTitle(QCoreApplication::translate("HttpSettingsDialog", "HTTP Plugin Settings", nullptr));
        label_17_2_2->setText(QCoreApplication::translate("HttpSettingsDialog", "Default buffer size:", nullptr));
#if QT_CONFIG(tooltip)
        bufferSizeSpinBox->setToolTip(QCoreApplication::translate("HttpSettingsDialog", "This value is used if information about bitrate is <b>not</b> available.", nullptr));
#endif // QT_CONFIG(tooltip)
        bufferSizeSpinBox->setSuffix(QCoreApplication::translate("HttpSettingsDialog", "KiB", nullptr));
        userAgentCheckBox->setText(QCoreApplication::translate("HttpSettingsDialog", "Change User Agent", nullptr));
        label_3->setText(QCoreApplication::translate("HttpSettingsDialog", "User Agent:", nullptr));
        label->setText(QCoreApplication::translate("HttpSettingsDialog", "Buffer duration:", nullptr));
#if QT_CONFIG(tooltip)
        bufferDurationSpinBox->setToolTip(QCoreApplication::translate("HttpSettingsDialog", "This value is used if information about bitrate is available.", nullptr));
#endif // QT_CONFIG(tooltip)
        bufferDurationSpinBox->setSuffix(QCoreApplication::translate("HttpSettingsDialog", "ms", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HttpSettingsDialog", "Metadata encoding", nullptr));
        autoCharsetCheckBox->setText(QCoreApplication::translate("HttpSettingsDialog", "Automatic charset detection", nullptr));
        label_2->setText(QCoreApplication::translate("HttpSettingsDialog", "Language:", nullptr));
        label_15_4->setText(QCoreApplication::translate("HttpSettingsDialog", "Default encoding:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HttpSettingsDialog: public Ui_HttpSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTPSETTINGSDIALOG_H
