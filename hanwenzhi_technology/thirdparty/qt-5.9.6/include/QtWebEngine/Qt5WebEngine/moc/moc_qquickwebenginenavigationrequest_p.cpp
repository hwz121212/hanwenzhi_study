/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginenavigationrequest_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginenavigationrequest_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginenavigationrequest_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineNavigationRequest_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineNavigationRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineNavigationRequest_t qt_meta_stringdata_QQuickWebEngineNavigationRequest = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QQuickWebEngineNavigationRequest"
QT_MOC_LITERAL(1, 33, 13), // "actionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 3), // "url"
QT_MOC_LITERAL(4, 52, 11), // "isMainFrame"
QT_MOC_LITERAL(5, 64, 6), // "action"
QT_MOC_LITERAL(6, 71, 44), // "QQuickWebEngineView::Navigati..."
QT_MOC_LITERAL(7, 116, 14), // "navigationType"
QT_MOC_LITERAL(8, 131, 35) // "QQuickWebEngineView::Navigati..."

    },
    "QQuickWebEngineNavigationRequest\0"
    "actionChanged\0\0url\0isMainFrame\0action\0"
    "QQuickWebEngineView::NavigationRequestAction\0"
    "navigationType\0QQuickWebEngineView::NavigationType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineNavigationRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QUrl, 0x00095c01,
       4, QMetaType::Bool, 0x00095c01,
       5, 0x80000000 | 6, 0x0049590b,
       7, 0x80000000 | 8, 0x00095c09,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void QQuickWebEngineNavigationRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineNavigationRequest *_t = static_cast<QQuickWebEngineNavigationRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWebEngineNavigationRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineNavigationRequest::actionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineNavigationRequest *_t = static_cast<QQuickWebEngineNavigationRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMainFrame(); break;
        case 2: *reinterpret_cast< QQuickWebEngineView::NavigationRequestAction*>(_v) = _t->action(); break;
        case 3: *reinterpret_cast< QQuickWebEngineView::NavigationType*>(_v) = _t->navigationType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineNavigationRequest *_t = static_cast<QQuickWebEngineNavigationRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setAction(*reinterpret_cast< QQuickWebEngineView::NavigationRequestAction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QQuickWebEngineNavigationRequest[] = {
        &QQuickWebEngineView::staticMetaObject,
    nullptr
};

const QMetaObject QQuickWebEngineNavigationRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineNavigationRequest.data,
      qt_meta_data_QQuickWebEngineNavigationRequest,  qt_static_metacall, qt_meta_extradata_QQuickWebEngineNavigationRequest, nullptr}
};


const QMetaObject *QQuickWebEngineNavigationRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineNavigationRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineNavigationRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineNavigationRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickWebEngineNavigationRequest::actionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
