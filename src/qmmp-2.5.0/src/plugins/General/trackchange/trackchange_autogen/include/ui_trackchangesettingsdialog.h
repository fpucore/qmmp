/********************************************************************************
** Form generated from reading UI file 'trackchangesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKCHANGESETTINGSDIALOG_H
#define UI_TRACKCHANGESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TrackChangeSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *newTrackLineEdit;
    QToolButton *newTrackButton;
    QLabel *label_2;
    QLineEdit *endOfTrackLineEdit;
    QToolButton *endOfTrackButton;
    QLabel *label_3;
    QLineEdit *endOfPlayListLineEdit;
    QToolButton *endOfPlayListButton;
    QLabel *label_4;
    QLineEdit *titleChangeLineEdit;
    QToolButton *titleChangeButton;
    QLabel *label_5;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;
    QLineEdit *appStartupLineEdit;
    QLineEdit *appExitLineEdit;

    void setupUi(QDialog *TrackChangeSettingsDialog)
    {
        if (TrackChangeSettingsDialog->objectName().isEmpty())
            TrackChangeSettingsDialog->setObjectName("TrackChangeSettingsDialog");
        TrackChangeSettingsDialog->resize(484, 395);
        gridLayout = new QGridLayout(TrackChangeSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, -1, 6, 6);
        label = new QLabel(TrackChangeSettingsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        newTrackLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        newTrackLineEdit->setObjectName("newTrackLineEdit");

        gridLayout->addWidget(newTrackLineEdit, 1, 0, 1, 1);

        newTrackButton = new QToolButton(TrackChangeSettingsDialog);
        newTrackButton->setObjectName("newTrackButton");

        gridLayout->addWidget(newTrackButton, 1, 1, 1, 1);

        label_2 = new QLabel(TrackChangeSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        endOfTrackLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        endOfTrackLineEdit->setObjectName("endOfTrackLineEdit");

        gridLayout->addWidget(endOfTrackLineEdit, 3, 0, 1, 1);

        endOfTrackButton = new QToolButton(TrackChangeSettingsDialog);
        endOfTrackButton->setObjectName("endOfTrackButton");

        gridLayout->addWidget(endOfTrackButton, 3, 1, 1, 1);

        label_3 = new QLabel(TrackChangeSettingsDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 2);

        endOfPlayListLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        endOfPlayListLineEdit->setObjectName("endOfPlayListLineEdit");

        gridLayout->addWidget(endOfPlayListLineEdit, 5, 0, 1, 1);

        endOfPlayListButton = new QToolButton(TrackChangeSettingsDialog);
        endOfPlayListButton->setObjectName("endOfPlayListButton");

        gridLayout->addWidget(endOfPlayListButton, 5, 1, 1, 1);

        label_4 = new QLabel(TrackChangeSettingsDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 2);

        titleChangeLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        titleChangeLineEdit->setObjectName("titleChangeLineEdit");

        gridLayout->addWidget(titleChangeLineEdit, 7, 0, 1, 1);

        titleChangeButton = new QToolButton(TrackChangeSettingsDialog);
        titleChangeButton->setObjectName("titleChangeButton");

        gridLayout->addWidget(titleChangeButton, 7, 1, 1, 1);

        label_5 = new QLabel(TrackChangeSettingsDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_6 = new QLabel(TrackChangeSettingsDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TrackChangeSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 2);

        appStartupLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        appStartupLineEdit->setObjectName("appStartupLineEdit");

        gridLayout->addWidget(appStartupLineEdit, 9, 0, 1, 2);

        appExitLineEdit = new QLineEdit(TrackChangeSettingsDialog);
        appExitLineEdit->setObjectName("appExitLineEdit");

        gridLayout->addWidget(appExitLineEdit, 11, 0, 1, 2);


        retranslateUi(TrackChangeSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TrackChangeSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TrackChangeSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TrackChangeSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackChangeSettingsDialog)
    {
        TrackChangeSettingsDialog->setWindowTitle(QCoreApplication::translate("TrackChangeSettingsDialog", "Track Change Plugin Settings", nullptr));
        label->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run when Qmmp starts new track", nullptr));
        newTrackButton->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run toward to end of a track", nullptr));
        endOfTrackButton->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run when Qmmp reaches the end of the playlist", nullptr));
        endOfPlayListButton->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "...", nullptr));
        label_4->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run when title changes (i.e. network streams title)", nullptr));
        titleChangeButton->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run on application startup:", nullptr));
        label_6->setText(QCoreApplication::translate("TrackChangeSettingsDialog", "Command to run on application exit:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackChangeSettingsDialog: public Ui_TrackChangeSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKCHANGESETTINGSDIALOG_H
