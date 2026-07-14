/****************************************************************************
** Meta object code from reading C++ file 'skinnedplaylistcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../skinnedplaylistcontrol.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skinnedplaylistcontrol.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22SkinnedPlaylistControlE_t {};
} // unnamed namespace

template <> constexpr inline auto SkinnedPlaylistControl::qt_create_metaobjectdata<qt_meta_tag_ZN22SkinnedPlaylistControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SkinnedPlaylistControl",
        "previousClicked",
        "",
        "nextClicked",
        "pauseClicked",
        "playClicked",
        "stopClicked",
        "ejectClicked",
        "updateSkin"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'previousClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextClicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pauseClicked'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'playClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ejectClicked'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSkin'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SkinnedPlaylistControl, qt_meta_tag_ZN22SkinnedPlaylistControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SkinnedPlaylistControl::staticMetaObject = { {
    QMetaObject::SuperData::link<PixmapWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SkinnedPlaylistControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SkinnedPlaylistControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22SkinnedPlaylistControlE_t>.metaTypes,
    nullptr
} };

void SkinnedPlaylistControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SkinnedPlaylistControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->previousClicked(); break;
        case 1: _t->nextClicked(); break;
        case 2: _t->pauseClicked(); break;
        case 3: _t->playClicked(); break;
        case 4: _t->stopClicked(); break;
        case 5: _t->ejectClicked(); break;
        case 6: _t->updateSkin(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::previousClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::nextClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::pauseClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::playClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::stopClicked, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedPlaylistControl::*)()>(_a, &SkinnedPlaylistControl::ejectClicked, 5))
            return;
    }
}

const QMetaObject *SkinnedPlaylistControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SkinnedPlaylistControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SkinnedPlaylistControlE_t>.strings))
        return static_cast<void*>(this);
    return PixmapWidget::qt_metacast(_clname);
}

int SkinnedPlaylistControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PixmapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SkinnedPlaylistControl::previousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SkinnedPlaylistControl::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SkinnedPlaylistControl::pauseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SkinnedPlaylistControl::playClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SkinnedPlaylistControl::stopClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SkinnedPlaylistControl::ejectClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
