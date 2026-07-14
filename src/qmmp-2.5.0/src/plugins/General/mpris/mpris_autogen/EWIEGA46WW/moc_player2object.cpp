/****************************************************************************
** Meta object code from reading C++ file 'player2object.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../player2object.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player2object.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13Player2ObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto Player2Object::qt_create_metaobjectdata<qt_meta_tag_ZN13Player2ObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Player2Object",
        "D-Bus Interface",
        "org.mpris.MediaPlayer2.Player",
        "Seeked",
        "",
        "Position",
        "Next",
        "OpenUri",
        "in0",
        "Pause",
        "Play",
        "PlayPause",
        "Previous",
        "Seek",
        "Offset",
        "SetPosition",
        "QDBusObjectPath",
        "TrackId",
        "Stop",
        "emitPropertiesChanged",
        "updateId",
        "checkState",
        "Qmmp::State",
        "state",
        "checkSeeking",
        "elapsed",
        "playTrack",
        "QList<PlayListTrack*>",
        "tracks",
        "disconnectPl",
        "setModel",
        "PlayListModel*",
        "selected",
        "previous",
        "CanControl",
        "CanGoNext",
        "CanGoPrevious",
        "CanPause",
        "CanPlay",
        "CanSeek",
        "LoopStatus",
        "MaximumRate",
        "Metadata",
        "QVariantMap",
        "MinimumRate",
        "PlaybackStatus",
        "Rate",
        "Shuffle",
        "Volume"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Seeked'
        QtMocHelpers::SignalData<void(qlonglong)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 5 },
        }}),
        // Slot 'Next'
        QtMocHelpers::SlotData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OpenUri'
        QtMocHelpers::SlotData<void(const QString &)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'Pause'
        QtMocHelpers::SlotData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Play'
        QtMocHelpers::SlotData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PlayPause'
        QtMocHelpers::SlotData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Previous'
        QtMocHelpers::SlotData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Seek'
        QtMocHelpers::SlotData<void(qlonglong)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 14 },
        }}),
        // Slot 'SetPosition'
        QtMocHelpers::SlotData<void(const QDBusObjectPath &, qlonglong)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { QMetaType::LongLong, 5 },
        }}),
        // Slot 'Stop'
        QtMocHelpers::SlotData<void()>(18, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'emitPropertiesChanged'
        QtMocHelpers::SlotData<void()>(19, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateId'
        QtMocHelpers::SlotData<void()>(20, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'checkState'
        QtMocHelpers::SlotData<void(Qmmp::State)>(21, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'checkSeeking'
        QtMocHelpers::SlotData<void(qint64)>(24, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 25 },
        }}),
        // Slot 'playTrack'
        QtMocHelpers::SlotData<void(const QList<PlayListTrack*> &)>(26, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'disconnectPl'
        QtMocHelpers::SlotData<void()>(29, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setModel'
        QtMocHelpers::SlotData<void(PlayListModel *, PlayListModel *)>(30, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 31, 32 }, { 0x80000000 | 31, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'CanControl'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'CanGoNext'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'CanGoPrevious'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'CanPause'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'CanPlay'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'CanSeek'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'LoopStatus'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'MaximumRate'
        QtMocHelpers::PropertyData<double>(41, QMetaType::Double, QMC::DefaultPropertyFlags),
        // property 'Metadata'
        QtMocHelpers::PropertyData<QVariantMap>(42, 0x80000000 | 43, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'MinimumRate'
        QtMocHelpers::PropertyData<double>(44, QMetaType::Double, QMC::DefaultPropertyFlags),
        // property 'PlaybackStatus'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Position'
        QtMocHelpers::PropertyData<qlonglong>(5, QMetaType::LongLong, QMC::DefaultPropertyFlags),
        // property 'Rate'
        QtMocHelpers::PropertyData<double>(46, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'Shuffle'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'Volume'
        QtMocHelpers::PropertyData<double>(48, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Player2Object, qt_meta_tag_ZN13Player2ObjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Player2Object::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Player2ObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Player2ObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13Player2ObjectE_t>.metaTypes,
    nullptr
} };

void Player2Object::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Player2Object *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Seeked((*reinterpret_cast<std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 1: _t->Next(); break;
        case 2: _t->OpenUri((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Pause(); break;
        case 4: _t->Play(); break;
        case 5: _t->PlayPause(); break;
        case 6: _t->Previous(); break;
        case 7: _t->Seek((*reinterpret_cast<std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 8: _t->SetPosition((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qlonglong>>(_a[2]))); break;
        case 9: _t->Stop(); break;
        case 10: _t->emitPropertiesChanged(); break;
        case 11: _t->updateId(); break;
        case 12: _t->checkState((*reinterpret_cast<std::add_pointer_t<Qmmp::State>>(_a[1]))); break;
        case 13: _t->checkSeeking((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 14: _t->playTrack((*reinterpret_cast<std::add_pointer_t<QList<PlayListTrack*>>>(_a[1]))); break;
        case 15: _t->disconnectPl(); break;
        case 16: _t->setModel((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Player2Object::*)(qlonglong )>(_a, &Player2Object::Seeked, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->canControl(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->canGoNext(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->canGoPrevious(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->canPause(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->canPlay(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->canSeek(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->loopStatus(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->maximumRate(); break;
        case 8: *reinterpret_cast<QVariantMap*>(_v) = _t->metadata(); break;
        case 9: *reinterpret_cast<double*>(_v) = _t->minimumRate(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->playbackStatus(); break;
        case 11: *reinterpret_cast<qlonglong*>(_v) = _t->position(); break;
        case 12: *reinterpret_cast<double*>(_v) = _t->rate(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->shuffle(); break;
        case 14: *reinterpret_cast<double*>(_v) = _t->volume(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setLoopStatus(*reinterpret_cast<QString*>(_v)); break;
        case 12: _t->setRate(*reinterpret_cast<double*>(_v)); break;
        case 13: _t->setShuffle(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setVolume(*reinterpret_cast<double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Player2Object::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player2Object::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Player2ObjectE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Player2Object::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Player2Object::Seeked(qlonglong _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
