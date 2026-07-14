/****************************************************************************
** Meta object code from reading C++ file 'm3uplaylistformat.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../m3uplaylistformat.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'm3uplaylistformat.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17M3UPlaylistFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto M3UPlaylistFormat::qt_create_metaobjectdata<qt_meta_tag_ZN17M3UPlaylistFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "M3UPlaylistFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<M3UPlaylistFormat, qt_meta_tag_ZN17M3UPlaylistFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject M3UPlaylistFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17M3UPlaylistFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17M3UPlaylistFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17M3UPlaylistFormatE_t>.metaTypes,
    nullptr
} };

void M3UPlaylistFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<M3UPlaylistFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *M3UPlaylistFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *M3UPlaylistFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17M3UPlaylistFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PlayListFormat"))
        return static_cast< PlayListFormat*>(this);
    if (!strcmp(_clname, "PlayListFormat/1.0"))
        return static_cast< PlayListFormat*>(this);
    return QObject::qt_metacast(_clname);
}

int M3UPlaylistFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_M3UPlaylistFormat[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2b,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    'u',  'i',  '.',  'P',  'l',  'a',  'y',  'L', 
    'i',  's',  't',  'F',  'o',  'r',  'm',  'a', 
    't',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x71,  'M',  '3',  'U',  'P',  'l',  'a', 
    'y',  'l',  'i',  's',  't',  'F',  'o',  'r', 
    'm',  'a',  't', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(M3UPlaylistFormat, M3UPlaylistFormat, qt_pluginMetaDataV2_M3UPlaylistFormat)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_M3UPlaylistFormat[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2b,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    'u',  'i',  '.',  'P',  'l',  'a',  'y',  'L', 
    'i',  's',  't',  'F',  'o',  'r',  'm',  'a', 
    't',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  '.',  '1',  '.',  '0', 
    // "className"
    0x03,  0x71,  'M',  '3',  'U',  'P',  'l',  'a', 
    'y',  'l',  'i',  's',  't',  'F',  'o',  'r', 
    'm',  'a',  't', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(M3UPlaylistFormat, M3UPlaylistFormat)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
