/****************************************************************************
** Meta object code from reading C++ file 'zoomwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/zoomwidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ZoomMenu_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ZoomMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ZoomMenu_t qt_meta_stringdata_qdesigner_internal__ZoomMenu = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qdesigner_internal::ZoomMenu"
QT_MOC_LITERAL(1, 29, 11), // "zoomChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "setZoom"
QT_MOC_LITERAL(4, 50, 7), // "percent"
QT_MOC_LITERAL(5, 58, 12), // "slotZoomMenu"
QT_MOC_LITERAL(6, 71, 8) // "QAction*"

    },
    "qdesigner_internal::ZoomMenu\0zoomChanged\0"
    "\0setZoom\0percent\0slotZoomMenu\0QAction*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ZoomMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void qdesigner_internal::ZoomMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomMenu *_t = static_cast<ZoomMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotZoomMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ZoomMenu::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomMenu::zoomChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ZoomMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomMenu.data,
      qt_meta_data_qdesigner_internal__ZoomMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ZoomMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ZoomMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::ZoomMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ZoomMenu::zoomChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__ZoomView_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ZoomView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ZoomView_t qt_meta_stringdata_qdesigner_internal__ZoomView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qdesigner_internal::ZoomView"
QT_MOC_LITERAL(1, 29, 7), // "setZoom"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "percent"
QT_MOC_LITERAL(4, 46, 15), // "showContextMenu"
QT_MOC_LITERAL(5, 62, 9), // "globalPos"
QT_MOC_LITERAL(6, 72, 4), // "zoom"
QT_MOC_LITERAL(7, 77, 22) // "zoomContextMenuEnabled"

    },
    "qdesigner_internal::ZoomView\0setZoom\0"
    "\0percent\0showContextMenu\0globalPos\0"
    "zoom\0zoomContextMenuEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ZoomView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QPoint,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qdesigner_internal::ZoomView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomView *_t = static_cast<ZoomView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ZoomView *_t = static_cast<ZoomView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->zoom(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isZoomContextMenuEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ZoomView *_t = static_cast<ZoomView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setZoom(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setZoomContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject qdesigner_internal::ZoomView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomView.data,
      qt_meta_data_qdesigner_internal__ZoomView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ZoomView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ZoomView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int qdesigner_internal::ZoomView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__ZoomWidget_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ZoomWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ZoomWidget_t qt_meta_stringdata_qdesigner_internal__ZoomWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qdesigner_internal::ZoomWidget"
QT_MOC_LITERAL(1, 31, 4), // "dump"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 28), // "widgetZoomContextMenuEnabled"
QT_MOC_LITERAL(4, 66, 15) // "itemAcceptDrops"

    },
    "qdesigner_internal::ZoomWidget\0dump\0"
    "\0widgetZoomContextMenuEnabled\0"
    "itemAcceptDrops"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ZoomWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095103,
       4, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qdesigner_internal::ZoomWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomWidget *_t = static_cast<ZoomWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dump(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ZoomWidget *_t = static_cast<ZoomWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isWidgetZoomContextMenuEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->itemAcceptDrops(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ZoomWidget *_t = static_cast<ZoomWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidgetZoomContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setItemAcceptDrops(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::ZoomWidget::staticMetaObject = {
    { &ZoomView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ZoomWidget.data,
      qt_meta_data_qdesigner_internal__ZoomWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ZoomWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ZoomWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ZoomWidget.stringdata0))
        return static_cast<void*>(this);
    return ZoomView::qt_metacast(_clname);
}

int qdesigner_internal::ZoomWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomView::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
