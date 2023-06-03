/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginenewviewrequest_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginenewviewrequest_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginenewviewrequest_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineNewViewRequest_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineNewViewRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineNewViewRequest_t qt_meta_stringdata_QQuickWebEngineNewViewRequest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QQuickWebEngineNewViewRequest"
QT_MOC_LITERAL(1, 30, 6), // "openIn"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "QQuickWebEngineView*"
QT_MOC_LITERAL(4, 59, 4), // "view"
QT_MOC_LITERAL(5, 64, 11), // "destination"
QT_MOC_LITERAL(6, 76, 39), // "QQuickWebEngineView::NewViewD..."
QT_MOC_LITERAL(7, 116, 12), // "requestedUrl"
QT_MOC_LITERAL(8, 129, 13) // "userInitiated"

    },
    "QQuickWebEngineNewViewRequest\0openIn\0"
    "\0QQuickWebEngineView*\0view\0destination\0"
    "QQuickWebEngineView::NewViewDestination\0"
    "requestedUrl\0userInitiated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineNewViewRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095c09,
       7, QMetaType::QUrl, 0x00895c01,
       8, QMetaType::Bool, 0x00095c01,

 // properties: revision
       0,
       1,
       0,

       0        // eod
};

void QQuickWebEngineNewViewRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineNewViewRequest *_t = static_cast<QQuickWebEngineNewViewRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openIn((*reinterpret_cast< QQuickWebEngineView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWebEngineView* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineNewViewRequest *_t = static_cast<QQuickWebEngineNewViewRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickWebEngineView::NewViewDestination*>(_v) = _t->destination(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->requestedUrl(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isUserInitiated(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickWebEngineNewViewRequest[] = {
        &QQuickWebEngineView::staticMetaObject,
    nullptr
};

const QMetaObject QQuickWebEngineNewViewRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineNewViewRequest.data,
      qt_meta_data_QQuickWebEngineNewViewRequest,  qt_static_metacall, qt_meta_extradata_QQuickWebEngineNewViewRequest, nullptr}
};


const QMetaObject *QQuickWebEngineNewViewRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineNewViewRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineNewViewRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineNewViewRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
