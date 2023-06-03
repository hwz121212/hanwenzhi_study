/****************************************************************************
** Meta object code from reading C++ file 'qquickapplication_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickapplication_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickapplication_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickApplication_t {
    QByteArrayData data[18];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickApplication_t qt_meta_stringdata_QQuickApplication = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickApplication"
QT_MOC_LITERAL(1, 18, 13), // "activeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "displayNameChanged"
QT_MOC_LITERAL(4, 52, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(5, 75, 12), // "stateChanged"
QT_MOC_LITERAL(6, 88, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(7, 109, 5), // "state"
QT_MOC_LITERAL(8, 115, 14), // "screensChanged"
QT_MOC_LITERAL(9, 130, 13), // "updateScreens"
QT_MOC_LITERAL(10, 144, 6), // "active"
QT_MOC_LITERAL(11, 151, 15), // "layoutDirection"
QT_MOC_LITERAL(12, 167, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(13, 187, 23), // "supportsMultipleWindows"
QT_MOC_LITERAL(14, 211, 4), // "font"
QT_MOC_LITERAL(15, 216, 11), // "displayName"
QT_MOC_LITERAL(16, 228, 7), // "screens"
QT_MOC_LITERAL(17, 236, 34) // "QQmlListProperty<QQuickScreen..."

    },
    "QQuickApplication\0activeChanged\0\0"
    "displayNameChanged\0layoutDirectionChanged\0"
    "stateChanged\0Qt::ApplicationState\0"
    "state\0screensChanged\0updateScreens\0"
    "active\0layoutDirection\0Qt::LayoutDirection\0"
    "supportsMultipleWindows\0font\0displayName\0"
    "screens\0QQmlListProperty<QQuickScreenInfo>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495001,
      11, 0x80000000 | 12, 0x00495009,
      13, QMetaType::Bool, 0x00095401,
       7, 0x80000000 | 6, 0x00495009,
      14, QMetaType::QFont, 0x00095401,
      15, QMetaType::QString, 0x00495103,
      16, 0x80000000 | 17, 0x00495009,

 // properties: notify_signal_id
       0,
       2,
       0,
       3,
       0,
       1,
       4,

       0        // eod
};

void QQuickApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickApplication *_t = static_cast<QQuickApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged(); break;
        case 1: _t->displayNameChanged(); break;
        case 2: _t->layoutDirectionChanged(); break;
        case 3: _t->stateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 4: _t->screensChanged(); break;
        case 5: _t->updateScreens(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplication::activeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplication::displayNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplication::layoutDirectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickApplication::*_t)(Qt::ApplicationState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplication::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickApplication::screensChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickScreenInfo> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickApplication *_t = static_cast<QQuickApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->supportsMultipleWindows(); break;
        case 3: *reinterpret_cast< Qt::ApplicationState*>(_v) = _t->state(); break;
        case 4: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->displayName(); break;
        case 6: *reinterpret_cast< QQmlListProperty<QQuickScreenInfo>*>(_v) = _t->screens(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickApplication *_t = static_cast<QQuickApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setDisplayName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickApplication::staticMetaObject = {
    { &QQmlApplication::staticMetaObject, qt_meta_stringdata_QQuickApplication.data,
      qt_meta_data_QQuickApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickApplication.stringdata0))
        return static_cast<void*>(this);
    return QQmlApplication::qt_metacast(_clname);
}

int QQuickApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlApplication::qt_metacall(_c, _id, _a);
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
void QQuickApplication::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickApplication::displayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickApplication::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickApplication::stateChanged(Qt::ApplicationState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickApplication::screensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
