/********************************************************************************
** Form generated from reading UI file 'skinnedsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINNEDSETTINGS_H
#define UI_SKINNEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qmmpui/colorwidget.h>

QT_BEGIN_NAMESPACE

class Ui_SkinnedSettings
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *skinInstallButton;
    QPushButton *skinReloadButton;
    QSpacerItem *horizontalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *hideOnCloseCheckBox;
    QCheckBox *hiddenCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *windowTitleLineEdit;
    QToolButton *windowTitleButton;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QSlider *mwTransparencySlider;
    QLabel *mwTransparencyLabel;
    QLabel *label_9;
    QSlider *eqTransparencySlider;
    QLabel *eqTransparencyLabel;
    QLabel *label_10;
    QSlider *plTransparencySlider;
    QLabel *plTransparencyLabel;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *randomSkinCheckBox;
    QCheckBox *skinCursorsCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *skinPathLabel;
    QComboBox *skinPathComboBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *numbersCheckBox;
    QCheckBox *lengthsCheckBox;
    QCheckBox *alignCheckBox;
    QCheckBox *smoothScrollingCheckBox;
    QCheckBox *protocolCheckBox;
    QCheckBox *anchorCheckBox;
    QCheckBox *showSplittersCheckBox;
    QCheckBox *alternateSplitterColorCheckBox;
    QCheckBox *showNewPLCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *plSeplineEdit;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *popupCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *popupTemplateButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QCheckBox *plSkinColorsCheckBox;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    ColorWidget *plBg1Color;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_12;
    ColorWidget *plTextNormalColor;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    ColorWidget *plBg2Color;
    QLabel *label_13;
    ColorWidget *plTextCurrentColor;
    QLabel *label_11;
    ColorWidget *plHlColor;
    QLabel *label_14;
    ColorWidget *plTextHlColor;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *loadSkinColorsButton;
    QLabel *label_16;
    ColorWidget *plGrTextColor;
    ColorWidget *plSplitterColor;
    QLabel *label_19;
    QGridLayout *gridLayout_6;
    QCheckBox *plOverrideGroupBgCheckBox;
    ColorWidget *plGrBgColor;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *plOverrideCurrentBgCheckBox;
    ColorWidget *plCurrentTrackBgColor;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *mainFontLabel;
    QToolButton *mainFontButton;
    QLabel *label_2;
    QLabel *plFontLabel;
    QToolButton *plFontButton;
    QLabel *label_26;
    QLabel *groupFontLabel;
    QToolButton *groupFontButton;
    QLabel *label_27;
    QLabel *extraRowFontLabel;
    QToolButton *extraRowFontButton;
    QLabel *label_5;
    QLabel *headerFontLabel;
    QToolButton *headerFontButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *resetFontsButton;
    QCheckBox *useBitmapCheckBox;

    void setupUi(QWidget *SkinnedSettings)
    {
        if (SkinnedSettings->objectName().isEmpty())
            SkinnedSettings->setObjectName("SkinnedSettings");
        SkinnedSettings->resize(576, 493);
        SkinnedSettings->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(SkinnedSettings);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget = new QTabWidget(SkinnedSettings);
        tabWidget->setObjectName("tabWidget");
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout = new QVBoxLayout(tab_4);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(tab_4);
        listWidget->setObjectName("listWidget");
        listWidget->setAlternatingRowColors(true);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setModelColumn(0);

        verticalLayout->addWidget(listWidget);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        skinInstallButton = new QPushButton(tab_4);
        skinInstallButton->setObjectName("skinInstallButton");
        skinInstallButton->setMinimumSize(QSize(0, 0));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        skinInstallButton->setIcon(icon);

        horizontalLayout_7->addWidget(skinInstallButton);

        skinReloadButton = new QPushButton(tab_4);
        skinReloadButton->setObjectName("skinReloadButton");
        skinReloadButton->setMinimumSize(QSize(0, 0));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        skinReloadButton->setIcon(icon1);

        horizontalLayout_7->addWidget(skinReloadButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        hideOnCloseCheckBox = new QCheckBox(groupBox);
        hideOnCloseCheckBox->setObjectName("hideOnCloseCheckBox");

        verticalLayout_6->addWidget(hideOnCloseCheckBox);

        hiddenCheckBox = new QCheckBox(groupBox);
        hiddenCheckBox->setObjectName("hiddenCheckBox");

        verticalLayout_6->addWidget(hiddenCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        windowTitleLineEdit = new QLineEdit(groupBox);
        windowTitleLineEdit->setObjectName("windowTitleLineEdit");

        horizontalLayout->addWidget(windowTitleLineEdit);

        windowTitleButton = new QToolButton(groupBox);
        windowTitleButton->setObjectName("windowTitleButton");

        horizontalLayout->addWidget(windowTitleButton);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_8->addWidget(groupBox);

        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName("groupBox_7");
        gridLayout_4 = new QGridLayout(groupBox_7);
        gridLayout_4->setObjectName("gridLayout_4");
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        mwTransparencySlider = new QSlider(groupBox_7);
        mwTransparencySlider->setObjectName("mwTransparencySlider");
        mwTransparencySlider->setMaximum(90);
        mwTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(mwTransparencySlider, 0, 1, 1, 1);

        mwTransparencyLabel = new QLabel(groupBox_7);
        mwTransparencyLabel->setObjectName("mwTransparencyLabel");
        mwTransparencyLabel->setMinimumSize(QSize(25, 0));

        gridLayout_4->addWidget(mwTransparencyLabel, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName("label_9");

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        eqTransparencySlider = new QSlider(groupBox_7);
        eqTransparencySlider->setObjectName("eqTransparencySlider");
        eqTransparencySlider->setMaximum(90);
        eqTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(eqTransparencySlider, 1, 1, 1, 1);

        eqTransparencyLabel = new QLabel(groupBox_7);
        eqTransparencyLabel->setObjectName("eqTransparencyLabel");

        gridLayout_4->addWidget(eqTransparencyLabel, 1, 2, 1, 1);

        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        plTransparencySlider = new QSlider(groupBox_7);
        plTransparencySlider->setObjectName("plTransparencySlider");
        plTransparencySlider->setMaximum(90);
        plTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(plTransparencySlider, 2, 1, 1, 1);

        plTransparencyLabel = new QLabel(groupBox_7);
        plTransparencyLabel->setObjectName("plTransparencyLabel");

        gridLayout_4->addWidget(plTransparencyLabel, 2, 2, 1, 1);


        verticalLayout_8->addWidget(groupBox_7);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        randomSkinCheckBox = new QCheckBox(groupBox_4);
        randomSkinCheckBox->setObjectName("randomSkinCheckBox");

        verticalLayout_7->addWidget(randomSkinCheckBox);

        skinCursorsCheckBox = new QCheckBox(groupBox_4);
        skinCursorsCheckBox->setObjectName("skinCursorsCheckBox");

        verticalLayout_7->addWidget(skinCursorsCheckBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        skinPathLabel = new QLabel(groupBox_4);
        skinPathLabel->setObjectName("skinPathLabel");

        horizontalLayout_6->addWidget(skinPathLabel);

        skinPathComboBox = new QComboBox(groupBox_4);
        skinPathComboBox->setObjectName("skinPathComboBox");

        horizontalLayout_6->addWidget(skinPathComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_8->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        numbersCheckBox = new QCheckBox(groupBox_2);
        numbersCheckBox->setObjectName("numbersCheckBox");

        verticalLayout_2->addWidget(numbersCheckBox);

        lengthsCheckBox = new QCheckBox(groupBox_2);
        lengthsCheckBox->setObjectName("lengthsCheckBox");

        verticalLayout_2->addWidget(lengthsCheckBox);

        alignCheckBox = new QCheckBox(groupBox_2);
        alignCheckBox->setObjectName("alignCheckBox");
        alignCheckBox->setEnabled(false);

        verticalLayout_2->addWidget(alignCheckBox);


        verticalLayout_3->addWidget(groupBox_2);

        smoothScrollingCheckBox = new QCheckBox(tab_5);
        smoothScrollingCheckBox->setObjectName("smoothScrollingCheckBox");

        verticalLayout_3->addWidget(smoothScrollingCheckBox);

        protocolCheckBox = new QCheckBox(tab_5);
        protocolCheckBox->setObjectName("protocolCheckBox");

        verticalLayout_3->addWidget(protocolCheckBox);

        anchorCheckBox = new QCheckBox(tab_5);
        anchorCheckBox->setObjectName("anchorCheckBox");

        verticalLayout_3->addWidget(anchorCheckBox);

        showSplittersCheckBox = new QCheckBox(tab_5);
        showSplittersCheckBox->setObjectName("showSplittersCheckBox");

        verticalLayout_3->addWidget(showSplittersCheckBox);

        alternateSplitterColorCheckBox = new QCheckBox(tab_5);
        alternateSplitterColorCheckBox->setObjectName("alternateSplitterColorCheckBox");

        verticalLayout_3->addWidget(alternateSplitterColorCheckBox);

        showNewPLCheckBox = new QCheckBox(tab_5);
        showNewPLCheckBox->setObjectName("showNewPLCheckBox");

        verticalLayout_3->addWidget(showNewPLCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(tab_5);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        plSeplineEdit = new QLineEdit(tab_5);
        plSeplineEdit->setObjectName("plSeplineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plSeplineEdit->sizePolicy().hasHeightForWidth());
        plSeplineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(plSeplineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        popupCheckBox = new QCheckBox(tab_5);
        popupCheckBox->setObjectName("popupCheckBox");

        verticalLayout_3->addWidget(popupCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        popupTemplateButton = new QPushButton(tab_5);
        popupTemplateButton->setObjectName("popupTemplateButton");
        popupTemplateButton->setEnabled(false);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("configure");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        popupTemplateButton->setIcon(icon2);

        horizontalLayout_3->addWidget(popupTemplateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 144, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName("gridLayout_7");
        plSkinColorsCheckBox = new QCheckBox(groupBox_3);
        plSkinColorsCheckBox->setObjectName("plSkinColorsCheckBox");
        plSkinColorsCheckBox->setChecked(true);

        gridLayout_7->addWidget(plSkinColorsCheckBox, 0, 0, 1, 1);

        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(false);
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        plBg1Color = new ColorWidget(widget_2);
        plBg1Color->setObjectName("plBg1Color");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plBg1Color->sizePolicy().hasHeightForWidth());
        plBg1Color->setSizePolicy(sizePolicy1);
        plBg1Color->setMinimumSize(QSize(20, 20));
        plBg1Color->setMaximumSize(QSize(20, 20));
        plBg1Color->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(plBg1Color, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 43, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 2, 6, 2);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName("label_12");

        gridLayout_5->addWidget(label_12, 0, 4, 1, 1);

        plTextNormalColor = new ColorWidget(widget_2);
        plTextNormalColor->setObjectName("plTextNormalColor");
        sizePolicy1.setHeightForWidth(plTextNormalColor->sizePolicy().hasHeightForWidth());
        plTextNormalColor->setSizePolicy(sizePolicy1);
        plTextNormalColor->setMinimumSize(QSize(20, 20));
        plTextNormalColor->setMaximumSize(QSize(20, 20));
        plTextNormalColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(plTextNormalColor, 0, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(66, 68, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 6, 6, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");

        gridLayout_5->addWidget(label_8, 1, 0, 1, 1);

        plBg2Color = new ColorWidget(widget_2);
        plBg2Color->setObjectName("plBg2Color");
        sizePolicy1.setHeightForWidth(plBg2Color->sizePolicy().hasHeightForWidth());
        plBg2Color->setSizePolicy(sizePolicy1);
        plBg2Color->setMinimumSize(QSize(20, 20));
        plBg2Color->setMaximumSize(QSize(20, 20));
        plBg2Color->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(plBg2Color, 1, 1, 1, 1);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName("label_13");

        gridLayout_5->addWidget(label_13, 1, 4, 1, 1);

        plTextCurrentColor = new ColorWidget(widget_2);
        plTextCurrentColor->setObjectName("plTextCurrentColor");
        sizePolicy1.setHeightForWidth(plTextCurrentColor->sizePolicy().hasHeightForWidth());
        plTextCurrentColor->setSizePolicy(sizePolicy1);
        plTextCurrentColor->setMinimumSize(QSize(20, 20));
        plTextCurrentColor->setMaximumSize(QSize(20, 20));
        plTextCurrentColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(plTextCurrentColor, 1, 5, 1, 1);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName("label_11");

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        plHlColor = new ColorWidget(widget_2);
        plHlColor->setObjectName("plHlColor");
        sizePolicy1.setHeightForWidth(plHlColor->sizePolicy().hasHeightForWidth());
        plHlColor->setSizePolicy(sizePolicy1);
        plHlColor->setMinimumSize(QSize(20, 20));
        plHlColor->setMaximumSize(QSize(20, 20));
        plHlColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(plHlColor, 2, 1, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");

        gridLayout_5->addWidget(label_14, 2, 4, 1, 1);

        plTextHlColor = new ColorWidget(widget_2);
        plTextHlColor->setObjectName("plTextHlColor");
        sizePolicy1.setHeightForWidth(plTextHlColor->sizePolicy().hasHeightForWidth());
        plTextHlColor->setSizePolicy(sizePolicy1);
        plTextHlColor->setMinimumSize(QSize(20, 20));
        plTextHlColor->setMaximumSize(QSize(20, 20));
        plTextHlColor->setFrameShape(QFrame::Box);
        plTextHlColor->setFrameShadow(QFrame::Plain);

        gridLayout_5->addWidget(plTextHlColor, 2, 5, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        loadSkinColorsButton = new QPushButton(widget_2);
        loadSkinColorsButton->setObjectName("loadSkinColorsButton");

        horizontalLayout_5->addWidget(loadSkinColorsButton);


        gridLayout_5->addLayout(horizontalLayout_5, 6, 0, 1, 7);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");

        gridLayout_5->addWidget(label_16, 3, 4, 1, 1);

        plGrTextColor = new ColorWidget(widget_2);
        plGrTextColor->setObjectName("plGrTextColor");
        sizePolicy1.setHeightForWidth(plGrTextColor->sizePolicy().hasHeightForWidth());
        plGrTextColor->setSizePolicy(sizePolicy1);
        plGrTextColor->setMinimumSize(QSize(20, 20));
        plGrTextColor->setFrameShape(QFrame::Box);
        plGrTextColor->setFrameShadow(QFrame::Plain);

        gridLayout_5->addWidget(plGrTextColor, 3, 5, 1, 1);

        plSplitterColor = new ColorWidget(widget_2);
        plSplitterColor->setObjectName("plSplitterColor");
        sizePolicy1.setHeightForWidth(plSplitterColor->sizePolicy().hasHeightForWidth());
        plSplitterColor->setSizePolicy(sizePolicy1);
        plSplitterColor->setMinimumSize(QSize(20, 20));
        plSplitterColor->setMaximumSize(QSize(20, 20));
        plSplitterColor->setBaseSize(QSize(20, 20));
        plSplitterColor->setFrameShape(QFrame::Box);
        plSplitterColor->setFrameShadow(QFrame::Plain);

        gridLayout_5->addWidget(plSplitterColor, 3, 1, 1, 1);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName("label_19");

        gridLayout_5->addWidget(label_19, 3, 0, 1, 1);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        plOverrideGroupBgCheckBox = new QCheckBox(groupBox_3);
        plOverrideGroupBgCheckBox->setObjectName("plOverrideGroupBgCheckBox");

        gridLayout_6->addWidget(plOverrideGroupBgCheckBox, 0, 0, 1, 1);

        plGrBgColor = new ColorWidget(groupBox_3);
        plGrBgColor->setObjectName("plGrBgColor");
        plGrBgColor->setEnabled(false);
        sizePolicy1.setHeightForWidth(plGrBgColor->sizePolicy().hasHeightForWidth());
        plGrBgColor->setSizePolicy(sizePolicy1);
        plGrBgColor->setMinimumSize(QSize(20, 20));
        plGrBgColor->setFrameShape(QFrame::Box);
        plGrBgColor->setFrameShadow(QFrame::Plain);

        gridLayout_6->addWidget(plGrBgColor, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(165, 14, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        plOverrideCurrentBgCheckBox = new QCheckBox(groupBox_3);
        plOverrideCurrentBgCheckBox->setObjectName("plOverrideCurrentBgCheckBox");

        gridLayout_6->addWidget(plOverrideCurrentBgCheckBox, 1, 0, 1, 1);

        plCurrentTrackBgColor = new ColorWidget(groupBox_3);
        plCurrentTrackBgColor->setObjectName("plCurrentTrackBgColor");
        plCurrentTrackBgColor->setEnabled(false);
        sizePolicy1.setHeightForWidth(plCurrentTrackBgColor->sizePolicy().hasHeightForWidth());
        plCurrentTrackBgColor->setSizePolicy(sizePolicy1);
        plCurrentTrackBgColor->setMinimumSize(QSize(20, 20));
        plCurrentTrackBgColor->setFrameShape(QFrame::Box);
        plCurrentTrackBgColor->setFrameShadow(QFrame::Plain);

        gridLayout_6->addWidget(plCurrentTrackBgColor, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 1, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 2, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_3);

        verticalSpacer_4 = new QSpacerItem(20, 105, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(tab_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mainFontLabel = new QLabel(tab_2);
        mainFontLabel->setObjectName("mainFontLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainFontLabel->sizePolicy().hasHeightForWidth());
        mainFontLabel->setSizePolicy(sizePolicy3);
        mainFontLabel->setFrameShape(QFrame::StyledPanel);
        mainFontLabel->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(mainFontLabel, 0, 1, 1, 1);

        mainFontButton = new QToolButton(tab_2);
        mainFontButton->setObjectName("mainFontButton");

        gridLayout_2->addWidget(mainFontButton, 0, 2, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        plFontLabel = new QLabel(tab_2);
        plFontLabel->setObjectName("plFontLabel");
        sizePolicy3.setHeightForWidth(plFontLabel->sizePolicy().hasHeightForWidth());
        plFontLabel->setSizePolicy(sizePolicy3);
        plFontLabel->setFrameShape(QFrame::StyledPanel);
        plFontLabel->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(plFontLabel, 1, 1, 1, 1);

        plFontButton = new QToolButton(tab_2);
        plFontButton->setObjectName("plFontButton");

        gridLayout_2->addWidget(plFontButton, 1, 2, 1, 1);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 2, 0, 1, 1);

        groupFontLabel = new QLabel(tab_2);
        groupFontLabel->setObjectName("groupFontLabel");
        groupFontLabel->setFrameShape(QFrame::StyledPanel);
        groupFontLabel->setFrameShadow(QFrame::Sunken);
        groupFontLabel->setText(QString::fromUtf8("???"));

        gridLayout_2->addWidget(groupFontLabel, 2, 1, 1, 1);

        groupFontButton = new QToolButton(tab_2);
        groupFontButton->setObjectName("groupFontButton");
        groupFontButton->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(groupFontButton, 2, 2, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName("label_27");

        gridLayout_2->addWidget(label_27, 3, 0, 1, 1);

        extraRowFontLabel = new QLabel(tab_2);
        extraRowFontLabel->setObjectName("extraRowFontLabel");
        extraRowFontLabel->setFrameShape(QFrame::StyledPanel);
        extraRowFontLabel->setFrameShadow(QFrame::Sunken);
        extraRowFontLabel->setText(QString::fromUtf8("???"));

        gridLayout_2->addWidget(extraRowFontLabel, 3, 1, 1, 1);

        extraRowFontButton = new QToolButton(tab_2);
        extraRowFontButton->setObjectName("extraRowFontButton");
        extraRowFontButton->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(extraRowFontButton, 3, 2, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        headerFontLabel = new QLabel(tab_2);
        headerFontLabel->setObjectName("headerFontLabel");
        headerFontLabel->setFrameShape(QFrame::StyledPanel);
        headerFontLabel->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(headerFontLabel, 4, 1, 1, 1);

        headerFontButton = new QToolButton(tab_2);
        headerFontButton->setObjectName("headerFontButton");

        gridLayout_2->addWidget(headerFontButton, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(418, 271, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 7, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(348, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        resetFontsButton = new QPushButton(tab_2);
        resetFontsButton->setObjectName("resetFontsButton");

        horizontalLayout_4->addWidget(resetFontsButton);


        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 3);

        useBitmapCheckBox = new QCheckBox(tab_2);
        useBitmapCheckBox->setObjectName("useBitmapCheckBox");

        gridLayout_2->addWidget(useBitmapCheckBox, 6, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);


        retranslateUi(SkinnedSettings);
        QObject::connect(popupCheckBox, &QCheckBox::toggled, popupTemplateButton, &QPushButton::setEnabled);
        QObject::connect(numbersCheckBox, &QCheckBox::toggled, alignCheckBox, &QCheckBox::setEnabled);
        QObject::connect(plSkinColorsCheckBox, &QCheckBox::toggled, widget_2, &QWidget::setDisabled);
        QObject::connect(plOverrideGroupBgCheckBox, SIGNAL(toggled(bool)), plGrBgColor, SLOT(setEnabled(bool)));
        QObject::connect(plOverrideCurrentBgCheckBox, SIGNAL(toggled(bool)), plCurrentTrackBgColor, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SkinnedSettings);
    } // setupUi

    void retranslateUi(QWidget *SkinnedSettings)
    {
        skinInstallButton->setText(QCoreApplication::translate("SkinnedSettings", "Add...", nullptr));
        skinReloadButton->setText(QCoreApplication::translate("SkinnedSettings", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SkinnedSettings", "Skins", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SkinnedSettings", "Main Window", nullptr));
        hideOnCloseCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Hide on close", nullptr));
        hiddenCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Start hidden", nullptr));
        label_6->setText(QCoreApplication::translate("SkinnedSettings", "Window title format:", nullptr));
        windowTitleButton->setText(QCoreApplication::translate("SkinnedSettings", "...", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("SkinnedSettings", "Transparency", nullptr));
        label_3->setText(QCoreApplication::translate("SkinnedSettings", "Main window", nullptr));
        mwTransparencyLabel->setText(QCoreApplication::translate("SkinnedSettings", "0", nullptr));
        label_9->setText(QCoreApplication::translate("SkinnedSettings", "Equalizer", nullptr));
        eqTransparencyLabel->setText(QCoreApplication::translate("SkinnedSettings", "0", nullptr));
        label_10->setText(QCoreApplication::translate("SkinnedSettings", "Playlist", nullptr));
        plTransparencyLabel->setText(QCoreApplication::translate("SkinnedSettings", "0", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SkinnedSettings", "Extra Skin Settings", nullptr));
        randomSkinCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Random skin on every startup", nullptr));
        skinCursorsCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Use skin cursors", nullptr));
        skinPathLabel->setText(QCoreApplication::translate("SkinnedSettings", "Skin install path:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SkinnedSettings", "General", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SkinnedSettings", "Single Column Mode", nullptr));
        numbersCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show song numbers", nullptr));
        lengthsCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show song lengths", nullptr));
        alignCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Align song numbers", nullptr));
        smoothScrollingCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Use smooth scrolling", nullptr));
        protocolCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show protocol", nullptr));
        anchorCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show anchor", nullptr));
        showSplittersCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show splitters", nullptr));
        alternateSplitterColorCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Alternate splitter color", nullptr));
        showNewPLCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show 'New Playlist' button", nullptr));
        label_4->setText(QCoreApplication::translate("SkinnedSettings", "Playlist separator:", nullptr));
        popupCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Show popup information", nullptr));
        popupTemplateButton->setText(QCoreApplication::translate("SkinnedSettings", "Edit template", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("SkinnedSettings", "Song Display", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SkinnedSettings", "Playlist Colors", nullptr));
        plSkinColorsCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Use skin colors", nullptr));
        label_7->setText(QCoreApplication::translate("SkinnedSettings", "Background #1:", nullptr));
        label_12->setText(QCoreApplication::translate("SkinnedSettings", "Normal text:", nullptr));
        label_8->setText(QCoreApplication::translate("SkinnedSettings", "Background #2:", nullptr));
        label_13->setText(QCoreApplication::translate("SkinnedSettings", "Current text:", nullptr));
        label_11->setText(QCoreApplication::translate("SkinnedSettings", "Highlighted background:", nullptr));
        label_14->setText(QCoreApplication::translate("SkinnedSettings", "Highlighted text:", nullptr));
        loadSkinColorsButton->setText(QCoreApplication::translate("SkinnedSettings", "Load skin colors", nullptr));
        label_16->setText(QCoreApplication::translate("SkinnedSettings", "Group text:", nullptr));
        label_19->setText(QCoreApplication::translate("SkinnedSettings", "Splitter:", nullptr));
        plOverrideGroupBgCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Override group background:", nullptr));
        plOverrideCurrentBgCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Override current track background:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SkinnedSettings", "Colors", nullptr));
        label->setText(QCoreApplication::translate("SkinnedSettings", "Player:", nullptr));
        mainFontLabel->setText(QCoreApplication::translate("SkinnedSettings", "???", nullptr));
        mainFontButton->setText(QCoreApplication::translate("SkinnedSettings", "...", nullptr));
        label_2->setText(QCoreApplication::translate("SkinnedSettings", "Playlist:", nullptr));
        plFontLabel->setText(QCoreApplication::translate("SkinnedSettings", "???", nullptr));
        plFontButton->setText(QCoreApplication::translate("SkinnedSettings", "...", nullptr));
        label_26->setText(QCoreApplication::translate("SkinnedSettings", "Groups:", nullptr));
        label_27->setText(QCoreApplication::translate("SkinnedSettings", "Extra group row:", nullptr));
        label_5->setText(QCoreApplication::translate("SkinnedSettings", "Column headers:", nullptr));
        headerFontLabel->setText(QCoreApplication::translate("SkinnedSettings", "???", nullptr));
        headerFontButton->setText(QCoreApplication::translate("SkinnedSettings", "...", nullptr));
        resetFontsButton->setText(QCoreApplication::translate("SkinnedSettings", "Reset fonts", nullptr));
        useBitmapCheckBox->setText(QCoreApplication::translate("SkinnedSettings", "Use bitmap font if available", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SkinnedSettings", "Fonts", nullptr));
        (void)SkinnedSettings;
    } // retranslateUi

};

namespace Ui {
    class SkinnedSettings: public Ui_SkinnedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINNEDSETTINGS_H
