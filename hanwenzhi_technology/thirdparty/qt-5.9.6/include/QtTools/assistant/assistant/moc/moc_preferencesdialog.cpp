/****************************************************************************
** Meta object code from reading C++ file 'preferencesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../preferencesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferencesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[23];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreferencesDialog"
QT_MOC_LITERAL(1, 18, 17), // "updateBrowserFont"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "updateApplicationFont"
QT_MOC_LITERAL(4, 59, 19), // "updateUserInterface"
QT_MOC_LITERAL(5, 79, 16), // "updateAttributes"
QT_MOC_LITERAL(6, 96, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 113, 4), // "item"
QT_MOC_LITERAL(8, 118, 15), // "updateFilterMap"
QT_MOC_LITERAL(9, 134, 9), // "addFilter"
QT_MOC_LITERAL(10, 144, 12), // "removeFilter"
QT_MOC_LITERAL(11, 157, 21), // "addDocumentationLocal"
QT_MOC_LITERAL(12, 179, 19), // "removeDocumentation"
QT_MOC_LITERAL(13, 199, 12), // "applyChanges"
QT_MOC_LITERAL(14, 212, 21), // "appFontSettingToggled"
QT_MOC_LITERAL(15, 234, 2), // "on"
QT_MOC_LITERAL(16, 237, 21), // "appFontSettingChanged"
QT_MOC_LITERAL(17, 259, 5), // "index"
QT_MOC_LITERAL(18, 265, 25), // "browserFontSettingToggled"
QT_MOC_LITERAL(19, 291, 25), // "browserFontSettingChanged"
QT_MOC_LITERAL(20, 317, 12), // "setBlankPage"
QT_MOC_LITERAL(21, 330, 14), // "setCurrentPage"
QT_MOC_LITERAL(22, 345, 14) // "setDefaultPage"

    },
    "PreferencesDialog\0updateBrowserFont\0"
    "\0updateApplicationFont\0updateUserInterface\0"
    "updateAttributes\0QListWidgetItem*\0"
    "item\0updateFilterMap\0addFilter\0"
    "removeFilter\0addDocumentationLocal\0"
    "removeDocumentation\0applyChanges\0"
    "appFontSettingToggled\0on\0appFontSettingChanged\0"
    "index\0browserFontSettingToggled\0"
    "browserFontSettingChanged\0setBlankPage\0"
    "setCurrentPage\0setDefaultPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  102,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      16,    1,  114,    2, 0x08 /* Private */,
      18,    1,  117,    2, 0x08 /* Private */,
      19,    1,  120,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,
      21,    0,  124,    2, 0x08 /* Private */,
      22,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateBrowserFont(); break;
        case 1: _t->updateApplicationFont(); break;
        case 2: _t->updateUserInterface(); break;
        case 3: _t->updateAttributes((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->updateFilterMap(); break;
        case 5: _t->addFilter(); break;
        case 6: _t->removeFilter(); break;
        case 7: _t->addDocumentationLocal(); break;
        case 8: _t->removeDocumentation(); break;
        case 9: _t->applyChanges(); break;
        case 10: _t->appFontSettingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->appFontSettingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->browserFontSettingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->browserFontSettingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setBlankPage(); break;
        case 15: _t->setCurrentPage(); break;
        case 16: _t->setDefaultPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PreferencesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::updateBrowserFont)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PreferencesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::updateApplicationFont)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PreferencesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::updateUserInterface)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog.data,
      qt_meta_data_PreferencesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PreferencesDialog::updateBrowserFont()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PreferencesDialog::updateApplicationFont()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PreferencesDialog::updateUserInterface()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
