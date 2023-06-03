/****************************************************************************
** Meta object code from reading C++ file 'qquickapplicationwindow_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickapplicationwindow_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickapplicationwindow_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickApplicationWindow_t {
    QByteArrayData data[23];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickApplicationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickApplicationWindow_t qt_meta_stringdata_QQuickApplicationWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickApplicationWindow"
QT_MOC_LITERAL(1, 24, 21), // "DeferredPropertyNames"
QT_MOC_LITERAL(2, 46, 10), // "background"
QT_MOC_LITERAL(3, 57, 15), // "DefaultProperty"
QT_MOC_LITERAL(4, 73, 11), // "contentData"
QT_MOC_LITERAL(5, 85, 17), // "backgroundChanged"
QT_MOC_LITERAL(6, 103, 0), // ""
QT_MOC_LITERAL(7, 104, 25), // "activeFocusControlChanged"
QT_MOC_LITERAL(8, 130, 13), // "headerChanged"
QT_MOC_LITERAL(9, 144, 13), // "footerChanged"
QT_MOC_LITERAL(10, 158, 11), // "fontChanged"
QT_MOC_LITERAL(11, 170, 13), // "localeChanged"
QT_MOC_LITERAL(12, 184, 20), // "_q_updateActiveFocus"
QT_MOC_LITERAL(13, 205, 11), // "QQuickItem*"
QT_MOC_LITERAL(14, 217, 11), // "contentItem"
QT_MOC_LITERAL(15, 229, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(16, 255, 18), // "activeFocusControl"
QT_MOC_LITERAL(17, 274, 6), // "header"
QT_MOC_LITERAL(18, 281, 6), // "footer"
QT_MOC_LITERAL(19, 288, 7), // "overlay"
QT_MOC_LITERAL(20, 296, 14), // "QQuickOverlay*"
QT_MOC_LITERAL(21, 311, 4), // "font"
QT_MOC_LITERAL(22, 316, 6) // "locale"

    },
    "QQuickApplicationWindow\0DeferredPropertyNames\0"
    "background\0DefaultProperty\0contentData\0"
    "backgroundChanged\0\0activeFocusControlChanged\0"
    "headerChanged\0footerChanged\0fontChanged\0"
    "localeChanged\0_q_updateActiveFocus\0"
    "QQuickItem*\0contentItem\0"
    "QQmlListProperty<QObject>\0activeFocusControl\0"
    "header\0footer\0overlay\0QQuickOverlay*\0"
    "font\0locale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickApplicationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       9,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    0,   53,    6, 0x06 /* Public */,
       7,    0,   54,    6, 0x06 /* Public */,
       8,    0,   55,    6, 0x06 /* Public */,
       9,    0,   56,    6, 0x06 /* Public */,
      10,    0,   57,    6, 0x06 /* Public */,
      11,    0,   58,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   59,    6, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 13, 0x0049590b,
      14, 0x80000000 | 13, 0x00095c09,
       4, 0x80000000 | 15, 0x00095809,
      16, 0x80000000 | 13, 0x00495809,
      17, 0x80000000 | 13, 0x0049590b,
      18, 0x80000000 | 13, 0x0049590b,
      19, 0x80000000 | 20, 0x00095c09,
      21, QMetaType::QFont, 0x00495907,
      22, QMetaType::QLocale, 0x00495907,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       0,
       4,
       5,

       0        // eod
};

void QQuickApplicationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickApplicationWindow *_t = static_cast<QQuickApplicationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundChanged(); break;
        case 1: _t->activeFocusControlChanged(); break;
        case 2: _t->headerChanged(); break;
        case 3: _t->footerChanged(); break;
        case 4: _t->fontChanged(); break;
        case 5: _t->localeChanged(); break;
        case 6: _t->d_func()->_q_updateActiveFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::backgroundChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::activeFocusControlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::headerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::footerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::fontChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindow::localeChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 5:
        case 4:
        case 3:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickApplicationWindow *_t = static_cast<QQuickApplicationWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->background(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->activeFocusControl(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->header(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->footer(); break;
        case 6: *reinterpret_cast< QQuickOverlay**>(_v) = _t->overlay(); break;
        case 7: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 8: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickApplicationWindow *_t = static_cast<QQuickApplicationWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: _t->setHeader(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 5: _t->setFooter(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 7: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 8: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickApplicationWindow *_t = static_cast<QQuickApplicationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 7: _t->resetFont(); break;
        case 8: _t->resetLocale(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickApplicationWindow::staticMetaObject = {
    { &QQuickWindowQmlImpl::staticMetaObject, qt_meta_stringdata_QQuickApplicationWindow.data,
      qt_meta_data_QQuickApplicationWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickApplicationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickApplicationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickApplicationWindow.stringdata0))
        return static_cast<void*>(this);
    return QQuickWindowQmlImpl::qt_metacast(_clname);
}

int QQuickApplicationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickWindowQmlImpl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickApplicationWindow::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickApplicationWindow::activeFocusControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickApplicationWindow::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickApplicationWindow::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickApplicationWindow::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickApplicationWindow::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_QQuickApplicationWindowAttached_t {
    QByteArrayData data[17];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickApplicationWindowAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickApplicationWindowAttached_t qt_meta_stringdata_QQuickApplicationWindowAttached = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QQuickApplicationWindowAttached"
QT_MOC_LITERAL(1, 32, 13), // "windowChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "contentItemChanged"
QT_MOC_LITERAL(4, 66, 25), // "activeFocusControlChanged"
QT_MOC_LITERAL(5, 92, 13), // "headerChanged"
QT_MOC_LITERAL(6, 106, 13), // "footerChanged"
QT_MOC_LITERAL(7, 120, 14), // "overlayChanged"
QT_MOC_LITERAL(8, 135, 6), // "window"
QT_MOC_LITERAL(9, 142, 24), // "QQuickApplicationWindow*"
QT_MOC_LITERAL(10, 167, 11), // "contentItem"
QT_MOC_LITERAL(11, 179, 11), // "QQuickItem*"
QT_MOC_LITERAL(12, 191, 18), // "activeFocusControl"
QT_MOC_LITERAL(13, 210, 6), // "header"
QT_MOC_LITERAL(14, 217, 6), // "footer"
QT_MOC_LITERAL(15, 224, 7), // "overlay"
QT_MOC_LITERAL(16, 232, 14) // "QQuickOverlay*"

    },
    "QQuickApplicationWindowAttached\0"
    "windowChanged\0\0contentItemChanged\0"
    "activeFocusControlChanged\0headerChanged\0"
    "footerChanged\0overlayChanged\0window\0"
    "QQuickApplicationWindow*\0contentItem\0"
    "QQuickItem*\0activeFocusControl\0header\0"
    "footer\0overlay\0QQuickOverlay*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickApplicationWindowAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495809,
      10, 0x80000000 | 11, 0x00495809,
      12, 0x80000000 | 11, 0x00495809,
      13, 0x80000000 | 11, 0x00495809,
      14, 0x80000000 | 11, 0x00495809,
      15, 0x80000000 | 16, 0x00495809,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QQuickApplicationWindowAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickApplicationWindowAttached *_t = static_cast<QQuickApplicationWindowAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowChanged(); break;
        case 1: _t->contentItemChanged(); break;
        case 2: _t->activeFocusControlChanged(); break;
        case 3: _t->headerChanged(); break;
        case 4: _t->footerChanged(); break;
        case 5: _t->overlayChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::windowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::contentItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::activeFocusControlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::headerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::footerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickApplicationWindowAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplicationWindowAttached::overlayChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickApplicationWindow* >(); break;
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickApplicationWindowAttached *_t = static_cast<QQuickApplicationWindowAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickApplicationWindow**>(_v) = _t->window(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->activeFocusControl(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->header(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->footer(); break;
        case 5: *reinterpret_cast< QQuickOverlay**>(_v) = _t->overlay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickApplicationWindowAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickApplicationWindowAttached.data,
      qt_meta_data_QQuickApplicationWindowAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickApplicationWindowAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickApplicationWindowAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickApplicationWindowAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickApplicationWindowAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickApplicationWindowAttached::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickApplicationWindowAttached::contentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickApplicationWindowAttached::activeFocusControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickApplicationWindowAttached::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickApplicationWindowAttached::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickApplicationWindowAttached::overlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
