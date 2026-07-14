/********************************************************************************
** Form generated from reading UI file 'skinnedhotkeyeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINNEDHOTKEYEDITOR_H
#define UI_SKINNEDHOTKEYEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinnedHotkeyEditor
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *changeShortcutButton;
    QPushButton *restoreShortcutsButton;
    QTreeWidget *shortcutTreeWidget;

    void setupUi(QWidget *SkinnedHotkeyEditor)
    {
        if (SkinnedHotkeyEditor->objectName().isEmpty())
            SkinnedHotkeyEditor->setObjectName("SkinnedHotkeyEditor");
        SkinnedHotkeyEditor->resize(406, 365);
        SkinnedHotkeyEditor->setWindowTitle(QString::fromUtf8("Shortcuts"));
        gridLayout = new QGridLayout(SkinnedHotkeyEditor);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_7 = new QSpacerItem(262, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        changeShortcutButton = new QPushButton(SkinnedHotkeyEditor);
        changeShortcutButton->setObjectName("changeShortcutButton");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("configure");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        changeShortcutButton->setIcon(icon);

        gridLayout->addWidget(changeShortcutButton, 1, 0, 1, 1);

        restoreShortcutsButton = new QPushButton(SkinnedHotkeyEditor);
        restoreShortcutsButton->setObjectName("restoreShortcutsButton");

        gridLayout->addWidget(restoreShortcutsButton, 1, 2, 1, 1);

        shortcutTreeWidget = new QTreeWidget(SkinnedHotkeyEditor);
        shortcutTreeWidget->setObjectName("shortcutTreeWidget");
        shortcutTreeWidget->setAlternatingRowColors(true);
        shortcutTreeWidget->setAnimated(true);

        gridLayout->addWidget(shortcutTreeWidget, 0, 0, 1, 3);


        retranslateUi(SkinnedHotkeyEditor);

        QMetaObject::connectSlotsByName(SkinnedHotkeyEditor);
    } // setupUi

    void retranslateUi(QWidget *SkinnedHotkeyEditor)
    {
        changeShortcutButton->setText(QCoreApplication::translate("SkinnedHotkeyEditor", "Change shortcut...", nullptr));
        restoreShortcutsButton->setText(QCoreApplication::translate("SkinnedHotkeyEditor", "Restore Defaults", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = shortcutTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SkinnedHotkeyEditor", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SkinnedHotkeyEditor", "Action", nullptr));
        (void)SkinnedHotkeyEditor;
    } // retranslateUi

};

namespace Ui {
    class SkinnedHotkeyEditor: public Ui_SkinnedHotkeyEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINNEDHOTKEYEDITOR_H
