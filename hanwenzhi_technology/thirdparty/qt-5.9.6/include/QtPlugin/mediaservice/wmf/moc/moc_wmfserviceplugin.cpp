/****************************************************************************
** Meta object code from reading C++ file 'wmfserviceplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wmfserviceplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wmfserviceplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WMFServicePlugin_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WMFServicePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WMFServicePlugin_t qt_meta_stringdata_WMFServicePlugin = {
    {
QT_MOC_LITERAL(0, 0, 16) // "WMFServicePlugin"

    },
    "WMFServicePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WMFServicePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WMFServicePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WMFServicePlugin::staticMetaObject = {
    { &QMediaServiceProviderPlugin::staticMetaObject, qt_meta_stringdata_WMFServicePlugin.data,
      qt_meta_data_WMFServicePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WMFServicePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WMFServicePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WMFServicePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QMediaServiceSupportedDevicesInterface"))
        return static_cast< QMediaServiceSupportedDevicesInterface*>(this);
    if (!strcmp(_clname, "QMediaServiceDefaultDeviceInterface"))
        return static_cast< QMediaServiceDefaultDeviceInterface*>(this);
    if (!strcmp(_clname, "QMediaServiceFeaturesInterface"))
        return static_cast< QMediaServiceFeaturesInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.mediaservicesupporteddevices/5.0"))
        return static_cast< QMediaServiceSupportedDevicesInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.mediaservicedefaultdevice/5.3"))
        return static_cast< QMediaServiceDefaultDeviceInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.mediaservicefeatures/5.0"))
        return static_cast< QMediaServiceFeaturesInterface*>(this);
    return QMediaServiceProviderPlugin::qt_metacast(_clname);
}

int WMFServicePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaServiceProviderPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '8',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '$',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '1',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'm',  'e',  'd',  'i', 
    'a',  's',  'e',  'r',  'v',  'i',  'c',  'e', 
    'p',  'r',  'o',  'v',  'i',  'd',  'e',  'r', 
    'f',  'a',  'c',  't',  'o',  'r',  'y',  '/', 
    '5',  '.',  '0',  0x00, 0x9b, 0x0b, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x10, 0x00, 'W',  'M', 
    'F',  'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    0xda, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x13, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x16, 0x00, 'w',  'i',  'n',  'd',  'o',  'w', 
    's',  'm',  'e',  'd',  'i',  'a',  'f',  'o', 
    'u',  'n',  'd',  'a',  't',  'i',  'o',  'n', 
    0x8b, 0x01, 0x00, 0x00, 0x14, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'S',  'e',  'r',  'v',  'i',  'c', 
    'e',  's',  0x00, 0x00, '0',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    0x1d, 0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'a',  'u',  'd',  'i', 
    'o',  'd',  'e',  'c',  'o',  'd',  'e',  0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '8',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '$',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '1',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'm',  'e',  'd',  'i', 
    'a',  's',  'e',  'r',  'v',  'i',  'c',  'e', 
    'p',  'r',  'o',  'v',  'i',  'd',  'e',  'r', 
    'f',  'a',  'c',  't',  'o',  'r',  'y',  '/', 
    '5',  '.',  '0',  0x00, 0x95, 0x0b, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x16, 0x00, 'w',  'i',  'n',  'd',  'o',  'w', 
    's',  'm',  'e',  'd',  'i',  'a',  'f',  'o', 
    'u',  'n',  'd',  'a',  't',  'i',  'o',  'n', 
    0x8b, 0x01, 0x00, 0x00, 0x14, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'S',  'e',  'r',  'v',  'i',  'c', 
    'e',  's',  0x00, 0x00, '0',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    0x1d, 0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'a',  'u',  'd',  'i', 
    'o',  'd',  'e',  'c',  'o',  'd',  'e',  0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x9b, 0x1e, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x10, 0x00, 'W',  'M', 
    'F',  'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(WMFServicePlugin, WMFServicePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
