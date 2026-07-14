/********************************************************************************
** Form generated from reading UI file 'twopanelfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOPANELFILEDIALOG_H
#define UI_TWOPANELFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TwoPanelFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *lookInComboBox;
    QSplitter *splitter;
    QListView *dirListView;
    QListWidget *fileListWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *fileNameLineEdit;
    QLabel *label_3;
    QComboBox *fileTypeComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *playButton;
    QPushButton *addButton;
    QPushButton *closeButton;

    void setupUi(QDialog *TwoPanelFileDialog)
    {
        if (TwoPanelFileDialog->objectName().isEmpty())
            TwoPanelFileDialog->setObjectName("TwoPanelFileDialog");
        TwoPanelFileDialog->resize(611, 400);
        verticalLayout = new QVBoxLayout(TwoPanelFileDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, 6, 6);
        lookInComboBox = new QComboBox(TwoPanelFileDialog);
        lookInComboBox->setObjectName("lookInComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lookInComboBox->sizePolicy().hasHeightForWidth());
        lookInComboBox->setSizePolicy(sizePolicy);
        lookInComboBox->setEditable(true);

        verticalLayout->addWidget(lookInComboBox);

        splitter = new QSplitter(TwoPanelFileDialog);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        dirListView = new QListView(splitter);
        dirListView->setObjectName("dirListView");
        dirListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dirListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(dirListView);
        fileListWidget = new QListWidget(splitter);
        fileListWidget->setObjectName("fileListWidget");
        fileListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter->addWidget(fileListWidget);

        verticalLayout->addWidget(splitter);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(TwoPanelFileDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fileNameLineEdit = new QLineEdit(TwoPanelFileDialog);
        fileNameLineEdit->setObjectName("fileNameLineEdit");

        gridLayout->addWidget(fileNameLineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(TwoPanelFileDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        fileTypeComboBox = new QComboBox(TwoPanelFileDialog);
        fileTypeComboBox->setObjectName("fileTypeComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileTypeComboBox->sizePolicy().hasHeightForWidth());
        fileTypeComboBox->setSizePolicy(sizePolicy2);
        fileTypeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout->addWidget(fileTypeComboBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(232, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        playButton = new QPushButton(TwoPanelFileDialog);
        playButton->setObjectName("playButton");

        horizontalLayout->addWidget(playButton);

        addButton = new QPushButton(TwoPanelFileDialog);
        addButton->setObjectName("addButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(addButton);

        closeButton = new QPushButton(TwoPanelFileDialog);
        closeButton->setObjectName("closeButton");
        sizePolicy3.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TwoPanelFileDialog);
        QObject::connect(closeButton, &QPushButton::clicked, TwoPanelFileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TwoPanelFileDialog);
    } // setupUi

    void retranslateUi(QDialog *TwoPanelFileDialog)
    {
        TwoPanelFileDialog->setWindowTitle(QCoreApplication::translate("TwoPanelFileDialog", "Add Files", nullptr));
        label->setText(QCoreApplication::translate("TwoPanelFileDialog", "File name:", nullptr));
        label_3->setText(QCoreApplication::translate("TwoPanelFileDialog", "Files of type:", nullptr));
        playButton->setText(QCoreApplication::translate("TwoPanelFileDialog", "Play", nullptr));
        addButton->setText(QCoreApplication::translate("TwoPanelFileDialog", "Add", nullptr));
        closeButton->setText(QCoreApplication::translate("TwoPanelFileDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TwoPanelFileDialog: public Ui_TwoPanelFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOPANELFILEDIALOG_H
