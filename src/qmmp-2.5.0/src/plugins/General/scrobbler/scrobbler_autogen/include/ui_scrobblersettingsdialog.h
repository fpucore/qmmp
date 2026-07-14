/********************************************************************************
** Form generated from reading UI file 'scrobblersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROBBLERSETTINGSDIALOG_H
#define UI_SCROBBLERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScrobblerSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *lastfmGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *sessionLineEdit_lastfm;
    QPushButton *checkButton_lastfm;
    QSpacerItem *horizontalSpacer;
    QPushButton *newSessionButton_lastfm;
    QGroupBox *librefmGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *newSessionButton_librefm;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *sessionLineEdit_librefm;
    QPushButton *checkButton_librefm;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScrobblerSettingsDialog)
    {
        if (ScrobblerSettingsDialog->objectName().isEmpty())
            ScrobblerSettingsDialog->setObjectName("ScrobblerSettingsDialog");
        ScrobblerSettingsDialog->resize(376, 264);
        verticalLayout = new QVBoxLayout(ScrobblerSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        lastfmGroupBox = new QGroupBox(ScrobblerSettingsDialog);
        lastfmGroupBox->setObjectName("lastfmGroupBox");
        lastfmGroupBox->setCheckable(true);
        gridLayout = new QGridLayout(lastfmGroupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(lastfmGroupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        sessionLineEdit_lastfm = new QLineEdit(lastfmGroupBox);
        sessionLineEdit_lastfm->setObjectName("sessionLineEdit_lastfm");

        horizontalLayout_2->addWidget(sessionLineEdit_lastfm);

        checkButton_lastfm = new QPushButton(lastfmGroupBox);
        checkButton_lastfm->setObjectName("checkButton_lastfm");

        horizontalLayout_2->addWidget(checkButton_lastfm);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(162, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        newSessionButton_lastfm = new QPushButton(lastfmGroupBox);
        newSessionButton_lastfm->setObjectName("newSessionButton_lastfm");

        gridLayout->addWidget(newSessionButton_lastfm, 1, 1, 1, 1);


        verticalLayout->addWidget(lastfmGroupBox);

        librefmGroupBox = new QGroupBox(ScrobblerSettingsDialog);
        librefmGroupBox->setObjectName("librefmGroupBox");
        librefmGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(librefmGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_2 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        newSessionButton_librefm = new QPushButton(librefmGroupBox);
        newSessionButton_librefm->setObjectName("newSessionButton_librefm");

        gridLayout_2->addWidget(newSessionButton_librefm, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(librefmGroupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        sessionLineEdit_librefm = new QLineEdit(librefmGroupBox);
        sessionLineEdit_librefm->setObjectName("sessionLineEdit_librefm");

        horizontalLayout_3->addWidget(sessionLineEdit_librefm);

        checkButton_librefm = new QPushButton(librefmGroupBox);
        checkButton_librefm->setObjectName("checkButton_librefm");
        checkButton_librefm->setEnabled(false);

        horizontalLayout_3->addWidget(checkButton_librefm);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);


        verticalLayout->addWidget(librefmGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ScrobblerSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ScrobblerSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ScrobblerSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ScrobblerSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ScrobblerSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ScrobblerSettingsDialog)
    {
        ScrobblerSettingsDialog->setWindowTitle(QCoreApplication::translate("ScrobblerSettingsDialog", "Scrobbler Plugin Settings", nullptr));
        lastfmGroupBox->setTitle(QCoreApplication::translate("ScrobblerSettingsDialog", "Last.fm", nullptr));
        label->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Session:", nullptr));
        checkButton_lastfm->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Check", nullptr));
        newSessionButton_lastfm->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Register new session", nullptr));
        librefmGroupBox->setTitle(QCoreApplication::translate("ScrobblerSettingsDialog", "Libre.fm", nullptr));
        newSessionButton_librefm->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Register new session", nullptr));
        label_2->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Session:", nullptr));
        checkButton_librefm->setText(QCoreApplication::translate("ScrobblerSettingsDialog", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScrobblerSettingsDialog: public Ui_ScrobblerSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROBBLERSETTINGSDIALOG_H
