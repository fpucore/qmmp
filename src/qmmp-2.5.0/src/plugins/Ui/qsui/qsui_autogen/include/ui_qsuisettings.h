/********************************************************************************
** Form generated from reading UI file 'qsuisettings.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUISETTINGS_H
#define UI_QSUISETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qmmpui/colorwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QSUISettings
{
public:
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *hideOnCloseCheckBox;
    QCheckBox *hiddenCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLineEdit *windowTitleLineEdit;
    QToolButton *windowTitleButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *smoothScrollingCheckBox;
    QCheckBox *protocolCheckBox;
    QCheckBox *anchorCheckBox;
    QCheckBox *showSplittersCheckBox;
    QCheckBox *popupCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *popupTemplateButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout;
    QCheckBox *numbersCheckBox;
    QCheckBox *lengthsCheckBox;
    QCheckBox *alignCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    ColorWidget *vColor1;
    QLabel *label_3;
    ColorWidget *peaksColor;
    QLabel *label_4;
    ColorWidget *vColor2;
    QLabel *label_5;
    ColorWidget *bgColor;
    QLabel *label_6;
    ColorWidget *vColor3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *resetColorsButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QCheckBox *plSystemColorsCheckBox;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    ColorWidget *plBg1Color;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_19;
    ColorWidget *plSplitterColor;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    ColorWidget *plBg2Color;
    QLabel *label_10;
    ColorWidget *plTextNormalColor;
    QLabel *label_9;
    ColorWidget *plHlColor;
    QLabel *label_12;
    ColorWidget *plTextHlCurrentColor;
    QCheckBox *plOverrideGroupColorsCheckBox;
    QLabel *label_15;
    ColorWidget *plGrTextColor;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_14;
    ColorWidget *plGrBgColor;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *plOverrideCurrentTrackColorsCheckBox;
    QLabel *label_11;
    ColorWidget *plTextCurrentColor;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_20;
    ColorWidget *plCurrentTrackBgColor;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_5;
    QLabel *label_24;
    ColorWidget *wfsbBgColor;
    ColorWidget *wfsbProgressBarColor;
    ColorWidget *wfsbRmsColor;
    QLabel *label_21;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_11;
    ColorWidget *wfsbWaveFormColor;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *systemFontsCheckBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *tabsFontButton;
    QToolButton *columnFontButton;
    QLabel *tabsFontLabel;
    QLabel *plFontLabel;
    QLabel *label_2;
    QLabel *label_16;
    QLabel *columnFontLabel;
    QToolButton *plFontButton;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *resetFontsButton;
    QLabel *label_17;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *groupFontLabel;
    QLabel *extraRowFontLabel;
    QToolButton *groupFontButton;
    QToolButton *extraRowFontButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_2;
    QCheckBox *tabsClosableCheckBox;
    QCheckBox *showTabListMenuCheckBox;
    QCheckBox *showNewPLCheckBox;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *tabPositionComboBox;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout;
    QLabel *label_18;
    QComboBox *toolBarIconSizeComboBox;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *customizeToolBarButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QSUISettings)
    {
        if (QSUISettings->objectName().isEmpty())
            QSUISettings->setObjectName("QSUISettings");
        QSUISettings->resize(687, 565);
        QSUISettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_6 = new QGridLayout(QSUISettings);
        gridLayout_6->setObjectName("gridLayout_6");
        tabWidget = new QTabWidget(QSUISettings);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        hideOnCloseCheckBox = new QCheckBox(groupBox);
        hideOnCloseCheckBox->setObjectName("hideOnCloseCheckBox");

        gridLayout_3->addWidget(hideOnCloseCheckBox, 0, 0, 1, 1);

        hiddenCheckBox = new QCheckBox(groupBox);
        hiddenCheckBox->setObjectName("hiddenCheckBox");

        gridLayout_3->addWidget(hiddenCheckBox, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        horizontalLayout_2->addWidget(label_13);

        windowTitleLineEdit = new QLineEdit(groupBox);
        windowTitleLineEdit->setObjectName("windowTitleLineEdit");

        horizontalLayout_2->addWidget(windowTitleLineEdit);

        windowTitleButton = new QToolButton(groupBox);
        windowTitleButton->setObjectName("windowTitleButton");

        horizontalLayout_2->addWidget(windowTitleButton);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 2);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        smoothScrollingCheckBox = new QCheckBox(groupBox_2);
        smoothScrollingCheckBox->setObjectName("smoothScrollingCheckBox");

        verticalLayout_3->addWidget(smoothScrollingCheckBox);

        protocolCheckBox = new QCheckBox(groupBox_2);
        protocolCheckBox->setObjectName("protocolCheckBox");

        verticalLayout_3->addWidget(protocolCheckBox);

        anchorCheckBox = new QCheckBox(groupBox_2);
        anchorCheckBox->setObjectName("anchorCheckBox");

        verticalLayout_3->addWidget(anchorCheckBox);

        showSplittersCheckBox = new QCheckBox(groupBox_2);
        showSplittersCheckBox->setObjectName("showSplittersCheckBox");

        verticalLayout_3->addWidget(showSplittersCheckBox);

        popupCheckBox = new QCheckBox(groupBox_2);
        popupCheckBox->setObjectName("popupCheckBox");

        verticalLayout_3->addWidget(popupCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        popupTemplateButton = new QPushButton(groupBox_2);
        popupTemplateButton->setObjectName("popupTemplateButton");
        popupTemplateButton->setEnabled(false);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("configure");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        popupTemplateButton->setIcon(icon);

        horizontalLayout_3->addWidget(popupTemplateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout = new QVBoxLayout(groupBox_6);
        verticalLayout->setObjectName("verticalLayout");
        numbersCheckBox = new QCheckBox(groupBox_6);
        numbersCheckBox->setObjectName("numbersCheckBox");

        verticalLayout->addWidget(numbersCheckBox);

        lengthsCheckBox = new QCheckBox(groupBox_6);
        lengthsCheckBox->setObjectName("lengthsCheckBox");

        verticalLayout->addWidget(lengthsCheckBox);

        alignCheckBox = new QCheckBox(groupBox_6);
        alignCheckBox->setObjectName("alignCheckBox");
        alignCheckBox->setEnabled(false);

        verticalLayout->addWidget(alignCheckBox);


        verticalLayout_5->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        scrollArea = new QScrollArea(tab_5);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 625, 529));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(groupBox_4);
        label->setObjectName("label");

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        vColor1 = new ColorWidget(groupBox_4);
        vColor1->setObjectName("vColor1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vColor1->sizePolicy().hasHeightForWidth());
        vColor1->setSizePolicy(sizePolicy);
        vColor1->setMinimumSize(QSize(20, 20));
        vColor1->setMaximumSize(QSize(20, 20));
        vColor1->setFrameShape(QFrame::Box);
        vColor1->setFrameShadow(QFrame::Plain);

        gridLayout_4->addWidget(vColor1, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 0, 3, 1, 1);

        peaksColor = new ColorWidget(groupBox_4);
        peaksColor->setObjectName("peaksColor");
        sizePolicy.setHeightForWidth(peaksColor->sizePolicy().hasHeightForWidth());
        peaksColor->setSizePolicy(sizePolicy);
        peaksColor->setMinimumSize(QSize(20, 20));
        peaksColor->setMaximumSize(QSize(20, 20));
        peaksColor->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(peaksColor, 0, 4, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        vColor2 = new ColorWidget(groupBox_4);
        vColor2->setObjectName("vColor2");
        sizePolicy.setHeightForWidth(vColor2->sizePolicy().hasHeightForWidth());
        vColor2->setSizePolicy(sizePolicy);
        vColor2->setMinimumSize(QSize(20, 20));
        vColor2->setMaximumSize(QSize(20, 20));
        vColor2->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(vColor2, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 1, 3, 1, 1);

        bgColor = new ColorWidget(groupBox_4);
        bgColor->setObjectName("bgColor");
        sizePolicy.setHeightForWidth(bgColor->sizePolicy().hasHeightForWidth());
        bgColor->setSizePolicy(sizePolicy);
        bgColor->setMinimumSize(QSize(20, 20));
        bgColor->setMaximumSize(QSize(20, 20));
        bgColor->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(bgColor, 1, 4, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        vColor3 = new ColorWidget(groupBox_4);
        vColor3->setObjectName("vColor3");
        sizePolicy.setHeightForWidth(vColor3->sizePolicy().hasHeightForWidth());
        vColor3->setSizePolicy(sizePolicy);
        vColor3->setMinimumSize(QSize(20, 20));
        vColor3->setMaximumSize(QSize(20, 20));
        vColor3->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(vColor3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 3, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 3, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 5, 2, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        resetColorsButton = new QPushButton(groupBox_4);
        resetColorsButton->setObjectName("resetColorsButton");

        horizontalLayout_6->addWidget(resetColorsButton);


        gridLayout_4->addLayout(horizontalLayout_6, 3, 0, 1, 6);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName("gridLayout_7");
        plSystemColorsCheckBox = new QCheckBox(groupBox_3);
        plSystemColorsCheckBox->setObjectName("plSystemColorsCheckBox");
        plSystemColorsCheckBox->setChecked(true);

        gridLayout_7->addWidget(plSystemColorsCheckBox, 0, 0, 1, 6);

        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(false);
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        plBg1Color = new ColorWidget(widget_2);
        plBg1Color->setObjectName("plBg1Color");
        sizePolicy.setHeightForWidth(plBg1Color->sizePolicy().hasHeightForWidth());
        plBg1Color->setSizePolicy(sizePolicy);
        plBg1Color->setMinimumSize(QSize(20, 20));
        plBg1Color->setMaximumSize(QSize(20, 20));
        plBg1Color->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(plBg1Color, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 43, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 3, 1);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName("label_19");

        gridLayout_2->addWidget(label_19, 0, 3, 1, 1);

        plSplitterColor = new ColorWidget(widget_2);
        plSplitterColor->setObjectName("plSplitterColor");
        sizePolicy.setHeightForWidth(plSplitterColor->sizePolicy().hasHeightForWidth());
        plSplitterColor->setSizePolicy(sizePolicy);
        plSplitterColor->setMinimumSize(QSize(20, 20));
        plSplitterColor->setMaximumSize(QSize(20, 20));
        plSplitterColor->setBaseSize(QSize(20, 20));
        plSplitterColor->setFrameShape(QFrame::Box);
        plSplitterColor->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(plSplitterColor, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(66, 68, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 5, 3, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        plBg2Color = new ColorWidget(widget_2);
        plBg2Color->setObjectName("plBg2Color");
        sizePolicy.setHeightForWidth(plBg2Color->sizePolicy().hasHeightForWidth());
        plBg2Color->setSizePolicy(sizePolicy);
        plBg2Color->setMinimumSize(QSize(20, 20));
        plBg2Color->setMaximumSize(QSize(20, 20));
        plBg2Color->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(plBg2Color, 1, 1, 1, 1);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 1, 3, 1, 1);

        plTextNormalColor = new ColorWidget(widget_2);
        plTextNormalColor->setObjectName("plTextNormalColor");
        sizePolicy.setHeightForWidth(plTextNormalColor->sizePolicy().hasHeightForWidth());
        plTextNormalColor->setSizePolicy(sizePolicy);
        plTextNormalColor->setMinimumSize(QSize(20, 20));
        plTextNormalColor->setMaximumSize(QSize(20, 20));
        plTextNormalColor->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(plTextNormalColor, 1, 4, 1, 1);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        plHlColor = new ColorWidget(widget_2);
        plHlColor->setObjectName("plHlColor");
        sizePolicy.setHeightForWidth(plHlColor->sizePolicy().hasHeightForWidth());
        plHlColor->setSizePolicy(sizePolicy);
        plHlColor->setMinimumSize(QSize(20, 20));
        plHlColor->setMaximumSize(QSize(20, 20));
        plHlColor->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(plHlColor, 2, 1, 1, 1);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 2, 3, 1, 1);

        plTextHlCurrentColor = new ColorWidget(widget_2);
        plTextHlCurrentColor->setObjectName("plTextHlCurrentColor");
        sizePolicy.setHeightForWidth(plTextHlCurrentColor->sizePolicy().hasHeightForWidth());
        plTextHlCurrentColor->setSizePolicy(sizePolicy);
        plTextHlCurrentColor->setMinimumSize(QSize(20, 20));
        plTextHlCurrentColor->setMaximumSize(QSize(20, 20));
        plTextHlCurrentColor->setFrameShape(QFrame::Box);
        plTextHlCurrentColor->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(plTextHlCurrentColor, 2, 4, 1, 1);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 6);

        plOverrideGroupColorsCheckBox = new QCheckBox(groupBox_3);
        plOverrideGroupColorsCheckBox->setObjectName("plOverrideGroupColorsCheckBox");

        gridLayout_7->addWidget(plOverrideGroupColorsCheckBox, 2, 0, 1, 6);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");
        label_15->setEnabled(false);

        gridLayout_7->addWidget(label_15, 3, 0, 1, 1);

        plGrTextColor = new ColorWidget(groupBox_3);
        plGrTextColor->setObjectName("plGrTextColor");
        plGrTextColor->setEnabled(false);
        sizePolicy.setHeightForWidth(plGrTextColor->sizePolicy().hasHeightForWidth());
        plGrTextColor->setSizePolicy(sizePolicy);
        plGrTextColor->setMinimumSize(QSize(20, 20));
        plGrTextColor->setFrameShape(QFrame::Box);
        plGrTextColor->setFrameShadow(QFrame::Plain);

        gridLayout_7->addWidget(plGrTextColor, 3, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_15, 3, 2, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setEnabled(false);

        gridLayout_7->addWidget(label_14, 3, 3, 1, 1);

        plGrBgColor = new ColorWidget(groupBox_3);
        plGrBgColor->setObjectName("plGrBgColor");
        plGrBgColor->setEnabled(false);
        sizePolicy.setHeightForWidth(plGrBgColor->sizePolicy().hasHeightForWidth());
        plGrBgColor->setSizePolicy(sizePolicy);
        plGrBgColor->setMinimumSize(QSize(20, 20));
        plGrBgColor->setFrameShape(QFrame::Box);
        plGrBgColor->setFrameShadow(QFrame::Plain);

        gridLayout_7->addWidget(plGrBgColor, 3, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(275, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_9, 3, 5, 1, 1);

        plOverrideCurrentTrackColorsCheckBox = new QCheckBox(groupBox_3);
        plOverrideCurrentTrackColorsCheckBox->setObjectName("plOverrideCurrentTrackColorsCheckBox");

        gridLayout_7->addWidget(plOverrideCurrentTrackColorsCheckBox, 4, 0, 1, 6);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setEnabled(false);

        gridLayout_7->addWidget(label_11, 5, 0, 1, 1);

        plTextCurrentColor = new ColorWidget(groupBox_3);
        plTextCurrentColor->setObjectName("plTextCurrentColor");
        plTextCurrentColor->setEnabled(false);
        sizePolicy.setHeightForWidth(plTextCurrentColor->sizePolicy().hasHeightForWidth());
        plTextCurrentColor->setSizePolicy(sizePolicy);
        plTextCurrentColor->setMinimumSize(QSize(20, 20));
        plTextCurrentColor->setMaximumSize(QSize(20, 20));
        plTextCurrentColor->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(plTextCurrentColor, 5, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_16, 5, 2, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName("label_20");
        label_20->setEnabled(false);

        gridLayout_7->addWidget(label_20, 5, 3, 1, 1);

        plCurrentTrackBgColor = new ColorWidget(groupBox_3);
        plCurrentTrackBgColor->setObjectName("plCurrentTrackBgColor");
        plCurrentTrackBgColor->setEnabled(false);
        sizePolicy.setHeightForWidth(plCurrentTrackBgColor->sizePolicy().hasHeightForWidth());
        plCurrentTrackBgColor->setSizePolicy(sizePolicy);
        plCurrentTrackBgColor->setMinimumSize(QSize(20, 20));
        plCurrentTrackBgColor->setFrameShape(QFrame::Box);
        plCurrentTrackBgColor->setFrameShadow(QFrame::Plain);

        gridLayout_7->addWidget(plCurrentTrackBgColor, 5, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(275, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 5, 5, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName("groupBox_8");
        gridLayout_5 = new QGridLayout(groupBox_8);
        gridLayout_5->setObjectName("gridLayout_5");
        label_24 = new QLabel(groupBox_8);
        label_24->setObjectName("label_24");

        gridLayout_5->addWidget(label_24, 1, 0, 1, 1);

        wfsbBgColor = new ColorWidget(groupBox_8);
        wfsbBgColor->setObjectName("wfsbBgColor");
        sizePolicy.setHeightForWidth(wfsbBgColor->sizePolicy().hasHeightForWidth());
        wfsbBgColor->setSizePolicy(sizePolicy);
        wfsbBgColor->setMinimumSize(QSize(20, 20));
        wfsbBgColor->setMaximumSize(QSize(20, 20));
        wfsbBgColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(wfsbBgColor, 0, 1, 1, 1);

        wfsbProgressBarColor = new ColorWidget(groupBox_8);
        wfsbProgressBarColor->setObjectName("wfsbProgressBarColor");
        sizePolicy.setHeightForWidth(wfsbProgressBarColor->sizePolicy().hasHeightForWidth());
        wfsbProgressBarColor->setSizePolicy(sizePolicy);
        wfsbProgressBarColor->setMinimumSize(QSize(20, 20));
        wfsbProgressBarColor->setMaximumSize(QSize(20, 20));
        wfsbProgressBarColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(wfsbProgressBarColor, 1, 1, 1, 1);

        wfsbRmsColor = new ColorWidget(groupBox_8);
        wfsbRmsColor->setObjectName("wfsbRmsColor");
        sizePolicy.setHeightForWidth(wfsbRmsColor->sizePolicy().hasHeightForWidth());
        wfsbRmsColor->setSizePolicy(sizePolicy);
        wfsbRmsColor->setMinimumSize(QSize(20, 20));
        wfsbRmsColor->setMaximumSize(QSize(20, 20));
        wfsbRmsColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(wfsbRmsColor, 1, 4, 1, 1);

        label_21 = new QLabel(groupBox_8);
        label_21->setObjectName("label_21");

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        label_23 = new QLabel(groupBox_8);
        label_23->setObjectName("label_23");

        gridLayout_5->addWidget(label_23, 1, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_11, 0, 2, 2, 1);

        wfsbWaveFormColor = new ColorWidget(groupBox_8);
        wfsbWaveFormColor->setObjectName("wfsbWaveFormColor");
        sizePolicy.setHeightForWidth(wfsbWaveFormColor->sizePolicy().hasHeightForWidth());
        wfsbWaveFormColor->setSizePolicy(sizePolicy);
        wfsbWaveFormColor->setMinimumSize(QSize(20, 20));
        wfsbWaveFormColor->setMaximumSize(QSize(20, 20));
        wfsbWaveFormColor->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(wfsbWaveFormColor, 0, 4, 1, 1);

        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName("label_22");

        gridLayout_5->addWidget(label_22, 0, 3, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 5, 2, 1);


        verticalLayout_4->addWidget(groupBox_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_8->addWidget(scrollArea);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        systemFontsCheckBox = new QCheckBox(tab_3);
        systemFontsCheckBox->setObjectName("systemFontsCheckBox");
        systemFontsCheckBox->setChecked(true);

        verticalLayout_6->addWidget(systemFontsCheckBox);

        widget = new QWidget(tab_3);
        widget->setObjectName("widget");
        widget->setEnabled(false);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        tabsFontButton = new QToolButton(widget);
        tabsFontButton->setObjectName("tabsFontButton");
        tabsFontButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(tabsFontButton, 4, 2, 1, 1);

        columnFontButton = new QToolButton(widget);
        columnFontButton->setObjectName("columnFontButton");
        columnFontButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(columnFontButton, 3, 2, 1, 1);

        tabsFontLabel = new QLabel(widget);
        tabsFontLabel->setObjectName("tabsFontLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabsFontLabel->sizePolicy().hasHeightForWidth());
        tabsFontLabel->setSizePolicy(sizePolicy1);
        tabsFontLabel->setFrameShape(QFrame::StyledPanel);
        tabsFontLabel->setFrameShadow(QFrame::Sunken);
        tabsFontLabel->setText(QString::fromUtf8("???"));

        gridLayout->addWidget(tabsFontLabel, 4, 1, 1, 1);

        plFontLabel = new QLabel(widget);
        plFontLabel->setObjectName("plFontLabel");
        sizePolicy1.setHeightForWidth(plFontLabel->sizePolicy().hasHeightForWidth());
        plFontLabel->setSizePolicy(sizePolicy1);
        plFontLabel->setFrameShape(QFrame::StyledPanel);
        plFontLabel->setFrameShadow(QFrame::Sunken);
        plFontLabel->setText(QString::fromUtf8("???"));

        gridLayout->addWidget(plFontLabel, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 3, 0, 1, 1);

        columnFontLabel = new QLabel(widget);
        columnFontLabel->setObjectName("columnFontLabel");
        sizePolicy1.setHeightForWidth(columnFontLabel->sizePolicy().hasHeightForWidth());
        columnFontLabel->setSizePolicy(sizePolicy1);
        columnFontLabel->setFrameShape(QFrame::StyledPanel);
        columnFontLabel->setFrameShadow(QFrame::Sunken);
        columnFontLabel->setText(QString::fromUtf8("???"));

        gridLayout->addWidget(columnFontLabel, 3, 1, 1, 1);

        plFontButton = new QToolButton(widget);
        plFontButton->setObjectName("plFontButton");
        plFontButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(plFontButton, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        resetFontsButton = new QPushButton(widget);
        resetFontsButton->setObjectName("resetFontsButton");

        horizontalLayout_4->addWidget(resetFontsButton);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 3);

        label_17 = new QLabel(widget);
        label_17->setObjectName("label_17");
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        label_26 = new QLabel(widget);
        label_26->setObjectName("label_26");

        gridLayout->addWidget(label_26, 1, 0, 1, 1);

        label_27 = new QLabel(widget);
        label_27->setObjectName("label_27");

        gridLayout->addWidget(label_27, 2, 0, 1, 1);

        groupFontLabel = new QLabel(widget);
        groupFontLabel->setObjectName("groupFontLabel");
        groupFontLabel->setFrameShape(QFrame::StyledPanel);
        groupFontLabel->setFrameShadow(QFrame::Sunken);
        groupFontLabel->setText(QString::fromUtf8("???"));

        gridLayout->addWidget(groupFontLabel, 1, 1, 1, 1);

        extraRowFontLabel = new QLabel(widget);
        extraRowFontLabel->setObjectName("extraRowFontLabel");
        extraRowFontLabel->setFrameShape(QFrame::StyledPanel);
        extraRowFontLabel->setFrameShadow(QFrame::Sunken);
        extraRowFontLabel->setText(QString::fromUtf8("???"));

        gridLayout->addWidget(extraRowFontLabel, 2, 1, 1, 1);

        groupFontButton = new QToolButton(widget);
        groupFontButton->setObjectName("groupFontButton");
        groupFontButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(groupFontButton, 1, 2, 1, 1);

        extraRowFontButton = new QToolButton(widget);
        extraRowFontButton->setObjectName("extraRowFontButton");
        extraRowFontButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(extraRowFontButton, 2, 2, 1, 1);


        verticalLayout_6->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(308, 382, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        formLayout_2 = new QFormLayout(groupBox_5);
        formLayout_2->setObjectName("formLayout_2");
        tabsClosableCheckBox = new QCheckBox(groupBox_5);
        tabsClosableCheckBox->setObjectName("tabsClosableCheckBox");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::SpanningRole, tabsClosableCheckBox);

        showTabListMenuCheckBox = new QCheckBox(groupBox_5);
        showTabListMenuCheckBox->setObjectName("showTabListMenuCheckBox");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::SpanningRole, showTabListMenuCheckBox);

        showNewPLCheckBox = new QCheckBox(groupBox_5);
        showNewPLCheckBox->setObjectName("showNewPLCheckBox");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, showNewPLCheckBox);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName("label_25");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_25);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        tabPositionComboBox = new QComboBox(groupBox_5);
        tabPositionComboBox->setObjectName("tabPositionComboBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabPositionComboBox->sizePolicy().hasHeightForWidth());
        tabPositionComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(tabPositionComboBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        formLayout_2->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_7);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName("groupBox_7");
        horizontalLayout_5 = new QHBoxLayout(groupBox_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName("label_18");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_18);

        toolBarIconSizeComboBox = new QComboBox(groupBox_7);
        toolBarIconSizeComboBox->setObjectName("toolBarIconSizeComboBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, toolBarIconSizeComboBox);


        horizontalLayout_5->addLayout(formLayout);

        horizontalSpacer_8 = new QSpacerItem(125, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        customizeToolBarButton = new QPushButton(groupBox_7);
        customizeToolBarButton->setObjectName("customizeToolBarButton");
        customizeToolBarButton->setIcon(icon);

        horizontalLayout_5->addWidget(customizeToolBarButton);


        verticalLayout_2->addWidget(groupBox_7);

        verticalSpacer_2 = new QSpacerItem(20, 267, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QSUISettings);
        QObject::connect(numbersCheckBox, &QCheckBox::toggled, alignCheckBox, &QCheckBox::setEnabled);
        QObject::connect(popupCheckBox, &QCheckBox::toggled, popupTemplateButton, &QPushButton::setEnabled);
        QObject::connect(systemFontsCheckBox, &QCheckBox::toggled, widget, &QWidget::setDisabled);
        QObject::connect(plSystemColorsCheckBox, &QCheckBox::toggled, widget_2, &QWidget::setDisabled);
        QObject::connect(plOverrideGroupColorsCheckBox, &QCheckBox::toggled, label_14, &QLabel::setEnabled);
        QObject::connect(plOverrideGroupColorsCheckBox, SIGNAL(toggled(bool)), plGrBgColor, SLOT(setEnabled(bool)));
        QObject::connect(plOverrideCurrentTrackColorsCheckBox, &QCheckBox::toggled, label_20, &QLabel::setEnabled);
        QObject::connect(plOverrideCurrentTrackColorsCheckBox, SIGNAL(toggled(bool)), plCurrentTrackBgColor, SLOT(setEnabled(bool)));
        QObject::connect(plOverrideGroupColorsCheckBox, &QCheckBox::toggled, label_15, &QLabel::setEnabled);
        QObject::connect(plOverrideGroupColorsCheckBox, SIGNAL(toggled(bool)), plGrTextColor, SLOT(setEnabled(bool)));
        QObject::connect(plOverrideCurrentTrackColorsCheckBox, &QCheckBox::toggled, label_11, &QLabel::setEnabled);
        QObject::connect(plOverrideCurrentTrackColorsCheckBox, SIGNAL(toggled(bool)), plTextCurrentColor, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QSUISettings);
    } // setupUi

    void retranslateUi(QWidget *QSUISettings)
    {
        groupBox->setTitle(QCoreApplication::translate("QSUISettings", "Main Window", nullptr));
        hideOnCloseCheckBox->setText(QCoreApplication::translate("QSUISettings", "Hide on close", nullptr));
        hiddenCheckBox->setText(QCoreApplication::translate("QSUISettings", "Start hidden", nullptr));
        label_13->setText(QCoreApplication::translate("QSUISettings", "Window title format:", nullptr));
        windowTitleButton->setText(QCoreApplication::translate("QSUISettings", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QSUISettings", "Song Display", nullptr));
        smoothScrollingCheckBox->setText(QCoreApplication::translate("QSUISettings", "Use smooth scrolling", nullptr));
        protocolCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show protocol", nullptr));
        anchorCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show anchor", nullptr));
        showSplittersCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show splitters", nullptr));
        popupCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show popup information", nullptr));
        popupTemplateButton->setText(QCoreApplication::translate("QSUISettings", "Edit template", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("QSUISettings", "Single Column Mode", nullptr));
        numbersCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show song numbers", nullptr));
        lengthsCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show song lengths", nullptr));
        alignCheckBox->setText(QCoreApplication::translate("QSUISettings", "Align song numbers", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QSUISettings", "View", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QSUISettings", "Visualization Colors", nullptr));
        label->setText(QCoreApplication::translate("QSUISettings", "Color #1:", nullptr));
        label_3->setText(QCoreApplication::translate("QSUISettings", "Peaks:", nullptr));
        label_4->setText(QCoreApplication::translate("QSUISettings", "Color #2:", nullptr));
        label_5->setText(QCoreApplication::translate("QSUISettings", "Background:", nullptr));
        label_6->setText(QCoreApplication::translate("QSUISettings", "Color #3:", nullptr));
        resetColorsButton->setText(QCoreApplication::translate("QSUISettings", "Reset colors", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QSUISettings", "Playlist Colors", nullptr));
        plSystemColorsCheckBox->setText(QCoreApplication::translate("QSUISettings", "Use system colors", nullptr));
        label_7->setText(QCoreApplication::translate("QSUISettings", "Background #1:", nullptr));
        label_19->setText(QCoreApplication::translate("QSUISettings", "Splitter:", nullptr));
        label_8->setText(QCoreApplication::translate("QSUISettings", "Background #2:", nullptr));
        label_10->setText(QCoreApplication::translate("QSUISettings", "Normal text:", nullptr));
        label_9->setText(QCoreApplication::translate("QSUISettings", "Highlighted background:", nullptr));
        label_12->setText(QCoreApplication::translate("QSUISettings", "Highlighted text:", nullptr));
        plOverrideGroupColorsCheckBox->setText(QCoreApplication::translate("QSUISettings", "Override group colors", nullptr));
        label_15->setText(QCoreApplication::translate("QSUISettings", "Group text:", nullptr));
        label_14->setText(QCoreApplication::translate("QSUISettings", "Group background:", nullptr));
        plOverrideCurrentTrackColorsCheckBox->setText(QCoreApplication::translate("QSUISettings", "Override current track colors", nullptr));
        label_11->setText(QCoreApplication::translate("QSUISettings", "Current track text:", nullptr));
        label_20->setText(QCoreApplication::translate("QSUISettings", "Current track background:", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("QSUISettings", "Waveform Seekbar Colors", nullptr));
        label_24->setText(QCoreApplication::translate("QSUISettings", "Progress bar:", nullptr));
        label_21->setText(QCoreApplication::translate("QSUISettings", "Background:", nullptr));
        label_23->setText(QCoreApplication::translate("QSUISettings", "RMS:", nullptr));
        label_22->setText(QCoreApplication::translate("QSUISettings", "Waveform:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("QSUISettings", "Colors", nullptr));
        systemFontsCheckBox->setText(QCoreApplication::translate("QSUISettings", "Use system fonts", nullptr));
        label_2->setText(QCoreApplication::translate("QSUISettings", "Playlist:", nullptr));
        label_16->setText(QCoreApplication::translate("QSUISettings", "Column headers:", nullptr));
        resetFontsButton->setText(QCoreApplication::translate("QSUISettings", "Reset fonts", nullptr));
        label_17->setText(QCoreApplication::translate("QSUISettings", "Tab names:", nullptr));
        label_26->setText(QCoreApplication::translate("QSUISettings", "Groups:", nullptr));
        label_27->setText(QCoreApplication::translate("QSUISettings", "Extra group row:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("QSUISettings", "Fonts", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QSUISettings", "Tabs", nullptr));
        tabsClosableCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show close buttons", nullptr));
        showTabListMenuCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show tab list menu", nullptr));
        showNewPLCheckBox->setText(QCoreApplication::translate("QSUISettings", "Show 'New Playlist' button", nullptr));
        label_25->setText(QCoreApplication::translate("QSUISettings", "Tab position:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("QSUISettings", "Toolbars", nullptr));
        label_18->setText(QCoreApplication::translate("QSUISettings", "Icon size:", nullptr));
        customizeToolBarButton->setText(QCoreApplication::translate("QSUISettings", "Customize...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QSUISettings", "Miscellaneous", nullptr));
        (void)QSUISettings;
    } // retranslateUi

};

namespace Ui {
    class QSUISettings: public Ui_QSUISettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUISETTINGS_H
