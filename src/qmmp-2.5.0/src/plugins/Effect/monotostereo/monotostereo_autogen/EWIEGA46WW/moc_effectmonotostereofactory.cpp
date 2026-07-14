/****************************************************************************
** Meta object code from reading C++ file 'effectmonotostereofactory.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../effectmonotostereofactory.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectmonotostereofactory.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto EffectMonoToStereoFactory::qt_create_metaobjectdata<qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EffectMonoToStereoFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EffectMonoToStereoFactory, qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EffectMonoToStereoFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>.metaTypes,
    nullptr
} };

void EffectMonoToStereoFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectMonoToStereoFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *EffectMonoToStereoFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectMonoToStereoFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25EffectMonoToStereoFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EffectFactory"))
        return static_cast< EffectFactory*>(this);
    if (!strcmp(_clname, "EffectFactory/1.0"))
        return static_cast< EffectFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int EffectMonoToStereoFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_EffectMonoToStereoFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x28,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'E',  'f',  'f',  'e',  'c',  't',  'F', 
    'a',  'c',  't',  'o',  'r',  'y',  'I',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e',  '.', 
    '1',  '.',  '0', 
    // "className"
    0x03,  0x78,  0x19,  'E',  'f',  'f',  'e',  'c', 
    't',  'M',  'o',  'n',  'o',  'T',  'o',  'S', 
    't',  'e',  'r',  'e',  'o',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(EffectMonoToStereoFactory, EffectMonoToStereoFactory, qt_pluginMetaDataV2_EffectMonoToStereoFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_EffectMonoToStereoFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x28,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'E',  'f',  'f',  'e',  'c',  't',  'F', 
    'a',  'c',  't',  'o',  'r',  'y',  'I',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e',  '.', 
    '1',  '.',  '0', 
    // "className"
    0x03,  0x78,  0x19,  'E',  'f',  'f',  'e',  'c', 
    't',  'M',  'o',  'n',  'o',  'T',  'o',  'S', 
    't',  'e',  'r',  'e',  'o',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(EffectMonoToStereoFactory, EffectMonoToStereoFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
