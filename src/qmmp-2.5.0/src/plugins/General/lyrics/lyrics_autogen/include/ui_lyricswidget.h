/********************************************************************************
** Form generated from reading UI file 'lyricswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICSWIDGET_H
#define UI_LYRICSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LyricsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *providerComboBox;
    QToolButton *refreshButton;
    QToolButton *editButton;
    QSpacerItem *horizontalSpacer;
    QWidget *editWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *titleLineEdit;
    QLabel *label_3;
    QLineEdit *albumLineEdit;
    QLabel *label;
    QLineEdit *artistLineEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *trackSpinBox;
    QLabel *label_5;
    QSpinBox *yearSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *LyricsWidget)
    {
        if (LyricsWidget->objectName().isEmpty())
            LyricsWidget->setObjectName("LyricsWidget");
        LyricsWidget->resize(656, 542);
        verticalLayout = new QVBoxLayout(LyricsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(LyricsWidget);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        providerComboBox = new QComboBox(LyricsWidget);
        providerComboBox->setObjectName("providerComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(providerComboBox->sizePolicy().hasHeightForWidth());
        providerComboBox->setSizePolicy(sizePolicy);
        providerComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(providerComboBox);

        refreshButton = new QToolButton(LyricsWidget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        refreshButton->setIcon(icon);
        refreshButton->setAutoRaise(true);

        horizontalLayout->addWidget(refreshButton);

        editButton = new QToolButton(LyricsWidget);
        editButton->setObjectName("editButton");
        editButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("accessories-text-editor");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        editButton->setIcon(icon1);
        editButton->setCheckable(true);
        editButton->setAutoRaise(true);

        horizontalLayout->addWidget(editButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        editWidget = new QWidget(LyricsWidget);
        editWidget->setObjectName("editWidget");
        formLayout = new QFormLayout(editWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(editWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        titleLineEdit = new QLineEdit(editWidget);
        titleLineEdit->setObjectName("titleLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, titleLineEdit);

        label_3 = new QLabel(editWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        albumLineEdit = new QLineEdit(editWidget);
        albumLineEdit->setObjectName("albumLineEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, albumLineEdit);

        label = new QLabel(editWidget);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        artistLineEdit = new QLineEdit(editWidget);
        artistLineEdit->setObjectName("artistLineEdit");
        sizePolicy1.setHeightForWidth(artistLineEdit->sizePolicy().hasHeightForWidth());
        artistLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, artistLineEdit);

        label_4 = new QLabel(editWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        trackSpinBox = new QSpinBox(editWidget);
        trackSpinBox->setObjectName("trackSpinBox");

        horizontalLayout_2->addWidget(trackSpinBox);

        label_5 = new QLabel(editWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        yearSpinBox = new QSpinBox(editWidget);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setMinimumSize(QSize(73, 0));
        yearSpinBox->setMaximum(2050);

        horizontalLayout_2->addWidget(yearSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);


        verticalLayout->addWidget(editWidget);

        textBrowser = new QTextBrowser(LyricsWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(LyricsWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LyricsWidget);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LyricsWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(LyricsWidget);
    } // setupUi

    void retranslateUi(QWidget *LyricsWidget)
    {
        LyricsWidget->setWindowTitle(QCoreApplication::translate("LyricsWidget", "Lyrics Plugin", nullptr));
        label_6->setText(QCoreApplication::translate("LyricsWidget", "Provider:", nullptr));
        label_2->setText(QCoreApplication::translate("LyricsWidget", "Title:", nullptr));
        label_3->setText(QCoreApplication::translate("LyricsWidget", "Album:", nullptr));
        label->setText(QCoreApplication::translate("LyricsWidget", "Artist:", nullptr));
        label_4->setText(QCoreApplication::translate("LyricsWidget", "Track:", nullptr));
        label_5->setText(QCoreApplication::translate("LyricsWidget", "Year:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricsWidget: public Ui_LyricsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICSWIDGET_H
