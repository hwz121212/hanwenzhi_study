/****************************************************************************
** Meta object code from reading C++ file 'qsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSettings_t {
    QByteArrayData data[30];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSettings_t qt_meta_stringdata_QSettings = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QSettings"
QT_MOC_LITERAL(1, 10, 6), // "Status"
QT_MOC_LITERAL(2, 17, 7), // "NoError"
QT_MOC_LITERAL(3, 25, 11), // "AccessError"
QT_MOC_LITERAL(4, 37, 11), // "FormatError"
QT_MOC_LITERAL(5, 49, 6), // "Format"
QT_MOC_LITERAL(6, 56, 12), // "NativeFormat"
QT_MOC_LITERAL(7, 69, 9), // "IniFormat"
QT_MOC_LITERAL(8, 79, 16), // "Registry32Format"
QT_MOC_LITERAL(9, 96, 16), // "Registry64Format"
QT_MOC_LITERAL(10, 113, 13), // "InvalidFormat"
QT_MOC_LITERAL(11, 127, 13), // "CustomFormat1"
QT_MOC_LITERAL(12, 141, 13), // "CustomFormat2"
QT_MOC_LITERAL(13, 155, 13), // "CustomFormat3"
QT_MOC_LITERAL(14, 169, 13), // "CustomFormat4"
QT_MOC_LITERAL(15, 183, 13), // "CustomFormat5"
QT_MOC_LITERAL(16, 197, 13), // "CustomFormat6"
QT_MOC_LITERAL(17, 211, 13), // "CustomFormat7"
QT_MOC_LITERAL(18, 225, 13), // "CustomFormat8"
QT_MOC_LITERAL(19, 239, 13), // "CustomFormat9"
QT_MOC_LITERAL(20, 253, 14), // "CustomFormat10"
QT_MOC_LITERAL(21, 268, 14), // "CustomFormat11"
QT_MOC_LITERAL(22, 283, 14), // "CustomFormat12"
QT_MOC_LITERAL(23, 298, 14), // "CustomFormat13"
QT_MOC_LITERAL(24, 313, 14), // "CustomFormat14"
QT_MOC_LITERAL(25, 328, 14), // "CustomFormat15"
QT_MOC_LITERAL(26, 343, 14), // "CustomFormat16"
QT_MOC_LITERAL(27, 358, 5), // "Scope"
QT_MOC_LITERAL(28, 364, 9), // "UserScope"
QT_MOC_LITERAL(29, 374, 11) // "SystemScope"

    },
    "QSettings\0Status\0NoError\0AccessError\0"
    "FormatError\0Format\0NativeFormat\0"
    "IniFormat\0Registry32Format\0Registry64Format\0"
    "InvalidFormat\0CustomFormat1\0CustomFormat2\0"
    "CustomFormat3\0CustomFormat4\0CustomFormat5\0"
    "CustomFormat6\0CustomFormat7\0CustomFormat8\0"
    "CustomFormat9\0CustomFormat10\0"
    "CustomFormat11\0CustomFormat12\0"
    "CustomFormat13\0CustomFormat14\0"
    "CustomFormat15\0CustomFormat16\0Scope\0"
    "UserScope\0SystemScope"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    3,   26,
       5, 0x0,   21,   32,
      27, 0x0,    2,   74,

 // enum data: key, value
       2, uint(QSettings::NoError),
       3, uint(QSettings::AccessError),
       4, uint(QSettings::FormatError),
       6, uint(QSettings::NativeFormat),
       7, uint(QSettings::IniFormat),
       8, uint(QSettings::Registry32Format),
       9, uint(QSettings::Registry64Format),
      10, uint(QSettings::InvalidFormat),
      11, uint(QSettings::CustomFormat1),
      12, uint(QSettings::CustomFormat2),
      13, uint(QSettings::CustomFormat3),
      14, uint(QSettings::CustomFormat4),
      15, uint(QSettings::CustomFormat5),
      16, uint(QSettings::CustomFormat6),
      17, uint(QSettings::CustomFormat7),
      18, uint(QSettings::CustomFormat8),
      19, uint(QSettings::CustomFormat9),
      20, uint(QSettings::CustomFormat10),
      21, uint(QSettings::CustomFormat11),
      22, uint(QSettings::CustomFormat12),
      23, uint(QSettings::CustomFormat13),
      24, uint(QSettings::CustomFormat14),
      25, uint(QSettings::CustomFormat15),
      26, uint(QSettings::CustomFormat16),
      28, uint(QSettings::UserScope),
      29, uint(QSettings::SystemScope),

       0        // eod
};

void QSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSettings.data,
      qt_meta_data_QSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
