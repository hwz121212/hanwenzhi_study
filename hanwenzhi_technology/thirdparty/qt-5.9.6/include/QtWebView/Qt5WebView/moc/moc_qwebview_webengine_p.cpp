/****************************************************************************
** Meta object code from reading C++ file 'qwebview_webengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebView/private/qwebview_webengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebview_webengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineWebViewPrivate_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineWebViewPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineWebViewPrivate_t qt_meta_stringdata_QWebEngineWebViewPrivate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QWebEngineWebViewPrivate"
QT_MOC_LITERAL(1, 25, 6), // "goBack"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "goForward"
QT_MOC_LITERAL(4, 43, 6), // "reload"
QT_MOC_LITERAL(5, 50, 4), // "stop"
QT_MOC_LITERAL(6, 55, 8), // "loadHtml"
QT_MOC_LITERAL(7, 64, 4), // "html"
QT_MOC_LITERAL(8, 69, 7), // "baseUrl"
QT_MOC_LITERAL(9, 77, 12), // "q_urlChanged"
QT_MOC_LITERAL(10, 90, 21), // "q_loadProgressChanged"
QT_MOC_LITERAL(11, 112, 14), // "q_titleChanged"
QT_MOC_LITERAL(12, 127, 16), // "q_loadingChanged"
QT_MOC_LITERAL(13, 144, 27), // "QQuickWebEngineLoadRequest*"
QT_MOC_LITERAL(14, 172, 11) // "loadRequest"

    },
    "QWebEngineWebViewPrivate\0goBack\0\0"
    "goForward\0reload\0stop\0loadHtml\0html\0"
    "baseUrl\0q_urlChanged\0q_loadProgressChanged\0"
    "q_titleChanged\0q_loadingChanged\0"
    "QQuickWebEngineLoadRequest*\0loadRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineWebViewPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    2,   68,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QWebEngineWebViewPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebEngineWebViewPrivate *_t = static_cast<QWebEngineWebViewPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goBack(); break;
        case 1: _t->goForward(); break;
        case 2: _t->reload(); break;
        case 3: _t->stop(); break;
        case 4: _t->loadHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: _t->loadHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->q_urlChanged(); break;
        case 7: _t->q_loadProgressChanged(); break;
        case 8: _t->q_titleChanged(); break;
        case 9: _t->q_loadingChanged((*reinterpret_cast< QQuickWebEngineLoadRequest*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QWebEngineWebViewPrivate::staticMetaObject = {
    { &QWebViewPrivate::staticMetaObject, qt_meta_stringdata_QWebEngineWebViewPrivate.data,
      qt_meta_data_QWebEngineWebViewPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebEngineWebViewPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebEngineWebViewPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebEngineWebViewPrivate.stringdata0))
        return static_cast<void*>(this);
    return QWebViewPrivate::qt_metacast(_clname);
}

int QWebEngineWebViewPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebViewPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
