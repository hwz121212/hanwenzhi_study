/****************************************************************************
** Meta object code from reading C++ file 'qwebview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebView/private/qwebview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebView_t {
    QByteArrayData data[27];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebView_t qt_meta_stringdata_QWebView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QWebView"
QT_MOC_LITERAL(1, 9, 12), // "titleChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "urlChanged"
QT_MOC_LITERAL(4, 34, 14), // "loadingChanged"
QT_MOC_LITERAL(5, 49, 26), // "QWebViewLoadRequestPrivate"
QT_MOC_LITERAL(6, 76, 11), // "loadRequest"
QT_MOC_LITERAL(7, 88, 19), // "loadProgressChanged"
QT_MOC_LITERAL(8, 108, 16), // "javaScriptResult"
QT_MOC_LITERAL(9, 125, 2), // "id"
QT_MOC_LITERAL(10, 128, 6), // "result"
QT_MOC_LITERAL(11, 135, 12), // "requestFocus"
QT_MOC_LITERAL(12, 148, 5), // "focus"
QT_MOC_LITERAL(13, 154, 6), // "goBack"
QT_MOC_LITERAL(14, 161, 9), // "goForward"
QT_MOC_LITERAL(15, 171, 6), // "reload"
QT_MOC_LITERAL(16, 178, 4), // "stop"
QT_MOC_LITERAL(17, 183, 8), // "loadHtml"
QT_MOC_LITERAL(18, 192, 4), // "html"
QT_MOC_LITERAL(19, 197, 7), // "baseUrl"
QT_MOC_LITERAL(20, 205, 14), // "onTitleChanged"
QT_MOC_LITERAL(21, 220, 5), // "title"
QT_MOC_LITERAL(22, 226, 12), // "onUrlChanged"
QT_MOC_LITERAL(23, 239, 3), // "url"
QT_MOC_LITERAL(24, 243, 21), // "onLoadProgressChanged"
QT_MOC_LITERAL(25, 265, 8), // "progress"
QT_MOC_LITERAL(26, 274, 16) // "onLoadingChanged"

    },
    "QWebView\0titleChanged\0\0urlChanged\0"
    "loadingChanged\0QWebViewLoadRequestPrivate\0"
    "loadRequest\0loadProgressChanged\0"
    "javaScriptResult\0id\0result\0requestFocus\0"
    "focus\0goBack\0goForward\0reload\0stop\0"
    "loadHtml\0html\0baseUrl\0onTitleChanged\0"
    "title\0onUrlChanged\0url\0onLoadProgressChanged\0"
    "progress\0onLoadingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    1,   96,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    2,  100,    2, 0x06 /* Public */,
      11,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  108,    2, 0x0a /* Public */,
      14,    0,  109,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,
      17,    2,  112,    2, 0x0a /* Public */,
      17,    1,  117,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  120,    2, 0x08 /* Private */,
      22,    1,  123,    2, 0x08 /* Private */,
      24,    1,  126,    2, 0x08 /* Private */,
      26,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   18,   19,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QUrl,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebView *_t = static_cast<QWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->urlChanged(); break;
        case 2: _t->loadingChanged((*reinterpret_cast< const QWebViewLoadRequestPrivate(*)>(_a[1]))); break;
        case 3: _t->loadProgressChanged(); break;
        case 4: _t->javaScriptResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->requestFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->goBack(); break;
        case 7: _t->goForward(); break;
        case 8: _t->reload(); break;
        case 9: _t->stop(); break;
        case 10: _t->loadHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 11: _t->loadHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 14: _t->onLoadProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onLoadingChanged((*reinterpret_cast< const QWebViewLoadRequestPrivate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::urlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebView::*_t)(const QWebViewLoadRequestPrivate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::loadingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::loadProgressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWebView::*_t)(int , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::javaScriptResult)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWebView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebView::requestFocus)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QWebView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebView.data,
      qt_meta_data_QWebView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QWebViewInterface"))
        return static_cast< QWebViewInterface*>(this);
    if (!strcmp(_clname, "QNativeViewController"))
        return static_cast< QNativeViewController*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QWebView::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWebView::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QWebView::loadingChanged(const QWebViewLoadRequestPrivate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebView::loadProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QWebView::javaScriptResult(int _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWebView::requestFocus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
