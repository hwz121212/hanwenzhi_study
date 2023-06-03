/****************************************************************************
** Meta object code from reading C++ file 'qquickexclusivegroup_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickexclusivegroup_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickexclusivegroup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickExclusiveGroup1_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickExclusiveGroup1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickExclusiveGroup1_t qt_meta_stringdata_QQuickExclusiveGroup1 = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickExclusiveGroup1"
QT_MOC_LITERAL(1, 22, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 38, 9), // "__actions"
QT_MOC_LITERAL(3, 48, 14), // "currentChanged"
QT_MOC_LITERAL(4, 63, 0), // ""
QT_MOC_LITERAL(5, 64, 13), // "bindCheckable"
QT_MOC_LITERAL(6, 78, 1), // "o"
QT_MOC_LITERAL(7, 80, 15), // "unbindCheckable"
QT_MOC_LITERAL(8, 96, 13), // "updateCurrent"
QT_MOC_LITERAL(9, 110, 7), // "current"
QT_MOC_LITERAL(10, 118, 31) // "QQmlListProperty<QQuickAction1>"

    },
    "QQuickExclusiveGroup1\0DefaultProperty\0"
    "__actions\0currentChanged\0\0bindCheckable\0"
    "o\0unbindCheckable\0updateCurrent\0current\0"
    "QQmlListProperty<QQuickAction1>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickExclusiveGroup1[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    4, 0x0a /* Public */,
       7,    1,   40,    4, 0x0a /* Public */,
       8,    0,   43,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QObjectStar, 0x00495103,
       2, 0x80000000 | 10, 0x00095009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void QQuickExclusiveGroup1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickExclusiveGroup1 *_t = static_cast<QQuickExclusiveGroup1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged(); break;
        case 1: _t->bindCheckable((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->unbindCheckable((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->updateCurrent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickExclusiveGroup1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickExclusiveGroup1::currentChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickExclusiveGroup1 *_t = static_cast<QQuickExclusiveGroup1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->current(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickAction1>*>(_v) = _t->actions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickExclusiveGroup1 *_t = static_cast<QQuickExclusiveGroup1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrent(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickExclusiveGroup1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickExclusiveGroup1.data,
      qt_meta_data_QQuickExclusiveGroup1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickExclusiveGroup1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickExclusiveGroup1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickExclusiveGroup1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickExclusiveGroup1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickExclusiveGroup1::currentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
