/****************************************************************************
** Meta object code from reading C++ file 'qquicklabel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquicklabel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicklabel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickLabel_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickLabel_t qt_meta_stringdata_QQuickLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QQuickLabel"
QT_MOC_LITERAL(1, 12, 21), // "DeferredPropertyNames"
QT_MOC_LITERAL(2, 34, 10), // "background"
QT_MOC_LITERAL(3, 45, 11), // "fontChanged"
QT_MOC_LITERAL(4, 57, 0), // ""
QT_MOC_LITERAL(5, 58, 17), // "backgroundChanged"
QT_MOC_LITERAL(6, 76, 4), // "font"
QT_MOC_LITERAL(7, 81, 11) // "QQuickItem*"

    },
    "QQuickLabel\0DeferredPropertyNames\0"
    "background\0fontChanged\0\0backgroundChanged\0"
    "font\0QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   26,    4, 0x06 /* Public */,
       5,    0,   27,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QFont, 0x00495103,
       2, 0x80000000 | 7, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickLabel *_t = static_cast<QQuickLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontChanged(); break;
        case 1: _t->backgroundChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickLabel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLabel::fontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickLabel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLabel::backgroundChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickLabel *_t = static_cast<QQuickLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->background(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickLabel *_t = static_cast<QQuickLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setBackground(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickLabel::staticMetaObject = {
    { &QQuickText::staticMetaObject, qt_meta_stringdata_QQuickLabel.data,
      qt_meta_data_QQuickLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickLabel.stringdata0))
        return static_cast<void*>(this);
    return QQuickText::qt_metacast(_clname);
}

int QQuickLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickLabel::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickLabel::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
