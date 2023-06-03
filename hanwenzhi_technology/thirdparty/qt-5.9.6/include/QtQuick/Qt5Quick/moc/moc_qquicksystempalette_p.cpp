/****************************************************************************
** Meta object code from reading C++ file 'qquicksystempalette_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquicksystempalette_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicksystempalette_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSystemPalette_t {
    QByteArrayData data[23];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSystemPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSystemPalette_t qt_meta_stringdata_QQuickSystemPalette = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickSystemPalette"
QT_MOC_LITERAL(1, 20, 14), // "paletteChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "colorGroup"
QT_MOC_LITERAL(4, 47, 31), // "QQuickSystemPalette::ColorGroup"
QT_MOC_LITERAL(5, 79, 6), // "window"
QT_MOC_LITERAL(6, 86, 10), // "windowText"
QT_MOC_LITERAL(7, 97, 4), // "base"
QT_MOC_LITERAL(8, 102, 4), // "text"
QT_MOC_LITERAL(9, 107, 13), // "alternateBase"
QT_MOC_LITERAL(10, 121, 6), // "button"
QT_MOC_LITERAL(11, 128, 10), // "buttonText"
QT_MOC_LITERAL(12, 139, 5), // "light"
QT_MOC_LITERAL(13, 145, 8), // "midlight"
QT_MOC_LITERAL(14, 154, 4), // "dark"
QT_MOC_LITERAL(15, 159, 3), // "mid"
QT_MOC_LITERAL(16, 163, 6), // "shadow"
QT_MOC_LITERAL(17, 170, 9), // "highlight"
QT_MOC_LITERAL(18, 180, 15), // "highlightedText"
QT_MOC_LITERAL(19, 196, 10), // "ColorGroup"
QT_MOC_LITERAL(20, 207, 6), // "Active"
QT_MOC_LITERAL(21, 214, 8), // "Inactive"
QT_MOC_LITERAL(22, 223, 8) // "Disabled"

    },
    "QQuickSystemPalette\0paletteChanged\0\0"
    "colorGroup\0QQuickSystemPalette::ColorGroup\0"
    "window\0windowText\0base\0text\0alternateBase\0"
    "button\0buttonText\0light\0midlight\0dark\0"
    "mid\0shadow\0highlight\0highlightedText\0"
    "ColorGroup\0Active\0Inactive\0Disabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSystemPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   20, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,
       5, QMetaType::QColor, 0x00495001,
       6, QMetaType::QColor, 0x00495001,
       7, QMetaType::QColor, 0x00495001,
       8, QMetaType::QColor, 0x00495001,
       9, QMetaType::QColor, 0x00495001,
      10, QMetaType::QColor, 0x00495001,
      11, QMetaType::QColor, 0x00495001,
      12, QMetaType::QColor, 0x00495001,
      13, QMetaType::QColor, 0x00495001,
      14, QMetaType::QColor, 0x00495001,
      15, QMetaType::QColor, 0x00495001,
      16, QMetaType::QColor, 0x00495001,
      17, QMetaType::QColor, 0x00495001,
      18, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      19, 0x0,    3,   84,

 // enum data: key, value
      20, uint(QQuickSystemPalette::Active),
      21, uint(QQuickSystemPalette::Inactive),
      22, uint(QQuickSystemPalette::Disabled),

       0        // eod
};

void QQuickSystemPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSystemPalette *_t = static_cast<QQuickSystemPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paletteChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSystemPalette::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSystemPalette::paletteChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSystemPalette *_t = static_cast<QQuickSystemPalette *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickSystemPalette::ColorGroup*>(_v) = _t->colorGroup(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->window(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->windowText(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->base(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->text(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->alternateBase(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->button(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->buttonText(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->light(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->midlight(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->dark(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->mid(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->shadow(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->highlight(); break;
        case 14: *reinterpret_cast< QColor*>(_v) = _t->highlightedText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSystemPalette *_t = static_cast<QQuickSystemPalette *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorGroup(*reinterpret_cast< QQuickSystemPalette::ColorGroup*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickSystemPalette::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickSystemPalette.data,
      qt_meta_data_QQuickSystemPalette,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSystemPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSystemPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSystemPalette.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickSystemPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickSystemPalette::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
