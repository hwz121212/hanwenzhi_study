/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginetestsupport_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginetestsupport_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginetestsupport_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineErrorPage_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineErrorPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineErrorPage_t qt_meta_stringdata_QQuickWebEngineErrorPage = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickWebEngineErrorPage"
QT_MOC_LITERAL(1, 25, 14), // "loadingChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "QQuickWebEngineLoadRequest*"
QT_MOC_LITERAL(4, 69, 11) // "loadRequest"

    },
    "QQuickWebEngineErrorPage\0loadingChanged\0"
    "\0QQuickWebEngineLoadRequest*\0loadRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineErrorPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QQuickWebEngineErrorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineErrorPage *_t = static_cast<QQuickWebEngineErrorPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadingChanged((*reinterpret_cast< QQuickWebEngineLoadRequest*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWebEngineErrorPage::*_t)(QQuickWebEngineLoadRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineErrorPage::loadingChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QQuickWebEngineErrorPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineErrorPage.data,
      qt_meta_data_QQuickWebEngineErrorPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineErrorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineErrorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineErrorPage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineErrorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QQuickWebEngineErrorPage::loadingChanged(QQuickWebEngineLoadRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QQuickWebEngineTestSupport_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineTestSupport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineTestSupport_t qt_meta_stringdata_QQuickWebEngineTestSupport = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QQuickWebEngineTestSupport"
QT_MOC_LITERAL(1, 27, 19), // "windowCloseRejected"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "loadVisuallyCommitted"
QT_MOC_LITERAL(4, 70, 9), // "errorPage"
QT_MOC_LITERAL(5, 80, 25) // "QQuickWebEngineErrorPage*"

    },
    "QQuickWebEngineTestSupport\0"
    "windowCloseRejected\0\0loadVisuallyCommitted\0"
    "errorPage\0QQuickWebEngineErrorPage*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineTestSupport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095c09,

       0        // eod
};

void QQuickWebEngineTestSupport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineTestSupport *_t = static_cast<QQuickWebEngineTestSupport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowCloseRejected(); break;
        case 1: _t->loadVisuallyCommitted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWebEngineTestSupport::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineTestSupport::windowCloseRejected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineTestSupport::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineTestSupport::loadVisuallyCommitted)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWebEngineErrorPage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineTestSupport *_t = static_cast<QQuickWebEngineTestSupport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickWebEngineErrorPage**>(_v) = _t->errorPage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWebEngineTestSupport::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineTestSupport.data,
      qt_meta_data_QQuickWebEngineTestSupport,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineTestSupport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineTestSupport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineTestSupport.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineTestSupport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickWebEngineTestSupport::windowCloseRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickWebEngineTestSupport::loadVisuallyCommitted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
