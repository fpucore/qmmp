/********************************************************************************
** Form generated from reading UI file 'covereditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVEREDITOR_H
#define UI_COVEREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoverEditor
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *sourceComboBox;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loadButton;
    QPushButton *deleteButton;
    QPushButton *saveAsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CoverEditor)
    {
        if (CoverEditor->objectName().isEmpty())
            CoverEditor->setObjectName("CoverEditor");
        CoverEditor->resize(434, 381);
        CoverEditor->setWindowTitle(QString::fromUtf8("Cover Editor"));
        gridLayout = new QGridLayout(CoverEditor);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(CoverEditor);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        sourceComboBox = new QComboBox(CoverEditor);
        sourceComboBox->setObjectName("sourceComboBox");

        horizontalLayout->addWidget(sourceComboBox);

        horizontalSpacer = new QSpacerItem(210, 26, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        frame = new QFrame(CoverEditor);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame, 1, 0, 5, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        loadButton = new QPushButton(CoverEditor);
        loadButton->setObjectName("loadButton");

        gridLayout->addWidget(loadButton, 2, 1, 1, 1);

        deleteButton = new QPushButton(CoverEditor);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 3, 1, 1, 1);

        saveAsButton = new QPushButton(CoverEditor);
        saveAsButton->setObjectName("saveAsButton");

        gridLayout->addWidget(saveAsButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        retranslateUi(CoverEditor);

        QMetaObject::connectSlotsByName(CoverEditor);
    } // setupUi

    void retranslateUi(QWidget *CoverEditor)
    {
        label->setText(QCoreApplication::translate("CoverEditor", "Image source:", nullptr));
        loadButton->setText(QCoreApplication::translate("CoverEditor", "Load", nullptr));
        deleteButton->setText(QCoreApplication::translate("CoverEditor", "Delete", nullptr));
        saveAsButton->setText(QCoreApplication::translate("CoverEditor", "Save as...", nullptr));
        (void)CoverEditor;
    } // retranslateUi

};

namespace Ui {
    class CoverEditor: public Ui_CoverEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVEREDITOR_H
