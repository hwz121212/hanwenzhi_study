/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtVirtualKeyboard__Settings_t {
    QByteArrayData data[12];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtVirtualKeyboard__Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtVirtualKeyboard__Settings_t qt_meta_stringdata_QtVirtualKeyboard__Settings = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QtVirtualKeyboard::Settings"
QT_MOC_LITERAL(1, 28, 12), // "styleChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "styleNameChanged"
QT_MOC_LITERAL(4, 59, 13), // "localeChanged"
QT_MOC_LITERAL(5, 73, 23), // "availableLocalesChanged"
QT_MOC_LITERAL(6, 97, 20), // "activeLocalesChanged"
QT_MOC_LITERAL(7, 118, 17), // "layoutPathChanged"
QT_MOC_LITERAL(8, 136, 23), // "wclAutoHideDelayChanged"
QT_MOC_LITERAL(9, 160, 23), // "wclAlwaysVisibleChanged"
QT_MOC_LITERAL(10, 184, 24), // "wclAutoCommitWordChanged"
QT_MOC_LITERAL(11, 209, 21) // "fullScreenModeChanged"

    },
    "QtVirtualKeyboard::Settings\0styleChanged\0"
    "\0styleNameChanged\0localeChanged\0"
    "availableLocalesChanged\0activeLocalesChanged\0"
    "layoutPathChanged\0wclAutoHideDelayChanged\0"
    "wclAlwaysVisibleChanged\0"
    "wclAutoCommitWordChanged\0fullScreenModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtVirtualKeyboard__Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtVirtualKeyboard::Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->styleChanged(); break;
        case 1: _t->styleNameChanged(); break;
        case 2: _t->localeChanged(); break;
        case 3: _t->availableLocalesChanged(); break;
        case 4: _t->activeLocalesChanged(); break;
        case 5: _t->layoutPathChanged(); break;
        case 6: _t->wclAutoHideDelayChanged(); break;
        case 7: _t->wclAlwaysVisibleChanged(); break;
        case 8: _t->wclAutoCommitWordChanged(); break;
        case 9: _t->fullScreenModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::styleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::styleNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::localeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::availableLocalesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::activeLocalesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::layoutPathChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::wclAutoHideDelayChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::wclAlwaysVisibleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::wclAutoCommitWordChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::fullScreenModeChanged)) {
                *result = 9;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtVirtualKeyboard::Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtVirtualKeyboard__Settings.data,
      qt_meta_data_QtVirtualKeyboard__Settings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtVirtualKeyboard::Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtVirtualKeyboard::Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtVirtualKeyboard__Settings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtVirtualKeyboard::Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QtVirtualKeyboard::Settings::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtVirtualKeyboard::Settings::styleNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtVirtualKeyboard::Settings::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtVirtualKeyboard::Settings::availableLocalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtVirtualKeyboard::Settings::activeLocalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtVirtualKeyboard::Settings::layoutPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtVirtualKeyboard::Settings::wclAutoHideDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtVirtualKeyboard::Settings::wclAlwaysVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtVirtualKeyboard::Settings::wclAutoCommitWordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtVirtualKeyboard::Settings::fullScreenModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
