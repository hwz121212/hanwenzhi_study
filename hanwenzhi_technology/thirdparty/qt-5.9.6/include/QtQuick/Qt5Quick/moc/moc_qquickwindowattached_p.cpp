/****************************************************************************
** Meta object code from reading C++ file 'qquickwindowattached_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickwindowattached_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwindowattached_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWindowAttached_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWindowAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWindowAttached_t qt_meta_stringdata_QQuickWindowAttached = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickWindowAttached"
QT_MOC_LITERAL(1, 21, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "activeChanged"
QT_MOC_LITERAL(4, 54, 22), // "activeFocusItemChanged"
QT_MOC_LITERAL(5, 77, 18), // "contentItemChanged"
QT_MOC_LITERAL(6, 96, 12), // "widthChanged"
QT_MOC_LITERAL(7, 109, 13), // "heightChanged"
QT_MOC_LITERAL(8, 123, 13), // "windowChanged"
QT_MOC_LITERAL(9, 137, 12), // "windowChange"
QT_MOC_LITERAL(10, 150, 13), // "QQuickWindow*"
QT_MOC_LITERAL(11, 164, 10), // "visibility"
QT_MOC_LITERAL(12, 175, 19), // "QWindow::Visibility"
QT_MOC_LITERAL(13, 195, 6), // "active"
QT_MOC_LITERAL(14, 202, 15), // "activeFocusItem"
QT_MOC_LITERAL(15, 218, 11), // "QQuickItem*"
QT_MOC_LITERAL(16, 230, 11), // "contentItem"
QT_MOC_LITERAL(17, 242, 5), // "width"
QT_MOC_LITERAL(18, 248, 6), // "height"
QT_MOC_LITERAL(19, 255, 6) // "window"

    },
    "QQuickWindowAttached\0visibilityChanged\0"
    "\0activeChanged\0activeFocusItemChanged\0"
    "contentItemChanged\0widthChanged\0"
    "heightChanged\0windowChanged\0windowChange\0"
    "QQuickWindow*\0visibility\0QWindow::Visibility\0"
    "active\0activeFocusItem\0QQuickItem*\0"
    "contentItem\0width\0height\0window"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWindowAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    2,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00495009,
      13, QMetaType::Bool, 0x00495001,
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 15, 0x00495009,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495001,
      19, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QQuickWindowAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWindowAttached *_t = static_cast<QQuickWindowAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->activeFocusItemChanged(); break;
        case 3: _t->contentItemChanged(); break;
        case 4: _t->widthChanged(); break;
        case 5: _t->heightChanged(); break;
        case 6: _t->windowChanged(); break;
        case 7: _t->windowChange((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::activeFocusItemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::contentItemChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::widthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::heightChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowAttached::windowChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWindowAttached *_t = static_cast<QQuickWindowAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWindow::Visibility*>(_v) = _t->visibility(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->activeFocusItem(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 6: *reinterpret_cast< QQuickWindow**>(_v) = _t->window(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickWindowAttached[] = {
        &QWindow::staticMetaObject,
    nullptr
};

const QMetaObject QQuickWindowAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWindowAttached.data,
      qt_meta_data_QQuickWindowAttached,  qt_static_metacall, qt_meta_extradata_QQuickWindowAttached, nullptr}
};


const QMetaObject *QQuickWindowAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWindowAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWindowAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWindowAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickWindowAttached::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickWindowAttached::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickWindowAttached::activeFocusItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickWindowAttached::contentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickWindowAttached::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickWindowAttached::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickWindowAttached::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
