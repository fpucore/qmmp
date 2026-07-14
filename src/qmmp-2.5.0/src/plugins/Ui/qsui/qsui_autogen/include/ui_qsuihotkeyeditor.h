/********************************************************************************
** Form generated from reading UI file 'qsuihotkeyeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSUIHOTKEYEDITOR_H
#define UI_QSUIHOTKEYEDITOR_H

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

class Ui_QSUiHotkeyEditor
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *shortcutTreeWidget;
    QPushButton *changeShortcutButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *restoreShortcutsButton;

    void setupUi(QWidget *QSUiHotkeyEditor)
    {
        if (QSUiHotkeyEditor->objectName().isEmpty())
            QSUiHotkeyEditor->setObjectName("QSUiHotkeyEditor");
        QSUiHotkeyEditor->resize(406, 365);
        QSUiHotkeyEditor->setWindowTitle(QString::fromUtf8("Shortcuts"));
        gridLayout = new QGridLayout(QSUiHotkeyEditor);
        gridLayout->setObjectName("gridLayout");
        shortcutTreeWidget = new QTreeWidget(QSUiHotkeyEditor);
        shortcutTreeWidget->setObjectName("shortcutTreeWidget");
        shortcutTreeWidget->setAlternatingRowColors(true);
        shortcutTreeWidget->setAnimated(true);

        gridLayout->addWidget(shortcutTreeWidget, 0, 0, 1, 3);

        changeShortcutButton = new QPushButton(QSUiHotkeyEditor);
        changeShortcutButton->setObjectName("changeShortcutButton");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("configure")));
        changeShortcutButton->setIcon(icon);

        gridLayout->addWidget(changeShortcutButton, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(262, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        restoreShortcutsButton = new QPushButton(QSUiHotkeyEditor);
        restoreShortcutsButton->setObjectName("restoreShortcutsButton");

        gridLayout->addWidget(restoreShortcutsButton, 1, 2, 1, 1);


        retranslateUi(QSUiHotkeyEditor);

        QMetaObject::connectSlotsByName(QSUiHotkeyEditor);
    } // setupUi

    void retranslateUi(QWidget *QSUiHotkeyEditor)
    {
        QTreeWidgetItem *___qtreewidgetitem = shortcutTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QSUiHotkeyEditor", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QSUiHotkeyEditor", "Action", nullptr));
        changeShortcutButton->setText(QCoreApplication::translate("QSUiHotkeyEditor", "Change shortcut...", nullptr));
        restoreShortcutsButton->setText(QCoreApplication::translate("QSUiHotkeyEditor", "Restore Defaults", nullptr));
        (void)QSUiHotkeyEditor;
    } // retranslateUi

};

namespace Ui {
    class QSUiHotkeyEditor: public Ui_QSUiHotkeyEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSUIHOTKEYEDITOR_H
