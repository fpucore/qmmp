/****************************************************************************
** Meta object code from reading C++ file 'builtincommandlineoption.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../builtincommandlineoption.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'builtincommandlineoption.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24BuiltinCommandLineOptionE_t {};
} // unnamed namespace

template <> constexpr inline auto BuiltinCommandLineOption::qt_create_metaobjectdata<qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BuiltinCommandLineOption",
        "addPendingPaths",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'addPendingPaths'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BuiltinCommandLineOption, qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BuiltinCommandLineOption::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>.metaTypes,
    nullptr
} };

void BuiltinCommandLineOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BuiltinCommandLineOption *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addPendingPaths(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *BuiltinCommandLineOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuiltinCommandLineOption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24BuiltinCommandLineOptionE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommandLineHandler"))
        return static_cast< CommandLineHandler*>(this);
    if (!strcmp(_clname, "CommandLineHandlerInterface/1.0"))
        return static_cast< CommandLineHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int BuiltinCommandLineOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
