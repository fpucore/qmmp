/****************************************************************************
** Meta object code from reading C++ file 'qsuimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsuimainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsuimainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14QSUiMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto QSUiMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN14QSUiMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QSUiMainWindow",
        "addDir",
        "",
        "addFiles",
        "playFiles",
        "record",
        "enabled",
        "addUrl",
        "updatePosition",
        "pos",
        "seek",
        "showState",
        "Qmmp::State",
        "updateTabs",
        "removePlaylist",
        "removePlaylistWithIndex",
        "addTab",
        "removeTab",
        "renameTab",
        "aboutUi",
        "about",
        "toggleVisibility",
        "showAndRaise",
        "showSettings",
        "showAppMenu",
        "updateVolumeIcon",
        "jumpTo",
        "playPause",
        "readSettings",
        "showTabMenu",
        "QPoint",
        "savePlayList",
        "loadPlayList",
        "showEqualizer",
        "showMetaData",
        "setDockWidgetsBlocked",
        "blocked",
        "setToolBarsBlocked",
        "editToolBar",
        "editStatusBar",
        "restoreWindowTitle",
        "onListChanged",
        "flags",
        "onCurrentPlayListChanged",
        "PlayListModel*",
        "current",
        "previous",
        "generateCopySelectedMenu",
        "copySelectedMenuActionTriggered",
        "QAction*",
        "action"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'addDir'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addFiles'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playFiles'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'record'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'addUrl'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updatePosition'
        QtMocHelpers::SlotData<void(qint64)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 9 },
        }}),
        // Slot 'seek'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showState'
        QtMocHelpers::SlotData<void(Qmmp::State)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'updateTabs'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removePlaylist'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removePlaylistWithIndex'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'addTab'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'removeTab'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'renameTab'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'aboutUi'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'about'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleVisibility'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAndRaise'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSettings'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAppMenu'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateVolumeIcon'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'jumpTo'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playPause'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readSettings'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTabMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 30, 9 },
        }}),
        // Slot 'savePlayList'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadPlayList'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showEqualizer'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showMetaData'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setDockWidgetsBlocked'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'setToolBarsBlocked'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'editToolBar'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editStatusBar'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreWindowTitle'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onListChanged'
        QtMocHelpers::SlotData<void(int)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 42 },
        }}),
        // Slot 'onCurrentPlayListChanged'
        QtMocHelpers::SlotData<void(PlayListModel *, PlayListModel *)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 44, 45 }, { 0x80000000 | 44, 46 },
        }}),
        // Slot 'generateCopySelectedMenu'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copySelectedMenuActionTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 49, 50 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QSUiMainWindow, qt_meta_tag_ZN14QSUiMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QSUiMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QSUiMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QSUiMainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14QSUiMainWindowE_t>.metaTypes,
    nullptr
} };

void QSUiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QSUiMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addDir(); break;
        case 1: _t->addFiles(); break;
        case 2: _t->playFiles(); break;
        case 3: _t->record((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->addUrl(); break;
        case 5: _t->updatePosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->seek(); break;
        case 7: _t->showState((*reinterpret_cast<std::add_pointer_t<Qmmp::State>>(_a[1]))); break;
        case 8: _t->updateTabs(); break;
        case 9: _t->removePlaylist(); break;
        case 10: _t->removePlaylistWithIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->addTab((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->removeTab((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->renameTab(); break;
        case 14: _t->aboutUi(); break;
        case 15: _t->about(); break;
        case 16: _t->toggleVisibility(); break;
        case 17: _t->showAndRaise(); break;
        case 18: _t->showSettings(); break;
        case 19: _t->showAppMenu(); break;
        case 20: _t->updateVolumeIcon(); break;
        case 21: _t->jumpTo(); break;
        case 22: _t->playPause(); break;
        case 23: _t->readSettings(); break;
        case 24: _t->showTabMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 25: _t->savePlayList(); break;
        case 26: _t->loadPlayList(); break;
        case 27: _t->showEqualizer(); break;
        case 28: _t->showMetaData(); break;
        case 29: _t->setDockWidgetsBlocked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setToolBarsBlocked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->editToolBar(); break;
        case 32: _t->editStatusBar(); break;
        case 33: _t->restoreWindowTitle(); break;
        case 34: _t->onListChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->onCurrentPlayListChanged((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        case 36: _t->generateCopySelectedMenu(); break;
        case 37: _t->copySelectedMenuActionTriggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QSUiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSUiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QSUiMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QSUiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_WARNING_POP
