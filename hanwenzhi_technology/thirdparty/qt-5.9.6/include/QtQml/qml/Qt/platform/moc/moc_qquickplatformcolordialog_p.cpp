/****************************************************************************
** Meta object code from reading C++ file 'qquickplatformcolordialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickplatformcolordialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickplatformcolordialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPlatformColorDialog_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPlatformColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPlatformColorDialog_t qt_meta_stringdata_QQuickPlatformColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickPlatformColorDialog"
QT_MOC_LITERAL(1, 26, 12), // "colorChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "currentColorChanged"
QT_MOC_LITERAL(4, 60, 14), // "optionsChanged"
QT_MOC_LITERAL(5, 75, 5), // "color"
QT_MOC_LITERAL(6, 81, 12), // "currentColor"
QT_MOC_LITERAL(7, 94, 7), // "options"
QT_MOC_LITERAL(8, 102, 39) // "QColorDialogOptions::ColorDia..."

    },
    "QQuickPlatformColorDialog\0colorChanged\0"
    "\0currentColorChanged\0optionsChanged\0"
    "color\0currentColor\0options\0"
    "QColorDialogOptions::ColorDialogOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPlatformColorDialog[] = {

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
       5, QMetaType::QColor, 0x00495903,
       6, QMetaType::QColor, 0x00495903,
       7, 0x80000000 | 8, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QQuickPlatformColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPlatformColorDialog *_t = static_cast<QQuickPlatformColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->currentColorChanged(); break;
        case 2: _t->optionsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPlatformColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformColorDialog::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPlatformColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformColorDialog::currentColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPlatformColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformColorDialog::optionsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPlatformColorDialog *_t = static_cast<QQuickPlatformColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->currentColor(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPlatformColorDialog *_t = static_cast<QQuickPlatformColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QQuickPlatformColorDialog[] = {
        &QColorDialogOptions::staticMetaObject,
    nullptr
};

const QMetaObject QQuickPlatformColorDialog::staticMetaObject = {
    { &QQuickPlatformDialog::staticMetaObject, qt_meta_stringdata_QQuickPlatformColorDialog.data,
      qt_meta_data_QQuickPlatformColorDialog,  qt_static_metacall, qt_meta_extradata_QQuickPlatformColorDialog, nullptr}
};


const QMetaObject *QQuickPlatformColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPlatformColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPlatformColorDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickPlatformDialog::qt_metacast(_clname);
}

int QQuickPlatformColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickPlatformColorDialog::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPlatformColorDialog::currentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPlatformColorDialog::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
