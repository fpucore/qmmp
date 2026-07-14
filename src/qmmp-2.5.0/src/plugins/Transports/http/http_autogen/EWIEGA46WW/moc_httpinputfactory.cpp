/****************************************************************************
** Meta object code from reading C++ file 'httpinputfactory.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../httpinputfactory.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpinputfactory.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16HTTPInputFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto HTTPInputFactory::qt_create_metaobjectdata<qt_meta_tag_ZN16HTTPInputFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HTTPInputFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HTTPInputFactory, qt_meta_tag_ZN16HTTPInputFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HTTPInputFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16HTTPInputFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16HTTPInputFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16HTTPInputFactoryE_t>.metaTypes,
    nullptr
} };

void HTTPInputFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HTTPInputFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *HTTPInputFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPInputFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16HTTPInputFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InputSourceFactory"))
        return static_cast< InputSourceFactory*>(this);
    if (!strcmp(_clname, "InputSourceFactory/1.0"))
        return static_cast< InputSourceFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int HTTPInputFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_HTTPInputFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2d,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'I',  'n',  'p',  'u',  't',  'S',  'o', 
    'u',  'r',  'c',  'e',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x70,  'H',  'T',  'T',  'P',  'I',  'n', 
    'p',  'u',  't',  'F',  'a',  'c',  't',  'o', 
    'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(HTTPInputFactory, HTTPInputFactory, qt_pluginMetaDataV2_HTTPInputFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_HTTPInputFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2d,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    '.',  'I',  'n',  'p',  'u',  't',  'S',  'o', 
    'u',  'r',  'c',  'e',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x70,  'H',  'T',  'T',  'P',  'I',  'n', 
    'p',  'u',  't',  'F',  'a',  'c',  't',  'o', 
    'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(HTTPInputFactory, HTTPInputFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
