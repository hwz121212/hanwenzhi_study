/****************************************************************************
** Meta object code from reading C++ file 'qquickplatformfontdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickplatformfontdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickplatformfontdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPlatformFontDialog_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPlatformFontDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPlatformFontDialog_t qt_meta_stringdata_QQuickPlatformFontDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickPlatformFontDialog"
QT_MOC_LITERAL(1, 25, 11), // "fontChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "currentFontChanged"
QT_MOC_LITERAL(4, 57, 14), // "optionsChanged"
QT_MOC_LITERAL(5, 72, 4), // "font"
QT_MOC_LITERAL(6, 77, 11), // "currentFont"
QT_MOC_LITERAL(7, 89, 7), // "options"
QT_MOC_LITERAL(8, 97, 37) // "QFontDialogOptions::FontDialo..."

    },
    "QQuickPlatformFontDialog\0fontChanged\0"
    "\0currentFontChanged\0optionsChanged\0"
    "font\0currentFont\0options\0"
    "QFontDialogOptions::FontDialogOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPlatformFontDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QFont, 0x00495903,
       6, QMetaType::QFont, 0x00495903,
       7, 0x80000000 | 8, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QQuickPlatformFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPlatformFontDialog *_t = static_cast<QQuickPlatformFontDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontChanged(); break;
        case 1: _t->currentFontChanged(); break;
        case 2: _t->optionsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPlatformFontDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformFontDialog::fontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPlatformFontDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformFontDialog::currentFontChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPlatformFontDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformFontDialog::optionsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPlatformFontDialog *_t = static_cast<QQuickPlatformFontDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPlatformFontDialog *_t = static_cast<QQuickPlatformFontDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QQuickPlatformFontDialog[] = {
        &QFontDialogOptions::staticMetaObject,
    nullptr
};

const QMetaObject QQuickPlatformFontDialog::staticMetaObject = {
    { &QQuickPlatformDialog::staticMetaObject, qt_meta_stringdata_QQuickPlatformFontDialog.data,
      qt_meta_data_QQuickPlatformFontDialog,  qt_static_metacall, qt_meta_extradata_QQuickPlatformFontDialog, nullptr}
};


const QMetaObject *QQuickPlatformFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPlatformFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPlatformFontDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickPlatformDialog::qt_metacast(_clname);
}

int QQuickPlatformFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPlatformDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPlatformFontDialog::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPlatformFontDialog::currentFontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPlatformFontDialog::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
