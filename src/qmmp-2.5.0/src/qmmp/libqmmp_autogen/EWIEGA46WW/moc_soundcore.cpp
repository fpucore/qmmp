/****************************************************************************
** Meta object code from reading C++ file 'soundcore.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../soundcore.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundcore.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9SoundCoreE_t {};
} // unnamed namespace

template <> constexpr inline auto SoundCore::qt_create_metaobjectdata<qt_meta_tag_ZN9SoundCoreE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SoundCore",
        "bufferingProgress",
        "",
        "progress",
        "elapsedChanged",
        "time",
        "bitrateChanged",
        "bitrate",
        "audioParametersChanged",
        "AudioParameters",
        "p",
        "streamInfoChanged",
        "trackInfoChanged",
        "stateChanged",
        "Qmmp::State",
        "newState",
        "finished",
        "mutedChanged",
        "muted",
        "volumeChanged",
        "volume",
        "balanceChanged",
        "balance",
        "eqSettingsChanged",
        "nextTrackRequest",
        "setVolumePerChannel",
        "left",
        "right",
        "setMuted",
        "mute",
        "changeVolume",
        "delta",
        "setVolume",
        "volumeUp",
        "volumeDown",
        "setBalance",
        "play",
        "source",
        "queue",
        "offset",
        "stop",
        "pause",
        "seek",
        "pos",
        "seekRelative",
        "startNextSource",
        "startNextEngine"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'bufferingProgress'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'elapsedChanged'
        QtMocHelpers::SignalData<void(qint64)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 5 },
        }}),
        // Signal 'bitrateChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'audioParametersChanged'
        QtMocHelpers::SignalData<void(const AudioParameters &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'streamInfoChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'trackInfoChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void(Qmmp::State)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mutedChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Signal 'balanceChanged'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'eqSettingsChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextTrackRequest'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVolumePerChannel'
        QtMocHelpers::SlotData<void(int, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 }, { QMetaType::Int, 27 },
        }}),
        // Slot 'setMuted'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'changeVolume'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Slot 'setVolume'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'volumeUp'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'volumeDown'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBalance'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'play'
        QtMocHelpers::SlotData<bool(const QString &, bool, qint64)>(36, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 37 }, { QMetaType::Bool, 38 }, { QMetaType::LongLong, 39 },
        }}),
        // Slot 'play'
        QtMocHelpers::SlotData<bool(const QString &, bool)>(36, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 37 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'play'
        QtMocHelpers::SlotData<bool(const QString &)>(36, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'seek'
        QtMocHelpers::SlotData<void(qint64)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 43 },
        }}),
        // Slot 'seekRelative'
        QtMocHelpers::SlotData<void(qint64)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 39 },
        }}),
        // Slot 'startNextSource'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startNextEngine'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SoundCore, qt_meta_tag_ZN9SoundCoreE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SoundCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SoundCoreE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SoundCoreE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SoundCoreE_t>.metaTypes,
    nullptr
} };

void SoundCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SoundCore *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->bufferingProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->elapsedChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->bitrateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->audioParametersChanged((*reinterpret_cast<std::add_pointer_t<AudioParameters>>(_a[1]))); break;
        case 4: _t->streamInfoChanged(); break;
        case 5: _t->trackInfoChanged(); break;
        case 6: _t->stateChanged((*reinterpret_cast<std::add_pointer_t<Qmmp::State>>(_a[1]))); break;
        case 7: _t->finished(); break;
        case 8: _t->mutedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->balanceChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->eqSettingsChanged(); break;
        case 12: _t->nextTrackRequest(); break;
        case 13: _t->setVolumePerChannel((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->setMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->changeVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->volumeUp(); break;
        case 18: _t->volumeDown(); break;
        case 19: _t->setBalance((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: { bool _r = _t->play((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->play((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->play((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->stop(); break;
        case 24: _t->pause(); break;
        case 25: _t->seek((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 26: _t->seekRelative((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 27: _t->startNextSource(); break;
        case 28: _t->startNextEngine(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(int )>(_a, &SoundCore::bufferingProgress, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(qint64 )>(_a, &SoundCore::elapsedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(int )>(_a, &SoundCore::bitrateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(const AudioParameters & )>(_a, &SoundCore::audioParametersChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)()>(_a, &SoundCore::streamInfoChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)()>(_a, &SoundCore::trackInfoChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(Qmmp::State )>(_a, &SoundCore::stateChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)()>(_a, &SoundCore::finished, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(bool )>(_a, &SoundCore::mutedChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(int )>(_a, &SoundCore::volumeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)(int )>(_a, &SoundCore::balanceChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)()>(_a, &SoundCore::eqSettingsChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (SoundCore::*)()>(_a, &SoundCore::nextTrackRequest, 12))
            return;
    }
}

const QMetaObject *SoundCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SoundCoreE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SoundCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void SoundCore::bufferingProgress(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SoundCore::elapsedChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SoundCore::bitrateChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SoundCore::audioParametersChanged(const AudioParameters & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void SoundCore::streamInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SoundCore::trackInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SoundCore::stateChanged(Qmmp::State _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void SoundCore::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SoundCore::mutedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void SoundCore::volumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void SoundCore::balanceChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void SoundCore::eqSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SoundCore::nextTrackRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
