/****************************************************************************
** Meta object code from reading C++ file 'decodermpcfactory.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../decodermpcfactory.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodermpcfactory.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17DecoderMPCFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto DecoderMPCFactory::qt_create_metaobjectdata<qt_meta_tag_ZN17DecoderMPCFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DecoderMPCFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DecoderMPCFactory, qt_meta_tag_ZN17DecoderMPCFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DecoderMPCFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DecoderMPCFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DecoderMPCFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17DecoderMPCFactoryE_t>.metaTypes,
    nullptr
} };

void DecoderMPCFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DecoderMPCFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *DecoderMPCFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecoderMPCFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DecoderMPCFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DecoderFactory"))
        return static_cast< DecoderFactory*>(this);
    if (!strcmp(_clname, "DecoderFactory/1.0"))
        return static_cast< DecoderFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int DecoderMPCFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_DecoderMPCFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'D',  'e',  'c',  'o',  'd',  'e',  'r', 
    'F',  'a',  'c',  't',  'o',  'r',  'y',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x71,  'D',  'e',  'c',  'o',  'd',  'e', 
    'r',  'M',  'P',  'C',  'F',  'a',  'c',  't', 
    'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(DecoderMPCFactory, DecoderMPCFactory, qt_pluginMetaDataV2_DecoderMPCFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_DecoderMPCFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'D',  'e',  'c',  'o',  'd',  'e',  'r', 
    'F',  'a',  'c',  't',  'o',  'r',  'y',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x71,  'D',  'e',  'c',  'o',  'd',  'e', 
    'r',  'M',  'P',  'C',  'F',  'a',  'c',  't', 
    'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DecoderMPCFactory, DecoderMPCFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
