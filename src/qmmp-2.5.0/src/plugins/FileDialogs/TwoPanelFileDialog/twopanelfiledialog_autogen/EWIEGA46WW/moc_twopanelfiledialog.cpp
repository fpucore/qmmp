/****************************************************************************
** Meta object code from reading C++ file 'twopanelfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../twopanelfiledialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twopanelfiledialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18TwoPanelFileDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto TwoPanelFileDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18TwoPanelFileDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TwoPanelFileDialog"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TwoPanelFileDialog, qt_meta_tag_ZN18TwoPanelFileDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TwoPanelFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<FileDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TwoPanelFileDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TwoPanelFileDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18TwoPanelFileDialogE_t>.metaTypes,
    nullptr
} };

void TwoPanelFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TwoPanelFileDialog *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *TwoPanelFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoPanelFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TwoPanelFileDialogE_t>.strings))
        return static_cast<void*>(this);
    return FileDialog::qt_metacast(_clname);
}

int TwoPanelFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto TwoPanelFileDialogFactory::qt_create_metaobjectdata<qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TwoPanelFileDialogFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TwoPanelFileDialogFactory, qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TwoPanelFileDialogFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>.metaTypes,
    nullptr
} };

void TwoPanelFileDialogFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TwoPanelFileDialogFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *TwoPanelFileDialogFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoPanelFileDialogFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25TwoPanelFileDialogFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FileDialogFactory"))
        return static_cast< FileDialogFactory*>(this);
    if (!strcmp(_clname, "FileDialogFactory/1.0"))
        return static_cast< FileDialogFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int TwoPanelFileDialogFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_TwoPanelFileDialogFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2e,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    'u',  'i',  '.',  'F',  'i',  'l',  'e',  'D', 
    'i',  'a',  'l',  'o',  'g',  'F',  'a',  'c', 
    't',  'o',  'r',  'y',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  '.',  '1',  '.', 
    '0', 
    // "className"
    0x03,  0x78,  0x19,  'T',  'w',  'o',  'P',  'a', 
    'n',  'e',  'l',  'F',  'i',  'l',  'e',  'D', 
    'i',  'a',  'l',  'o',  'g',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(TwoPanelFileDialogFactory, TwoPanelFileDialogFactory, qt_pluginMetaDataV2_TwoPanelFileDialogFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_TwoPanelFileDialogFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2e,  'o',  'r',  'g',  '.',  'q', 
    'm',  'm',  'p',  '.',  'q',  'm',  'm',  'p', 
    'u',  'i',  '.',  'F',  'i',  'l',  'e',  'D', 
    'i',  'a',  'l',  'o',  'g',  'F',  'a',  'c', 
    't',  'o',  'r',  'y',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  '.',  '1',  '.', 
    '0', 
    // "className"
    0x03,  0x78,  0x19,  'T',  'w',  'o',  'P',  'a', 
    'n',  'e',  'l',  'F',  'i',  'l',  'e',  'D', 
    'i',  'a',  'l',  'o',  'g',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(TwoPanelFileDialogFactory, TwoPanelFileDialogFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
