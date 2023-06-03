/****************************************************************************
** Meta object code from reading C++ file 'qquickwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWidget_t {
    QByteArrayData data[29];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWidget_t qt_meta_stringdata_QQuickWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickWidget"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "QQuickWidget::Status"
QT_MOC_LITERAL(4, 49, 15), // "sceneGraphError"
QT_MOC_LITERAL(5, 65, 29), // "QQuickWindow::SceneGraphError"
QT_MOC_LITERAL(6, 95, 5), // "error"
QT_MOC_LITERAL(7, 101, 7), // "message"
QT_MOC_LITERAL(8, 109, 9), // "setSource"
QT_MOC_LITERAL(9, 119, 10), // "setContent"
QT_MOC_LITERAL(10, 130, 3), // "url"
QT_MOC_LITERAL(11, 134, 14), // "QQmlComponent*"
QT_MOC_LITERAL(12, 149, 9), // "component"
QT_MOC_LITERAL(13, 159, 4), // "item"
QT_MOC_LITERAL(14, 164, 15), // "continueExecute"
QT_MOC_LITERAL(15, 180, 23), // "createFramebufferObject"
QT_MOC_LITERAL(16, 204, 24), // "destroyFramebufferObject"
QT_MOC_LITERAL(17, 229, 13), // "triggerUpdate"
QT_MOC_LITERAL(18, 243, 10), // "resizeMode"
QT_MOC_LITERAL(19, 254, 10), // "ResizeMode"
QT_MOC_LITERAL(20, 265, 6), // "status"
QT_MOC_LITERAL(21, 272, 6), // "Status"
QT_MOC_LITERAL(22, 279, 6), // "source"
QT_MOC_LITERAL(23, 286, 20), // "SizeViewToRootObject"
QT_MOC_LITERAL(24, 307, 20), // "SizeRootObjectToView"
QT_MOC_LITERAL(25, 328, 4), // "Null"
QT_MOC_LITERAL(26, 333, 5), // "Ready"
QT_MOC_LITERAL(27, 339, 7), // "Loading"
QT_MOC_LITERAL(28, 347, 5) // "Error"

    },
    "QQuickWidget\0statusChanged\0\0"
    "QQuickWidget::Status\0sceneGraphError\0"
    "QQuickWindow::SceneGraphError\0error\0"
    "message\0setSource\0setContent\0url\0"
    "QQmlComponent*\0component\0item\0"
    "continueExecute\0createFramebufferObject\0"
    "destroyFramebufferObject\0triggerUpdate\0"
    "resizeMode\0ResizeMode\0status\0Status\0"
    "source\0SizeViewToRootObject\0"
    "SizeRootObjectToView\0Null\0Ready\0Loading\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   76, // properties
       2,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x0a /* Public */,
       9,    3,   65,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x08 /* Private */,
      15,    0,   73,    2, 0x08 /* Private */,
      16,    0,   74,    2, 0x08 /* Private */,
      17,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 11, QMetaType::QObjectStar,   10,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x0009510b,
      20, 0x80000000 | 21, 0x00495009,
      22, QMetaType::QUrl, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
      19, 0x0,    2,   96,
      21, 0x0,    4,  100,

 // enum data: key, value
      23, uint(QQuickWidget::SizeViewToRootObject),
      24, uint(QQuickWidget::SizeRootObjectToView),
      25, uint(QQuickWidget::Null),
      26, uint(QQuickWidget::Ready),
      27, uint(QQuickWidget::Loading),
      28, uint(QQuickWidget::Error),

       0        // eod
};

void QQuickWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWidget *_t = static_cast<QQuickWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QQuickWidget::Status(*)>(_a[1]))); break;
        case 1: _t->sceneGraphError((*reinterpret_cast< QQuickWindow::SceneGraphError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->setContent((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QQmlComponent*(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 4: _t->continueExecute(); break;
        case 5: _t->createFramebufferObject(); break;
        case 6: _t->destroyFramebufferObject(); break;
        case 7: _t->triggerUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWidget::*_t)(QQuickWidget::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWidget::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWidget::*_t)(QQuickWindow::SceneGraphError , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWidget::sceneGraphError)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWidget *_t = static_cast<QQuickWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ResizeMode*>(_v) = _t->resizeMode(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWidget *_t = static_cast<QQuickWidget *>(_o);
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

const QMetaObject QQuickWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QQuickWidget.data,
      qt_meta_data_QQuickWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QQuickWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QQuickWidget::statusChanged(QQuickWidget::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickWidget::sceneGraphError(QQuickWindow::SceneGraphError _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
