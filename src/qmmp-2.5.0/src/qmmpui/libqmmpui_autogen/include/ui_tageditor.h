/********************************************************************************
** Form generated from reading UI file 'tageditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGEDITOR_H
#define UI_TAGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TagEditor
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *tagWidget;
    QFormLayout *formLayout;
    QLabel *label_47;
    QLineEdit *titleLineEdit;
    QLabel *label_43;
    QLineEdit *artistLineEdit;
    QLabel *label_45;
    QLineEdit *albumLineEdit;
    QLabel *label_49;
    QLineEdit *albumArtistLineEdit;
    QLabel *label_8;
    QLineEdit *composerLineEdit;
    QLabel *label_46;
    QLineEdit *genreLineEdit;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *trackSpinBox;
    QLabel *label_44;
    QSpinBox *yearSpinBox;
    QLabel *label_11;
    QSpinBox *discSpinBox;
    QLabel *label_48;
    QTextBrowser *commentBrowser;
    QCheckBox *useCheckBox;

    void setupUi(QWidget *TagEditor)
    {
        if (TagEditor->objectName().isEmpty())
            TagEditor->setObjectName("TagEditor");
        TagEditor->resize(438, 363);
        verticalLayout = new QVBoxLayout(TagEditor);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(3, -1, 3, 3);
        tagWidget = new QWidget(TagEditor);
        tagWidget->setObjectName("tagWidget");
        formLayout = new QFormLayout(tagWidget);
        formLayout->setObjectName("formLayout");
        label_47 = new QLabel(tagWidget);
        label_47->setObjectName("label_47");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);
        label_47->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_47);

        titleLineEdit = new QLineEdit(tagWidget);
        titleLineEdit->setObjectName("titleLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, titleLineEdit);

        label_43 = new QLabel(tagWidget);
        label_43->setObjectName("label_43");
        sizePolicy.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy);
        label_43->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_43);

        artistLineEdit = new QLineEdit(tagWidget);
        artistLineEdit->setObjectName("artistLineEdit");
        sizePolicy1.setHeightForWidth(artistLineEdit->sizePolicy().hasHeightForWidth());
        artistLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, artistLineEdit);

        label_45 = new QLabel(tagWidget);
        label_45->setObjectName("label_45");
        sizePolicy.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy);
        label_45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_45);

        albumLineEdit = new QLineEdit(tagWidget);
        albumLineEdit->setObjectName("albumLineEdit");
        sizePolicy1.setHeightForWidth(albumLineEdit->sizePolicy().hasHeightForWidth());
        albumLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, albumLineEdit);

        label_49 = new QLabel(tagWidget);
        label_49->setObjectName("label_49");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_49);

        albumArtistLineEdit = new QLineEdit(tagWidget);
        albumArtistLineEdit->setObjectName("albumArtistLineEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, albumArtistLineEdit);

        label_8 = new QLabel(tagWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_8);

        composerLineEdit = new QLineEdit(tagWidget);
        composerLineEdit->setObjectName("composerLineEdit");
        composerLineEdit->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, composerLineEdit);

        label_46 = new QLabel(tagWidget);
        label_46->setObjectName("label_46");
        sizePolicy.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy);
        label_46->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_46);

        genreLineEdit = new QLineEdit(tagWidget);
        genreLineEdit->setObjectName("genreLineEdit");
        sizePolicy1.setHeightForWidth(genreLineEdit->sizePolicy().hasHeightForWidth());
        genreLineEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, genreLineEdit);

        label_42 = new QLabel(tagWidget);
        label_42->setObjectName("label_42");
        sizePolicy.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy);
        label_42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_42);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        trackSpinBox = new QSpinBox(tagWidget);
        trackSpinBox->setObjectName("trackSpinBox");
        trackSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(trackSpinBox->sizePolicy().hasHeightForWidth());
        trackSpinBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(trackSpinBox);

        label_44 = new QLabel(tagWidget);
        label_44->setObjectName("label_44");
        sizePolicy.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy);
        label_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_44);

        yearSpinBox = new QSpinBox(tagWidget);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(yearSpinBox->sizePolicy().hasHeightForWidth());
        yearSpinBox->setSizePolicy(sizePolicy2);
        yearSpinBox->setMinimumSize(QSize(70, 0));
        yearSpinBox->setMaximum(2050);
        yearSpinBox->setValue(0);

        horizontalLayout_2->addWidget(yearSpinBox);

        label_11 = new QLabel(tagWidget);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_11);

        discSpinBox = new QSpinBox(tagWidget);
        discSpinBox->setObjectName("discSpinBox");
        discSpinBox->setEnabled(false);

        horizontalLayout_2->addWidget(discSpinBox);


        formLayout->setLayout(6, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        label_48 = new QLabel(tagWidget);
        label_48->setObjectName("label_48");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy3);
        label_48->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_48);

        commentBrowser = new QTextBrowser(tagWidget);
        commentBrowser->setObjectName("commentBrowser");
        commentBrowser->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(commentBrowser->sizePolicy().hasHeightForWidth());
        commentBrowser->setSizePolicy(sizePolicy4);
        commentBrowser->setReadOnly(false);
        commentBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\"><br /></p></body></html>"));

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, commentBrowser);


        verticalLayout->addWidget(tagWidget);

        useCheckBox = new QCheckBox(TagEditor);
        useCheckBox->setObjectName("useCheckBox");

        verticalLayout->addWidget(useCheckBox);


        retranslateUi(TagEditor);
        QObject::connect(useCheckBox, &QCheckBox::clicked, tagWidget, &QWidget::setEnabled);

        QMetaObject::connectSlotsByName(TagEditor);
    } // setupUi

    void retranslateUi(QWidget *TagEditor)
    {
        TagEditor->setWindowTitle(QCoreApplication::translate("TagEditor", "Tag Editor", nullptr));
        label_47->setText(QCoreApplication::translate("TagEditor", "Title:", nullptr));
        label_43->setText(QCoreApplication::translate("TagEditor", "Artist:", nullptr));
        label_45->setText(QCoreApplication::translate("TagEditor", "Album:", nullptr));
        albumLineEdit->setText(QString());
        label_49->setText(QCoreApplication::translate("TagEditor", "Album artist:", nullptr));
        label_8->setText(QCoreApplication::translate("TagEditor", "Composer:", nullptr));
        label_46->setText(QCoreApplication::translate("TagEditor", "Genre:", nullptr));
        label_42->setText(QCoreApplication::translate("TagEditor", "Track:", nullptr));
        trackSpinBox->setSpecialValueText(QCoreApplication::translate("TagEditor", "?", nullptr));
        label_44->setText(QCoreApplication::translate("TagEditor", "Year:", nullptr));
        yearSpinBox->setSpecialValueText(QCoreApplication::translate("TagEditor", "?", nullptr));
        yearSpinBox->setSuffix(QString());
        label_11->setText(QCoreApplication::translate("TagEditor", "Disc number:", nullptr));
        discSpinBox->setSpecialValueText(QCoreApplication::translate("TagEditor", "?", nullptr));
        label_48->setText(QCoreApplication::translate("TagEditor", "Comment:", nullptr));
        useCheckBox->setText(QCoreApplication::translate("TagEditor", "Include selected tag in file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TagEditor: public Ui_TagEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGEDITOR_H
