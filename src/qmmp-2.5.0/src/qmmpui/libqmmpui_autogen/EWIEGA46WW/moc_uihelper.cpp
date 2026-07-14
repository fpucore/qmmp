/****************************************************************************
** Meta object code from reading C++ file 'uihelper.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../uihelper.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uihelper.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8UiHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto UiHelper::qt_create_metaobjectdata<qt_meta_tag_ZN8UiHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UiHelper",
        "toggleVisibilityCalled",
        "",
        "showMainWindowCalled",
        "widgetAdded",
        "id",
        "widgetRemoved",
        "widgetUpdated",
        "toggleVisibility",
        "showMainWindow",
        "exit",
        "replaceAndPlay",
        "paths",
        "removeAction",
        "action",
        "addSelectedFiles",
        "files",
        "play",
        "playSelectedFiles",
        "disconnectPl"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toggleVisibilityCalled'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showMainWindowCalled'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'widgetAdded'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'widgetRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'widgetUpdated'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'toggleVisibility'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showMainWindow'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exit'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replaceAndPlay'
        QtMocHelpers::SlotData<void(const QStringList &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 12 },
        }}),
        // Slot 'removeAction'
        QtMocHelpers::SlotData<void(QObject *)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 14 },
        }}),
        // Slot 'addSelectedFiles'
        QtMocHelpers::SlotData<void(const QStringList &, bool)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Slot 'playSelectedFiles'
        QtMocHelpers::SlotData<void(const QStringList &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 16 },
        }}),
        // Slot 'disconnectPl'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UiHelper, qt_meta_tag_ZN8UiHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UiHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UiHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UiHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8UiHelperE_t>.metaTypes,
    nullptr
} };

void UiHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UiHelper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggleVisibilityCalled(); break;
        case 1: _t->showMainWindowCalled(); break;
        case 2: _t->widgetAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->widgetRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->widgetUpdated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->toggleVisibility(); break;
        case 6: _t->showMainWindow(); break;
        case 7: _t->exit(); break;
        case 8: _t->replaceAndPlay((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 9: _t->removeAction((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 10: _t->addSelectedFiles((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->playSelectedFiles((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 12: _t->disconnectPl(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UiHelper::*)()>(_a, &UiHelper::toggleVisibilityCalled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UiHelper::*)()>(_a, &UiHelper::showMainWindowCalled, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (UiHelper::*)(const QString & )>(_a, &UiHelper::widgetAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (UiHelper::*)(const QString & )>(_a, &UiHelper::widgetRemoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (UiHelper::*)(const QString & )>(_a, &UiHelper::widgetUpdated, 4))
            return;
    }
}

const QMetaObject *UiHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UiHelperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UiHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UiHelper::toggleVisibilityCalled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UiHelper::showMainWindowCalled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UiHelper::widgetAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void UiHelper::widgetRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void UiHelper::widgetUpdated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
