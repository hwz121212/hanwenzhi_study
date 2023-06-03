/****************************************************************************
** Meta object code from reading C++ file 'qwebview_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebView/private/qwebview_p_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebview_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebViewPrivate_t {
    QByteArrayData data[16];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebViewPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebViewPrivate_t qt_meta_stringdata_QWebViewPrivate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QWebViewPrivate"
QT_MOC_LITERAL(1, 16, 12), // "titleChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "title"
QT_MOC_LITERAL(4, 36, 10), // "urlChanged"
QT_MOC_LITERAL(5, 47, 3), // "url"
QT_MOC_LITERAL(6, 51, 14), // "loadingChanged"
QT_MOC_LITERAL(7, 66, 26), // "QWebViewLoadRequestPrivate"
QT_MOC_LITERAL(8, 93, 11), // "loadRequest"
QT_MOC_LITERAL(9, 105, 19), // "loadProgressChanged"
QT_MOC_LITERAL(10, 125, 8), // "progress"
QT_MOC_LITERAL(11, 134, 16), // "javaScriptResult"
QT_MOC_LITERAL(12, 151, 2), // "id"
QT_MOC_LITERAL(13, 154, 6), // "result"
QT_MOC_LITERAL(14, 161, 12), // "requestFocus"
QT_MOC_LITERAL(15, 174, 5) // "focus"

    },
    "QWebViewPrivate\0titleChanged\0\0title\0"
    "urlChanged\0url\0loadingChanged\0"
    "QWebViewLoadRequestPrivate\0loadRequest\0"
    "loadProgressChanged\0progress\0"
    "javaScriptResult\0id\0result\0requestFocus\0"
    "focus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebViewPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    2,   56,    2, 0x06 /* Public */,
      14,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void QWebViewPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebViewPrivate *_t = static_cast<QWebViewPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->loadingChanged((*reinterpret_cast< const QWebViewLoadRequestPrivate(*)>(_a[1]))); break;
        case 3: _t->loadProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->javaScriptResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->requestFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebViewPrivate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebViewPrivate::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::urlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebViewPrivate::*_t)(const QWebViewLoadRequestPrivate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::loadingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWebViewPrivate::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::loadProgressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWebViewPrivate::*_t)(int , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::javaScriptResult)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWebViewPrivate::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebViewPrivate::requestFocus)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QWebViewPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebViewPrivate.data,
      qt_meta_data_QWebViewPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebViewPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebViewPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebViewPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QWebViewInterface"))
        return static_cast< QWebViewInterface*>(this);
    if (!strcmp(_clname, "QNativeViewController"))
        return static_cast< QNativeViewController*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebViewPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QWebViewPrivate::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWebViewPrivate::urlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebViewPrivate::loadingChanged(const QWebViewLoadRequestPrivate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebViewPrivate::loadProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWebViewPrivate::javaScriptResult(int _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWebViewPrivate::requestFocus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
