/****************************************************************************
** Meta object code from reading C++ file 'qwindowsaudioplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwindowsaudioplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsaudioplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWindowsAudioPlugin_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsAudioPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsAudioPlugin_t qt_meta_stringdata_QWindowsAudioPlugin = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QWindowsAudioPlugin"

    },
    "QWindowsAudioPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsAudioPlugin[] = {

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

void QWindowsAudioPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWindowsAudioPlugin::staticMetaObject = {
    { &QAudioSystemPlugin::staticMetaObject, qt_meta_stringdata_QWindowsAudioPlugin.data,
      qt_meta_data_QWindowsAudioPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWindowsAudioPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsAudioPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsAudioPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAudioSystemPluginExtension"))
        return static_cast< QAudioSystemPluginExtension*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.audiosystempluginextension"))
        return static_cast< QAudioSystemPluginExtension*>(this);
    return QAudioSystemPlugin::qt_metacast(_clname);
}

int QWindowsAudioPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAudioSystemPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'a',  'u',  'd',  'i', 
    'o',  's',  'y',  's',  't',  'e',  'm',  'f', 
    'a',  'c',  't',  'o',  'r',  'y',  '/',  '5', 
    '.',  '0',  0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x13, 0x00, 'Q',  'W', 
    'i',  'n',  'd',  'o',  'w',  's',  'A',  'u', 
    'd',  'i',  'o',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x04, 0x00, 'K',  'e',  'y',  's',  0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x07, 0x00, 'd',  'e', 
    'f',  'a',  'u',  'l',  't',  0x00, 0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'q',  't',  '.',  'a',  'u',  'd',  'i', 
    'o',  's',  'y',  's',  't',  'e',  'm',  'f', 
    'a',  'c',  't',  'o',  'r',  'y',  '/',  '5', 
    '.',  '0',  0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, '8',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x07, 0x00, 'd',  'e',  'f',  'a',  'u',  'l', 
    't',  0x00, 0x00, 0x00, 0x8b, 0x01, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 0x13, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x13, 0x00, 'Q',  'W', 
    'i',  'n',  'd',  'o',  'w',  's',  'A',  'u', 
    'd',  'i',  'o',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xda, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(QWindowsAudioPlugin, QWindowsAudioPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
