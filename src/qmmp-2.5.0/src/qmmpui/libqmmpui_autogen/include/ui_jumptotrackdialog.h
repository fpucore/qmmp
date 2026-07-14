/********************************************************************************
** Form generated from reading UI file 'jumptotrackdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUMPTOTRACKDIALOG_H
#define UI_JUMPTOTRACKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JumpToTrackDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *filterLineEdit;
    QListView *songsListView;
    QHBoxLayout *horizontalLayout;
    QPushButton *queuePushButton;
    QPushButton *jumpToPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JumpToTrackDialog)
    {
        if (JumpToTrackDialog->objectName().isEmpty())
            JumpToTrackDialog->setObjectName("JumpToTrackDialog");
        JumpToTrackDialog->resize(487, 315);
        verticalLayout = new QVBoxLayout(JumpToTrackDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        filterLineEdit = new QLineEdit(JumpToTrackDialog);
        filterLineEdit->setObjectName("filterLineEdit");
        filterLineEdit->setClearButtonEnabled(true);

        hboxLayout->addWidget(filterLineEdit);


        verticalLayout->addLayout(hboxLayout);

        songsListView = new QListView(JumpToTrackDialog);
        songsListView->setObjectName("songsListView");
        songsListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        songsListView->setAlternatingRowColors(true);
        songsListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        songsListView->setUniformItemSizes(true);

        verticalLayout->addWidget(songsListView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        queuePushButton = new QPushButton(JumpToTrackDialog);
        queuePushButton->setObjectName("queuePushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(queuePushButton->sizePolicy().hasHeightForWidth());
        queuePushButton->setSizePolicy(sizePolicy);
        queuePushButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("go-top");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        queuePushButton->setIcon(icon);

        horizontalLayout->addWidget(queuePushButton);

        jumpToPushButton = new QPushButton(JumpToTrackDialog);
        jumpToPushButton->setObjectName("jumpToPushButton");
        sizePolicy.setHeightForWidth(jumpToPushButton->sizePolicy().hasHeightForWidth());
        jumpToPushButton->setSizePolicy(sizePolicy);
        jumpToPushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(jumpToPushButton);

        buttonBox = new QDialogButtonBox(JumpToTrackDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(filterLineEdit, songsListView);
        QWidget::setTabOrder(songsListView, queuePushButton);
        QWidget::setTabOrder(queuePushButton, jumpToPushButton);
        QWidget::setTabOrder(jumpToPushButton, buttonBox);

        retranslateUi(JumpToTrackDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, JumpToTrackDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(JumpToTrackDialog);
    } // setupUi

    void retranslateUi(QDialog *JumpToTrackDialog)
    {
        JumpToTrackDialog->setWindowTitle(QCoreApplication::translate("JumpToTrackDialog", "Jump To Track", nullptr));
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("JumpToTrackDialog", "Filter", nullptr));
        queuePushButton->setText(QCoreApplication::translate("JumpToTrackDialog", "Queue", nullptr));
        jumpToPushButton->setText(QCoreApplication::translate("JumpToTrackDialog", "Jump To", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JumpToTrackDialog: public Ui_JumpToTrackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUMPTOTRACKDIALOG_H
