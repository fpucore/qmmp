/****************************************************************************
** Meta object code from reading C++ file 'skinnedlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../skinnedlistwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skinnedlistwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17SkinnedListWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SkinnedListWidget::qt_create_metaobjectdata<qt_meta_tag_ZN17SkinnedListWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SkinnedListWidget",
        "doubleClicked",
        "",
        "scrollPositionChanged",
        "readSettings",
        "updateList",
        "flags",
        "scroll",
        "y",
        "setViewPosition",
        "sc",
        "bottom",
        "setModel",
        "PlayListModel*",
        "selected",
        "previous",
        "updateSkin",
        "autoscroll",
        "updateRepeatIndicator",
        "scrollTo",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollPositionChanged'
        QtMocHelpers::SignalData<void(int, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'readSettings'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateList'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'scroll'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'setViewPosition'
        QtMocHelpers::SlotData<void(int, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'setViewPosition'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'setModel'
        QtMocHelpers::SlotData<void(PlayListModel *, PlayListModel *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 13, 15 },
        }}),
        // Slot 'setModel'
        QtMocHelpers::SlotData<void(PlayListModel *)>(12, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'updateSkin'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'autoscroll'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateRepeatIndicator'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'scrollTo'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SkinnedListWidget, qt_meta_tag_ZN17SkinnedListWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SkinnedListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SkinnedListWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SkinnedListWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17SkinnedListWidgetE_t>.metaTypes,
    nullptr
} };

void SkinnedListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SkinnedListWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->scrollPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->updateList((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->scroll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setViewPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->setViewPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setModel((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[2]))); break;
        case 8: _t->setModel((*reinterpret_cast<std::add_pointer_t<PlayListModel*>>(_a[1]))); break;
        case 9: _t->updateSkin(); break;
        case 10: _t->autoscroll(); break;
        case 11: _t->updateRepeatIndicator(); break;
        case 12: _t->scrollTo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SkinnedListWidget::*)()>(_a, &SkinnedListWidget::doubleClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SkinnedListWidget::*)(int , int )>(_a, &SkinnedListWidget::scrollPositionChanged, 1))
            return;
    }
}

const QMetaObject *SkinnedListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SkinnedListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SkinnedListWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SkinnedListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SkinnedListWidget::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SkinnedListWidget::scrollPositionChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
