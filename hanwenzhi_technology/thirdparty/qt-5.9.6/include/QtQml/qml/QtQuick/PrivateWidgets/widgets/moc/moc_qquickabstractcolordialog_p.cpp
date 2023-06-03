/****************************************************************************
** Meta object code from reading C++ file 'qquickabstractcolordialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Dialogs/dialogs/qquickabstractcolordialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickabstractcolordialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAbstractColorDialog_t {
    QByteArrayData data[25];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAbstractColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAbstractColorDialog_t qt_meta_stringdata_QQuickAbstractColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickAbstractColorDialog"
QT_MOC_LITERAL(1, 26, 23), // "showAlphaChannelChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "colorChanged"
QT_MOC_LITERAL(4, 64, 19), // "currentColorChanged"
QT_MOC_LITERAL(5, 84, 17), // "selectionAccepted"
QT_MOC_LITERAL(6, 102, 10), // "setVisible"
QT_MOC_LITERAL(7, 113, 1), // "v"
QT_MOC_LITERAL(8, 115, 11), // "setModality"
QT_MOC_LITERAL(9, 127, 18), // "Qt::WindowModality"
QT_MOC_LITERAL(10, 146, 1), // "m"
QT_MOC_LITERAL(11, 148, 8), // "setTitle"
QT_MOC_LITERAL(12, 157, 1), // "t"
QT_MOC_LITERAL(13, 159, 8), // "setColor"
QT_MOC_LITERAL(14, 168, 3), // "arg"
QT_MOC_LITERAL(15, 172, 15), // "setCurrentColor"
QT_MOC_LITERAL(16, 188, 12), // "currentColor"
QT_MOC_LITERAL(17, 201, 19), // "setShowAlphaChannel"
QT_MOC_LITERAL(18, 221, 6), // "accept"
QT_MOC_LITERAL(19, 228, 16), // "showAlphaChannel"
QT_MOC_LITERAL(20, 245, 5), // "color"
QT_MOC_LITERAL(21, 251, 10), // "currentHue"
QT_MOC_LITERAL(22, 262, 17), // "currentSaturation"
QT_MOC_LITERAL(23, 280, 16), // "currentLightness"
QT_MOC_LITERAL(24, 297, 12) // "currentAlpha"

    },
    "QQuickAbstractColorDialog\0"
    "showAlphaChannelChanged\0\0colorChanged\0"
    "currentColorChanged\0selectionAccepted\0"
    "setVisible\0v\0setModality\0Qt::WindowModality\0"
    "m\0setTitle\0t\0setColor\0arg\0setCurrentColor\0"
    "currentColor\0setShowAlphaChannel\0"
    "accept\0showAlphaChannel\0color\0currentHue\0"
    "currentSaturation\0currentLightness\0"
    "currentAlpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAbstractColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      18,    0,   91,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::QColor, 0x00495103,
      16, QMetaType::QColor, 0x00495103,
      21, QMetaType::QReal, 0x00495001,
      22, QMetaType::QReal, 0x00495001,
      23, QMetaType::QReal, 0x00495001,
      24, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       2,
       2,
       2,

       0        // eod
};

void QQuickAbstractColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAbstractColorDialog *_t = static_cast<QQuickAbstractColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAlphaChannelChanged(); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->currentColorChanged(); break;
        case 3: _t->selectionAccepted(); break;
        case 4: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setModality((*reinterpret_cast< Qt::WindowModality(*)>(_a[1]))); break;
        case 6: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->setCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->setShowAlphaChannel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAbstractColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractColorDialog::showAlphaChannelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAbstractColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractColorDialog::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickAbstractColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractColorDialog::currentColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickAbstractColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractColorDialog::selectionAccepted)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAbstractColorDialog *_t = static_cast<QQuickAbstractColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showAlphaChannel(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->currentColor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->currentHue(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->currentSaturation(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->currentLightness(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->currentAlpha(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAbstractColorDialog *_t = static_cast<QQuickAbstractColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowAlphaChannel(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAbstractColorDialog::staticMetaObject = {
    { &QQuickAbstractDialog::staticMetaObject, qt_meta_stringdata_QQuickAbstractColorDialog.data,
      qt_meta_data_QQuickAbstractColorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAbstractColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAbstractColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAbstractColorDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractDialog::qt_metacast(_clname);
}

int QQuickAbstractColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickAbstractColorDialog::showAlphaChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickAbstractColorDialog::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickAbstractColorDialog::currentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickAbstractColorDialog::selectionAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
