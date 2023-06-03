/****************************************************************************
** Meta object code from reading C++ file 'qquickdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDialog_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDialog_t qt_meta_stringdata_QQuickDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickDialog"
QT_MOC_LITERAL(1, 13, 8), // "accepted"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "rejected"
QT_MOC_LITERAL(4, 32, 12), // "titleChanged"
QT_MOC_LITERAL(5, 45, 13), // "headerChanged"
QT_MOC_LITERAL(6, 59, 13), // "footerChanged"
QT_MOC_LITERAL(7, 73, 22), // "standardButtonsChanged"
QT_MOC_LITERAL(8, 96, 6), // "accept"
QT_MOC_LITERAL(9, 103, 6), // "reject"
QT_MOC_LITERAL(10, 110, 5), // "title"
QT_MOC_LITERAL(11, 116, 6), // "header"
QT_MOC_LITERAL(12, 123, 11), // "QQuickItem*"
QT_MOC_LITERAL(13, 135, 6), // "footer"
QT_MOC_LITERAL(14, 142, 15), // "standardButtons"
QT_MOC_LITERAL(15, 158, 38) // "QPlatformDialogHelper::Standa..."

    },
    "QQuickDialog\0accepted\0\0rejected\0"
    "titleChanged\0headerChanged\0footerChanged\0"
    "standardButtonsChanged\0accept\0reject\0"
    "title\0header\0QQuickItem*\0footer\0"
    "standardButtons\0QPlatformDialogHelper::StandardButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495903,
      11, 0x80000000 | 12, 0x0049590b,
      13, 0x80000000 | 12, 0x0049590b,
      14, 0x80000000 | 15, 0x0049590b,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QQuickDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDialog *_t = static_cast<QQuickDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->headerChanged(); break;
        case 4: _t->footerChanged(); break;
        case 5: _t->standardButtonsChanged(); break;
        case 6: _t->accept(); break;
        case 7: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::rejected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::titleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::headerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::footerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialog::standardButtonsChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDialog *_t = static_cast<QQuickDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->header(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->footer(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDialog *_t = static_cast<QQuickDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setFooter(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 3: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickDialog[] = {
        &QPlatformDialogHelper::staticMetaObject,
    nullptr
};

const QMetaObject QQuickDialog::staticMetaObject = {
    { &QQuickPopup::staticMetaObject, qt_meta_stringdata_QQuickDialog.data,
      qt_meta_data_QQuickDialog,  qt_static_metacall, qt_meta_extradata_QQuickDialog, nullptr}
};


const QMetaObject *QQuickDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickPopup::qt_metacast(_clname);
}

int QQuickDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPopup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickDialog::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDialog::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDialog::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickDialog::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickDialog::standardButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
