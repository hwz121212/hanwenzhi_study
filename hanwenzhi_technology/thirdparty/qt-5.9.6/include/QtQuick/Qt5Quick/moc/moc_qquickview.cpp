/****************************************************************************
** Meta object code from reading C++ file 'qquickview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickView_t {
    QByteArrayData data[22];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickView_t qt_meta_stringdata_QQuickView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickView"
QT_MOC_LITERAL(1, 11, 13), // "statusChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "QQuickView::Status"
QT_MOC_LITERAL(4, 45, 9), // "setSource"
QT_MOC_LITERAL(5, 55, 10), // "setContent"
QT_MOC_LITERAL(6, 66, 3), // "url"
QT_MOC_LITERAL(7, 70, 14), // "QQmlComponent*"
QT_MOC_LITERAL(8, 85, 9), // "component"
QT_MOC_LITERAL(9, 95, 4), // "item"
QT_MOC_LITERAL(10, 100, 15), // "continueExecute"
QT_MOC_LITERAL(11, 116, 10), // "resizeMode"
QT_MOC_LITERAL(12, 127, 10), // "ResizeMode"
QT_MOC_LITERAL(13, 138, 6), // "status"
QT_MOC_LITERAL(14, 145, 6), // "Status"
QT_MOC_LITERAL(15, 152, 6), // "source"
QT_MOC_LITERAL(16, 159, 20), // "SizeViewToRootObject"
QT_MOC_LITERAL(17, 180, 20), // "SizeRootObjectToView"
QT_MOC_LITERAL(18, 201, 4), // "Null"
QT_MOC_LITERAL(19, 206, 5), // "Ready"
QT_MOC_LITERAL(20, 212, 7), // "Loading"
QT_MOC_LITERAL(21, 220, 5) // "Error"

    },
    "QQuickView\0statusChanged\0\0QQuickView::Status\0"
    "setSource\0setContent\0url\0QQmlComponent*\0"
    "component\0item\0continueExecute\0"
    "resizeMode\0ResizeMode\0status\0Status\0"
    "source\0SizeViewToRootObject\0"
    "SizeRootObjectToView\0Null\0Ready\0Loading\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   48, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       5,    3,   40,    2, 0x0a /* Public */,
      10,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 7, QMetaType::QObjectStar,    6,    8,    9,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x0009510b,
      13, 0x80000000 | 14, 0x00495009,
      15, QMetaType::QUrl, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
      12, 0x0,    2,   68,
      14, 0x0,    4,   72,

 // enum data: key, value
      16, uint(QQuickView::SizeViewToRootObject),
      17, uint(QQuickView::SizeRootObjectToView),
      18, uint(QQuickView::Null),
      19, uint(QQuickView::Ready),
      20, uint(QQuickView::Loading),
      21, uint(QQuickView::Error),

       0        // eod
};

void QQuickView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickView *_t = static_cast<QQuickView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QQuickView::Status(*)>(_a[1]))); break;
        case 1: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->setContent((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QQmlComponent*(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 3: _t->continueExecute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickView::*_t)(QQuickView::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickView::statusChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickView *_t = static_cast<QQuickView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ResizeMode*>(_v) = _t->resizeMode(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickView *_t = static_cast<QQuickView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 2: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickView::staticMetaObject = {
    { &QQuickWindow::staticMetaObject, qt_meta_stringdata_QQuickView.data,
      qt_meta_data_QQuickView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickView.stringdata0))
        return static_cast<void*>(this);
    return QQuickWindow::qt_metacast(_clname);
}

int QQuickView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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

// SIGNAL 0
void QQuickView::statusChanged(QQuickView::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
