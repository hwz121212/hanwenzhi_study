/****************************************************************************
** Meta object code from reading C++ file 'geoserviceproviderfactory_esri.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../geoserviceproviderfactory_esri.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geoserviceproviderfactory_esri.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoServiceProviderFactoryEsri_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoServiceProviderFactoryEsri_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoServiceProviderFactoryEsri_t qt_meta_stringdata_GeoServiceProviderFactoryEsri = {
    {
QT_MOC_LITERAL(0, 0, 29) // "GeoServiceProviderFactoryEsri"

    },
    "GeoServiceProviderFactoryEsri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoServiceProviderFactoryEsri[] = {

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

void GeoServiceProviderFactoryEsri::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GeoServiceProviderFactoryEsri::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GeoServiceProviderFactoryEsri.data,
      qt_meta_data_GeoServiceProviderFactoryEsri,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeoServiceProviderFactoryEsri::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoServiceProviderFactoryEsri::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoServiceProviderFactoryEsri.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGeoServiceProviderFactory"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.geoservice.serviceproviderfactory/5.0"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int GeoServiceProviderFactoryEsri::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe8, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd4, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '7',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'g',  'e',  'o',  's', 
    'e',  'r',  'v',  'i',  'c',  'e',  '.',  's', 
    'e',  'r',  'v',  'i',  'c',  'e',  'p',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '/',  '5',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x0c, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1d, 0x00, 'G',  'e', 
    'o',  'S',  'e',  'r',  'v',  'i',  'c',  'e', 
    'P',  'r',  'o',  'v',  'i',  'd',  'e',  'r', 
    'F',  'a',  'c',  't',  'o',  'r',  'y',  'E', 
    's',  'r',  'i',  0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x16, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    '$',  0x01, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
    0x0c, 0x01, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x04, 0x00, 'K',  'e',  'y',  's',  0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 'e',  's', 
    'r',  'i',  0x00, 0x00, 0x8b, 0x01, 0x00, 0x00,
    0x1b, 0x08, 0x00, 0x00, 0x08, 0x00, 'P',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  0x00, 0x00,
    0x04, 0x00, 'e',  's',  'r',  'i',  0x00, 0x00,
    0x9a, 0x0c, 0x00, 0x00, 0x07, 0x00, 'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x0c, 0x00, 'E',  'x', 
    'p',  'e',  'r',  'i',  'm',  'e',  'n',  't', 
    'a',  'l',  0x00, 0x00, 0x94, 0x0f, 0x00, 0x00,
    0x08, 0x00, 'F',  'e',  'a',  't',  'u',  'r', 
    'e',  's',  0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    0x14, 0x00, 'O',  'n',  'l',  'i',  'n',  'e', 
    'M',  'a',  'p',  'p',  'i',  'n',  'g',  'F', 
    'e',  'a',  't',  'u',  'r',  'e',  0x00, 0x00,
    0x16, 0x00, 'O',  'n',  'l',  'i',  'n',  'e', 
    'G',  'e',  'o',  'c',  'o',  'd',  'i',  'n', 
    'g',  'F',  'e',  'a',  't',  'u',  'r',  'e', 
    0x17, 0x00, 'R',  'e',  'v',  'e',  'r',  's', 
    'e',  'G',  'e',  'o',  'c',  'o',  'd',  'i', 
    'n',  'g',  'F',  'e',  'a',  't',  'u',  'r', 
    'e',  0x00, 0x00, 0x00, 0x14, 0x00, 'O',  'n', 
    'l',  'i',  'n',  'e',  'R',  'o',  'u',  't', 
    'i',  'n',  'g',  'F',  'e',  'a',  't',  'u', 
    'r',  'e',  0x00, 0x00, 0x8b, 0x01, 0x00, 0x00,
    0x8b, 0x04, 0x00, 0x00, 0x8b, 0x07, 0x00, 0x00,
    0x0b, 0x0b, 0x00, 0x00, 0x1a, '}',  0x00, 0x00,
    0x08, 0x00, 'P',  'r',  'i',  'o',  'r',  'i', 
    't',  'y',  0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0xfc, 0x00, 0x00, 0x00, '0',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe8, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd4, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '7',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'g',  'e',  'o',  's', 
    'e',  'r',  'v',  'i',  'c',  'e',  '.',  's', 
    'e',  'r',  'v',  'i',  'c',  'e',  'p',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '/',  '5',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x0c, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, '$',  0x01, 0x00, 0x00,
    0x0d, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x04, 0x00, 'e',  's',  'r',  'i',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x1b, 0x08, 0x00, 0x00,
    0x08, 0x00, 'P',  'r',  'o',  'v',  'i',  'd', 
    'e',  'r',  0x00, 0x00, 0x04, 0x00, 'e',  's', 
    'r',  'i',  0x00, 0x00, 0x9a, 0x0c, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x0c, 0x00, 'E',  'x',  'p',  'e',  'r',  'i', 
    'm',  'e',  'n',  't',  'a',  'l',  0x00, 0x00,
    0x94, 0x0f, 0x00, 0x00, 0x08, 0x00, 'F',  'e', 
    'a',  't',  'u',  'r',  'e',  's',  0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, 0x14, 0x00, 'O',  'n', 
    'l',  'i',  'n',  'e',  'M',  'a',  'p',  'p', 
    'i',  'n',  'g',  'F',  'e',  'a',  't',  'u', 
    'r',  'e',  0x00, 0x00, 0x16, 0x00, 'O',  'n', 
    'l',  'i',  'n',  'e',  'G',  'e',  'o',  'c', 
    'o',  'd',  'i',  'n',  'g',  'F',  'e',  'a', 
    't',  'u',  'r',  'e',  0x17, 0x00, 'R',  'e', 
    'v',  'e',  'r',  's',  'e',  'G',  'e',  'o', 
    'c',  'o',  'd',  'i',  'n',  'g',  'F',  'e', 
    'a',  't',  'u',  'r',  'e',  0x00, 0x00, 0x00,
    0x14, 0x00, 'O',  'n',  'l',  'i',  'n',  'e', 
    'R',  'o',  'u',  't',  'i',  'n',  'g',  'F', 
    'e',  'a',  't',  'u',  'r',  'e',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x8b, 0x04, 0x00, 0x00,
    0x8b, 0x07, 0x00, 0x00, 0x0b, 0x0b, 0x00, 0x00,
    0x1a, '}',  0x00, 0x00, 0x08, 0x00, 'P',  'r', 
    'i',  'o',  'r',  'i',  't',  'y',  0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x1b, '3',  0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1d, 0x00, 'G',  'e',  'o',  'S',  'e',  'r', 
    'v',  'i',  'c',  'e',  'P',  'r',  'o',  'v', 
    'i',  'd',  'e',  'r',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  'E',  's',  'r',  'i',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'T',  0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00,
    0xb8, 0x01, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(GeoServiceProviderFactoryEsri, GeoServiceProviderFactoryEsri)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
