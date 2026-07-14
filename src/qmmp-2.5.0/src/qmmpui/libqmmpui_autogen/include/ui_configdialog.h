/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *contentsWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *metaDataCheckBox;
    QCheckBox *plMetaDataCheckBox;
    QCheckBox *underscoresCheckBox;
    QCheckBox *per20CheckBox;
    QGroupBox *groupBox_12;
    QFormLayout *formLayout_2;
    QLabel *label_23;
    QComboBox *linesPerGroupComboBox;
    QCheckBox *showDividingLineCheckBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *groupLineEdit;
    QToolButton *groupButton;
    QLabel *extraRowFormatLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *extraRowFormatLineEdit;
    QToolButton *extraRowFormatButton;
    QCheckBox *showExtraRowCheckBox;
    QCheckBox *groupsShowCoverCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_20;
    QLabel *label;
    QLineEdit *dirRestrictLineEdit;
    QLabel *label_2;
    QLineEdit *dirExcludeLineEdit;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *autoSavePlayListCheckBox;
    QCheckBox *clearPrevPLCheckBox;
    QCheckBox *skipExistingTracksCheckBox;
    QCheckBox *stopAfterRemovingCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *preferencesButton;
    QPushButton *informationButton;
    QSpacerItem *spacerItem;
    QTreeWidget *treeWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QComboBox *langComboBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *abrCheckBox;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_70;
    QCheckBox *continuePlaybackCheckBox;
    QCheckBox *byContentCheckBox;
    QCheckBox *defaultPlayListCheckBox;
    QLineEdit *defaultPlayListLineEdit;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_6;
    QCheckBox *useCoverFilesCheckBox;
    QLabel *label_11;
    QLineEdit *coverIncludeLineEdit;
    QLabel *label_12;
    QLineEdit *coverExcludeLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QSpinBox *coverDepthSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *clipboardCheckBox;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *cueSystemFontCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_21;
    QLabel *cueFontLabel;
    QToolButton *cueFontButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *network;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QCheckBox *enableProxyCheckBox;
    QLabel *label_19;
    QComboBox *proxyTypeComboBox;
    QLabel *label_5;
    QLineEdit *hostLineEdit;
    QLabel *label_6;
    QLineEdit *portLineEdit;
    QCheckBox *authProxyCheckBox;
    QLabel *label_7;
    QLineEdit *proxyUserLineEdit;
    QLabel *label_8;
    QLineEdit *proxyPasswLineEdit;
    QSpacerItem *spacerItem1;
    QWidget *audio;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_7;
    QLabel *label_14;
    QComboBox *replayGainModeComboBox;
    QLabel *label_15;
    QDoubleSpinBox *preampDoubleSpinBox;
    QLabel *label_17;
    QLabel *label_16;
    QDoubleSpinBox *defaultGainDoubleSpinBox;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *clippingCheckBox;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout3;
    QLabel *label_20;
    QCheckBox *ditheringCheckBox;
    QSpinBox *bufferSizeSpinBox;
    QLabel *label_9;
    QComboBox *bitDepthComboBox;
    QCheckBox *softVolumeCheckBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *volumeStepSpinBox;
    QCheckBox *twoPassEqCheckBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName("ConfigDialog");
        ConfigDialog->resize(861, 664);
        verticalLayout_2 = new QVBoxLayout(ConfigDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(6, -1, 6, 6);
        splitter = new QSplitter(ConfigDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        contentsWidget = new QListWidget(splitter);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/playlist.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(contentsWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/plugins.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(contentsWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/advanced.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(contentsWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/network.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(contentsWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/replaygain.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(contentsWidget);
        __qlistwidgetitem4->setIcon(icon4);
        contentsWidget->setObjectName("contentsWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentsWidget->sizePolicy().hasHeightForWidth());
        contentsWidget->setSizePolicy(sizePolicy);
        contentsWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        contentsWidget->setIconSize(QSize(38, 38));
        contentsWidget->setSpacing(2);
        contentsWidget->setSelectionRectVisible(false);
        splitter->addWidget(contentsWidget);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Raised);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -52, 569, 665));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        metaDataCheckBox = new QCheckBox(groupBox_3);
        metaDataCheckBox->setObjectName("metaDataCheckBox");

        verticalLayout->addWidget(metaDataCheckBox);

        plMetaDataCheckBox = new QCheckBox(groupBox_3);
        plMetaDataCheckBox->setObjectName("plMetaDataCheckBox");
        plMetaDataCheckBox->setEnabled(false);

        verticalLayout->addWidget(plMetaDataCheckBox);

        underscoresCheckBox = new QCheckBox(groupBox_3);
        underscoresCheckBox->setObjectName("underscoresCheckBox");

        verticalLayout->addWidget(underscoresCheckBox);

        per20CheckBox = new QCheckBox(groupBox_3);
        per20CheckBox->setObjectName("per20CheckBox");

        verticalLayout->addWidget(per20CheckBox);


        verticalLayout_9->addWidget(groupBox_3);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_12->setObjectName("groupBox_12");
        formLayout_2 = new QFormLayout(groupBox_12);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_23 = new QLabel(groupBox_12);
        label_23->setObjectName("label_23");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_23);

        linesPerGroupComboBox = new QComboBox(groupBox_12);
        linesPerGroupComboBox->setObjectName("linesPerGroupComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(linesPerGroupComboBox->sizePolicy().hasHeightForWidth());
        linesPerGroupComboBox->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, linesPerGroupComboBox);

        showDividingLineCheckBox = new QCheckBox(groupBox_12);
        showDividingLineCheckBox->setObjectName("showDividingLineCheckBox");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, showDividingLineCheckBox);

        label_3 = new QLabel(groupBox_12);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupLineEdit = new QLineEdit(groupBox_12);
        groupLineEdit->setObjectName("groupLineEdit");
        groupLineEdit->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(groupLineEdit);

        groupButton = new QToolButton(groupBox_12);
        groupButton->setObjectName("groupButton");

        horizontalLayout_2->addWidget(groupButton);


        formLayout_2->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        extraRowFormatLabel = new QLabel(groupBox_12);
        extraRowFormatLabel->setObjectName("extraRowFormatLabel");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::LabelRole, extraRowFormatLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        extraRowFormatLineEdit = new QLineEdit(groupBox_12);
        extraRowFormatLineEdit->setObjectName("extraRowFormatLineEdit");
        extraRowFormatLineEdit->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(extraRowFormatLineEdit);

        extraRowFormatButton = new QToolButton(groupBox_12);
        extraRowFormatButton->setObjectName("extraRowFormatButton");

        horizontalLayout_3->addWidget(extraRowFormatButton);


        formLayout_2->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        showExtraRowCheckBox = new QCheckBox(groupBox_12);
        showExtraRowCheckBox->setObjectName("showExtraRowCheckBox");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::SpanningRole, showExtraRowCheckBox);

        groupsShowCoverCheckBox = new QCheckBox(groupBox_12);
        groupsShowCoverCheckBox->setObjectName("groupsShowCoverCheckBox");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::SpanningRole, groupsShowCoverCheckBox);


        verticalLayout_9->addWidget(groupBox_12);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_20 = new QGridLayout(groupBox_2);
        gridLayout_20->setObjectName("gridLayout_20");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_20->addWidget(label, 0, 0, 1, 1);

        dirRestrictLineEdit = new QLineEdit(groupBox_2);
        dirRestrictLineEdit->setObjectName("dirRestrictLineEdit");
        dirRestrictLineEdit->setClearButtonEnabled(true);

        gridLayout_20->addWidget(dirRestrictLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_20->addWidget(label_2, 1, 0, 1, 1);

        dirExcludeLineEdit = new QLineEdit(groupBox_2);
        dirExcludeLineEdit->setObjectName("dirExcludeLineEdit");
        dirExcludeLineEdit->setClearButtonEnabled(true);

        gridLayout_20->addWidget(dirExcludeLineEdit, 1, 1, 1, 1);


        verticalLayout_9->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        autoSavePlayListCheckBox = new QCheckBox(groupBox_4);
        autoSavePlayListCheckBox->setObjectName("autoSavePlayListCheckBox");

        verticalLayout_4->addWidget(autoSavePlayListCheckBox);

        clearPrevPLCheckBox = new QCheckBox(groupBox_4);
        clearPrevPLCheckBox->setObjectName("clearPrevPLCheckBox");

        verticalLayout_4->addWidget(clearPrevPLCheckBox);

        skipExistingTracksCheckBox = new QCheckBox(groupBox_4);
        skipExistingTracksCheckBox->setObjectName("skipExistingTracksCheckBox");

        verticalLayout_4->addWidget(skipExistingTracksCheckBox);

        stopAfterRemovingCheckBox = new QCheckBox(groupBox_4);
        stopAfterRemovingCheckBox->setObjectName("stopAfterRemovingCheckBox");

        verticalLayout_4->addWidget(stopAfterRemovingCheckBox);


        verticalLayout_9->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_10->addWidget(scrollArea);

        stackedWidget->addWidget(page);
        widget = new QWidget();
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 5, 0, 0);
        preferencesButton = new QPushButton(widget);
        preferencesButton->setObjectName("preferencesButton");
        preferencesButton->setMinimumSize(QSize(0, 0));
        QIcon icon5;
        QString iconThemeName = QString::fromUtf8("configure");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        preferencesButton->setIcon(icon5);

        gridLayout->addWidget(preferencesButton, 1, 0, 1, 1);

        informationButton = new QPushButton(widget);
        informationButton->setObjectName("informationButton");
        informationButton->setMinimumSize(QSize(0, 0));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("dialog-information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        informationButton->setIcon(icon6);

        gridLayout->addWidget(informationButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        treeWidget = new QTreeWidget(widget);
        treeWidget->setObjectName("treeWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy3);
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setColumnCount(2);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 3);

        stackedWidget->addWidget(widget);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        langComboBox = new QComboBox(groupBox);
        langComboBox->setObjectName("langComboBox");
        sizePolicy2.setHeightForWidth(langComboBox->sizePolicy().hasHeightForWidth());
        langComboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(langComboBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        abrCheckBox = new QCheckBox(groupBox);
        abrCheckBox->setObjectName("abrCheckBox");

        gridLayout_2->addWidget(abrCheckBox, 1, 0, 1, 3);


        verticalLayout_5->addWidget(groupBox);

        groupBox_6 = new QGroupBox(page_2);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_70 = new QGridLayout(groupBox_6);
        gridLayout_70->setObjectName("gridLayout_70");
        continuePlaybackCheckBox = new QCheckBox(groupBox_6);
        continuePlaybackCheckBox->setObjectName("continuePlaybackCheckBox");

        gridLayout_70->addWidget(continuePlaybackCheckBox, 0, 0, 1, 2);

        byContentCheckBox = new QCheckBox(groupBox_6);
        byContentCheckBox->setObjectName("byContentCheckBox");

        gridLayout_70->addWidget(byContentCheckBox, 1, 0, 1, 2);

        defaultPlayListCheckBox = new QCheckBox(groupBox_6);
        defaultPlayListCheckBox->setObjectName("defaultPlayListCheckBox");

        gridLayout_70->addWidget(defaultPlayListCheckBox, 2, 0, 1, 1);

        defaultPlayListLineEdit = new QLineEdit(groupBox_6);
        defaultPlayListLineEdit->setObjectName("defaultPlayListLineEdit");
        defaultPlayListLineEdit->setEnabled(false);

        gridLayout_70->addWidget(defaultPlayListLineEdit, 2, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_6);

        groupBox_9 = new QGroupBox(page_2);
        groupBox_9->setObjectName("groupBox_9");
        gridLayout_6 = new QGridLayout(groupBox_9);
        gridLayout_6->setObjectName("gridLayout_6");
        useCoverFilesCheckBox = new QCheckBox(groupBox_9);
        useCoverFilesCheckBox->setObjectName("useCoverFilesCheckBox");
        useCoverFilesCheckBox->setChecked(true);

        gridLayout_6->addWidget(useCoverFilesCheckBox, 0, 0, 1, 2);

        label_11 = new QLabel(groupBox_9);
        label_11->setObjectName("label_11");

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        coverIncludeLineEdit = new QLineEdit(groupBox_9);
        coverIncludeLineEdit->setObjectName("coverIncludeLineEdit");

        gridLayout_6->addWidget(coverIncludeLineEdit, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName("label_12");

        gridLayout_6->addWidget(label_12, 2, 0, 1, 1);

        coverExcludeLineEdit = new QLineEdit(groupBox_9);
        coverExcludeLineEdit->setObjectName("coverExcludeLineEdit");

        gridLayout_6->addWidget(coverExcludeLineEdit, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName("label_13");

        horizontalLayout_4->addWidget(label_13);

        coverDepthSpinBox = new QSpinBox(groupBox_9);
        coverDepthSpinBox->setObjectName("coverDepthSpinBox");
        coverDepthSpinBox->setMinimumSize(QSize(50, 0));
        coverDepthSpinBox->setMaximum(6);

        horizontalLayout_4->addWidget(coverDepthSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_6->addLayout(horizontalLayout_4, 3, 0, 1, 2);


        verticalLayout_5->addWidget(groupBox_9);

        groupBox_7 = new QGroupBox(page_2);
        groupBox_7->setObjectName("groupBox_7");
        verticalLayout_3 = new QVBoxLayout(groupBox_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        clipboardCheckBox = new QCheckBox(groupBox_7);
        clipboardCheckBox->setObjectName("clipboardCheckBox");

        verticalLayout_3->addWidget(clipboardCheckBox);


        verticalLayout_5->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(page_2);
        groupBox_8->setObjectName("groupBox_8");
        verticalLayout_8 = new QVBoxLayout(groupBox_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        cueSystemFontCheckBox = new QCheckBox(groupBox_8);
        cueSystemFontCheckBox->setObjectName("cueSystemFontCheckBox");
        cueSystemFontCheckBox->setChecked(true);

        verticalLayout_8->addWidget(cueSystemFontCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_21 = new QLabel(groupBox_8);
        label_21->setObjectName("label_21");
        label_21->setEnabled(false);
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_21);

        cueFontLabel = new QLabel(groupBox_8);
        cueFontLabel->setObjectName("cueFontLabel");
        cueFontLabel->setEnabled(false);
        sizePolicy1.setHeightForWidth(cueFontLabel->sizePolicy().hasHeightForWidth());
        cueFontLabel->setSizePolicy(sizePolicy1);
        cueFontLabel->setFrameShape(QFrame::StyledPanel);
        cueFontLabel->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(cueFontLabel);

        cueFontButton = new QToolButton(groupBox_8);
        cueFontButton->setObjectName("cueFontButton");
        cueFontButton->setEnabled(false);

        horizontalLayout->addWidget(cueFontButton);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(groupBox_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page_2);
        network = new QWidget();
        network->setObjectName("network");
        verticalLayout_6 = new QVBoxLayout(network);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_5 = new QGroupBox(network);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setObjectName("formLayout");
        enableProxyCheckBox = new QCheckBox(groupBox_5);
        enableProxyCheckBox->setObjectName("enableProxyCheckBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, enableProxyCheckBox);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName("label_19");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_19);

        proxyTypeComboBox = new QComboBox(groupBox_5);
        proxyTypeComboBox->setObjectName("proxyTypeComboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, proxyTypeComboBox);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        hostLineEdit = new QLineEdit(groupBox_5);
        hostLineEdit->setObjectName("hostLineEdit");
        hostLineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, hostLineEdit);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_6);

        portLineEdit = new QLineEdit(groupBox_5);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, portLineEdit);

        authProxyCheckBox = new QCheckBox(groupBox_5);
        authProxyCheckBox->setObjectName("authProxyCheckBox");

        formLayout->setWidget(4, QFormLayout::ItemRole::SpanningRole, authProxyCheckBox);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_7);

        proxyUserLineEdit = new QLineEdit(groupBox_5);
        proxyUserLineEdit->setObjectName("proxyUserLineEdit");
        proxyUserLineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, proxyUserLineEdit);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_8);

        proxyPasswLineEdit = new QLineEdit(groupBox_5);
        proxyPasswLineEdit->setObjectName("proxyPasswLineEdit");
        proxyPasswLineEdit->setEchoMode(QLineEdit::Password);
        proxyPasswLineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, proxyPasswLineEdit);


        verticalLayout_6->addWidget(groupBox_5);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(spacerItem1);

        stackedWidget->addWidget(network);
        audio = new QWidget();
        audio->setObjectName("audio");
        verticalLayout_7 = new QVBoxLayout(audio);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_10 = new QGroupBox(audio);
        groupBox_10->setObjectName("groupBox_10");
        gridLayout_7 = new QGridLayout(groupBox_10);
        gridLayout_7->setObjectName("gridLayout_7");
        label_14 = new QLabel(groupBox_10);
        label_14->setObjectName("label_14");

        gridLayout_7->addWidget(label_14, 1, 0, 1, 1);

        replayGainModeComboBox = new QComboBox(groupBox_10);
        replayGainModeComboBox->setObjectName("replayGainModeComboBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(replayGainModeComboBox->sizePolicy().hasHeightForWidth());
        replayGainModeComboBox->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(replayGainModeComboBox, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_10);
        label_15->setObjectName("label_15");

        gridLayout_7->addWidget(label_15, 2, 0, 1, 1);

        preampDoubleSpinBox = new QDoubleSpinBox(groupBox_10);
        preampDoubleSpinBox->setObjectName("preampDoubleSpinBox");
        sizePolicy4.setHeightForWidth(preampDoubleSpinBox->sizePolicy().hasHeightForWidth());
        preampDoubleSpinBox->setSizePolicy(sizePolicy4);
        preampDoubleSpinBox->setMinimum(-15.000000000000000);
        preampDoubleSpinBox->setMaximum(15.000000000000000);
        preampDoubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_7->addWidget(preampDoubleSpinBox, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName("label_17");
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_17, 2, 2, 1, 1);

        label_16 = new QLabel(groupBox_10);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_16, 3, 0, 1, 1);

        defaultGainDoubleSpinBox = new QDoubleSpinBox(groupBox_10);
        defaultGainDoubleSpinBox->setObjectName("defaultGainDoubleSpinBox");
        sizePolicy4.setHeightForWidth(defaultGainDoubleSpinBox->sizePolicy().hasHeightForWidth());
        defaultGainDoubleSpinBox->setSizePolicy(sizePolicy4);
        defaultGainDoubleSpinBox->setMinimum(-15.000000000000000);
        defaultGainDoubleSpinBox->setMaximum(15.000000000000000);
        defaultGainDoubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_7->addWidget(defaultGainDoubleSpinBox, 3, 1, 1, 1);

        label_18 = new QLabel(groupBox_10);
        label_18->setObjectName("label_18");
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_18, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        clippingCheckBox = new QCheckBox(groupBox_10);
        clippingCheckBox->setObjectName("clippingCheckBox");

        gridLayout_7->addWidget(clippingCheckBox, 4, 0, 1, 3);


        verticalLayout_7->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(audio);
        groupBox_11->setObjectName("groupBox_11");
        gridLayout3 = new QGridLayout(groupBox_11);
        gridLayout3->setObjectName("gridLayout3");
        label_20 = new QLabel(groupBox_11);
        label_20->setObjectName("label_20");

        gridLayout3->addWidget(label_20, 1, 0, 1, 1);

        ditheringCheckBox = new QCheckBox(groupBox_11);
        ditheringCheckBox->setObjectName("ditheringCheckBox");

        gridLayout3->addWidget(ditheringCheckBox, 4, 0, 1, 3);

        bufferSizeSpinBox = new QSpinBox(groupBox_11);
        bufferSizeSpinBox->setObjectName("bufferSizeSpinBox");
        sizePolicy2.setHeightForWidth(bufferSizeSpinBox->sizePolicy().hasHeightForWidth());
        bufferSizeSpinBox->setSizePolicy(sizePolicy2);
        bufferSizeSpinBox->setMinimumSize(QSize(80, 0));
        bufferSizeSpinBox->setMinimum(500);
        bufferSizeSpinBox->setMaximum(6000);
        bufferSizeSpinBox->setSingleStep(50);

        gridLayout3->addWidget(bufferSizeSpinBox, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_11);
        label_9->setObjectName("label_9");

        gridLayout3->addWidget(label_9, 0, 0, 1, 1);

        bitDepthComboBox = new QComboBox(groupBox_11);
        bitDepthComboBox->setObjectName("bitDepthComboBox");
        bitDepthComboBox->setMinimumSize(QSize(100, 0));

        gridLayout3->addWidget(bitDepthComboBox, 2, 1, 1, 1);

        softVolumeCheckBox = new QCheckBox(groupBox_11);
        softVolumeCheckBox->setObjectName("softVolumeCheckBox");

        gridLayout3->addWidget(softVolumeCheckBox, 3, 0, 1, 3);

        label_4 = new QLabel(groupBox_11);
        label_4->setObjectName("label_4");

        gridLayout3->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(266, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout3->addItem(horizontalSpacer_6, 0, 2, 3, 1);

        volumeStepSpinBox = new QSpinBox(groupBox_11);
        volumeStepSpinBox->setObjectName("volumeStepSpinBox");
        volumeStepSpinBox->setSuffix(QString::fromUtf8("%"));
        volumeStepSpinBox->setMinimum(1);
        volumeStepSpinBox->setMaximum(20);

        gridLayout3->addWidget(volumeStepSpinBox, 0, 1, 1, 1);

        twoPassEqCheckBox = new QCheckBox(groupBox_11);
        twoPassEqCheckBox->setObjectName("twoPassEqCheckBox");

        gridLayout3->addWidget(twoPassEqCheckBox, 5, 0, 1, 3);


        verticalLayout_7->addWidget(groupBox_11);

        verticalSpacer_2 = new QSpacerItem(20, 132, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        stackedWidget->addWidget(audio);
        splitter->addWidget(stackedWidget);

        verticalLayout_2->addWidget(splitter);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ConfigDialog);
        QObject::connect(enableProxyCheckBox, &QCheckBox::toggled, hostLineEdit, &QLineEdit::setEnabled);
        QObject::connect(enableProxyCheckBox, &QCheckBox::toggled, portLineEdit, &QLineEdit::setEnabled);
        QObject::connect(authProxyCheckBox, &QCheckBox::toggled, proxyUserLineEdit, &QLineEdit::setEnabled);
        QObject::connect(authProxyCheckBox, &QCheckBox::toggled, proxyPasswLineEdit, &QLineEdit::setEnabled);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigDialog, qOverload<>(&QDialog::accept));
        QObject::connect(defaultPlayListCheckBox, &QCheckBox::toggled, defaultPlayListLineEdit, &QLineEdit::setEnabled);
        QObject::connect(metaDataCheckBox, &QCheckBox::toggled, plMetaDataCheckBox, &QCheckBox::setEnabled);
        QObject::connect(enableProxyCheckBox, &QCheckBox::toggled, proxyTypeComboBox, &QComboBox::setEnabled);
        QObject::connect(cueSystemFontCheckBox, &QCheckBox::toggled, label_21, &QLabel::setDisabled);
        QObject::connect(cueSystemFontCheckBox, &QCheckBox::toggled, cueFontLabel, &QLabel::setDisabled);
        QObject::connect(cueSystemFontCheckBox, &QCheckBox::toggled, cueFontButton, &QToolButton::setDisabled);

        contentsWidget->setCurrentRow(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QCoreApplication::translate("ConfigDialog", "Qmmp Settings", nullptr));

        const bool __sortingEnabled = contentsWidget->isSortingEnabled();
        contentsWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = contentsWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("ConfigDialog", "Playlist", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = contentsWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("ConfigDialog", "Plugins", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = contentsWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("ConfigDialog", "Advanced", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = contentsWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("ConfigDialog", "Connectivity", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = contentsWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("ConfigDialog", "Audio", nullptr));
        contentsWidget->setSortingEnabled(__sortingEnabled);

        groupBox_3->setTitle(QCoreApplication::translate("ConfigDialog", "Metadata", nullptr));
        metaDataCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Load metadata from files", nullptr));
        plMetaDataCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Read tags while loading a playlist", nullptr));
        underscoresCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Convert underscores to blanks", nullptr));
        per20CheckBox->setText(QCoreApplication::translate("ConfigDialog", "Convert %20 to blanks", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("ConfigDialog", "Group Mode", nullptr));
        label_23->setText(QCoreApplication::translate("ConfigDialog", "Group size:", nullptr));
        showDividingLineCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Show dividing line", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDialog", "Group format:", nullptr));
        groupButton->setText(QCoreApplication::translate("ConfigDialog", "...", nullptr));
        extraRowFormatLabel->setText(QCoreApplication::translate("ConfigDialog", "Extra row format:", nullptr));
        extraRowFormatButton->setText(QCoreApplication::translate("ConfigDialog", "...", nullptr));
        showExtraRowCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Show extra row", nullptr));
        groupsShowCoverCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Show cover", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigDialog", "Directory Scanning Options", nullptr));
        label->setText(QCoreApplication::translate("ConfigDialog", "Restrict files to:", nullptr));
#if QT_CONFIG(tooltip)
        dirRestrictLineEdit->setToolTip(QCoreApplication::translate("ConfigDialog", "A list of file masks separated by comma.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("ConfigDialog", "Exclude files:", nullptr));
#if QT_CONFIG(tooltip)
        dirExcludeLineEdit->setToolTip(QCoreApplication::translate("ConfigDialog", "A list of file masks separated by comma.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_4->setTitle(QCoreApplication::translate("ConfigDialog", "Miscellaneous", nullptr));
        autoSavePlayListCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Auto-save playlist when modified", nullptr));
        clearPrevPLCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Clear previous playlist when opening new one", nullptr));
        skipExistingTracksCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Skip already existing tracks when adding", nullptr));
        stopAfterRemovingCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Stop playback after removing of current track", nullptr));
        preferencesButton->setText(QCoreApplication::translate("ConfigDialog", "Preferences", nullptr));
        informationButton->setText(QCoreApplication::translate("ConfigDialog", "Information", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ConfigDialog", "Filename", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ConfigDialog", "Description", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigDialog", "Look and Feel", nullptr));
        label_10->setText(QCoreApplication::translate("ConfigDialog", "Language:", nullptr));
        abrCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Display average bitrate", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ConfigDialog", "Playback", nullptr));
        continuePlaybackCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Continue playback on startup", nullptr));
        byContentCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Determine file type by content", nullptr));
        defaultPlayListCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Add files from command line to this playlist:", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("ConfigDialog", "Cover Image Retrieve", nullptr));
        useCoverFilesCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use separate image files", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigDialog", "Include files:", nullptr));
#if QT_CONFIG(tooltip)
        coverIncludeLineEdit->setToolTip(QCoreApplication::translate("ConfigDialog", "A list of file masks separated by comma.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("ConfigDialog", "Exclude files:", nullptr));
#if QT_CONFIG(tooltip)
        coverExcludeLineEdit->setToolTip(QCoreApplication::translate("ConfigDialog", "A list of file masks separated by comma.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("ConfigDialog", "Recursive search depth:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("ConfigDialog", "URL Dialog", nullptr));
        clipboardCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Auto-paste URL from clipboard", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("ConfigDialog", "CUE Editor", nullptr));
        cueSystemFontCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use system font", nullptr));
        label_21->setText(QCoreApplication::translate("ConfigDialog", "Font:", nullptr));
        cueFontLabel->setText(QCoreApplication::translate("ConfigDialog", "???", nullptr));
        cueFontButton->setText(QCoreApplication::translate("ConfigDialog", "...", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ConfigDialog", "Proxy", nullptr));
        enableProxyCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Enable proxy usage", nullptr));
        label_19->setText(QCoreApplication::translate("ConfigDialog", "Proxy type:", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigDialog", "Proxy host name:", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigDialog", "Proxy port:", nullptr));
        authProxyCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use authentication with proxy", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigDialog", "Proxy user name:", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigDialog", "Proxy password:", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("ConfigDialog", "Replay Gain", nullptr));
        label_14->setText(QCoreApplication::translate("ConfigDialog", "Replay Gain mode:", nullptr));
        label_15->setText(QCoreApplication::translate("ConfigDialog", "Preamp:", nullptr));
        label_17->setText(QCoreApplication::translate("ConfigDialog", "dB", nullptr));
        label_16->setText(QCoreApplication::translate("ConfigDialog", "Default gain:", nullptr));
        label_18->setText(QCoreApplication::translate("ConfigDialog", "dB", nullptr));
        clippingCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use  peak info to prevent clipping", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("ConfigDialog", "Audio", nullptr));
        label_20->setText(QCoreApplication::translate("ConfigDialog", "Buffer size:", nullptr));
        ditheringCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use dithering", nullptr));
        bufferSizeSpinBox->setSuffix(QCoreApplication::translate("ConfigDialog", "ms", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigDialog", "Volume adjustment step:", nullptr));
        softVolumeCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use software volume control", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigDialog", "Output bit depth:", nullptr));
        twoPassEqCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use two passes for equalizer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
