/****************************************************************************
** Meta object code from reading C++ file 'qquickscrollview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickscrollview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickscrollview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickScrollView_t {
    QByteArrayData data[12];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScrollView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScrollView_t qt_meta_stringdata_QQuickScrollView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickScrollView"
QT_MOC_LITERAL(1, 17, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 33, 11), // "contentData"
QT_MOC_LITERAL(3, 45, 19), // "contentWidthChanged"
QT_MOC_LITERAL(4, 65, 0), // ""
QT_MOC_LITERAL(5, 66, 20), // "contentHeightChanged"
QT_MOC_LITERAL(6, 87, 22), // "contentChildrenChanged"
QT_MOC_LITERAL(7, 110, 12), // "contentWidth"
QT_MOC_LITERAL(8, 123, 13), // "contentHeight"
QT_MOC_LITERAL(9, 137, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(10, 163, 15), // "contentChildren"
QT_MOC_LITERAL(11, 179, 28) // "QQmlListProperty<QQuickItem>"

    },
    "QQuickScrollView\0DefaultProperty\0"
    "contentData\0contentWidthChanged\0\0"
    "contentHeightChanged\0contentChildrenChanged\0"
    "contentWidth\0contentHeight\0"
    "QQmlListProperty<QObject>\0contentChildren\0"
    "QQmlListProperty<QQuickItem>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScrollView[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495903,
       8, QMetaType::QReal, 0x00495903,
       2, 0x80000000 | 9, 0x00095809,
      10, 0x80000000 | 11, 0x00495809,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,

       0        // eod
};

void QQuickScrollView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickScrollView *_t = static_cast<QQuickScrollView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentWidthChanged(); break;
        case 1: _t->contentHeightChanged(); break;
        case 2: _t->contentChildrenChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickScrollView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollView::contentWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickScrollView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollView::contentHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickScrollView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollView::contentChildrenChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickScrollView *_t = static_cast<QQuickScrollView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->contentWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->contentHeight(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->contentChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickScrollView *_t = static_cast<QQuickScrollView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setContentHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickScrollView::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickScrollView.data,
      qt_meta_data_QQuickScrollView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScrollView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScrollView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScrollView.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickScrollView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
void QQuickScrollView::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickScrollView::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickScrollView::contentChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
