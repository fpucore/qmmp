/****************************************************************************
** Meta object code from reading C++ file 'skinnedplaylist.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../skinnedplaylist.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skinnedplaylist.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15SkinnedPlayListE_t {};
} // unnamed namespace

template <> constexpr inline auto SkinnedPlayList::qt_create_metaobjectdata<qt_meta_tag_ZN15SkinnedPlayListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SkinnedPlayList",
        "play",
        "",
        "next",
        "prev",
        "pause",
        "stop",
        "eject",
        "loadPlaylist",
        "savePlaylist",
        "closed",
        "setTime",
        "time",
        "readSettings",
        "showAddMenu",
        "showSubMenu",
        "showSelectMenu",
        "showSortMenu",
        "showPlaylistMenu",
        "updateSkin",
        "deletePlaylist",
        "renamePlaylist",
        "showPlayLists",
        "generateCopySelectedMenu",
        "copySelectedMenuActionTriggered",
        "QAction*",
        "action",
        "onCurrentPlayListChanged",
        "PlayListModel*",
        "current",
        "previous",
        "onListChanged",
        "flags"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'play'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'next'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'prev'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pause'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stop'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'eject'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadPlaylist'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'savePlaylist'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTime'
        QtMocHelpers::SlotData<void(qint64)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 12 },
        }}),
        // Slot 'readSettings'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showAddMenu'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSubMenu'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSelectMenu'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSortMenu'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPlaylistMenu'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSkin'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deletePlaylist'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'renamePlaylist'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPlayLists'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'generateCopySelectedMenu'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copySelectedMenuActionTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'onCurrentPlayListChanged'
        QtMocHelpers::SlotData<void(PlayListModel *, PlayListModel *)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 29 }, { 0x80000000 | 28, 30 },
        }}),
        // Slot 'onListChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SkinnedPlayList, qt_meta_tag_ZN15SkinnedPlayListE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SkinnedPlayList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SkinnedPlayListE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SkinnedPlayListE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15SkinnedPlayListE_t>.metaTypes,
    nullptr
} };

void SkinnedPlayList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SkinnedPlayList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->next(); break;
        case 2: _t->prev(); break;
        case 3: _t->pause(); break;
        case 4: _t->stop(); break;
        case 5: _t->eject(); break;
        case 6: _t->loadPlaylist(); break;
        case 7: _t->savePlaylist(); break;
        case 8: _t->closed(); break;
        case 9: _t->setTime((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 10: _t->readSettings(); break;
        case 11: _t->showAddMenu(); break;
        case 12: _t->showSubMenu(); break;
        case 13: _t->showSelectMenu(); break;
        case 14: _t->showSortMenu(); break;
        case 15: _t->showPlaylistMenu(); break;
        case 16: _t->updateSkin(); break;
        case 17: _t->deletePlaylist(); break;
        case 18: _t->renamePlaylist(); break;
        case 19: _t->showPlayLists(); break;
        case 20: _t->generateCopySelectedMenu(); break;
        case 21: _t->copySelectedMenuActionTriggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 22: _t->onCurrentPlayListChanged((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        case 23: _t->onListChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::play, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::next, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::prev, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::pause, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::stop, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::eject, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::loadPlaylist, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::savePlaylist, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlayList::*)()>(_a, &SkinnedPlayList::closed, 8))
            return;
    }
}

const QMetaObject *SkinnedPlayList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SkinnedPlayList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SkinnedPlayListE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SkinnedPlayList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void SkinnedPlayList::play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SkinnedPlayList::next()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SkinnedPlayList::prev()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SkinnedPlayList::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SkinnedPlayList::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SkinnedPlayList::eject()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SkinnedPlayList::loadPlaylist()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SkinnedPlayList::savePlaylist()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SkinnedPlayList::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
