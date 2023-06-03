/****************************************************************************
** Meta object code from reading C++ file 'qquickswipeview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickswipeview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickswipeview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSwipeView_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSwipeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSwipeView_t qt_meta_stringdata_QQuickSwipeView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickSwipeView"
QT_MOC_LITERAL(1, 16, 18), // "interactiveChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "orientationChanged"
QT_MOC_LITERAL(4, 55, 11), // "interactive"
QT_MOC_LITERAL(5, 67, 11), // "orientation"
QT_MOC_LITERAL(6, 79, 15) // "Qt::Orientation"

    },
    "QQuickSwipeView\0interactiveChanged\0\0"
    "orientationChanged\0interactive\0"
    "orientation\0Qt::Orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSwipeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   26,    2, 0x86 /* Public | MethodRevisioned */,
       3,    0,   27,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       1,
       2,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00c95903,
       5, 0x80000000 | 6, 0x00c9590b,

 // properties: notify_signal_id
       0,
       1,

 // properties: revision
       1,
       2,

       0        // eod
};

void QQuickSwipeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSwipeView *_t = static_cast<QQuickSwipeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interactiveChanged(); break;
        case 1: _t->orientationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSwipeView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeView::interactiveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSwipeView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeView::orientationChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSwipeView *_t = static_cast<QQuickSwipeView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSwipeView *_t = static_cast<QQuickSwipeView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickSwipeView::staticMetaObject = {
    { &QQuickContainer::staticMetaObject, qt_meta_stringdata_QQuickSwipeView.data,
      qt_meta_data_QQuickSwipeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSwipeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSwipeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSwipeView.stringdata0))
        return static_cast<void*>(this);
    return QQuickContainer::qt_metacast(_clname);
}

int QQuickSwipeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickContainer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QQuickSwipeView::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickSwipeView::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QQuickSwipeViewAttached_t {
    QByteArrayData data[13];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSwipeViewAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSwipeViewAttached_t qt_meta_stringdata_QQuickSwipeViewAttached = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickSwipeViewAttached"
QT_MOC_LITERAL(1, 24, 12), // "indexChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "isCurrentItemChanged"
QT_MOC_LITERAL(4, 59, 11), // "viewChanged"
QT_MOC_LITERAL(5, 71, 17), // "isNextItemChanged"
QT_MOC_LITERAL(6, 89, 21), // "isPreviousItemChanged"
QT_MOC_LITERAL(7, 111, 5), // "index"
QT_MOC_LITERAL(8, 117, 13), // "isCurrentItem"
QT_MOC_LITERAL(9, 131, 4), // "view"
QT_MOC_LITERAL(10, 136, 16), // "QQuickSwipeView*"
QT_MOC_LITERAL(11, 153, 10), // "isNextItem"
QT_MOC_LITERAL(12, 164, 14) // "isPreviousItem"

    },
    "QQuickSwipeViewAttached\0indexChanged\0"
    "\0isCurrentItemChanged\0viewChanged\0"
    "isNextItemChanged\0isPreviousItemChanged\0"
    "index\0isCurrentItem\0view\0QQuickSwipeView*\0"
    "isNextItem\0isPreviousItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSwipeViewAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495801,
       8, QMetaType::Bool, 0x00495801,
       9, 0x80000000 | 10, 0x00495809,
      11, QMetaType::Bool, 0x00c95801,
      12, QMetaType::Bool, 0x00c95801,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // properties: revision
       0,
       0,
       0,
       1,
       1,

       0        // eod
};

void QQuickSwipeViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSwipeViewAttached *_t = static_cast<QQuickSwipeViewAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->isCurrentItemChanged(); break;
        case 2: _t->viewChanged(); break;
        case 3: _t->isNextItemChanged(); break;
        case 4: _t->isPreviousItemChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSwipeViewAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeViewAttached::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSwipeViewAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeViewAttached::isCurrentItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickSwipeViewAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeViewAttached::viewChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickSwipeViewAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeViewAttached::isNextItemChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickSwipeViewAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSwipeViewAttached::isPreviousItemChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickSwipeView* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSwipeViewAttached *_t = static_cast<QQuickSwipeViewAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isCurrentItem(); break;
        case 2: *reinterpret_cast< QQuickSwipeView**>(_v) = _t->view(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isNextItem(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isPreviousItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickSwipeViewAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickSwipeViewAttached.data,
      qt_meta_data_QQuickSwipeViewAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSwipeViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSwipeViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSwipeViewAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickSwipeViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickSwipeViewAttached::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickSwipeViewAttached::isCurrentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickSwipeViewAttached::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickSwipeViewAttached::isNextItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickSwipeViewAttached::isPreviousItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
