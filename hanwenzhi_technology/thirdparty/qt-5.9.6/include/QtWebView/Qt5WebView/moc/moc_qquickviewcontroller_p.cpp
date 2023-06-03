/****************************************************************************
** Meta object code from reading C++ file 'qquickviewcontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebView/private/qquickviewcontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickviewcontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickViewController_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickViewController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickViewController_t qt_meta_stringdata_QQuickViewController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickViewController"
QT_MOC_LITERAL(1, 21, 15), // "onWindowChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "QQuickWindow*"
QT_MOC_LITERAL(4, 52, 6), // "window"
QT_MOC_LITERAL(5, 59, 16), // "onVisibleChanged"
QT_MOC_LITERAL(6, 76, 20), // "scheduleUpdatePolish"
QT_MOC_LITERAL(7, 97, 23) // "onSceneGraphInvalidated"

    },
    "QQuickViewController\0onWindowChanged\0"
    "\0QQuickWindow*\0window\0onVisibleChanged\0"
    "scheduleUpdatePolish\0onSceneGraphInvalidated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickViewController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QQuickViewController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickViewController *_t = static_cast<QQuickViewController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onWindowChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 1: _t->onVisibleChanged(); break;
        case 2: _t->scheduleUpdatePolish(); break;
        case 3: _t->onSceneGraphInvalidated(); break;
        default: ;
        }
    }
}

const QMetaObject QQuickViewController::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickViewController.data,
      qt_meta_data_QQuickViewController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickViewController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickViewController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickViewController.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickViewController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
