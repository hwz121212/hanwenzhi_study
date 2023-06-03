/****************************************************************************
** Meta object code from reading C++ file 'qquickwindowmodule_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickwindowmodule_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwindowmodule_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWindowQmlImpl_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWindowQmlImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWindowQmlImpl_t qt_meta_stringdata_QQuickWindowQmlImpl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickWindowQmlImpl"
QT_MOC_LITERAL(1, 20, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "arg"
QT_MOC_LITERAL(4, 40, 17), // "visibilityChanged"
QT_MOC_LITERAL(5, 58, 19), // "QWindow::Visibility"
QT_MOC_LITERAL(6, 78, 10), // "visibility"
QT_MOC_LITERAL(7, 89, 13), // "screenChanged"
QT_MOC_LITERAL(8, 103, 19), // "setWindowVisibility"
QT_MOC_LITERAL(9, 123, 7), // "visible"
QT_MOC_LITERAL(10, 131, 10), // "Visibility"
QT_MOC_LITERAL(11, 142, 6) // "screen"

    },
    "QQuickWindowQmlImpl\0visibleChanged\0\0"
    "arg\0visibilityChanged\0QWindow::Visibility\0"
    "visibility\0screenChanged\0setWindowVisibility\0"
    "visible\0Visibility\0screen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWindowQmlImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   38,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       7,    0,   44,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       2,

 // slots: revision
       0,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495103,
       6, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::QObjectStar, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // properties: revision
       0,
       0,
       2,

       0        // eod
};

void QQuickWindowQmlImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWindowQmlImpl *_t = static_cast<QQuickWindowQmlImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->visibilityChanged((*reinterpret_cast< QWindow::Visibility(*)>(_a[1]))); break;
        case 2: _t->screenChanged(); break;
        case 3: _t->setWindowVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWindowQmlImpl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowQmlImpl::visibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWindowQmlImpl::*_t)(QWindow::Visibility );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowQmlImpl::visibilityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickWindowQmlImpl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWindowQmlImpl::screenChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWindowQmlImpl *_t = static_cast<QQuickWindowQmlImpl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 1: *reinterpret_cast< Visibility*>(_v) = _t->visibility(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->screen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWindowQmlImpl *_t = static_cast<QQuickWindowQmlImpl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 2: _t->setScreen(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWindowQmlImpl::staticMetaObject = {
    { &QQuickWindow::staticMetaObject, qt_meta_stringdata_QQuickWindowQmlImpl.data,
      qt_meta_data_QQuickWindowQmlImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWindowQmlImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWindowQmlImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWindowQmlImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QQuickWindow::qt_metacast(_clname);
}

int QQuickWindowQmlImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickWindowQmlImpl::visibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickWindowQmlImpl::visibilityChanged(QWindow::Visibility _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickWindowQmlImpl::screenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
