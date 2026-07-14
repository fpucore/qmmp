/****************************************************************************
** Meta object code from reading C++ file 'playlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlistmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13PlayListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayListModel::qt_create_metaobjectdata<qt_meta_tag_ZN13PlayListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayListModel",
        "listChanged",
        "",
        "flags",
        "tracksAdded",
        "QList<PlayListTrack*>",
        "tracks",
        "nameChanged",
        "name",
        "loaderFinished",
        "scrollToRequest",
        "trackIndex",
        "sortingByColumnFinished",
        "column",
        "reverted",
        "currentTrackRemoved",
        "addTrack",
        "PlayListTrack*",
        "track",
        "addTracks",
        "addPath",
        "path",
        "addPaths",
        "paths",
        "insertTrack",
        "index",
        "insertTracks",
        "insertJson",
        "json",
        "insertPath",
        "insertPaths",
        "insertUrls",
        "QList<QUrl>",
        "urls",
        "clear",
        "clearSelection",
        "removeSelected",
        "removeUnselected",
        "removeTrack",
        "i",
        "removeTracks",
        "QList<PlayListItem*>",
        "items",
        "invertSelection",
        "selectAll",
        "showDetails",
        "QWidget*",
        "parent",
        "showDetailsForCurrent",
        "doCurrentVisibleRequest",
        "scrollTo",
        "randomizeList",
        "reverseList",
        "sortSelection",
        "PlayListModel::SortMode",
        "mode",
        "sort",
        "sortByColumn",
        "addToQueue",
        "setQueued",
        "t",
        "removeInvalidTracks",
        "removeDuplicates",
        "refresh",
        "clearQueue",
        "stopAfterSelected",
        "rebuildGroups",
        "updateMetaData",
        "preparePlayState",
        "prepareForShufflePlaying",
        "yes",
        "prepareGroups",
        "enabled",
        "onTaskFinished",
        "startCoverLoader",
        "setCover",
        "QImage",
        "img",
        "insertTracksInternal",
        "before"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'listChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'tracksAdded'
        QtMocHelpers::SignalData<void(const QList<PlayListTrack*> &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Signal 'loaderFinished'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollToRequest'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Signal 'sortingByColumnFinished'
        QtMocHelpers::SignalData<void(int, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { QMetaType::Bool, 14 },
        }}),
        // Signal 'currentTrackRemoved'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addTrack'
        QtMocHelpers::SlotData<void(PlayListTrack *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'addTracks'
        QtMocHelpers::SlotData<void(const QList<PlayListTrack*> &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'addPath'
        QtMocHelpers::SlotData<void(const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'addPaths'
        QtMocHelpers::SlotData<void(const QStringList &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 23 },
        }}),
        // Slot 'insertTrack'
        QtMocHelpers::SlotData<void(int, PlayListTrack *)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { 0x80000000 | 17, 18 },
        }}),
        // Slot 'insertTracks'
        QtMocHelpers::SlotData<void(int, const QList<PlayListTrack*> &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'insertJson'
        QtMocHelpers::SlotData<void(int, const QByteArray &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { QMetaType::QByteArray, 28 },
        }}),
        // Slot 'insertPath'
        QtMocHelpers::SlotData<void(int, const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'insertPaths'
        QtMocHelpers::SlotData<void(int, const QStringList &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { QMetaType::QStringList, 23 },
        }}),
        // Slot 'insertUrls'
        QtMocHelpers::SlotData<void(int, const QList<QUrl> &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { 0x80000000 | 32, 33 },
        }}),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearSelection'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeSelected'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeUnselected'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeTrack'
        QtMocHelpers::SlotData<void(int)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 39 },
        }}),
        // Slot 'removeTrack'
        QtMocHelpers::SlotData<void(PlayListTrack *)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'removeTracks'
        QtMocHelpers::SlotData<void(const QList<PlayListItem*> &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'removeTracks'
        QtMocHelpers::SlotData<void(const QList<PlayListTrack*> &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'invertSelection'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showDetails'
        QtMocHelpers::SlotData<void(QWidget *)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 47 },
        }}),
        // Slot 'showDetails'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'showDetailsForCurrent'
        QtMocHelpers::SlotData<void(QWidget *)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 47 },
        }}),
        // Slot 'showDetailsForCurrent'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'doCurrentVisibleRequest'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scrollTo'
        QtMocHelpers::SlotData<void(int)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'randomizeList'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reverseList'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sortSelection'
        QtMocHelpers::SlotData<void(PlayListModel::SortMode)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Slot 'sort'
        QtMocHelpers::SlotData<void(PlayListModel::SortMode)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Slot 'sortByColumn'
        QtMocHelpers::SlotData<void(int)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'addToQueue'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setQueued'
        QtMocHelpers::SlotData<void(PlayListTrack *)>(59, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 60 },
        }}),
        // Slot 'removeInvalidTracks'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeDuplicates'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refresh'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearQueue'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopAfterSelected'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rebuildGroups'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateMetaData'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'preparePlayState'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prepareForShufflePlaying'
        QtMocHelpers::SlotData<void(bool)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 70 },
        }}),
        // Slot 'prepareGroups'
        QtMocHelpers::SlotData<void(bool)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 72 },
        }}),
        // Slot 'onTaskFinished'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateMetaData'
        QtMocHelpers::SlotData<void(const QStringList &)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 23 },
        }}),
        // Slot 'startCoverLoader'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setCover'
        QtMocHelpers::SlotData<void(const QString &, const QImage &)>(75, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 21 }, { 0x80000000 | 76, 77 },
        }}),
        // Slot 'insertTracksInternal'
        QtMocHelpers::SlotData<void(PlayListTrack *, const QList<PlayListTrack*> &)>(78, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 79 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlayListModel, qt_meta_tag_ZN13PlayListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlayListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlayListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PlayListModelE_t>.metaTypes,
    nullptr
} };

void PlayListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->listChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tracksAdded((*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->loaderFinished(); break;
        case 4: _t->scrollToRequest((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->sortingByColumnFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->currentTrackRemoved(); break;
        case 7: _t->addTrack((*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[1]))); break;
        case 8: _t->addTracks((*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[1]))); break;
        case 9: _t->addPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->addPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 11: _t->insertTrack((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[2]))); break;
        case 12: _t->insertTracks((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[2]))); break;
        case 13: _t->insertJson((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 14: _t->insertPath((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->insertPaths((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 16: _t->insertUrls((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<QUrl>>>(_a[2]))); break;
        case 17: _t->clear(); break;
        case 18: _t->clearSelection(); break;
        case 19: _t->removeSelected(); break;
        case 20: _t->removeUnselected(); break;
        case 21: _t->removeTrack((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->removeTrack((*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[1]))); break;
        case 23: _t->removeTracks((*reinterpret_cast<std::add_pointer_t<QList<PlayListItem*>>>(_a[1]))); break;
        case 24: _t->removeTracks((*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[1]))); break;
        case 25: _t->invertSelection(); break;
        case 26: _t->selectAll(); break;
        case 27: _t->showDetails((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 28: _t->showDetails(); break;
        case 29: _t->showDetailsForCurrent((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 30: _t->showDetailsForCurrent(); break;
        case 31: _t->doCurrentVisibleRequest(); break;
        case 32: _t->scrollTo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->randomizeList(); break;
        case 34: _t->reverseList(); break;
        case 35: _t->sortSelection((*reinterpret_cast<std::add_pointer_t<PlayListModel::SortMode>>(_a[1]))); break;
        case 36: _t->sort((*reinterpret_cast<std::add_pointer_t<PlayListModel::SortMode>>(_a[1]))); break;
        case 37: _t->sortByColumn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->addToQueue(); break;
        case 39: _t->setQueued((*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[1]))); break;
        case 40: _t->removeInvalidTracks(); break;
        case 41: _t->removeDuplicates(); break;
        case 42: _t->refresh(); break;
        case 43: _t->clearQueue(); break;
        case 44: _t->stopAfterSelected(); break;
        case 45: _t->rebuildGroups(); break;
        case 46: _t->updateMetaData(); break;
        case 47: _t->preparePlayState(); break;
        case 48: _t->prepareForShufflePlaying((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->prepareGroups((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->onTaskFinished(); break;
        case 51: _t->updateMetaData((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 52: _t->startCoverLoader(); break;
        case 53: _t->setCover((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QImage>>(_a[2]))); break;
        case 54: _t->insertTracksInternal((*reinterpret_cast<std::add_pointer_t<PlayListTrack*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel::SortMode >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlayListModel::SortMode >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)(int )>(_a, &PlayListModel::listChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)(const QList<PlayListTrack*> & )>(_a, &PlayListModel::tracksAdded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)(const QString & )>(_a, &PlayListModel::nameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)()>(_a, &PlayListModel::loaderFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)(int )>(_a, &PlayListModel::scrollToRequest, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)(int , bool )>(_a, &PlayListModel::sortingByColumnFinished, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayListModel::*)()>(_a, &PlayListModel::currentTrackRemoved, 6))
            return;
    }
}

const QMetaObject *PlayListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlayListModelE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void PlayListModel::listChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PlayListModel::tracksAdded(const QList<PlayListTrack*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PlayListModel::nameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PlayListModel::loaderFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayListModel::scrollToRequest(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void PlayListModel::sortingByColumnFinished(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void PlayListModel::currentTrackRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
