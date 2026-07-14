/********************************************************************************
** Form generated from reading UI file 'crossfadesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROSSFADESETTINGSDIALOG_H
#define UI_CROSSFADESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CrossfadeSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *overlapSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CrossfadeSettingsDialog)
    {
        if (CrossfadeSettingsDialog->objectName().isEmpty())
            CrossfadeSettingsDialog->setObjectName("CrossfadeSettingsDialog");
        CrossfadeSettingsDialog->resize(275, 82);
        gridLayout = new QGridLayout(CrossfadeSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        label_2 = new QLabel(CrossfadeSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        overlapSpinBox = new QSpinBox(CrossfadeSettingsDialog);
        overlapSpinBox->setObjectName("overlapSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(overlapSpinBox->sizePolicy().hasHeightForWidth());
        overlapSpinBox->setSizePolicy(sizePolicy);
        overlapSpinBox->setMinimum(3000);
        overlapSpinBox->setMaximum(12000);
        overlapSpinBox->setSingleStep(500);

        gridLayout->addWidget(overlapSpinBox, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CrossfadeSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(CrossfadeSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CrossfadeSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CrossfadeSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CrossfadeSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CrossfadeSettingsDialog)
    {
        CrossfadeSettingsDialog->setWindowTitle(QCoreApplication::translate("CrossfadeSettingsDialog", "Crossfade Plugin Settings", nullptr));
        label_2->setText(QCoreApplication::translate("CrossfadeSettingsDialog", "Overlap:", nullptr));
        overlapSpinBox->setSuffix(QCoreApplication::translate("CrossfadeSettingsDialog", "ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrossfadeSettingsDialog: public Ui_CrossfadeSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROSSFADESETTINGSDIALOG_H
