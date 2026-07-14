/****************************************************************************
** Meta object code from reading C++ file 'playlistmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlistmanager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PlayListManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayListManager::qt_create_metaobjectdata<qt_meta_tag_ZN15PlayListManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayListManager",
        "currentPlayListChanged",
        "",
        "PlayListModel*",
        "current",
        "previous",
        "selectedPlayListChanged",
        "selected",
        "playListAdded",
        "index",
        "playListRemoved",
        "playListMoved",
        "i",
        "j",
        "playListsChanged",
        "currentTrackRemoved",
        "selectPlayList",
        "model",
        "selectPlayListIndex",
        "selectPlayListName",
        "name",
        "selectNextPlayList",
        "selectPreviousPlayList",
        "activatePlayList",
        "activatePlayListIndex",
        "activateSelectedPlayList",
        "createPlayList",
        "removePlayList",
        "removePlayListIndex",
        "move",
        "clear",
        "clearSelection",
        "removeSelected",
        "removeUnselected",
        "removeTrack",
        "PlayListTrack*",
        "item",
        "invertSelection",
        "selectAll",
        "showDetails",
        "addTracks",
        "QList<PlayListTrack*>",
        "tracks",
        "addPath",
        "path",
        "addPaths",
        "paths",
        "randomizeList",
        "reverseList",
        "sortSelection",
        "PlayListModel::SortMode",
        "mode",
        "sort",
        "addToQueue",
        "removeInvalidTracks",
        "removeDuplicates",
        "refresh",
        "clearQueue",
        "stopAfterSelected",
        "rebuildGroups",
        "writePlayLists",
        "onListChanged",
        "flags",
        "onCurrentTrackRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentPlayListChanged'
        QtMocHelpers::SignalData<void(PlayListModel *, PlayListModel *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'selectedPlayListChanged'
        QtMocHelpers::SignalData<void(PlayListModel *, PlayListModel *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'playListAdded'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'playListRemoved'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'playListMoved'
        QtMocHelpers::SignalData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Signal 'playListsChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTrackRemoved'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectPlayList'
        QtMocHelpers::SlotData<void(PlayListModel *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 17 },
        }}),
        // Slot 'selectPlayListIndex'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'selectPlayListName'
        QtMocHelpers::SlotData<void(const QString &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Slot 'selectNextPlayList'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectPreviousPlayList'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'activatePlayList'
        QtMocHelpers::SlotData<void(PlayListModel *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 17 },
        }}),
        // Slot 'activatePlayListIndex'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'activateSelectedPlayList'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'createPlayList'
        QtMocHelpers::SlotData<PlayListModel *(const QString &)>(26, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::QString, 20 },
        }}),
        // Slot 'createPlayList'
        QtMocHelpers::SlotData<PlayListModel *()>(26, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 3),
        // Slot 'removePlayList'
        QtMocHelpers::SlotData<void(PlayListModel *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 17 },
        }}),
        // Slot 'removePlayListIndex'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'move'
        QtMocHelpers::SlotData<void(int, int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearSelection'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeSelected'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeUnselected'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeTrack'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'removeTrack'
        QtMocHelpers::SlotData<void(PlayListTrack *)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'invertSelection'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showDetails'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addTracks'
        QtMocHelpers::SlotData<void(const QList<PlayListTrack*> &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'addPath'
        QtMocHelpers::SlotData<void(const QString &)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 44 },
        }}),
        // Slot 'addPaths'
        QtMocHelpers::SlotData<void(const QStringList &)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 46 },
        }}),
        // Slot 'randomizeList'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reverseList'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sortSelection'
        QtMocHelpers::SlotData<void(PlayListModel::SortMode)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 50, 51 },
        }}),
        // Slot 'sort'
        QtMocHelpers::SlotData<void(PlayListModel::SortMode)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 50, 51 },
        }}),
        // Slot 'addToQueue'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeInvalidTracks'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeDuplicates'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refresh'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearQueue'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopAfterSelected'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rebuildGroups'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'writePlayLists'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onListChanged'
        QtMocHelpers::SlotData<void(int)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 62 },
        }}),
        // Slot 'onCurrentTrackRemoved'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlayListManager, qt_meta_tag_ZN15PlayListManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayListManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayListManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayListManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PlayListManagerE_t>.metaTypes,
    nullptr
} };

void PlayListManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayListManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentPlayListChanged((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        case 1: _t->selectedPlayListChanged((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        case 2: _t->playListAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->playListRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->playListMoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->playListsChanged(); break;
        case 6: _t->currentTrackRemoved(); break;
        case 7: _t->selectPlayList((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1]))); break;
        case 8: _t->selectPlayListIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->selectPlayListName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->selectNextPlayList(); break;
        case 11: _t->selectPreviousPlayList(); break;
        case 12: _t->activatePlayList((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1]))); break;
        case 13: _t->activatePlayListIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->activateSelectedPlayList(); break;
        case 15: { PlayListModel* _r = _t->createPlayList((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<PlayListModel**>(_a[0]) = std::move(_r); }  break;
        case 16: { PlayListModel* _r = _t->createPlayList();
            if (_a[0]) *reinterpret_cast<PlayListModel**>(_a[0]) = std::move(_r); }  break;
        case 17: _t->removePlayList((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1]))); break;
        case 18: _t->removePlayListIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->move((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 20: _t->clear(); break;
        case 21: _t->clearSelection(); break;
        case 22: _t->removeSelected(); break;
        case 23: _t->removeUnselected(); break;
        case 24: _t->removeTrack((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->removeTrack((*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[1]))); break;
        case 26: _t->invertSelection(); break;
        case 27: _t->selectAll(); break;
        case 28: _t->showDetails(); break;
        case 29: _t->addTracks((*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[1]))); break;
        case 30: _t->addPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->addPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 32: _t->randomizeList(); break;
        case 33: _t->reverseList(); break;
        case 34: _t->sortSelection((*reinterpret_cast<std::add_pointer_t<PlayListModel::SortMode>>(_a[1]))); break;
        case 35: _t->sort((*reinterpret_cast<std::add_pointer_t<PlayListModel::SortMode>>(_a[1]))); break;
        case 36: _t->addToQueue(); break;
        case 37: _t->removeInvalidTracks(); break;
        case 38: _t->removeDuplicates(); break;
        case 39: _t->refresh(); break;
        case 40: _t->clearQueue(); break;
        case 41: _t->stopAfterSelected(); break;
        case 42: _t->rebuildGroups(); break;
        case 43: _t->writePlayLists(); break;
        case 44: _t->onListChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->onCurrentTrackRemoved(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel::SortMode >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel::SortMode >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)(PlayListModel * , PlayListModel * )>(_a, &PlayListManager::currentPlayListChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)(PlayListModel * , PlayListModel * )>(_a, &PlayListManager::selectedPlayListChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)(int )>(_a, &PlayListManager::playListAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)(int )>(_a, &PlayListManager::playListRemoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)(int , int )>(_a, &PlayListManager::playListMoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)()>(_a, &PlayListManager::playListsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListManager::*)()>(_a, &PlayListManager::currentTrackRemoved, 6))
            return;
    }
}

const QMetaObject *PlayListManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayListManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayListManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayListManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void PlayListManager::currentPlayListChanged(PlayListModel * _t1, PlayListModel * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void PlayListManager::selectedPlayListChanged(PlayListModel * _t1, PlayListModel * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void PlayListManager::playListAdded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PlayListManager::playListRemoved(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PlayListManager::playListMoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void PlayListManager::playListsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlayListManager::currentTrackRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
