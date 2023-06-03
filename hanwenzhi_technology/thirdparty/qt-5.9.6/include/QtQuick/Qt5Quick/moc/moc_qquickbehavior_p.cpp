/****************************************************************************
** Meta object code from reading C++ file 'qquickbehavior_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickbehavior_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickbehavior_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickBehavior_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickBehavior_t qt_meta_stringdata_QQuickBehavior = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickBehavior"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 9), // "animation"
QT_MOC_LITERAL(3, 41, 21), // "DeferredPropertyNames"
QT_MOC_LITERAL(4, 63, 14), // "enabledChanged"
QT_MOC_LITERAL(5, 78, 0), // ""
QT_MOC_LITERAL(6, 79, 18), // "componentFinalized"
QT_MOC_LITERAL(7, 98, 24), // "QQuickAbstractAnimation*"
QT_MOC_LITERAL(8, 123, 7) // "enabled"

    },
    "QQuickBehavior\0DefaultProperty\0animation\0"
    "DeferredPropertyNames\0enabledChanged\0"
    "\0componentFinalized\0QQuickAbstractAnimation*\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickBehavior[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    2,

 // signals: name, argc, parameters, tag, flags
       4,    0,   28,    5, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   29,    5, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void QQuickBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickBehavior *_t = static_cast<QQuickBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->componentFinalized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickBehavior::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBehavior::enabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickBehavior *_t = static_cast<QQuickBehavior *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickAbstractAnimation**>(_v) = _t->animation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickBehavior *_t = static_cast<QQuickBehavior *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimation(*reinterpret_cast< QQuickAbstractAnimation**>(_v)); break;
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickBehavior.data,
      qt_meta_data_QQuickBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickBehavior.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlPropertyValueInterceptor"))
        return static_cast< QQmlPropertyValueInterceptor*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlPropertyValueInterceptor"))
        return static_cast< QQmlPropertyValueInterceptor*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickBehavior::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
