/****************************************************************************
** Meta object code from reading C++ file 'qquickdelaybutton_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickdelaybutton_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdelaybutton_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDelayButton_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDelayButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDelayButton_t qt_meta_stringdata_QQuickDelayButton = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickDelayButton"
QT_MOC_LITERAL(1, 18, 9), // "activated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "delayChanged"
QT_MOC_LITERAL(4, 42, 15), // "progressChanged"
QT_MOC_LITERAL(5, 58, 17), // "transitionChanged"
QT_MOC_LITERAL(6, 76, 5), // "delay"
QT_MOC_LITERAL(7, 82, 8), // "progress"
QT_MOC_LITERAL(8, 91, 10), // "transition"
QT_MOC_LITERAL(9, 102, 17) // "QQuickTransition*"

    },
    "QQuickDelayButton\0activated\0\0delayChanged\0"
    "progressChanged\0transitionChanged\0"
    "delay\0progress\0transition\0QQuickTransition*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDelayButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495903,
       7, QMetaType::QReal, 0x00495903,
       8, 0x80000000 | 9, 0x0049590b,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

void QQuickDelayButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDelayButton *_t = static_cast<QQuickDelayButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->delayChanged(); break;
        case 2: _t->progressChanged(); break;
        case 3: _t->transitionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDelayButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDelayButton::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDelayButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDelayButton::delayChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDelayButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDelayButton::progressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDelayButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDelayButton::transitionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDelayButton *_t = static_cast<QQuickDelayButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->delay(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 2: *reinterpret_cast< QQuickTransition**>(_v) = _t->transition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDelayButton *_t = static_cast<QQuickDelayButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setTransition(*reinterpret_cast< QQuickTransition**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickDelayButton::staticMetaObject = {
    { &QQuickAbstractButton::staticMetaObject, qt_meta_stringdata_QQuickDelayButton.data,
      qt_meta_data_QQuickDelayButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDelayButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDelayButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDelayButton.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractButton::qt_metacast(_clname);
}

int QQuickDelayButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractButton::qt_metacall(_c, _id, _a);
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
void QQuickDelayButton::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDelayButton::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDelayButton::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDelayButton::transitionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
