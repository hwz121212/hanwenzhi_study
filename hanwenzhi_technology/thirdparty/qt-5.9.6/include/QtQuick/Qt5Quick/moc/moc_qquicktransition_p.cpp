/****************************************************************************
** Meta object code from reading C++ file 'qquicktransition_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquicktransition_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktransition_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTransition_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTransition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTransition_t qt_meta_stringdata_QQuickTransition = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickTransition"
QT_MOC_LITERAL(1, 17, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 33, 10), // "animations"
QT_MOC_LITERAL(3, 44, 21), // "DeferredPropertyNames"
QT_MOC_LITERAL(4, 66, 11), // "fromChanged"
QT_MOC_LITERAL(5, 78, 0), // ""
QT_MOC_LITERAL(6, 79, 9), // "toChanged"
QT_MOC_LITERAL(7, 89, 17), // "reversibleChanged"
QT_MOC_LITERAL(8, 107, 14), // "enabledChanged"
QT_MOC_LITERAL(9, 122, 14), // "runningChanged"
QT_MOC_LITERAL(10, 137, 4), // "from"
QT_MOC_LITERAL(11, 142, 2), // "to"
QT_MOC_LITERAL(12, 145, 10), // "reversible"
QT_MOC_LITERAL(13, 156, 7), // "running"
QT_MOC_LITERAL(14, 164, 41), // "QQmlListProperty<QQuickAbstra..."
QT_MOC_LITERAL(15, 206, 7) // "enabled"

    },
    "QQuickTransition\0DefaultProperty\0"
    "animations\0DeferredPropertyNames\0"
    "fromChanged\0\0toChanged\0reversibleChanged\0"
    "enabledChanged\0runningChanged\0from\0"
    "to\0reversible\0running\0"
    "QQmlListProperty<QQuickAbstractAnimation>\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTransition[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       6,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    2,

 // signals: name, argc, parameters, tag, flags
       4,    0,   43,    5, 0x06 /* Public */,
       6,    0,   44,    5, 0x06 /* Public */,
       7,    0,   45,    5, 0x06 /* Public */,
       8,    0,   46,    5, 0x06 /* Public */,
       9,    0,   47,    5, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495003,
      11, QMetaType::QString, 0x00495003,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
       2, 0x80000000 | 14, 0x00095009,
      15, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       0,
       3,

       0        // eod
};

void QQuickTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTransition *_t = static_cast<QQuickTransition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->toChanged(); break;
        case 2: _t->reversibleChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->runningChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickTransition::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTransition::fromChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTransition::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTransition::toChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickTransition::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTransition::reversibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickTransition::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTransition::enabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickTransition::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTransition::runningChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTransition *_t = static_cast<QQuickTransition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fromState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->toState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->reversible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QQuickAbstractAnimation>*>(_v) = _t->animations(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTransition *_t = static_cast<QQuickTransition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFromState(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setToState(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setReversible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickTransition.data,
      qt_meta_data_QQuickTransition,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTransition.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickTransition::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickTransition::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickTransition::reversibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickTransition::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickTransition::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
