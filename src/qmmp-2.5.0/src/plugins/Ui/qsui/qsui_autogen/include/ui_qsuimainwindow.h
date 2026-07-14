/********************************************************************************
** Form generated from reading UI file 'qsuimainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUIMAINWINDOW_H
#define UI_QSUIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSUiMainWindow
{
public:
    QAction *actionPrevious;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionNext;
    QAction *actionStop;
    QAction *actionAddFile;
    QAction *actionClearPlayList;
    QAction *actionNewPlayList;
    QAction *actionClosePlayList;
    QAction *actionAddDirectory;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionSelectAll;
    QAction *actionRemoveSelected;
    QAction *actionRemoveUnselected;
    QAction *actionVisualization;
    QAction *actionSettings;
    QAction *actionRenamePlayList;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuPlayback;
    QMenu *menuView;
    QDockWidget *analyzerDockWidget;
    QWidget *dockWidgetContents;
    QDockWidget *fileSystemDockWidget;
    QWidget *dockWidgetContents_2;
    QDockWidget *coverDockWidget;
    QWidget *dockWidgetContents_3;
    QDockWidget *playlistsDockWidget;
    QWidget *dockWidgetContents_4;
    QDockWidget *waveformSeekBarDockWidget;
    QWidget *dockWidgetContents_5;

    void setupUi(QMainWindow *QSUiMainWindow)
    {
        if (QSUiMainWindow->objectName().isEmpty())
            QSUiMainWindow->setObjectName("QSUiMainWindow");
        QSUiMainWindow->resize(629, 485);
        QSUiMainWindow->setDockNestingEnabled(true);
        QSUiMainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionPrevious = new QAction(QSUiMainWindow);
        actionPrevious->setObjectName("actionPrevious");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionPrevious->setIcon(icon);
        actionPlay = new QAction(QSUiMainWindow);
        actionPlay->setObjectName("actionPlay");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(QSUiMainWindow);
        actionPause->setObjectName("actionPause");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/pause.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionPause->setIcon(icon2);
        actionNext = new QAction(QSUiMainWindow);
        actionNext->setObjectName("actionNext");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionNext->setIcon(icon3);
        actionStop = new QAction(QSUiMainWindow);
        actionStop->setObjectName("actionStop");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionStop->setIcon(icon4);
        actionAddFile = new QAction(QSUiMainWindow);
        actionAddFile->setObjectName("actionAddFile");
        actionClearPlayList = new QAction(QSUiMainWindow);
        actionClearPlayList->setObjectName("actionClearPlayList");
        actionNewPlayList = new QAction(QSUiMainWindow);
        actionNewPlayList->setObjectName("actionNewPlayList");
        actionClosePlayList = new QAction(QSUiMainWindow);
        actionClosePlayList->setObjectName("actionClosePlayList");
        actionAddDirectory = new QAction(QSUiMainWindow);
        actionAddDirectory->setObjectName("actionAddDirectory");
        actionExit = new QAction(QSUiMainWindow);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(QSUiMainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAboutQt = new QAction(QSUiMainWindow);
        actionAboutQt->setObjectName("actionAboutQt");
        actionSelectAll = new QAction(QSUiMainWindow);
        actionSelectAll->setObjectName("actionSelectAll");
        actionRemoveSelected = new QAction(QSUiMainWindow);
        actionRemoveSelected->setObjectName("actionRemoveSelected");
        actionRemoveUnselected = new QAction(QSUiMainWindow);
        actionRemoveUnselected->setObjectName("actionRemoveUnselected");
        actionVisualization = new QAction(QSUiMainWindow);
        actionVisualization->setObjectName("actionVisualization");
        actionSettings = new QAction(QSUiMainWindow);
        actionSettings->setObjectName("actionSettings");
        actionRenamePlayList = new QAction(QSUiMainWindow);
        actionRenamePlayList->setObjectName("actionRenamePlayList");
        centralwidget = new QWidget(QSUiMainWindow);
        centralwidget->setObjectName("centralwidget");
        QSUiMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QSUiMainWindow);
        statusbar->setObjectName("statusbar");
        QSUiMainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(QSUiMainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 629, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName("menuTools");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuPlayback = new QMenu(menuBar);
        menuPlayback->setObjectName("menuPlayback");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        QSUiMainWindow->setMenuBar(menuBar);
        analyzerDockWidget = new QDockWidget(QSUiMainWindow);
        analyzerDockWidget->setObjectName("analyzerDockWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(analyzerDockWidget->sizePolicy().hasHeightForWidth());
        analyzerDockWidget->setSizePolicy(sizePolicy);
        analyzerDockWidget->setMinimumSize(QSize(79, 50));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        analyzerDockWidget->setWidget(dockWidgetContents);
        QSUiMainWindow->addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, analyzerDockWidget);
        fileSystemDockWidget = new QDockWidget(QSUiMainWindow);
        fileSystemDockWidget->setObjectName("fileSystemDockWidget");
        fileSystemDockWidget->setMinimumSize(QSize(130, 41));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        fileSystemDockWidget->setWidget(dockWidgetContents_2);
        QSUiMainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, fileSystemDockWidget);
        coverDockWidget = new QDockWidget(QSUiMainWindow);
        coverDockWidget->setObjectName("coverDockWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(coverDockWidget->sizePolicy().hasHeightForWidth());
        coverDockWidget->setSizePolicy(sizePolicy1);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName("dockWidgetContents_3");
        coverDockWidget->setWidget(dockWidgetContents_3);
        QSUiMainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, coverDockWidget);
        playlistsDockWidget = new QDockWidget(QSUiMainWindow);
        playlistsDockWidget->setObjectName("playlistsDockWidget");
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName("dockWidgetContents_4");
        playlistsDockWidget->setWidget(dockWidgetContents_4);
        QSUiMainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, playlistsDockWidget);
        waveformSeekBarDockWidget = new QDockWidget(QSUiMainWindow);
        waveformSeekBarDockWidget->setObjectName("waveformSeekBarDockWidget");
        waveformSeekBarDockWidget->setFloating(false);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName("dockWidgetContents_5");
        waveformSeekBarDockWidget->setWidget(dockWidgetContents_5);
        QSUiMainWindow->addDockWidget(Qt::DockWidgetArea::TopDockWidgetArea, waveformSeekBarDockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuPlayback->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(QSUiMainWindow);

        QMetaObject::connectSlotsByName(QSUiMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QSUiMainWindow)
    {
        QSUiMainWindow->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Qmmp", nullptr));
        actionPrevious->setText(QCoreApplication::translate("QSUiMainWindow", "Previous", nullptr));
        actionPlay->setText(QCoreApplication::translate("QSUiMainWindow", "Play", nullptr));
        actionPause->setText(QCoreApplication::translate("QSUiMainWindow", "Pause", nullptr));
        actionNext->setText(QCoreApplication::translate("QSUiMainWindow", "Next", nullptr));
        actionStop->setText(QCoreApplication::translate("QSUiMainWindow", "Stop", nullptr));
        actionAddFile->setText(QCoreApplication::translate("QSUiMainWindow", "&Add File", nullptr));
        actionClearPlayList->setText(QCoreApplication::translate("QSUiMainWindow", "&Remove All", nullptr));
        actionNewPlayList->setText(QCoreApplication::translate("QSUiMainWindow", "New Playlist", nullptr));
        actionClosePlayList->setText(QCoreApplication::translate("QSUiMainWindow", "Remove Playlist", nullptr));
        actionAddDirectory->setText(QCoreApplication::translate("QSUiMainWindow", "&Add Directory", nullptr));
        actionExit->setText(QCoreApplication::translate("QSUiMainWindow", "&Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("QSUiMainWindow", "About", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("QSUiMainWindow", "About Qt", nullptr));
        actionSelectAll->setText(QCoreApplication::translate("QSUiMainWindow", "&Select All", nullptr));
        actionRemoveSelected->setText(QCoreApplication::translate("QSUiMainWindow", "&Remove Selected", nullptr));
        actionRemoveUnselected->setText(QCoreApplication::translate("QSUiMainWindow", "&Remove Unselected", nullptr));
        actionVisualization->setText(QCoreApplication::translate("QSUiMainWindow", "Visualization", nullptr));
        actionSettings->setText(QCoreApplication::translate("QSUiMainWindow", "Settings", nullptr));
        actionRenamePlayList->setText(QCoreApplication::translate("QSUiMainWindow", "Rename Playlist", nullptr));
        menuFile->setTitle(QCoreApplication::translate("QSUiMainWindow", "&File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("QSUiMainWindow", "&Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("QSUiMainWindow", "&Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("QSUiMainWindow", "&Edit", nullptr));
        menuPlayback->setTitle(QCoreApplication::translate("QSUiMainWindow", "&Playback", nullptr));
        menuView->setTitle(QCoreApplication::translate("QSUiMainWindow", "&View", nullptr));
        analyzerDockWidget->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Visualization", nullptr));
        fileSystemDockWidget->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Files", nullptr));
        coverDockWidget->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Cover", nullptr));
        playlistsDockWidget->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Playlists", nullptr));
        waveformSeekBarDockWidget->setWindowTitle(QCoreApplication::translate("QSUiMainWindow", "Waveform Seek Bar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSUiMainWindow: public Ui_QSUiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUIMAINWINDOW_H
