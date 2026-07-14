/****************************************************************************
** Meta object code from reading C++ file 'mediakeys.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mediakeys.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediakeys.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9MediaKeysE_t {};
} // unnamed namespace

template <> constexpr inline auto MediaKeys::qt_create_metaobjectdata<qt_meta_tag_ZN9MediaKeysE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MediaKeys",
        "grabMediaPlayerKeys",
        "QDBusPendingReply<>",
        "",
        "application",
        "time",
        "releaseMediaPlayerKeys",
        "onRegisterFinished",
        "QDBusPendingCallWatcher*",
        "watcher",
        "onKeyPressed",
        "in0",
        "in1"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'grabMediaPlayerKeys'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &, uint)>(1, 3, QMC::AccessPrivate, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::UInt, 5 },
        }}),
        // Slot 'releaseMediaPlayerKeys'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(6, 3, QMC::AccessPrivate, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'onRegisterFinished'
        QtMocHelpers::SlotData<void(QDBusPendingCallWatcher *)>(7, 3, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onKeyPressed'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(10, 3, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MediaKeys, qt_meta_tag_ZN9MediaKeysE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MediaKeys::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MediaKeysE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MediaKeysE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9MediaKeysE_t>.metaTypes,
    nullptr
} };

void MediaKeys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MediaKeys *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->grabMediaPlayerKeys((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->releaseMediaPlayerKeys((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->onRegisterFinished((*reinterpret_cast<std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        case 3: _t->onKeyPressed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MediaKeys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaKeys::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MediaKeysE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediaKeys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
